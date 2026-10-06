/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096a3b24; end: 1096a3b97;  */

long * FUN_1096a3b24(long *param_1)

{
  long lVar1;
  
  func_0x0001096a3b5c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096a3b98; end: 1096a3d13;  */

long * FUN_1096a3b98(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x800;
  }
  else {
    if (uVar2 != 2) goto LAB_1096a3c14;
    lVar3 = 0x1000;
  }
  param_1[4] = lVar3;
LAB_1096a3c14:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  func_0x00010538fd74();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096a3d14; end: 1096a3e03;  */

void FUN_1096a3d14(undefined8 param_1,ulong param_2)

{
  undefined8 ****ppppuVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 ***pppuStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  puVar2 = PTR___DefaultRuneLocale_11034bcf8;
  pppuStack_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  uStack_38 = 0;
  while( true ) {
    uVar5 = param_2;
    FUN_1096a4c8c();
    uVar3 = (uint)uVar5;
    if ((int)uVar3 < 0) {
      ___maskrune(uVar5,0x4000);
      uVar4 = (uint)uVar5;
    }
    else {
      uVar4 = *(uint *)(puVar2 + (uVar5 & 0xffffffff) * 4 + 0x3c) & 0x4000;
    }
    if (((uVar4 != 0) || (uVar3 == 0x2f)) || ((uVar3 & 0xff) == 0x3e)) break;
    uVar5 = param_2;
    func_0x0001096a4d18(param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (&pppuStack_48,uVar5);
  }
  uVar5 = uStack_40;
  ppppuVar1 = (undefined8 ****)pppuStack_48;
  if (-1 < (long)uStack_38) {
    uVar5 = uStack_38 >> 0x38;
    ppppuVar1 = &pppuStack_48;
  }
  FUN_109697928(param_1,ppppuVar1,uVar5);
  if ((long)uStack_38 < 0) {
    __ZdlPv(pppuStack_48);
  }
  return;
}



/* Entry: 1096a3e04; end: 1096a3e63;  */

void FUN_1096a3e04(long param_1,long param_2)

{
  long lVar1;
  undefined1 uStack_31;
  
  lVar1 = param_2;
  _strlen();
  if (lVar1 != 0) {
    do {
      uStack_31 = *(undefined1 *)(param_2 + -1 + lVar1);
      func_0x00010538e93c(param_1 + 8,&uStack_31);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 1096a3e64; end: 1096a42a7;  */

undefined ***** FUN_1096a3e64(undefined ***param_1,undefined *****param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined ***pppuVar7;
  undefined ****ppppuVar8;
  undefined ******ppppppuVar9;
  char *pcVar10;
  ulong uVar11;
  undefined *****pppppuVar12;
  undefined *****pppppuVar13;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  undefined ****ppppuStack_d8;
  undefined **ppuStack_d0;
  undefined ****ppppuStack_c8;
  undefined **ppuStack_c0;
  undefined ****ppppuStack_b8;
  undefined **ppuStack_a8;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7 = param_1;
  pcVar10 = (char *)param_2;
  func_0x0001096a3c30();
  if ((int)pppuVar7 == 0) {
    pppppuVar12 = (undefined *****)0x0;
    goto LAB_1096a41b8;
  }
  FUN_1096a3d14(&ppuStack_a8,param_1);
  ppppuStack_b8 = ppppuStack_a0;
  if ((undefined *****)ppppuStack_a0 != (undefined *****)0x0) {
    pppppuVar12 = (undefined *****)(ppppuStack_a0 + -1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppppuVar12,0x10);
      if (bVar2) {
        *(int *)pppppuVar12 = *(int *)pppppuVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_c0 = &PTR_FUN_110b00af0;
  while( true ) {
    FUN_1096a42a8(&pppppuStack_98,param_1);
    uVar11 = uStack_90;
    ppppppuVar9 = (undefined ******)pppppuStack_98;
    if (-1 < (char)bStack_81) {
      uVar11 = (ulong)bStack_81;
      ppppppuVar9 = &pppppuStack_98;
    }
    FUN_109697928(&pppuStack_e8,ppppppuVar9,uVar11);
    if ((char)bStack_81 < '\0') {
      __ZdlPv(pppppuStack_98);
    }
    uVar11 = (ulong)*(char *)((long)pppuStack_e0 + 0x1f);
    if ((long)uVar11 < 0) {
      uVar11 = (ulong)*(uint *)(pppuStack_e0 + 2);
    }
    if ((int)uVar11 == 0) break;
    pppuVar7 = param_1;
    pcVar10 = "=";
    FUN_1096a43c0();
    if (((ulong)pppuVar7 & 1) == 0) goto LAB_1096a40e0;
    FUN_1096a4474(&pppppuStack_98,param_1);
    func_0x0001096956c0(param_2,&pppuStack_e8,&pppppuStack_98);
    func_0x000107c2ace8(&ppuStack_d0);
    if (*(char *)((long)ppppuStack_c8 + 0x1f) < '\0') {
      ppppuStack_c8[2] = (undefined ***)0x4;
      pppppuVar12 = (undefined *****)ppppuStack_c8[1];
    }
    else {
      pppppuVar12 = (undefined *****)(ppppuStack_c8 + 1);
      *(undefined1 *)((long)ppppuStack_c8 + 0x1f) = 4;
    }
    *(undefined4 *)pppppuVar12 = 0x656d614e;
    *(undefined1 *)((long)pppppuVar12 + 4) = 0;
    ppppuVar8 = &pppuStack_e8;
    FUN_109697c4c(ppppuVar8,&ppuStack_d0);
    ppuStack_d0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_d0);
    if ((int)ppppuVar8 == 0) {
      ppppppuVar9 = &pppppuStack_98;
      ___dynamic_cast(ppppppuVar9,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
      if (ppppppuVar9 == (undefined ******)0x0) {
        func_0x000107c2acdc();
      }
      pppppuVar12 = ppppppuVar9[1];
      if (pppppuVar12 != (undefined *****)0x0) {
        pppppuVar13 = pppppuVar12 + -1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
          if (bVar2) {
            *(int *)pppppuVar13 = *(int *)pppppuVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppppuStack_c8 = ppppuStack_b8;
      ppuStack_c0 = &PTR_FUN_110b00af0;
      ppuStack_d0 = &PTR_FUN_110b01d60;
      ppppuStack_b8 = (undefined ****)pppppuVar12;
      func_0x000107c2acd4(&ppuStack_d0);
    }
    pppppuStack_98 = (undefined *****)&PTR_FUN_110b01d60;
    func_0x000107c2acd4(&pppppuStack_98);
    pppuStack_e8 = (undefined ***)&PTR_FUN_110b01d60;
    func_0x000107c2acd4(&pppuStack_e8);
  }
  pppuStack_e8 = (undefined ***)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&pppuStack_e8);
  pppuStack_e8 = &ppuStack_c0;
  pcVar10 = &UNK_10f57c28e;
  pppuVar7 = param_1;
  pppuStack_e0 = param_1;
  ppppuStack_d8 = (undefined ****)param_2;
  FUN_1096a43c0();
  if ((int)pppuVar7 != 0) {
    if ((undefined *****)ppppuStack_b8 != (undefined *****)0x0) {
      pppppuVar12 = (undefined *****)(ppppuStack_b8 + 1);
      if (*(char *)((long)ppppuStack_b8 + 0x1f) < '\0') {
        pppppuVar12 = (undefined *****)*pppppuVar12;
      }
      func_0x000107c31940(&pppppuStack_98,pppppuVar12);
      FUN_1096a4fc4(param_1 + 7,&pppppuStack_98,&pppppuStack_98,param_2);
      if ((char)bStack_81 < '\0') {
        __ZdlPv(pppppuStack_98);
      }
      pcVar10 = (char *)0x11382a930;
      FUN_109693ff4(param_2,0x11382a930,&ppuStack_c0);
    }
    goto LAB_1096a40d8;
  }
  pcVar10 = ">";
  pppuVar7 = param_1;
  FUN_1096a43c0();
  if ((int)pppuVar7 == 0) goto LAB_1096a419c;
  while( true ) {
    func_0x000107c2acc8(&pppppuStack_98);
    pppuVar7 = param_1;
    FUN_1096a3e64(param_1,&pppppuStack_98);
    if ((int)pppuVar7 == 0) break;
    func_0x0001096955d4(param_2[1] + 1,&pppppuStack_98);
    pppppuStack_98 = (undefined *****)&PTR_FUN_110b01d60;
    func_0x000107c2acd4(&pppppuStack_98);
  }
  pppppuStack_98 = (undefined *****)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&pppppuStack_98);
  pcVar10 = &UNK_10f57c291;
  pppuVar7 = param_1;
  FUN_1096a43c0();
  if ((int)pppuVar7 == 0) {
LAB_1096a419c:
    pppppuVar12 = (undefined *****)0x0;
  }
  else {
    pcVar10 = (char *)(ppppuStack_a0 + 1);
    if (*(char *)((long)ppppuStack_a0 + 0x1f) < '\0') {
      pcVar10 = *(char **)pcVar10;
    }
    pppuVar7 = param_1;
    FUN_1096a43c0();
    if ((int)pppuVar7 == 0) goto LAB_1096a419c;
    pcVar10 = ">";
    FUN_1096a43c0();
    if ((int)param_1 == 0) goto LAB_1096a419c;
    FUN_1096a4e28(&pppuStack_e8);
LAB_1096a40d8:
    pppppuVar12 = (undefined *****)0x1;
  }
  ppuStack_c0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_c0);
  ppuStack_a8 = &PTR_FUN_110b01d60;
  pppuVar7 = &ppuStack_a8;
  func_0x000107c2acd4();
LAB_1096a41b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if ((int)pcVar10 != 0) {
      func_0x000104bd46a0();
      FUN_109696618(&pppuStack_e8);
      FUN_109696618(&ppuStack_c0);
      FUN_109696618(&ppuStack_a8);
    }
    __Unwind_Resume();
    *pppuVar7 = (undefined **)0x0;
    pppuVar7[1] = (undefined **)0x0;
    pppuVar7[2] = (undefined **)0x0;
    func_0x0001096a4dcc(pcVar10);
    pppppuVar12 = (undefined *****)pcVar10;
    func_0x0001096a4c8c();
    puVar3 = PTR___DefaultRuneLocale_11034bcf8;
    iVar4 = (int)pppppuVar12;
    if (iVar4 < 0) {
      ___maskrune(pppppuVar12,0x100);
    }
    else {
      pppppuVar12 = (undefined *****)
                    (ulong)(*(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                     ((ulong)pppppuVar12 & 0xffffffff) * 4 + 0x3c) & 0x100);
    }
    if ((iVar4 == 0x5f) || ((int)pppppuVar12 != 0)) {
      do {
        pppppuVar12 = (undefined *****)pcVar10;
        func_0x0001096a4d18(pcVar10);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (pppuVar7,pppppuVar12);
        pppppuVar12 = (undefined *****)pcVar10;
        func_0x0001096a4c8c();
        uVar5 = (uint)pppppuVar12;
        if ((int)uVar5 < 0) {
          ___maskrune(pppppuVar12,0x100);
          uVar6 = (uint)pppppuVar12;
        }
        else {
          uVar6 = *(uint *)(puVar3 + ((ulong)pppppuVar12 & 0xffffffff) * 4 + 0x3c) & 0x500;
        }
      } while ((uVar6 != 0) ||
              ((uVar5 = (uVar5 & 0xff) - 0x2e, uVar5 < 0x32 &&
               ((1L << ((ulong)uVar5 & 0x3f) & 0x2000000001001U) != 0))));
    }
    return pppppuVar12;
  }
  return pppppuVar12;
LAB_1096a40e0:
  pppuStack_e8 = (undefined ***)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&pppuStack_e8);
  goto LAB_1096a419c;
}



/* Entry: 1096a42a8; end: 1096a43bf;  */

void FUN_1096a42a8(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001096a4dcc(param_2);
  uVar5 = param_2;
  func_0x0001096a4c8c();
  puVar1 = PTR___DefaultRuneLocale_11034bcf8;
  iVar2 = (int)uVar5;
  if (iVar2 < 0) {
    ___maskrune(uVar5,0x100);
    uVar3 = (uint)uVar5;
  }
  else {
    uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (uVar5 & 0xffffffff) * 4 + 0x3c) & 0x100;
  }
  if ((iVar2 == 0x5f) || (uVar3 != 0)) {
    do {
      uVar5 = param_2;
      func_0x0001096a4d18(param_2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,uVar5);
      uVar5 = param_2;
      func_0x0001096a4c8c();
      uVar3 = (uint)uVar5;
      if ((int)uVar3 < 0) {
        ___maskrune(uVar5,0x100);
        uVar4 = (uint)uVar5;
      }
      else {
        uVar4 = *(uint *)(puVar1 + (uVar5 & 0xffffffff) * 4 + 0x3c) & 0x500;
      }
    } while ((uVar4 != 0) ||
            ((uVar3 = (uVar3 & 0xff) - 0x2e, uVar3 < 0x32 &&
             ((1L << ((ulong)uVar3 & 0x3f) & 0x2000000001001U) != 0))));
  }
  return;
}



/* Entry: 1096a43c0; end: 1096a4473;  */

undefined8 FUN_1096a43c0(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  byte bStack_41;
  
  func_0x0001096a4dcc();
  bVar1 = *param_2;
  if (bVar1 != 0) {
    lVar3 = 0;
    pbVar4 = param_2;
    do {
      lVar2 = param_1;
      func_0x0001096a4c8c();
      if ((uint)bVar1 != ((uint)lVar2 & 0xff)) {
        if (*pbVar4 == 0) {
          return 1;
        }
        if (lVar3 != 0) {
          lVar3 = -lVar3;
          do {
            bStack_41 = param_2[lVar3 + -1];
            func_0x00010538e93c(param_1 + 8,&bStack_41);
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
        return 0;
      }
      func_0x0001096a4d18(param_1);
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
      lVar3 = lVar3 + -1;
    } while (bVar1 != 0);
  }
  return 1;
}



/* Entry: 1096a4474; end: 1096a46e7;  */

void FUN_1096a4474(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 ****ppppuVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 ****ppppuVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 ***pppuStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x0001096a4dcc(param_2);
  lVar5 = param_2;
  func_0x0001096a4c8c();
  uVar4 = (uint)lVar5;
  if ((uVar4 == 0x22) || ((uVar4 & 0xff) == 0x27)) {
    func_0x0001096a4d18(param_2);
    pppuStack_68 = (undefined8 ****)0x0;
    lStack_60 = 0;
    uStack_58 = 0;
    lVar5 = param_2;
    FUN_1096a43c0(param_2,&DAT_10f2da0fd);
    lVar6 = param_2;
    FUN_1096a43c0(param_2,&DAT_10f2da10d);
    while (lVar7 = param_2, func_0x0001096a4d18(), (uint)lVar7 != uVar4) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&pppuStack_68);
    }
    if (((uint)lVar5 & ((uint)lVar6 ^ 1)) == 0) {
      ppppuVar13 = (undefined8 ****)pppuStack_68;
      if (-1 < uStack_58) {
        ppppuVar13 = &pppuStack_68;
      }
      ppppuVar8 = ppppuVar13;
      _strlen(ppppuVar13);
      FUN_109697928(&ppuStack_78,ppppuVar13,ppppuVar8);
      param_1[1] = uStack_70;
      *param_1 = ppuStack_78;
      ppuStack_78 = &PTR_FUN_110b01d60;
      uStack_70 = 0;
      func_0x000107c2acd4(&ppuStack_78);
    }
    else {
      lVar5 = lStack_60;
      ppppuVar13 = (undefined8 ****)pppuStack_68;
      if (-1 < (long)uStack_58._7_1_) {
        lVar5 = (long)uStack_58._7_1_;
        ppppuVar13 = &pppuStack_68;
      }
      if (*(char *)((long)ppppuVar13 + lVar5 + -1) == '}') {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
                  (&pppuStack_68,(long)ppppuVar13 + ~(ulong)ppppuVar13 + lVar5,1);
      }
      uVar9 = param_2 + 0x38;
      func_0x000107c31944(uVar9,&pppuStack_68);
      uVar14 = *(ulong *)(param_2 + 0x40);
      if (uVar14 != 0) {
        uVar15 = uVar14 - 1;
        if ((uVar14 & uVar15) == 0) {
          uVar16 = uVar15 & uVar9;
        }
        else {
          uVar16 = uVar9;
          if (uVar14 <= uVar9) {
            uVar16 = 0;
            if (uVar14 != 0) {
              uVar16 = uVar9 / uVar14;
            }
            uVar16 = uVar9 - uVar16 * uVar14;
          }
        }
        plVar10 = *(long **)(*(long *)(param_2 + 0x38) + uVar16 * 8);
        if (plVar10 != (long *)0x0) {
          for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            uVar11 = plVar10[1];
            if (uVar11 == uVar9) {
              uVar11 = param_2 + 0x38;
              func_0x000104c4fbc4(uVar11,plVar10 + 2,&pppuStack_68);
              if ((uVar11 & 1) != 0) {
                uVar17 = plVar10[5];
                param_1[1] = plVar10[6];
                *param_1 = uVar17;
                if (param_1[1] != 0) {
                  piVar12 = (int *)(param_1[1] + -8);
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
                    if (bVar2) {
                      *piVar12 = *piVar12 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                goto LAB_1096a4668;
              }
            }
            else {
              if ((uVar14 & uVar15) == 0) {
                uVar11 = uVar11 & uVar15;
              }
              else if (uVar14 <= uVar11) {
                uVar3 = 0;
                if (uVar14 != 0) {
                  uVar3 = uVar11 / uVar14;
                }
                uVar11 = uVar11 - uVar3 * uVar14;
              }
              if (uVar11 != uVar16) break;
            }
          }
        }
      }
      *param_1 = &PTR_FUN_110b01d60;
      param_1[1] = 0;
    }
LAB_1096a4668:
    if (uStack_58 < 0) {
      __ZdlPv(pppuStack_68);
    }
  }
  else {
    *param_1 = &PTR_FUN_110b01d60;
    param_1[1] = 0;
  }
  return;
}



/* Entry: 1096a46e8; end: 1096a4857;  */

void FUN_1096a46e8(undefined8 *param_1,char *param_2)

{
  undefined8 ***pppuVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  int *piVar7;
  undefined **ppuStack_68;
  long lStack_60;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  
  func_0x000107c31940(appuStack_58,&UNK_10dfdb975);
  uVar4 = *(ulong *)(param_2 + 8);
  pcVar5 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    uVar4 = (ulong)(byte)param_2[0x17];
    pcVar5 = param_2;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    cVar2 = *pcVar5;
    if (cVar2 == ':') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (appuStack_58,0x3a);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (appuStack_58,(long)cVar2);
    pcVar5 = pcVar5 + 1;
  }
  pppuVar1 = (undefined8 ***)appuStack_58[0];
  if (-1 < cStack_41) {
    pppuVar1 = appuStack_58;
  }
  lVar6 = (long)pppuVar1 + 4;
  FUN_1096977e4(&ppuStack_68);
  FUN_1096978cc();
  if (lStack_60 == *(long *)(lVar6 + 8)) {
    pppuVar1 = (undefined8 ***)appuStack_58[0];
    if (-1 < cStack_41) {
      pppuVar1 = appuStack_58;
    }
    FUN_1096977e4(param_1,pppuVar1);
  }
  else {
    param_1[1] = lStack_60;
    *param_1 = ppuStack_68;
    if (param_1[1] != 0) {
      piVar7 = (int *)(param_1[1] + -8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = &PTR_FUN_110b00f28;
  }
  ppuStack_68 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_68);
  if (cStack_41 < '\0') {
    __ZdlPv(appuStack_58[0]);
  }
  return;
}



/* Entry: 1096a4858; end: 1096a49fb;  */

void FUN_1096a4858(ulong param_1,long param_2,undefined **param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  int *piVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **appuStack_100 [2];
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined **ppuStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = &PTR_DAT_110b02870;
  lVar10 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110b02870,0);
  if (lVar10 == 0) {
    func_0x000107c2acdc();
  }
  lVar10 = *(long *)(lVar10 + 8);
  if (lVar10 != 0) {
    piVar8 = (int *)(lVar10 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_70 = &PTR_FUN_110b01d60;
  lStack_68 = lVar10;
  func_0x000107c2acd4(&ppuStack_70);
  if (lVar10 == 0) {
    ppuStack_70 = &PTR_FUN_110b01d60;
    lStack_68 = 0;
    while( true ) {
      pppuVar6 = &ppuStack_70;
      uVar3 = param_1;
      ppuVar7 = param_3;
      FUN_1096a21f0();
      if ((uVar3 & 1) == 0) break;
      FUN_1096985c0(*(long *)(param_2 + 8) + 8,&ppuStack_70);
    }
    ppuStack_70 = &PTR_FUN_110b01d60;
    pppuVar4 = &ppuStack_70;
    func_0x000107c2acd4();
  }
  else {
    func_0x000107c2acc8(&ppuStack_70);
    while( true ) {
      pppuVar6 = &ppuStack_70;
      uVar3 = param_1;
      FUN_1096a3e64();
      if ((uVar3 & 1) == 0) break;
      FUN_1096985c0(*(long *)(param_2 + 8) + 8,&ppuStack_70);
      func_0x000107c2acc8(&ppuStack_80);
      lVar10 = lStack_78;
      lStack_78 = lStack_68;
      lStack_68 = lVar10;
      ppuStack_70 = ppuStack_80;
      ppuStack_80 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_80);
    }
    ppuStack_70 = &PTR_FUN_110b01d60;
    pppuVar4 = &ppuStack_70;
    func_0x000107c2acd4();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pppuVar6 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(&ppuStack_70);
  }
  __Unwind_Resume();
  (**(code **)(*(long *)*ppuVar7 + 0x78))(&ppuStack_d0);
  if (*(code **)(lStack_c8 + 0x58) == (code *)0x0) {
    ppuStack_e0 = &PTR_FUN_110b01d60;
    uStack_d8 = 0;
  }
  else {
    (**(code **)(lStack_c8 + 0x58))(&ppuStack_e0);
  }
  pppuVar5 = &ppuStack_e0;
  ___dynamic_cast(pppuVar5,&PTR_DAT_110b01d40,&PTR_DAT_110afd8d8,0);
  if (pppuVar5 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  ppuVar11 = pppuVar5[1];
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar9 = ppuVar11 + -1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar2) {
        *(int *)ppuVar9 = *(int *)ppuVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_f0 = &PTR_FUN_110b01d60;
  ppuStack_e8 = ppuVar11;
  func_0x000107c2acd4(&ppuStack_f0);
  if (ppuVar11 != (undefined **)0x0) {
    func_0x000107c2accc();
    func_0x00010969659c(&ppuStack_f0);
    FUN_1096a4858(pppuVar4,&ppuStack_e0,&ppuStack_f0);
    ppuStack_f0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_f0);
    FUN_109696b6c(pppuVar6,ppuVar7,&ppuStack_e0);
    goto LAB_1096a4be4;
  }
  pppuVar5 = &ppuStack_e0;
  ___dynamic_cast(pppuVar5,&PTR_DAT_110b01d40,&PTR_DAT_110b01758,0);
  if (pppuVar5 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  ppuStack_e8 = pppuVar5[1];
  if (ppuStack_e8 == (undefined **)0x0) {
LAB_1096a4b60:
    ppuStack_f0 = &PTR_FUN_110b01738;
    func_0x000107c2accc();
    func_0x00010969659c(appuStack_100);
    pppuVar5 = pppuVar4;
    FUN_1096a21f0(pppuVar4,&ppuStack_e0,appuStack_100);
    if ((int)pppuVar5 == 0) {
      bVar2 = true;
      goto LAB_1096a4b9c;
    }
    appuStack_100[0] = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(appuStack_100);
LAB_1096a4bc8:
    FUN_109696b6c(pppuVar6,ppuVar7,&ppuStack_e0);
  }
  else {
    ppuVar11 = ppuStack_e8 + -1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar2) {
        *(int *)ppuVar11 = *(int *)ppuVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppuStack_f0 = &PTR_FUN_110b01738;
    if (ppuStack_e8 == (undefined **)0x0) goto LAB_1096a4b60;
    bVar2 = false;
LAB_1096a4b9c:
    FUN_1096a3e64(pppuVar4,&ppuStack_f0);
    if (bVar2) {
      appuStack_100[0] = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(appuStack_100);
      if (((ulong)pppuVar4 & 1) != 0) goto LAB_1096a4bc8;
    }
    else if ((int)pppuVar4 != 0) goto LAB_1096a4bc8;
  }
  ppuStack_f0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_f0);
LAB_1096a4be4:
  ppuStack_e0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_e0);
  ppuStack_d0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_d0);
  return;
}



/* Entry: 1096a49fc; end: 1096a4c8b;  */

void FUN_1096a49fc(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **appuStack_80 [2];
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  (**(code **)(*(long *)*param_3 + 0x78))(&ppuStack_50);
  if (*(code **)(lStack_48 + 0x58) == (code *)0x0) {
    ppuStack_60 = &PTR_FUN_110b01d60;
    uStack_58 = 0;
  }
  else {
    (**(code **)(lStack_48 + 0x58))(&ppuStack_60);
  }
  pppuVar3 = &ppuStack_60;
  ___dynamic_cast(pppuVar3,&PTR_DAT_110b01d40,&PTR_DAT_110afd8d8,0);
  if (pppuVar3 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  ppuVar6 = pppuVar3[1];
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar5 = ppuVar6 + -1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
      if (bVar2) {
        *(int *)ppuVar5 = *(int *)ppuVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_70 = &PTR_FUN_110b01d60;
  ppuStack_68 = ppuVar6;
  func_0x000107c2acd4(&ppuStack_70);
  if (ppuVar6 != (undefined **)0x0) {
    func_0x000107c2accc();
    func_0x00010969659c(&ppuStack_70);
    FUN_1096a4858(param_1,&ppuStack_60,&ppuStack_70);
    ppuStack_70 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_70);
    FUN_109696b6c(param_2,param_3,&ppuStack_60);
    goto LAB_1096a4be4;
  }
  pppuVar3 = &ppuStack_60;
  ___dynamic_cast(pppuVar3,&PTR_DAT_110b01d40,&PTR_DAT_110b01758,0);
  if (pppuVar3 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  ppuStack_68 = pppuVar3[1];
  if (ppuStack_68 == (undefined **)0x0) {
LAB_1096a4b60:
    ppuStack_70 = &PTR_FUN_110b01738;
    func_0x000107c2accc();
    func_0x00010969659c(appuStack_80);
    uVar4 = param_1;
    FUN_1096a21f0(param_1,&ppuStack_60,appuStack_80);
    if ((int)uVar4 == 0) {
      bVar2 = true;
      goto LAB_1096a4b9c;
    }
    appuStack_80[0] = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(appuStack_80);
LAB_1096a4bc8:
    FUN_109696b6c(param_2,param_3,&ppuStack_60);
  }
  else {
    ppuVar6 = ppuStack_68 + -1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar2) {
        *(int *)ppuVar6 = *(int *)ppuVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppuStack_70 = &PTR_FUN_110b01738;
    if (ppuStack_68 == (undefined **)0x0) goto LAB_1096a4b60;
    bVar2 = false;
LAB_1096a4b9c:
    FUN_1096a3e64(param_1,&ppuStack_70);
    if (bVar2) {
      appuStack_80[0] = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(appuStack_80);
      if ((param_1 & 1) != 0) goto LAB_1096a4bc8;
    }
    else if ((int)param_1 != 0) goto LAB_1096a4bc8;
  }
  ppuStack_70 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_70);
LAB_1096a4be4:
  ppuStack_60 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_60);
  ppuStack_50 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_50);
  return;
}



/* Entry: 1096a4c8c; end: 1096a4e27;  */

int FUN_1096a4c8c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uStack_21;
  
  lVar3 = param_1[6];
  if (lVar3 == 0) {
    plVar1 = (long *)*param_1;
    (**(code **)(*plVar1 + 0x40))(plVar1,&uStack_21,1,1);
    if ((int)plVar1 != 1) {
      cVar2 = '\0';
      goto LAB_1096a4cfc;
    }
    func_0x00010538e93c(param_1 + 1,&uStack_21);
    lVar3 = param_1[6];
  }
  uVar4 = (lVar3 + param_1[5]) - 1;
  cVar2 = *(char *)(*(long *)(param_1[2] + (uVar4 >> 0xc) * 8) + (uVar4 & 0xfff));
LAB_1096a4cfc:
  return (int)cVar2;
}



/* Entry: 1096a4e28; end: 1096a4ec7;  */

void FUN_1096a4e28(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar2 = *(long *)(*param_1 + 8);
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    plVar1 = (long *)(lVar2 + 8);
    if (*(char *)(lVar2 + 0x1f) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    func_0x000107c31940(auStack_38,plVar1);
    FUN_1096a4fc4(lVar3 + 0x38,auStack_38,auStack_38,param_1[2]);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
    FUN_109693ff4(param_1[2],0x11382a930,*param_1);
  }
  return;
}



/* Entry: 1096a4ec8; end: 1096a4efb;  */

undefined8 * FUN_1096a4ec8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096a4efc; end: 1096a4f2f;  */

void FUN_1096a4efc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096a4f30; end: 1096a4fc3;  */

void FUN_1096a4f30(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110b01d60;
  param_1[1] = 0;
  puVar3 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110b00e38,0);
  if (puVar3 != (undefined8 *)0x0 && param_2[1] != 0) {
    func_0x000107c2acd4(param_1);
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    if (param_1[1] != 0) {
      piVar4 = (int *)(param_1[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 1096a4fc4; end: 1096a523b;  */

void FUN_1096a4fc4(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x25;
  ulong uVar10;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x25 = (long *)(uVar10 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar9 <= plVar8) {
        uVar7 = 0;
        if (plVar9 != (long *)0x0) {
          uVar7 = (ulong)plVar8 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar7 * (long)plVar9);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar3 != (long *)0x0) {
      for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar8) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return;
          }
        }
        else {
          if (((ulong)plVar9 & uVar10) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar10);
          }
          else if (plVar9 <= plVar4) {
            uVar7 = 0;
            if (plVar9 != (long *)0x0) {
              uVar7 = (ulong)plVar4 / (ulong)plVar9;
            }
            plVar4 = (long *)((long)plVar4 - uVar7 * (long)plVar9);
          }
          if (plVar4 != unaff_x25) break;
        }
      }
    }
  }
  plVar3 = (long *)0x38;
  __Znwm();
  *plVar3 = 0;
  plVar3[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar3 + 2,*param_3,param_3[1]);
  }
  else {
    lVar6 = *param_3;
    plVar3[3] = param_3[1];
    plVar3[2] = lVar6;
    plVar3[4] = param_3[2];
  }
  lVar6 = *param_4;
  plVar3[6] = param_4[1];
  plVar3[5] = lVar6;
  if (plVar3[6] != 0) {
    piVar5 = (int *)(plVar3[6] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    uVar10 = 1;
    if ((long *)0x2 < plVar9) {
      uVar10 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)plVar9 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    FUN_1096a360c(param_1,uVar10);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar9 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar9 <= plVar8) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar8 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar10 * (long)plVar9);
      }
    }
  }
  lVar6 = *param_1;
  plVar8 = *(long **)(lVar6 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar3 = *plVar8;
    *plVar8 = (long)plVar3;
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar3 != 0) {
      plVar8 = *(long **)(*plVar3 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar8) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar8 / (ulong)plVar9;
        }
        plVar8 = (long *)((long)plVar8 - uVar10 * (long)plVar9);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar8;
    *plVar8 = (long)plVar3;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1096a523c; end: 1096a5257;  */

void FUN_1096a523c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096a5258; end: 1096a529f;  */

void FUN_1096a5258(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096a52a0; end: 1096a52f7;  */

undefined8 * FUN_1096a52a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096a52f8; end: 1096a534f;  */

void FUN_1096a52f8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b02808;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096a5350; end: 1096a53c7;  */

void FUN_1096a5350(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  param_1[1] = puVar1;
  *param_1 = &PTR_FUN_110b027d8;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096a53c8; end: 1096a53f7;  */

bool FUN_1096a53c8(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b02808,0);
  return param_1 != 0;
}



/* Entry: 1096a53f8; end: 1096a540b;  */

void FUN_1096a53f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x28);
  return;
}



/* Entry: 1096a540c; end: 1096a5423;  */

void FUN_1096a540c(undefined8 param_1,undefined8 param_2)

{
  FUN_1096a3b24(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 1096a5424; end: 1096a5473;  */

void FUN_1096a5424(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0x51;
  __Znam();
  lVar6 = 0x28;
  pcVar4 = (char *)(lVar3 + 1);
  do {
    bVar2 = *param_3;
    cVar5 = '0';
    cVar1 = '0';
    if (9 < (bVar2 & 0xf)) {
      cVar1 = '7';
    }
    pcVar4[-1] = cVar1 + (bVar2 & 0xf);
    if (0x9f < bVar2) {
      cVar5 = '7';
    }
    *pcVar4 = cVar5 + (bVar2 >> 4);
    lVar6 = lVar6 + -1;
    pcVar4 = pcVar4 + 2;
    param_3 = param_3 + 1;
  } while (lVar6 != 0);
  *(undefined1 *)(lVar3 + 0x50) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096a5474; end: 1096a54cb;  */

void FUN_1096a5474(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b02808;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096a54cc; end: 1096a54ef;  */

void FUN_1096a54cc(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  return;
}



/* Entry: 1096a54f0; end: 1096a5647;  */

undefined8 *
FUN_1096a54f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_48;
  
  pppuVar2 = &ppuStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b02a68;
  param_1[1] = puVar1;
  iVar3 = 0x38;
  puVar1 = param_1;
  func_0x000107c2acd0();
  puVar1[5] = 0x3f80000000000000;
  puVar1[6] = 0;
  puVar1[4] = 0x3f800000;
  puVar1[3] = 0;
  puVar1[1] = &PTR_FUN_110b01d60;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b02af0;
  FUN_1096a57ec(&ppuStack_70,param_2);
  lVar4 = param_1[1];
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  *(undefined8 *)(lVar4 + 0x10) = uStack_68;
  *(undefined ***)(lVar4 + 8) = ppuStack_70;
  ppuStack_70 = &PTR_FUN_110b01d60;
  uStack_68 = uVar5;
  func_0x000107c2acd4();
  lVar4 = param_1[1];
  uVar6 = param_3[1];
  uVar5 = *param_3;
  *(undefined8 *)(lVar4 + 0x28) = param_3[2];
  *(undefined8 *)(lVar4 + 0x20) = uVar6;
  *(undefined8 *)(lVar4 + 0x18) = uVar5;
  lVar4 = param_1[1];
  *(undefined4 *)(lVar4 + 0x30) = param_4;
  *(undefined4 *)(lVar4 + 0x34) = param_5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar3 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume();
  return (undefined8 *)(ulong)*(uint *)(*(long *)((long)pppuVar2 + 8) + 0x30);
}



/* Entry: 1096a5648; end: 1096a565f;  */

undefined4 FUN_1096a5648(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0x30);
}



/* Entry: 1096a5660; end: 1096a570f;  */

void FUN_1096a5660(long param_1,undefined4 param_2,undefined8 param_3,long param_4,
                  undefined4 param_5)

{
  float *pfVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar5 = 0;
  lVar3 = *(long *)(param_1 + 8);
  puVar6 = (undefined8 *)(lVar3 + 0x18);
  uStack_28 = *puVar6;
  uStack_20 = 0;
  uStack_18 = 0;
  do {
    lVar7 = 0;
    bVar2 = true;
    do {
      bVar9 = bVar2;
      lVar8 = 0;
      pfVar1 = (float *)((long)&uStack_28 + lVar7 * 4 + lVar5 * 8);
      fVar11 = *pfVar1;
      bVar2 = true;
      do {
        bVar10 = bVar2;
        fVar11 = fVar11 + *(float *)((long)puVar6 + lVar7 * 4 + lVar8 * 8 + 8) *
                          *(float *)(param_4 + lVar5 * 8 + lVar8 * 4);
        lVar8 = 1;
        bVar2 = false;
      } while (bVar10);
      *pfVar1 = fVar11;
      lVar7 = 1;
      bVar2 = false;
    } while (bVar9);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  plVar4 = (long *)(lVar3 + 8);
  (**(code **)(*plVar4 + 0x40))(plVar4,param_2,param_3,&uStack_28,param_5);
  return;
}



/* Entry: 1096a5710; end: 1096a571b;  */

long FUN_1096a5710(long param_1)

{
  return *(long *)(param_1 + 8) + 8;
}



/* Entry: 1096a571c; end: 1096a574f;  */

undefined8 * FUN_1096a571c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096a5750; end: 1096a5783;  */

void FUN_1096a5750(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096a5784; end: 1096a57b7;  */

long FUN_1096a5784(long param_1)

{
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096a57b8; end: 1096a57eb;  */

void FUN_1096a57b8(long param_1)

{
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096a57ec; end: 1096a585f;  */

void FUN_1096a57ec(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_110b01d60;
  param_1[1] = 0;
  if (param_2[1] != 0) {
    func_0x000107c2acd4(param_1);
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    if (param_1[1] != 0) {
      piVar3 = (int *)(param_1[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 1096a5860; end: 1096a594f;  */

void FUN_1096a5860(long *param_1,uint param_2,uint param_3,undefined8 param_4,undefined4 param_5,
                  undefined8 param_6)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  float *pfStack_58;
  float *pfStack_50;
  
  FUN_1096a5c58(&pfStack_58,(long)(int)(param_3 * param_2));
  if (0 < (int)param_2) {
    uVar3 = 0;
    pfVar2 = pfStack_58;
    do {
      if (0 < (int)param_3) {
        uVar4 = 0;
        pfVar1 = pfVar2;
        do {
          pfVar2 = pfVar1 + 2;
          *pfVar1 = (float)uVar4;
          pfVar1[1] = (float)uVar3;
          uVar4 = uVar4 + 1;
          pfVar1 = pfVar2;
        } while (param_3 != uVar4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_2);
  }
  (**(code **)(*param_1 + 0x40))
            (param_1,(ulong)((long)pfStack_50 - (long)pfStack_58) >> 3 & 0xffffffff,pfStack_58,
             param_4,param_5,param_6);
  if (pfStack_58 != (float *)0x0) {
    pfStack_50 = pfStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 1096a5950; end: 1096a5b3f;  */

void FUN_1096a5950(undefined4 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined4 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar7 = &uStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x20))();
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x28))();
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2);
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  uStack_70 = CONCAT44((int)plVar2,(int)plVar1);
  FUN_109a83fd0(param_1,2,&uStack_70,(int)plVar3 * 8 + 0xffaU & 0xffe);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x20))(param_2);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x28))(param_2);
  uStack_60 = 0x3f80000000000000;
  puStack_68 = (undefined4 *)0x3f800000;
  uStack_70 = 0;
  uVar8 = *(undefined8 *)(param_1 + 4);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x20))(param_2);
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x28))(param_2);
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2);
  (**(code **)(*param_2 + 0x48))
            (param_2,plVar1,plVar2,&uStack_70,(int)plVar4 * (int)plVar3 * (int)plVar5,uVar8);
  uStack_70 = CONCAT44(uStack_70._4_4_,0x2010000);
  uStack_60 = 0;
  puStack_68 = param_1;
  (**(code **)(*param_2 + 0x30))(param_2);
  FUN_109a41858(0x3ff0000000000000,0,param_1,&uStack_70,(int)param_2 * 8 + -8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar6 = *(long *)(param_1 + 2) + -0x20;
  func_0x0001096966c0(lVar6,*puVar7);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096a5b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar7 + 0x30))();
  return;
}



/* Entry: 1096a5b40; end: 1096a5b8f;  */

void FUN_1096a5b40(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096a5b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x30))();
  return;
}



/* Entry: 1096a5b90; end: 1096a5c0f;  */

void FUN_1096a5b90(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 == 0) || (puVar2 = *(undefined8 **)(lVar1 + 8), puVar2 == (undefined8 *)0x0)) {
    param_2 = (undefined8 *)*param_2;
    lVar1 = *(long *)(param_1 + 8) + -0x20;
    puVar2 = param_2;
    (**(code **)*param_2)();
    FUN_109696718(lVar1,param_2);
    *(undefined8 **)(lVar1 + 8) = puVar2;
  }
  uVar3 = *param_3;
  puVar2[1] = param_3[1];
  *puVar2 = uVar3;
  return;
}



/* Entry: 1096a5c10; end: 1096a5c57;  */

void FUN_1096a5c10(long *param_1)

{
  (**(code **)(*param_1 + 0x58))();
                    /* WARNING: Could not recover jumptable at 0x0001096a5c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



/* Entry: 1096a5c58; end: 1096a5ccb;  */

undefined8 * FUN_1096a5c58(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1096a5ccc(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 3);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 1096a5ccc; end: 1096a5d03;  */

void FUN_1096a5ccc(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1;
    FUN_1096a5d18();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    return;
  }
  FUN_1096a5d04();
  func_0x000104c4f6cc(&UNK_10f57c2f9);
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096a5d04; end: 1096a5d17;  */

void FUN_1096a5d04(undefined8 param_1,ulong param_2)

{
  func_0x000104c4f6cc(&UNK_10f57c2f9);
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096a5d18; end: 1096a5d4b;  */

void FUN_1096a5d18(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096a5d4c; end: 1096a5d5f;  */

void FUN_1096a5d4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096a5d60; end: 1096a5d8f;  */

void FUN_1096a5d60(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096a5d90; end: 1096a5dcb;  */

void FUN_1096a5d90(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar4;
  if (param_1[1] != 0) {
    piVar3 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00af0;
  return;
}



/* Entry: 1096a5dcc; end: 1096a5e2b;  */

undefined8 FUN_1096a5dcc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_3[1] != param_2[1]) {
    func_0x000107c2acd4(param_3);
    uVar4 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar4;
    if (param_3[1] != 0) {
      piVar3 = (int *)(param_3[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return 1;
}



/* Entry: 1096a5e2c; end: 1096a5e3f;  */

undefined8 FUN_1096a5e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096a5e40; end: 1096a5e6b;  */

void FUN_1096a5e40(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b02b48;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096a5e6c; end: 1096a5f53;  */

undefined1 * FUN_1096a5e6c(undefined8 *param_1,undefined1 *param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar2 = 0x10b00b10;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    func_0x000107c2acbc("",0);
    func_0x000107c2accc();
    iVar2 = 0x10b00b10;
    func_0x00010969659c(&ppuStack_50);
    uVar3 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar3;
    func_0x000107c2acd4(&ppuStack_50);
    param_2 = (undefined1 *)pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_2;
  }
  ___stack_chk_fail();
  if (iVar2 != 0) {
    func_0x000104bd46a0(param_2);
    FUN_109696618(param_1);
  }
  __Unwind_Resume(param_2);
  ___dynamic_cast();
  return (undefined1 *)(ulong)(param_2 != (undefined1 *)0x0);
}



/* Entry: 1096a5f54; end: 1096a5f83;  */

bool FUN_1096a5f54(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b02b48,0);
  return param_1 != 0;
}



/* Entry: 1096a5f84; end: 1096a5feb;  */

void FUN_1096a5f84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096a5fec; end: 1096a6043;  */

void FUN_1096a5fec(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b02b48;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096a6044; end: 1096a606b;  */

void FUN_1096a6044(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1096a606c; end: 1096a6107;  */

void FUN_1096a606c(undefined8 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_2 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_2);
    }
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  if (0 < *(int *)(param_2 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_2 + 4));
  }
  lVar5 = *(long *)(param_2 + 0x48);
  if (lVar5 != param_2 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096a6108; end: 1096a613f;  */

void FUN_1096a6108(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0xc1;
  __Znam();
  lVar6 = 0x60;
  pcVar4 = (char *)(lVar3 + 1);
  do {
    bVar2 = *param_3;
    cVar5 = '0';
    cVar1 = '0';
    if (9 < (bVar2 & 0xf)) {
      cVar1 = '7';
    }
    pcVar4[-1] = cVar1 + (bVar2 & 0xf);
    if (0x9f < bVar2) {
      cVar5 = '7';
    }
    *pcVar4 = cVar5 + (bVar2 >> 4);
    lVar6 = lVar6 + -1;
    pcVar4 = pcVar4 + 2;
    param_3 = param_3 + 1;
  } while (lVar6 != 0);
  *(undefined1 *)(lVar3 + 0xc0) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096a6140; end: 1096a6197;  */

void FUN_1096a6140(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b02d18;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096a6198; end: 1096a61cb;  */

void FUN_1096a6198(undefined4 *param_1)

{
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  return;
}



/* Entry: 1096a61cc; end: 1096a61fb;  */

bool FUN_1096a61cc(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b02d18,0);
  return param_1 != 0;
}



/* Entry: 1096a61fc; end: 1096a6317;  */

void FUN_1096a61fc(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar11 = *param_1;
  uVar13 = param_1[3];
  uVar12 = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = uVar11;
  param_2[3] = uVar13;
  param_2[2] = uVar12;
  uVar11 = param_1[4];
  param_2[5] = param_1[5];
  param_2[4] = uVar11;
  lVar9 = param_1[7];
  uVar11 = param_1[6];
  param_2[7] = param_1[7];
  param_2[6] = uVar11;
  param_2[10] = 0;
  param_2[8] = param_2 + 1;
  param_2[9] = param_2 + 10;
  param_2[0xb] = 0;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x14);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (*(int *)((long)param_1 + 4) < 3) {
    puVar8 = (undefined8 *)param_1[9];
    puVar10 = (undefined8 *)param_2[9];
    *puVar10 = *puVar8;
    puVar10[1] = puVar8[1];
    return;
  }
  *(undefined4 *)((long)param_2 + 4) = 0;
  FUN_109a844cc(param_2,*(undefined4 *)((long)param_1 + 4),0,0,0);
  if (0 < *(int *)((long)param_2 + 4)) {
    lVar9 = 0;
    lVar2 = param_1[8];
    lVar4 = param_1[9];
    lVar3 = param_2[8];
    lVar5 = param_2[9];
    do {
      *(undefined4 *)(lVar3 + lVar9 * 4) = *(undefined4 *)(lVar2 + lVar9 * 4);
      *(undefined8 *)(lVar5 + lVar9 * 8) = *(undefined8 *)(lVar4 + lVar9 * 8);
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)((long)param_2 + 4));
  }
  return;
}



/* Entry: 1096a6318; end: 1096a731b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1096a6318(undefined **param_1,undefined8 *param_2,undefined **param_3,undefined8 *param_4,
                  undefined8 param_5,ushort *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  int iVar23;
  undefined **ppuVar24;
  int iVar25;
  long lVar26;
  ulong *puVar27;
  long lVar28;
  ushort *puVar29;
  ushort uVar30;
  byte *pbVar31;
  undefined1 (*pauVar32) [16];
  long lVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  undefined8 extraout_x8;
  undefined8 *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined8 *puVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  short sVar47;
  uint uVar48;
  uint uVar49;
  undefined8 uVar50;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  short sVar63;
  undefined1 auVar56 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined **ppuStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *apuStack_d0 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  auVar22 = _UNK_10dfdbda0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar37 = param_1[1];
  iVar4 = *(int *)(puVar37 + 0x1c);
  if (iVar4 != 4) {
    if (iVar4 != 3) {
      if (iVar4 != 1) goto LAB_1096a6560;
      puVar36 = (undefined8 *)(ulong)*(uint *)(puVar37 + 0x20);
      if ((int)*(uint *)(puVar37 + 0x20) < 0) goto LAB_1096a64b8;
      lVar28 = (long)*(short *)(puVar37 + 0x24);
      lVar26 = (long)*(short *)(puVar37 + 0x26);
      if (*(short *)(puVar37 + 0x24) < 4) {
        iVar4 = *(short *)(puVar37 + 0x26) * 3;
        if (iVar4 == 9) {
          puVar38 = *(undefined **)(puVar37 + 8);
          iVar4 = *(int *)(puVar37 + 0x10);
          iVar39 = *(int *)(puVar37 + 0x14);
          iVar5 = *(int *)(puVar37 + 0x18);
          iVar8 = iVar39 + -3;
          if ((iVar39 >= 3 && iVar4 != 3) && (iVar39 < 3 || 2 < iVar4)) {
            lVar26 = 0;
            lVar28 = (long)iVar5;
            iVar4 = iVar4 + -4;
            uStack_68 = param_4[1];
            uStack_60 = param_4[2];
            fVar44 = (float)*param_4 + -0.5;
            fVar45 = (float)((ulong)*param_4 >> 0x20) + -0.5;
            auStack_70 = (undefined1  [8])CONCAT44(fVar45,fVar44);
            puVar42 = &uStack_c0;
            param_1 = (undefined **)auStack_70;
            do {
              uVar3 = *(undefined4 *)((long)param_1 + lVar26);
              uVar9 = *(undefined4 *)(auStack_70 + lVar26 + 4);
              puVar42[-1] = CONCAT44(uVar3,uVar3);
              puVar42[-2] = CONCAT44(uVar3,uVar3);
              puVar42[1] = CONCAT44(uVar9,uVar9);
              *puVar42 = CONCAT44(uVar9,uVar9);
              lVar26 = lVar26 + 8;
              puVar42 = puVar42 + 4;
            } while (lVar26 != 0x18);
            ppuVar24 = (undefined **)((long)param_3 + (((long)param_2 << 0x20) >> 0x1d));
            if (0x1f < (long)(-((ulong)param_2 >> 0x1f & 1) & 0xfffffff800000000 |
                             ((ulong)param_2 & 0xffffffff) << 3)) {
              param_1 = (undefined **)0xe38f;
              ppuVar34 = param_3 + 4;
              ppuVar35 = param_3;
              do {
                param_3 = ppuVar34;
                lVar26 = 0;
                auVar69._0_4_ =
                     (int)(SUB84(apuStack_d0[0],0) + *(float *)ppuVar35 * fStack_b0 +
                          *(float *)((long)ppuVar35 + 4) * (float)uStack_90);
                auVar69._4_4_ =
                     (int)((float)((ulong)apuStack_d0[0] >> 0x20) +
                           *(float *)(ppuVar35 + 1) * fStack_ac +
                          *(float *)((long)ppuVar35 + 0xc) * (float)((ulong)uStack_90 >> 0x20));
                auVar69._8_4_ =
                     (int)(SUB84(apuStack_d0[1],0) + *(float *)(ppuVar35 + 2) * fStack_a8 +
                          *(float *)((long)ppuVar35 + 0x14) * (float)uStack_88);
                auVar69._12_4_ =
                     (int)((float)((ulong)apuStack_d0[1] >> 0x20) +
                           *(float *)(ppuVar35 + 3) * fStack_a4 +
                          *(float *)((long)ppuVar35 + 0x1c) * (float)((ulong)uStack_88 >> 0x20));
                auVar56._0_4_ =
                     (int)((float)uStack_c0 + *(float *)ppuVar35 * (float)uStack_a0 +
                          *(float *)((long)ppuVar35 + 4) * (float)uStack_80);
                auVar56._4_4_ =
                     (int)((float)((ulong)uStack_c0 >> 0x20) +
                           *(float *)(ppuVar35 + 1) * (float)((ulong)uStack_a0 >> 0x20) +
                          *(float *)((long)ppuVar35 + 0xc) * (float)((ulong)uStack_80 >> 0x20));
                auVar56._8_4_ =
                     (int)((float)uStack_b8 + *(float *)(ppuVar35 + 2) * (float)uStack_98 +
                          *(float *)((long)ppuVar35 + 0x14) * (float)uStack_78);
                auVar56._12_4_ =
                     (int)((float)((ulong)uStack_b8 >> 0x20) +
                           *(float *)(ppuVar35 + 3) * (float)((ulong)uStack_98 >> 0x20) +
                          *(float *)((long)ppuVar35 + 0x1c) * (float)((ulong)uStack_78 >> 0x20));
                auVar67 = NEON_smax(auVar69,ZEXT216(0),4);
                auVar56 = NEON_smax(auVar56,ZEXT216(0),4);
                auVar53._4_4_ = iVar8;
                auVar53._0_4_ = iVar8;
                auVar53._8_4_ = iVar8;
                auVar53._12_4_ = iVar8;
                auVar69 = NEON_smin(auVar67,auVar53,4);
                auVar67._4_4_ = iVar4;
                auVar67._0_4_ = iVar4;
                auVar67._8_4_ = iVar4;
                auVar67._12_4_ = iVar4;
                auVar53 = NEON_smin(auVar56,auVar67,4);
                auVar70._0_8_ =
                     CONCAT44(auVar69._4_4_ + auVar53._4_4_ * iVar5,
                              auVar69._0_4_ + auVar53._0_4_ * iVar5);
                auVar70._8_4_ = auVar69._8_4_ + auVar53._8_4_ * iVar5;
                auVar70._12_4_ = auVar69._12_4_ + auVar53._12_4_ * iVar5;
                uStack_48 = auVar70._8_8_;
                uStack_50 = auVar70._0_8_;
                puVar29 = param_6;
                do {
                  puVar27 = (ulong *)((long)puVar36 +
                                     (long)(puVar38 + *(int *)((long)&uStack_50 + lVar26)));
                  if (iVar39 + iVar5 * iVar4 + -8 < *(int *)((long)&uStack_50 + lVar26)) {
                    iVar40 = 0;
                    sVar47 = 0;
                    do {
                      lVar33 = 0;
                      do {
                        sVar47 = sVar47 + (ushort)*(byte *)((long)puVar27 + lVar33);
                        lVar33 = lVar33 + 1;
                      } while (lVar33 != 3);
                      puVar27 = (ulong *)((long)puVar27 + lVar28);
                      iVar40 = iVar40 + 1;
                    } while (iVar40 != 3);
                    uVar30 = sVar47 / 9;
                  }
                  else {
                    sVar47 = 0;
                    sVar57 = 0;
                    sVar58 = 0;
                    sVar59 = 0;
                    iVar40 = 3;
                    do {
                      auVar71._0_8_ = *puVar27;
                      auVar71._8_8_ = 0;
                      uVar50 = a64_TBL(ZEXT816(0),auVar71,0xffffff02ff01ff00);
                      sVar47 = sVar47 + (short)uVar50;
                      sVar57 = sVar57 + (short)((ulong)uVar50 >> 0x10);
                      sVar58 = sVar58 + (short)((ulong)uVar50 >> 0x20);
                      sVar59 = sVar59 + (short)((ulong)uVar50 >> 0x30);
                      puVar27 = (ulong *)((long)puVar27 + lVar28);
                      iVar40 = iVar40 + -1;
                    } while (iVar40 != 0);
                    uVar30 = (ushort)(sVar47 + sVar57 + sVar58 + sVar59) / 9;
                  }
                  param_6 = puVar29 + 1;
                  *puVar29 = uVar30;
                  lVar26 = lVar26 + 4;
                  puVar29 = param_6;
                } while (lVar26 != 0x10);
                param_2 = (undefined8 *)0x10;
                ppuVar34 = param_3 + 4;
                ppuVar35 = param_3;
              } while (param_3 + 4 <= ppuVar24);
            }
            if (param_3 < ppuVar24) {
              do {
                iVar39 = 0;
                sVar47 = 0;
                iVar23 = (int)(fVar44 + (float)uStack_68 * *(float *)param_3 +
                              (float)uStack_60 * *(float *)((long)param_3 + 4));
                iVar40 = iVar23;
                if (iVar8 <= iVar23) {
                  iVar40 = iVar8;
                }
                iVar41 = 0;
                if (-1 < iVar23) {
                  iVar41 = iVar40;
                }
                iVar23 = (int)(fVar45 + uStack_68._4_4_ * *(float *)param_3 +
                              uStack_60._4_4_ * *(float *)((long)param_3 + 4));
                iVar40 = iVar23;
                if (iVar4 <= iVar23) {
                  iVar40 = iVar4;
                }
                iVar25 = 0;
                if (-1 < iVar23) {
                  iVar25 = iVar40;
                }
                param_1 = (undefined **)
                          ((long)puVar36 + (long)(puVar38 + (long)iVar41 + (long)(iVar25 * iVar5)));
                do {
                  lVar26 = 0;
                  do {
                    sVar47 = sVar47 + (ushort)*(byte *)((long)param_1 + lVar26);
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != 3);
                  param_1 = (undefined **)((long)param_1 + lVar28);
                  iVar39 = iVar39 + 1;
                } while (iVar39 != 3);
                *param_6 = sVar47 / 9;
                param_3 = param_3 + 1;
                param_6 = param_6 + 1;
              } while (param_3 < ppuVar24);
              param_2 = (undefined8 *)0x3;
            }
            goto LAB_1096a6560;
          }
          lVar26 = 3;
          apuStack_d0[0] = puVar38;
          apuStack_d0[1] = *(undefined **)(puVar37 + 0x10);
        }
        else {
          if (iVar4 != 3) goto LAB_1096a653c;
          puVar38 = *(undefined **)(puVar37 + 8);
          iVar4 = *(int *)(puVar37 + 0x10);
          iVar39 = *(int *)(puVar37 + 0x14);
          iVar5 = *(int *)(puVar37 + 0x18);
          iVar8 = iVar39 + -3;
          if ((iVar39 >= 3 && iVar4 != 1) && (iVar39 < 3 || 0 < iVar4)) {
            lVar26 = 0;
            iVar4 = iVar4 + -2;
            uStack_68 = param_4[1];
            uStack_60 = param_4[2];
            fVar44 = (float)*param_4 + -0.5;
            fVar45 = (float)((ulong)*param_4 >> 0x20) + 0.5;
            auStack_70 = (undefined1  [8])CONCAT44(fVar45,fVar44);
            puVar42 = &uStack_c0;
            do {
              uVar3 = *(undefined4 *)(auStack_70 + lVar26);
              param_1 = (undefined **)(auStack_70 + lVar26 + 4);
              iVar40 = *(int *)param_1;
              puVar42[-1] = CONCAT44(uVar3,uVar3);
              puVar42[-2] = CONCAT44(uVar3,uVar3);
              puVar42[1] = CONCAT44(iVar40,iVar40);
              *puVar42 = CONCAT44(iVar40,iVar40);
              lVar26 = lVar26 + 8;
              puVar42 = puVar42 + 4;
            } while (lVar26 != 0x18);
            puVar38 = puVar38 + (long)puVar36;
            ppuVar24 = (undefined **)((long)param_3 + (((long)param_2 << 0x20) >> 0x1d));
            if (0x1f < (long)(-((ulong)param_2 >> 0x1f & 1) & 0xfffffff800000000 |
                             ((ulong)param_2 & 0xffffffff) << 3)) {
              param_1 = param_3 + 4;
              ppuVar34 = param_3;
              do {
                param_3 = param_1;
                lVar26 = 0;
                auVar77._0_4_ =
                     (int)(SUB84(apuStack_d0[0],0) + *(float *)ppuVar34 * fStack_b0 +
                          *(float *)((long)ppuVar34 + 4) * (float)uStack_90);
                auVar77._4_4_ =
                     (int)((float)((ulong)apuStack_d0[0] >> 0x20) +
                           *(float *)(ppuVar34 + 1) * fStack_ac +
                          *(float *)((long)ppuVar34 + 0xc) * (float)((ulong)uStack_90 >> 0x20));
                auVar77._8_4_ =
                     (int)(SUB84(apuStack_d0[1],0) + *(float *)(ppuVar34 + 2) * fStack_a8 +
                          *(float *)((long)ppuVar34 + 0x14) * (float)uStack_88);
                auVar77._12_4_ =
                     (int)((float)((ulong)apuStack_d0[1] >> 0x20) +
                           *(float *)(ppuVar34 + 3) * fStack_a4 +
                          *(float *)((long)ppuVar34 + 0x1c) * (float)((ulong)uStack_88 >> 0x20));
                auVar52._0_4_ =
                     (int)((float)uStack_c0 + *(float *)ppuVar34 * (float)uStack_a0 +
                          *(float *)((long)ppuVar34 + 4) * (float)uStack_80);
                auVar52._4_4_ =
                     (int)((float)((ulong)uStack_c0 >> 0x20) +
                           *(float *)(ppuVar34 + 1) * (float)((ulong)uStack_a0 >> 0x20) +
                          *(float *)((long)ppuVar34 + 0xc) * (float)((ulong)uStack_80 >> 0x20));
                auVar52._8_4_ =
                     (int)((float)uStack_b8 + *(float *)(ppuVar34 + 2) * (float)uStack_98 +
                          *(float *)((long)ppuVar34 + 0x14) * (float)uStack_78);
                auVar52._12_4_ =
                     (int)((float)((ulong)uStack_b8 >> 0x20) +
                           *(float *)(ppuVar34 + 3) * (float)((ulong)uStack_98 >> 0x20) +
                          *(float *)((long)ppuVar34 + 0x1c) * (float)((ulong)uStack_78 >> 0x20));
                auVar67 = NEON_smax(auVar77,ZEXT216(0),4);
                auVar53 = NEON_smax(auVar52,ZEXT216(0),4);
                auVar10._4_4_ = iVar8;
                auVar10._0_4_ = iVar8;
                auVar10._8_4_ = iVar8;
                auVar10._12_4_ = iVar8;
                auVar67 = NEON_smin(auVar67,auVar10,4);
                auVar15._4_4_ = iVar4;
                auVar15._0_4_ = iVar4;
                auVar15._8_4_ = iVar4;
                auVar15._12_4_ = iVar4;
                auVar53 = NEON_smin(auVar53,auVar15,4);
                uStack_48 = CONCAT44(auVar67._12_4_ + auVar53._12_4_ * iVar5,
                                     auVar67._8_4_ + auVar53._8_4_ * iVar5);
                uStack_50 = CONCAT44(auVar67._4_4_ + auVar53._4_4_ * iVar5,
                                     auVar67._0_4_ + auVar53._0_4_ * iVar5);
                puVar29 = param_6;
                do {
                  param_2 = (undefined8 *)(long)*(int *)((long)&uStack_50 + lVar26);
                  puVar27 = (ulong *)(puVar38 + (long)param_2);
                  if (iVar39 + iVar5 * iVar4 + -8 < *(int *)((long)&uStack_50 + lVar26)) {
                    uVar49 = (uint)*(byte *)((long)puVar27 + 1) + (uint)(byte)*puVar27;
                    param_2 = (undefined8 *)(ulong)uVar49;
                    uVar49 = uVar49 + *(byte *)((long)puVar27 + 2);
                  }
                  else {
                    auVar54._0_8_ = *puVar27;
                    auVar54._8_8_ = 0;
                    uVar50 = a64_TBL(ZEXT816(0),auVar54,0xffffff02ff01ff00);
                    uVar49 = (uint)(ushort)((short)uVar50 + (short)((ulong)uVar50 >> 0x10) +
                                            (short)((ulong)uVar50 >> 0x20) +
                                           (short)((ulong)uVar50 >> 0x30));
                  }
                  param_6 = puVar29 + 1;
                  *puVar29 = (ushort)(uVar49 / 3);
                  lVar26 = lVar26 + 4;
                  puVar29 = param_6;
                } while (lVar26 != 0x10);
                param_1 = param_3 + 4;
                ppuVar34 = param_3;
              } while (param_1 <= ppuVar24);
            }
            if (param_3 < ppuVar24) {
              do {
                ppuVar34 = param_3 + 1;
                iVar40 = (int)(fVar44 + (float)uStack_68 * *(float *)param_3 +
                              (float)uStack_60 * *(float *)((long)param_3 + 4));
                iVar39 = iVar40;
                if (iVar8 <= iVar40) {
                  iVar39 = iVar8;
                }
                iVar41 = (int)(fVar45 + uStack_68._4_4_ * *(float *)param_3 +
                              uStack_60._4_4_ * *(float *)((long)param_3 + 4));
                iVar23 = 0;
                if (-1 < iVar40) {
                  iVar23 = iVar39;
                }
                iVar39 = iVar41;
                if (iVar4 <= iVar41) {
                  iVar39 = iVar4;
                }
                iVar40 = 0;
                if (-1 < iVar41) {
                  iVar40 = iVar39;
                }
                pbVar31 = puVar38 + (long)iVar23 + (long)(iVar40 * iVar5);
                *param_6 = (ushort)(((uint)pbVar31[1] + (uint)*pbVar31 + (uint)pbVar31[2]) / 3);
                param_6 = param_6 + 1;
                param_3 = ppuVar34;
              } while (ppuVar34 < ppuVar24);
            }
            goto LAB_1096a6560;
          }
          lVar26 = 1;
          apuStack_d0[0] = puVar38;
          apuStack_d0[1] = *(undefined **)(puVar37 + 0x10);
        }
        uStack_c0 = CONCAT44(1,iVar5);
        lVar28 = 3;
      }
      else {
LAB_1096a653c:
        apuStack_d0[1] = *(undefined **)(puVar37 + 0x10);
        apuStack_d0[0] = *(undefined **)(puVar37 + 8);
        uStack_c0 = *(undefined8 *)(puVar37 + 0x18);
      }
      param_1 = apuStack_d0;
      FUN_1096a76f4(param_1,puVar36,lVar26,lVar28,(ulong)param_2 & 0xffffffff,param_3);
      param_2 = puVar36;
      goto LAB_1096a6560;
    }
    puVar36 = (undefined8 *)(ulong)*(uint *)(puVar37 + 0x20);
    if ((int)*(uint *)(puVar37 + 0x20) < 0) goto LAB_1096a64b8;
    lVar28 = (long)*(short *)(puVar37 + 0x24);
    lVar26 = (long)*(short *)(puVar37 + 0x26);
    if (*(short *)(puVar37 + 0x24) < 4) {
      iVar4 = *(short *)(puVar37 + 0x26) * 3;
      if (iVar4 == 9) {
        puVar38 = *(undefined **)(puVar37 + 8);
        iVar4 = *(int *)(puVar37 + 0x10);
        iVar39 = *(int *)(puVar37 + 0x14);
        iVar5 = *(int *)(puVar37 + 0x18);
        iVar8 = iVar39 + -9;
        if ((iVar39 >= 9 && iVar4 != 3) && (iVar39 < 9 || 2 < iVar4)) {
          lVar26 = 0;
          lVar28 = (long)iVar5;
          iVar4 = iVar4 + -4;
          uStack_68 = param_4[1];
          uStack_60 = param_4[2];
          fVar44 = (float)*param_4 + -0.5;
          fVar45 = (float)((ulong)*param_4 >> 0x20) + -0.5;
          auStack_70 = (undefined1  [8])CONCAT44(fVar45,fVar44);
          puVar42 = &uStack_c0;
          param_1 = (undefined **)auStack_70;
          do {
            uVar3 = *(undefined4 *)((long)param_1 + lVar26);
            uVar9 = *(undefined4 *)(auStack_70 + lVar26 + 4);
            puVar42[-1] = CONCAT44(uVar3,uVar3);
            puVar42[-2] = CONCAT44(uVar3,uVar3);
            puVar42[1] = CONCAT44(uVar9,uVar9);
            *puVar42 = CONCAT44(uVar9,uVar9);
            lVar26 = lVar26 + 8;
            puVar42 = puVar42 + 4;
          } while (lVar26 != 0x18);
          ppuVar24 = (undefined **)((long)param_3 + (((long)param_2 << 0x20) >> 0x1d));
          if (0x1f < (long)(-((ulong)param_2 >> 0x1f & 1) & 0xfffffff800000000 |
                           ((ulong)param_2 & 0xffffffff) << 3)) {
            param_1 = (undefined **)((long)puVar36 + (long)(puVar38 + 3));
            param_2 = &uStack_50;
            ppuVar34 = param_3 + 4;
            ppuVar35 = param_3;
            do {
              param_3 = ppuVar34;
              lVar26 = 0;
              auVar66._0_4_ =
                   (int)(SUB84(apuStack_d0[0],0) + *(float *)ppuVar35 * fStack_b0 +
                        *(float *)((long)ppuVar35 + 4) * (float)uStack_90);
              auVar66._4_4_ =
                   (int)((float)((ulong)apuStack_d0[0] >> 0x20) +
                         *(float *)(ppuVar35 + 1) * fStack_ac +
                        *(float *)((long)ppuVar35 + 0xc) * (float)((ulong)uStack_90 >> 0x20));
              auVar66._8_4_ =
                   (int)(SUB84(apuStack_d0[1],0) + *(float *)(ppuVar35 + 2) * fStack_a8 +
                        *(float *)((long)ppuVar35 + 0x14) * (float)uStack_88);
              auVar66._12_4_ =
                   (int)((float)((ulong)apuStack_d0[1] >> 0x20) +
                         *(float *)(ppuVar35 + 3) * fStack_a4 +
                        *(float *)((long)ppuVar35 + 0x1c) * (float)((ulong)uStack_88 >> 0x20));
              auVar73._0_4_ =
                   (int)((float)uStack_c0 + *(float *)ppuVar35 * (float)uStack_a0 +
                        *(float *)((long)ppuVar35 + 4) * (float)uStack_80);
              auVar73._4_4_ =
                   (int)((float)((ulong)uStack_c0 >> 0x20) +
                         *(float *)(ppuVar35 + 1) * (float)((ulong)uStack_a0 >> 0x20) +
                        *(float *)((long)ppuVar35 + 0xc) * (float)((ulong)uStack_80 >> 0x20));
              auVar73._8_4_ =
                   (int)((float)uStack_b8 + *(float *)(ppuVar35 + 2) * (float)uStack_98 +
                        *(float *)((long)ppuVar35 + 0x14) * (float)uStack_78);
              auVar73._12_4_ =
                   (int)((float)((ulong)uStack_b8 >> 0x20) +
                         *(float *)(ppuVar35 + 3) * (float)((ulong)uStack_98 >> 0x20) +
                        *(float *)((long)ppuVar35 + 0x1c) * (float)((ulong)uStack_78 >> 0x20));
              auVar53 = NEON_smax(auVar66,ZEXT216(0),4);
              auVar67 = NEON_smax(auVar73,ZEXT216(0),4);
              auVar12._4_4_ = iVar8;
              auVar12._0_4_ = iVar8;
              auVar12._8_4_ = iVar8;
              auVar12._12_4_ = iVar8;
              auVar53 = NEON_smin(auVar53,auVar12,4);
              auVar17._4_4_ = iVar4;
              auVar17._0_4_ = iVar4;
              auVar17._8_4_ = iVar4;
              auVar17._12_4_ = iVar4;
              auVar67 = NEON_smin(auVar67,auVar17,4);
              auVar74._0_8_ =
                   CONCAT44(auVar67._4_4_ * iVar5 + auVar53._4_4_ * 3,
                            auVar67._0_4_ * iVar5 + auVar53._0_4_ * 3);
              auVar74._8_4_ = auVar67._8_4_ * iVar5 + auVar53._8_4_ * 3;
              auVar74._12_4_ = auVar67._12_4_ * iVar5 + auVar53._12_4_ * 3;
              uStack_48 = auVar74._8_8_;
              uStack_50 = auVar74._0_8_;
              puVar29 = param_6;
              do {
                iVar40 = *(int *)((long)param_2 + lVar26);
                if (iVar39 + iVar5 * iVar4 + -8 < iVar40) {
                  sVar47 = 0;
                  pbVar31 = (byte *)((long)param_1 + (long)iVar40);
                  iVar40 = 3;
                  do {
                    sVar47 = sVar47 + (ushort)pbVar31[-3] + (ushort)*pbVar31 + (ushort)pbVar31[3];
                    pbVar31 = pbVar31 + lVar28;
                    iVar40 = iVar40 + -1;
                  } while (iVar40 != 0);
                  uVar30 = sVar47 / 9;
                }
                else {
                  puVar27 = (ulong *)((long)puVar36 + (long)(puVar38 + iVar40));
                  sVar47 = 0;
                  sVar57 = 0;
                  sVar58 = 0;
                  sVar59 = 0;
                  iVar40 = 3;
                  do {
                    auVar75._0_8_ = *puVar27;
                    auVar75._8_8_ = 0;
                    uVar50 = a64_TBL(ZEXT816(0),auVar75,0xffffff06ff03ff00);
                    sVar47 = sVar47 + (short)uVar50;
                    sVar57 = sVar57 + (short)((ulong)uVar50 >> 0x10);
                    sVar58 = sVar58 + (short)((ulong)uVar50 >> 0x20);
                    sVar59 = sVar59 + (short)((ulong)uVar50 >> 0x30);
                    puVar27 = (ulong *)((long)puVar27 + lVar28);
                    iVar40 = iVar40 + -1;
                  } while (iVar40 != 0);
                  uVar30 = (ushort)(sVar47 + sVar57 + sVar58 + sVar59) / 9;
                }
                param_6 = puVar29 + 1;
                *puVar29 = uVar30;
                lVar26 = lVar26 + 4;
                puVar29 = param_6;
              } while (lVar26 != 0x10);
              ppuVar34 = param_3 + 4;
              ppuVar35 = param_3;
            } while (param_3 + 4 <= ppuVar24);
          }
          if (param_3 < ppuVar24) {
            do {
              iVar39 = 0;
              iVar23 = (int)(fVar44 + (float)uStack_68 * *(float *)param_3 +
                            (float)uStack_60 * *(float *)((long)param_3 + 4));
              iVar40 = iVar23;
              if (iVar8 <= iVar23) {
                iVar40 = iVar8;
              }
              iVar25 = (int)(fVar45 + uStack_68._4_4_ * *(float *)param_3 +
                            uStack_60._4_4_ * *(float *)((long)param_3 + 4));
              iVar41 = iVar25;
              if (iVar4 <= iVar25) {
                iVar41 = iVar4;
              }
              iVar2 = 0;
              if (-1 < iVar25) {
                iVar2 = iVar41;
              }
              iVar41 = 0;
              if (-1 < iVar23) {
                iVar41 = iVar40 * 3;
              }
              pbVar31 = (byte *)((long)puVar36 +
                                (long)(puVar38 + (long)iVar41 + (long)(iVar2 * iVar5) + 3));
              iVar40 = 3;
              do {
                bVar6 = *pbVar31;
                bVar7 = pbVar31[3];
                iVar39 = iVar39 + (uint)pbVar31[-3] + (uint)bVar6 + (uint)bVar7;
                pbVar31 = pbVar31 + lVar28;
                iVar40 = iVar40 + -1;
              } while (iVar40 != 0);
              *param_6 = (short)iVar39 / 9;
              param_3 = param_3 + 1;
              param_6 = param_6 + 1;
            } while (param_3 < ppuVar24);
            param_1 = (undefined **)0x0;
            param_2 = (undefined8 *)(ulong)((uint)bVar6 + (uint)bVar7);
          }
          goto LAB_1096a6560;
        }
        lVar26 = 3;
        apuStack_d0[0] = puVar38;
        apuStack_d0[1] = *(undefined **)(puVar37 + 0x10);
      }
      else {
        if (iVar4 != 3) goto LAB_1096a64ec;
        puVar38 = *(undefined **)(puVar37 + 8);
        iVar4 = *(int *)(puVar37 + 0x10);
        iVar39 = *(int *)(puVar37 + 0x14);
        iVar5 = *(int *)(puVar37 + 0x18);
        iVar8 = iVar39 + -9;
        if ((iVar39 >= 9 && iVar4 != 1) && (iVar39 < 9 || 0 < iVar4)) {
          lVar26 = 0;
          uVar49 = iVar4 - 2;
          uStack_68 = param_4[1];
          uStack_60 = param_4[2];
          fVar44 = (float)*param_4 + -0.5;
          fVar45 = (float)((ulong)*param_4 >> 0x20) + 0.5;
          auStack_70 = (undefined1  [8])CONCAT44(fVar45,fVar44);
          puVar42 = &uStack_c0;
          do {
            uVar3 = *(undefined4 *)(auStack_70 + lVar26);
            param_1 = (undefined **)(auStack_70 + lVar26 + 4);
            iVar4 = *(int *)param_1;
            puVar42[-1] = CONCAT44(uVar3,uVar3);
            puVar42[-2] = CONCAT44(uVar3,uVar3);
            puVar42[1] = CONCAT44(iVar4,iVar4);
            *puVar42 = CONCAT44(iVar4,iVar4);
            lVar26 = lVar26 + 8;
            puVar42 = puVar42 + 4;
          } while (lVar26 != 0x18);
          puVar38 = puVar38 + (long)puVar36;
          ppuVar24 = (undefined **)((long)param_3 + (((long)param_2 << 0x20) >> 0x1d));
          if (0x1f < (long)(-((ulong)param_2 >> 0x1f & 1) & 0xfffffff800000000 |
                           ((ulong)param_2 & 0xffffffff) << 3)) {
            param_1 = param_3 + 4;
            ppuVar34 = param_3;
            do {
              param_3 = param_1;
              lVar26 = 0;
              auVar64._0_4_ =
                   (int)(SUB84(apuStack_d0[0],0) + *(float *)ppuVar34 * fStack_b0 +
                        *(float *)((long)ppuVar34 + 4) * (float)uStack_90);
              auVar64._4_4_ =
                   (int)((float)((ulong)apuStack_d0[0] >> 0x20) +
                         *(float *)(ppuVar34 + 1) * fStack_ac +
                        *(float *)((long)ppuVar34 + 0xc) * (float)((ulong)uStack_90 >> 0x20));
              auVar64._8_4_ =
                   (int)(SUB84(apuStack_d0[1],0) + *(float *)(ppuVar34 + 2) * fStack_a8 +
                        *(float *)((long)ppuVar34 + 0x14) * (float)uStack_88);
              auVar64._12_4_ =
                   (int)((float)((ulong)apuStack_d0[1] >> 0x20) +
                         *(float *)(ppuVar34 + 3) * fStack_a4 +
                        *(float *)((long)ppuVar34 + 0x1c) * (float)((ulong)uStack_88 >> 0x20));
              auVar72._0_4_ =
                   (int)((float)uStack_c0 + *(float *)ppuVar34 * (float)uStack_a0 +
                        *(float *)((long)ppuVar34 + 4) * (float)uStack_80);
              auVar72._4_4_ =
                   (int)((float)((ulong)uStack_c0 >> 0x20) +
                         *(float *)(ppuVar34 + 1) * (float)((ulong)uStack_a0 >> 0x20) +
                        *(float *)((long)ppuVar34 + 0xc) * (float)((ulong)uStack_80 >> 0x20));
              auVar72._8_4_ =
                   (int)((float)uStack_b8 + *(float *)(ppuVar34 + 2) * (float)uStack_98 +
                        *(float *)((long)ppuVar34 + 0x14) * (float)uStack_78);
              auVar72._12_4_ =
                   (int)((float)((ulong)uStack_b8 >> 0x20) +
                         *(float *)(ppuVar34 + 3) * (float)((ulong)uStack_98 >> 0x20) +
                        *(float *)((long)ppuVar34 + 0x1c) * (float)((ulong)uStack_78 >> 0x20));
              auVar53 = NEON_smax(auVar64,ZEXT216(0),4);
              auVar67 = NEON_smax(auVar72,ZEXT216(0),4);
              auVar11._4_4_ = iVar8;
              auVar11._0_4_ = iVar8;
              auVar11._8_4_ = iVar8;
              auVar11._12_4_ = iVar8;
              auVar53 = NEON_smin(auVar53,auVar11,4);
              auVar16._4_4_ = uVar49;
              auVar16._0_4_ = uVar49;
              auVar16._8_4_ = uVar49;
              auVar16._12_4_ = uVar49;
              auVar67 = NEON_smin(auVar67,auVar16,4);
              uStack_48 = CONCAT44(auVar67._12_4_ * iVar5 + auVar53._12_4_ * 3,
                                   auVar67._8_4_ * iVar5 + auVar53._8_4_ * 3);
              uStack_50 = CONCAT44(auVar67._4_4_ * iVar5 + auVar53._4_4_ * 3,
                                   auVar67._0_4_ * iVar5 + auVar53._0_4_ * 3);
              puVar29 = param_6;
              do {
                param_2 = (undefined8 *)(long)*(int *)((long)&uStack_50 + lVar26);
                puVar27 = (ulong *)(puVar38 + (long)param_2);
                if ((int)(iVar39 + iVar5 * uVar49 + -8) < *(int *)((long)&uStack_50 + lVar26)) {
                  uVar48 = (uint)*(byte *)((long)puVar27 + 3) + (uint)(byte)*puVar27;
                  param_2 = (undefined8 *)(ulong)uVar48;
                  uVar48 = uVar48 + *(byte *)((long)puVar27 + 6);
                }
                else {
                  auVar65._0_8_ = *puVar27;
                  auVar65._8_8_ = 0;
                  uVar50 = a64_TBL(ZEXT816(0),auVar65,0xffffff06ff03ff00);
                  uVar48 = (uint)(ushort)((short)uVar50 + (short)((ulong)uVar50 >> 0x10) +
                                          (short)((ulong)uVar50 >> 0x20) +
                                         (short)((ulong)uVar50 >> 0x30));
                }
                param_6 = puVar29 + 1;
                *puVar29 = (ushort)(uVar48 / 3);
                lVar26 = lVar26 + 4;
                puVar29 = param_6;
              } while (lVar26 != 0x10);
              param_1 = param_3 + 4;
              ppuVar34 = param_3;
            } while (param_1 <= ppuVar24);
          }
          if (param_3 < ppuVar24) {
            do {
              ppuVar34 = param_3 + 1;
              iVar39 = (int)(fVar44 + (float)uStack_68 * *(float *)param_3 +
                            (float)uStack_60 * *(float *)((long)param_3 + 4));
              iVar4 = iVar39;
              if (iVar8 <= iVar39) {
                iVar4 = iVar8;
              }
              uVar43 = (uint)(fVar45 + uStack_68._4_4_ * *(float *)param_3 +
                             uStack_60._4_4_ * *(float *)((long)param_3 + 4));
              uVar48 = uVar43;
              if ((int)uVar49 <= (int)uVar43) {
                uVar48 = uVar49;
              }
              param_1 = (undefined **)(ulong)uVar48;
              uVar1 = 0;
              if (-1 < (int)uVar43) {
                uVar1 = uVar48;
              }
              iVar40 = 0;
              if (-1 < iVar39) {
                iVar40 = iVar4 * 3;
              }
              pbVar31 = puVar38 + (long)iVar40 + (long)(int)(uVar1 * iVar5);
              *param_6 = (ushort)(((uint)pbVar31[3] + (uint)*pbVar31 + (uint)pbVar31[6]) / 3);
              param_6 = param_6 + 1;
              param_3 = ppuVar34;
            } while (ppuVar34 < ppuVar24);
          }
          goto LAB_1096a6560;
        }
        lVar26 = 1;
        apuStack_d0[0] = puVar38;
        apuStack_d0[1] = *(undefined **)(puVar37 + 0x10);
      }
      uStack_c0 = CONCAT44(3,iVar5);
      lVar28 = 3;
    }
    else {
LAB_1096a64ec:
      apuStack_d0[1] = *(undefined **)(puVar37 + 0x10);
      apuStack_d0[0] = *(undefined **)(puVar37 + 8);
      uStack_c0 = *(undefined8 *)(puVar37 + 0x18);
    }
    param_1 = apuStack_d0;
    func_0x0001096a7844(param_1,puVar36,lVar26,lVar28,(ulong)param_2 & 0xffffffff,param_3);
    param_2 = puVar36;
    goto LAB_1096a6560;
  }
  puVar36 = (undefined8 *)(ulong)*(uint *)(puVar37 + 0x20);
  if ((int)*(uint *)(puVar37 + 0x20) < 0) {
LAB_1096a64b8:
    apuStack_d0[0] = &DAT_10f6842c6;
    apuStack_d0[1] = &UNK_10f57c3d6;
    uStack_c0 = 0xd9;
    param_2 = (undefined8 *)&UNK_10f56faf5;
    param_1 = apuStack_d0;
    FUN_1096993dc();
    goto LAB_1096a6560;
  }
  lVar28 = (long)*(short *)(puVar37 + 0x24);
  lVar26 = (long)*(short *)(puVar37 + 0x26);
  if (*(short *)(puVar37 + 0x24) < 4) {
    iVar4 = *(short *)(puVar37 + 0x26) * 3;
    if (iVar4 == 9) {
      puVar38 = *(undefined **)(puVar37 + 8);
      iVar4 = *(int *)(puVar37 + 0x10);
      iVar39 = *(int *)(puVar37 + 0x14);
      iVar5 = *(int *)(puVar37 + 0x18);
      iVar8 = iVar39 + -0xc;
      if ((iVar39 >= 0xc && iVar4 != 3) && (iVar39 < 0xc || 2 < iVar4)) {
        lVar26 = 0;
        iVar4 = iVar4 + -4;
        uStack_68 = param_4[1];
        uStack_60 = param_4[2];
        fVar44 = (float)*param_4 + -0.5;
        fVar45 = (float)((ulong)*param_4 >> 0x20) + -0.5;
        auStack_70 = (undefined1  [8])CONCAT44(fVar45,fVar44);
        puVar42 = &uStack_c0;
        param_1 = (undefined **)auStack_70;
        do {
          uVar3 = *(undefined4 *)((long)param_1 + lVar26);
          uVar9 = *(undefined4 *)(auStack_70 + lVar26 + 4);
          puVar42[-1] = CONCAT44(uVar3,uVar3);
          puVar42[-2] = CONCAT44(uVar3,uVar3);
          puVar42[1] = CONCAT44(uVar9,uVar9);
          *puVar42 = CONCAT44(uVar9,uVar9);
          lVar26 = lVar26 + 8;
          puVar42 = puVar42 + 4;
        } while (lVar26 != 0x18);
        ppuVar24 = (undefined **)((long)param_3 + (((long)param_2 << 0x20) >> 0x1d));
        if (0x1f < (long)(-((ulong)param_2 >> 0x1f & 1) & 0xfffffff800000000 |
                         ((ulong)param_2 & 0xffffffff) << 3)) {
          param_1 = (undefined **)((long)puVar36 + (long)(puVar38 + 8));
          param_2 = &uStack_50;
          ppuVar34 = param_3 + 4;
          ppuVar35 = param_3;
          do {
            param_3 = ppuVar34;
            lVar26 = 0;
            auVar78._0_4_ =
                 (int)(SUB84(apuStack_d0[0],0) + *(float *)ppuVar35 * fStack_b0 +
                      *(float *)((long)ppuVar35 + 4) * (float)uStack_90);
            auVar78._4_4_ =
                 (int)((float)((ulong)apuStack_d0[0] >> 0x20) + *(float *)(ppuVar35 + 1) * fStack_ac
                      + *(float *)((long)ppuVar35 + 0xc) * (float)((ulong)uStack_90 >> 0x20));
            auVar78._8_4_ =
                 (int)(SUB84(apuStack_d0[1],0) + *(float *)(ppuVar35 + 2) * fStack_a8 +
                      *(float *)((long)ppuVar35 + 0x14) * (float)uStack_88);
            auVar78._12_4_ =
                 (int)((float)((ulong)apuStack_d0[1] >> 0x20) + *(float *)(ppuVar35 + 3) * fStack_a4
                      + *(float *)((long)ppuVar35 + 0x1c) * (float)((ulong)uStack_88 >> 0x20));
            auVar55._0_4_ =
                 (int)((float)uStack_c0 + *(float *)ppuVar35 * (float)uStack_a0 +
                      *(float *)((long)ppuVar35 + 4) * (float)uStack_80);
            auVar55._4_4_ =
                 (int)((float)((ulong)uStack_c0 >> 0x20) +
                       *(float *)(ppuVar35 + 1) * (float)((ulong)uStack_a0 >> 0x20) +
                      *(float *)((long)ppuVar35 + 0xc) * (float)((ulong)uStack_80 >> 0x20));
            auVar55._8_4_ =
                 (int)((float)uStack_b8 + *(float *)(ppuVar35 + 2) * (float)uStack_98 +
                      *(float *)((long)ppuVar35 + 0x14) * (float)uStack_78);
            auVar55._12_4_ =
                 (int)((float)((ulong)uStack_b8 >> 0x20) +
                       *(float *)(ppuVar35 + 3) * (float)((ulong)uStack_98 >> 0x20) +
                      *(float *)((long)ppuVar35 + 0x1c) * (float)((ulong)uStack_78 >> 0x20));
            auVar67 = NEON_smax(auVar78,ZEXT216(0),4);
            auVar53 = NEON_smax(auVar55,ZEXT216(0),4);
            auVar14._4_4_ = iVar8;
            auVar14._0_4_ = iVar8;
            auVar14._8_4_ = iVar8;
            auVar14._12_4_ = iVar8;
            auVar67 = NEON_smin(auVar67,auVar14,4);
            auVar19._4_4_ = iVar4;
            auVar19._0_4_ = iVar4;
            auVar19._8_4_ = iVar4;
            auVar19._12_4_ = iVar4;
            auVar53 = NEON_smin(auVar53,auVar19,4);
            auVar68._0_8_ =
                 CONCAT44(auVar67._4_4_ * 4 + auVar53._4_4_ * iVar5,
                          auVar67._0_4_ * 4 + auVar53._0_4_ * iVar5);
            auVar68._8_4_ = auVar67._8_4_ * 4 + auVar53._8_4_ * iVar5;
            auVar68._12_4_ = auVar67._12_4_ * 4 + auVar53._12_4_ * iVar5;
            uStack_48 = auVar68._8_8_;
            uStack_50 = auVar68._0_8_;
            puVar29 = param_6;
            do {
              iVar40 = *(int *)((long)param_2 + lVar26);
              if (iVar39 + iVar5 * iVar4 + -0x10 < iVar40) {
                sVar47 = 0;
                pbVar31 = (byte *)((long)param_1 + (long)iVar40);
                iVar40 = 3;
                do {
                  sVar47 = sVar47 + (ushort)pbVar31[-8] + (ushort)pbVar31[-4] + (ushort)*pbVar31;
                  pbVar31 = pbVar31 + iVar5;
                  iVar40 = iVar40 + -1;
                } while (iVar40 != 0);
                uVar30 = sVar47 / 9;
              }
              else {
                pauVar32 = (undefined1 (*) [16])((long)puVar36 + (long)(puVar38 + iVar40));
                sVar47 = 0;
                sVar57 = 0;
                sVar58 = 0;
                sVar59 = 0;
                sVar60 = 0;
                sVar61 = 0;
                sVar62 = 0;
                sVar63 = 0;
                iVar40 = 3;
                do {
                  auVar21._12_4_ = 0xffffffff;
                  auVar21._0_12_ = auVar22;
                  auVar53 = a64_TBL(ZEXT816(0),*pauVar32,auVar21);
                  sVar47 = sVar47 + auVar53._0_2_;
                  sVar57 = sVar57 + auVar53._2_2_;
                  sVar58 = sVar58 + auVar53._4_2_;
                  sVar59 = sVar59 + auVar53._6_2_;
                  sVar60 = sVar60 + auVar53._8_2_;
                  sVar61 = sVar61 + auVar53._10_2_;
                  sVar62 = sVar62 + auVar53._12_2_;
                  sVar63 = sVar63 + auVar53._14_2_;
                  pauVar32 = (undefined1 (*) [16])(*pauVar32 + iVar5);
                  iVar40 = iVar40 + -1;
                } while (iVar40 != 0);
                uVar30 = (ushort)(sVar47 + sVar57 + sVar58 + sVar59 + sVar60 + sVar61 + sVar62 +
                                 sVar63) / 9;
              }
              param_6 = puVar29 + 1;
              *puVar29 = uVar30;
              lVar26 = lVar26 + 4;
              puVar29 = param_6;
            } while (lVar26 != 0x10);
            ppuVar34 = param_3 + 4;
            ppuVar35 = param_3;
          } while (param_3 + 4 <= ppuVar24);
        }
        if (param_3 < ppuVar24) {
          do {
            iVar39 = 0;
            iVar23 = (int)(fVar44 + (float)uStack_68 * *(float *)param_3 +
                          (float)uStack_60 * *(float *)((long)param_3 + 4));
            iVar40 = iVar23;
            if (iVar8 <= iVar23) {
              iVar40 = iVar8;
            }
            iVar25 = (int)(fVar45 + uStack_68._4_4_ * *(float *)param_3 +
                          uStack_60._4_4_ * *(float *)((long)param_3 + 4));
            iVar41 = iVar25;
            if (iVar4 <= iVar25) {
              iVar41 = iVar4;
            }
            iVar2 = 0;
            if (-1 < iVar25) {
              iVar2 = iVar41;
            }
            iVar41 = 0;
            if (-1 < iVar23) {
              iVar41 = iVar40 << 2;
            }
            pbVar31 = (byte *)((long)puVar36 +
                              (long)(puVar38 + (long)iVar41 + (long)(iVar2 * iVar5) + 4));
            iVar40 = 3;
            do {
              param_2 = (undefined8 *)(ulong)((uint)*pbVar31 + (uint)pbVar31[4]);
              iVar39 = iVar39 + (uint)pbVar31[-4] + (uint)*pbVar31 + (uint)pbVar31[4];
              pbVar31 = pbVar31 + iVar5;
              iVar40 = iVar40 + -1;
            } while (iVar40 != 0);
            *param_6 = (short)iVar39 / 9;
            param_3 = param_3 + 1;
            param_6 = param_6 + 1;
          } while (param_3 < ppuVar24);
          param_1 = (undefined **)0x0;
        }
        goto LAB_1096a6560;
      }
      lVar26 = 3;
      apuStack_d0[0] = puVar38;
      apuStack_d0[1] = *(undefined **)(puVar37 + 0x10);
    }
    else {
      if (iVar4 != 3) goto LAB_1096a6514;
      puVar38 = *(undefined **)(puVar37 + 8);
      iVar4 = *(int *)(puVar37 + 0x10);
      iVar39 = *(int *)(puVar37 + 0x14);
      iVar5 = *(int *)(puVar37 + 0x18);
      iVar8 = iVar39 + -0xc;
      if ((iVar39 >= 0xc && iVar4 != 1) && (iVar39 < 0xc || 0 < iVar4)) {
        lVar26 = 0;
        uVar49 = iVar4 - 2;
        uStack_68 = param_4[1];
        uStack_60 = param_4[2];
        fVar44 = (float)*param_4 + -0.5;
        fVar45 = (float)((ulong)*param_4 >> 0x20) + 0.5;
        auStack_70 = (undefined1  [8])CONCAT44(fVar45,fVar44);
        puVar42 = &uStack_c0;
        do {
          uVar3 = *(undefined4 *)(auStack_70 + lVar26);
          param_1 = (undefined **)(auStack_70 + lVar26 + 4);
          iVar4 = *(int *)param_1;
          puVar42[-1] = CONCAT44(uVar3,uVar3);
          puVar42[-2] = CONCAT44(uVar3,uVar3);
          puVar42[1] = CONCAT44(iVar4,iVar4);
          *puVar42 = CONCAT44(iVar4,iVar4);
          lVar26 = lVar26 + 8;
          puVar42 = puVar42 + 4;
        } while (lVar26 != 0x18);
        puVar38 = puVar38 + (long)puVar36;
        ppuVar24 = (undefined **)((long)param_3 + (((long)param_2 << 0x20) >> 0x1d));
        if (0x1f < (long)(-((ulong)param_2 >> 0x1f & 1) & 0xfffffff800000000 |
                         ((ulong)param_2 & 0xffffffff) << 3)) {
          param_1 = param_3 + 4;
          ppuVar34 = param_3;
          do {
            param_3 = param_1;
            lVar26 = 0;
            auVar76._0_4_ =
                 (int)(SUB84(apuStack_d0[0],0) + *(float *)ppuVar34 * fStack_b0 +
                      *(float *)((long)ppuVar34 + 4) * (float)uStack_90);
            auVar76._4_4_ =
                 (int)((float)((ulong)apuStack_d0[0] >> 0x20) + *(float *)(ppuVar34 + 1) * fStack_ac
                      + *(float *)((long)ppuVar34 + 0xc) * (float)((ulong)uStack_90 >> 0x20));
            auVar76._8_4_ =
                 (int)(SUB84(apuStack_d0[1],0) + *(float *)(ppuVar34 + 2) * fStack_a8 +
                      *(float *)((long)ppuVar34 + 0x14) * (float)uStack_88);
            auVar76._12_4_ =
                 (int)((float)((ulong)apuStack_d0[1] >> 0x20) + *(float *)(ppuVar34 + 3) * fStack_a4
                      + *(float *)((long)ppuVar34 + 0x1c) * (float)((ulong)uStack_88 >> 0x20));
            auVar51._0_4_ =
                 (int)((float)uStack_c0 + *(float *)ppuVar34 * (float)uStack_a0 +
                      *(float *)((long)ppuVar34 + 4) * (float)uStack_80);
            auVar51._4_4_ =
                 (int)((float)((ulong)uStack_c0 >> 0x20) +
                       *(float *)(ppuVar34 + 1) * (float)((ulong)uStack_a0 >> 0x20) +
                      *(float *)((long)ppuVar34 + 0xc) * (float)((ulong)uStack_80 >> 0x20));
            auVar51._8_4_ =
                 (int)((float)uStack_b8 + *(float *)(ppuVar34 + 2) * (float)uStack_98 +
                      *(float *)((long)ppuVar34 + 0x14) * (float)uStack_78);
            auVar51._12_4_ =
                 (int)((float)((ulong)uStack_b8 >> 0x20) +
                       *(float *)(ppuVar34 + 3) * (float)((ulong)uStack_98 >> 0x20) +
                      *(float *)((long)ppuVar34 + 0x1c) * (float)((ulong)uStack_78 >> 0x20));
            auVar67 = NEON_smax(auVar76,ZEXT216(0),4);
            auVar53 = NEON_smax(auVar51,ZEXT216(0),4);
            auVar13._4_4_ = iVar8;
            auVar13._0_4_ = iVar8;
            auVar13._8_4_ = iVar8;
            auVar13._12_4_ = iVar8;
            auVar67 = NEON_smin(auVar67,auVar13,4);
            auVar18._4_4_ = uVar49;
            auVar18._0_4_ = uVar49;
            auVar18._8_4_ = uVar49;
            auVar18._12_4_ = uVar49;
            auVar53 = NEON_smin(auVar53,auVar18,4);
            uStack_48 = CONCAT44(auVar67._12_4_ * 4 + auVar53._12_4_ * iVar5,
                                 auVar67._8_4_ * 4 + auVar53._8_4_ * iVar5);
            uStack_50 = CONCAT44(auVar67._4_4_ * 4 + auVar53._4_4_ * iVar5,
                                 auVar67._0_4_ * 4 + auVar53._0_4_ * iVar5);
            puVar29 = param_6;
            do {
              param_2 = (undefined8 *)(long)*(int *)((long)&uStack_50 + lVar26);
              pauVar32 = (undefined1 (*) [16])(puVar38 + (long)param_2);
              if ((int)(iVar39 + iVar5 * uVar49 + -0x10) < *(int *)((long)&uStack_50 + lVar26)) {
                uVar48 = (uint)(byte)(*pauVar32)[4] + (uint)(byte)(*pauVar32)[0];
                param_2 = (undefined8 *)(ulong)uVar48;
                uVar48 = uVar48 + (byte)(*pauVar32)[8];
              }
              else {
                auVar20._12_4_ = 0xffffffff;
                auVar20._0_12_ = auVar22;
                auVar53 = a64_TBL(ZEXT816(0),*pauVar32,auVar20);
                uVar48 = (uint)(ushort)(auVar53._0_2_ + auVar53._2_2_ + auVar53._4_2_ +
                                        auVar53._6_2_ + auVar53._8_2_ + auVar53._10_2_ +
                                        auVar53._12_2_ + auVar53._14_2_);
              }
              param_6 = puVar29 + 1;
              *puVar29 = (ushort)(uVar48 / 3);
              lVar26 = lVar26 + 4;
              puVar29 = param_6;
            } while (lVar26 != 0x10);
            param_1 = param_3 + 4;
            ppuVar34 = param_3;
          } while (param_1 <= ppuVar24);
        }
        if (param_3 < ppuVar24) {
          do {
            ppuVar34 = param_3 + 1;
            iVar39 = (int)(fVar44 + (float)uStack_68 * *(float *)param_3 +
                          (float)uStack_60 * *(float *)((long)param_3 + 4));
            iVar4 = iVar39;
            if (iVar8 <= iVar39) {
              iVar4 = iVar8;
            }
            uVar43 = (uint)(fVar45 + uStack_68._4_4_ * *(float *)param_3 +
                           uStack_60._4_4_ * *(float *)((long)param_3 + 4));
            uVar48 = uVar43;
            if ((int)uVar49 <= (int)uVar43) {
              uVar48 = uVar49;
            }
            param_1 = (undefined **)(ulong)uVar48;
            uVar1 = 0;
            if (-1 < (int)uVar43) {
              uVar1 = uVar48;
            }
            iVar40 = 0;
            if (-1 < iVar39) {
              iVar40 = iVar4 << 2;
            }
            pbVar31 = puVar38 + (long)iVar40 + (long)(int)(uVar1 * iVar5);
            *param_6 = (ushort)(((uint)pbVar31[4] + (uint)*pbVar31 + (uint)pbVar31[8]) / 3);
            param_6 = param_6 + 1;
            param_3 = ppuVar34;
          } while (ppuVar34 < ppuVar24);
        }
        goto LAB_1096a6560;
      }
      lVar26 = 1;
      apuStack_d0[0] = puVar38;
      apuStack_d0[1] = *(undefined **)(puVar37 + 0x10);
    }
    uStack_c0 = CONCAT44(4,iVar5);
    lVar28 = 3;
  }
  else {
LAB_1096a6514:
    apuStack_d0[1] = *(undefined **)(puVar37 + 0x10);
    apuStack_d0[0] = *(undefined **)(puVar37 + 8);
    uStack_c0 = *(undefined8 *)(puVar37 + 0x18);
  }
  param_1 = apuStack_d0;
  func_0x0001096a79a0(param_1,puVar36,lVar26,lVar28,(ulong)param_2 & 0xffffffff,param_3);
  param_2 = puVar36;
LAB_1096a6560:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uVar46 = param_2[1];
  uVar50 = *param_2;
  uVar3 = *(undefined4 *)(param_2 + 2);
  iVar4 = *(int *)((long)param_2 + 0x14);
  ppuVar24 = param_1;
  FUN_1096a7580();
  iVar39 = *(int *)ppuVar24;
  ppuVar24 = param_1;
  FUN_1096a7580(param_1,0x11382aa28);
  iVar5 = *(int *)ppuVar24;
  FUN_1096a7580(param_1,0x11382aa30);
  iVar8 = *(int *)param_1;
  puVar36 = (undefined8 *)0x28;
  _malloc();
  if (puVar36 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar36 + 3) = 1;
    *puVar36 = 0;
    puVar36[1] = 0;
    *(undefined4 *)(puVar36 + 2) = 0;
    puVar36 = puVar36 + 4;
    *puVar36 = &PTR_DAT_110b00de0;
  }
  ppuStack_158 = &PTR_FUN_110b02e08;
  puStack_150 = puVar36;
  if ((iVar39 < 0) || (iVar4 <= iVar39)) {
    puStack_148 = &UNK_10f57c3a1;
    puStack_140 = &UNK_10f57c3d6;
    uStack_138 = 0xf7;
    FUN_109699380(&puStack_148);
  }
  sVar47 = (short)iVar5;
  sVar57 = (short)iVar8;
  if (0x80 < (int)sVar57 * (int)sVar47) {
    puStack_148 = &UNK_10f57c47e;
    puStack_140 = &UNK_10f57c3d6;
    uStack_138 = 0xf8;
    FUN_1096993dc(&puStack_148,&UNK_10f57c4a0);
  }
  if (sVar47 < 1) {
    puStack_148 = &UNK_10f57c4c6;
    puStack_140 = &UNK_10f57c3d6;
    uStack_138 = 0xf9;
    FUN_1096993dc(&puStack_148,&UNK_10f57c4d6);
  }
  if (sVar57 < 1) {
    puStack_148 = &UNK_10f57c4eb;
    puStack_140 = &UNK_10f57c3d6;
    uStack_138 = 0xfa;
    FUN_1096993dc(&puStack_148,&UNK_10f57c4fc);
  }
  puVar36 = puStack_150 + -4;
  (**(code **)*puStack_150)();
  func_0x000107c34ef0();
  _realloc();
  *(undefined4 *)(puVar36 + 3) = 1;
  *puVar36 = 0;
  puVar36[1] = 0;
  *(undefined4 *)(puVar36 + 2) = 0;
  puVar36[6] = uVar46;
  puVar36[5] = uVar50;
  *(undefined4 *)(puVar36 + 7) = uVar3;
  *(int *)((long)puVar36 + 0x3c) = iVar4;
  *(int *)(puVar36 + 8) = iVar39;
  *(short *)((long)puVar36 + 0x44) = sVar47;
  *(short *)((long)puVar36 + 0x46) = sVar57;
  puStack_150 = puVar36 + 4;
  *puStack_150 = &PTR_FUN_110b02ed8;
  FUN_1096a57ec(extraout_x8,&ppuStack_158);
  ppuStack_158 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_158);
  return;
}



/* Entry: 1096a731c; end: 1096a754b;  */

void FUN_1096a731c(undefined8 param_1,int *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar11 = param_3[1];
  uVar10 = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 2);
  iVar2 = *(int *)((long)param_3 + 0x14);
  piVar8 = param_2;
  FUN_1096a7580(param_2,0x11382aa20);
  iVar3 = *piVar8;
  piVar8 = param_2;
  FUN_1096a7580(param_2,0x11382aa28);
  iVar4 = *piVar8;
  FUN_1096a7580(param_2,0x11382aa30);
  iVar5 = *param_2;
  puVar9 = (undefined8 *)0x28;
  _malloc();
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar9 + 3) = 1;
    *puVar9 = 0;
    puVar9[1] = 0;
    *(undefined4 *)(puVar9 + 2) = 0;
    puVar9 = puVar9 + 4;
    *puVar9 = &PTR_DAT_110b00de0;
  }
  ppuStack_78 = &PTR_FUN_110b02e08;
  puStack_70 = puVar9;
  if ((iVar3 < 0) || (iVar2 <= iVar3)) {
    puStack_68 = &UNK_10f57c3a1;
    puStack_60 = &UNK_10f57c3d6;
    uStack_58 = 0xf7;
    FUN_109699380(&puStack_68);
  }
  sVar6 = (short)iVar4;
  sVar7 = (short)iVar5;
  if (0x80 < (int)sVar7 * (int)sVar6) {
    puStack_68 = &UNK_10f57c47e;
    puStack_60 = &UNK_10f57c3d6;
    uStack_58 = 0xf8;
    FUN_1096993dc(&puStack_68,&UNK_10f57c4a0);
  }
  if (sVar6 < 1) {
    puStack_68 = &UNK_10f57c4c6;
    puStack_60 = &UNK_10f57c3d6;
    uStack_58 = 0xf9;
    FUN_1096993dc(&puStack_68,&UNK_10f57c4d6);
  }
  if (sVar7 < 1) {
    puStack_68 = &UNK_10f57c4eb;
    puStack_60 = &UNK_10f57c3d6;
    uStack_58 = 0xfa;
    FUN_1096993dc(&puStack_68,&UNK_10f57c4fc);
  }
  puVar9 = puStack_70 + -4;
  (**(code **)*puStack_70)();
  func_0x000107c34ef0();
  _realloc();
  *(undefined4 *)(puVar9 + 3) = 1;
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined4 *)(puVar9 + 2) = 0;
  puVar9[6] = uVar11;
  puVar9[5] = uVar10;
  *(undefined4 *)(puVar9 + 7) = uVar1;
  *(int *)((long)puVar9 + 0x3c) = iVar2;
  *(int *)(puVar9 + 8) = iVar3;
  *(short *)((long)puVar9 + 0x44) = sVar6;
  *(short *)((long)puVar9 + 0x46) = sVar7;
  puStack_70 = puVar9 + 4;
  *puStack_70 = &PTR_FUN_110b02ed8;
  FUN_1096a57ec(param_1,&ppuStack_78);
  ppuStack_78 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_78);
  return;
}



/* Entry: 1096a754c; end: 1096a757f;  */

undefined8 * FUN_1096a754c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096a7580; end: 1096a75cf;  */

void FUN_1096a7580(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096a75cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x30))();
  return;
}



/* Entry: 1096a75d0; end: 1096a764f;  */

void FUN_1096a75d0(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 == 0) || (puVar2 = *(undefined8 **)(lVar1 + 8), puVar2 == (undefined8 *)0x0)) {
    param_2 = (undefined8 *)*param_2;
    lVar1 = *(long *)(param_1 + 8) + -0x20;
    puVar2 = param_2;
    (**(code **)*param_2)();
    FUN_109696718(lVar1,param_2);
    *(undefined8 **)(lVar1 + 8) = puVar2;
  }
  *(undefined4 *)puVar2 = *param_3;
  return;
}



/* Entry: 1096a7650; end: 1096a7683;  */

void FUN_1096a7650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096a7684; end: 1096a76b7;  */

undefined8 * FUN_1096a7684(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096a76b8; end: 1096a76eb;  */

void FUN_1096a76b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096a76ec; end: 1096a76f3;  */

void FUN_1096a76ec(void)

{
  return;
}



/* Entry: 1096a76f4; end: 1096a7af7;  */

void FUN_1096a76f4(long *param_1,ulong param_2,int param_3,uint param_4,ulong param_5,long param_6,
                  float *param_7)

{
  long lVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  long in_stack_00000008;
  
  iVar6 = (int)param_1[1];
  iVar7 = *(int *)((long)param_1 + 0xc);
  if ((0 < iVar7 && 0 < iVar6) && (0 < (int)param_5)) {
    uVar17 = 0;
    lVar1 = *param_1 + (param_2 & 0xffffffff);
    iVar8 = (int)param_1[2];
    fVar22 = *param_7;
    fVar23 = param_7[1];
    fVar18 = param_7[2];
    fVar19 = param_7[3];
    fVar20 = param_7[4];
    fVar21 = param_7[5];
    iVar9 = (int)(short)((short)param_4 * (short)param_3);
    do {
      pfVar2 = (float *)(param_6 + uVar17 * 8);
      fVar24 = *pfVar2;
      fVar25 = pfVar2[1];
      uVar15 = (uint)((1.0 - (float)(int)param_4 * 0.5) + fVar22 + fVar18 * fVar24 + fVar20 * fVar25
                     );
      iVar13 = (int)((1.0 - (float)param_3 * 0.5) + fVar23 + fVar19 * fVar24 + fVar21 * fVar25);
      if (((((int)uVar15 < 0) || ((int)(iVar7 - param_4) < (int)uVar15)) || (iVar13 < 0)) ||
         (iVar6 - param_3 < iVar13)) {
        uVar3 = uVar15;
        if ((int)(iVar7 - 1U) <= (int)uVar15) {
          uVar3 = iVar7 - 1U;
        }
        uVar4 = 0;
        if (-1 < (int)uVar15) {
          uVar4 = uVar3;
        }
        iVar12 = iVar13;
        if (iVar6 + -1 <= iVar13) {
          iVar12 = iVar6 + -1;
        }
        iVar5 = 0;
        if (-1 < iVar13) {
          iVar5 = iVar12;
        }
        uVar11 = (ushort)*(byte *)(lVar1 + iVar5 * iVar8 + (long)(int)uVar4);
      }
      else {
        if (param_3 < 1) {
          iVar13 = 0;
        }
        else {
          iVar12 = 0;
          sVar10 = 0;
          lVar14 = lVar1 + (long)iVar8 * (long)iVar13 + (ulong)uVar15;
          do {
            if (0 < (int)param_4) {
              uVar16 = 0;
              do {
                sVar10 = sVar10 + (ushort)*(byte *)(lVar14 + uVar16);
                uVar16 = uVar16 + 1;
              } while (param_4 != uVar16);
            }
            lVar14 = lVar14 + iVar8;
            iVar12 = iVar12 + 1;
          } while (iVar12 != param_3);
          iVar13 = (int)sVar10;
        }
        uVar11 = 0;
        if (iVar9 != 0) {
          uVar11 = (ushort)(iVar13 / iVar9);
        }
      }
      *(ushort *)(in_stack_00000008 + uVar17 * 2) = uVar11;
      uVar17 = uVar17 + 1;
    } while (uVar17 != (param_5 & 0x7fffffff));
  }
  return;
}



/* Entry: 1096a7af8; end: 1096a7b23;  */

void FUN_1096a7af8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(4);
  return;
}



/* Entry: 1096a7b24; end: 1096a7b67;  */

bool FUN_1096a7b24(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c051);
  return (int)plVar1 == 1;
}



/* Entry: 1096a7b68; end: 1096a7b7b;  */

undefined8 FUN_1096a7b68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096a7b7c; end: 1096a7bd3;  */

void FUN_1096a7b7c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b02eb0;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096a7bd4; end: 1096a7bdb;  */

void FUN_1096a7bd4(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1096a7bdc; end: 1096a7c53;  */

void FUN_1096a7bdc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  param_1[1] = puVar1;
  *param_1 = &PTR_FUN_110b02e88;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096a7c54; end: 1096a7c83;  */

bool FUN_1096a7c54(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b02eb0,0);
  return param_1 != 0;
}



/* Entry: 1096a7c84; end: 1096a7ccf;  */

void FUN_1096a7c84(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  return;
}



/* Entry: 1096a7cd0; end: 1096a8417;  */

void FUN_1096a7cd0(undefined1 *param_1,uint param_2,float *param_3,undefined8 *param_4,
                  undefined4 param_5,ulong *param_6)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar19;
  float *pfVar20;
  undefined8 *puVar21;
  int iVar22;
  float *pfVar23;
  ulong *puVar24;
  undefined4 *extraout_x8;
  long lVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 auStack_170 [4];
  undefined8 uStack_160;
  undefined4 uStack_158;
  int iStack_154;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  undefined1 auStack_108 [16];
  undefined4 auStack_f8 [2];
  undefined4 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 auStack_b0 [2];
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int aiStack_30 [6];
  long lStack_18;
  
  puVar21 = auStack_b0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *(long *)(param_1 + 8);
  iVar22 = *(int *)(lVar25 + 0x1c);
  if (iVar22 == 4) {
    uVar4 = *(uint *)(lVar25 + 0x20);
    lVar26 = *(long *)(lVar25 + 8);
    iVar22 = *(int *)(lVar25 + 0x10);
    iVar27 = *(int *)(lVar25 + 0x14);
    iVar5 = *(int *)(lVar25 + 0x18);
    iVar8 = iVar22 + -1;
    iVar9 = iVar27 + -1;
    if ((int)uVar4 < 0) {
      if (0 < iVar27 && 0 < iVar22) {
        lVar25 = 0;
        uStack_48 = param_4[1];
        uStack_40 = param_4[2];
        fVar30 = (float)*param_4 + 0.5;
        fVar31 = (float)((ulong)*param_4 >> 0x20) + 0.5;
        uStack_50 = CONCAT44(fVar31,fVar30);
        puVar21 = &uStack_a0;
        do {
          uVar10 = *(undefined4 *)((long)&uStack_50 + lVar25);
          uVar11 = *(undefined4 *)((long)&uStack_50 + lVar25 + 4);
          puVar21[-1] = CONCAT44(uVar10,uVar10);
          puVar21[-2] = CONCAT44(uVar10,uVar10);
          puVar21[1] = CONCAT44(uVar11,uVar11);
          *puVar21 = CONCAT44(uVar11,uVar11);
          lVar25 = lVar25 + 8;
          puVar21 = puVar21 + 4;
        } while (lVar25 != 0x18);
        pfVar2 = (float *)((long)param_3 + ((long)((ulong)param_2 << 0x20) >> 0x1d));
        if (0x1f < (long)(-(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3)) {
          pfVar23 = param_3;
          pfVar20 = param_3 + 8;
          do {
            param_3 = pfVar20;
            lVar25 = 0;
            auVar34._0_4_ =
                 (int)((float)auStack_b0[0] + *pfVar23 * fStack_90 + pfVar23[1] * (float)uStack_70);
            auVar34._4_4_ =
                 (int)((float)((ulong)auStack_b0[0] >> 0x20) + pfVar23[2] * fStack_8c +
                      pfVar23[3] * (float)((ulong)uStack_70 >> 0x20));
            auVar34._8_4_ =
                 (int)((float)auStack_b0[1] + pfVar23[4] * fStack_88 + pfVar23[5] * (float)uStack_68
                      );
            auVar34._12_4_ =
                 (int)((float)((ulong)auStack_b0[1] >> 0x20) + pfVar23[6] * fStack_84 +
                      pfVar23[7] * (float)((ulong)uStack_68 >> 0x20));
            auVar32._0_4_ = (int)((float)uStack_a0 + *pfVar23 * fStack_80 + pfVar23[1] * fStack_60);
            auVar32._4_4_ =
                 (int)((float)((ulong)uStack_a0 >> 0x20) + pfVar23[2] * fStack_7c +
                      pfVar23[3] * fStack_5c);
            auVar32._8_4_ = (int)(fStack_98 + pfVar23[4] * fStack_78 + pfVar23[5] * fStack_58);
            auVar32._12_4_ = (int)(fStack_94 + pfVar23[6] * fStack_74 + pfVar23[7] * fStack_54);
            auVar39 = NEON_smax(auVar34,ZEXT216(0),4);
            auVar32 = NEON_smax(auVar32,ZEXT216(0),4);
            auVar37._4_4_ = iVar9;
            auVar37._0_4_ = iVar9;
            auVar37._8_4_ = iVar9;
            auVar37._12_4_ = iVar9;
            auVar34 = NEON_smin(auVar39,auVar37,4);
            auVar39._4_4_ = iVar8;
            auVar39._0_4_ = iVar8;
            auVar39._8_4_ = iVar8;
            auVar39._12_4_ = iVar8;
            auVar37 = NEON_smin(auVar32,auVar39,4);
            aiStack_30[2] = auVar34._8_4_ * 4 + auVar37._8_4_ * iVar5;
            aiStack_30[3] = auVar34._12_4_ * 4 + auVar37._12_4_ * iVar5;
            aiStack_30[0] = auVar34._0_4_ * 4 + auVar37._0_4_ * iVar5;
            aiStack_30[1] = auVar34._4_4_ * 4 + auVar37._4_4_ * iVar5;
            do {
              lVar29 = 0;
              iVar22 = aiStack_30[lVar25];
              do {
                *(ushort *)((long)param_6 + lVar29 * 2) =
                     (ushort)*(byte *)(lVar26 + iVar22 + lVar29);
                lVar29 = lVar29 + 1;
              } while (lVar29 != 4);
              param_6 = param_6 + 1;
              lVar25 = lVar25 + 1;
            } while (lVar25 != 4);
            pfVar23 = param_3;
            pfVar20 = param_3 + 8;
          } while (param_3 + 8 <= pfVar2);
        }
        if (param_3 < pfVar2) {
          do {
            lVar25 = 0;
            iVar27 = (int)(fVar30 + (float)uStack_48 * *param_3 + (float)uStack_40 * param_3[1]);
            iVar22 = iVar27;
            if (iVar9 <= iVar27) {
              iVar22 = iVar9;
            }
            iVar28 = (int)(fVar31 + uStack_48._4_4_ * *param_3 + uStack_40._4_4_ * param_3[1]);
            iVar19 = iVar28;
            if (iVar8 <= iVar28) {
              iVar19 = iVar8;
            }
            iVar3 = 0;
            if (-1 < iVar28) {
              iVar3 = iVar19;
            }
            iVar19 = 0;
            if (-1 < iVar27) {
              iVar19 = iVar22 << 2;
            }
            do {
              *(ushort *)((long)param_6 + lVar25 * 2) =
                   (ushort)*(byte *)(lVar26 + (iVar19 + iVar3 * iVar5) + lVar25);
              lVar25 = lVar25 + 1;
            } while (lVar25 != 4);
            param_6 = param_6 + 1;
            param_3 = param_3 + 2;
          } while (param_3 < pfVar2);
        }
      }
    }
    else if (0 < iVar27 && 0 < iVar22) {
      lVar25 = 0;
      uStack_48 = param_4[1];
      uStack_40 = param_4[2];
      fVar30 = (float)*param_4 + 0.5;
      fVar31 = (float)((ulong)*param_4 >> 0x20) + 0.5;
      uStack_50 = CONCAT44(fVar31,fVar30);
      puVar21 = &uStack_a0;
      do {
        uVar10 = *(undefined4 *)((long)&uStack_50 + lVar25);
        uVar11 = *(undefined4 *)((long)&uStack_50 + lVar25 + 4);
        puVar21[-1] = CONCAT44(uVar10,uVar10);
        puVar21[-2] = CONCAT44(uVar10,uVar10);
        puVar21[1] = CONCAT44(uVar11,uVar11);
        *puVar21 = CONCAT44(uVar11,uVar11);
        lVar25 = lVar25 + 8;
        puVar21 = puVar21 + 4;
      } while (lVar25 != 0x18);
      lVar26 = lVar26 + (ulong)uVar4;
      pfVar2 = (float *)((long)param_3 + ((long)((ulong)param_2 << 0x20) >> 0x1d));
      if (0x1f < (long)(-(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3)) {
        pfVar23 = param_3;
        puVar24 = param_6;
        do {
          param_3 = pfVar23 + 8;
          auVar40._0_4_ =
               (int)((float)uStack_70 * pfVar23[1] + (float)auStack_b0[0] + fStack_90 * *pfVar23);
          auVar40._4_4_ =
               (int)((float)((ulong)uStack_70 >> 0x20) * pfVar23[3] +
                    (float)((ulong)auStack_b0[0] >> 0x20) + fStack_8c * pfVar23[2]);
          auVar40._8_4_ =
               (int)((float)uStack_68 * pfVar23[5] + (float)auStack_b0[1] + fStack_88 * pfVar23[4]);
          auVar40._12_4_ =
               (int)((float)((ulong)uStack_68 >> 0x20) * pfVar23[7] +
                    (float)((ulong)auStack_b0[1] >> 0x20) + fStack_84 * pfVar23[6]);
          auVar35._0_4_ = (int)(fStack_60 * pfVar23[1] + (float)uStack_a0 + fStack_80 * *pfVar23);
          auVar35._4_4_ = (int)(fStack_5c * pfVar23[3] + uStack_a0._4_4_ + fStack_7c * pfVar23[2]);
          auVar35._8_4_ = (int)(fStack_58 * pfVar23[5] + fStack_98 + fStack_78 * pfVar23[4]);
          auVar35._12_4_ = (int)(fStack_54 * pfVar23[7] + fStack_94 + fStack_74 * pfVar23[6]);
          auVar39 = NEON_smax(auVar40,ZEXT216(0),4);
          auVar37 = NEON_smax(auVar35,ZEXT216(0),4);
          auVar14._4_4_ = iVar9;
          auVar14._0_4_ = iVar9;
          auVar14._8_4_ = iVar9;
          auVar14._12_4_ = iVar9;
          auVar39 = NEON_smin(auVar39,auVar14,4);
          auVar17._4_4_ = iVar8;
          auVar17._0_4_ = iVar8;
          auVar17._8_4_ = iVar8;
          auVar17._12_4_ = iVar8;
          auVar37 = NEON_smin(auVar37,auVar17,4);
          param_6 = puVar24 + 1;
          *puVar24 = (ulong)CONCAT16(*(undefined1 *)
                                      (lVar26 + (auVar39._12_4_ * 4 + auVar37._12_4_ * iVar5)),
                                     (uint6)CONCAT14(*(undefined1 *)
                                                      (lVar26 + (auVar39._8_4_ * 4 +
                                                                auVar37._8_4_ * iVar5)),
                                                     (uint)CONCAT12(*(undefined1 *)
                                                                     (lVar26 + (auVar39._4_4_ * 4 +
                                                                               auVar37._4_4_ * iVar5
                                                                               )),
                                                                    (ushort)*(byte *)(lVar26 + (
                                                  auVar39._0_4_ * 4 + auVar37._0_4_ * iVar5)))));
          pfVar20 = pfVar23 + 0x10;
          pfVar23 = param_3;
          puVar24 = param_6;
        } while (pfVar20 <= pfVar2);
      }
      if (param_3 < pfVar2) {
        do {
          pfVar23 = param_3 + 2;
          iVar27 = (int)(fVar30 + (float)uStack_48 * *param_3 + (float)uStack_40 * param_3[1]);
          iVar22 = iVar27;
          if (iVar9 <= iVar27) {
            iVar22 = iVar9;
          }
          iVar28 = (int)(fVar31 + uStack_48._4_4_ * *param_3 + uStack_40._4_4_ * param_3[1]);
          iVar19 = iVar28;
          if (iVar8 <= iVar28) {
            iVar19 = iVar8;
          }
          iVar3 = 0;
          if (-1 < iVar28) {
            iVar3 = iVar19;
          }
          iVar19 = 0;
          if (-1 < iVar27) {
            iVar19 = iVar22 << 2;
          }
          *(ushort *)param_6 = (ushort)*(byte *)(lVar26 + (iVar19 + iVar3 * iVar5));
          param_3 = pfVar23;
          param_6 = (ulong *)((long)param_6 + 2);
        } while (pfVar23 < pfVar2);
      }
    }
  }
  else if (iVar22 == 3) {
    uVar4 = *(uint *)(lVar25 + 0x20);
    lVar26 = *(long *)(lVar25 + 8);
    iVar22 = *(int *)(lVar25 + 0x10);
    iVar27 = *(int *)(lVar25 + 0x14);
    iVar5 = *(int *)(lVar25 + 0x18);
    iVar8 = iVar22 + -1;
    iVar9 = iVar27 + -1;
    if ((int)uVar4 < 0) {
      if (0 < iVar27 && 0 < iVar22) {
        lVar25 = 0;
        uStack_48 = param_4[1];
        uStack_40 = param_4[2];
        fVar30 = (float)*param_4 + 0.5;
        fVar31 = (float)((ulong)*param_4 >> 0x20) + 0.5;
        uStack_50 = CONCAT44(fVar31,fVar30);
        puVar21 = &uStack_a0;
        do {
          uVar10 = *(undefined4 *)((long)&uStack_50 + lVar25);
          uVar11 = *(undefined4 *)((long)&uStack_50 + lVar25 + 4);
          puVar21[-1] = CONCAT44(uVar10,uVar10);
          puVar21[-2] = CONCAT44(uVar10,uVar10);
          puVar21[1] = CONCAT44(uVar11,uVar11);
          *puVar21 = CONCAT44(uVar11,uVar11);
          lVar25 = lVar25 + 8;
          puVar21 = puVar21 + 4;
        } while (lVar25 != 0x18);
        pfVar2 = (float *)((long)param_3 + ((long)((ulong)param_2 << 0x20) >> 0x1d));
        if (0x1f < (long)(-(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3)) {
          pfVar23 = param_3;
          pfVar20 = param_3 + 8;
          do {
            param_3 = pfVar20;
            lVar25 = 0;
            iVar22 = (int)((float)((ulong)auStack_b0[0] >> 0x20) + pfVar23[2] * fStack_8c +
                          pfVar23[3] * (float)((ulong)uStack_70 >> 0x20));
            iVar27 = (int)((float)auStack_b0[1] + pfVar23[4] * fStack_88 +
                          pfVar23[5] * (float)uStack_68);
            iVar19 = (int)((float)((ulong)auStack_b0[1] >> 0x20) + pfVar23[6] * fStack_84 +
                          pfVar23[7] * (float)((ulong)uStack_68 >> 0x20));
            auVar33._0_4_ = (int)((float)uStack_a0 + *pfVar23 * fStack_80 + pfVar23[1] * fStack_60);
            auVar33._4_4_ = (int)(uStack_a0._4_4_ + pfVar23[2] * fStack_7c + pfVar23[3] * fStack_5c)
            ;
            auVar33._8_4_ = (int)(fStack_98 + pfVar23[4] * fStack_78 + pfVar23[5] * fStack_58);
            auVar33._12_4_ = (int)(fStack_94 + pfVar23[6] * fStack_74 + pfVar23[7] * fStack_54);
            auVar18[4] = (char)iVar22;
            auVar18._0_4_ =
                 (int)((float)auStack_b0[0] + *pfVar23 * fStack_90 + pfVar23[1] * (float)uStack_70);
            auVar18[5] = (char)((uint)iVar22 >> 8);
            auVar18[6] = (char)((uint)iVar22 >> 0x10);
            auVar18[7] = (char)((uint)iVar22 >> 0x18);
            auVar18[8] = (char)iVar27;
            auVar18[9] = (char)((uint)iVar27 >> 8);
            auVar18[10] = (char)((uint)iVar27 >> 0x10);
            auVar18[0xb] = (char)((uint)iVar27 >> 0x18);
            auVar18[0xc] = (char)iVar19;
            auVar18[0xd] = (char)((uint)iVar19 >> 8);
            auVar18[0xe] = (char)((uint)iVar19 >> 0x10);
            auVar18[0xf] = (char)((uint)iVar19 >> 0x18);
            auVar39 = NEON_smax(auVar18,ZEXT216(0),4);
            auVar37 = NEON_smax(auVar33,ZEXT216(0),4);
            auVar13._4_4_ = iVar9;
            auVar13._0_4_ = iVar9;
            auVar13._8_4_ = iVar9;
            auVar13._12_4_ = iVar9;
            auVar39 = NEON_smin(auVar39,auVar13,4);
            auVar16._4_4_ = iVar8;
            auVar16._0_4_ = iVar8;
            auVar16._8_4_ = iVar8;
            auVar16._12_4_ = iVar8;
            auVar37 = NEON_smin(auVar37,auVar16,4);
            aiStack_30[2] = auVar37._8_4_ * iVar5 + auVar39._8_4_ * 3;
            aiStack_30[3] = auVar37._12_4_ * iVar5 + auVar39._12_4_ * 3;
            aiStack_30[0] = auVar37._0_4_ * iVar5 + auVar39._0_4_ * 3;
            aiStack_30[1] = auVar37._4_4_ * iVar5 + auVar39._4_4_ * 3;
            do {
              lVar29 = 0;
              iVar22 = aiStack_30[lVar25];
              do {
                *(ushort *)((long)param_6 + lVar29 * 2) =
                     (ushort)*(byte *)(lVar26 + iVar22 + lVar29);
                lVar29 = lVar29 + 1;
              } while (lVar29 != 3);
              param_6 = (ulong *)((long)param_6 + 6);
              lVar25 = lVar25 + 1;
            } while (lVar25 != 4);
            pfVar23 = param_3;
            pfVar20 = param_3 + 8;
          } while (param_3 + 8 <= pfVar2);
        }
        if (param_3 < pfVar2) {
          do {
            lVar25 = 0;
            iVar27 = (int)(fVar30 + (float)uStack_48 * *param_3 + (float)uStack_40 * param_3[1]);
            iVar22 = iVar27;
            if (iVar9 <= iVar27) {
              iVar22 = iVar9;
            }
            iVar28 = (int)(fVar31 + uStack_48._4_4_ * *param_3 + uStack_40._4_4_ * param_3[1]);
            iVar19 = iVar28;
            if (iVar8 <= iVar28) {
              iVar19 = iVar8;
            }
            iVar3 = 0;
            if (-1 < iVar28) {
              iVar3 = iVar19;
            }
            iVar19 = 0;
            if (-1 < iVar27) {
              iVar19 = iVar22 * 3;
            }
            do {
              *(ushort *)((long)param_6 + lVar25 * 2) =
                   (ushort)*(byte *)(lVar26 + (iVar19 + iVar3 * iVar5) + lVar25);
              lVar25 = lVar25 + 1;
            } while (lVar25 != 3);
            param_6 = (ulong *)((long)param_6 + 6);
            param_3 = param_3 + 2;
          } while (param_3 < pfVar2);
        }
      }
    }
    else if (0 < iVar27 && 0 < iVar22) {
      lVar25 = 0;
      uStack_48 = param_4[1];
      uStack_40 = param_4[2];
      fVar30 = (float)*param_4 + 0.5;
      fVar31 = (float)((ulong)*param_4 >> 0x20) + 0.5;
      uStack_50 = CONCAT44(fVar31,fVar30);
      puVar21 = &uStack_a0;
      do {
        uVar10 = *(undefined4 *)((long)&uStack_50 + lVar25);
        uVar11 = *(undefined4 *)((long)&uStack_50 + lVar25 + 4);
        puVar21[-1] = CONCAT44(uVar10,uVar10);
        puVar21[-2] = CONCAT44(uVar10,uVar10);
        puVar21[1] = CONCAT44(uVar11,uVar11);
        *puVar21 = CONCAT44(uVar11,uVar11);
        lVar25 = lVar25 + 8;
        puVar21 = puVar21 + 4;
      } while (lVar25 != 0x18);
      lVar26 = lVar26 + (ulong)uVar4;
      pfVar2 = (float *)((long)param_3 + ((long)((ulong)param_2 << 0x20) >> 0x1d));
      if (0x1f < (long)(-(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3)) {
        pfVar23 = param_3;
        puVar24 = param_6;
        do {
          param_3 = pfVar23 + 8;
          auVar36._0_4_ = (int)(fStack_60 * pfVar23[1] + (float)uStack_a0 + fStack_80 * *pfVar23);
          auVar36._4_4_ = (int)(fStack_5c * pfVar23[3] + uStack_a0._4_4_ + fStack_7c * pfVar23[2]);
          auVar36._8_4_ = (int)(fStack_58 * pfVar23[5] + fStack_98 + fStack_78 * pfVar23[4]);
          auVar36._12_4_ = (int)(fStack_54 * pfVar23[7] + fStack_94 + fStack_74 * pfVar23[6]);
          auVar38._0_4_ =
               (int)((float)uStack_70 * pfVar23[1] + (float)auStack_b0[0] + fStack_90 * *pfVar23);
          auVar38._4_4_ =
               (int)((float)((ulong)uStack_70 >> 0x20) * pfVar23[3] +
                    (float)((ulong)auStack_b0[0] >> 0x20) + fStack_8c * pfVar23[2]);
          auVar38._8_4_ =
               (int)((float)uStack_68 * pfVar23[5] + (float)auStack_b0[1] + fStack_88 * pfVar23[4]);
          auVar38._12_4_ =
               (int)((float)((ulong)uStack_68 >> 0x20) * pfVar23[7] +
                    (float)((ulong)auStack_b0[1] >> 0x20) + fStack_84 * pfVar23[6]);
          auVar39 = NEON_smax(auVar38,ZEXT216(0),4);
          auVar37 = NEON_smax(auVar36,ZEXT216(0),4);
          auVar12._4_4_ = iVar9;
          auVar12._0_4_ = iVar9;
          auVar12._8_4_ = iVar9;
          auVar12._12_4_ = iVar9;
          auVar39 = NEON_smin(auVar39,auVar12,4);
          auVar15._4_4_ = iVar8;
          auVar15._0_4_ = iVar8;
          auVar15._8_4_ = iVar8;
          auVar15._12_4_ = iVar8;
          auVar37 = NEON_smin(auVar37,auVar15,4);
          param_6 = puVar24 + 1;
          *puVar24 = (ulong)CONCAT16(*(undefined1 *)
                                      (lVar26 + (auVar37._12_4_ * iVar5 + auVar39._12_4_ * 3)),
                                     (uint6)CONCAT14(*(undefined1 *)
                                                      (lVar26 + (auVar37._8_4_ * iVar5 +
                                                                auVar39._8_4_ * 3)),
                                                     (uint)CONCAT12(*(undefined1 *)
                                                                     (lVar26 + (auVar37._4_4_ *
                                                                                iVar5 + auVar39.
                                                  _4_4_ * 3)),
                                                  (ushort)*(byte *)(lVar26 + (auVar37._0_4_ * iVar5
                                                                             + auVar39._0_4_ * 3))))
                                    );
          pfVar20 = pfVar23 + 0x10;
          pfVar23 = param_3;
          puVar24 = param_6;
        } while (pfVar20 <= pfVar2);
      }
      if (param_3 < pfVar2) {
        do {
          pfVar23 = param_3 + 2;
          iVar27 = (int)(fVar30 + (float)uStack_48 * *param_3 + (float)uStack_40 * param_3[1]);
          iVar22 = iVar27;
          if (iVar9 <= iVar27) {
            iVar22 = iVar9;
          }
          iVar28 = (int)(fVar31 + uStack_48._4_4_ * *param_3 + uStack_40._4_4_ * param_3[1]);
          iVar19 = iVar28;
          if (iVar8 <= iVar28) {
            iVar19 = iVar8;
          }
          iVar3 = 0;
          if (-1 < iVar28) {
            iVar3 = iVar19;
          }
          iVar19 = 0;
          if (-1 < iVar27) {
            iVar19 = iVar22 * 3;
          }
          *(ushort *)param_6 = (ushort)*(byte *)(lVar26 + (iVar19 + iVar3 * iVar5));
          param_3 = pfVar23;
          param_6 = (ulong *)((long)param_6 + 2);
        } while (pfVar23 < pfVar2);
      }
    }
  }
  else if (iVar22 == 1) {
    iVar22 = *(int *)(lVar25 + 0x20);
    if (iVar22 < 0) {
      auStack_b0[1] = *(undefined8 *)(lVar25 + 0x10);
      auStack_b0[0] = *(undefined8 *)(lVar25 + 8);
      uStack_a0 = *(undefined8 *)(lVar25 + 0x18);
      iVar22 = 0;
    }
    else {
      auStack_b0[1] = *(undefined8 *)(lVar25 + 0x10);
      auStack_b0[0] = *(undefined8 *)(lVar25 + 8);
      uStack_a0 = *(undefined8 *)(lVar25 + 0x18);
    }
    FUN_1096a8878(auStack_b0,iVar22,param_2,param_3,param_4,param_5);
    param_1 = (undefined1 *)puVar21;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  lVar25 = *(long *)(param_1 + 8);
  if ((*(int *)(lVar25 + 0x20) < 0) || (*(int *)(lVar25 + 0x1c) == 1)) {
    func_0x0001096a6280(&uStack_158,lVar25 + 8);
    *extraout_x8 = 0x42ff0000;
    *(undefined8 *)(extraout_x8 + 3) = 0;
    *(undefined8 *)(extraout_x8 + 1) = 0;
    *(undefined8 *)(extraout_x8 + 7) = 0;
    *(undefined8 *)(extraout_x8 + 5) = 0;
    *(undefined8 *)(extraout_x8 + 0xb) = 0;
    *(undefined8 *)(extraout_x8 + 9) = 0;
    *(undefined8 *)(extraout_x8 + 0xe) = 0;
    *(undefined8 *)(extraout_x8 + 0xc) = 0;
    *(undefined8 *)(extraout_x8 + 0x14) = 0;
    *(undefined4 **)(extraout_x8 + 0x10) = extraout_x8 + 2;
    *(undefined4 **)(extraout_x8 + 0x12) = extraout_x8 + 0x14;
    *(undefined8 *)(extraout_x8 + 0x16) = 0;
    auStack_f8[0] = 0x2010000;
    uStack_e8 = 0;
    puStack_f0 = extraout_x8;
    FUN_109a479a0(&uStack_158,auStack_f8);
    if (lStack_120 != 0) {
      piVar1 = (int *)(lStack_120 + 0x14);
      do {
        iVar22 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar22 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar22 + -1 == 0) {
        func_0x000109a848d4(&uStack_158);
      }
    }
    if (0 < iStack_154) {
      lVar25 = 0;
      do {
        *(undefined4 *)(lStack_118 + lVar25 * 4) = 0;
        lVar25 = lVar25 + 1;
      } while (lVar25 < iStack_154);
    }
  }
  else {
    *extraout_x8 = 0x42ff0000;
    *(undefined8 *)(extraout_x8 + 3) = 0;
    *(undefined8 *)(extraout_x8 + 1) = 0;
    *(undefined8 *)(extraout_x8 + 7) = 0;
    *(undefined8 *)(extraout_x8 + 5) = 0;
    *(undefined8 *)(extraout_x8 + 0xb) = 0;
    *(undefined8 *)(extraout_x8 + 9) = 0;
    *(undefined8 *)(extraout_x8 + 0xe) = 0;
    *(undefined8 *)(extraout_x8 + 0xc) = 0;
    *(undefined8 *)(extraout_x8 + 0x14) = 0;
    *(undefined4 **)(extraout_x8 + 0x10) = extraout_x8 + 2;
    *(undefined4 **)(extraout_x8 + 0x12) = extraout_x8 + 0x14;
    *(undefined8 *)(extraout_x8 + 0x16) = 0;
    func_0x0001096a6280(&uStack_158,lVar25 + 8);
    uStack_e8 = 0;
    auStack_f8[0] = 0x1010000;
    auStack_170[0] = 0x2010000;
    uStack_160 = 0;
    puStack_f0 = &uStack_158;
    FUN_109a3f338(auStack_f8,auStack_170,*(undefined4 *)(*(long *)(param_1 + 8) + 0x20));
    if (lStack_120 != 0) {
      piVar1 = (int *)(lStack_120 + 0x14);
      do {
        iVar22 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar22 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar22 + -1 == 0) {
        func_0x000109a848d4(&uStack_158);
      }
    }
    if (0 < iStack_154) {
      lVar25 = 0;
      do {
        *(undefined4 *)(lStack_118 + lVar25 * 4) = 0;
        lVar25 = lVar25 + 1;
      } while (lVar25 < iStack_154);
    }
  }
  lStack_120 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  if (puStack_110 != auStack_108 && puStack_110 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_110 + -8));
  }
  return;
}



/* Entry: 1096a8418; end: 1096a8643;  */

void FUN_1096a8418(undefined4 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 auStack_c0 [2];
  undefined4 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [16];
  undefined4 auStack_48 [2];
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(param_2 + 8);
  if ((*(int *)(lVar5 + 0x20) < 0) || (*(int *)(lVar5 + 0x1c) == 1)) {
    func_0x0001096a6280(&uStack_a8,lVar5 + 8);
    *param_1 = 0x42ff0000;
    *(undefined8 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 7) = 0;
    *(undefined8 *)(param_1 + 5) = 0;
    *(undefined8 *)(param_1 + 0xb) = 0;
    *(undefined8 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
    *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
    *(undefined8 *)(param_1 + 0x16) = 0;
    auStack_48[0] = 0x2010000;
    uStack_38 = 0;
    puStack_40 = param_1;
    FUN_109a479a0(&uStack_a8,auStack_48);
    if (lStack_70 != 0) {
      piVar1 = (int *)(lStack_70 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_a8);
      }
    }
    if (0 < iStack_a4) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_68 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iStack_a4);
    }
  }
  else {
    *param_1 = 0x42ff0000;
    *(undefined8 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 7) = 0;
    *(undefined8 *)(param_1 + 5) = 0;
    *(undefined8 *)(param_1 + 0xb) = 0;
    *(undefined8 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
    *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
    *(undefined8 *)(param_1 + 0x16) = 0;
    func_0x0001096a6280(&uStack_a8,lVar5 + 8);
    uStack_38 = 0;
    auStack_48[0] = 0x1010000;
    auStack_c0[0] = 0x2010000;
    uStack_b0 = 0;
    puStack_b8 = param_1;
    puStack_40 = &uStack_a8;
    FUN_109a3f338(auStack_48,auStack_c0,*(undefined4 *)(*(long *)(param_2 + 8) + 0x20));
    if (lStack_70 != 0) {
      piVar1 = (int *)(lStack_70 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_a8);
      }
    }
    if (0 < iStack_a4) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_68 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iStack_a4);
    }
  }
  lStack_70 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  if (puStack_60 != auStack_58 && puStack_60 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_60 + -8));
  }
  return;
}



/* Entry: 1096a8644; end: 1096a879f;  */

void FUN_1096a8644(undefined8 param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuStack_68;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar8 = param_3[1];
  uVar7 = *param_3;
  uVar2 = *(undefined4 *)(param_3 + 2);
  iVar3 = *(int *)((long)param_3 + 0x14);
  FUN_1096a7580(param_2,0x11382aa38);
  uVar4 = *param_2;
  puVar5 = (undefined8 *)0x28;
  _malloc();
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 3) = 1;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    puVar5 = puVar5 + 4;
    *puVar5 = &PTR_DAT_110b00de0;
  }
  ppuStack_68 = &PTR_FUN_110b03008;
  if (iVar3 <= (int)uVar4) {
    puStack_58 = &UNK_10f57c592;
    puStack_50 = &UNK_10f57c5b2;
    uStack_48 = 0x7e;
    FUN_109699380(&puStack_58);
  }
  puVar6 = puVar5 + -4;
  (**(code **)*puVar5)(puVar5);
  func_0x000107c34ef0();
  _realloc();
  *(undefined4 *)(puVar6 + 3) = 1;
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)(puVar6 + 2) = 0;
  puVar6[8] = 0;
  puVar6[6] = uVar8;
  puVar6[5] = uVar7;
  *(undefined4 *)(puVar6 + 7) = uVar2;
  *(int *)((long)puVar6 + 0x3c) = iVar3;
  uVar1 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  if (iVar3 != 1) {
    uVar1 = uVar4;
  }
  *(uint *)(puVar6 + 8) = uVar1;
  puStack_60 = puVar6 + 4;
  *puStack_60 = &PTR_FUN_110b030d8;
  FUN_1096a57ec(param_1,&ppuStack_68);
  ppuStack_68 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_68);
  return;
}



/* Entry: 1096a87a0; end: 1096a87d3;  */

undefined8 * FUN_1096a87a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096a87d4; end: 1096a8807;  */

void FUN_1096a87d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096a8808; end: 1096a883b;  */

undefined8 * FUN_1096a8808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096a883c; end: 1096a886f;  */

void FUN_1096a883c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096a8870; end: 1096a8877;  */

void FUN_1096a8870(void)

{
  return;
}



/* Entry: 1096a8878; end: 1096a8a0b;  */

void FUN_1096a8878(long *param_1,uint param_2,ulong param_3,float *param_4,undefined8 *param_5,
                  undefined8 param_6,ulong *param_7)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 *puVar14;
  float *pfVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 auStack_80 [12];
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  iVar7 = *(int *)((long)param_1 + 0xc) + -1;
  if (0 < *(int *)((long)param_1 + 0xc) && 0 < (int)param_1[1]) {
    lVar12 = 0;
    iVar6 = (int)param_1[1] + -1;
    iVar5 = (int)param_1[2];
    lVar11 = *param_1;
    uStack_18 = param_5[1];
    uStack_10 = param_5[2];
    fVar17 = (float)*param_5 + 0.5;
    fVar18 = (float)((ulong)*param_5 >> 0x20) + 0.5;
    uStack_20 = CONCAT44(fVar18,fVar17);
    puVar14 = auStack_80 + 2;
    do {
      uVar8 = *(undefined4 *)((long)&uStack_20 + lVar12);
      uVar9 = *(undefined4 *)((long)&uStack_20 + lVar12 + 4);
      puVar14[-1] = CONCAT44(uVar8,uVar8);
      puVar14[-2] = CONCAT44(uVar8,uVar8);
      puVar14[1] = CONCAT44(uVar9,uVar9);
      *puVar14 = CONCAT44(uVar9,uVar9);
      lVar12 = lVar12 + 8;
      puVar14 = puVar14 + 4;
    } while (lVar12 != 0x18);
    lVar11 = lVar11 + (ulong)param_2;
    pfVar2 = (float *)((long)param_4 + ((long)(param_3 << 0x20) >> 0x1d));
    puVar10 = param_7;
    pfVar15 = param_4;
    if (0x1f < (long)(-(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3)) {
      do {
        param_4 = pfVar15 + 8;
        auVar22._0_4_ =
             (int)((float)auStack_80[8] * pfVar15[1] +
                  (float)auStack_80[0] + (float)auStack_80[4] * *pfVar15);
        auVar22._4_4_ =
             (int)((float)((ulong)auStack_80[8] >> 0x20) * pfVar15[3] +
                  (float)((ulong)auStack_80[0] >> 0x20) +
                  (float)((ulong)auStack_80[4] >> 0x20) * pfVar15[2]);
        auVar22._8_4_ =
             (int)((float)auStack_80[9] * pfVar15[5] +
                  (float)auStack_80[1] + (float)auStack_80[5] * pfVar15[4]);
        auVar22._12_4_ =
             (int)((float)((ulong)auStack_80[9] >> 0x20) * pfVar15[7] +
                  (float)((ulong)auStack_80[1] >> 0x20) +
                  (float)((ulong)auStack_80[5] >> 0x20) * pfVar15[6]);
        auVar19._0_4_ =
             (int)((float)auStack_80[10] * pfVar15[1] +
                  (float)auStack_80[2] + (float)auStack_80[6] * *pfVar15);
        auVar19._4_4_ =
             (int)((float)((ulong)auStack_80[10] >> 0x20) * pfVar15[3] +
                  (float)((ulong)auStack_80[2] >> 0x20) +
                  (float)((ulong)auStack_80[6] >> 0x20) * pfVar15[2]);
        auVar19._8_4_ =
             (int)((float)auStack_80[0xb] * pfVar15[5] +
                  (float)auStack_80[3] + (float)auStack_80[7] * pfVar15[4]);
        auVar19._12_4_ =
             (int)((float)((ulong)auStack_80[0xb] >> 0x20) * pfVar15[7] +
                  (float)((ulong)auStack_80[3] >> 0x20) +
                  (float)((ulong)auStack_80[7] >> 0x20) * pfVar15[6]);
        auVar21 = NEON_smax(auVar22,ZEXT216(0),4);
        auVar19 = NEON_smax(auVar19,ZEXT216(0),4);
        auVar20._4_4_ = iVar7;
        auVar20._0_4_ = iVar7;
        auVar20._8_4_ = iVar7;
        auVar20._12_4_ = iVar7;
        auVar22 = NEON_smin(auVar21,auVar20,4);
        auVar21._4_4_ = iVar6;
        auVar21._0_4_ = iVar6;
        auVar21._8_4_ = iVar6;
        auVar21._12_4_ = iVar6;
        auVar20 = NEON_smin(auVar19,auVar21,4);
        param_7 = puVar10 + 1;
        *puVar10 = (ulong)CONCAT16(*(undefined1 *)
                                    (lVar11 + (auVar22._12_4_ + auVar20._12_4_ * iVar5)),
                                   (uint6)CONCAT14(*(undefined1 *)
                                                    (lVar11 + (auVar22._8_4_ + auVar20._8_4_ * iVar5
                                                              )),
                                                   (uint)CONCAT12(*(undefined1 *)
                                                                   (lVar11 + (auVar22._4_4_ +
                                                                             auVar20._4_4_ * iVar5))
                                                                  ,(ushort)*(byte *)(lVar11 + (
                                                  auVar22._0_4_ + auVar20._0_4_ * iVar5)))));
        pfVar1 = pfVar15 + 0x10;
        puVar10 = param_7;
        pfVar15 = param_4;
      } while (pfVar1 <= pfVar2);
    }
    if (param_4 < pfVar2) {
      do {
        pfVar15 = param_4 + 2;
        iVar13 = (int)(fVar17 + (float)uStack_18 * *param_4 + (float)uStack_10 * param_4[1]);
        iVar4 = iVar13;
        if (iVar7 <= iVar13) {
          iVar4 = iVar7;
        }
        iVar16 = (int)(fVar18 + uStack_18._4_4_ * *param_4 + uStack_10._4_4_ * param_4[1]);
        iVar3 = 0;
        if (-1 < iVar13) {
          iVar3 = iVar4;
        }
        iVar4 = iVar16;
        if (iVar6 <= iVar16) {
          iVar4 = iVar6;
        }
        iVar13 = 0;
        if (-1 < iVar16) {
          iVar13 = iVar4;
        }
        *(ushort *)param_7 = (ushort)*(byte *)(lVar11 + (iVar3 + iVar13 * iVar5));
        param_4 = pfVar15;
        param_7 = (ulong *)((long)param_7 + 2);
      } while (pfVar15 < pfVar2);
    }
  }
  return;
}



/* Entry: 1096a8a0c; end: 1096a8a2b;  */

void FUN_1096a8a0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(4);
  return;
}



/* Entry: 1096a8a2c; end: 1096a8a6f;  */

bool FUN_1096a8a2c(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c051);
  return (int)plVar1 == 1;
}



/* Entry: 1096a8a70; end: 1096a8a8f;  */

undefined8 FUN_1096a8a70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096a8a90; end: 1096a8ae7;  */

void FUN_1096a8a90(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b030b0;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096a8ae8; end: 1096a8b5f;  */

void FUN_1096a8ae8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  param_1[1] = puVar1;
  *param_1 = &PTR_FUN_110b03088;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096a8b60; end: 1096a8b8f;  */

bool FUN_1096a8b60(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b030b0,0);
  return param_1 != 0;
}



/* Entry: 1096a8b90; end: 1096a8c6b;  */

undefined8 * FUN_1096a8b90(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b03208;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x30);
  puVar1[5] = 0x3f80000000000000;
  puVar1[4] = 0x3f800000;
  puVar1[3] = 0;
  puVar1[1] = &PTR_FUN_110b01d60;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b03358;
  FUN_1096a8c6c(param_1[1] + 8,param_2);
  lVar2 = param_1[1];
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *(undefined8 *)(lVar2 + 0x28) = param_3[2];
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  return param_1;
}



/* Entry: 1096a8c6c; end: 1096a8cf7;  */

undefined *** FUN_1096a8c6c(undefined8 *param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  iVar2 = (int)param_2;
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1096a57ec(&ppuStack_50,param_2);
  uVar3 = param_1[1];
  param_1[1] = uStack_48;
  *param_1 = ppuStack_50;
  ppuStack_50 = &PTR_FUN_110b01d60;
  uStack_48 = uVar3;
  func_0x000107c2acd4(&ppuStack_50);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  if (iVar2 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  return (undefined ***)(undefined1 *)0x6;
}



/* Entry: 1096a8cf8; end: 1096a8d07;  */

undefined8 FUN_1096a8cf8(void)

{
  return 6;
}



/* Entry: 1096a8d08; end: 1096a8dcb;  */

void FUN_1096a8d08(long param_1,uint param_2,float *param_3,float *param_4,undefined4 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 != 0) {
    pfVar2 = param_3;
    do {
      fVar4 = *param_4 + param_4[2] * *pfVar2 + param_4[4] * pfVar2[1];
      fVar5 = param_4[1] + param_4[3] * *pfVar2;
      fVar6 = fVar5 + param_4[5] * pfVar2[1];
      _expf();
      ___sincosf_stret();
      pfVar3 = pfVar2 + 2;
      *pfVar2 = fVar4 * fVar5;
      pfVar2[1] = fVar4 * fVar6;
      pfVar2 = pfVar3;
    } while (pfVar3 != (float *)((long)param_3 + ((long)((ulong)param_2 << 0x20) >> 0x1d)));
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x0001096a8dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))
            (plVar1,param_2,param_3,*(long *)(param_1 + 8) + 0x18,param_5,param_6);
  return;
}



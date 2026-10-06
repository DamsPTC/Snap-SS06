/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a4ab1c8; end: 10a4ab1cf;  */

void FUN_10a4ab1c8(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x19;
  long *unaff_x20;
  long lVar14;
  long lVar15;
  undefined8 *unaff_x21;
  long unaff_x22;
  int *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar16;
  
code_r0x00010a4ab1c8:
  plVar9 = param_1 + -0xd;
  *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(int **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(param_1[0x20] + 0x120) + 0x8c0) + 0x18) + 0x68);
  if (lVar10 != 0) {
    unaff_x23 = *(int **)(lVar10 + 0x28);
    piVar5 = *(int **)(lVar10 + 0x30);
    if (unaff_x23 != piVar5) {
      while ((*unaff_x23 != 0 || (unaff_x23[1] != (int)*(short *)(param_1[0x9a] + 0x10a)))) {
        unaff_x23 = unaff_x23 + 0x88;
        if (unaff_x23 == piVar5) {
          return;
        }
      }
    }
    if ((unaff_x23 != piVar5) && (unaff_x23 != (int *)0x0)) {
      unaff_x20 = param_1 + 0x97;
      lVar10 = param_1[0x98];
      lVar14 = param_1[0x97];
      while (lVar10 != lVar14) {
        lVar10 = lVar10 + -0x10;
        func_0x00010a190e10();
      }
      param_1[0x98] = lVar14;
      plVar8 = (long *)param_1[0x9d];
      (**(code **)(*plVar8 + 0x40))();
      if (((ulong)plVar8 & 1) == 0) {
        plVar8 = (long *)param_1[0x9c];
        (**(code **)(*plVar8 + 0x40))();
        if ((int)plVar8 != 0) goto LAB_10a4aafac;
      }
      else {
LAB_10a4aafac:
        unaff_x24 = (long *)param_1[0x47];
        unaff_x25 = (long *)param_1[0x48];
        if (unaff_x24 != unaff_x25) {
          unaff_x27 = 0xfffffffffffffff;
          do {
            lVar10 = *unaff_x24;
            if (lVar10 != 0) {
              unaff_x28 = *(undefined8 **)(lVar10 + 0x228);
              puVar11 = *(undefined8 **)(lVar10 + 0x230);
              unaff_x22 = (long)puVar11 - (long)unaff_x28;
              if (0 < unaff_x22 >> 4) {
                unaff_x21 = (undefined8 *)param_1[0x98];
                if (param_1[0x99] - (long)unaff_x21 < unaff_x22) {
                  unaff_x26 = (long)unaff_x21 - param_1[0x97];
                  uVar2 = (unaff_x22 >> 4) + (unaff_x26 >> 4);
                  if (uVar2 >> 0x3c != 0) goto LAB_10a4ab1c4;
                  uVar12 = param_1[0x99] - param_1[0x97];
                  uVar13 = (long)uVar12 >> 3;
                  if (uVar13 <= uVar2) {
                    uVar13 = uVar2;
                  }
                  if (0x7fffffffffffffef < uVar12) {
                    uVar13 = 0xfffffffffffffff;
                  }
                  *(long **)((long)register0x00000008 + -0x68) = unaff_x20;
                  if (uVar13 == 0) {
                    plVar8 = (long *)0x0;
                  }
                  else {
                    plVar8 = unaff_x20;
                    FUN_10a4afcd8();
                  }
                  puVar3 = (undefined8 *)((long)plVar8 + unaff_x26);
                  *(long **)((long)register0x00000008 + -0x70) = plVar8 + uVar13 * 2;
                  puVar4 = (undefined8 *)((long)puVar3 + unaff_x22);
                  puVar11 = puVar3;
                  do {
                    lVar10 = unaff_x28[1];
                    uVar16 = *unaff_x28;
                    puVar11[1] = unaff_x28[1];
                    *puVar11 = uVar16;
                    if (lVar10 != 0) {
                      plVar8 = (long *)(lVar10 + 8);
                      do {
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                        if (bVar7) {
                          *plVar8 = *plVar8 + 1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                    puVar11 = puVar11 + 2;
                    unaff_x28 = unaff_x28 + 2;
                  } while (puVar11 != puVar4);
                  _memcpy(puVar4,unaff_x21,param_1[0x98] - (long)unaff_x21);
                  lVar10 = param_1[0x98];
                  param_1[0x98] = (long)unaff_x21;
                  lVar15 = (long)puVar3 - ((long)unaff_x21 - param_1[0x97]);
                  _memcpy(lVar15);
                  lVar14 = param_1[0x97];
                  param_1[0x97] = lVar15;
                  param_1[0x98] = (long)((long)puVar4 + (lVar10 - (long)unaff_x21));
                  lVar10 = param_1[0x99];
                  param_1[0x99] = *(long *)((long)register0x00000008 + -0x70);
                  *(long *)((long)register0x00000008 + -0x78) = lVar14;
                  *(long *)((long)register0x00000008 + -0x70) = lVar10;
                  *(long *)((long)register0x00000008 + -0x88) = lVar14;
                  *(long *)((long)register0x00000008 + -0x80) = lVar14;
                  plVar8 = (long *)((long)register0x00000008 + -0x88);
                  func_0x00010a4afd0c();
                }
                else {
                  for (; unaff_x28 != puVar11; unaff_x28 = unaff_x28 + 2) {
                    lVar10 = unaff_x28[1];
                    uVar16 = *unaff_x28;
                    unaff_x21[1] = unaff_x28[1];
                    *unaff_x21 = uVar16;
                    if (lVar10 != 0) {
                      plVar1 = (long *)(lVar10 + 8);
                      do {
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar7) {
                          *plVar1 = *plVar1 + 1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                    unaff_x21 = unaff_x21 + 2;
                  }
                  param_1[0x98] = (long)unaff_x21;
                }
              }
            }
            unaff_x24 = unaff_x24 + 2;
            if (unaff_x24 == unaff_x25) break;
          } while( true );
        }
      }
      plVar9 = (long *)param_1[0x9d];
      (**(code **)(*plVar9 + 0x40))();
      if ((int)plVar9 != 0) {
        (**(code **)(*(long *)param_1[0x9d] + 0x38))((long *)param_1[0x9d],unaff_x23 + 2,unaff_x20);
      }
      plVar9 = (long *)param_1[0x9c];
      (**(code **)(*plVar9 + 0x40))();
      if ((int)plVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a4ab1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)param_1[0x9c] + 0x38))((long *)param_1[0x9c],unaff_x23 + 2,unaff_x20);
        return;
      }
    }
  }
  return;
LAB_10a4ab1c4:
  unaff_x30 = FUN_10a4ab1c8;
  FUN_10a4afcc4();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  param_1 = plVar8;
  unaff_x19 = plVar9;
  goto code_r0x00010a4ab1c8;
}



/* Entry: 10a4ab1d0; end: 10a4ab2ab;  */

void FUN_10a4ab1d0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar5 = *(long *)(param_1 + 0x550);
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x00010a04a704(lVar5 + 0x40,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a4ab2ac; end: 10a4ab33f;  */

bool FUN_10a4ab2ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x538);
  FUN_10ac6482c(lVar1,*(undefined8 *)(param_2 + 0x68));
  lVar2 = param_1 + 0x4f0;
  (**(code **)(*(long *)(param_1 + 0x4f0) + 0x30))();
  FUN_10ab6e450();
  if (lVar2 != 0 && lVar1 != 0) {
    FUN_10ac648a8(*(undefined8 *)(param_1 + 0x538),lVar1,*(undefined8 *)(param_2 + 0x68));
  }
  if (0x13e < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) {
    FUN_10a3e4548(*(undefined8 *)(param_1 + 0x168),lVar1 != 0);
  }
  return lVar1 != 0;
}



/* Entry: 10a4ab340; end: 10a4ab347;  */

bool FUN_10a4ab340(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1[9];
  FUN_10ac6482c(lVar1,*(undefined8 *)(param_2 + 0x68));
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x30))();
  FUN_10ab6e450();
  if (plVar2 != (long *)0x0 && lVar1 != 0) {
    FUN_10ac648a8(param_1[9],lVar1,*(undefined8 *)(param_2 + 0x68));
  }
  if (0x13e < *(int *)(*(long *)(param_1[-0x70] + 0xa20) + 0x18)) {
    FUN_10a3e4548(param_1[-0x71],lVar1 != 0);
  }
  return lVar1 != 0;
}



/* Entry: 10a4ab348; end: 10a4ab3c3;  */

byte FUN_10a4ab348(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x4f0;
  (**(code **)(*(long *)(param_1 + 0x4f0) + 0x30))();
  FUN_10ab6e450();
  if (lVar1 == 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x170) + 0x8c0) + 0x18);
    lVar1 = *(long *)(param_1 + 0x538);
    FUN_10ac6482c(lVar1,*(undefined8 *)(lVar3 + 0x68));
    if (lVar1 == 0) {
      bVar2 = 0;
    }
    else {
      FUN_10ac648a8(*(undefined8 *)(param_1 + 0x538),lVar1,*(undefined8 *)(lVar3 + 0x68));
      bVar2 = 1;
    }
  }
  else {
    bVar2 = *(byte *)(*(long *)(param_1 + 0x4f8) + 0x48);
  }
  return bVar2 & 1;
}



/* Entry: 10a4ab3c4; end: 10a4ab6ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a4ab420) */

void FUN_10a4ab3c4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined1 **ppuVar3;
  long lVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_d3;
  undefined1 *puStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  undefined8 **appuStack_e8 [2];
  char cStack_d1;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_58 = 9;
  puStack_60 = &DAT_10f2db963;
  uStack_50 = 0x149d051e572d03c6;
  func_0x000107c2b074(&ppuStack_80,&puStack_60);
  lVar4 = param_2;
  FUN_10a424258(param_2,&ppuStack_80);
  FUN_10a3c829c(&ppuStack_80,param_2);
  if (lVar4 == 0) {
    func_0x000107c2b054(&ppuStack_98,&UNK_10f6529e1);
  }
  else {
    FUN_10a0dad84(lVar4);
    __ZNSt3__19to_stringEf(&ppuStack_98,in_d3);
  }
  uVar1 = uStack_78;
  if (-1 < (char)bStack_69) {
    uVar1 = (ulong)bStack_69;
  }
  FUN_10a003c90(appuStack_e8,uVar1 + 0xd,&puStack_100);
  pppuVar5 = (undefined8 ***)appuStack_e8[0];
  if (-1 < cStack_d1) {
    pppuVar5 = appuStack_e8;
  }
  if (uVar1 != 0) {
    pppuVar2 = (undefined8 ***)ppuStack_80;
    if (-1 < (char)bStack_69) {
      pppuVar2 = &ppuStack_80;
    }
    _memmove(pppuVar5,pppuVar2,uVar1);
  }
  puVar7 = (undefined8 *)((long)pppuVar5 + uVar1);
  *puVar7 = 0x6e4965636166202c;
  *(undefined8 *)((long)puVar7 + 5) = 0x203a7865646e4965;
  *(undefined1 *)((long)puVar7 + 0xd) = 0;
  __ZNSt3__19to_stringEi(&puStack_100,(long)*(short *)(*(long *)(param_2 + 0x538) + 0x10a));
  ppuVar3 = (undefined1 **)puStack_100;
  if (-1 < (char)bStack_e9) {
    uStack_f8 = (ulong)bStack_e9;
    ppuVar3 = &puStack_100;
  }
  pppuVar5 = appuStack_e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar5,ppuVar3,uStack_f8);
  puStack_c8 = pppuVar5[1];
  puStack_d0 = *pppuVar5;
  puStack_c0 = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  ppuVar6 = &puStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar6,&UNK_10f65c654,0x10);
  uStack_a8 = ppuVar6[1];
  uStack_b0 = *ppuVar6;
  lStack_a0 = (long)ppuVar6[2];
  ppuVar6[1] = (undefined8 *)0x0;
  ppuVar6[2] = (undefined8 *)0x0;
  *ppuVar6 = (undefined8 *)0x0;
  pppuVar5 = (undefined8 ***)ppuStack_98;
  if (-1 < (char)bStack_81) {
    uStack_90 = (ulong)bStack_81;
    pppuVar5 = &ppuStack_98;
  }
  puVar7 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_90);
  uVar8 = *puVar7;
  param_1[1] = puVar7[1];
  *param_1 = uVar8;
  param_1[2] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  if ((long)puStack_c0 < 0) {
    __ZdlPv(puStack_d0);
  }
  if ((char)bStack_e9 < '\0') {
    __ZdlPv(puStack_100);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(appuStack_e8[0]);
  }
  if ((char)bStack_81 < '\0') {
    __ZdlPv(ppuStack_98);
  }
  if ((char)bStack_69 < '\0') {
    __ZdlPv(ppuStack_80);
  }
  return;
}



/* Entry: 10a4ab6ac; end: 10a4ab6b3;  */

/* WARNING: Removing unreachable block (ram,0x00010a4ab420) */

void FUN_10a4ab6ac(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined1 **ppuVar3;
  long lVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 in_d3;
  undefined1 *puStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  undefined8 **appuStack_e8 [2];
  char cStack_d1;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar8 = param_2 + -0x10;
  uStack_58 = 9;
  puStack_60 = &DAT_10f2db963;
  uStack_50 = 0x149d051e572d03c6;
  func_0x000107c2b074(&ppuStack_80,&puStack_60);
  lVar4 = lVar8;
  FUN_10a424258(lVar8,&ppuStack_80);
  FUN_10a3c829c(&ppuStack_80,lVar8);
  if (lVar4 == 0) {
    func_0x000107c2b054(&ppuStack_98,&UNK_10f6529e1);
  }
  else {
    FUN_10a0dad84(lVar4);
    __ZNSt3__19to_stringEf(&ppuStack_98,in_d3);
  }
  uVar1 = uStack_78;
  if (-1 < (char)bStack_69) {
    uVar1 = (ulong)bStack_69;
  }
  FUN_10a003c90(appuStack_e8,uVar1 + 0xd,&puStack_100);
  pppuVar5 = (undefined8 ***)appuStack_e8[0];
  if (-1 < cStack_d1) {
    pppuVar5 = appuStack_e8;
  }
  if (uVar1 != 0) {
    pppuVar2 = (undefined8 ***)ppuStack_80;
    if (-1 < (char)bStack_69) {
      pppuVar2 = &ppuStack_80;
    }
    _memmove(pppuVar5,pppuVar2,uVar1);
  }
  puVar7 = (undefined8 *)((long)pppuVar5 + uVar1);
  *puVar7 = 0x6e4965636166202c;
  *(undefined8 *)((long)puVar7 + 5) = 0x203a7865646e4965;
  *(undefined1 *)((long)puVar7 + 0xd) = 0;
  __ZNSt3__19to_stringEi(&puStack_100,(long)*(short *)(*(long *)(param_2 + 0x528) + 0x10a));
  ppuVar3 = (undefined1 **)puStack_100;
  if (-1 < (char)bStack_e9) {
    uStack_f8 = (ulong)bStack_e9;
    ppuVar3 = &puStack_100;
  }
  pppuVar5 = appuStack_e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar5,ppuVar3,uStack_f8);
  puStack_c8 = pppuVar5[1];
  puStack_d0 = *pppuVar5;
  puStack_c0 = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  ppuVar6 = &puStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar6,&UNK_10f65c654,0x10);
  uStack_a8 = ppuVar6[1];
  uStack_b0 = *ppuVar6;
  lStack_a0 = (long)ppuVar6[2];
  ppuVar6[1] = (undefined8 *)0x0;
  ppuVar6[2] = (undefined8 *)0x0;
  *ppuVar6 = (undefined8 *)0x0;
  pppuVar5 = (undefined8 ***)ppuStack_98;
  if (-1 < (char)bStack_81) {
    uStack_90 = (ulong)bStack_81;
    pppuVar5 = &ppuStack_98;
  }
  puVar7 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_90);
  uVar9 = *puVar7;
  param_1[1] = puVar7[1];
  *param_1 = uVar9;
  param_1[2] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  if ((long)puStack_c0 < 0) {
    __ZdlPv(puStack_d0);
  }
  if ((char)bStack_e9 < '\0') {
    __ZdlPv(puStack_100);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(appuStack_e8[0]);
  }
  if ((char)bStack_81 < '\0') {
    __ZdlPv(ppuStack_98);
  }
  if ((char)bStack_69 < '\0') {
    __ZdlPv(ppuStack_80);
  }
  return;
}



/* Entry: 10a4ab6b4; end: 10a4ab71b;  */

void FUN_10a4ab6b4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x538);
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(lVar1 + 0x104) = 1;
  if (*(long *)(lVar1 + 0x128) != 0) {
    *(long *)(lVar1 + 0x130) = *(long *)(lVar1 + 0x128);
    __ZdlPv();
  }
  *(undefined8 *)(lVar1 + 0x130) = uVar4;
  *(undefined8 *)(lVar1 + 0x128) = uVar3;
  *(undefined8 *)(lVar1 + 0x138) = uVar2;
  return;
}



/* Entry: 10a4ab71c; end: 10a4ab79f;  */

void FUN_10a4ab71c(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_48,&UNK_10f65c665);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *(undefined1 *)(param_1 + 0x518) = param_2;
  return;
}



/* Entry: 10a4ab7a0; end: 10a4ab7f3;  */

void FUN_10a4ab7a0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x538);
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(long *)(lVar1 + 0x140) != 0) {
    *(long *)(lVar1 + 0x148) = *(long *)(lVar1 + 0x140);
    __ZdlPv();
  }
  *(undefined8 *)(lVar1 + 0x148) = uVar4;
  *(undefined8 *)(lVar1 + 0x140) = uVar3;
  *(undefined8 *)(lVar1 + 0x150) = uVar2;
  return;
}



/* Entry: 10a4ab7f4; end: 10a4abd83;  */

void FUN_10a4ab7f4(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar12 = param_2;
    uVar11 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    lStack_60 = param_2[8];
    lVar13 = param_4 + 0x88;
    func_0x00010a35bf90(lVar13,&lStack_60);
    puVar4 = (undefined8 *)((ulong)&lStack_60 | 8);
    plVar12 = &lStack_60;
    if (lVar13 != 0) {
      puVar4 = (undefined8 *)(lVar13 + 0x28);
      plVar12 = (long *)(lVar13 + 0x20);
    }
    uVar11 = *puVar4;
    plVar12 = (long *)*plVar12;
  }
  lVar13 = param_2[0x2e];
  FUN_10a3dd220(lVar13);
  FUN_10a4c57a8(lVar13,plVar12,uVar11);
  plVar12 = (long *)0x28;
  lStack_70 = lVar13;
  __Znwm();
  plVar8 = plVar12 + 1;
  *plVar8 = 0;
  *plVar12 = (long)&PTR_FUN_110be7468;
  plVar12[2] = 0;
  plVar12[3] = lVar13;
  plVar12[4] = (long)FUN_10a3df8cc;
  plStack_68 = plVar12;
  if (lVar13 != 0) {
    if (*(long *)(lVar13 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar12 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar13 + 0x28) = lVar13;
      *(long **)(lVar13 + 0x30) = plVar12;
    }
    else {
      if (*(long *)(*(long *)(lVar13 + 0x30) + 8) != -1) goto LAB_10a4ab960;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar12 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar13 + 0x28) = lVar13;
      *(long **)(lVar13 + 0x30) = plVar12;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
LAB_10a4ab960:
  lVar13 = lStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_70 + 0x150,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar13 + 0x180) & 0xfffc;
  *(ushort *)(lVar13 + 0x180) = uVar3 | *(ushort *)(lVar13 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar13 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  lStack_60 = lVar13;
  plStack_58 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar12 = plStack_68 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a3c7ce8(param_3,&lStack_60);
  plVar12 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar8 = plStack_58 + 1;
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  lVar7 = lStack_70;
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x128))();
  *(undefined1 *)(lVar7 + 0x20c) = 0;
  *(int *)(lVar7 + 0x210) = (int)plVar12;
  FUN_10a4aa618(lVar7);
  FUN_10a2d597c(param_2,lVar7,param_4);
  lVar10 = *(long *)(lVar7 + 0x538);
  lVar9 = param_2[0xa7];
  *(byte *)(lVar10 + 0x100) = *(byte *)(lVar10 + 0x100) & 0xfe | *(byte *)(lVar9 + 0x100) & 1;
  *(undefined2 *)(lVar10 + 0x10a) = *(undefined2 *)(lVar9 + 0x10a);
  *(undefined2 *)(lVar10 + 0x108) = *(undefined2 *)(lVar9 + 0x108);
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  lVar13 = *(long *)(lVar9 + *(long *)(&UNK_10e4b9c48 + (ulong)*(uint *)(lVar9 + 0x104) * 8));
  lVar9 = ((long *)(lVar9 + *(long *)(&UNK_10e4b9c48 + (ulong)*(uint *)(lVar9 + 0x104) * 8)))[1];
  FUN_10a0ca588(&uStack_90,lVar13,lVar9,lVar9 - lVar13 >> 2);
  *(undefined4 *)(lVar10 + 0x104) = 1;
  if (*(long *)(lVar10 + 0x128) != 0) {
    *(long *)(lVar10 + 0x130) = *(long *)(lVar10 + 0x128);
    __ZdlPv();
    *(undefined8 *)(lVar10 + 0x128) = 0;
    *(undefined8 *)(lVar10 + 0x130) = 0;
    *(undefined8 *)(lVar10 + 0x138) = 0;
  }
  *(undefined8 *)(lVar10 + 0x130) = uStack_88;
  *(undefined8 *)(lVar10 + 0x128) = uStack_90;
  *(undefined8 *)(lVar10 + 0x138) = uStack_80;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  lVar13 = *(long *)(lVar7 + 0x538);
  lVar9 = param_2[0xa7];
  *(byte *)(lVar13 + 0x100) = *(byte *)(lVar13 + 0x100) & 0xfd | *(byte *)(lVar9 + 0x100) & 2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar13 + 0x170,lVar9 + 0x170);
  lVar10 = *(long *)(lVar7 + 0x538);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  lVar13 = *(long *)(param_2[0xa7] + 0x140);
  lVar9 = *(long *)(param_2[0xa7] + 0x148);
  FUN_10a0ca588(&uStack_b0,lVar13,lVar9,lVar9 - lVar13 >> 2);
  if (*(long *)(lVar10 + 0x140) != 0) {
    *(long *)(lVar10 + 0x148) = *(long *)(lVar10 + 0x140);
    __ZdlPv();
    *(undefined8 *)(lVar10 + 0x140) = 0;
    *(undefined8 *)(lVar10 + 0x148) = 0;
    *(undefined8 *)(lVar10 + 0x150) = 0;
  }
  *(undefined8 *)(lVar10 + 0x148) = uStack_a8;
  *(undefined8 *)(lVar10 + 0x140) = uStack_b0;
  *(undefined8 *)(lVar10 + 0x150) = uStack_a0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (*(long *)(lVar7 + 0x538) + 0x188,param_2[0xa7] + 0x188);
  plVar12 = (long *)0x10;
  __Znwm();
  *(undefined2 *)(plVar12 + 1) = 0;
  *plVar12 = (long)&PTR_DAT_110c472a0;
  *(undefined4 *)((long)plVar12 + 0xc) = 0x3f800000;
  plVar8 = *(long **)(lVar7 + 0x548);
  *(long **)(lVar7 + 0x548) = plVar12;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
    plVar12 = *(long **)(lVar7 + 0x548);
  }
  plVar8 = (long *)param_2[0xa9];
  (**(code **)(*plVar8 + 0x40))();
  (**(code **)(*plVar12 + 0x48))(plVar12,plVar8);
  *(undefined4 *)(*(long *)(lVar7 + 0x548) + 0xc) = *(undefined4 *)(param_2[0xa9] + 0xc);
  plVar12 = (long *)0x68;
  __Znwm();
  *(undefined2 *)(plVar12 + 1) = 0;
  *plVar12 = (long)&PTR_FUN_110c47180;
  func_0x000107c2b074(plVar12 + 2,&PTR_DAT_110c48118);
  plVar12[6] = 0x430000003f;
  *(undefined4 *)(plVar12 + 7) = 0x3e0a3d71;
  plVar12[9] = 0;
  plVar12[8] = 0;
  plVar12[0xb] = 0;
  plVar12[10] = 0;
  plVar12[0xc] = 0;
  plVar8 = *(long **)(lVar7 + 0x550);
  *(long **)(lVar7 + 0x550) = plVar12;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
    plVar12 = *(long **)(lVar7 + 0x550);
  }
  plVar8 = (long *)param_2[0xaa];
  (**(code **)(*plVar8 + 0x40))();
  (**(code **)(*plVar12 + 0x48))(plVar12,plVar8);
  lVar13 = *(long *)(lVar7 + 0x550);
  lVar9 = param_2[0xaa];
  plStack_b8 = *(long **)(lVar9 + 0x48);
  uStack_c0 = *(undefined8 *)(lVar9 + 0x40);
  if (*(long *)(lVar9 + 0x48) != 0) {
    plVar12 = (long *)(*(long *)(lVar9 + 0x48) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  func_0x00010a04a704(lVar13 + 0x40,&uStack_c0);
  plVar12 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar8 = plStack_b8 + 1;
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  lVar13 = lStack_70;
  lVar9 = param_2[0xaa];
  if (*(long *)(lStack_70 + 0x550) != lVar9) {
    FUN_10a04a8dc(*(long *)(lStack_70 + 0x550) + 0x50,*(long *)(lVar9 + 0x50),
                  *(long *)(lVar9 + 0x58),*(long *)(lVar9 + 0x58) - *(long *)(lVar9 + 0x50) >> 4);
  }
  FUN_10a4ab71c(lVar13,(char)param_2[0xa3]);
  *param_1 = lVar13;
  param_1[1] = (long)plStack_68;
  return;
}



/* Entry: 10a4abd84; end: 10a4abe1b;  */

void FUN_10a4abd84(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  lVar4 = *param_2;
  lVar1 = param_2[1];
  if ((ulong)((lVar1 - lVar4 >> 1) * -0x5555555555555555) < 0x5555555555555556) {
    lVar6 = *(long *)(param_1 + 0x538);
    lVar7 = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    bVar3 = 0;
    if (lVar4 != lVar1) {
      bVar3 = 4;
    }
    *(byte *)(lVar6 + 0x100) = *(byte *)(lVar6 + 0x100) & 0xfb | bVar3;
    if (*(long *)(lVar6 + 0x158) != 0) {
      *(long *)(lVar6 + 0x160) = *(long *)(lVar6 + 0x158);
      __ZdlPv();
    }
    *(long *)(lVar6 + 0x158) = lVar4;
    *(long *)(lVar6 + 0x160) = lVar1;
    *(long *)(lVar6 + 0x168) = lVar7;
    return;
  }
  puVar2 = (undefined8 *)&UNK_10f65c68f;
  FUN_10a00946c();
  pcStack_38 = FUN_10a4abe1c;
  *puVar2 = &PTR_FUN_110be1f78;
  puVar2[2] = &PTR_DAT_110c04938;
  puVar2[7] = &PTR_DAT_110c04990;
  puVar2[0xd] = &PTR_DAT_110c049b0;
  puVar2[0x16] = &PTR_DAT_110c04a20;
  puVar2[0x4e] = &PTR_DAT_110be2108;
  puVar2[0x17] = &PTR_DAT_110c04a50;
  lStack_50 = lVar4;
  lStack_48 = lVar1;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x00010a004e5c(puVar2 + 0x47);
  func_0x00010a3f7034(puVar2 + 0x44);
  *puVar2 = &PTR_FUN_110be2158;
  puVar2[2] = &PTR_DAT_110bcfec8;
  puVar2[7] = &PTR_DAT_110bcff20;
  puVar2[0xd] = &PTR_DAT_110bcff40;
  puVar2[0x16] = &PTR_DAT_110bcffb0;
  puVar2[0x4e] = &PTR_DAT_110be2288;
  puVar2[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(puVar2 + 0x35);
  (**(code **)puVar2[0x36])(puVar2 + 0x36);
  func_0x00010a004e5c(puVar2 + 0x33);
  if (*(char *)((long)puVar2 + 0x167) < '\0') {
    __ZdlPv(puVar2[0x2a]);
  }
  puVar2[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(puVar2 + 0x17);
  lVar4 = puVar2[0x14];
  if (lVar4 != 0) {
    plVar5 = (long *)puVar2[0x15];
    *plVar5 = lVar4;
    *(long **)(lVar4 + 8) = plVar5;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
  }
  lVar4 = puVar2[0x12];
  if (lVar4 != 0) {
    plVar5 = (long *)puVar2[0x13];
    *plVar5 = lVar4;
    *(long **)(lVar4 + 8) = plVar5;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
  }
  lVar4 = puVar2[0x10];
  if (lVar4 != 0) {
    plVar5 = (long *)puVar2[0x11];
    *plVar5 = lVar4;
    *(long **)(lVar4 + 8) = plVar5;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
  }
  lVar4 = puVar2[0xe];
  if (lVar4 != 0) {
    plVar5 = (long *)puVar2[0xf];
    *plVar5 = lVar4;
    *(long **)(lVar4 + 8) = plVar5;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
  }
  puStack_58 = puVar2 + 10;
  FUN_10a3ebf4c(&puStack_58);
  FUN_10a572f54(puVar2);
  return;
}



/* Entry: 10a4abe1c; end: 10a4abe27;  */

void FUN_10a4abe1c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110be1f78;
  param_1[2] = &PTR_DAT_110c04938;
  param_1[7] = &PTR_DAT_110c04990;
  param_1[0xd] = &PTR_DAT_110c049b0;
  param_1[0x16] = &PTR_DAT_110c04a20;
  param_1[0x4e] = &PTR_DAT_110be2108;
  param_1[0x17] = &PTR_DAT_110c04a50;
  func_0x00010a004e5c(param_1 + 0x47);
  func_0x00010a3f7034(param_1 + 0x44);
  *param_1 = &PTR_FUN_110be2158;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x4e] = &PTR_DAT_110be2288;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a4abe28; end: 10a4abe43;  */

void FUN_10a4abe28(undefined8 param_1)

{
  FUN_10a66a924(param_1,&PTR_PTR_110bde7e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4abe44; end: 10a4abe5b;  */

long FUN_10a4abe44(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a4abe5c; end: 10a4abe7b;  */

void FUN_10a4abe5c(long param_1)

{
  FUN_10a66a924(param_1 + -0x10,&PTR_PTR_110bde7e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4abe7c; end: 10a4abe8b;  */

void FUN_10a4abe7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110be1f78;
  param_1[-5] = &PTR_DAT_110c04938;
  *param_1 = &PTR_DAT_110c04990;
  param_1[6] = &PTR_DAT_110c049b0;
  param_1[0xf] = &PTR_DAT_110c04a20;
  param_1[0x47] = &PTR_DAT_110be2108;
  param_1[0x10] = &PTR_DAT_110c04a50;
  func_0x00010a004e5c(param_1 + 0x40);
  func_0x00010a3f7034(param_1 + 0x3d);
  *puVar1 = &PTR_FUN_110be2158;
  param_1[-5] = &PTR_DAT_110bcfec8;
  *param_1 = &PTR_DAT_110bcff20;
  param_1[6] = &PTR_DAT_110bcff40;
  param_1[0xf] = &PTR_DAT_110bcffb0;
  param_1[0x47] = &PTR_DAT_110be2288;
  param_1[0x10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x2e);
  (**(code **)param_1[0x2f])(param_1 + 0x2f);
  func_0x00010a004e5c(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    __ZdlPv(param_1[0x23]);
  }
  param_1[0x10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x10);
  lVar2 = param_1[0xd];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[0xe];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar2 = param_1[0xb];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[0xc];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  lVar2 = param_1[9];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[10];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[8];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  puStack_28 = param_1 + 3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar1);
  return;
}



/* Entry: 10a4abe8c; end: 10a4abeab;  */

void FUN_10a4abe8c(long param_1)

{
  FUN_10a66a924(param_1 + -0x38,&PTR_PTR_110bde7e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4abeac; end: 10a4abebb;  */

void FUN_10a4abeac(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -0xd;
  *puVar1 = &PTR_FUN_110be1f78;
  param_1[-0xb] = &PTR_DAT_110c04938;
  param_1[-6] = &PTR_DAT_110c04990;
  *param_1 = &PTR_DAT_110c049b0;
  param_1[9] = &PTR_DAT_110c04a20;
  param_1[0x41] = &PTR_DAT_110be2108;
  param_1[10] = &PTR_DAT_110c04a50;
  func_0x00010a004e5c(param_1 + 0x3a);
  func_0x00010a3f7034(param_1 + 0x37);
  *puVar1 = &PTR_FUN_110be2158;
  param_1[-0xb] = &PTR_DAT_110bcfec8;
  param_1[-6] = &PTR_DAT_110bcff20;
  *param_1 = &PTR_DAT_110bcff40;
  param_1[9] = &PTR_DAT_110bcffb0;
  param_1[0x41] = &PTR_DAT_110be2288;
  param_1[10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x28);
  (**(code **)param_1[0x29])(param_1 + 0x29);
  func_0x00010a004e5c(param_1 + 0x26);
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    __ZdlPv(param_1[0x1d]);
  }
  param_1[10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 10);
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[8];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[6];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[4];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[2];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  puStack_28 = param_1 + -3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar1);
  return;
}



/* Entry: 10a4abebc; end: 10a4abedb;  */

void FUN_10a4abebc(long param_1)

{
  FUN_10a66a924(param_1 + -0x68,&PTR_PTR_110bde7e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4abedc; end: 10a4abeeb;  */

void FUN_10a4abedc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -0x16;
  *puVar1 = &PTR_FUN_110be1f78;
  param_1[-0x14] = &PTR_DAT_110c04938;
  param_1[-0xf] = &PTR_DAT_110c04990;
  param_1[-9] = &PTR_DAT_110c049b0;
  *param_1 = &PTR_DAT_110c04a20;
  param_1[0x38] = &PTR_DAT_110be2108;
  param_1[1] = &PTR_DAT_110c04a50;
  func_0x00010a004e5c(param_1 + 0x31);
  func_0x00010a3f7034(param_1 + 0x2e);
  *puVar1 = &PTR_FUN_110be2158;
  param_1[-0x14] = &PTR_DAT_110bcfec8;
  param_1[-0xf] = &PTR_DAT_110bcff20;
  param_1[-9] = &PTR_DAT_110bcff40;
  *param_1 = &PTR_DAT_110bcffb0;
  param_1[0x38] = &PTR_DAT_110be2288;
  param_1[1] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1f);
  (**(code **)param_1[0x20])(param_1 + 0x20);
  func_0x00010a004e5c(param_1 + 0x1d);
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  param_1[1] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 1);
  lVar2 = param_1[-2];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[-1];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[-2] = 0;
    param_1[-1] = 0;
  }
  lVar2 = param_1[-4];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[-3];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[-4] = 0;
    param_1[-3] = 0;
  }
  lVar2 = param_1[-6];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[-5];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[-6] = 0;
    param_1[-5] = 0;
  }
  lVar2 = param_1[-8];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[-7];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[-8] = 0;
    param_1[-7] = 0;
  }
  puStack_28 = param_1 + -0xc;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar1);
  return;
}



/* Entry: 10a4abeec; end: 10a4abf0b;  */

void FUN_10a4abeec(long param_1)

{
  FUN_10a66a924(param_1 + -0xb0,&PTR_PTR_110bde7e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4abf0c; end: 10a4abf1b;  */

void FUN_10a4abf0c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_110be1f78;
  param_1[-0x15] = &PTR_DAT_110c04938;
  param_1[-0x10] = &PTR_DAT_110c04990;
  param_1[-10] = &PTR_DAT_110c049b0;
  param_1[-1] = &PTR_DAT_110c04a20;
  param_1[0x37] = &PTR_DAT_110be2108;
  *param_1 = &PTR_DAT_110c04a50;
  func_0x00010a004e5c(param_1 + 0x30);
  func_0x00010a3f7034(param_1 + 0x2d);
  *puVar1 = &PTR_FUN_110be2158;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x37] = &PTR_DAT_110be2288;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar2 = param_1[-3];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[-2];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar2 = param_1[-5];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[-4];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar2 = param_1[-7];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[-6];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar2 = param_1[-9];
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[-8];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  puStack_28 = param_1 + -0xd;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar1);
  return;
}



/* Entry: 10a4abf1c; end: 10a4abf3b;  */

void FUN_10a4abf1c(long param_1)

{
  FUN_10a66a924(param_1 + -0xb8,&PTR_PTR_110bde7e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4abf3c; end: 10a4abf53;  */

void FUN_10a4abf3c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110be1f78;
  puVar1[2] = &PTR_DAT_110c04938;
  puVar1[7] = &PTR_DAT_110c04990;
  puVar1[0xd] = &PTR_DAT_110c049b0;
  puVar1[0x16] = &PTR_DAT_110c04a20;
  puVar1[0x4e] = &PTR_DAT_110be2108;
  puVar1[0x17] = &PTR_DAT_110c04a50;
  func_0x00010a004e5c(puVar1 + 0x47);
  func_0x00010a3f7034(puVar1 + 0x44);
  *puVar1 = &PTR_FUN_110be2158;
  puVar1[2] = &PTR_DAT_110bcfec8;
  puVar1[7] = &PTR_DAT_110bcff20;
  puVar1[0xd] = &PTR_DAT_110bcff40;
  puVar1[0x16] = &PTR_DAT_110bcffb0;
  puVar1[0x4e] = &PTR_DAT_110be2288;
  puVar1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(puVar1 + 0x35);
  (**(code **)puVar1[0x36])(puVar1 + 0x36);
  func_0x00010a004e5c(puVar1 + 0x33);
  if (*(char *)((long)puVar1 + 0x167) < '\0') {
    __ZdlPv(puVar1[0x2a]);
  }
  puVar1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(puVar1 + 0x17);
  lVar2 = puVar1[0x14];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x15];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
  }
  lVar2 = puVar1[0x12];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x13];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  lVar2 = puVar1[0x10];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x11];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  lVar2 = puVar1[0xe];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0xf];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  puStack_28 = puVar1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar1);
  return;
}



/* Entry: 10a4abf54; end: 10a4abf8b;  */

void FUN_10a4abf54(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a66a924((long)param_1 + lVar1,&PTR_PTR_110bde7e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a4abf8c; end: 10a4abf97;  */

void FUN_10a4abf8c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110be22f0;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x3e] = &PTR_DAT_110be2420;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a4abf98; end: 10a4abfb3;  */

void FUN_10a4abf98(undefined8 param_1)

{
  FUN_10a3c59d8(param_1,&PTR_PTR_110bdeba0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4abfb4; end: 10a4abfcb;  */

long FUN_10a4abfb4(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a4abfcc; end: 10a4abfeb;  */

void FUN_10a4abfcc(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x10,&PTR_PTR_110bdeba0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4abfec; end: 10a4abffb;  */

void FUN_10a4abfec(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110be22f0;
  param_1[-5] = &PTR_DAT_110bcfec8;
  *param_1 = &PTR_DAT_110bcff20;
  param_1[6] = &PTR_DAT_110bcff40;
  param_1[0xf] = &PTR_DAT_110bcffb0;
  param_1[0x37] = &PTR_DAT_110be2420;
  param_1[0x10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x2e);
  (**(code **)param_1[0x2f])(param_1 + 0x2f);
  func_0x00010a004e5c(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    __ZdlPv(param_1[0x23]);
  }
  param_1[0x10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x10);
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xe];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar1 = param_1[0xb];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xc];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[10];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  puStack_28 = param_1 + 3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -7);
  return;
}



/* Entry: 10a4abffc; end: 10a4ac01b;  */

void FUN_10a4abffc(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x38,&PTR_PTR_110bdeba0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ac01c; end: 10a4ac02b;  */

void FUN_10a4ac01c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0xd] = &PTR_FUN_110be22f0;
  param_1[-0xb] = &PTR_DAT_110bcfec8;
  param_1[-6] = &PTR_DAT_110bcff20;
  *param_1 = &PTR_DAT_110bcff40;
  param_1[9] = &PTR_DAT_110bcffb0;
  param_1[0x31] = &PTR_DAT_110be2420;
  param_1[10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x28);
  (**(code **)param_1[0x29])(param_1 + 0x29);
  func_0x00010a004e5c(param_1 + 0x26);
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    __ZdlPv(param_1[0x1d]);
  }
  param_1[10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 10);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  puStack_28 = param_1 + -3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0xd);
  return;
}



/* Entry: 10a4ac02c; end: 10a4ac04b;  */

void FUN_10a4ac02c(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x68,&PTR_PTR_110bdeba0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ac04c; end: 10a4ac05b;  */

void FUN_10a4ac04c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x16] = &PTR_FUN_110be22f0;
  param_1[-0x14] = &PTR_DAT_110bcfec8;
  param_1[-0xf] = &PTR_DAT_110bcff20;
  param_1[-9] = &PTR_DAT_110bcff40;
  *param_1 = &PTR_DAT_110bcffb0;
  param_1[0x28] = &PTR_DAT_110be2420;
  param_1[1] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1f);
  (**(code **)param_1[0x20])(param_1 + 0x20);
  func_0x00010a004e5c(param_1 + 0x1d);
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  param_1[1] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 1);
  lVar1 = param_1[-2];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-1];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-2] = 0;
    param_1[-1] = 0;
  }
  lVar1 = param_1[-4];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-3];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-4] = 0;
    param_1[-3] = 0;
  }
  lVar1 = param_1[-6];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-5];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-6] = 0;
    param_1[-5] = 0;
  }
  lVar1 = param_1[-8];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-7];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-8] = 0;
    param_1[-7] = 0;
  }
  puStack_28 = param_1 + -0xc;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x16);
  return;
}



/* Entry: 10a4ac05c; end: 10a4ac07b;  */

void FUN_10a4ac05c(long param_1)

{
  FUN_10a3c59d8(param_1 + -0xb0,&PTR_PTR_110bdeba0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ac07c; end: 10a4ac08b;  */

void FUN_10a4ac07c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x17] = &PTR_FUN_110be22f0;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x27] = &PTR_DAT_110be2420;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar1 = param_1[-3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar1 = param_1[-5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar1 = param_1[-7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar1 = param_1[-9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  puStack_28 = param_1 + -0xd;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x17);
  return;
}



/* Entry: 10a4ac08c; end: 10a4ac0ab;  */

void FUN_10a4ac08c(long param_1)

{
  FUN_10a3c59d8(param_1 + -0xb8,&PTR_PTR_110bdeba0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ac0ac; end: 10a4ac0c3;  */

void FUN_10a4ac0ac(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110be22f0;
  puVar1[2] = &PTR_DAT_110bcfec8;
  puVar1[7] = &PTR_DAT_110bcff20;
  puVar1[0xd] = &PTR_DAT_110bcff40;
  puVar1[0x16] = &PTR_DAT_110bcffb0;
  puVar1[0x3e] = &PTR_DAT_110be2420;
  puVar1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(puVar1 + 0x35);
  (**(code **)puVar1[0x36])(puVar1 + 0x36);
  func_0x00010a004e5c(puVar1 + 0x33);
  if (*(char *)((long)puVar1 + 0x167) < '\0') {
    __ZdlPv(puVar1[0x2a]);
  }
  puVar1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(puVar1 + 0x17);
  lVar2 = puVar1[0x14];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x15];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
  }
  lVar2 = puVar1[0x12];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x13];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  lVar2 = puVar1[0x10];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x11];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  lVar2 = puVar1[0xe];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0xf];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  puStack_28 = puVar1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar1);
  return;
}



/* Entry: 10a4ac0c4; end: 10a4ac15b;  */

void FUN_10a4ac0c4(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a3c59d8((long)param_1 + lVar1,&PTR_PTR_110bdeba0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a4ac15c; end: 10a4ac16f;  */

long FUN_10a4ac15c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + -0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + -8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + -0x10;
}



/* Entry: 10a4ac170; end: 10a4ac1a3;  */

void FUN_10a4ac170(long param_1)

{
  *(undefined8 *)(param_1 + -0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((undefined8 *)(param_1 + -0x18));
  return;
}



/* Entry: 10a4ac1a4; end: 10a4ac1a7;  */

void FUN_10a4ac1a4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bded80;
  param_1[2] = &PTR_DAT_110bdefb8;
  param_1[7] = &PTR_FUN_110bdf010;
  param_1[0xd] = &PTR_FUN_110bdf030;
  param_1[0xed] = &PTR_FUN_110bdf130;
  param_1[0x16] = &PTR_FUN_110bdf0a0;
  param_1[0x17] = &PTR_FUN_110bdf0d0;
  func_0x00010a4afef4(param_1[0xea]);
  lVar1 = param_1[0xe8];
  param_1[0xe8] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  if (param_1[0xe5] != 0) {
    param_1[0xe6] = param_1[0xe5];
    __ZdlPv();
  }
  lVar1 = param_1[0xe2];
  if (lVar1 != 0) {
    lVar2 = param_1[0xe3];
    lVar4 = lVar1;
    if (lVar2 != lVar1) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a4aec64();
      } while (lVar2 != lVar1);
      lVar4 = param_1[0xe2];
    }
    param_1[0xe3] = lVar1;
    __ZdlPv(lVar4);
  }
  func_0x00010a4aff30(param_1[0xdf]);
  lVar1 = param_1[0xdd];
  param_1[0xdd] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0xda];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar1 = param_1[0xd8];
  param_1[0xd8] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  if (param_1[0xd5] != 0) {
    param_1[0xd6] = param_1[0xd5];
    __ZdlPv();
  }
  func_0x00010a004e5c(param_1 + 0xc5);
  FUN_10a0e3194(param_1 + 0xc1);
  FUN_10a0e3194(param_1 + 0xbf);
  puStack_28 = param_1 + 0xbc;
  func_0x00010a4aec24(&puStack_28);
  func_0x00010a4b6b2c(param_1 + 0xba);
  plVar3 = (long *)param_1[0xac];
  param_1[0xac] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0xab];
  param_1[0xab] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  func_0x00010a4b6ab0(param_1 + 0xa6);
  func_0x00010a4b6a68(param_1 + 0xa1);
  if (param_1[0x9e] != 0) {
    param_1[0x9f] = param_1[0x9e];
    __ZdlPv();
  }
  FUN_10a420f70(param_1,&PTR_PTR_110bdf178);
  return;
}



/* Entry: 10a4ac1a8; end: 10a4ac1bb;  */

void FUN_10a4ac1a8(void)

{
  func_0x00010a4afd58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ac1bc; end: 10a4ac1cb;  */

long FUN_10a4ac1bc(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a4ac1cc; end: 10a4ac1e3;  */

void FUN_10a4ac1cc(long param_1)

{
  func_0x00010a4afd58(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ac1e4; end: 10a4ac1eb;  */

void FUN_10a4ac1e4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110bded80;
  param_1[-5] = &PTR_DAT_110bdefb8;
  *param_1 = &PTR_FUN_110bdf010;
  param_1[6] = &PTR_FUN_110bdf030;
  param_1[0xe6] = &PTR_FUN_110bdf130;
  param_1[0xf] = &PTR_FUN_110bdf0a0;
  param_1[0x10] = &PTR_FUN_110bdf0d0;
  func_0x00010a4afef4(param_1[0xe3]);
  lVar1 = param_1[0xe1];
  param_1[0xe1] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  if (param_1[0xde] != 0) {
    param_1[0xdf] = param_1[0xde];
    __ZdlPv();
  }
  lVar1 = param_1[0xdb];
  if (lVar1 != 0) {
    lVar2 = param_1[0xdc];
    lVar4 = lVar1;
    if (lVar2 != lVar1) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a4aec64();
      } while (lVar2 != lVar1);
      lVar4 = param_1[0xdb];
    }
    param_1[0xdc] = lVar1;
    __ZdlPv(lVar4);
  }
  func_0x00010a4aff30(param_1[0xd8]);
  lVar1 = param_1[0xd6];
  param_1[0xd6] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0xd3];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar1 = param_1[0xd1];
  param_1[0xd1] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  if (param_1[0xce] != 0) {
    param_1[0xcf] = param_1[0xce];
    __ZdlPv();
  }
  func_0x00010a004e5c(param_1 + 0xbe);
  FUN_10a0e3194(param_1 + 0xba);
  FUN_10a0e3194(param_1 + 0xb8);
  puStack_28 = param_1 + 0xb5;
  func_0x00010a4aec24(&puStack_28);
  func_0x00010a4b6b2c(param_1 + 0xb3);
  plVar3 = (long *)param_1[0xa5];
  param_1[0xa5] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0xa4];
  param_1[0xa4] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  func_0x00010a4b6ab0(param_1 + 0x9f);
  func_0x00010a4b6a68(param_1 + 0x9a);
  if (param_1[0x97] != 0) {
    param_1[0x98] = param_1[0x97];
    __ZdlPv();
  }
  FUN_10a420f70(param_1 + -7,&PTR_PTR_110bdf178);
  return;
}



/* Entry: 10a4ac1ec; end: 10a4ac203;  */

void FUN_10a4ac1ec(long param_1)

{
  func_0x00010a4afd58(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ac204; end: 10a4ac20b;  */

void FUN_10a4ac204(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puStack_28;
  
  param_1[-0xd] = &PTR_FUN_110bded80;
  param_1[-0xb] = &PTR_DAT_110bdefb8;
  param_1[-6] = &PTR_FUN_110bdf010;
  *param_1 = &PTR_FUN_110bdf030;
  param_1[0xe0] = &PTR_FUN_110bdf130;
  param_1[9] = &PTR_FUN_110bdf0a0;
  param_1[10] = &PTR_FUN_110bdf0d0;
  func_0x00010a4afef4(param_1[0xdd]);
  lVar1 = param_1[0xdb];
  param_1[0xdb] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  if (param_1[0xd8] != 0) {
    param_1[0xd9] = param_1[0xd8];
    __ZdlPv();
  }
  lVar1 = param_1[0xd5];
  if (lVar1 != 0) {
    lVar2 = param_1[0xd6];
    lVar4 = lVar1;
    if (lVar2 != lVar1) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a4aec64();
      } while (lVar2 != lVar1);
      lVar4 = param_1[0xd5];
    }
    param_1[0xd6] = lVar1;
    __ZdlPv(lVar4);
  }
  func_0x00010a4aff30(param_1[0xd2]);
  lVar1 = param_1[0xd0];
  param_1[0xd0] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0xcd];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar1 = param_1[0xcb];
  param_1[0xcb] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  if (param_1[200] != 0) {
    param_1[0xc9] = param_1[200];
    __ZdlPv();
  }
  func_0x00010a004e5c(param_1 + 0xb8);
  FUN_10a0e3194(param_1 + 0xb4);
  FUN_10a0e3194(param_1 + 0xb2);
  puStack_28 = param_1 + 0xaf;
  func_0x00010a4aec24(&puStack_28);
  func_0x00010a4b6b2c(param_1 + 0xad);
  plVar3 = (long *)param_1[0x9f];
  param_1[0x9f] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x9e];
  param_1[0x9e] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  func_0x00010a4b6ab0(param_1 + 0x99);
  func_0x00010a4b6a68(param_1 + 0x94);
  if (param_1[0x91] != 0) {
    param_1[0x92] = param_1[0x91];
    __ZdlPv();
  }
  FUN_10a420f70(param_1 + -0xd,&PTR_PTR_110bdf178);
  return;
}



/* Entry: 10a4ac20c; end: 10a4ac223;  */

void FUN_10a4ac20c(long param_1)

{
  func_0x00010a4afd58(param_1 + -0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ac224; end: 10a4ac22b;  */

void FUN_10a4ac224(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puStack_28;
  
  param_1[-0x16] = &PTR_FUN_110bded80;
  param_1[-0x14] = &PTR_DAT_110bdefb8;
  param_1[-0xf] = &PTR_FUN_110bdf010;
  param_1[-9] = &PTR_FUN_110bdf030;
  param_1[0xd7] = &PTR_FUN_110bdf130;
  *param_1 = &PTR_FUN_110bdf0a0;
  param_1[1] = &PTR_FUN_110bdf0d0;
  func_0x00010a4afef4(param_1[0xd4]);
  lVar1 = param_1[0xd2];
  param_1[0xd2] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  if (param_1[0xcf] != 0) {
    param_1[0xd0] = param_1[0xcf];
    __ZdlPv();
  }
  lVar1 = param_1[0xcc];
  if (lVar1 != 0) {
    lVar2 = param_1[0xcd];
    lVar4 = lVar1;
    if (lVar2 != lVar1) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a4aec64();
      } while (lVar2 != lVar1);
      lVar4 = param_1[0xcc];
    }
    param_1[0xcd] = lVar1;
    __ZdlPv(lVar4);
  }
  func_0x00010a4aff30(param_1[0xc9]);
  lVar1 = param_1[199];
  param_1[199] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0xc4];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar1 = param_1[0xc2];
  param_1[0xc2] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  if (param_1[0xbf] != 0) {
    param_1[0xc0] = param_1[0xbf];
    __ZdlPv();
  }
  func_0x00010a004e5c(param_1 + 0xaf);
  FUN_10a0e3194(param_1 + 0xab);
  FUN_10a0e3194(param_1 + 0xa9);
  puStack_28 = param_1 + 0xa6;
  func_0x00010a4aec24(&puStack_28);
  func_0x00010a4b6b2c(param_1 + 0xa4);
  plVar3 = (long *)param_1[0x96];
  param_1[0x96] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x95];
  param_1[0x95] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  func_0x00010a4b6ab0(param_1 + 0x90);
  func_0x00010a4b6a68(param_1 + 0x8b);
  if (param_1[0x88] != 0) {
    param_1[0x89] = param_1[0x88];
    __ZdlPv();
  }
  FUN_10a420f70(param_1 + -0x16,&PTR_PTR_110bdf178);
  return;
}



/* Entry: 10a4ac22c; end: 10a4ac243;  */

void FUN_10a4ac22c(long param_1)

{
  func_0x00010a4afd58(param_1 + -0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ac244; end: 10a4ac24b;  */

void FUN_10a4ac244(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puStack_28;
  
  param_1[-0x17] = &PTR_FUN_110bded80;
  param_1[-0x15] = &PTR_DAT_110bdefb8;
  param_1[-0x10] = &PTR_FUN_110bdf010;
  param_1[-10] = &PTR_FUN_110bdf030;
  param_1[0xd6] = &PTR_FUN_110bdf130;
  param_1[-1] = &PTR_FUN_110bdf0a0;
  *param_1 = &PTR_FUN_110bdf0d0;
  func_0x00010a4afef4(param_1[0xd3]);
  lVar1 = param_1[0xd1];
  param_1[0xd1] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  if (param_1[0xce] != 0) {
    param_1[0xcf] = param_1[0xce];
    __ZdlPv();
  }
  lVar1 = param_1[0xcb];
  if (lVar1 != 0) {
    lVar2 = param_1[0xcc];
    lVar4 = lVar1;
    if (lVar2 != lVar1) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a4aec64();
      } while (lVar2 != lVar1);
      lVar4 = param_1[0xcb];
    }
    param_1[0xcc] = lVar1;
    __ZdlPv(lVar4);
  }
  func_0x00010a4aff30(param_1[200]);
  lVar1 = param_1[0xc6];
  param_1[0xc6] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0xc3];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar1 = param_1[0xc1];
  param_1[0xc1] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  if (param_1[0xbe] != 0) {
    param_1[0xbf] = param_1[0xbe];
    __ZdlPv();
  }
  func_0x00010a004e5c(param_1 + 0xae);
  FUN_10a0e3194(param_1 + 0xaa);
  FUN_10a0e3194(param_1 + 0xa8);
  puStack_28 = param_1 + 0xa5;
  func_0x00010a4aec24(&puStack_28);
  func_0x00010a4b6b2c(param_1 + 0xa3);
  plVar3 = (long *)param_1[0x95];
  param_1[0x95] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x94];
  param_1[0x94] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  func_0x00010a4b6ab0(param_1 + 0x8f);
  func_0x00010a4b6a68(param_1 + 0x8a);
  if (param_1[0x87] != 0) {
    param_1[0x88] = param_1[0x87];
    __ZdlPv();
  }
  FUN_10a420f70(param_1 + -0x17,&PTR_PTR_110bdf178);
  return;
}



/* Entry: 10a4ac24c; end: 10a4ac263;  */

void FUN_10a4ac24c(long param_1)

{
  func_0x00010a4afd58(param_1 + -0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ac264; end: 10a4ac273;  */

void FUN_10a4ac264(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110bded80;
  puVar1[2] = &PTR_DAT_110bdefb8;
  puVar1[7] = &PTR_FUN_110bdf010;
  puVar1[0xd] = &PTR_FUN_110bdf030;
  puVar1[0xed] = &PTR_FUN_110bdf130;
  puVar1[0x16] = &PTR_FUN_110bdf0a0;
  puVar1[0x17] = &PTR_FUN_110bdf0d0;
  func_0x00010a4afef4(puVar1[0xea]);
  lVar2 = puVar1[0xe8];
  puVar1[0xe8] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (puVar1[0xe5] != 0) {
    puVar1[0xe6] = puVar1[0xe5];
    __ZdlPv();
  }
  lVar2 = puVar1[0xe2];
  if (lVar2 != 0) {
    lVar3 = puVar1[0xe3];
    lVar5 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x10;
        func_0x00010a4aec64();
      } while (lVar3 != lVar2);
      lVar5 = puVar1[0xe2];
    }
    puVar1[0xe3] = lVar2;
    __ZdlPv(lVar5);
  }
  func_0x00010a4aff30(puVar1[0xdf]);
  lVar2 = puVar1[0xdd];
  puVar1[0xdd] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar4 = (long *)puVar1[0xda];
  while (plVar4 != (long *)0x0) {
    plVar4 = (long *)*plVar4;
    __ZdlPv();
  }
  lVar2 = puVar1[0xd8];
  puVar1[0xd8] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (puVar1[0xd5] != 0) {
    puVar1[0xd6] = puVar1[0xd5];
    __ZdlPv();
  }
  func_0x00010a004e5c(puVar1 + 0xc5);
  FUN_10a0e3194(puVar1 + 0xc1);
  FUN_10a0e3194(puVar1 + 0xbf);
  puStack_28 = puVar1 + 0xbc;
  func_0x00010a4aec24(&puStack_28);
  func_0x00010a4b6b2c(puVar1 + 0xba);
  plVar4 = (long *)puVar1[0xac];
  puVar1[0xac] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = (long *)puVar1[0xab];
  puVar1[0xab] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  func_0x00010a4b6ab0(puVar1 + 0xa6);
  func_0x00010a4b6a68(puVar1 + 0xa1);
  if (puVar1[0x9e] != 0) {
    puVar1[0x9f] = puVar1[0x9e];
    __ZdlPv();
  }
  FUN_10a420f70(puVar1,&PTR_PTR_110bdf178);
  return;
}



/* Entry: 10a4ac274; end: 10a4ac337;  */

void FUN_10a4ac274(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a4afd58((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a4ac338; end: 10a4ac36f;  */

long FUN_10a4ac338(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a4ac370; end: 10a4ac5df;  */

void FUN_10a4ac370(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0x43);
  if (*(char *)((long)param_1 + 0x217) < '\0') {
    __ZdlPv(param_1[0x40]);
  }
  func_0x00010a05248c(param_1 + 0x3c);
  param_1[-2] = &PTR_FUN_110be2d98;
  *param_1 = &PTR_DAT_110bcfec8;
  param_1[5] = &PTR_DAT_110bcff20;
  param_1[0xb] = &PTR_DAT_110bcff40;
  param_1[0x14] = &PTR_DAT_110bcffb0;
  param_1[0x45] = &PTR_DAT_110be2ec8;
  param_1[0x15] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x33);
  (**(code **)param_1[0x34])(param_1 + 0x34);
  func_0x00010a004e5c(param_1 + 0x31);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  param_1[0x15] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x15);
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xd];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  puStack_28 = param_1 + 8;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -2);
  return;
}



/* Entry: 10a4ac5e0; end: 10a4ac613;  */

undefined8 FUN_10a4ac5e0(void)

{
  return 0x3ea0d15290c78213;
}



/* Entry: 10a4ac614; end: 10a4ac827;  */

void FUN_10a4ac614(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0x2e);
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    __ZdlPv(param_1[0x2b]);
  }
  func_0x00010a05248c(param_1 + 0x27);
  param_1[-0x17] = &PTR_FUN_110be2d98;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x30] = &PTR_DAT_110be2ec8;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar1 = param_1[-3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar1 = param_1[-5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar1 = param_1[-7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar1 = param_1[-9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  puStack_28 = param_1 + -0xd;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x17);
  return;
}



/* Entry: 10a4ac828; end: 10a4ac85f;  */

long FUN_10a4ac828(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a4ac860; end: 10a4acbcf;  */

void FUN_10a4ac860(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  if ((*(char *)(param_1 + 0x49) == '\x01') && (param_1[0x46] != 0)) {
    param_1[0x47] = param_1[0x46];
    __ZdlPv();
  }
  param_1[0x3c] = &PTR_DAT_110be3098;
  param_1[0x4a] = &PTR_FUN_110be3110;
  func_0x00010a004e5c(param_1 + 0x3f);
  func_0x00010a004e04(param_1 + 0x3d);
  param_1[-2] = &PTR_FUN_110be2f18;
  *param_1 = &PTR_DAT_110bcfec8;
  param_1[5] = &PTR_DAT_110bcff20;
  param_1[0xb] = &PTR_DAT_110bcff40;
  param_1[0x14] = &PTR_DAT_110bcffb0;
  param_1[0x4a] = &PTR_DAT_110be3048;
  param_1[0x15] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x33);
  (**(code **)param_1[0x34])(param_1 + 0x34);
  func_0x00010a004e5c(param_1 + 0x31);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  param_1[0x15] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x15);
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xd];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  puStack_28 = param_1 + 8;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -2);
  return;
}



/* Entry: 10a4acbd0; end: 10a4acc03;  */

undefined8 FUN_10a4acbd0(void)

{
  return 0xaac56ac80c46e22b;
}



/* Entry: 10a4acc04; end: 10a4ace9f;  */

void FUN_10a4acc04(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  if ((*(char *)(param_1 + 0x34) == '\x01') && (param_1[0x31] != 0)) {
    param_1[0x32] = param_1[0x31];
    __ZdlPv();
  }
  param_1[0x27] = &PTR_DAT_110be3098;
  param_1[0x35] = &PTR_FUN_110be3110;
  func_0x00010a004e5c(param_1 + 0x2a);
  func_0x00010a004e04(param_1 + 0x28);
  param_1[-0x17] = &PTR_FUN_110be2f18;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x35] = &PTR_DAT_110be3048;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar1 = param_1[-3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar1 = param_1[-5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar1 = param_1[-7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar1 = param_1[-9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  puStack_28 = param_1 + -0xd;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x17);
  return;
}



/* Entry: 10a4acea0; end: 10a4aceb7;  */

long FUN_10a4acea0(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a4aceb8; end: 10a4acff7;  */

undefined8 * FUN_10a4aceb8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a4acff8; end: 10a4ad063;  */

long FUN_10a4acff8(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a4ad064; end: 10a4ad0cb;  */

long FUN_10a4ad064(long param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a4ad0cc; end: 10a4ad0db;  */

undefined8 * FUN_10a4ad0cc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110b17898;
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 1;
}



/* Entry: 10a4ad0dc; end: 10a4ad173;  */

void FUN_10a4ad0dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -2);
  return;
}



/* Entry: 10a4ad174; end: 10a4ad183;  */

undefined8 * FUN_10a4ad174(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110b17898;
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 1;
}



/* Entry: 10a4ad184; end: 10a4ad21b;  */

void FUN_10a4ad184(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -2);
  return;
}



/* Entry: 10a4ad21c; end: 10a4ad22b;  */

undefined8 * FUN_10a4ad21c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110b17898;
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 1;
}



/* Entry: 10a4ad22c; end: 10a4ad317;  */

void FUN_10a4ad22c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -2);
  return;
}



/* Entry: 10a4ad318; end: 10a4ad327;  */

long FUN_10a4ad318(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a4ad328; end: 10a4ad377;  */

void FUN_10a4ad328(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_48;
  undefined *puStack_18;
  
  uVar1 = *(uint *)(param_1[0xa5] + 0xf8);
  if (uVar1 != 0xffffffff) {
    puStack_18 = &UNK_10e4b16d3;
    (*(code *)(&PTR_FUN_110be6b88)[uVar1])(&puStack_18,param_1[0xa5] + 0xe8);
    return;
  }
  FUN_10a0d459c();
  FUN_10a4c1198(param_1 + 0xa3);
  func_0x00010a004e5c(param_1 + 0xa1);
  param_1[0x9c] = &PTR_DAT_110be5190;
  param_1[0xa5] = &PTR_FUN_110be5208;
  func_0x00010a004e5c(param_1 + 0x9f);
  func_0x00010a004e04(param_1 + 0x9d);
  param_1[-2] = &PTR_FUN_110be4ab0;
  *param_1 = &PTR_DAT_110bd5880;
  param_1[5] = &PTR_DAT_110bd58d8;
  param_1[0xb] = &PTR_DAT_110bd58f8;
  param_1[0x14] = &PTR_DAT_110bd5968;
  param_1[0xa5] = &PTR_DAT_110be4d10;
  param_1[0x15] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9a);
  func_0x00010a004e5c(param_1 + 0x98);
  param_1[0x70] = &PTR_FUN_110b9ec48;
  puStack_48 = param_1 + 0x8e;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = param_1 + 0x8b;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = param_1 + 0x84;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = param_1 + 0x81;
  func_0x00010a04aad4(&puStack_48);
  FUN_10a0617bc(param_1 + 0x7c);
  puStack_48 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = param_1 + 0x73;
  func_0x00010a04aad4(&puStack_48);
  lVar2 = param_1[0x6f];
  param_1[0x6f] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  param_1[0x61] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6a);
  FUN_10a44a358(param_1 + 99);
  plVar3 = (long *)param_1[0x60];
  param_1[0x60] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x5e,0);
  FUN_10a4477fc(param_1 + 0x5c);
  func_0x00010a4477a4(param_1 + 0x5a);
  func_0x00010a4476d0(param_1 + 0x55);
  FUN_10a44763c(param_1 + 0x52);
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4a);
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -2,&PTR_PTR_110be1188);
  return;
}



/* Entry: 10a4ad378; end: 10a4ad80f;  */

void FUN_10a4ad378(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  FUN_10a4c1198(param_1 + 0xa3);
  func_0x00010a004e5c(param_1 + 0xa1);
  param_1[0x9c] = &PTR_DAT_110be5190;
  param_1[0xa5] = &PTR_FUN_110be5208;
  func_0x00010a004e5c(param_1 + 0x9f);
  func_0x00010a004e04(param_1 + 0x9d);
  param_1[-2] = &PTR_FUN_110be4ab0;
  *param_1 = &PTR_DAT_110bd5880;
  param_1[5] = &PTR_DAT_110bd58d8;
  param_1[0xb] = &PTR_DAT_110bd58f8;
  param_1[0x14] = &PTR_DAT_110bd5968;
  param_1[0xa5] = &PTR_DAT_110be4d10;
  param_1[0x15] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9a);
  func_0x00010a004e5c(param_1 + 0x98);
  param_1[0x70] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x8e;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8b;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x84;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x81;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7c);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x73;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x6f];
  param_1[0x6f] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x61] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6a);
  FUN_10a44a358(param_1 + 99);
  plVar2 = (long *)param_1[0x60];
  param_1[0x60] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x5e,0);
  FUN_10a4477fc(param_1 + 0x5c);
  func_0x00010a4477a4(param_1 + 0x5a);
  func_0x00010a4476d0(param_1 + 0x55);
  FUN_10a44763c(param_1 + 0x52);
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4a);
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -2,&PTR_PTR_110be1188);
  return;
}



/* Entry: 10a4ad810; end: 10a4ad817;  */

void FUN_10a4ad810(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puStack_48;
  undefined *puStack_18;
  
  puVar4 = (undefined8 *)(param_1 + -0x4f0);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + 0xf8);
  if (uVar1 != 0xffffffff) {
    puStack_18 = &UNK_10e4b16d3;
    (*(code *)(&PTR_FUN_110be6b88)[uVar1])(&puStack_18,*(long *)(param_1 + 0x38) + 0xe8);
    return;
  }
  FUN_10a0d459c();
  FUN_10a4c1198(puVar4 + 0xa3);
  func_0x00010a004e5c(puVar4 + 0xa1);
  puVar4[0x9c] = &PTR_DAT_110be5190;
  puVar4[0xa5] = &PTR_FUN_110be5208;
  func_0x00010a004e5c(puVar4 + 0x9f);
  func_0x00010a004e04(puVar4 + 0x9d);
  puVar4[-2] = &PTR_FUN_110be4ab0;
  *puVar4 = &PTR_DAT_110bd5880;
  puVar4[5] = &PTR_DAT_110bd58d8;
  puVar4[0xb] = &PTR_DAT_110bd58f8;
  puVar4[0x14] = &PTR_DAT_110bd5968;
  puVar4[0xa5] = &PTR_DAT_110be4d10;
  puVar4[0x15] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(puVar4 + 0x9a);
  func_0x00010a004e5c(puVar4 + 0x98);
  puVar4[0x70] = &PTR_FUN_110b9ec48;
  puStack_48 = puVar4 + 0x8e;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = puVar4 + 0x8b;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = puVar4 + 0x84;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = puVar4 + 0x81;
  func_0x00010a04aad4(&puStack_48);
  FUN_10a0617bc(puVar4 + 0x7c);
  puStack_48 = puVar4 + 0x76;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = puVar4 + 0x73;
  func_0x00010a04aad4(&puStack_48);
  lVar2 = puVar4[0x6f];
  puVar4[0x6f] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  puVar4[0x61] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(puVar4 + 0x6a);
  FUN_10a44a358(puVar4 + 99);
  plVar3 = (long *)puVar4[0x60];
  puVar4[0x60] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a425f6c(puVar4 + 0x5e,0);
  FUN_10a4477fc(puVar4 + 0x5c);
  func_0x00010a4477a4(puVar4 + 0x5a);
  func_0x00010a4476d0(puVar4 + 0x55);
  FUN_10a44763c(puVar4 + 0x52);
  if (puVar4[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar4[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar4[0x4d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(puVar4 + 0x4a);
  if (puVar4[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(puVar4 + -2,&PTR_PTR_110be1188);
  return;
}



/* Entry: 10a4ad818; end: 10a4ad8e3;  */

void FUN_10a4ad818(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_10a4c1198(puVar1 + 0xa5);
  func_0x00010a004e5c(puVar1 + 0xa3);
  puVar1[0x9e] = &PTR_DAT_110be5190;
  puVar1[0xa7] = &PTR_FUN_110be5208;
  func_0x00010a004e5c(puVar1 + 0xa1);
  func_0x00010a004e04(puVar1 + 0x9f);
  *puVar1 = &PTR_FUN_110be4ab0;
  puVar1[2] = &PTR_DAT_110bd5880;
  puVar1[7] = &PTR_DAT_110bd58d8;
  puVar1[0xd] = &PTR_DAT_110bd58f8;
  puVar1[0x16] = &PTR_DAT_110bd5968;
  puVar1[0xa7] = &PTR_DAT_110be4d10;
  puVar1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(puVar1 + 0x9c);
  func_0x00010a004e5c(puVar1 + 0x9a);
  puVar1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = puVar1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(puVar1 + 0x7e);
  puStack_28 = puVar1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar2 = puVar1[0x71];
  puVar1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  puVar1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(puVar1 + 0x6c);
  FUN_10a44a358(puVar1 + 0x65);
  plVar3 = (long *)puVar1[0x62];
  puVar1[0x62] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a425f6c(puVar1 + 0x60,0);
  FUN_10a4477fc(puVar1 + 0x5e);
  func_0x00010a4477a4(puVar1 + 0x5c);
  func_0x00010a4476d0(puVar1 + 0x57);
  FUN_10a44763c(puVar1 + 0x54);
  if (puVar1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(puVar1 + 0x4c);
  if (puVar1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(puVar1,&PTR_PTR_110be1188);
  return;
}



/* Entry: 10a4ad8e4; end: 10a4ad8ef;  */

void FUN_10a4ad8e4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110be5290;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x3f] = &PTR_DAT_110be53c0;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a4ad8f0; end: 10a4ad90b;  */

void FUN_10a4ad8f0(undefined8 param_1)

{
  FUN_10a3c59d8(param_1,&PTR_PTR_110be14e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ad90c; end: 10a4ad923;  */

long FUN_10a4ad90c(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a4ad924; end: 10a4ad943;  */

void FUN_10a4ad924(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x10,&PTR_PTR_110be14e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ad944; end: 10a4ad953;  */

void FUN_10a4ad944(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110be5290;
  param_1[-5] = &PTR_DAT_110bcfec8;
  *param_1 = &PTR_DAT_110bcff20;
  param_1[6] = &PTR_DAT_110bcff40;
  param_1[0xf] = &PTR_DAT_110bcffb0;
  param_1[0x38] = &PTR_DAT_110be53c0;
  param_1[0x10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x2e);
  (**(code **)param_1[0x2f])(param_1 + 0x2f);
  func_0x00010a004e5c(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    __ZdlPv(param_1[0x23]);
  }
  param_1[0x10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x10);
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xe];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar1 = param_1[0xb];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xc];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[10];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  puStack_28 = param_1 + 3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -7);
  return;
}



/* Entry: 10a4ad954; end: 10a4ad973;  */

void FUN_10a4ad954(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x38,&PTR_PTR_110be14e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ad974; end: 10a4ad983;  */

void FUN_10a4ad974(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0xd] = &PTR_FUN_110be5290;
  param_1[-0xb] = &PTR_DAT_110bcfec8;
  param_1[-6] = &PTR_DAT_110bcff20;
  *param_1 = &PTR_DAT_110bcff40;
  param_1[9] = &PTR_DAT_110bcffb0;
  param_1[0x32] = &PTR_DAT_110be53c0;
  param_1[10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x28);
  (**(code **)param_1[0x29])(param_1 + 0x29);
  func_0x00010a004e5c(param_1 + 0x26);
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    __ZdlPv(param_1[0x1d]);
  }
  param_1[10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 10);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  puStack_28 = param_1 + -3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0xd);
  return;
}



/* Entry: 10a4ad984; end: 10a4ad9a3;  */

void FUN_10a4ad984(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x68,&PTR_PTR_110be14e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ad9a4; end: 10a4ad9b3;  */

void FUN_10a4ad9a4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x16] = &PTR_FUN_110be5290;
  param_1[-0x14] = &PTR_DAT_110bcfec8;
  param_1[-0xf] = &PTR_DAT_110bcff20;
  param_1[-9] = &PTR_DAT_110bcff40;
  *param_1 = &PTR_DAT_110bcffb0;
  param_1[0x29] = &PTR_DAT_110be53c0;
  param_1[1] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1f);
  (**(code **)param_1[0x20])(param_1 + 0x20);
  func_0x00010a004e5c(param_1 + 0x1d);
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  param_1[1] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 1);
  lVar1 = param_1[-2];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-1];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-2] = 0;
    param_1[-1] = 0;
  }
  lVar1 = param_1[-4];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-3];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-4] = 0;
    param_1[-3] = 0;
  }
  lVar1 = param_1[-6];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-5];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-6] = 0;
    param_1[-5] = 0;
  }
  lVar1 = param_1[-8];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-7];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-8] = 0;
    param_1[-7] = 0;
  }
  puStack_28 = param_1 + -0xc;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x16);
  return;
}



/* Entry: 10a4ad9b4; end: 10a4ad9d3;  */

void FUN_10a4ad9b4(long param_1)

{
  FUN_10a3c59d8(param_1 + -0xb0,&PTR_PTR_110be14e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ad9d4; end: 10a4ad9e3;  */

void FUN_10a4ad9d4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x17] = &PTR_FUN_110be5290;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x28] = &PTR_DAT_110be53c0;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar1 = param_1[-3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar1 = param_1[-5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar1 = param_1[-7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar1 = param_1[-9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  puStack_28 = param_1 + -0xd;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x17);
  return;
}



/* Entry: 10a4ad9e4; end: 10a4ada03;  */

void FUN_10a4ad9e4(long param_1)

{
  FUN_10a3c59d8(param_1 + -0xb8,&PTR_PTR_110be14e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ada04; end: 10a4ada1b;  */

void FUN_10a4ada04(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110be5290;
  puVar1[2] = &PTR_DAT_110bcfec8;
  puVar1[7] = &PTR_DAT_110bcff20;
  puVar1[0xd] = &PTR_DAT_110bcff40;
  puVar1[0x16] = &PTR_DAT_110bcffb0;
  puVar1[0x3f] = &PTR_DAT_110be53c0;
  puVar1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(puVar1 + 0x35);
  (**(code **)puVar1[0x36])(puVar1 + 0x36);
  func_0x00010a004e5c(puVar1 + 0x33);
  if (*(char *)((long)puVar1 + 0x167) < '\0') {
    __ZdlPv(puVar1[0x2a]);
  }
  puVar1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(puVar1 + 0x17);
  lVar2 = puVar1[0x14];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x15];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
  }
  lVar2 = puVar1[0x12];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x13];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  lVar2 = puVar1[0x10];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x11];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  lVar2 = puVar1[0xe];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0xf];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  puStack_28 = puVar1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar1);
  return;
}



/* Entry: 10a4ada1c; end: 10a4adb0f;  */

void FUN_10a4ada1c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a3c59d8((long)param_1 + lVar1,&PTR_PTR_110be14e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a4adb10; end: 10a4adb1f;  */

long FUN_10a4adb10(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a4adb20; end: 10a4adb6f;  */

void FUN_10a4adb20(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_48;
  undefined *puStack_18;
  
  if (*(uint *)(param_1 + 0xa6) != 0xffffffff) {
    puStack_18 = &UNK_10e4b16d3;
    (*(code *)(&PTR_FUN_110be6b88)[*(uint *)(param_1 + 0xa6)])(&puStack_18,param_1 + 0xa4);
    return;
  }
  FUN_10a0d459c();
  FUN_10a4c32f0(param_1 + 0xa5);
  FUN_10a3a75a8(param_1 + 0xa2);
  param_1[0x9c] = &PTR_DAT_110be5db8;
  param_1[0xa8] = &PTR_FUN_110be5e30;
  func_0x00010a004e5c(param_1 + 0x9f);
  func_0x00010a004e04(param_1 + 0x9d);
  param_1[-2] = &PTR_FUN_110be56d8;
  *param_1 = &PTR_DAT_110bd5880;
  param_1[5] = &PTR_DAT_110bd58d8;
  param_1[0xb] = &PTR_DAT_110bd58f8;
  param_1[0x14] = &PTR_DAT_110bd5968;
  param_1[0xa8] = &PTR_DAT_110be5938;
  param_1[0x15] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9a);
  func_0x00010a004e5c(param_1 + 0x98);
  param_1[0x70] = &PTR_FUN_110b9ec48;
  puStack_48 = param_1 + 0x8e;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = param_1 + 0x8b;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = param_1 + 0x84;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = param_1 + 0x81;
  func_0x00010a04aad4(&puStack_48);
  FUN_10a0617bc(param_1 + 0x7c);
  puStack_48 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = param_1 + 0x73;
  func_0x00010a04aad4(&puStack_48);
  lVar1 = param_1[0x6f];
  param_1[0x6f] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x61] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6a);
  FUN_10a44a358(param_1 + 99);
  plVar2 = (long *)param_1[0x60];
  param_1[0x60] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x5e,0);
  FUN_10a4477fc(param_1 + 0x5c);
  func_0x00010a4477a4(param_1 + 0x5a);
  func_0x00010a4476d0(param_1 + 0x55);
  FUN_10a44763c(param_1 + 0x52);
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4a);
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -2,&PTR_PTR_110be1980);
  return;
}



/* Entry: 10a4adb70; end: 10a4ae007;  */

void FUN_10a4adb70(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  FUN_10a4c32f0(param_1 + 0xa5);
  FUN_10a3a75a8(param_1 + 0xa2);
  param_1[0x9c] = &PTR_DAT_110be5db8;
  param_1[0xa8] = &PTR_FUN_110be5e30;
  func_0x00010a004e5c(param_1 + 0x9f);
  func_0x00010a004e04(param_1 + 0x9d);
  param_1[-2] = &PTR_FUN_110be56d8;
  *param_1 = &PTR_DAT_110bd5880;
  param_1[5] = &PTR_DAT_110bd58d8;
  param_1[0xb] = &PTR_DAT_110bd58f8;
  param_1[0x14] = &PTR_DAT_110bd5968;
  param_1[0xa8] = &PTR_DAT_110be5938;
  param_1[0x15] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9a);
  func_0x00010a004e5c(param_1 + 0x98);
  param_1[0x70] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x8e;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8b;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x84;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x81;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7c);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x73;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x6f];
  param_1[0x6f] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x61] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6a);
  FUN_10a44a358(param_1 + 99);
  plVar2 = (long *)param_1[0x60];
  param_1[0x60] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x5e,0);
  FUN_10a4477fc(param_1 + 0x5c);
  func_0x00010a4477a4(param_1 + 0x5a);
  func_0x00010a4476d0(param_1 + 0x55);
  FUN_10a44763c(param_1 + 0x52);
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4a);
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -2,&PTR_PTR_110be1980);
  return;
}



/* Entry: 10a4ae008; end: 10a4ae057;  */

void FUN_10a4ae008(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_48;
  undefined *puStack_18;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    puStack_18 = &UNK_10e4b16d3;
    (*(code *)(&PTR_FUN_110be6b88)[*(uint *)(param_1 + 8)])(&puStack_18,param_1 + 6);
    return;
  }
  FUN_10a0d459c();
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_10a4c32f0(puVar1 + 0xa7);
  FUN_10a3a75a8(puVar1 + 0xa4);
  puVar1[0x9e] = &PTR_DAT_110be5db8;
  puVar1[0xaa] = &PTR_FUN_110be5e30;
  func_0x00010a004e5c(puVar1 + 0xa1);
  func_0x00010a004e04(puVar1 + 0x9f);
  *puVar1 = &PTR_FUN_110be56d8;
  puVar1[2] = &PTR_DAT_110bd5880;
  puVar1[7] = &PTR_DAT_110bd58d8;
  puVar1[0xd] = &PTR_DAT_110bd58f8;
  puVar1[0x16] = &PTR_DAT_110bd5968;
  puVar1[0xaa] = &PTR_DAT_110be5938;
  puVar1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(puVar1 + 0x9c);
  func_0x00010a004e5c(puVar1 + 0x9a);
  puVar1[0x72] = &PTR_FUN_110b9ec48;
  puStack_48 = puVar1 + 0x90;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = puVar1 + 0x8d;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = puVar1 + 0x86;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = puVar1 + 0x83;
  func_0x00010a04aad4(&puStack_48);
  FUN_10a0617bc(puVar1 + 0x7e);
  puStack_48 = puVar1 + 0x78;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = puVar1 + 0x75;
  func_0x00010a04aad4(&puStack_48);
  lVar2 = puVar1[0x71];
  puVar1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  puVar1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(puVar1 + 0x6c);
  FUN_10a44a358(puVar1 + 0x65);
  plVar3 = (long *)puVar1[0x62];
  puVar1[0x62] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a425f6c(puVar1 + 0x60,0);
  FUN_10a4477fc(puVar1 + 0x5e);
  func_0x00010a4477a4(puVar1 + 0x5c);
  func_0x00010a4476d0(puVar1 + 0x57);
  FUN_10a44763c(puVar1 + 0x54);
  if (puVar1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(puVar1 + 0x4c);
  if (puVar1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(puVar1,&PTR_PTR_110be1980);
  return;
}



/* Entry: 10a4ae058; end: 10a4ae267;  */

void FUN_10a4ae058(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_10a4c32f0(puVar1 + 0xa7);
  FUN_10a3a75a8(puVar1 + 0xa4);
  puVar1[0x9e] = &PTR_DAT_110be5db8;
  puVar1[0xaa] = &PTR_FUN_110be5e30;
  func_0x00010a004e5c(puVar1 + 0xa1);
  func_0x00010a004e04(puVar1 + 0x9f);
  *puVar1 = &PTR_FUN_110be56d8;
  puVar1[2] = &PTR_DAT_110bd5880;
  puVar1[7] = &PTR_DAT_110bd58d8;
  puVar1[0xd] = &PTR_DAT_110bd58f8;
  puVar1[0x16] = &PTR_DAT_110bd5968;
  puVar1[0xaa] = &PTR_DAT_110be5938;
  puVar1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(puVar1 + 0x9c);
  func_0x00010a004e5c(puVar1 + 0x9a);
  puVar1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = puVar1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(puVar1 + 0x7e);
  puStack_28 = puVar1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar2 = puVar1[0x71];
  puVar1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  puVar1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(puVar1 + 0x6c);
  FUN_10a44a358(puVar1 + 0x65);
  plVar3 = (long *)puVar1[0x62];
  puVar1[0x62] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a425f6c(puVar1 + 0x60,0);
  FUN_10a4477fc(puVar1 + 0x5e);
  func_0x00010a4477a4(puVar1 + 0x5c);
  func_0x00010a4476d0(puVar1 + 0x57);
  FUN_10a44763c(puVar1 + 0x54);
  if (puVar1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(puVar1 + 0x4c);
  if (puVar1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(puVar1,&PTR_PTR_110be1980);
  return;
}



/* Entry: 10a4ae268; end: 10a4ae277;  */

long FUN_10a4ae268(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a4ae278; end: 10a4ae2c7;  */

void FUN_10a4ae278(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lStack_48;
  undefined *puStack_18;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x538) + 0xf8);
  if (uVar1 != 0xffffffff) {
    puStack_18 = &UNK_10e4b16d3;
    (*(code *)(&PTR_FUN_110be6b88)[uVar1])(&puStack_18,*(long *)(param_1 + 0x538) + 0xe8);
    return;
  }
  FUN_10a0d459c();
  plVar2 = *(long **)(param_1 + 0x540);
  *(undefined8 *)(param_1 + 0x540) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x538);
  *(undefined8 *)(param_1 + 0x538) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a3b175c(param_1 + 0x528);
  lStack_48 = param_1 + 0x510;
  func_0x00010a190bd0(&lStack_48);
  *(undefined ***)(param_1 + 0x4e0) = &PTR_DAT_110be6848;
  *(undefined ***)(param_1 + 0x548) = &PTR_FUN_110be68c0;
  func_0x00010a004e5c(param_1 + 0x4f8);
  func_0x00010a004e04(param_1 + 0x4e8);
  FUN_10a420f70(param_1 + -0x10,&PTR_PTR_110be1ec0);
  return;
}



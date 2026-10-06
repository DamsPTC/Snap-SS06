/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10897f7a0; end: 10897f7e3;  */

long * FUN_10897f7a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10897f7e4; end: 10897f8ab;  */

void FUN_10897f7e4(void)

{
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  return;
}



/* Entry: 10897f8ac; end: 10897fb4f;  */

void FUN_10897f8ac(long *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  ulong *extraout_x8;
  ulong *puVar5;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  ulong *extraout_x9_03;
  ulong *puVar6;
  long *plVar7;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *plVar8;
  ulong *extraout_x10_03;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  long lStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  undefined8 uStack_58;
  
  plVar8 = (long *)*param_1;
  if (plVar8 == (long *)param_1[1]) {
    return;
  }
  lVar4 = 0;
  puStack_68 = (ulong *)0x0;
  puStack_60 = (ulong *)0x0;
  uStack_58 = 0;
  lVar9 = param_3;
  do {
    plVar7 = plVar8;
    do {
      lVar14 = param_2;
      if (param_3 <= lVar14) {
        if (puStack_68 != puStack_60) {
          FUN_10897fb8c();
          plVar8 = extraout_x10;
          while (plVar8 != extraout_x9) {
            plVar7 = plVar8 + 1;
            lVar4 = *plVar8;
            plVar8 = plVar7;
            if (lVar4 == 0) {
              lVar9 = lVar9 + 1;
            }
          }
          if (lVar9 != 0) {
            FUN_10897fb50(*(undefined8 *)(param_4 + 0x18),0x4a);
          }
          FUN_10897fb8c();
          plVar8 = extraout_x10_00;
          while (plVar8 != extraout_x9_00) {
            plVar7 = plVar8 + 1;
            lVar4 = *plVar8;
            plVar8 = plVar7;
            if (lVar4 == 1) {
              lVar9 = lVar9 + 1;
            }
          }
          if (lVar9 != 0) {
            FUN_10897fb50(*(undefined8 *)(param_4 + 0x18),0x4b);
          }
          FUN_10897fb8c();
          plVar8 = extraout_x10_01;
          while (plVar8 != extraout_x9_01) {
            plVar7 = plVar8 + 1;
            lVar4 = *plVar8;
            plVar8 = plVar7;
            if (lVar4 == 2) {
              lVar9 = lVar9 + 1;
            }
          }
          if (lVar9 != 0) {
            FUN_10897fb50(*(undefined8 *)(param_4 + 0x18),0x4c);
          }
          FUN_10897fb8c();
          plVar8 = extraout_x10_02;
          while (plVar8 != extraout_x9_02) {
            plVar7 = plVar8 + 1;
            lVar4 = *plVar8;
            plVar8 = plVar7;
            if (lVar4 == 4) {
              lVar9 = lVar9 + 1;
            }
          }
          if (lVar9 != 0) {
            FUN_10897fb50(*(undefined8 *)(param_4 + 0x18),0x4d);
          }
          FUN_10897fb8c();
          puVar5 = extraout_x10_03;
          while (puVar5 != extraout_x9_03) {
            puVar6 = puVar5 + 1;
            uVar10 = *puVar5;
            puVar5 = puVar6;
            if (7 < uVar10) {
              lVar9 = lVar9 + 1;
            }
          }
          puVar5 = extraout_x8;
          puVar6 = extraout_x9_03;
          if (lVar9 != 0) {
            FUN_10897fb50(*(undefined8 *)(param_4 + 0x18),0x4e);
            puVar5 = puStack_68;
            puVar6 = puStack_60;
          }
          lVar9 = 0;
          puVar11 = puVar5;
          while (puVar11 != puVar6) {
            puVar12 = puVar11 + 1;
            uVar10 = *puVar11;
            puVar11 = puVar12;
            if (1 < uVar10) {
              lVar9 = lVar9 + 1;
            }
          }
          if (lVar9 == 0) {
            uVar3 = 0x45;
          }
          else {
            uVar13 = (long)puVar6 - (long)puVar5 >> 3;
            uVar10 = 0;
            if (uVar13 != 0) {
              uVar10 = (ulong)(lVar9 * 100) / uVar13;
            }
            if (uVar10 < 0x1a) {
              uVar3 = 0x46;
            }
            else if (uVar10 < 0x33) {
              uVar3 = 0x47;
            }
            else {
              uVar3 = 0x48;
              if (0x4b < uVar10) {
                uVar3 = 0x49;
              }
            }
          }
          FUN_10897fb50(*(undefined8 *)(param_4 + 0x18),uVar3,1);
        }
        func_0x000107c28374(&puStack_68);
        return;
      }
      param_2 = lVar14 + 60000000000;
      uVar10 = param_1[1] - (long)plVar7 >> 4;
      plVar1 = plVar7;
      while (plVar8 = plVar1, uVar10 != 0) {
        uVar13 = uVar10 >> 1;
        uVar10 = uVar10 + (uVar10 >> 1 ^ 0xffffffffffffffff);
        plVar1 = plVar8 + uVar13 * 2 + 2;
        if (param_2 <= plVar8[uVar13 * 2]) {
          uVar10 = uVar13;
          plVar1 = plVar8;
        }
      }
      bVar2 = plVar8 == plVar7;
      plVar7 = plVar8;
    } while ((bVar2) || (plVar8[-2] < lVar14 + 30000000000 || param_2 <= plVar8[-2]));
    lStack_70 = plVar8[-1] - lVar4;
    FUN_10802def8(&puStack_68,&lStack_70);
    lVar4 = plVar8[-1];
  } while( true );
}



/* Entry: 10897fb50; end: 10897fb8b;  */

void FUN_10897fb50(long *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined4 uStack_14;
  
  uStack_20 = param_3;
  uStack_14 = param_2;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x30))(param_1,&uStack_14,&uStack_20);
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 10897fb8c; end: 10897fb97;  */

void FUN_10897fb8c(void)

{
  return;
}



/* Entry: 10897fb98; end: 10897fbcf;  */

long FUN_10897fb98(int *param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10df7a4d8;
  FUN_1089801c8(&UNK_10df7a4d8);
  return ((long)puVar1 * (long)param_1[1] * (long)*param_1) / 1000;
}



/* Entry: 10897fbd0; end: 10897fc2b;  */

void FUN_10897fbd0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_110aa1960;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = *param_3;
  lVar4 = param_3[1];
  param_1[5] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  return;
}



/* Entry: 10897fc2c; end: 10897ffa3;  */

void FUN_10897fc2c(undefined **param_1,long *param_2,int param_3,ulong param_4,long param_5,
                  ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  undefined ***pppuVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined ***pppuVar14;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined ***pppuStack_70;
  undefined ***pppuStack_68;
  
  puVar8 = param_1[0xd];
  param_1[0xd] = (undefined *)(param_4 & 0xffffffff | param_5 << 0x20);
  iVar7 = (int)param_5;
  ppuVar5 = param_1;
  if ((int)param_4 != (int)puVar8 || iVar7 != (int)((ulong)puVar8 >> 0x20)) {
    ppuVar4 = param_1;
    FUN_1089a3c0c();
    uStack_88 = 0;
    uStack_80 = 0;
    ppuStack_98 = &PTR_DAT_1107eac58;
    uStack_90 = 0;
    uStack_78 = 0x74;
    func_0x000107c278b8(auStack_b0,&UNK_10f41549f);
    pppuVar14 = &ppuStack_98;
    FUN_108957f58(pppuVar14,auStack_b0,param_5);
    func_0x000107c278b8(auStack_c8,&DAT_10f4edc61);
    FUN_108957f58(pppuVar14,auStack_c8,param_4);
    (**(code **)(*(long *)*ppuVar4 + 8))(*ppuVar4,pppuVar14,1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
    func_0x000104c03ee4(&ppuStack_98);
    FUN_10897ffa4();
  }
  lVar12 = *param_2;
  func_0x000108afcc78();
  ppuVar4 = ppuVar5;
  if (-1 < (long)param_6) {
    if ((long)param_1[0xc] < (long)(ppuVar5 + -0x7d)) {
      param_1[0xc] = (undefined *)ppuVar5;
      ppuVar4 = param_1 + 7;
      func_0x000108afcce8(ppuVar4,param_6 / 1000,ppuVar5);
      ppuVar5 = ppuVar4;
    }
    else {
      ppuVar4 = (undefined **)(param_1[0xb] + param_6 / 1000);
    }
  }
  ppuStack_d0 = ppuVar4;
  func_0x000108980534();
  if (ppuVar5 < (undefined **)0x1e01) {
    pppuVar14 = (undefined ***)(long)(iVar7 * param_3);
    ppuVar13 = param_1 + 0xe;
    puVar8 = *ppuVar13;
    if (puVar8 != (undefined *)0x0) {
      lVar11 = *(long *)(puVar8 + 0x18);
      lVar9 = *(long *)(puVar8 + 0x28);
      func_0x000108980534();
      pppuVar10 = (undefined ***)((long)ppuVar5 - lVar9 * lVar11);
      if (pppuVar14 <= pppuVar10) {
        pppuVar10 = pppuVar14;
      }
      puVar8 = *ppuVar13;
      if (puVar8[0x3c48] == '\x01') {
        _bzero(puVar8 + 0x48,0x3c01);
      }
      puVar8 = puVar8 + lVar9 * lVar11 * 2 + 0x48;
      _memcpy(puVar8,lVar12,(long)pppuVar10 << 1);
      uVar1 = 0;
      if ((long)iVar7 != 0) {
        uVar1 = (ulong)pppuVar10 / (ulong)(long)iVar7;
      }
      *(ulong *)(*ppuVar13 + 0x18) = *(long *)(*ppuVar13 + 0x18) + uVar1;
      lVar11 = *(long *)(*ppuVar13 + 0x18);
      lVar9 = *(long *)(*ppuVar13 + 0x28);
      func_0x000108980534();
      if ((undefined *)(lVar9 * lVar11) < puVar8) {
        return;
      }
      puStack_d8 = param_1[0xe];
      param_1[0xe] = (undefined *)0x0;
      FUN_10897ffb0(param_1,&puStack_d8);
      func_0x000108980550();
      pppuVar14 = (undefined ***)((long)pppuVar14 - (long)pppuVar10);
      lVar12 = lVar12 + (long)pppuVar10 * 2;
      uVar1 = 0;
      if ((long)*(int *)((long)param_1 + 0x6c) != 0) {
        uVar1 = (ulong)((long)pppuVar10 * 1000) / (ulong)(long)*(int *)((long)param_1 + 0x6c);
      }
      uVar2 = 0;
      if ((long)*(int *)(param_1 + 0xd) != 0) {
        uVar2 = uVar1 / (ulong)(long)*(int *)(param_1 + 0xd);
      }
      FUN_1089800a4(&ppuStack_d0,uVar2 * 1000);
      ppuVar4 = ppuStack_d0;
    }
    for (; ppuStack_98 = ppuVar4, pppuVar14 != (undefined ***)0x0;
        pppuVar14 = (undefined ***)((long)pppuVar14 - (long)pppuVar10)) {
      pppuVar6 = (undefined ***)0x3c60;
      __Znwm();
      FUN_1089f5bd4();
      pppuStack_68 = pppuVar6;
      func_0x000108980534();
      pppuVar10 = pppuVar14;
      if (pppuVar6 <= pppuVar14) {
        pppuVar10 = pppuVar6;
      }
      uVar1 = 0;
      if ((long)*(int *)((long)param_1 + 0x6c) != 0) {
        uVar1 = (ulong)pppuVar10 / (ulong)(long)*(int *)((long)param_1 + 0x6c);
      }
      func_0x0001089f5cbc(pppuStack_68,0,lVar12,uVar1,*(undefined4 *)(param_1 + 0xd),0,1);
      pppuVar3 = pppuStack_68;
      pppuVar6 = &ppuStack_98;
      FUN_10894c410();
      pppuVar3[0x78a] = (undefined **)pppuVar6;
      *(undefined1 *)(pppuVar3 + 0x78b) = 1;
      pppuVar6 = &ppuStack_98;
      FUN_1089800a4(pppuVar6,10000);
      func_0x000108980534();
      pppuVar3 = pppuStack_68;
      pppuStack_68 = (undefined ***)0x0;
      if (pppuVar10 == pppuVar6) {
        pppuStack_70 = pppuVar3;
        FUN_10897ffb0(param_1,&pppuStack_70);
        func_0x00010898026c(&pppuStack_70);
      }
      else {
        FUN_10898016c(ppuVar13);
      }
      lVar12 = lVar12 + (long)pppuVar10 * 2;
      func_0x00010898026c(&pppuStack_68);
      ppuVar4 = ppuStack_98;
    }
  }
  return;
}



/* Entry: 10897ffa4; end: 10897ffaf;  */

void FUN_10897ffa4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = 0;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108980324(lVar1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10897ffb0; end: 1089800a3;  */

void FUN_10897ffb0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 8);
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar8 = *param_2;
  *param_2 = 0;
  puVar6 = (undefined8 *)0x38;
  lStack_68 = param_1;
  uStack_60 = uVar7;
  lStack_58 = lVar2;
  uStack_50 = uVar8;
  __Znwm();
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = &PTR_FUN_110aa19e0;
  puVar6[2] = 0;
  puVar6[3] = param_1;
  puVar6[4] = uVar7;
  puVar6[5] = lVar2;
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puVar6[6] = uVar8;
  puStack_48 = puVar6;
  func_0x000104c04b3c(lVar3,lVar3 + 0x70,&puStack_48,0,lVar3 + 0x10);
  puVar6 = puStack_48;
  puStack_48 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    func_0x000108980558();
  }
  FUN_108980184(&lStack_68);
  return;
}



/* Entry: 1089800a4; end: 1089800c7;  */

undefined8 * FUN_1089800a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001089801d4();
  *param_1 = puVar1;
  return param_1;
}



/* Entry: 1089800c8; end: 10898016b;  */

void FUN_1089800c8(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = param_2;
  if ((lVar1 != param_2) && (*(long *)(param_1 + 0x20) != 0)) {
    FUN_10897ffa4(param_1);
    plVar2 = *(long **)(param_1 + 0x20);
    if (*(long *)(param_1 + 0x30) == 0) {
      uStack_30 = 0;
      uStack_28 = 0;
    }
    else {
      func_0x000108980290(&uStack_40,param_1 + 8);
      uStack_30 = uStack_40;
      uStack_28 = uStack_38;
    }
    uStack_40 = 0;
    uStack_38 = 0;
    (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_30);
    FUN_108944214(&uStack_30);
    func_0x0001089802d0(&uStack_40);
  }
  return;
}



/* Entry: 10898016c; end: 108980183;  */

void FUN_10898016c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108980324(lVar1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108980184; end: 1089801af;  */

long FUN_108980184(long param_1)

{
  func_0x00010898026c(param_1 + 0x18);
  func_0x000108980200(param_1 + 8);
  return param_1;
}



/* Entry: 1089801b0; end: 1089801b3;  */

undefined8 * FUN_1089801b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1960;
  func_0x00010898026c(param_1 + 0xe);
  func_0x0001089383a4(param_1 + 4);
  func_0x000108980200(param_1 + 1);
  return param_1;
}



/* Entry: 1089801b4; end: 1089801c7;  */

void FUN_1089801b4(void)

{
  func_0x000108980228();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089801c8; end: 1089801ff;  */

long FUN_1089801c8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (-1 < lVar2) {
    lVar1 = lVar2 / 1000;
    if (499 < lVar2 % 1000) {
      lVar1 = lVar1 + 1;
    }
    return lVar1;
  }
  return lVar2 / 1000 - (ulong)(lVar2 % 1000 < -500);
}



/* Entry: 108980200; end: 108980323;  */

long FUN_108980200(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 108980324; end: 10898034f;  */

long * FUN_108980324(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108980350();
  }
  return param_1;
}



/* Entry: 108980350; end: 10898040f;  */

bool FUN_108980350(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  do {
    iVar1 = *param_1;
    iVar4 = iVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    if (param_1 != (int *)0x0) {
      func_0x00010898039c(param_1 + 2);
    }
    __ZdlPv(param_1);
  }
  return iVar1 != 1;
}



/* Entry: 108980410; end: 108980417;  */

void FUN_108980410(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x68) {
    func_0x00010731e26c(lVar2 + -0x60);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 108980418; end: 108980463;  */

void FUN_108980418(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x68) {
    func_0x00010731e26c(lVar1 + -0x60);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 108980464; end: 10898048f;  */

undefined8 * FUN_108980464(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa19e0;
  FUN_108980184(param_1 + 3);
  return param_1;
}



/* Entry: 108980490; end: 1089804a3;  */

void FUN_108980490(void)

{
  FUN_108980464();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089804a4; end: 10898052b;  */

void FUN_1089804a4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lVar3 = *(long *)(param_1 + 0x18);
  lStack_30 = 0;
  lStack_28 = 0;
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_28 = lVar1;
    if (((lVar1 != 0) && (lStack_30 = *(long *)(param_1 + 0x20), lStack_30 != 0)) &&
       (plVar2 = *(long **)(lVar3 + 0x30), plVar2 != (long *)0x0)) {
      uStack_38 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_38);
      func_0x000108980550();
    }
  }
  func_0x0001089802d0(&lStack_30);
  return;
}



/* Entry: 10898052c; end: 108980563;  */

void FUN_10898052c(void)

{
  return;
}



/* Entry: 108980564; end: 1089806eb;  */

undefined8 *
FUN_108980564(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 auStack_1f0 [100];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = param_6[1];
  uVar2 = *param_6;
  *param_6 = 0;
  param_6[1] = 0;
  *param_1 = &PTR_FUN_110aa29d8;
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  uStack_60 = 0;
  uStack_58 = 0;
  param_1[3] = param_5;
  func_0x00010897b3e4(&uStack_60);
  *param_1 = &PTR_FUN_110aa1a20;
  param_1[4] = &PTR_FUN_110aa1a88;
  param_1[6] = param_4;
  param_1[7] = param_5;
  param_1[8] = param_7;
  auStack_1f0[0] = 0;
  FUN_1089806ec(param_2,auStack_1f0);
  *(undefined4 *)(param_1 + 9) = *param_2;
  FUN_1089a00a0(param_1 + 10);
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0x100;
  FUN_108b8149c(param_1 + 0x13,param_3);
  *(undefined2 *)(param_1 + 0x1a) = 0;
  puVar1 = (undefined8 *)param_1[7];
  FUN_108981f84();
  FUN_108980714(auStack_1f0,param_1,0,param_3);
  (**(code **)*puVar1)(puVar1,auStack_1f0);
  param_1[5] = puVar1;
  func_0x000108a16884(auStack_1f0);
  (**(code **)(*(long *)param_1[7] + 0x88))((long *)param_1[7],0,0);
  return param_1;
}



/* Entry: 1089806ec; end: 108980713;  */

undefined1 * FUN_1089806ec(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [104];
  
  FUN_1089667f8();
  if (param_1 != 0) {
    return (undefined1 *)(param_1 + 0x14);
  }
  puVar2 = (undefined4 *)&UNK_10f4edc74;
  func_0x000104c03f28();
  puVar3 = puVar2;
  func_0x000108a167f8();
  *puVar3 = *(undefined4 *)(param_2 + 0x48);
  FUN_108986c30(param_3);
  puVar3 = puVar2 + 0x16;
  FUN_1089808f4(puVar3,param_3);
  uVar5 = NEON_rev64(*(undefined8 *)(param_2 + 0xc0),4);
  *(undefined8 *)(puVar2 + 0x28) = uVar5;
  *(char *)((long)puVar2 + 0xb1) = (char)param_4;
  func_0x000108981ee8();
  *(double *)(puVar2 + 0x2a) = (double)(float)uVar5;
  FUN_108981fa4();
  func_0x000107c27c5c(puVar2 + 0x2e,puVar3);
  uVar1 = *(undefined4 *)(param_2 + 0x98);
  FUN_108989ddc(auStack_e8,param_2 + 0x98);
  func_0x000108a16924(auStack_a8,uVar1,auStack_e8);
  if (*(char *)(puVar2 + 0x50) == '\x01') {
    FUN_108981338(puVar2 + 0x36,auStack_a8);
  }
  else {
    func_0x000108981360(puVar2 + 0x36,auStack_a8);
    *(undefined1 *)(puVar2 + 0x50) = 1;
  }
  func_0x000108981478();
  func_0x0001089f783c(auStack_e8);
  if ((param_4 & 1) == 0) {
    uVar1 = *(undefined4 *)(param_2 + 0xc0);
    if ((*(byte *)(puVar2 + 0x4e) & 1) == 0) {
      *(undefined1 *)(puVar2 + 0x4e) = 1;
    }
    puVar2[0x4d] = uVar1;
  }
  (**(code **)(**(long **)(param_2 + 0x30) + 0x20))(auStack_a8);
  func_0x000108980928(puVar2 + 0x52,auStack_a8);
  puVar4 = auStack_a8;
  FUN_108981388(puVar4);
  return puVar4;
}



/* Entry: 108980714; end: 108980867;  */

void FUN_108980714(undefined4 *param_1,long param_2,undefined8 param_3,byte param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [64];
  undefined1 auStack_98 [104];
  
  puVar2 = param_1;
  func_0x000108a167f8();
  *puVar2 = *(undefined4 *)(param_2 + 0x48);
  FUN_108986c30(param_3);
  puVar2 = param_1 + 0x16;
  FUN_1089808f4(puVar2,param_3);
  uVar3 = NEON_rev64(*(undefined8 *)(param_2 + 0xc0),4);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(byte *)((long)param_1 + 0xb1) = param_4;
  func_0x000108981ee8();
  *(double *)(param_1 + 0x2a) = (double)(float)uVar3;
  FUN_108981fa4();
  func_0x000107c27c5c(param_1 + 0x2e,puVar2);
  uVar1 = *(undefined4 *)(param_2 + 0x98);
  FUN_108989ddc(auStack_d8,param_2 + 0x98);
  func_0x000108a16924(auStack_98,uVar1,auStack_d8);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_108981338(param_1 + 0x36,auStack_98);
  }
  else {
    func_0x000108981360(param_1 + 0x36,auStack_98);
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  func_0x000108981478();
  func_0x0001089f783c(auStack_d8);
  if ((param_4 & 1) == 0) {
    uVar1 = *(undefined4 *)(param_2 + 0xc0);
    if ((*(byte *)(param_1 + 0x4e) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x4e) = 1;
    }
    param_1[0x4d] = uVar1;
  }
  (**(code **)(**(long **)(param_2 + 0x30) + 0x20))(auStack_98);
  func_0x000108980928(param_1 + 0x52,auStack_98);
  FUN_108981388(auStack_98);
  return;
}



/* Entry: 108980868; end: 1089808cb;  */

undefined8 * FUN_108980868(undefined8 *param_1)

{
  code *extraout_x8;
  
  *param_1 = &PTR_FUN_110aa1a20;
  param_1[4] = &PTR_FUN_110aa1a88;
  (**(code **)(*(long *)param_1[5] + 0x30))();
  *(undefined1 *)(param_1 + 0x1a) = 0;
  func_0x000108981484();
  (*extraout_x8)();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x14);
  func_0x00010894d60c(param_1 + 0xd);
  *param_1 = &PTR_FUN_110aa29d8;
  func_0x00010897b3e4(param_1 + 1);
  return param_1;
}



/* Entry: 1089808cc; end: 1089808d7;  */

undefined8 * FUN_1089808cc(undefined8 *param_1)

{
  code *extraout_x8;
  
  *param_1 = &PTR_FUN_110aa1a20;
  param_1[4] = &PTR_FUN_110aa1a88;
  (**(code **)(*(long *)param_1[5] + 0x30))();
  *(undefined1 *)(param_1 + 0x1a) = 0;
  func_0x000108981484();
  (*extraout_x8)();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x14);
  func_0x00010894d60c(param_1 + 0xd);
  *param_1 = &PTR_FUN_110aa29d8;
  func_0x00010897b3e4(param_1 + 1);
  return param_1;
}



/* Entry: 1089808d8; end: 1089808eb;  */

void FUN_1089808d8(void)

{
  FUN_108980868();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089808ec; end: 1089808f3;  */

void FUN_1089808ec(long param_1)

{
  FUN_108980868(param_1 + -0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089808f4; end: 1089809af;  */

undefined8 * FUN_1089808f4(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    func_0x000108980ed0(param_1,*param_2,param_2[1]);
  }
  return param_1;
}



/* Entry: 1089809b0; end: 1089809b7;  */

void FUN_1089809b0(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 1089809b8; end: 108980a53;  */

void FUN_1089809b8(long param_1)

{
  func_0x00010898142c(*(undefined8 *)(param_1 + 0x28));
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return;
}



/* Entry: 108980a54; end: 108980a5b;  */

void FUN_108980a54(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int *unaff_x19;
  long unaff_x20;
  
  param_1 = param_1 + -0x20;
  func_0x00010898146c();
  plVar3 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar3 + 0x58))();
  iVar2 = -(int)plVar3;
  FUN_108988018();
  *unaff_x19 = iVar2;
  iVar1 = *(int *)(unaff_x20 + 0x90);
  if (iVar2 <= *(int *)(unaff_x20 + 0x90)) {
    iVar1 = iVar2;
  }
  *(int *)(unaff_x20 + 0x90) = iVar1;
  iVar1 = *unaff_x19;
  if (*unaff_x19 <= *(int *)(unaff_x20 + 0x94)) {
    iVar1 = *(int *)(unaff_x20 + 0x94);
  }
  *(int *)(unaff_x20 + 0x94) = iVar1;
  return;
}



/* Entry: 108980a5c; end: 108980c3f;  */

void FUN_108980a5c(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  long lVar11;
  long lVar12;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined1 auStack_198 [8];
  long lStack_190;
  long lStack_188;
  int iStack_178;
  int iStack_160;
  undefined4 uStack_138;
  undefined1 auStack_120 [16];
  undefined4 uStack_68;
  long lStack_60;
  long lStack_58;
  
  pppuVar5 = &ppuStack_1c0;
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x48))(auStack_198);
    if (iStack_178 == 0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
      if (*(char *)(param_1 + 0x60) == '\x01') {
        *(undefined1 *)(param_1 + 0x60) = 0;
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    else {
      uVar4 = param_1 + 0x50;
      FUN_1089a00f0(uVar4,lStack_188 + lStack_190);
      for (; lStack_60 != lStack_58; lStack_60 = lStack_60 + 0x40) {
        if (*(int *)(lStack_60 + 4) == *(int *)(param_1 + 0x48)) {
          if (*(long *)(lStack_60 + 0x38) != 0) {
            ppuStack_1c0 = *(undefined ***)(lStack_60 + 0x28);
            FUN_1089801c8();
            goto LAB_108980b20;
          }
          break;
        }
      }
      pppuVar5 = (undefined ***)0xffffffffffffffff;
LAB_108980b20:
      iVar1 = 0;
      if (uVar4 >> 0x20 != 0) {
        iVar1 = (int)uVar4 << 3;
      }
      iVar2 = iStack_178 - *(int *)(param_1 + 0x78);
      if (iVar2 == 0 || iStack_178 < *(int *)(param_1 + 0x78)) {
        iVar2 = 0;
      }
      iVar3 = iStack_160 - *(int *)(param_1 + 0x7c);
      if (iVar3 == 0 || iStack_160 < *(int *)(param_1 + 0x7c)) {
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x78) = iStack_178;
      *(int *)(param_1 + 0x7c) = iStack_160;
      dVar10 = *(double *)(param_1 + 0x88);
      dVar9 = *(double *)(param_1 + 0x80);
      auVar7 = NEON_ext(auStack_120,auStack_120,8,1);
      dVar8 = auVar7._8_8_;
      *(double *)(param_1 + 0x88) = dVar8;
      dVar6 = auVar7._0_8_;
      *(double *)(param_1 + 0x80) = dVar6;
      lVar11 = -(ulong)(dVar9 < dVar6);
      lVar12 = -(ulong)(dVar10 < dVar8);
      dVar6 = dVar6 - dVar9;
      dVar8 = dVar8 - dVar10;
      *param_2 = uStack_138;
      param_2[1] = iVar1;
      *(char *)(param_2 + 2) = (char)(uVar4 >> 0x20);
      param_2[3] = uStack_68;
      *(undefined ****)(param_2 + 4) = pppuVar5;
      param_2[6] = iVar2;
      param_2[7] = iVar3;
      *(byte *)(param_2 + 10) = (byte)lVar12 & SUB81(dVar8,0);
      *(byte *)((long)param_2 + 0x29) = (byte)((ulong)lVar12 >> 8) & (byte)((ulong)dVar8 >> 8);
      *(byte *)((long)param_2 + 0x2a) = (byte)((ulong)lVar12 >> 0x10) & (byte)((ulong)dVar8 >> 0x10)
      ;
      *(byte *)((long)param_2 + 0x2b) = (byte)((ulong)lVar12 >> 0x18) & (byte)((ulong)dVar8 >> 0x18)
      ;
      *(byte *)(param_2 + 0xb) = (byte)((ulong)lVar12 >> 0x20) & (byte)((ulong)dVar8 >> 0x20);
      *(byte *)((long)param_2 + 0x2d) = (byte)((ulong)lVar12 >> 0x28) & (byte)((ulong)dVar8 >> 0x28)
      ;
      *(byte *)((long)param_2 + 0x2e) = (byte)((ulong)lVar12 >> 0x30) & (byte)((ulong)dVar8 >> 0x30)
      ;
      *(byte *)((long)param_2 + 0x2f) = (byte)((ulong)lVar12 >> 0x38) & (byte)((ulong)dVar8 >> 0x38)
      ;
      *(byte *)(param_2 + 8) = (byte)lVar11 & SUB81(dVar6,0);
      *(byte *)((long)param_2 + 0x21) = (byte)((ulong)lVar11 >> 8) & (byte)((ulong)dVar6 >> 8);
      *(byte *)((long)param_2 + 0x22) = (byte)((ulong)lVar11 >> 0x10) & (byte)((ulong)dVar6 >> 0x10)
      ;
      *(byte *)((long)param_2 + 0x23) = (byte)((ulong)lVar11 >> 0x18) & (byte)((ulong)dVar6 >> 0x18)
      ;
      *(byte *)(param_2 + 9) = (byte)((ulong)lVar11 >> 0x20) & (byte)((ulong)dVar6 >> 0x20);
      *(byte *)((long)param_2 + 0x25) = (byte)((ulong)lVar11 >> 0x28) & (byte)((ulong)dVar6 >> 0x28)
      ;
      *(byte *)((long)param_2 + 0x26) = (byte)((ulong)lVar11 >> 0x30) & (byte)((ulong)dVar6 >> 0x30)
      ;
      *(byte *)((long)param_2 + 0x27) = (byte)((ulong)lVar11 >> 0x38) & (byte)((ulong)dVar6 >> 0x38)
      ;
      if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
        *(undefined1 *)(param_2 + 0xc) = 1;
      }
      if ((int)(uVar4 >> 0x20) == 1) {
        FUN_1089a3c0c();
        uStack_1b0 = 0;
        uStack_1a8 = 0;
        ppuStack_1c0 = &PTR_DAT_1107eac58;
        uStack_1b8 = 0;
        uStack_1a0 = 0x13;
        (**(code **)((long)**pppuVar5 + 0x10))(*pppuVar5,&ppuStack_1c0,(long)((iVar1 + 500) / 1000))
        ;
        func_0x000104c03ee4(&ppuStack_1c0);
      }
      *(undefined8 *)(param_1 + 0x90) = 0x100;
    }
    func_0x000108a167cc(auStack_198);
  }
  return;
}



/* Entry: 108980c40; end: 108980c47;  */

void FUN_108980c40(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  long lVar11;
  long lVar12;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined1 auStack_198 [8];
  long lStack_190;
  long lStack_188;
  int iStack_178;
  int iStack_160;
  undefined4 uStack_138;
  undefined1 auStack_120 [16];
  undefined4 uStack_68;
  long lStack_60;
  long lStack_58;
  
  pppuVar5 = &ppuStack_1c0;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    (**(code **)(**(long **)(param_1 + 8) + 0x48))(auStack_198);
    if (iStack_178 == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (*(char *)(param_1 + 0x40) == '\x01') {
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      uVar4 = param_1 + 0x30;
      FUN_1089a00f0(uVar4,lStack_188 + lStack_190);
      for (; lStack_60 != lStack_58; lStack_60 = lStack_60 + 0x40) {
        if (*(int *)(lStack_60 + 4) == *(int *)(param_1 + 0x28)) {
          if (*(long *)(lStack_60 + 0x38) != 0) {
            ppuStack_1c0 = *(undefined ***)(lStack_60 + 0x28);
            FUN_1089801c8();
            goto LAB_108980b20;
          }
          break;
        }
      }
      pppuVar5 = (undefined ***)0xffffffffffffffff;
LAB_108980b20:
      iVar1 = 0;
      if (uVar4 >> 0x20 != 0) {
        iVar1 = (int)uVar4 << 3;
      }
      iVar2 = iStack_178 - *(int *)(param_1 + 0x58);
      if (iVar2 == 0 || iStack_178 < *(int *)(param_1 + 0x58)) {
        iVar2 = 0;
      }
      iVar3 = iStack_160 - *(int *)(param_1 + 0x5c);
      if (iVar3 == 0 || iStack_160 < *(int *)(param_1 + 0x5c)) {
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x58) = iStack_178;
      *(int *)(param_1 + 0x5c) = iStack_160;
      dVar10 = *(double *)(param_1 + 0x68);
      dVar9 = *(double *)(param_1 + 0x60);
      auVar7 = NEON_ext(auStack_120,auStack_120,8,1);
      dVar8 = auVar7._8_8_;
      *(double *)(param_1 + 0x68) = dVar8;
      dVar6 = auVar7._0_8_;
      *(double *)(param_1 + 0x60) = dVar6;
      lVar11 = -(ulong)(dVar9 < dVar6);
      lVar12 = -(ulong)(dVar10 < dVar8);
      dVar6 = dVar6 - dVar9;
      dVar8 = dVar8 - dVar10;
      *param_2 = uStack_138;
      param_2[1] = iVar1;
      *(char *)(param_2 + 2) = (char)(uVar4 >> 0x20);
      param_2[3] = uStack_68;
      *(undefined ****)(param_2 + 4) = pppuVar5;
      param_2[6] = iVar2;
      param_2[7] = iVar3;
      *(byte *)(param_2 + 10) = (byte)lVar12 & SUB81(dVar8,0);
      *(byte *)((long)param_2 + 0x29) = (byte)((ulong)lVar12 >> 8) & (byte)((ulong)dVar8 >> 8);
      *(byte *)((long)param_2 + 0x2a) = (byte)((ulong)lVar12 >> 0x10) & (byte)((ulong)dVar8 >> 0x10)
      ;
      *(byte *)((long)param_2 + 0x2b) = (byte)((ulong)lVar12 >> 0x18) & (byte)((ulong)dVar8 >> 0x18)
      ;
      *(byte *)(param_2 + 0xb) = (byte)((ulong)lVar12 >> 0x20) & (byte)((ulong)dVar8 >> 0x20);
      *(byte *)((long)param_2 + 0x2d) = (byte)((ulong)lVar12 >> 0x28) & (byte)((ulong)dVar8 >> 0x28)
      ;
      *(byte *)((long)param_2 + 0x2e) = (byte)((ulong)lVar12 >> 0x30) & (byte)((ulong)dVar8 >> 0x30)
      ;
      *(byte *)((long)param_2 + 0x2f) = (byte)((ulong)lVar12 >> 0x38) & (byte)((ulong)dVar8 >> 0x38)
      ;
      *(byte *)(param_2 + 8) = (byte)lVar11 & SUB81(dVar6,0);
      *(byte *)((long)param_2 + 0x21) = (byte)((ulong)lVar11 >> 8) & (byte)((ulong)dVar6 >> 8);
      *(byte *)((long)param_2 + 0x22) = (byte)((ulong)lVar11 >> 0x10) & (byte)((ulong)dVar6 >> 0x10)
      ;
      *(byte *)((long)param_2 + 0x23) = (byte)((ulong)lVar11 >> 0x18) & (byte)((ulong)dVar6 >> 0x18)
      ;
      *(byte *)(param_2 + 9) = (byte)((ulong)lVar11 >> 0x20) & (byte)((ulong)dVar6 >> 0x20);
      *(byte *)((long)param_2 + 0x25) = (byte)((ulong)lVar11 >> 0x28) & (byte)((ulong)dVar6 >> 0x28)
      ;
      *(byte *)((long)param_2 + 0x26) = (byte)((ulong)lVar11 >> 0x30) & (byte)((ulong)dVar6 >> 0x30)
      ;
      *(byte *)((long)param_2 + 0x27) = (byte)((ulong)lVar11 >> 0x38) & (byte)((ulong)dVar6 >> 0x38)
      ;
      if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
        *(undefined1 *)(param_2 + 0xc) = 1;
      }
      if ((int)(uVar4 >> 0x20) == 1) {
        FUN_1089a3c0c();
        uStack_1b0 = 0;
        uStack_1a8 = 0;
        ppuStack_1c0 = &PTR_DAT_1107eac58;
        uStack_1b8 = 0;
        uStack_1a0 = 0x13;
        (**(code **)((long)**pppuVar5 + 0x10))(*pppuVar5,&ppuStack_1c0,(long)((iVar1 + 500) / 1000))
        ;
        func_0x000104c03ee4(&ppuStack_1c0);
      }
      *(undefined8 *)(param_1 + 0x70) = 0x100;
    }
    func_0x000108a167cc(auStack_198);
  }
  return;
}



/* Entry: 108980c48; end: 108980deb;  */

void FUN_108980c48(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  code *extraout_x8;
  byte bVar4;
  long *plVar5;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  uStack_48 = 0;
  puVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_38 = 1;
  uStack_1d8 = (undefined **)((ulong)uStack_1d8._4_4_ << 0x20);
  puStack_40 = puVar1;
  FUN_1089806ec(param_2,&uStack_1d8);
  *(undefined4 *)(param_1 + 9) = *param_2;
  plVar5 = (long *)param_1[7];
  if (*(char *)((long)param_1 + 0xd1) == '\x01') {
    bVar4 = *(byte *)(param_1 + 0x1a) ^ 1;
    bVar3 = bVar4;
  }
  else {
    FUN_108981f84();
    bVar3 = 0;
    if ((int)param_2 == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = *(byte *)(param_1 + 0x1a) ^ 1;
    }
  }
  FUN_108980714(&uStack_1d8,param_1,bVar3 & 1,bVar4 & 1);
  (**(code **)*plVar5)(plVar5,&uStack_1d8);
  puVar1 = &uStack_1d8;
  func_0x000108a16884();
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5);
    puVar1 = (undefined8 *)param_1[5];
    func_0x00010898142c();
  }
  func_0x000108981484();
  (*extraout_x8)();
  param_1[5] = plVar5;
  param_1[10] = 0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if ((((*(byte *)((long)param_1 + 0xd1) & 1) != 0) || (FUN_108981f84(), (int)puVar1 != 0)) &&
     (*(char *)(param_1 + 0x1a) == '\x01')) {
    FUN_108980dec(param_1,*(undefined1 *)((long)param_1 + 0xd1));
    puVar1 = param_1;
  }
  FUN_1089a3c0c();
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1d8 = &PTR_DAT_1107eac58;
  uStack_1d0 = 0;
  uStack_1b8 = 0x51;
  puVar2 = &uStack_48;
  func_0x000107c28148(puVar2);
  (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,&uStack_1d8,puVar2);
  func_0x000104c03ee4(&uStack_1d8);
  return;
}



/* Entry: 108980dec; end: 108980e93;  */

void FUN_108980dec(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long alStack_1e0 [2];
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined1 auStack_1c0 [400];
  
  plVar2 = *(long **)(param_1 + 0x28);
  if ((param_2 & 1) == 0) {
    lVar1 = param_1;
    FUN_108981f84();
  }
  else {
    lVar1 = 1;
  }
  FUN_108980714(auStack_1c0,param_1,param_2,lVar1);
  uStack_1d0 = 0x108981410;
  pcStack_1c8 = FUN_1089813bc;
  alStack_1e0[0] = param_1;
  (**(code **)(*plVar2 + 0x20))(plVar2,auStack_1c0,alStack_1e0);
  func_0x000108981438();
  func_0x000108a16884(auStack_1c0);
  return;
}



/* Entry: 108980e94; end: 108980edb;  */

void FUN_108980e94(long param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  code *extraout_x8;
  byte bVar4;
  long *plVar5;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  puVar2 = (undefined8 *)(param_1 + -0x20);
  uStack_48 = 0;
  puVar1 = puVar2;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_38 = 1;
  uStack_1d8 = (undefined **)((ulong)uStack_1d8._4_4_ << 0x20);
  puStack_40 = puVar1;
  FUN_1089806ec(param_2,&uStack_1d8);
  *(undefined4 *)(param_1 + 0x28) = *param_2;
  plVar5 = *(long **)(param_1 + 0x18);
  if (*(char *)(param_1 + 0xb1) == '\x01') {
    bVar4 = *(byte *)(param_1 + 0xb0) ^ 1;
    bVar3 = bVar4;
  }
  else {
    FUN_108981f84();
    bVar3 = 0;
    if ((int)param_2 == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = *(byte *)(param_1 + 0xb0) ^ 1;
    }
  }
  FUN_108980714(&uStack_1d8,puVar2,bVar3 & 1,bVar4 & 1);
  (**(code **)*plVar5)(plVar5,&uStack_1d8);
  puVar1 = &uStack_1d8;
  func_0x000108a16884();
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5);
    puVar1 = *(undefined8 **)(param_1 + 8);
    func_0x00010898142c();
  }
  func_0x000108981484();
  (*extraout_x8)();
  *(long **)(param_1 + 8) = plVar5;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  if ((((*(byte *)(param_1 + 0xb1) & 1) != 0) || (FUN_108981f84(), (int)puVar1 != 0)) &&
     (*(char *)(param_1 + 0xb0) == '\x01')) {
    FUN_108980dec(puVar2,*(undefined1 *)(param_1 + 0xb1));
    puVar1 = puVar2;
  }
  FUN_1089a3c0c();
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1d8 = &PTR_DAT_1107eac58;
  uStack_1d0 = 0;
  uStack_1b8 = 0x51;
  puVar2 = &uStack_48;
  func_0x000107c28148(puVar2);
  (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,&uStack_1d8,puVar2);
  func_0x000104c03ee4(&uStack_1d8);
  return;
}



/* Entry: 108980edc; end: 108980fb3;  */

void FUN_108980edc(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  if ((ulong)(param_1[2] - *param_1 >> 5) < param_4) {
    FUN_108980fe8(param_1);
    plVar1 = param_1;
    FUN_108981058(param_1,param_4);
    func_0x000108981020(param_1,plVar1);
  }
  else {
    lVar2 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar2 >> 5)) {
      FUN_1089811f0(param_2,param_3);
      func_0x00010898146c();
      lVar2 = param_1[1];
      while (lVar2 != unaff_x19) {
        lVar2 = lVar2 + -0x20;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1089811f0(param_2,param_2 + lVar2);
    param_2 = param_2 + lVar2;
  }
  plVar1 = param_1 + 2;
  func_0x000108981098(plVar1,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 108980fb4; end: 108980fe7;  */

void FUN_108980fb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x000108981098();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 108980fe8; end: 108981057;  */

void FUN_108980fe8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1089812dc();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 108981058; end: 1089810ab;  */

long * FUN_108981058(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x7ffffffffffffff;
    }
    return plVar1;
  }
  FUN_1089812e4();
  FUN_1089810ac();
  return param_1;
}



/* Entry: 1089810ac; end: 108981143;  */

long FUN_1089810ac(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_108981144(param_4,param_2);
    param_4 = lStack_38 + 0x20;
  }
  uStack_48 = 1;
  FUN_108981170(&uStack_60);
  return param_4;
}



/* Entry: 108981144; end: 10898116f;  */

void FUN_108981144(long param_1,long param_2)

{
  undefined4 uVar1;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 108981170; end: 10898119f;  */

long FUN_108981170(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1089811a0(param_1);
  }
  return param_1;
}



/* Entry: 1089811a0; end: 1089811bf;  */

void FUN_1089811a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1089811c0; end: 1089811ef;  */

void FUN_1089811c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1089811f0; end: 10898121b;  */

void FUN_1089811f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10898121c(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10898121c; end: 108981277;  */

undefined1  [16] FUN_10898121c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_108981278(lVar1,param_2);
    lVar1 = lVar1 + 0x20;
    param_4 = param_4 + 0x20;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 108981278; end: 1089812db;  */

void FUN_108981278(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010898146c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x1c);
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x1c) = uVar1;
  return;
}



/* Entry: 1089812dc; end: 1089812e3;  */

void FUN_1089812dc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010898146c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1089812e4; end: 1089812f7;  */

void FUN_1089812e4(void)

{
  func_0x000104bd47e8(&UNK_10f4edc6d);
  FUN_10898131c();
  return;
}



/* Entry: 1089812f8; end: 10898131b;  */

void FUN_1089812f8(void)

{
  FUN_10898131c();
  return;
}



/* Entry: 10898131c; end: 108981337;  */

void FUN_10898131c(undefined4 *param_1,undefined4 *param_2)

{
  if ((ulong)param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010898146c();
  *param_1 = *param_2;
  func_0x0001089f7864(param_1 + 2,param_2 + 2);
  func_0x000108981454();
  return;
}



/* Entry: 108981338; end: 108981387;  */

void FUN_108981338(undefined4 *param_1,undefined4 *param_2)

{
  func_0x00010898146c();
  *param_1 = *param_2;
  func_0x0001089f7864(param_1 + 2,param_2 + 2);
  func_0x000108981454();
  return;
}



/* Entry: 108981388; end: 1089813bb;  */

long * FUN_108981388(long *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 8))();
  }
  return param_1;
}



/* Entry: 1089813bc; end: 10898140f;  */

void FUN_1089813bc(undefined8 param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined3 uStack_18;
  undefined1 uStack_15;
  undefined3 uStack_14;
  
  uStack_28 = *(undefined8 *)(param_2 + 0x10);
  uStack_30 = *(undefined8 *)(param_2 + 8);
  uStack_20 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uStack_18 = (undefined3)*(undefined4 *)(param_2 + 0x20);
  uStack_15 = (undefined1)*(undefined4 *)(param_2 + 0x23);
  uStack_14 = (undefined3)((uint)*(undefined4 *)(param_2 + 0x23) >> 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_30);
  return;
}



/* Entry: 108981410; end: 108981497;  */

void FUN_108981410(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_3[1] = param_2[1];
  *param_3 = uVar1;
  return;
}



/* Entry: 108981498; end: 108981a37;  */

void FUN_108981498(long param_1,long *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined ***pppuVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined1 uStack_321;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  uint uStack_30c;
  undefined1 uStack_308;
  undefined4 uStack_304;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined1 auStack_2f0 [24];
  double dStack_2d8;
  double dStack_2d0;
  undefined1 auStack_2c8 [24];
  byte bStack_2b0;
  undefined1 auStack_2a8 [24];
  byte bStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  int iStack_278;
  byte bStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  double dStack_178;
  undefined8 uStack_170;
  double dStack_168;
  undefined1 auStack_d0 [24];
  undefined4 auStack_b8 [2];
  undefined1 auStack_b0 [24];
  undefined4 uStack_98;
  undefined1 auStack_90 [24];
  undefined4 uStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_2 == 0) {
    FUN_1089a3c0c();
    func_0x000108982174();
    func_0x0001089821b8();
    func_0x00010898219c();
    func_0x0001089821a4();
    goto LAB_1089816a0;
  }
  func_0x000105637028(&ppuStack_1e0);
  func_0x00010bcd54ac(auStack_d0,&ppuStack_1e0);
  func_0x00010b50e8bc(&ppuStack_1e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_248,param_3);
  func_0x000107c27994(&uStack_260,auStack_d0);
  uStack_220 = uStack_238;
  uStack_228 = uStack_240;
  uStack_230 = uStack_248;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0xc;
  uStack_1f8 = uStack_258;
  uStack_200 = uStack_260;
  uStack_1f0 = uStack_250;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  func_0x000107c27914(&uStack_260);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_248);
  (**(code **)(*(long *)*param_2 + 0x30))(&uStack_280,(long *)*param_2,&uStack_230);
  if ((bStack_268 & 1) == 0) {
    FUN_1089a3c0c();
    func_0x000108982174();
    func_0x0001089821b8();
    func_0x00010898219c();
    func_0x0001089821a4();
  }
  else {
    ppuStack_1e0 = &PTR_FUN_110aa8c18;
    uStack_1d8 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    dStack_178 = 0.0;
    uStack_180 = 0;
    dStack_168 = 0.0;
    uStack_170 = 0;
    pppuVar1 = &ppuStack_1e0;
    func_0x000107c3034c(pppuVar1,uStack_280,iStack_278 - (int)uStack_280);
    if ((((((ulong)pppuVar1 & 1) == 0) || ((uStack_1d0 & 1) == 0)) || ((int)uStack_1a8 == 0)) ||
       ((int)uStack_1c0 == 0)) {
LAB_10898167c:
      func_0x0001089821a4();
    }
    else {
      if ((int)uStack_190 < 1) {
        FUN_1089a3c0c();
        FUN_108982130();
        func_0x000108982158();
LAB_108981678:
        func_0x00010898216c();
        goto LAB_10898167c;
      }
      if (uStack_190._4_4_ < 1) {
        FUN_1089a3c0c();
        FUN_108982130();
        func_0x000108982158();
        goto LAB_108981678;
      }
      if ((int)uStack_170 <= uStack_190._4_4_) {
        FUN_1089a3c0c();
        FUN_108982130();
        func_0x000108982158();
        goto LAB_108981678;
      }
      if (uStack_180._4_4_ < (int)uStack_170) {
        FUN_1089a3c0c();
        FUN_108982130();
        func_0x000108982158();
        goto LAB_108981678;
      }
      if ((uStack_170._4_4_ != 0) && ((int)uStack_170._4_4_ <= uStack_190._4_4_)) {
        FUN_1089a3c0c();
        FUN_108982130();
        func_0x000108982158();
        goto LAB_108981678;
      }
      if (uStack_188._4_4_ < 1) {
        FUN_1089a3c0c();
        FUN_108982130();
        func_0x000108982158();
        goto LAB_108981678;
      }
      if ((int)uStack_180 <= uStack_188._4_4_) {
        FUN_1089a3c0c();
        FUN_108982130();
        func_0x000108982158();
        goto LAB_108981678;
      }
      if ((int)uStack_188 < 1) {
        FUN_1089a3c0c();
        FUN_108982130();
        func_0x000108982158();
        goto LAB_108981678;
      }
      uVar3 = *(undefined8 *)(lStack_198 + 0x10);
      uStack_288 = uVar3;
      if ((int)((ulong)uVar3 >> 0x20) * (int)uVar3 < 1) {
        FUN_1089a3c0c();
        FUN_108982130();
        func_0x000108982158();
        goto LAB_108981678;
      }
      FUN_108981a38(auStack_2a8,&uStack_288,&ppuStack_1e0,&uStack_1c8);
      if ((bStack_290 & 1) == 0) {
        FUN_1089a3c0c();
        FUN_108982130();
        func_0x000108982158();
        func_0x00010898216c();
        func_0x0001089821a4();
      }
      else {
        FUN_108981a38(auStack_2c8,&uStack_288,&ppuStack_1e0,&uStack_1b0);
        if ((bStack_2b0 & 1) == 0) {
          FUN_1089a3c0c();
          FUN_108982130();
          func_0x000108982158();
          func_0x00010898216c();
          func_0x0001089821a4();
        }
        else {
          dVar4 = 1.0;
          if (dStack_178 != 0.0) {
            dVar4 = dStack_178;
          }
          dVar5 = 1.0;
          if (dStack_168 != 0.0) {
            dVar5 = dStack_168;
          }
          uStack_318 = uStack_190;
          uStack_310 = uStack_180._4_4_;
          if (uStack_170._4_4_ == 0) {
            uStack_30c = uStack_30c & 0xffffff00;
          }
          else {
            uStack_30c = uStack_170._4_4_;
          }
          uStack_308 = uStack_170._4_4_ != 0;
          uStack_304 = (int)uStack_170;
          uStack_300 = uStack_188;
          uStack_2f8 = (int)uStack_180;
          auStack_b8[0] = 1;
          uStack_320 = uVar3;
          func_0x000104c038b0(auStack_b0,auStack_2a8);
          uStack_98 = 2;
          func_0x000104c038b0(auStack_90,auStack_2c8);
          uStack_78 = 4;
          func_0x000104c038b0(auStack_70,auStack_2c8);
          param_4 = auStack_b8;
          func_0x000104c03924(auStack_2f0,auStack_b8,3,&uStack_321);
          dStack_2d8 = dVar4;
          dStack_2d0 = dVar5;
          FUN_108982094(param_1,&uStack_320);
          *(undefined1 *)(param_1 + 0x58) = 1;
          func_0x000104c03d34(auStack_2f0);
          lVar2 = 0x48;
          do {
            func_0x000104c03854((long)param_4 + lVar2);
            lVar2 = lVar2 + -0x20;
          } while (lVar2 != -0x18);
        }
        FUN_108982110(auStack_2c8);
      }
      FUN_108982110(auStack_2a8);
    }
    FUN_1089f511c(&ppuStack_1e0);
  }
  func_0x000107c279c4(&uStack_280);
  func_0x000107c27f6c(&uStack_230);
  func_0x000107c27914(auStack_d0);
LAB_1089816a0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  param_4 = param_4 + 0x12;
  lVar2 = -0x60;
  do {
    func_0x000104c03854(param_4);
    param_4 = param_4 + -8;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0);
  FUN_108982110(auStack_2c8);
  FUN_108982110(auStack_2a8);
  FUN_1089f511c(&ppuStack_1e0);
  func_0x000107c279c4(&uStack_280);
  func_0x000107c27f6c(&uStack_230);
  func_0x000107c27914(auStack_d0);
  do {
    func_0x000108982164();
    func_0x00010b50e8bc(&ppuStack_1e0);
  } while( true );
}



/* Entry: 108981a38; end: 108981c9f;  */

void FUN_108981a38(long *param_1,int *param_2,long param_3,ulong *param_4)

{
  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long **pplVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 uVar9;
  long *plVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_90 = 0;
  lStack_88 = 0;
  puVar12 = param_4;
  if ((*param_4 & 1) != 0) {
    puVar12 = (ulong *)(*param_4 + 7);
  }
  lVar13 = (long)(int)param_4[1] << 3;
  plStack_98 = &lStack_90;
  while (lVar13 != 0) {
    uVar8 = *puVar12;
    uVar2 = *(uint *)(uVar8 + 0x2c);
    if (uVar2 == 0) {
      uVar9 = 0;
    }
    else {
      if (4 < uVar2) goto LAB_108981c50;
      uVar9 = 1;
    }
    ppuVar1 = &PTR_PTR_113289cd0;
    if (*(undefined ***)(uVar8 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(uVar8 + 0x18);
    }
    puStack_b8 = ppuVar1[2];
    uStack_b0 = *(undefined8 *)(uVar8 + 0x20);
    iStack_a8 = *(int *)(uVar8 + 0x28);
    uStack_a4 = CONCAT31(uStack_a4._1_3_,iStack_a8 != 0);
    uStack_9c = CONCAT31(uStack_9c._1_3_,uVar9);
    pplVar6 = &plStack_98;
    uStack_a0 = uVar2;
    func_0x000104c03738(pplVar6,&uStack_68,&puStack_b8);
    plVar11 = *pplVar6;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x40;
      __Znwm();
      uStack_70 = 1;
      *(undefined8 *)((long)plVar11 + 0x24) = uStack_b0;
      *(undefined **)((long)plVar11 + 0x1c) = puStack_b8;
      *(ulong *)((long)plVar11 + 0x34) = CONCAT44(uStack_9c,uStack_a0);
      *(ulong *)((long)plVar11 + 0x2c) = CONCAT44(uStack_a4,iStack_a8);
      plStack_78 = &lStack_90;
      func_0x000104c036e4(&plStack_98,uStack_68,pplVar6,plVar11);
      uStack_80 = 0;
      func_0x000104c0381c(&uStack_80);
    }
    uVar2 = *(uint *)(plVar11 + 5);
    if (((((int)uVar2 < 1) || (uVar3 = *(uint *)((long)plVar11 + 0x24), (int)uVar3 < 0)) ||
        (uVar2 <= uVar3)) ||
       (((char)plVar11[6] == '\x01' &&
        (((int)*(uint *)((long)plVar11 + 0x2c) <= (int)uVar3 ||
         (uVar2 < *(uint *)((long)plVar11 + 0x2c))))))) goto LAB_108981c50;
    puVar12 = puVar12 + 1;
    lVar13 = lVar13 + -8;
    if ((int)plVar11[4] * *(int *)((long)plVar11 + 0x1c) < 0xe100) goto LAB_108981c50;
  }
  iVar4 = param_2[1] * *param_2;
  plVar7 = &lStack_90;
  plVar11 = &lStack_90;
  while (plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
    iVar5 = (int)plVar10[4] * *(int *)((long)plVar10 + 0x1c);
    lVar13 = 8;
    if (iVar4 <= iVar5) {
      lVar13 = 0;
    }
    plVar11 = (long *)((long)plVar10 + lVar13);
    if (iVar4 <= iVar5) {
      plVar7 = plVar10;
    }
  }
  if (((&lStack_90 == plVar7) || (iVar4 < (int)plVar7[4] * *(int *)((long)plVar7 + 0x1c))) ||
     (*(int *)(param_3 + 0x50) <= *(int *)((long)plVar7 + 0x24))) {
LAB_108981c50:
    uVar9 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    *param_1 = (long)plStack_98;
    plVar11 = param_1 + 1;
    *plVar11 = lStack_90;
    param_1[2] = lStack_88;
    if (lStack_88 == 0) {
      *param_1 = (long)plVar11;
      uVar9 = 1;
    }
    else {
      *(long **)(lStack_90 + 0x10) = plVar11;
      uVar9 = 1;
      lStack_90 = 0;
      lStack_88 = 0;
      plStack_98 = &lStack_90;
    }
  }
  *(undefined1 *)(param_1 + 3) = uVar9;
  func_0x000104c03854(&plStack_98);
  return;
}



/* Entry: 108981ca0; end: 108981d1b;  */

undefined1 FUN_108981ca0(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam0000000113828070 & 1) == 0) {
    iVar2 = 0x13828070;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uVar1 = 0x95;
      func_0x000107c30180(&UNK_10f4edc95,0x18,0);
      uRam0000000113828068 = uVar1;
      ___cxa_guard_release(0x113828070);
    }
  }
  return uRam0000000113828068;
}



/* Entry: 108981d1c; end: 108981d97;  */

undefined1 FUN_108981d1c(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam0000000113828080 & 1) == 0) {
    iVar2 = 0x13828080;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uVar1 = 0xae;
      func_0x000107c30180(&UNK_10f4edcae,0x20,0);
      uRam0000000113828078 = uVar1;
      ___cxa_guard_release(0x113828080);
    }
  }
  return uRam0000000113828078;
}



/* Entry: 108981d98; end: 108981daf;  */

ulong FUN_108981d98(ulong param_1)

{
  FUN_108981db0();
  return param_1 >> 1 & 1;
}



/* Entry: 108981db0; end: 108981e27;  */

undefined * FUN_108981db0(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138280b8 & 1) == 0) {
    iVar1 = 0x138280b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4edccf;
      func_0x000107c30184(&UNK_10f4edccf,0xd,3);
      puRam00000001138280b0 = puVar2;
      ___cxa_guard_release(0x1138280b8);
    }
  }
  return puRam00000001138280b0;
}



/* Entry: 108981e28; end: 108981e57;  */

uint FUN_108981e28(uint param_1)

{
  FUN_108981db0();
  return param_1 & 1;
}



/* Entry: 108981e58; end: 108981ecf;  */

undefined * FUN_108981e58(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138280c8 & 1) == 0) {
    iVar1 = 0x138280c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4edcdd;
      func_0x000107c30184(&UNK_10f4edcdd,0xe,3);
      puRam00000001138280c0 = puVar2;
      ___cxa_guard_release(0x1138280c8);
    }
  }
  return puRam00000001138280c0;
}



/* Entry: 108981ed0; end: 108981f07;  */

uint FUN_108981ed0(uint param_1)

{
  FUN_108981e58();
  return param_1 & 1;
}



/* Entry: 108981f08; end: 108981f83;  */

undefined4 FUN_108981f08(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((bRam00000001138280d8 & 1) == 0) {
    iVar1 = 0x138280d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0;
      func_0x000107c30188(&UNK_10f4edcec,0x16);
      uRam00000001138280d0 = uVar2;
      ___cxa_guard_release(0x1138280d8);
    }
  }
  return uRam00000001138280d0;
}



/* Entry: 108981f84; end: 108981fa3;  */

bool FUN_108981f84(float param_1)

{
  FUN_108981f08();
  return 1.0 <= param_1;
}



/* Entry: 108981fa4; end: 108982093;  */

undefined8 FUN_108981fa4(void)

{
  int iVar1;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  
  if ((bRam00000001138280a8 & 1) == 0) {
    iVar1 = 0x138280a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c30194(&lStack_38,&UNK_10f4edd03,0x20,0,0);
      if (lStack_38 == lStack_30) {
        uRam0000000113828088 = uRam0000000113828088 & 0xffffffffffffff00;
        uRam00000001138280a0 = 0;
      }
      else {
        func_0x000107c28068(&uStack_50);
        uRam0000000113828090 = uStack_48;
        uRam0000000113828088 = uStack_50;
        uRam0000000113828098 = uStack_40;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_50 = 0;
        uRam00000001138280a0 = 1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
      }
      func_0x000107c27914(&lStack_38);
      ___cxa_guard_release(0x1138280a8);
    }
  }
  return 0x113828088;
}



/* Entry: 108982094; end: 1089820d3;  */

undefined8 * FUN_108982094(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x1c);
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  FUN_1089820d4(param_1 + 6,param_2 + 6);
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  return param_1;
}



/* Entry: 1089820d4; end: 10898210f;  */

void FUN_1089820d4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = *param_2;
  plVar1 = param_2 + 1;
  lVar3 = *plVar1;
  plVar2 = param_1 + 1;
  *plVar2 = lVar3;
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    *(long **)(lVar3 + 0x10) = plVar2;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
    return;
  }
  *param_1 = plVar2;
  return;
}



/* Entry: 108982110; end: 10898212f;  */

void FUN_108982110(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104c03854();
  }
  return;
}



/* Entry: 108982130; end: 1089821c3;  */

void FUN_108982130(void)

{
  undefined4 unaff_w20;
  long unaff_x21;
  
  *(undefined8 *)(unaff_x21 + 0x138) = 0;
  *(undefined8 *)(unaff_x21 + 0x140) = 0;
  *(undefined ***)(unaff_x21 + 0x128) = &PTR_DAT_1107eac58;
  *(undefined8 *)(unaff_x21 + 0x130) = 0;
  *(undefined4 *)(unaff_x21 + 0x148) = unaff_w20;
  return;
}



/* Entry: 1089821c4; end: 108982203;  */

void FUN_1089821c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  FUN_108982204(&uStack_40,&uStack_28);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10898281c(&uStack_40);
  return;
}



/* Entry: 108982204; end: 108982227;  */

void FUN_108982204(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_108982228(&uStack_11,param_1);
  return;
}



/* Entry: 108982228; end: 1089822bf;  */

undefined1 * FUN_108982228(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1089822c0(auStack_40,1);
  FUN_108982314(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010898280c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010898280c(auStack_40);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_1089822e8();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1089822c0; end: 1089822e7;  */

long FUN_1089822c0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1089822e8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1089822e8; end: 108982313;  */

undefined8 * FUN_1089822e8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x222222222222223) {
    puVar1 = (undefined8 *)(param_2 * 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa1b30;
  func_0x00010898237c(param_1 + 3);
  return param_1;
}



/* Entry: 108982314; end: 108982357;  */

undefined8 * FUN_108982314(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa1b30;
  func_0x00010898237c(param_1 + 3);
  return param_1;
}



/* Entry: 108982358; end: 10898235b;  */

void FUN_108982358(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1b30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10898235c; end: 10898236f;  */

void FUN_10898235c(void)

{
  func_0x0001089827fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108982370; end: 108982383;  */

void FUN_108982370(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar1 = *(long **)(param_1 + 0x38);
    plVar2 = *(long **)(*(long *)(param_1 + 0x30) + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    *(undefined8 *)(param_1 + 0x40) = 0;
    while (plVar1 != (long *)(param_1 + 0x30)) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 108982384; end: 108982463;  */

undefined8 * FUN_108982384(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110aa1b80;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = param_1 + 3;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[4] = param_1 + 3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = param_1;
  __ZNSt3__16thread20hardware_concurrencyEv();
  *(int *)((long)param_1 + 0x5c) = (int)puVar1;
  return param_1;
}



/* Entry: 108982464; end: 10898248f;  */

int FUN_108982464(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    return (int)*(float *)(*(long *)(param_1 + 0x18) + 0x10);
  }
  return -1;
}



/* Entry: 108982490; end: 1089824eb;  */

void FUN_108982490(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1089824ec; end: 1089827eb;  */

void FUN_1089824ec(undefined *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined **ppuStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  long lStack_40;
  long lStack_38;
  
  puVar7 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  _bzero(&ppuStack_d0,0x90);
  iVar6 = 0;
  _getrusage(0,&ppuStack_d0);
  iVar17 = 0;
  if (iVar6 == 0) {
    lVar10 = (long)(int)uStack_b8 + (long)(int)lStack_c8 + (lStack_c0 + (long)ppuStack_d0) * 1000000
    ;
    lVar14 = *(long *)(param_1 + 0x48);
    lVar11 = (long)puVar7 / 1000;
    if (((lVar14 != 0) && (*(long *)(param_1 + 0x50) != 0)) &&
       (lVar11 - lVar14 != 0 && lVar14 <= lVar11)) {
      uVar15 = (lVar11 - lVar14) * (ulong)*(uint *)(param_1 + 0x5c);
      uVar3 = 0;
      if (uVar15 != 0) {
        uVar3 = (undefined4)((ulong)((lVar10 - *(long *)(param_1 + 0x50)) * 100) / uVar15);
      }
      *(undefined4 *)(param_1 + 0x58) = uVar3;
    }
    *(long *)(param_1 + 0x48) = lVar11;
    *(long *)(param_1 + 0x50) = lVar10;
    iVar17 = *(int *)(param_1 + 0x58);
  }
  *(int *)(param_1 + 0x40) = iVar17;
  plVar8 = (long *)0x18;
  __Znwm();
  plVar16 = (long *)(param_1 + 0x18);
  lVar11 = *plVar16;
  *(float *)(plVar8 + 2) = (float)iVar17;
  *plVar8 = lVar11;
  plVar8[1] = (long)plVar16;
  *(long **)(lVar11 + 8) = plVar8;
  *plVar16 = (long)plVar8;
  lVar11 = *(long *)(param_1 + 0x28);
  *(ulong *)(param_1 + 0x28) = lVar11 + 1U;
  if (7 < lVar11 + 1U) {
    plVar8 = *(long **)(param_1 + 0x20);
    plVar13 = (long *)plVar8[1];
    *(long **)(*plVar8 + 8) = plVar13;
    *plVar13 = *plVar8;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    __ZdlPv();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  fVar18 = 0.0;
  plVar12 = *(long **)(param_1 + 0x20);
  for (plVar13 = plVar12; plVar13 != plVar16; plVar13 = (long *)plVar13[1]) {
    fVar18 = fVar18 + *(float *)(plVar13 + 2);
    *(float *)(param_1 + 0x30) = fVar18;
  }
  uVar15 = *(ulong *)(param_1 + 0x28);
  *(float *)(param_1 + 0x30) = fVar18 / (float)uVar15;
  *(undefined4 *)(param_1 + 0x34) = 0;
  fVar19 = 0.0;
  for (; plVar12 != plVar16; plVar12 = (long *)plVar12[1]) {
    fVar20 = *(float *)(plVar12 + 2) - fVar18 / (float)uVar15;
    fVar19 = fVar19 + fVar20 * fVar20;
    *(float *)(param_1 + 0x34) = fVar19;
  }
  uVar4 = uVar15 != 0;
  uVar5 = uVar15 - 1 == 0;
  if ((bool)uVar4 && !(bool)uVar5) {
    *(float *)(param_1 + 0x34) = fVar19 / (float)(uVar15 - 1);
  }
  FUN_1089a3c0c();
  lStack_c0 = 0;
  uStack_b8 = 0;
  ppuStack_d0 = &PTR_DAT_1107eac58;
  lStack_c8 = 0;
  uStack_b0 = 0xe;
  (**(code **)(*(long *)*plVar8 + 0x10))
            ((long *)*plVar8,&ppuStack_d0,(long)*(int *)(param_1 + 0x40));
  func_0x000104c03ee4(&ppuStack_d0);
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 2000000000;
  plVar8 = *(long **)(param_1 + 8);
  lStack_38 = plVar8[0xf];
  lStack_40 = plVar8[0xe];
  if (plVar8[0xf] != 0) {
    plVar16 = (long *)(plVar8[0xf] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = *plVar16 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  __ZNSt3__15mutex4lockEv(plVar8 + 2);
  if ((*(byte *)(plVar8 + 1) & 1) == 0) {
LAB_108982714:
    plVar16 = (long *)0x0;
  }
  else {
    func_0x000108982864();
    if (!(bool)uVar4 || (bool)uVar5) {
      FUN_108b851fc(plVar8);
      func_0x000108982864();
      if (!(bool)uVar4) goto LAB_108982714;
    }
    lVar11 = plVar8[0x34];
    plVar8[0x34] = lVar11 + 1;
    ppuVar9 = (undefined **)0x20;
    __Znwm();
    *(undefined4 *)(ppuVar9 + 1) = 0;
    *ppuVar9 = (undefined *)&PTR_FUN_110aa1be8;
    ppuVar9[2] = (undefined *)(lVar11 + 1);
    ppuVar9[3] = param_1;
    lStack_c0 = lStack_38;
    lStack_c8 = lStack_40;
    lStack_40 = 0;
    lStack_38 = 0;
    uStack_b8 = *(undefined8 *)(param_1 + 0x38);
    plVar16 = plVar8;
    ppuStack_d0 = ppuVar9;
    (**(code **)(*plVar8 + 0x10))(plVar8,&ppuStack_d0);
    func_0x00010897dd3c(&ppuStack_d0);
  }
  __ZNSt3__15mutex6unlockEv(plVar8 + 2);
  func_0x00010897dd64(&lStack_40);
  *(long **)(param_1 + 0x10) = plVar16;
  return;
}



/* Entry: 1089827ec; end: 10898281b;  */

void FUN_1089827ec(void)

{
  return;
}



/* Entry: 10898281c; end: 108982843;  */

long FUN_10898281c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108982844; end: 108982877;  */

void FUN_108982844(void)

{
  return;
}



/* Entry: 108982878; end: 108982a13;  */

void FUN_108982878(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,long *param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined1 auStack_128 [64];
  undefined4 auStack_e8 [14];
  undefined4 auStack_b0 [2];
  undefined1 auStack_a8 [64];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b8149c(auStack_e8);
  FUN_108989ddc(auStack_128,auStack_e8);
  func_0x000108a16690(param_1);
  *param_1 = param_3;
  param_1[1] = param_5;
  *(undefined8 *)(param_1 + 6) = param_6;
  auStack_b0[0] = auStack_e8[0];
  func_0x0001089f7734(auStack_a8,auStack_128);
  FUN_108982a14(param_1 + 0x12,auStack_b0,1);
  func_0x0001089f783c(auStack_a8);
  (**(code **)(*param_7 + 0x18))(auStack_b0,param_7);
  func_0x000108982a3c(param_1 + 0x18,auStack_b0);
  FUN_108982f1c(auStack_b0);
  FUN_108989fe8(auStack_b0,param_4,param_8);
  func_0x000107c27b9c(param_1 + 0xc,auStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  (**(code **)(*param_7 + 0x30))();
  *(long *)(param_1 + 8) = (long)(int)*param_7;
  *(undefined1 *)(param_1 + 10) = 1;
  puVar1 = auStack_128;
  func_0x0001089f783c(puVar1);
  func_0x000108982f58();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108a166ec(param_1);
  func_0x0001089f783c(auStack_128);
  func_0x000108982f58();
  do {
    __Unwind_Resume(puVar1);
  } while( true );
}



/* Entry: 108982a14; end: 108982a7f;  */

undefined8 FUN_108982a14(undefined8 param_1,long param_2,long param_3)

{
  FUN_108982a80(param_1,param_2,param_2 + param_3 * 0x48);
  return param_1;
}



/* Entry: 108982a80; end: 108982b2f;  */

void FUN_108982a80(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_108982bf8(auStack_48,param_1);
    for (; lStack_38 != 0 && param_2 != param_3; param_2 = param_2 + 0x48) {
      uVar1 = param_2;
      FUN_108982b30(param_1);
      if ((uVar1 & 1) != 0) {
        FUN_108982bb0(auStack_48);
      }
    }
    FUN_108982d50(auStack_48);
  }
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    FUN_108982be0(param_1,param_2);
  }
  return;
}



/* Entry: 108982b30; end: 108982baf;  */

undefined1  [16] FUN_108982b30(long *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  func_0x000108982c58(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x000108982ca8(param_3 + 0x20,param_2);
    FUN_108982cb4(param_1,uStack_38,plVar2,param_3);
    lVar3 = param_3;
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 108982bb0; end: 108982bdf;  */

void FUN_108982bb0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    FUN_108982d08();
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 108982be0; end: 108982bf7;  */

void FUN_108982be0(void)

{
  FUN_108982de4();
  return;
}



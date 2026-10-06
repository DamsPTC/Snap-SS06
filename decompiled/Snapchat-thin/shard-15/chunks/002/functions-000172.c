/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b985704; end: 10b98599f;  */

undefined1  [16] FUN_10b985704(undefined8 *param_1,undefined8 *****param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 in_ZR;
  int iVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 *puVar7;
  undefined8 *****pppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_2b0 [16];
  undefined8 ****appppuStack_2a0 [21];
  undefined8 uStack_1f8;
  undefined8 ****ppppuStack_1f0;
  undefined8 ****ppppuStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined1 auStack_1d0 [112];
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 **appuStack_148 [14];
  undefined8 *****pppppuStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 *****pppppuStack_c8;
  undefined1 auStack_c0 [72];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_48;
  
  pppppuVar10 = param_2;
  func_0x00010b986400();
  ppppuVar5 = pppppuVar10[5];
  uStack_48 = extraout_x8;
  (*(code *)(*ppppuVar5)[8])();
  ppppuVar6 = param_2[5];
  (*(code *)(*ppppuVar6)[9])();
  if (*ppppuVar5 == (undefined8 ***)0x0) {
    func_0x00010b9863b4(uStack_48);
    if (!(bool)in_ZR) goto LAB_10b985908;
    pppppuVar11 = param_2;
    func_0x00010b986400(param_1);
    pppppuVar10 = pppppuVar11 + 2;
    uStack_48 = extraout_x8_00;
    FUN_10b9802e0();
    _objc_retainAutoreleasedReturnValue();
    if (pppppuVar10 == (undefined8 *****)0x0) {
      pppppuVar8 = pppppuVar10;
      func_0x00010b9868d0();
    }
    else {
      pppuStack_160 = appuStack_148;
      uStack_150 = 0x10;
      uStack_158 = 0;
      func_0x00010b985424(&pppuStack_160,param_2[6][5]);
      func_0x00010b986830();
      func_0x00010b986828(pppuStack_160);
      func_0x00010b986814();
      ppppuVar5 = param_2[5];
      pppppuVar11 = *(undefined8 ******)(param_3 + 8);
      func_0x00010b986470(pppuStack_160,ppppuVar5,pppppuVar11,*(undefined8 *)(param_3 + 0x10));
      func_0x00010b986590();
      (*extraout_x9)();
      if (((ulong)ppppuVar5 & 1) == 0) {
        func_0x00010b9868d0();
      }
      else {
        pppppuVar11 = pppppuVar10;
        func_0x00010b972238(auStack_1d0,param_2[6],pppppuVar10,pppuStack_160);
        func_0x00010b986470(param_2[5]);
        func_0x00010b98664c();
        func_0x00010b9866dc();
        func_0x00010b986528();
      }
      pppppuVar8 = (undefined8 *****)&pppuStack_160;
      FUN_10b9850f4();
    }
    func_0x00010b98643c();
    func_0x00010b9863b4(uStack_48);
    if ((bool)in_ZR) {
      auVar14._8_8_ = pppppuVar11;
      auVar14._0_8_ = pppppuVar8;
      return auVar14;
    }
    ___stack_chk_fail();
    func_0x00010b986528();
    iVar4 = (int)&pppuStack_160;
    FUN_10b9850f4();
    func_0x00010b98643c();
    func_0x00010b986450();
    pcStack_1d8 = FUN_10b985b5c;
    ppppuStack_1f0 = pppppuVar8;
    ppppuStack_1e8 = pppppuVar10;
    puStack_1e0 = &stack0xfffffffffffffff0;
    func_0x00010b986400();
    func_0x00010b9868b0();
    func_0x000105c3b044();
    if (iVar4 != 0) {
      func_0x00010b9a7520(appppuStack_2a0,&UNK_10f7d048c,0x10,pppppuVar10 + 9);
      func_0x00010b98683c();
      func_0x00010b986760();
    }
    func_0x00010b9866bc();
    func_0x00010b986784(pppppuVar10[2]);
    func_0x00010b986860();
    ppppppuVar9 = (undefined8 ******)appppuStack_2a0;
    ppppppuVar12 = (undefined8 ******)(pppppuVar10 + 1);
    FUN_10b9a29d8(ppppppuVar9,ppppppuVar12,auStack_2b0);
    func_0x00010b986858();
    func_0x00010b986704();
    func_0x00010b986734();
    func_0x00010b9863b4(uStack_1f8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b986760();
      func_0x00010b986734();
      func_0x00010b98648c();
      pppppuVar10 = ppppppuVar9[1];
      if (pppppuVar10 == (undefined8 *****)0x0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = ppppppuVar12;
        return auVar3 << 0x40;
      }
      func_0x00010b985d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar16._8_8_ = ppppppuVar12;
      auVar16._0_8_ = pppppuVar10;
      return auVar16;
    }
  }
  else {
    pppppuStack_d0 = param_2;
    if ((int)ppppuVar6 == 0) {
      do {
        func_0x00010b9863d4();
      } while (extraout_w10_00 != 0);
      FUN_10b9a2968(&pppppuStack_c8,param_3);
      pcStack_78 = FUN_10b985d50;
      ppuStack_70 = &PTR_FUN_110d7d4d0;
      puVar7 = (undefined8 *)0x50;
      __Znwm();
      *puVar7 = pppppuStack_d0;
      pppppuStack_d0 = (undefined8 ******)0x0;
      ppppppuVar12 = &pppppuStack_c8;
      FUN_10b985ce4(puVar7 + 1,ppppppuVar12);
      func_0x00010b986890();
      func_0x00010b9867fc();
      func_0x00010b9863f0();
      ppppppuVar9 = &pppppuStack_d0;
      FUN_10b985e84(ppppppuVar9);
      *(undefined2 *)(param_1 + 1) = 1;
      *param_1 = 0;
    }
    else {
      func_0x000104bf2d3c(&pppppuStack_d8);
      do {
        func_0x00010b9863d4();
      } while (extraout_w10 != 0);
      if (((undefined8 ******)pppppuStack_d8 != (undefined8 ******)0x0) &&
         ((undefined8 *****)pppppuStack_d8[2] != (undefined8 *****)0x0)) {
        pppppuVar10 = (undefined8 *****)(pppppuStack_d8[2] + 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
          if (bVar2) {
            *pppppuVar10 = (undefined8 ****)((long)*pppppuVar10 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pppppuStack_c8 = pppppuStack_d8;
      FUN_10b9a2968(auStack_c0,param_3);
      pcStack_78 = FUN_10b985b5c;
      ppuStack_70 = &PTR_FUN_110d7d4b0;
      puVar7 = (undefined8 *)0x58;
      __Znwm();
      puVar7[1] = pppppuStack_c8;
      *puVar7 = pppppuStack_d0;
      pppppuStack_d0 = (undefined8 *****)0x0;
      pppppuStack_c8 = (undefined8 *****)0x0;
      FUN_10b985ce4(puVar7 + 2,auStack_c0);
      func_0x00010b986890();
      func_0x00010b9867fc();
      func_0x00010b9863f0();
      func_0x00010b985d20(&pppppuStack_d0);
      pppppuVar10 = pppppuStack_d8;
      if (((undefined8 ******)pppppuStack_d8 != (undefined8 ******)0x0) &&
         ((undefined8 *****)pppppuStack_d8[2] != (undefined8 *****)0x0)) {
        pppppuVar11 = (undefined8 *****)(pppppuStack_d8[2] + 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
          if (bVar2) {
            *pppppuVar11 = (undefined8 ****)((long)*pppppuVar11 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pppppuStack_d0 = pppppuStack_d8;
      ppppppuVar12 = &pppppuStack_d0;
      func_0x00010b9a8f78(param_1,ppppppuVar12);
      func_0x000104bddf04(pppppuVar10);
      func_0x000104bf3588(pppppuStack_d8);
      ppppppuVar9 = (undefined8 ******)pppppuStack_d8;
    }
    func_0x00010b9863b4(uStack_48);
    if (!(bool)in_ZR) {
LAB_10b985908:
      ___stack_chk_fail();
      func_0x00010b9863f0();
      FUN_10b985e84(&pppppuStack_d0);
      func_0x00010b98648c();
      auVar13._8_8_ = 0x11;
      auVar13._0_8_ = &UNK_10f7d049d;
      return auVar13;
    }
  }
  auVar15._8_8_ = ppppppuVar12;
  auVar15._0_8_ = ppppppuVar9;
  return auVar15;
}



/* Entry: 10b9859a0; end: 10b9859bf;  */

undefined1  [16] FUN_10b9859a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f7d049d;
  return auVar1;
}



/* Entry: 10b9859c0; end: 10b985a13;  */

undefined8 * FUN_10b9859c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7d3f8;
  param_1[2] = &PTR_DAT_110d7d458;
  func_0x00010b986850();
  func_0x000107c30e54(param_1 + 6);
  func_0x00010b98670c();
  FUN_10b980260(param_1 + 2);
  return param_1;
}



/* Entry: 10b985a14; end: 10b985b5b;  */

void FUN_10b985a14(undefined8 param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 **ppuVar2;
  ulong uVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  code *extraout_x9;
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [168];
  undefined8 uStack_1f8;
  undefined1 **ppuStack_1f0;
  undefined1 **ppuStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined1 auStack_1d0 [112];
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [256];
  undefined8 uStack_48;
  
  lVar6 = param_2;
  func_0x00010b986400();
  ppuVar2 = (undefined1 **)(lVar6 + 0x10);
  uStack_48 = extraout_x8;
  FUN_10b9802e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 == (undefined1 **)0x0) {
    ppuVar4 = ppuVar2;
    func_0x00010b9868d0();
  }
  else {
    puStack_160 = auStack_148;
    uStack_150 = 0x10;
    uStack_158 = 0;
    func_0x00010b985424(&puStack_160,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x28));
    func_0x00010b986830();
    func_0x00010b986828(puStack_160);
    func_0x00010b986814();
    uVar3 = *(ulong *)(param_2 + 0x28);
    func_0x00010b986470(puStack_160,uVar3,*(undefined8 *)(param_3 + 8),
                        *(undefined8 *)(param_3 + 0x10));
    func_0x00010b986590();
    (*extraout_x9)();
    if ((uVar3 & 1) == 0) {
      func_0x00010b9868d0();
    }
    else {
      func_0x00010b972238(auStack_1d0,*(undefined8 *)(param_2 + 0x30),ppuVar2,puStack_160);
      func_0x00010b986470(*(undefined8 *)(param_2 + 0x28));
      func_0x00010b98664c();
      func_0x00010b9866dc();
      func_0x00010b986528();
    }
    ppuVar4 = &puStack_160;
    FUN_10b9850f4();
  }
  func_0x00010b98643c();
  func_0x00010b9863b4(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b986528();
  iVar1 = (int)&puStack_160;
  FUN_10b9850f4();
  func_0x00010b98643c();
  func_0x00010b986450();
  pcStack_1d8 = FUN_10b985b5c;
  ppuStack_1f0 = ppuVar4;
  ppuStack_1e8 = ppuVar2;
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x00010b986400();
  func_0x00010b9868b0();
  func_0x000105c3b044();
  if (iVar1 != 0) {
    func_0x00010b9a7520(auStack_2a0,&UNK_10f7d048c,0x10,ppuVar2 + 9);
    func_0x00010b98683c();
    func_0x00010b986760();
  }
  func_0x00010b9866bc();
  func_0x00010b986784(ppuVar2[2]);
  func_0x00010b986860();
  puVar5 = auStack_2a0;
  FUN_10b9a29d8(puVar5,ppuVar2 + 1,auStack_2b0);
  func_0x00010b986858();
  func_0x00010b986704();
  func_0x00010b986734();
  func_0x00010b9863b4(uStack_1f8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b986760();
  func_0x00010b986734();
  func_0x00010b98648c();
  if (*(long *)(puVar5 + 8) != 0) {
    func_0x00010b985d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b985b5c; end: 10b985c17;  */

void FUN_10b985b5c(int param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long unaff_x19;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [168];
  undefined8 uStack_28;
  
  func_0x00010b986400();
  func_0x00010b9868b0();
  func_0x000105c3b044();
  if (param_1 != 0) {
    func_0x00010b9a7520(auStack_d0,&UNK_10f7d048c,0x10,unaff_x19 + 0x48);
    func_0x00010b98683c();
    func_0x00010b986760();
  }
  func_0x00010b9866bc();
  func_0x00010b986784(*(undefined8 *)(unaff_x19 + 0x10));
  func_0x00010b986860();
  puVar1 = auStack_d0;
  FUN_10b9a29d8(puVar1,unaff_x19 + 8,auStack_e0);
  func_0x00010b986858();
  func_0x00010b986704();
  func_0x00010b986734();
  func_0x00010b9863b4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b986760();
  func_0x00010b986734();
  func_0x00010b98648c();
  if (*(long *)(puVar1 + 8) != 0) {
    func_0x00010b985d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b985c18; end: 10b985c37;  */

void FUN_10b985c18(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b985d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b985c38; end: 10b985c3b;  */

void FUN_10b985c38(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b985c3c; end: 10b985ce3;  */

void FUN_10b985c3c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  long lVar6;
  int extraout_w11;
  long *plVar7;
  
  plVar7 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d7d4b0;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  uVar5 = 0;
  if (*plVar7 != 0) {
    do {
      func_0x00010b9864d4();
      uVar5 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *puVar4 = uVar5;
  lVar6 = plVar7[1];
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar6 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[1] = lVar6;
  FUN_10b985ce4(puVar4 + 2,plVar7 + 2);
  param_1[1] = puVar4;
  return;
}



/* Entry: 10b985ce4; end: 10b985d4f;  */

void FUN_10b985ce4(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN_10b91f788();
  lVar4 = *(long *)(param_2 + 0x38);
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(param_1 + 0x38) = lVar4;
  return;
}



/* Entry: 10b985d50; end: 10b985def;  */

void FUN_10b985d50(undefined *param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined1 auStack_d0 [168];
  undefined8 uStack_28;
  
  func_0x00010b986400();
  func_0x00010b9868b0();
  func_0x000105c3b044();
  if ((int)param_1 != 0) {
    param_1 = &UNK_10f7d048c;
    func_0x00010b9a7520(auStack_d0,&UNK_10f7d048c,0x10,unaff_x19 + 0x40);
    func_0x00010b98683c();
    func_0x00010b986760();
  }
  func_0x00010b9866bc();
  func_0x00010b986784(*(undefined8 *)(unaff_x19 + 8));
  func_0x00010b986860();
  func_0x00010b986858();
  func_0x00010b986704();
  func_0x00010b986734();
  func_0x00010b9863b4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b986760();
  func_0x00010b986734();
  func_0x00010b98648c();
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b985e84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b985df0; end: 10b985e0f;  */

void FUN_10b985df0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b985e84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b985e10; end: 10b985e13;  */

void FUN_10b985e10(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b985e14; end: 10b985e83;  */

void FUN_10b985e14(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d7d4d0;
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  uVar2 = 0;
  if (*plVar3 != 0) {
    do {
      func_0x00010b9864d4();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *puVar1 = uVar2;
  FUN_10b985ce4(puVar1 + 1,plVar3 + 1);
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b985e84; end: 10b985ecb;  */

undefined8 FUN_10b985e84(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b9a29b0(param_1 + 8);
  func_0x00010b9868c4(param_1);
  FUN_10b985ecc();
  return unaff_x19;
}



/* Entry: 10b985ecc; end: 10b985f17;  */

void FUN_10b985ecc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b9864ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b985f18; end: 10b985f2b;  */

void FUN_10b985f18(void)

{
  FUN_10b986240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b985f2c; end: 10b986177;  */

void FUN_10b985f2c(undefined8 param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined **ppuVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *param_3;
  if ((lVar1 == 0) || (___dynamic_cast(lVar1,&PTR_DAT_110d7ed28,&PTR_DAT_110d7d478,0), lVar1 == 0))
  {
    lVar1 = 0;
    lVar3 = *(long *)(param_2 + 0x10);
  }
  else {
    do {
      func_0x00010b9863d4();
    } while (extraout_w10 != 0);
    lVar3 = *(long *)(param_2 + 0x10);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      FUN_10b9802e0(lVar1 + 0x10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b98681c();
      func_0x00010b986484();
      goto LAB_10b986108;
    }
  }
  lVar6 = *(long *)(param_2 + 0x18);
  lVar4 = lVar6;
  if (lVar3 != 0) {
    do {
      func_0x00010b9863d4();
    } while (extraout_w10_00 != 0);
    lVar4 = *(long *)(param_2 + 0x18);
  }
  if (lVar4 != 0) {
    do {
      func_0x00010b9863d4();
    } while (extraout_w10_01 != 0);
  }
  lVar5 = *param_3;
  if (lVar5 != 0) {
    do {
      func_0x00010b9863d4();
    } while (extraout_w10_02 != 0);
  }
  FUN_10b9a3a64(auStack_a8);
  func_0x00010b98686c();
  lVar7 = *param_4;
  if (lVar7 != 0) {
    do {
      func_0x00010b986458();
    } while (extraout_w10_03 != 0);
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc6000000;
  pcStack_80 = FUN_10b98626c;
  puStack_78 = &UNK_110d7d340;
  if (lVar4 != 0) {
    do {
      func_0x00010b9863d4();
    } while (extraout_w10_04 != 0);
  }
  lStack_70 = lVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010b9863d4();
    } while (extraout_w10_05 != 0);
  }
  lStack_68 = lVar3;
  if (lVar5 != 0) {
    do {
      func_0x00010b9863d4();
    } while (extraout_w10_06 != 0);
  }
  lStack_60 = lVar5;
  if (lVar7 != 0) {
    do {
      func_0x00010b986458();
    } while (extraout_w10_07 != 0);
  }
  ppuVar2 = &puStack_90;
  lStack_58 = lVar7;
  _objc_retainBlock(ppuVar2);
  func_0x000107c278f8(lStack_58);
  func_0x000104bda3ac(lStack_60);
  FUN_10b97ad80(lStack_68);
  func_0x000107c30e58(lStack_70);
  FUN_10b972364(param_1,lVar6,ppuVar2);
  _objc_release(ppuVar2);
  func_0x000107c278f8(lVar7);
  func_0x00010b986420();
  func_0x000104bda3ac(lVar5);
  func_0x000107c30e58(lVar4);
  FUN_10b97ad80(lVar3);
LAB_10b986108:
  FUN_10b985ecc(lVar1);
  return;
}



/* Entry: 10b986178; end: 10b98623f;  */

void FUN_10b986178(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int extraout_w10;
  undefined1 auStack_58 [24];
  
  FUN_10b982b30(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b9a3a64(auStack_58);
  func_0x00010b98686c();
  func_0x00010b986874();
  FUN_10b985604();
  do {
    func_0x00010b9863d4();
  } while (extraout_w10 != 0);
  *param_1 = param_5;
  FUN_10b985ecc(param_5);
  func_0x00010b986420();
  func_0x00010b98643c();
  return;
}



/* Entry: 10b986240; end: 10b98626b;  */

undefined8 FUN_10b986240(undefined8 param_1)

{
  func_0x00010b986714(&PTR_DAT_110d7d500);
  func_0x00010b98670c();
  return param_1;
}



/* Entry: 10b98626c; end: 10b98638f;  */

long * FUN_10b98626c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 in_ZR;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long extraout_x9;
  long lVar6;
  long alStack_210 [2];
  byte bStack_200;
  long lStack_1f8;
  byte bStack_1f0;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_58;
  
  plVar5 = alStack_210;
  plVar4 = param_1;
  func_0x00010b986400();
  lVar6 = *(long *)(plVar4[4] + 0x28) + -1;
  uStack_58 = extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar6 * 8);
  func_0x00010b986744();
  lVar3 = lVar6;
  while (lVar3 != 0) {
    func_0x00010b9867c0();
    lVar3 = extraout_x9;
  }
  func_0x00010b986538();
  uStack_160 = 0x10;
  uStack_168 = 0;
  func_0x00010b986808();
  for (; lVar6 != 0; lVar6 = lVar6 + -1) {
    func_0x00010b9866f4();
  }
  func_0x00010b9864e4();
  func_0x00010b9865bc();
  func_0x00010b9866ec();
  if ((bStack_1f0 & 1) == 0) {
    func_0x00010b9868dc();
    plVar4 = &lStack_1f8;
    FUN_10b984abc();
  }
  else {
    if ((bStack_200 & 1) == 0) goto LAB_10b986370;
    func_0x00010b9868dc();
    func_0x00010b982bac();
    plVar4 = plVar5;
  }
  func_0x00010b9864bc();
  func_0x00010b9867a0();
  func_0x00010b9863b4(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10b986370:
  func_0x0001080da3e4();
  func_0x00010b9864bc();
  func_0x00010b9867a0();
  func_0x00010b986450();
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b9864ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))();
      return plVar4;
    }
  }
  return plVar4;
}



/* Entry: 10b986390; end: 10b9868e7;  */

void FUN_10b986390(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b9864ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b9868e8; end: 10b98694b;  */

undefined8 * FUN_10b9868e8(undefined8 *param_1,undefined1 param_2)

{
  *param_1 = &PTR_DAT_110d7d558;
  param_1[1] = 1;
  FUN_10b9a3e20(param_1 + 2);
  *(undefined1 *)(param_1 + 0x27) = param_2;
  return param_1;
}



/* Entry: 10b98694c; end: 10b9869cb;  */

undefined8 FUN_10b98694c(long *param_1,undefined8 param_2)

{
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_48 [40];
  
  FUN_10b9a3e90(auStack_48,param_1 + 2);
  FUN_10b9a41a0(&uStack_60,auStack_48,0);
  (**(code **)(*param_1 + 0x20))(param_1,param_2,uStack_5c);
  FUN_10b9a4180(auStack_48);
  return CONCAT44(uStack_5c,uStack_60);
}



/* Entry: 10b9869cc; end: 10b986a47;  */

void FUN_10b9869cc(void)

{
  ulong uVar1;
  long *unaff_x19;
  undefined1 auStack_48 [40];
  
  func_0x00010b986fe4();
  FUN_10b9a3e90();
  uVar1 = 0;
  FUN_10b9a4264();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*unaff_x19 + 0x28))();
  }
  else {
    unaff_x19 = (long *)0x0;
  }
  FUN_10b9a4180(auStack_48);
  if (unaff_x19 != (long *)0x0) {
    _CFRelease(unaff_x19);
  }
  return;
}



/* Entry: 10b986a48; end: 10b986abf;  */

long * FUN_10b986a48(void)

{
  long *unaff_x19;
  undefined1 auStack_48 [40];
  
  func_0x00010b986fe4();
  func_0x00010b9a3eb4();
  FUN_10b9a4010();
  (**(code **)(*unaff_x19 + 0x30))();
  if (unaff_x19 != (long *)0x0) {
    _CFRetain(unaff_x19);
  }
  FUN_10b9a40fc(auStack_48);
  return unaff_x19;
}



/* Entry: 10b986ac0; end: 10b986b13;  */

undefined8 * FUN_10b986ac0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  FUN_10b9868e8(param_1,0);
  *puVar1 = &PTR_FUN_110d7d5a0;
  puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
  func_0x00010c2a2b80();
  _objc_retainAutoreleasedReturnValue();
  param_1[0x28] = puVar2;
  return param_1;
}



/* Entry: 10b986b14; end: 10b986b3b;  */

undefined8 * FUN_10b986b14(undefined8 *param_1)

{
  _objc_release(param_1[0x28]);
  *param_1 = &PTR_DAT_110d7d558;
  FUN_10b9a3e58(param_1 + 2);
  return param_1;
}



/* Entry: 10b986b3c; end: 10b986b3f;  */

undefined8 * FUN_10b986b3c(undefined8 *param_1)

{
  _objc_release(param_1[0x28]);
  *param_1 = &PTR_DAT_110d7d558;
  FUN_10b9a3e58(param_1 + 2);
  return param_1;
}



/* Entry: 10b986b40; end: 10b986b53;  */

void FUN_10b986b40(void)

{
  FUN_10b986b14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b986b54; end: 10b986bab;  */

void FUN_10b986b54(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  while( true ) {
    uVar1 = *(ulong *)(param_1 + 0x140);
    func_0x00010bf529e0();
    if (param_3 < uVar1) break;
    func_0x00010befaaa0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c131070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x140),PTR_s_replacePointerAtIndex_withPointe_112629e38,
             param_3,param_2);
  return;
}



/* Entry: 10b986bac; end: 10b986bcf;  */

undefined8 FUN_10b986bac(long param_1,undefined8 param_2)

{
  func_0x00010c131060(*(undefined8 *)(param_1 + 0x140),param_2,param_2,0);
  return 0;
}



/* Entry: 10b986bd0; end: 10b986bdb;  */

void FUN_10b986bd0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c102e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x140),PTR_s_pointerAtIndex__11261e5a0,param_2);
  return;
}



/* Entry: 10b986bdc; end: 10b986c57;  */

undefined8 FUN_10b986bdc(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam0000000113846888 & 1) == 0) {
    iVar1 = 0x13846888;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0x148;
      __Znwm();
      FUN_10b986ac0();
      uRam0000000113846880 = uVar2;
      ___cxa_guard_release(0x113846888);
    }
  }
  return uRam0000000113846880;
}



/* Entry: 10b986c58; end: 10b986cb3;  */

undefined8 * FUN_10b986c58(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  FUN_10b9868e8(param_1,1);
  *puVar1 = &PTR_FUN_110d7d5e8;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  param_1[0x28] = puVar2;
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_new();
  param_1[0x29] = puVar2;
  return param_1;
}



/* Entry: 10b986cb4; end: 10b986d03;  */

undefined8 * FUN_10b986cb4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[0x29];
  param_1[0x29] = 0;
  _objc_release(uVar1);
  _CFRelease(param_1[0x28]);
  _objc_release(param_1[0x29]);
  *param_1 = &PTR_DAT_110d7d558;
  FUN_10b9a3e58(param_1 + 2);
  return param_1;
}



/* Entry: 10b986d04; end: 10b986d07;  */

undefined8 * FUN_10b986d04(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[0x29];
  param_1[0x29] = 0;
  _objc_release(uVar1);
  _CFRelease(param_1[0x28]);
  _objc_release(param_1[0x29]);
  *param_1 = &PTR_DAT_110d7d558;
  FUN_10b9a3e58(param_1 + 2);
  return param_1;
}



/* Entry: 10b986d08; end: 10b986d1b;  */

void FUN_10b986d08(void)

{
  FUN_10b986cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b986d1c; end: 10b986d2f;  */

void FUN_10b986d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFArraySetValueAtIndex_11034a4d8)(*(undefined8 *)(param_1 + 0x140),param_3,param_2)
  ;
  return;
}



/* Entry: 10b986d30; end: 10b986d77;  */

undefined8 FUN_10b986d30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  _CFArrayGetValueAtIndex(uVar1);
  _CFRetain();
  _CFArraySetValueAtIndex(*(undefined8 *)(param_1 + 0x140),param_2,*(undefined8 *)(param_1 + 0x148))
  ;
  return uVar1;
}



/* Entry: 10b986d78; end: 10b986d7f;  */

void FUN_10b986d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFArrayGetValueAtIndex_11034a4d0)(*(undefined8 *)(param_1 + 0x140));
  return;
}



/* Entry: 10b986d80; end: 10b986dfb;  */

undefined8 FUN_10b986d80(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam0000000113846898 & 1) == 0) {
    iVar1 = 0x13846898;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0x150;
      __Znwm();
      FUN_10b986c58();
      uRam0000000113846890 = uVar2;
      ___cxa_guard_release(0x113846898);
    }
  }
  return uRam0000000113846890;
}



/* Entry: 10b986dfc; end: 10b986e23;  */

void FUN_10b986dfc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b986e24; end: 10b986fb7;  */

void FUN_10b986e24(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [40];
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b9a3eb4(auStack_100,param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uVar2 = param_1;
  FUN_10b986dfc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf52a60();
  if (uVar3 != 0) {
    lVar5 = *plStack_130;
    do {
      uVar6 = 0;
      do {
        if (*plStack_130 != lVar5) {
          _objc_enumerationMutation(uVar2);
        }
        if (*(long *)(lStack_138 + uVar6 * 8) != *(long *)(param_1 + 0x148)) {
          func_0x00010befa120(puVar1);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
      uVar3 = uVar2;
      func_0x00010bf52a60(uVar2,param_2,&uStack_140,auStack_d8,0x10);
    } while (uVar3 != 0);
  }
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  FUN_10b9a40fc(auStack_100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  FUN_10b9a40fc(auStack_100);
  func_0x00010b986fc8();
  return;
}



/* Entry: 10b986fb8; end: 10b986ff7;  */

void FUN_10b986fb8(void)

{
  return;
}



/* Entry: 10b986ff8; end: 10b98702b; -[SCValdiResolvablePromise init] */

void FUN_10b986ff8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270c128;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b98702c; end: 10b98715f; -[SCValdiResolvablePromise fulfillWithSuccessValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b98702c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long lVar4;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar5;
  undefined8 uStack_158;
  undefined1 uStack_150;
  long lStack_148;
  undefined1 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_c8;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_48;
  
  func_0x00010b987ca0();
  func_0x00010b987d54();
  __ZNSt3__15mutex4lockEv();
  lVar3 = (long)_DAT_112795f78;
  if ((*(byte *)(unaff_x21 + lVar3) & 1) == 0) {
    _objc_retain();
    func_0x00010b987d84();
    *(undefined1 *)(unaff_x21 + lVar3) = 1;
    func_0x00010b987d70((long)_DAT_112795f80);
    lVar3 = (long)_DAT_112795f84;
    _objc_retainBlock();
    param_1 = *(long *)(unaff_x21 + lVar3);
    *(undefined8 *)(unaff_x21 + lVar3) = 0;
    _objc_release();
    func_0x00010b987d90();
    unaff_x22 = *(undefined8 *)(unaff_x21 + extraout_x8);
    *(undefined8 *)(unaff_x21 + extraout_x8) = 0;
    func_0x00010b987d18();
    for (lVar3 = lStack_68 << 4; lVar3 != 0; lVar3 = lVar3 + -0x10) {
      param_1 = lStack_70;
      FUN_10b982b30();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b968424();
      func_0x00010b987cf0();
      lStack_70 = lStack_70 + 0x10;
    }
    func_0x00010b987cdc();
    func_0x00010b987d3c();
    func_0x00010b987d34();
  }
  func_0x00010b987cf8();
  func_0x00010b987c98();
  func_0x00010b987cc0(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b987cdc();
    func_0x00010b987d3c();
    func_0x00010b987d34();
    func_0x00010b987cf8();
    func_0x00010b987c98();
    lVar3 = param_1;
    __Unwind_Resume();
    func_0x00010b987ca0();
    func_0x00010b987d54();
    __ZNSt3__15mutex4lockEv();
    lVar4 = (long)_DAT_112795f78;
    if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
      _objc_retain();
      func_0x00010b987d84();
      *(undefined1 *)(param_1 + lVar4) = 1;
      func_0x00010b987d70((long)_DAT_112795f80);
      lVar5 = (long)_DAT_112795f84;
      lVar4 = *(long *)(param_1 + lVar5);
      _objc_retainBlock();
      lVar3 = *(long *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = 0;
      _objc_release();
      func_0x00010b987d90();
      unaff_x22 = *(undefined8 *)(param_1 + extraout_x8_00);
      *(undefined8 *)(param_1 + extraout_x8_00) = 0;
      func_0x00010b987d18();
      for (lVar5 = lStack_e8 << 4; lVar5 != 0; lVar5 = lVar5 + -0x10) {
        lVar3 = lStack_f0;
        FUN_10b982b30();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b968478();
        func_0x00010b987cf0();
        lStack_f0 = lStack_f0 + 0x10;
      }
      func_0x00010b987cdc();
      func_0x00010b987d3c();
      func_0x00010b987d34();
    }
    func_0x00010b987cf8();
    func_0x00010b987c98();
    func_0x00010b987cc0(uStack_c8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b987cdc();
      func_0x00010b987d3c();
      func_0x00010b987d34();
      func_0x00010b987cf8();
      func_0x00010b987c98();
      lVar5 = lVar3;
      __Unwind_Resume();
      lStack_148 = lVar5 + _DAT_112795f74;
      uStack_140 = 1;
      uStack_130 = unaff_x22;
      lStack_128 = lVar3;
      lStack_120 = lVar4;
      __ZNSt3__15mutex4lockEv();
      if (*(char *)(lVar5 + _DAT_112795f78) == '\x01') {
        lVar3 = *(long *)(lVar5 + _DAT_112795f8c);
        if (lVar3 == 0) {
          lVar3 = *(long *)(lVar5 + _DAT_112795f7c);
          _objc_retain(lVar3);
          func_0x0001080ea3b0(&lStack_148);
          func_0x00010b968424(param_3,lVar3);
        }
        else {
          _objc_retain(lVar3);
          func_0x0001080ea3b0(&lStack_148);
          func_0x00010b968478(param_3,lVar3);
        }
        _objc_release(lVar3);
      }
      else {
        func_0x00010b982c24(&uStack_158,param_3);
        plVar1 = (long *)(lVar5 + _DAT_112795f80);
        puVar2 = (undefined8 *)(*plVar1 + plVar1[1] * 0x10);
        if (plVar1[1] == plVar1[2]) {
          FUN_10b987b50(auStack_138,plVar1,puVar2,&uStack_158);
        }
        else {
          *puVar2 = uStack_158;
          *(undefined1 *)(puVar2 + 1) = uStack_150;
          uStack_158 = 0;
          uStack_150 = 0;
          plVar1[1] = plVar1[1] + 1;
        }
        FUN_10b982a50(&uStack_158);
      }
      func_0x0001080eb338(&lStack_148);
      return;
    }
  }
  return;
}



/* Entry: 10b987160; end: 10b987293; -[SCValdiResolvablePromise fulfillWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b987160(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar3;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar4;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  long lStack_c8;
  undefined1 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_48;
  
  func_0x00010b987ca0();
  func_0x00010b987d54();
  __ZNSt3__15mutex4lockEv();
  lVar3 = (long)_DAT_112795f78;
  if ((*(byte *)(unaff_x21 + lVar3) & 1) == 0) {
    _objc_retain();
    func_0x00010b987d84();
    *(undefined1 *)(unaff_x21 + lVar3) = 1;
    func_0x00010b987d70((long)_DAT_112795f80);
    lVar4 = (long)_DAT_112795f84;
    lVar3 = *(long *)(unaff_x21 + lVar4);
    _objc_retainBlock();
    param_1 = *(long *)(unaff_x21 + lVar4);
    *(undefined8 *)(unaff_x21 + lVar4) = 0;
    _objc_release();
    func_0x00010b987d90();
    unaff_x22 = *(undefined8 *)(unaff_x21 + extraout_x8);
    *(undefined8 *)(unaff_x21 + extraout_x8) = 0;
    func_0x00010b987d18();
    for (lVar4 = lStack_68 << 4; lVar4 != 0; lVar4 = lVar4 + -0x10) {
      param_1 = lStack_70;
      FUN_10b982b30();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b968478();
      func_0x00010b987cf0();
      lStack_70 = lStack_70 + 0x10;
    }
    func_0x00010b987cdc();
    func_0x00010b987d3c();
    func_0x00010b987d34();
  }
  func_0x00010b987cf8();
  func_0x00010b987c98();
  func_0x00010b987cc0(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b987cdc();
    func_0x00010b987d3c();
    func_0x00010b987d34();
    func_0x00010b987cf8();
    func_0x00010b987c98();
    lVar4 = param_1;
    __Unwind_Resume();
    lStack_c8 = lVar4 + _DAT_112795f74;
    uStack_c0 = 1;
    uStack_b0 = unaff_x22;
    lStack_a8 = param_1;
    lStack_a0 = lVar3;
    __ZNSt3__15mutex4lockEv();
    if (*(char *)(lVar4 + _DAT_112795f78) == '\x01') {
      lVar3 = *(long *)(lVar4 + _DAT_112795f8c);
      if (lVar3 == 0) {
        lVar3 = *(long *)(lVar4 + _DAT_112795f7c);
        _objc_retain(lVar3);
        func_0x0001080ea3b0(&lStack_c8);
        func_0x00010b968424(param_3,lVar3);
      }
      else {
        _objc_retain(lVar3);
        func_0x0001080ea3b0(&lStack_c8);
        func_0x00010b968478(param_3,lVar3);
      }
      _objc_release(lVar3);
    }
    else {
      func_0x00010b982c24(&uStack_d8,param_3);
      plVar1 = (long *)(lVar4 + _DAT_112795f80);
      puVar2 = (undefined8 *)(*plVar1 + plVar1[1] * 0x10);
      if (plVar1[1] == plVar1[2]) {
        FUN_10b987b50(auStack_b8,plVar1,puVar2,&uStack_d8);
      }
      else {
        *puVar2 = uStack_d8;
        *(undefined1 *)(puVar2 + 1) = uStack_d0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        plVar1[1] = plVar1[1] + 1;
      }
      FUN_10b982a50(&uStack_d8);
    }
    func_0x0001080eb338(&lStack_c8);
    return;
  }
  return;
}



/* Entry: 10b987294; end: 10b98740b; -[SCValdiResolvablePromise _doOnCompleteWithCallbackUntyped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b987294(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_58;
  undefined1 uStack_50;
  long lStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  lStack_48 = param_1 + _DAT_112795f74;
  uStack_40 = 1;
  __ZNSt3__15mutex4lockEv();
  if (*(char *)(param_1 + _DAT_112795f78) == '\x01') {
    lVar3 = *(long *)(param_1 + _DAT_112795f8c);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + _DAT_112795f7c);
      _objc_retain(lVar3);
      func_0x0001080ea3b0(&lStack_48);
      func_0x00010b968424(param_3,lVar3);
    }
    else {
      _objc_retain(lVar3);
      func_0x0001080ea3b0(&lStack_48);
      func_0x00010b968478(param_3,lVar3);
    }
    _objc_release(lVar3);
  }
  else {
    func_0x00010b982c24(&uStack_58,param_3);
    plVar1 = (long *)(param_1 + _DAT_112795f80);
    puVar2 = (undefined8 *)(*plVar1 + plVar1[1] * 0x10);
    if (plVar1[1] == plVar1[2]) {
      FUN_10b987b50(auStack_38,plVar1,puVar2,&uStack_58);
    }
    else {
      *puVar2 = uStack_58;
      *(undefined1 *)(puVar2 + 1) = uStack_50;
      uStack_58 = 0;
      uStack_50 = 0;
      plVar1[1] = plVar1[1] + 1;
    }
    FUN_10b982a50(&uStack_58);
  }
  func_0x0001080eb338(&lStack_48);
  return;
}



/* Entry: 10b98740c; end: 10b98740f; -[SCValdiResolvablePromise onCompleteWithCallback:] */

void FUN_10b98740c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__doOnCompleteWithCallbackUntyped_11255ef28);
  return;
}



/* Entry: 10b987410; end: 10b987453; -[SCValdiResolvablePromise onCompleteWithCallbackBlock:] */

void FUN_10b987410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010be05620(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b987454; end: 10b9876ff; -[SCValdiResolvablePromise cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b987454(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long unaff_x22;
  long lStack_88;
  long lStack_80;
  undefined1 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_80 = param_1 + _DAT_112795f74;
  uStack_78 = 1;
  __ZNSt3__15mutex4lockEv();
  if ((*(byte *)(param_1 + _DAT_112795f90) & 1) != 0) goto LAB_10b987624;
  unaff_x22 = (long)_DAT_112795f78;
  if ((*(byte *)(param_1 + unaff_x22) & 1) != 0) goto LAB_10b987624;
  *(undefined1 *)(param_1 + _DAT_112795f90) = 1;
  lVar8 = (long)_DAT_112795f84;
  lVar5 = *(long *)(param_1 + lVar8);
  _objc_retainBlock();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = 0;
  _objc_release(uVar6);
  func_0x00010b987d7c();
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5);
  }
  func_0x00010b8c215c(&lStack_80);
  in_ZR = *(char *)(param_1 + unaff_x22) == '\x01';
  if (!(bool)in_ZR) {
    if ((bRam00000001137fd2f8 & 1) == 0) goto LAB_10b987654;
    while( true ) {
      lStack_88 = lRam00000001137fd2f0;
      if (lRam00000001137fd2f0 != 0) {
        piVar1 = (int *)(lRam00000001137fd2f0 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10b99f6a4(&lStack_70,&lStack_88,0x65);
      plVar7 = &lStack_70;
      FUN_10b981bb0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000104bda960(lStack_70);
      func_0x000107c278f8(lStack_88);
      lVar5 = (long)_DAT_112795f8c;
      _objc_retain(plVar7);
      uVar6 = *(undefined8 *)(param_1 + lVar5);
      *(long **)(param_1 + lVar5) = plVar7;
      _objc_release(uVar6);
      *(undefined1 *)(param_1 + unaff_x22) = 1;
      FUN_10b9879d0(&lStack_70,param_1 + _DAT_112795f80);
      func_0x00010b987d90();
      unaff_x22 = *(long *)(param_1 + extraout_x8_00);
      *(undefined8 *)(param_1 + extraout_x8_00) = 0;
      func_0x00010b987d7c();
      param_1 = lStack_70;
      for (lVar5 = lStack_68 << 4; lVar5 != 0; lVar5 = lVar5 + -0x10) {
        FUN_10b982b30(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b968478();
        func_0x00010b987cf0();
        param_1 = param_1 + 0x10;
      }
      func_0x00010b987cdc();
      FUN_10b9850f4(&lStack_70);
      func_0x00010b987d44();
LAB_10b987620:
      func_0x00010b987c98();
LAB_10b987624:
      func_0x0001080eb338(&lStack_80);
      func_0x00010b987cc0(uStack_48);
      if ((bool)in_ZR) break;
      ___stack_chk_fail();
LAB_10b987654:
      iVar4 = 0x137fd2f8;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        func_0x000107c31088(0x1137fd2f0,&UNK_10f7d04af);
        ___cxa_guard_release(0x1137fd2f8);
      }
    }
    return;
  }
  func_0x00010b987d90();
  uVar6 = *(undefined8 *)(param_1 + extraout_x8);
  *(undefined8 *)(param_1 + extraout_x8) = 0;
  func_0x00010b987d7c();
  func_0x0001052b2c50(uVar6);
  goto LAB_10b987620;
}



/* Entry: 10b987700; end: 10b98773b; -[SCValdiResolvablePromise isCancelable] */

bool FUN_10b987700(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b987d00();
  lVar1 = *(long *)(unaff_x19 + *(int *)(unaff_x20 + 0x10));
  func_0x00010b987d4c();
  return lVar1 != 0;
}



/* Entry: 10b98773c; end: 10b987837; -[SCValdiResolvablePromise setCancelCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b98773c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv();
  if (*(char *)(param_1 + _DAT_112795f90) == '\x01') {
    func_0x00010b987d18();
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else if (*(char *)(param_1 + _DAT_112795f78) == '\x01') {
    func_0x00010b987d18();
  }
  else {
    lVar2 = (long)_DAT_112795f84;
    _objc_retainBlock(*(undefined8 *)(param_1 + lVar2));
    _objc_retainBlock();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010b987d18();
    func_0x00010b987d44();
  }
  func_0x00010b987cf8();
  func_0x00010b987c98();
  return;
}



/* Entry: 10b987838; end: 10b9878c7; -[SCValdiResolvablePromise setPeer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b987838(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112795f74;
  __ZNSt3__15mutex4lockEv(param_1 + lVar2);
  if (((*(byte *)(param_1 + _DAT_112795f78) & 1) == 0) &&
     ((*(byte *)(param_1 + _DAT_112795f90) & 1) == 0)) {
    func_0x0001052b2560();
    uVar1 = *(undefined8 *)(param_1 + _DAT_112795f88);
    *(undefined8 *)(param_1 + _DAT_112795f88) = param_3;
    func_0x0001052b2c50(uVar1);
    func_0x0001052b2c50(0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + lVar2);
  return;
}



/* Entry: 10b9878c8; end: 10b98791b; -[SCValdiResolvablePromise getPeer] */

long * FUN_10b9878c8(void)

{
  long unaff_x19;
  long unaff_x20;
  long *plVar1;
  
  func_0x00010b987d00();
  plVar1 = *(long **)(unaff_x19 + *(int *)(unaff_x20 + 0x14));
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  func_0x00010b987d4c();
  return plVar1;
}



/* Entry: 10b98791c; end: 10b987977; -[SCValdiResolvablePromise .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b98791c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001052b2c28(param_1 + _DAT_112795f88);
  func_0x00010b987ce4((long)_DAT_112795f84);
  FUN_10b9850f4(param_1 + _DAT_112795f80);
  func_0x00010b987ce4((long)_DAT_112795f8c);
  func_0x00010b987ce4((long)_DAT_112795f7c);
  func_0x00010b9a20fc(param_1 + _DAT_112795f74);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(unaff_x19);
  return;
}



/* Entry: 10b987978; end: 10b9879cf; -[SCValdiResolvablePromise .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b987978(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112795f74);
  *puVar1 = 0x32aaaba7;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  plVar2 = (long *)(param_1 + _DAT_112795f80);
  *plVar2 = (long)(plVar2 + 3);
  plVar2[2] = 1;
  plVar2[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112795f88) = 0;
  return;
}



/* Entry: 10b9879d0; end: 10b987b27;  */

undefined8 * FUN_10b9879d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar1 = param_1 + 3;
  *param_1 = puVar1;
  param_1[2] = 1;
  param_1[1] = 0;
  puVar6 = (undefined8 *)*param_2;
  if (param_2 + 3 == puVar6) {
    uVar4 = param_2[1];
    if (uVar4 < 2) {
      if (uVar4 == 1) {
        param_1[3] = *puVar6;
        *(undefined1 *)(param_1 + 4) = *(undefined1 *)(puVar6 + 1);
        *puVar6 = 0;
        *(undefined1 *)(puVar6 + 1) = 0;
        lVar3 = 1;
      }
      else {
        FUN_10b984e90(param_1,puVar1,0);
        lVar3 = 0;
      }
    }
    else {
      puVar2 = param_1;
      FUN_10b984e5c(param_1,uVar4);
      puVar5 = (undefined8 *)*param_1;
      if ((puVar5 != (undefined8 *)0x0) && (FUN_10b987b28(param_1), puVar1 != puVar5)) {
        __ZdlPv(puVar5);
      }
      param_1[1] = 0;
      param_1[2] = uVar4;
      *param_1 = puVar2;
      for (lVar3 = 0; uVar4 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        *(undefined8 *)((long)puVar2 + lVar3) = *puVar6;
        *(undefined1 *)((undefined8 *)((long)puVar2 + lVar3) + 1) = *(undefined1 *)(puVar6 + 1);
        *puVar6 = 0;
        *(undefined1 *)(puVar6 + 1) = 0;
        puVar6 = puVar6 + 2;
      }
      lVar3 = param_1[1] + (lVar3 >> 4);
    }
    param_1[1] = lVar3;
    FUN_10b987b28(param_2);
  }
  else {
    *param_1 = puVar6;
    uVar7 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar7;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_1;
}



/* Entry: 10b987b28; end: 10b987b4f;  */

void FUN_10b987b28(undefined8 *param_1)

{
  FUN_10b984e90(param_1,*param_1,param_1[1]);
  param_1[1] = 0;
  return;
}



/* Entry: 10b987b50; end: 10b987c97;  */

void FUN_10b987b50(long *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  lVar6 = *param_2;
  plVar3 = param_2;
  FUN_10b98508c(param_2,1);
  plVar4 = param_2;
  FUN_10b984e5c(param_2,plVar3);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  plVar5 = param_2;
  plStack_90 = plVar4;
  plStack_88 = param_2;
  plStack_80 = plVar3;
  plStack_78 = plVar4;
  plStack_70 = plVar4;
  plStack_68 = param_2;
  func_0x00010b984ee4(param_2,lVar1,param_3,plVar4);
  *plVar5 = *param_4;
  *(char *)(plVar5 + 1) = (char)param_4[1];
  *param_4 = 0;
  *(undefined1 *)(param_4 + 1) = 0;
  plStack_70 = plVar5 + 2;
  func_0x00010b984ee4(param_2,param_3,lVar1 + lVar2 * 0x10);
  plStack_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  FUN_10b984f18(&plStack_78);
  plStack_90 = (long *)0x0;
  if (lVar1 != 0) {
    FUN_10b984e90(param_2,lVar1,param_2[1]);
    func_0x00010b984ec8(param_2,param_2,param_2[2]);
  }
  *param_2 = (long)plVar4;
  param_2[1] = param_2[1] + 1;
  param_2[2] = (long)plVar3;
  func_0x00010b984f54(&plStack_90);
  *param_1 = *param_2 + (param_3 - lVar6);
  return;
}



/* Entry: 10b987c98; end: 10b987d9b;  */

void FUN_10b987c98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b987d9c; end: 10b987df3; -[SCValdiResult initWithPlatformResult:] */

undefined1 * FUN_10b987d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270c130;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10b8a2ae8((undefined1 *)((long)puVar1 + 8),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b987df4; end: 10b987e03; -[SCValdiResult success] */

bool FUN_10b987df4(long param_1)

{
  return *(long *)(param_1 + 8) == 1;
}



/* Entry: 10b987e04; end: 10b987e6b; -[SCValdiResult errorMessage] */

void FUN_10b987e04(long param_1)

{
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  undefined8 **ppuStack_30;
  ulong uStack_28;
  
  FUN_10b99f8ac(&ppuStack_48,param_1 + 0x10);
  uStack_28 = uStack_40;
  ppuStack_30 = ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_28 = (ulong)bStack_31;
    ppuStack_30 = &ppuStack_48;
  }
  FUN_10b9812a4(&ppuStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b98813c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(&ppuStack_48);
  return;
}



/* Entry: 10b987e6c; end: 10b987e73; -[SCValdiResult successValue] */

void FUN_10b987e6c(long param_1,undefined8 ****param_2)

{
  int iVar1;
  undefined8 ***pppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 *****unaff_x19;
  undefined8 *****pppppuVar7;
  undefined8 *****unaff_x20;
  undefined8 ****ppppuVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 ***pppuStack_70;
  byte bStack_61;
  undefined8 ****ppppuStack_60;
  undefined8 ***pppuStack_58;
  
  pppppuVar7 = (undefined8 *****)(param_1 + 0x10);
  switch(*(undefined1 *)(param_1 + 0x18)) {
  case 0:
    unaff_x19 = (undefined8 *****)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 1:
    unaff_x19 = (undefined8 *****)PTR_PTR_1126b15a8;
    func_0x00010c27f660(PTR_PTR_1126b15a8);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
    FUN_10b9a9358(&ppppuStack_78,pppppuVar7);
    unaff_x19 = &ppppuStack_78;
    FUN_10b98101c(unaff_x19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b98290c();
    break;
  case 3:
    pppppuVar4 = (undefined8 *****)*pppppuVar7;
    iVar1 = *(int *)(pppppuVar4 + 3);
    if (iVar1 == 2) {
      FUN_10b9a5b88();
      ppppuStack_78 = pppppuVar4;
      pppuStack_70 = param_2;
    }
    else {
      if (iVar1 == 1) {
        unaff_x19 = (undefined8 *****)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d920(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,pppppuVar4 + 4,
                            pppppuVar4[2]);
        _objc_retainAutoreleasedReturnValue();
        break;
      }
      unaff_x19 = pppppuVar7;
      if (iVar1 != 0) break;
      pppuStack_70 = pppppuVar4[2];
      ppppuStack_78 = pppppuVar4 + 4;
    }
    unaff_x19 = &ppppuStack_78;
    FUN_10b9812a4(unaff_x19);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 4:
    func_0x00010b982878();
    FUN_10b9a9518();
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = unaff_x20;
    break;
  case 5:
    func_0x00010b982878();
    FUN_10b9a9588();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = unaff_x20;
    break;
  case 6:
    func_0x00010b982878();
    FUN_10b9a92f0();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = unaff_x20;
    break;
  case 7:
    func_0x00010b982878();
    FUN_10b9a9608();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = unaff_x20;
    break;
  case 8:
    ppppuVar3 = *pppppuVar7;
    unaff_x19 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,ppppuVar3[4]);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar7 = (undefined8 *****)(ppppuVar3 + 2);
    func_0x00010527d444();
    pppuVar5 = ppppuVar3[2];
    pppuVar6 = ppppuVar3[5];
    ppppuStack_78 = pppppuVar7;
    pppuStack_70 = param_2;
    while (pppuVar2 = pppuStack_70,
          (undefined8 *****)ppppuStack_78 != (undefined8 *****)((long)pppuVar5 + (long)pppuVar6)) {
      FUN_10b980ac4(pppuStack_70 + 1);
      _objc_retainAutoreleasedReturnValue();
      FUN_10b98101c(pppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c3a130();
      func_0x00010b9829bc();
      func_0x00010b982804();
      func_0x00010b982858();
      func_0x00010527d4cc(&ppppuStack_78);
    }
    break;
  case 9:
    ppppuVar8 = *pppppuVar7;
    unaff_x19 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,ppppuVar8[2]);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar3 = ppppuVar8 + 3;
    for (lVar9 = (long)ppppuVar8[2] << 4; lVar9 != 0; lVar9 = lVar9 + -0x10) {
      FUN_10b980ac4(ppppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(unaff_x19);
      func_0x00010b982858();
      ppppuVar3 = ppppuVar3 + 2;
    }
    break;
  case 10:
    if (*pppppuVar7 == (undefined8 ****)0x0) {
      unaff_x19 = (undefined8 *****)0x0;
    }
    else {
      unaff_x19 = (undefined8 *****)(*pppppuVar7 + 3);
      FUN_10b981730(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
    }
    break;
  case 0xb:
    FUN_10b9811b4(pppppuVar7);
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = pppppuVar7;
    break;
  case 0xc:
    FUN_10b9a9488(&uStack_80,pppppuVar7);
    FUN_10b99f8ac(&ppppuStack_78,&uStack_80);
    pppuStack_58 = pppuStack_70;
    ppppuStack_60 = ppppuStack_78;
    if (-1 < (char)bStack_61) {
      pppuStack_58 = (undefined8 ****)(ulong)bStack_61;
      ppppuStack_60 = &ppppuStack_78;
    }
    pppppuVar7 = &ppppuStack_60;
    FUN_10b9812a4(pppppuVar7);
    _objc_retainAutoreleasedReturnValue();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_78);
    func_0x000104bda960(uStack_80);
    unaff_x19 = (undefined8 *****)PTR_PTR_1126da880;
    _objc_alloc(PTR_PTR_1126da880);
    func_0x00010c03d180();
    goto code_r0x00010b980eec;
  case 0xd:
    ppppuVar3 = *pppppuVar7;
    unaff_x19 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,ppppuVar3[2][4]);
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = ppppuVar3[2];
    ppppuStack_60 = (undefined8 ****)(pppuVar5 + 5);
    pppuStack_58 = ppppuVar3 + 3;
    pppppuVar7 = (undefined8 *****)(pppuVar5 + 8);
    ppppuVar3 = ppppuVar3 + 5;
    for (lVar9 = (long)pppuVar5[4] << 4; lVar9 != 0; lVar9 = lVar9 + -0x10) {
      func_0x00010b9aca4c(&ppppuStack_78,&ppppuStack_60);
      FUN_10b980ac4(&pppuStack_70);
      _objc_retainAutoreleasedReturnValue();
      FUN_10b98101c(&ppppuStack_78);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c3a130();
      func_0x00010b9829bc();
      func_0x00010b982804();
      func_0x00010b982858();
      FUN_10b902568(&ppppuStack_78);
      ppppuStack_60 = pppppuVar7;
      pppuStack_58 = ppppuVar3;
      pppppuVar7 = pppppuVar7 + 3;
      ppppuVar3 = ppppuVar3 + 2;
    }
    break;
  case 0xe:
    ppppuVar3 = *pppppuVar7;
    ___dynamic_cast(ppppuVar3,&PTR_DAT_110d7f038,&PTR_DAT_110d7ccf8,0);
    if (ppppuVar3 != (undefined8 ****)0x0) {
      pppppuVar7 = (undefined8 *****)(ppppuVar3 + 5);
      FUN_10b9802e0();
      _objc_retainAutoreleasedReturnValue();
      if (pppppuVar7 != (undefined8 *****)0x0) {
        _objc_retain();
        unaff_x19 = pppppuVar7;
        goto code_r0x00010b980eec;
      }
    }
    unaff_x19 = (undefined8 *****)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar7 = (undefined8 *****)0x0;
code_r0x00010b980eec:
    _objc_release(pppppuVar7);
    break;
  case 0xf:
    FUN_10b9a94ec(&ppppuStack_78,pppppuVar7);
    pppppuVar4 = &ppppuStack_78;
    FUN_10b981064(pppppuVar4,0);
    _objc_retainAutoreleasedReturnValue();
    if (pppppuVar4 == (undefined8 *****)0x0) {
      FUN_10b980a68(pppppuVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(pppppuVar4);
      pppppuVar7 = pppppuVar4;
    }
    func_0x00010b982804();
    func_0x00010b982904();
    unaff_x19 = pppppuVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 10b987e74; end: 10b987e7f; -[SCValdiResult platformResult] */

long * FUN_10b987e74(long *param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  lVar1 = *(long *)(param_2 + 8);
  *param_1 = lVar1;
  if (lVar1 == 2) {
    lVar1 = 0;
    if (*(long *)(param_2 + 0x10) != 0) {
      do {
        func_0x00010b906a90();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    param_1[1] = lVar1;
  }
  else if (lVar1 == 1) {
    FUN_10b9a8f04(param_1 + 1,param_2 + 0x10);
  }
  return param_1;
}



/* Entry: 10b987e80; end: 10b987e87; -[SCValdiResult .cxx_destruct] */

long * FUN_10b987e80(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 2) {
    func_0x0001003adc0c(param_1 + 0x10);
    func_0x000104bda960();
    return unaff_x19;
  }
  bVar1 = lVar3 == 1;
  if (bVar1) {
    func_0x00010b9abca8();
    if ((bVar1) && (plVar2 = *(long **)(param_1 + 0x10), plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x18))();
    }
    return (long *)(param_1 + 0x10);
  }
  return (long *)(param_1 + 8);
}



/* Entry: 10b987e88; end: 10b987e8f; -[SCValdiResult .cxx_construct] */

void FUN_10b987e88(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10b987e90; end: 10b987ee3;  */

void FUN_10b987e90(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fd308 != -1) {
    func_0x000107c27d9c(0x1137fd308,&PTR___NSConcreteGlobalBlock_110d7d668);
  }
  uVar1 = uRam00000001137fd300;
  _objc_retain(uRam00000001137fd300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b987ee4; end: 10b987f7f;  */

/* WARNING: Possible PIC construction at 0x00010b987f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b987fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b988008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b988084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b9880a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b988088) */
/* WARNING: Removing unreachable block (ram,0x00010b9880a4) */
/* WARNING: Removing unreachable block (ram,0x00010b988098) */
/* WARNING: Removing unreachable block (ram,0x00010b98800c) */
/* WARNING: Removing unreachable block (ram,0x00010b98801c) */
/* WARNING: Removing unreachable block (ram,0x00010b988030) */
/* WARNING: Removing unreachable block (ram,0x00010b98803c) */
/* WARNING: Removing unreachable block (ram,0x00010b987fdc) */
/* WARNING: Removing unreachable block (ram,0x00010b988004) */
/* WARNING: Removing unreachable block (ram,0x00010b987ff8) */
/* WARNING: Removing unreachable block (ram,0x00010b9880f4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x00010b987f40) */
/* WARNING: Removing unreachable block (ram,0x00010b987f5c) */
/* WARNING: Removing unreachable block (ram,0x00010b987f78) */
/* WARNING: Removing unreachable block (ram,0x00010b987f4c) */
/* WARNING: Removing unreachable block (ram,0x00010b9880ac) */
/* WARNING: Removing unreachable block (ram,0x00010b9880bc) */
/* WARNING: Removing unreachable block (ram,0x00010b9880c8) */
/* WARNING: Removing unreachable block (ram,0x00010b9880d0) */

long ** FUN_10b987ee4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  long **pplVar3;
  long **pplVar4;
  long *plStack_40;
  long *aplStack_38 [3];
  
  func_0x00010b988100();
  pplVar3 = (long **)PTR_PTR_1126d9410;
  _objc_alloc();
  func_0x00010b988124();
  pplVar4 = pplVar3;
  func_0x00010c036b00(pplVar3,param_2,&plStack_40);
  uVar1 = pplRam00000001137fd300;
  pplRam00000001137fd300 = pplVar4;
  _objc_release(uVar1);
  if (plStack_40 == (long *)0x2) {
    func_0x0001003adc0c(aplStack_38);
    func_0x000104bda960();
    return pplVar3;
  }
  bVar2 = plStack_40 == (long *)0x1;
  if (bVar2) {
    func_0x00010b9abca8();
    if ((bVar2) && (aplStack_38[0] != (long *)0x0)) {
      (**(code **)(*aplStack_38[0] + 0x18))();
    }
    return aplStack_38;
  }
  return &plStack_40;
}



/* Entry: 10b987f80; end: 10b988043;  */

/* WARNING: Possible PIC construction at 0x00010b987fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b988008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b988084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b9880a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b988088) */
/* WARNING: Removing unreachable block (ram,0x00010b9880a4) */
/* WARNING: Removing unreachable block (ram,0x00010b988098) */
/* WARNING: Removing unreachable block (ram,0x00010b98800c) */
/* WARNING: Removing unreachable block (ram,0x00010b98801c) */
/* WARNING: Removing unreachable block (ram,0x00010b988030) */
/* WARNING: Removing unreachable block (ram,0x00010b98803c) */
/* WARNING: Removing unreachable block (ram,0x00010b987fdc) */
/* WARNING: Removing unreachable block (ram,0x00010b988004) */
/* WARNING: Removing unreachable block (ram,0x00010b987ff8) */
/* WARNING: Removing unreachable block (ram,0x00010b9880f4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x00010b9880ac) */
/* WARNING: Removing unreachable block (ram,0x00010b9880bc) */
/* WARNING: Removing unreachable block (ram,0x00010b9880c8) */

long ** FUN_10b987f80(long **param_1)

{
  bool bVar1;
  undefined1 auStack_50 [8];
  long *plStack_48;
  long *plStack_40;
  long *aplStack_38 [3];
  
  func_0x00010b988100();
  _objc_retain();
  _objc_alloc(PTR_PTR_1126d9410);
  func_0x000107c30f2c(auStack_50,param_1);
  FUN_10b99f560(&plStack_48,auStack_50);
  plStack_40 = (long *)0x2;
  aplStack_38[0] = plStack_48;
  plStack_48 = (long *)0x0;
  func_0x00010b988130();
  if (plStack_40 == (long *)0x2) {
    func_0x0001003adc0c(aplStack_38);
    func_0x000104bda960();
    return param_1;
  }
  bVar1 = plStack_40 == (long *)0x1;
  if (bVar1) {
    func_0x00010b9abca8();
    if ((bVar1) && (aplStack_38[0] != (long *)0x0)) {
      (**(code **)(*aplStack_38[0] + 0x18))();
    }
    return aplStack_38;
  }
  return &plStack_40;
}



/* Entry: 10b988044; end: 10b9880cf;  */

/* WARNING: Possible PIC construction at 0x00010b988084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b9880a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b988088) */
/* WARNING: Removing unreachable block (ram,0x00010b9880a4) */
/* WARNING: Removing unreachable block (ram,0x00010b988098) */
/* WARNING: Removing unreachable block (ram,0x00010b9880f4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x00010b9880ac) */
/* WARNING: Removing unreachable block (ram,0x00010b9880bc) */
/* WARNING: Removing unreachable block (ram,0x00010b9880c8) */

long ** FUN_10b988044(long **param_1)

{
  bool bVar1;
  undefined1 auStack_50 [16];
  long *plStack_40;
  long *aplStack_38 [3];
  
  func_0x00010b988100();
  _objc_retain();
  _objc_alloc(PTR_PTR_1126d9410);
  FUN_10b980484(auStack_50);
  func_0x00010b988124();
  func_0x00010b988130();
  if (plStack_40 == (long *)0x2) {
    func_0x0001003adc0c(aplStack_38);
    func_0x000104bda960();
    return param_1;
  }
  bVar1 = plStack_40 == (long *)0x1;
  if (bVar1) {
    func_0x00010b9abca8();
    if ((bVar1) && (aplStack_38[0] != (long *)0x0)) {
      (**(code **)(*aplStack_38[0] + 0x18))();
    }
    return aplStack_38;
  }
  return &plStack_40;
}



/* Entry: 10b9880d0; end: 10b988147;  */

undefined8 * FUN_10b9880d0(void)

{
  bool bVar1;
  undefined8 *unaff_x19;
  long in_stack_00000010;
  long *in_stack_00000018;
  
  if (in_stack_00000010 == 2) {
    func_0x0001003adc0c(&stack0x00000018);
    func_0x000104bda960();
    return unaff_x19;
  }
  bVar1 = in_stack_00000010 == 1;
  if (bVar1) {
    func_0x00010b9abca8();
    if ((bVar1) && (in_stack_00000018 != (long *)0x0)) {
      (**(code **)(*in_stack_00000018 + 0x18))();
    }
    return &stack0x00000018;
  }
  return &stack0x00000010;
}



/* Entry: 10b988148; end: 10b9882a3;  */

undefined1 *
FUN_10b988148(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  undefined8 extraout_x8;
  undefined1 *puVar6;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined **ppuStack_d0;
  char cStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [120];
  undefined8 uStack_38;
  
  puVar4 = auStack_f0;
  func_0x00010b988cb4();
  uStack_38 = extraout_x8;
  _objc_retain();
  cStack_c8 = '\x01';
  ppuStack_d0 = &PTR_FUN_110d7e6e0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_10b9a0ad4(auStack_b0,&ppuStack_d0);
  FUN_10b9a8f04(auStack_e0,param_2);
  FUN_10b9a0b80(auStack_b0,auStack_e0);
  FUN_10b9a8d98(auStack_e0);
  uVar3 = param_1;
  _objc_opt_respondsToSelector(param_1,PTR_s_performWithMarshaller_flags__11261bf78);
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c0f9540();
    iVar2 = (int)uVar3;
  }
  else {
    uVar3 = param_1;
    func_0x00010c0f9560();
    iVar2 = (int)uVar3;
  }
  uVar1 = cStack_c8 == '\x01';
  puVar6 = (undefined1 *)0x0;
  if (((bool)uVar1) && (iVar2 != 0)) {
    FUN_10b9a1228(auStack_f0,auStack_b0,0xffffffff);
    FUN_10b9a9608(auStack_f0);
    func_0x00010b988ce4();
    puVar6 = puVar4;
  }
  FUN_10b9a0b2c(auStack_b0);
  pppuVar5 = &ppuStack_d0;
  FUN_10b9a01e4();
  func_0x00010b988c9c();
  func_0x00010b988c88(uStack_38);
  if ((bool)uVar1) {
    return puVar6;
  }
  ___stack_chk_fail();
  FUN_10b9a0b2c(auStack_b0);
  FUN_10b9a01e4(&ppuStack_d0);
  func_0x00010b988c9c();
  func_0x00010b988cec();
  func_0x00010b988d04();
  func_0x00010b988cf4();
  FUN_10b988148(param_5,param_6,param_7);
  if (pppuVar5 != (undefined ***)0x0) {
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bfc19e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (uVar3 != 0) {
      func_0x00010c0e4700(uVar3);
    }
    _objc_release(uVar3);
  }
  func_0x00010b988ca4();
  func_0x00010b988c9c();
  return param_5;
}



/* Entry: 10b9882a4; end: 10b98838f;  */

undefined8 FUN_10b9882a4(void)

{
  long lVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b988d04();
  func_0x00010b988cf4();
  FUN_10b988148(in_x4,in_x5,in_x6);
  if (unaff_x20 != 0) {
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = unaff_x19;
    func_0x00010bfc19e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x19);
    if (lVar1 != 0) {
      func_0x00010c0e4700(lVar1);
    }
    _objc_release(lVar1);
  }
  func_0x00010b988ca4();
  func_0x00010b988c9c();
  return in_x4;
}



/* Entry: 10b988390; end: 10b9883af;  */

undefined4 FUN_10b988390(ulong param_1)

{
  if (param_1 < 6) {
    return *(undefined4 *)(&UNK_10e5fc8c0 + param_1 * 4);
  }
  return 0;
}



/* Entry: 10b9883b0; end: 10b988453;  */

undefined8 FUN_10b9883b0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010b988cd4();
    func_0x00010c1280a0();
    func_0x00010b988cd4();
    func_0x00010beec740();
    param_1 = uVar1;
  }
  func_0x00010b988c9c();
  return param_1;
}



/* Entry: 10b988454; end: 10b9884d3;  */

undefined4 FUN_10b988454(void)

{
  undefined4 uVar1;
  int unaff_w19;
  long unaff_x20;
  
  func_0x00010b988d04();
  if (unaff_x20 == 2) {
    uVar1 = 4;
  }
  else {
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf800e0();
    func_0x00010b988ca4();
    uVar1 = 0;
    if (unaff_w19 == 0) {
      uVar1 = 0x10;
    }
  }
  func_0x00010b988c9c();
  return uVar1;
}



/* Entry: 10b9884d4; end: 10b98856f;  */

void FUN_10b9884d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain();
  func_0x00010b988cd4();
  FUN_10b9883b0();
  FUN_10b988390(param_7);
  FUN_10b98d764(param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10b988570; end: 10b988707;  */

undefined8 * FUN_10b988570(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  
  func_0x00010b988cb4();
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 2;
  param_1[1] = 0;
  func_0x00010bf00c80();
  _objc_retainAutoreleasedReturnValue();
  plVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (plVar2 != (long *)0x0) {
    plVar6 = (long *)0x0;
    plVar3 = plVar2;
    do {
      if (lRam0000000000000000 != lVar1) {
        plVar3 = param_2;
        _objc_enumerationMutation();
      }
      uVar5 = *(undefined8 *)((long)plVar6 * 8);
      func_0x00010b988cfc();
      if (((plVar3 == (long *)0x0) || (func_0x00010b988cfc(), plVar3 == (long *)0x1)) ||
         (func_0x00010b988cfc(), plVar3 == (long *)0x2)) {
        func_0x00010c29bf00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(uVar5);
        func_0x00010b988cc4();
        param_3 = (undefined8 *)&stack0xfffffffffffffeb8;
        plVar3 = param_1;
        FUN_10b988708();
      }
      plVar6 = (long *)((long)plVar6 + 1);
      in_ZR = plVar6 == plVar2;
    } while (plVar6 < plVar2);
    plVar2 = param_2;
    func_0x00010bf52a60();
  }
  puVar4 = (undefined8 *)0x0;
  func_0x00010b988ca4();
  func_0x00010b988c88(extraout_x8);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010b988ca4();
  func_0x0001080c9184();
  func_0x00010b988cac();
  puVar4 = (undefined8 *)(*param_1 + param_1[1] * 0x18);
  if (param_1[1] == param_1[2]) {
    pcStack_158 = FUN_10b988708;
    puStack_160 = &stack0xfffffffffffffff0;
    FUN_10b988a90(&puStack_168);
  }
  else {
    uVar7 = param_3[1];
    uVar5 = *param_3;
    puVar4[2] = param_3[2];
    puVar4[1] = uVar7;
    *puVar4 = uVar5;
    param_1[1] = param_1[1] + 1;
    puStack_168 = puVar4;
  }
  return puStack_168;
}



/* Entry: 10b988708; end: 10b98876f;  */

undefined8 * FUN_10b988708(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puStack_18;
  
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0x18);
  if (param_1[1] == param_1[2]) {
    FUN_10b988a90(&puStack_18,param_1,puVar1,1);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    param_1[1] = param_1[1] + 1;
    puStack_18 = puVar1;
  }
  return puStack_18;
}



/* Entry: 10b988770; end: 10b988853;  */

void FUN_10b988770(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 2;
  param_1[1] = 0;
  lVar1 = param_2;
  func_0x00010c0df520();
  for (lVar2 = 0; lVar1 != lVar2; lVar2 = lVar2 + 1) {
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09f140(param_2);
    func_0x00010b988cc4();
    FUN_10b988708(param_1,&stack0xffffffffffffff98);
  }
  func_0x00010b988c9c();
  return;
}



/* Entry: 10b988854; end: 10b9889a3;  */

long * FUN_10b988854(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4,
                    undefined *param_5,long *param_6)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  undefined1 in_ZR;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *extraout_x8_01;
  undefined1 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_188;
  long *plStack_180;
  undefined1 *puStack_178;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [72];
  undefined8 uStack_b8;
  long lStack_70;
  long alStack_68 [2];
  long alStack_58 [2];
  undefined8 uStack_48;
  
  func_0x00010b988cb4();
  uStack_48 = extraout_x8;
  _objc_retain();
  func_0x00010b988cf4();
  plVar7 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_performWithMarshaller_flags__11261bf78);
  if (((ulong)plVar7 & 1) != 0) {
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010bf800e0();
    _objc_release(param_4);
    if ((uVar4 & 1) == 0) {
      func_0x00010bfc5fc0();
      FUN_10b9a8f04(alStack_58,param_5);
      param_5 = &UNK_10e5fc8b8;
      plVar7 = alStack_58;
      param_6 = (long *)0x1;
      func_0x00010b8d24a4(&lStack_70,*param_3,&UNK_10e5fc8b8);
      in_ZR = lStack_70 == 1;
      if ((bool)in_ZR) {
        plVar10 = alStack_68;
        FUN_10b9a9608(plVar10);
      }
      else {
        plVar10 = (long *)0x0;
      }
      func_0x000104bda914(&lStack_70);
      param_3 = alStack_58;
      FUN_10b9a8d98();
      goto LAB_10b988944;
    }
  }
  plVar7 = (long *)0x1;
  FUN_10b988148(param_3,param_5);
  plVar10 = param_3;
LAB_10b988944:
  func_0x00010b988ca4();
  func_0x00010b988c9c();
  func_0x00010b988c88(uStack_48);
  if ((bool)in_ZR) {
    return plVar10;
  }
  ___stack_chk_fail();
  func_0x00010b988ca4();
  func_0x00010b988c9c();
  func_0x00010b988cac();
  puVar8 = auStack_110;
  func_0x00010b988cb4();
  uStack_b8 = extraout_x8_00;
  _objc_retain();
  func_0x00010b988cf4();
  FUN_10b988570(auStack_100,param_5);
  FUN_10b9884d4(auStack_110,param_1,param_2,plVar7,0,auStack_100);
  func_0x0001080c9184(auStack_100);
  FUN_10b988854();
  plVar10 = param_3;
  func_0x00010b988ce4();
  func_0x00010b988ca4();
  func_0x00010b988c9c();
  func_0x00010b988c88(uStack_b8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b988ce4();
    func_0x00010b988ca4();
    func_0x00010b988c9c();
    func_0x00010b988cac();
    uVar4 = plVar10[2];
    puVar1 = puVar8 + plVar10[1];
    if (0x555555555555555 - uVar4 < (long)puVar1 - uVar4) {
      _abort();
      FUN_10b988c4c(&lStack_188);
      __Unwind_Resume();
      if ((*plVar10 != 0) && (plVar10[1] + 0x18 != *plVar10)) {
        __ZdlPv();
      }
      return plVar10;
    }
    if (uVar4 >> 0x3d == 0) {
      puVar9 = (undefined1 *)((uVar4 << 3) / 5);
    }
    else {
      puVar9 = (undefined1 *)(uVar4 << 3);
      if (4 < uVar4 >> 0x3d) {
        puVar9 = (undefined1 *)0xffffffffffffffff;
      }
    }
    lVar11 = *plVar10;
    if ((undefined1 *)0x555555555555554 < puVar9) {
      puVar9 = (undefined1 *)0x555555555555555;
    }
    if (puVar1 <= puVar9) {
      puVar1 = puVar9;
    }
    plVar5 = plVar10;
    func_0x0001080c9134(plVar10,puVar1);
    plVar2 = (long *)*plVar10;
    lVar3 = plVar10[1];
    plVar6 = plVar5;
    plStack_180 = plVar10;
    puStack_178 = puVar1;
    if ((plVar2 != (long *)0x0) && (plVar5 != (long *)0x0 && plVar2 != plVar7)) {
      _memmove(plVar5,plVar2,(long)plVar7 - (long)plVar2);
      plVar6 = (long *)((long)plVar5 + ((long)plVar7 - (long)plVar2));
    }
    lVar13 = param_6[1];
    lVar12 = *param_6;
    plVar6[2] = param_6[2];
    plVar6[1] = lVar13;
    *plVar6 = lVar12;
    if ((plVar7 != (long *)0x0) && (plVar7 != plVar2 + lVar3 * 3)) {
      _memmove(plVar6 + (long)puVar8 * 3,plVar7,(long)(plVar2 + lVar3 * 3) - (long)plVar7);
    }
    lStack_188 = 0;
    if (plVar2 != (long *)0x0) {
      func_0x0001080c9118(plVar10,plVar10,plVar10[2]);
    }
    *plVar10 = (long)plVar5;
    plVar10[1] = (long)(puVar8 + plVar10[1]);
    plVar10[2] = (long)puVar1;
    plVar6 = &lStack_188;
    FUN_10b988c4c(plVar6);
    *extraout_x8_01 = (long)plVar7 + (*plVar10 - lVar11);
    return plVar6;
  }
  return param_3;
}



/* Entry: 10b9889a4; end: 10b988a8f;  */

long * FUN_10b9889a4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                    long param_5,long *param_6)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 in_ZR;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_118;
  long *plStack_110;
  undefined1 *puStack_108;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  
  puVar7 = auStack_a0;
  func_0x00010b988cb4();
  uStack_48 = extraout_x8;
  _objc_retain();
  func_0x00010b988cf4();
  FUN_10b988570(auStack_90,param_4);
  FUN_10b9884d4(auStack_a0,param_1,param_2,param_5,0,auStack_90);
  func_0x0001080c9184(auStack_90);
  FUN_10b988854();
  plVar4 = param_3;
  func_0x00010b988ce4();
  func_0x00010b988ca4();
  func_0x00010b988c9c();
  func_0x00010b988c88(uStack_48);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010b988ce4();
  func_0x00010b988ca4();
  func_0x00010b988c9c();
  func_0x00010b988cac();
  uVar3 = plVar4[2];
  puVar1 = puVar7 + plVar4[1];
  if (0x555555555555555 - uVar3 < (long)puVar1 - uVar3) {
    _abort();
    FUN_10b988c4c(&lStack_118);
    __Unwind_Resume();
    if ((*plVar4 != 0) && (plVar4[1] + 0x18 != *plVar4)) {
      __ZdlPv();
    }
    return plVar4;
  }
  if (uVar3 >> 0x3d == 0) {
    puVar8 = (undefined1 *)((uVar3 << 3) / 5);
  }
  else {
    puVar8 = (undefined1 *)(uVar3 << 3);
    if (4 < uVar3 >> 0x3d) {
      puVar8 = (undefined1 *)0xffffffffffffffff;
    }
  }
  lVar10 = *plVar4;
  if ((undefined1 *)0x555555555555554 < puVar8) {
    puVar8 = (undefined1 *)0x555555555555555;
  }
  if (puVar1 <= puVar8) {
    puVar1 = puVar8;
  }
  plVar5 = plVar4;
  func_0x0001080c9134(plVar4,puVar1);
  lVar2 = *plVar4;
  lVar9 = plVar4[1];
  plVar6 = plVar5;
  plStack_110 = plVar4;
  puStack_108 = puVar1;
  if ((lVar2 != 0) && (plVar5 != (long *)0x0 && lVar2 != param_5)) {
    _memmove(plVar5,lVar2,param_5 - lVar2);
    plVar6 = (long *)((long)plVar5 + (param_5 - lVar2));
  }
  lVar12 = param_6[1];
  lVar11 = *param_6;
  plVar6[2] = param_6[2];
  plVar6[1] = lVar12;
  *plVar6 = lVar11;
  if ((param_5 != 0) && (lVar9 = lVar2 + lVar9 * 0x18, param_5 != lVar9)) {
    _memmove(plVar6 + (long)puVar7 * 3,param_5,lVar9 - param_5);
  }
  lStack_118 = 0;
  if (lVar2 != 0) {
    func_0x0001080c9118(plVar4,plVar4,plVar4[2]);
  }
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)(puVar7 + plVar4[1]);
  plVar4[2] = (long)puVar1;
  plVar6 = &lStack_118;
  FUN_10b988c4c(plVar6);
  *extraout_x8_00 = *plVar4 + (param_5 - lVar10);
  return plVar6;
}



/* Entry: 10b988a90; end: 10b988c4b;  */

long * FUN_10b988a90(long *param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_78;
  long *plStack_70;
  ulong uStack_68;
  
  uVar3 = param_2[2];
  uVar1 = param_2[1] + param_4;
  if (0x555555555555555 - uVar3 < uVar1 - uVar3) {
    _abort();
    FUN_10b988c4c(&lStack_78);
    __Unwind_Resume();
    if ((*param_2 != 0) && (param_2[1] + 0x18 != *param_2)) {
      __ZdlPv();
    }
    return param_2;
  }
  if (uVar3 >> 0x3d == 0) {
    uVar6 = (uVar3 << 3) / 5;
  }
  else {
    uVar6 = uVar3 << 3;
    if (4 < uVar3 >> 0x3d) {
      uVar6 = 0xffffffffffffffff;
    }
  }
  lVar8 = *param_2;
  if (0x555555555555554 < uVar6) {
    uVar6 = 0x555555555555555;
  }
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  plVar4 = param_2;
  func_0x0001080c9134(param_2,uVar1);
  lVar2 = *param_2;
  lVar7 = param_2[1];
  plVar5 = plVar4;
  plStack_70 = param_2;
  uStack_68 = uVar1;
  if ((lVar2 != 0) && (plVar4 != (long *)0x0 && lVar2 != param_3)) {
    _memmove(plVar4,lVar2,param_3 - lVar2);
    plVar5 = (long *)((long)plVar4 + (param_3 - lVar2));
  }
  lVar10 = param_5[1];
  lVar9 = *param_5;
  plVar5[2] = param_5[2];
  plVar5[1] = lVar10;
  *plVar5 = lVar9;
  if ((param_3 != 0) && (lVar7 = lVar2 + lVar7 * 0x18, param_3 != lVar7)) {
    _memmove(plVar5 + param_4 * 3,param_3,lVar7 - param_3);
  }
  lStack_78 = 0;
  if (lVar2 != 0) {
    func_0x0001080c9118(param_2,param_2,param_2[2]);
  }
  *param_2 = (long)plVar4;
  param_2[1] = param_2[1] + param_4;
  param_2[2] = uVar1;
  plVar5 = &lStack_78;
  FUN_10b988c4c(plVar5);
  *param_1 = *param_2 + (param_3 - lVar8);
  return plVar5;
}



/* Entry: 10b988c4c; end: 10b988c87;  */

long * FUN_10b988c4c(long *param_1)

{
  if ((*param_1 != 0) && (param_1[1] + 0x18 != *param_1)) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b988c88; end: 10b988d0f;  */

void FUN_10b988c88(void)

{
  return;
}



/* Entry: 10b988d10; end: 10b988d67; -[SCValdiWrappedValue initWithValue:] */

undefined1 * FUN_10b988d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270c138;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10b9a9020((undefined1 *)((long)puVar1 + 8),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b988d68; end: 10b988d6f; -[SCValdiWrappedValue value] */

long FUN_10b988d68(long param_1)

{
  return param_1 + 8;
}



/* Entry: 10b988d70; end: 10b988d7b; -[SCValdiWrappedValue valdi_toNative:] */

long * FUN_10b988d70(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  long *plVar2;
  
  if (param_3 != (long *)(param_1 + 8)) {
    if ((*(char *)((long)param_3 + 9) == '\x01') && ((long *)*param_3 != (long *)0x0)) {
      (**(code **)(*(long *)*param_3 + 0x18))();
    }
    plVar2 = *(long **)(param_1 + 8);
    *param_3 = (long)plVar2;
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_1 + 0x10);
    cVar1 = *(char *)(param_1 + 0x11);
    *(char *)((long)param_3 + 9) = cVar1;
    if (cVar1 == '\x01' && plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return param_3;
}



/* Entry: 10b988d7c; end: 10b988dcb; -[SCValdiWrappedValue debugString] */

void FUN_10b988d7c(long param_1)

{
  undefined1 auStack_28 [8];
  
  FUN_10b9a9358(auStack_28,param_1 + 8);
  FUN_10b98101c(auStack_28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b988e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b988dcc; end: 10b988e6b; -[SCValdiWrappedValue debugDescription] */

void FUN_10b988dcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf66480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f9e818);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b988ea0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b988e6c; end: 10b988e7f; +[SCValdiWrappedValue valdiMarshallableObjectDescriptor] */

void FUN_10b988e6c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 3;
  return;
}



/* Entry: 10b988e80; end: 10b988e87; -[SCValdiWrappedValue .cxx_destruct] */

long * FUN_10b988e80(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  
  func_0x00010b9abca8();
  if (((bool)in_ZR) && (plVar1 = *(long **)(param_1 + 8), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return (long *)(param_1 + 8);
}



/* Entry: 10b988e88; end: 10b988eab; -[SCValdiWrappedValue .cxx_construct] */

void FUN_10b988e88(long param_1)

{
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10b988eac; end: 10b988f17;  */

ulong FUN_10b988eac(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  double dStack_18;
  
  func_0x00010bfc9760(param_1,param_2,&dStack_18,&uStack_20,&uStack_28,&uStack_30);
  func_0x00010b988f5c((long)(dStack_18 * 255.0),uStack_20);
  func_0x00010b988f5c(extraout_x9 << 0x10 | extraout_x8 << 0x18,uStack_28);
  func_0x00010b988f5c(extraout_x8_00 | extraout_x9_00 << 8,uStack_30);
  return extraout_x8_01 | extraout_x9_01;
}



/* Entry: 10b988f18; end: 10b988f6b;  */

void FUN_10b988f18(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)(param_1 >> 0x18 & 0xff) / 255.0,(double)(param_1 >> 0x10 & 0xff) / 255.0,
             (double)(param_1 >> 8 & 0xff) / 255.0,(double)(param_1 & 0xff) / 255.0,
             PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithRed_green_blue_alpha__1125adf30);
  return;
}



/* Entry: 10b988f6c; end: 10b988fdb;  */

undefined8 * FUN_10b988f6c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110d7ed50;
  param_1[1] = 1;
  FUN_10b980190(param_1 + 2,param_2,1);
  *param_1 = &PTR_DAT_110d7d698;
  param_1[2] = &PTR_FUN_110d7d6f8;
  return param_1;
}



/* Entry: 10b988fdc; end: 10b988fdf;  */

undefined8 * FUN_10b988fdc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110d7cbe8;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_10b9869cc(lVar1,param_1[2]);
  }
  FUN_10b982030(param_1 + 1);
  return param_1;
}



/* Entry: 10b988fe0; end: 10b988fff;  */

void FUN_10b988fe0(void)

{
  func_0x00010b9891d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



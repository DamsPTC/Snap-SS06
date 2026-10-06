/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072cdb30; end: 1072cdb4f;  */

void FUN_1072cdb30(void)

{
  func_0x0001072cfca4();
  FUN_1072cdb50();
  func_0x0001072cfbc0();
  return;
}



/* Entry: 1072cdb50; end: 1072cdb7b;  */

void FUN_1072cdb50(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_11099be48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072cdb7c; end: 1072cdb7f;  */

void FUN_1072cdb7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099be48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072cdb80; end: 1072cdb93;  */

void FUN_1072cdb80(void)

{
  func_0x0001072cdba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072cdb94; end: 1072cdbbb;  */

undefined8 FUN_1072cdb94(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001072981e4(param_1 + 0x18,*(undefined8 *)(param_1 + 0x28));
  func_0x000100168718(param_1 + 0x18);
  FUN_10726eae4();
  return unaff_x19;
}



/* Entry: 1072cdbbc; end: 1072cdbd7;  */

void FUN_1072cdbbc(void)

{
  func_0x0001072cfc38();
  FUN_1072cdbd8();
  return;
}



/* Entry: 1072cdbd8; end: 1072cdc3b;  */

undefined8 * FUN_1072cdbd8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x0001072ce294();
  func_0x0001072cf450();
  FUN_1072cdb30();
  FUN_1072cdc3c(puStack_30,param_2);
  func_0x0001072ce344();
  func_0x0001072cdbac();
  func_0x0001072ce0cc(extraout_x8);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x0001072ce928();
  func_0x0001072cdbac();
  func_0x0001072ce900();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_11099be48;
  puStack_30[1] = 0;
  FUN_1072cdc70(puStack_30 + 3);
  return puStack_30;
}



/* Entry: 1072cdc3c; end: 1072cdc6f;  */

undefined8 * FUN_1072cdc3c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11099be48;
  param_1[1] = 0;
  FUN_1072cdc70(param_1 + 3);
  return param_1;
}



/* Entry: 1072cdc70; end: 1072cdc87;  */

void FUN_1072cdc70(long param_1)

{
  FUN_10729881c();
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 1072cdc88; end: 1072cdd1f;  */

undefined8 FUN_1072cdc88(void)

{
  undefined8 unaff_x19;
  
  func_0x0001072cfc98();
  func_0x0001072cdcac();
  func_0x0001072cebb4();
  FUN_1072cdd20();
  return unaff_x19;
}



/* Entry: 1072cdd20; end: 1072cdd4f;  */

void FUN_1072cdd20(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072cdd50; end: 1072cdd8f;  */

long * FUN_1072cdd50(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001072cdcdc(lVar1 + 0x10);
    }
    func_0x0001072cf078();
  }
  return param_1;
}



/* Entry: 1072cdd90; end: 1072cddff;  */

void FUN_1072cdd90(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1072cde00; end: 1072cde2b;  */

long FUN_1072cde00(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001072cf2bc();
  FUN_1072cdd90(lVar1 + 0x18,param_2 + 0x18);
  return param_1;
}



/* Entry: 1072cde2c; end: 1072cde2f;  */

undefined8 * FUN_1072cde2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099bae8;
  func_0x0001072cdf00(param_1 + 4);
  return param_1;
}



/* Entry: 1072cde30; end: 1072cde43;  */

void FUN_1072cde30(void)

{
  FUN_1072cded4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072cde44; end: 1072cded3;  */

void FUN_1072cde44(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auStack_68 [40];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_1072cdd90(auStack_68,param_1 + 0x38);
  (*pcVar2)(plVar1,&uStack_40,auStack_68);
  FUN_1072cdc88(auStack_68);
  func_0x0001072bc168(&uStack_40);
  return;
}



/* Entry: 1072cded4; end: 1072cdf23;  */

undefined8 * FUN_1072cded4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099bae8;
  func_0x0001072cdf00(param_1 + 4);
  return param_1;
}



/* Entry: 1072cdf24; end: 1072cdf2b;  */

void FUN_1072cdf24(void)

{
  return;
}



/* Entry: 1072cdf2c; end: 1072cdf4f;  */

void FUN_1072cdf2c(void)

{
  func_0x0001072ce7fc();
  func_0x0001072cee44(&PTR_FUN_11099bb28);
  return;
}



/* Entry: 1072cdf50; end: 1072cdf93;  */

void FUN_1072cdf50(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_11099bb28;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072cdf94; end: 1072cdfbb;  */

void FUN_1072cdf94(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099bb88);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cdfbc; end: 1072d03e7;  */

undefined ** FUN_1072cdfbc(void)

{
  return &PTR_DAT_11099bb88;
}



/* Entry: 1072d03e8; end: 1072d044f;  */

long FUN_1072d03e8(long param_1)

{
  FUN_1072d0450();
  func_0x0001072d2168();
  func_0x0001072d1108();
  func_0x0001072d1108(param_1 + 0xf0);
  *(undefined1 *)(param_1 + 0x100) = 0;
  return param_1;
}



/* Entry: 1072d0450; end: 1072d04ff;  */

undefined8 * FUN_1072d0450(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099bfd0;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 1);
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  return param_1;
}



/* Entry: 1072d0500; end: 1072d0503;  */

undefined8 * FUN_1072d0500(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001072d2168();
  FUN_1072a9f04(puVar1 + 0x1e);
  FUN_1072a9f04();
  *param_1 = &PTR_FUN_11099bfd0;
  FUN_1072d199c(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 1072d0504; end: 1072d0517;  */

void FUN_1072d0504(void)

{
  func_0x0001072d04cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d0518; end: 1072d056f;  */

void FUN_1072d0518(long param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xdc);
  *(int *)(param_1 + 0xdc) = param_2;
  if ((param_3 != 0) && (iVar1 != param_2)) {
    func_0x0001072d217c();
    FUN_1072d0570();
    func_0x0001072d209c();
  }
  return;
}



/* Entry: 1072d0570; end: 1072d073b;  */

void FUN_1072d0570(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lStack_90;
  undefined1 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  lStack_78 = 0;
  puStack_80 = (undefined8 *)0x0;
  uStack_68 = 0;
  lStack_70 = 0;
  uStack_60 = 0x3f800000;
  lStack_90 = param_1 + 8;
  uStack_88 = 1;
  FUN_10724e404();
  plVar6 = (long *)lStack_70;
  if (&puStack_80 != (undefined8 **)(param_1 + 0xb0)) {
    uStack_60 = *(undefined4 *)(param_1 + 0xd0);
    plVar4 = *(long **)(param_1 + 0xc0);
    puVar3 = puStack_80;
    lVar1 = lStack_78;
    if (lStack_78 != 0) {
      for (; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      lStack_70 = 0;
      uStack_68 = 0;
      for (plVar5 = plVar4;
          (plVar4 = plVar5, plVar6 != (long *)0x0 && (plVar4 = (long *)0x0, plVar5 != (long *)0x0));
          plVar5 = (long *)*plVar5) {
        *(undefined4 *)(plVar6 + 2) = *(undefined4 *)(plVar5 + 2);
        FUN_1072d1e0c(plVar6 + 3,plVar5 + 3);
        plVar6 = (long *)*plVar6;
        func_0x0001072d20e0();
      }
      func_0x0001072d20ec();
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      puVar3 = (undefined8 *)0x38;
      __Znwm();
      uStack_48 = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(plVar4 + 2);
      puStack_58 = puVar3;
      plStack_50 = &lStack_70;
      FUN_1072d1f50(puVar3 + 3,plVar4 + 3);
      uStack_48 = CONCAT71(uStack_48._1_7_,1);
      puVar3[1] = (ulong)*(uint *)(puVar3 + 2);
      func_0x0001072d20e0();
      puStack_58 = (undefined8 *)0x0;
      FUN_1072d1fdc(&puStack_58);
    }
  }
  FUN_10724e49c(&lStack_90);
  plVar6 = (long *)lStack_70;
  while( true ) {
    if (plVar6 == (long *)0x0) {
      FUN_1072d199c(&puStack_80);
      return;
    }
    if ((long *)plVar6[6] == (long *)0x0) break;
    func_0x0001072d20d8(*(undefined8 *)(*(long *)plVar6[6] + 0x30));
    plVar6 = (long *)*plVar6;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1072d06f4);
  (*pcVar2)();
}



/* Entry: 1072d073c; end: 1072d083f;  */

void FUN_1072d073c(long param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_2 == 2) {
    FUN_1072d0840(&uStack_50,param_1 + 0xf0,param_3);
    FUN_1072d1900(param_1 + 0xf0,param_3);
    if (param_4 == 0) goto LAB_1072d080c;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x0001072d213c();
  }
  else {
    FUN_1072d0840(&uStack_50,param_1 + 0xe0,param_3);
    FUN_1072d1900(param_1 + 0xe0,param_3);
    if (param_4 == 0) goto LAB_1072d080c;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x0001072d213c();
  }
  func_0x0001072d209c();
LAB_1072d080c:
  FUN_1072d195c(&uStack_50);
  return;
}



/* Entry: 1072d0840; end: 1072d0b1b;  */

long **** FUN_1072d0840(long param_1,long ****param_2,long *param_3)

{
  byte bVar1;
  long ****pppplVar2;
  undefined8 *puVar3;
  undefined1 in_ZR;
  int iVar4;
  long *plVar5;
  long ***ppplVar6;
  long ****pppplVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plStack_118;
  long ***ppplStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  long ***ppplStack_f8;
  long ***ppplStack_f0;
  long **applStack_c0 [7];
  undefined1 auStack_88 [16];
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  lVar11 = param_1;
  pppplVar7 = param_2;
  func_0x0001072d208c();
  uStack_70 = extraout_x8;
  func_0x0001072d124c();
  func_0x0001072d1108(lVar11 + 0x10);
  plVar5 = param_3;
  FUN_1072d1158();
  plStack_118 = plVar5;
  pppplVar2 = pppplVar7;
  do {
    ppplStack_110 = (long ***)pppplVar2;
    if (plStack_118 == (long *)0x0) {
      FUN_1072d1158();
      while (ppplStack_f8 = (long ***)param_2, ppplStack_f0 = (long ***)pppplVar7,
            param_2 != (long ****)0x0) {
        lVar11 = *param_3;
        FUN_1072d1160(lVar11,pppplVar7);
        if (lVar11 == 0) {
          func_0x0001072d1220(param_1,pppplVar7);
        }
        func_0x0001072d167c(&ppplStack_f8);
        param_2 = (long ****)ppplStack_f8;
        pppplVar7 = (long ****)ppplStack_f0;
      }
      func_0x0001072d2020(uStack_70);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        FUN_1072d195c(param_1);
        __Unwind_Resume();
        return (long ****)(ulong)*(uint *)((long)param_2 + 0xdc);
      }
      return param_2;
    }
    ppplVar6 = *param_2;
    pppplVar7 = pppplVar2;
    FUN_1072d1160();
    if (ppplVar6 == (long ***)0x0) {
LAB_1072d08c8:
      func_0x000104c2fe00(&ppplStack_f8,pppplVar2);
      func_0x000104c2fe00(applStack_c0,pppplVar2 + 7);
      lVar11 = param_1 + 0x10;
      FUN_1072a9f64();
      in_ZR = lVar11 == 2;
      if (1 < lVar11) {
        puVar12 = *(undefined8 **)(param_1 + 0x10);
        FUN_1072a9d00(auStack_88,1);
        puVar3 = puStack_78;
        puStack_78[1] = 0;
        puStack_78[2] = 0;
        *puStack_78 = &PTR_FUN_11099a1a8;
        FUN_1072d1518(puStack_78 + 3);
        lVar11 = puVar12[3];
        if (lVar11 != 0) {
          puVar8 = (undefined8 *)lVar11;
          func_0x0001072d152c(puVar3 + 3);
          FUN_1072d1438();
          puStack_108 = puVar12;
          while (puStack_108 != (undefined8 *)0x0) {
            lVar10 = (long)puVar8;
            puStack_100 = puVar8;
            func_0x000104c2fe38();
            puVar12 = puVar3 + 3;
            func_0x00010ae6c8b4(puVar12,lVar10);
            bVar1 = (byte)lVar10 & 0x7f;
            uVar9 = puVar3[5];
            lVar10 = puVar3[3];
            *(byte *)(lVar10 + (long)puVar12) = bVar1;
            *(byte *)(lVar10 + ((long)puVar12 - 7U & uVar9) + (uVar9 & 7)) = bVar1;
            lVar10 = puVar3[4] + (long)puVar12 * 0x70;
            func_0x000104c2fe00(lVar10,puVar8);
            func_0x000104c2fe00(lVar10 + 0x38,(long)puVar8 + 0x38);
            func_0x0001072d167c(&puStack_108);
            puVar8 = puStack_100;
          }
          puVar3[6] = lVar11;
          *(long *)(puVar3[3] + -8) = *(long *)(puVar3[3] + -8) - lVar11;
        }
        puStack_100 = puStack_78;
        *(undefined4 *)(puVar3 + 7) = 0;
        puStack_78 = (undefined8 *)0x0;
        puStack_108 = puStack_100 + 3;
        FUN_1072a9d94(auStack_88);
        FUN_1072d14d4(param_1 + 0x10,&puStack_108);
        FUN_1072a9d70(&puStack_108);
      }
      lVar10 = *(long *)(param_1 + 0x10);
      pppplVar7 = &ppplStack_f8;
      lVar11 = lVar10;
      FUN_1072d1580(lVar10);
      if (((ulong)pppplVar7 & 1) != 0) {
        lVar11 = *(long *)(lVar10 + 8) + lVar11 * 0x70;
        func_0x000104c2fe00(lVar11,&ppplStack_f8);
        pppplVar7 = (long ****)applStack_c0;
        func_0x000104c318bc(lVar11 + 0x38);
      }
      func_0x0001072d1650(&ppplStack_f8);
    }
    else {
      iVar4 = (int)pppplVar7 + 0x38;
      pppplVar7 = pppplVar2 + 7;
      FUN_107262f24();
      if (iVar4 != 0) goto LAB_1072d08c8;
    }
    func_0x0001072d167c(&plStack_118);
    pppplVar2 = (long ****)ppplStack_110;
  } while( true );
}



/* Entry: 1072d0b1c; end: 1072d0b3b;  */

undefined4 FUN_1072d0b1c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}



/* Entry: 1072d0b3c; end: 1072d0b97;  */

void FUN_1072d0b3c(long param_1,uint param_2,int param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x100);
  *(char *)(param_1 + 0x100) = (char)param_2;
  if ((param_3 != 0) && (bVar1 != param_2)) {
    func_0x0001072d217c();
    FUN_1072d0570();
    func_0x0001072d209c();
  }
  return;
}



/* Entry: 1072d0b98; end: 1072d0b9f;  */

undefined1 FUN_1072d0b98(long param_1)

{
  return *(undefined1 *)(param_1 + 0x100);
}



/* Entry: 1072d0ba0; end: 1072d0f2f;  */

ulong FUN_1072d0ba0(long param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong extraout_x8;
  long lVar7;
  ulong uVar8;
  ulong extraout_x9;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong unaff_x23;
  uint uVar16;
  ulong uVar17;
  
  func_0x0001072d20a4();
  uVar2 = *(uint *)(param_1 + 0xd8);
  uVar14 = (ulong)uVar2;
  *(uint *)(param_1 + 0xd8) = uVar2 + 1;
  uVar17 = *(ulong *)(param_1 + 0xb8);
  if (uVar17 != 0) {
    uVar6 = uVar17 - 1;
    uVar16 = (uint)uVar17;
    if ((uVar17 & uVar6) == 0) {
      unaff_x23 = (ulong)(uVar16 - 1 & uVar2);
    }
    else {
      unaff_x23 = uVar14;
      if (uVar17 <= uVar14) {
        uVar3 = 0;
        if (uVar16 != 0) {
          uVar3 = uVar2 / uVar16;
        }
        unaff_x23 = (ulong)(uVar2 - uVar3 * uVar16);
      }
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0xb0) + unaff_x23 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_1072d0c64;
          uVar8 = plVar15[1];
          if (uVar8 != uVar14) break;
          if (*(uint *)(plVar15 + 2) == uVar2) goto LAB_1072d0ee8;
        }
        if ((uVar17 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar17 <= uVar8) {
          uVar9 = 0;
          if (uVar17 != 0) {
            uVar9 = uVar8 / uVar17;
          }
          uVar8 = uVar8 - uVar9 * uVar17;
        }
      } while (uVar8 == unaff_x23);
    }
  }
LAB_1072d0c64:
  plVar15 = (long *)0x38;
  __Znwm();
  plVar1 = (long *)(param_1 + 0xc0);
  *plVar15 = 0;
  plVar15[1] = uVar14;
  *(uint *)(plVar15 + 2) = uVar2;
  plVar15[6] = 0;
  if ((uVar17 != 0) &&
     ((float)(*(long *)(param_1 + 200) + 1) <= *(float *)(param_1 + 0xd0) * (float)uVar17))
  goto LAB_1072d0e74;
  bVar4 = 2 < uVar17;
  bVar5 = uVar17 == 3;
  func_0x0001072d2148(uVar17 << 1);
  uVar6 = extraout_x8;
  if (!bVar4 || bVar5) {
    uVar6 = extraout_x9;
  }
  if (uVar6 - 1 == 0) {
    uVar6 = 2;
  }
  else if ((uVar6 & uVar6 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar17 = *(ulong *)(param_1 + 0xb8);
  }
  if (uVar17 < uVar6) {
LAB_1072d0d04:
    uVar17 = uVar6;
    FUN_1072d1fc0(uVar6);
    FUN_1072d1fa8(param_1 + 0xb0,uVar17);
    *(ulong *)(param_1 + 0xb8) = uVar6;
    lVar7 = *(long *)(param_1 + 0xb0);
    for (uVar17 = 0; uVar6 != uVar17; uVar17 = uVar17 + 1) {
      *(undefined8 *)(lVar7 + uVar17 * 8) = 0;
    }
    plVar10 = (long *)*plVar1;
    uVar17 = uVar6;
    if (plVar10 != (long *)0x0) {
      uVar12 = plVar10[1];
      uVar9 = uVar6 - 1;
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar12 / uVar6;
      }
      uVar13 = uVar12;
      if (uVar6 <= uVar12) {
        uVar13 = uVar12 - uVar8 * uVar6;
      }
      if ((uVar6 & uVar9) == 0) {
        uVar13 = uVar12 & uVar9;
      }
      *(long **)(lVar7 + uVar13 * 8) = plVar1;
      while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
        uVar8 = plVar10[1];
        if ((uVar6 & uVar9) == 0) {
          uVar8 = uVar8 & uVar9;
        }
        else if (uVar6 <= uVar8) {
          uVar12 = 0;
          if (uVar6 != 0) {
            uVar12 = uVar8 / uVar6;
          }
          uVar8 = uVar8 - uVar12 * uVar6;
        }
        if (uVar8 != uVar13) {
          if (*(long *)(lVar7 + uVar8 * 8) == 0) {
            *(long **)(lVar7 + uVar8 * 8) = plVar11;
            uVar13 = uVar8;
          }
          else {
            *plVar11 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar7 + uVar8 * 8);
            **(long **)(lVar7 + uVar8 * 8) = (long)plVar10;
            plVar10 = plVar11;
          }
        }
      }
    }
  }
  else if (uVar6 < uVar17) {
    uVar8 = (ulong)((float)*(ulong *)(param_1 + 200) / *(float *)(param_1 + 0xd0));
    if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001072d20b8();
    }
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    if (uVar6 < uVar17) {
      if (uVar6 != 0) goto LAB_1072d0d04;
      FUN_1072d1fa8(param_1 + 0xb0,0);
      *(undefined8 *)(param_1 + 0xb8) = 0;
      uVar17 = 0;
    }
    else {
      uVar17 = *(ulong *)(param_1 + 0xb8);
    }
  }
  if ((uVar17 & uVar17 - 1) == 0) {
    unaff_x23 = (ulong)((int)uVar17 - 1U & uVar2);
  }
  else {
    unaff_x23 = uVar14;
    if (uVar17 <= uVar14) {
      uVar6 = 0;
      if (uVar17 != 0) {
        uVar6 = uVar14 / uVar17;
      }
      unaff_x23 = uVar14 - uVar6 * uVar17;
    }
  }
LAB_1072d0e74:
  lVar7 = *(long *)(param_1 + 0xb0);
  plVar10 = *(long **)(lVar7 + unaff_x23 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar15 = *plVar1;
    *plVar1 = (long)plVar15;
    *(long **)(lVar7 + unaff_x23 * 8) = plVar1;
    if (*plVar15 != 0) {
      uVar6 = *(ulong *)(*plVar15 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar6 = uVar6 & uVar17 - 1;
      }
      else if (uVar17 <= uVar6) {
        uVar8 = 0;
        if (uVar17 != 0) {
          uVar8 = uVar6 / uVar17;
        }
        uVar6 = uVar6 - uVar8 * uVar17;
      }
      *(long **)(lVar7 + uVar6 * 8) = plVar15;
    }
  }
  else {
    *plVar15 = *plVar10;
    *plVar10 = (long)plVar15;
  }
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  func_0x0001072d2108();
LAB_1072d0ee8:
  FUN_1072d1e0c(plVar15 + 3,param_2);
  func_0x0001072d20f8();
  return uVar14;
}



/* Entry: 1072d0f30; end: 1072d1157;  */

void FUN_1072d0f30(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  
  func_0x0001072d20a4();
  uVar7 = *(ulong *)(param_1 + 0xb8);
  if ((uVar7 != 0) && (lVar4 = *(long *)(param_1 + 200), lVar4 != 0)) {
    uVar5 = (ulong)param_2;
    uVar9 = uVar7 - 1;
    uVar6 = (uint)uVar7;
    if ((uVar7 & uVar9) == 0) {
      uVar11 = (ulong)(uVar6 - 1 & param_2);
    }
    else {
      uVar11 = uVar5;
      if (uVar7 <= uVar5) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = param_2 / uVar6;
        }
        uVar11 = (ulong)(param_2 - uVar1 * uVar6);
      }
    }
    lVar10 = *(long *)(param_1 + 0xb0);
    plVar8 = *(long **)(lVar10 + uVar11 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1072d10f4;
          uVar13 = plVar8[1];
          if (uVar13 != uVar5) break;
          if (*(uint *)(plVar8 + 2) == param_2) {
            lVar12 = *plVar8;
            if ((uVar7 & uVar9) == 0) {
              uVar5 = uVar9 & uVar5;
            }
            else if (uVar7 <= uVar5) {
              uVar11 = 0;
              if (uVar7 != 0) {
                uVar11 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar11 * uVar7;
            }
            plVar3 = *(long **)(lVar10 + uVar5 * 8);
            do {
              plVar14 = plVar3;
              plVar3 = (long *)*plVar14;
            } while ((long *)*plVar14 != plVar8);
            if (plVar14 == (long *)(param_1 + 0xc0)) {
LAB_1072d1058:
              if (lVar12 == 0) {
LAB_1072d108c:
                *(undefined8 *)(lVar10 + uVar5 * 8) = 0;
                lVar12 = *plVar8;
                goto LAB_1072d1094;
              }
              uVar11 = *(ulong *)(lVar12 + 8);
              if ((uVar7 & uVar9) == 0) {
                uVar13 = uVar11 & uVar9;
              }
              else {
                uVar13 = uVar11;
                if (uVar7 <= uVar11) {
                  uVar13 = 0;
                  if (uVar7 != 0) {
                    uVar13 = uVar11 / uVar7;
                  }
                  uVar13 = uVar11 - uVar13 * uVar7;
                }
              }
              if (uVar13 != uVar5) goto LAB_1072d108c;
LAB_1072d109c:
              if ((uVar7 & uVar9) == 0) {
                uVar11 = uVar11 & uVar9;
              }
              else if (uVar7 <= uVar11) {
                uVar9 = 0;
                if (uVar7 != 0) {
                  uVar9 = uVar11 / uVar7;
                }
                uVar11 = uVar11 - uVar9 * uVar7;
              }
              if (uVar11 != uVar5) {
                *(long **)(lVar10 + uVar11 * 8) = plVar14;
                lVar12 = *plVar8;
              }
            }
            else {
              uVar11 = plVar14[1];
              if ((uVar7 & uVar9) == 0) {
                uVar11 = uVar11 & uVar9;
              }
              else if (uVar7 <= uVar11) {
                uVar13 = 0;
                if (uVar7 != 0) {
                  uVar13 = uVar11 / uVar7;
                }
                uVar11 = uVar11 - uVar13 * uVar7;
              }
              if (uVar11 != uVar5) goto LAB_1072d1058;
LAB_1072d1094:
              if (lVar12 != 0) {
                uVar11 = *(ulong *)(lVar12 + 8);
                goto LAB_1072d109c;
              }
            }
            *plVar14 = lVar12;
            *plVar8 = 0;
            *(long *)(param_1 + 200) = lVar4 + -1;
            func_0x0001072d2108();
            goto LAB_1072d10f4;
          }
        }
        if ((uVar7 & uVar9) == 0) {
          uVar13 = uVar13 & uVar9;
        }
        else if (uVar7 <= uVar13) {
          uVar2 = 0;
          if (uVar7 != 0) {
            uVar2 = uVar13 / uVar7;
          }
          uVar13 = uVar13 - uVar2 * uVar7;
        }
      } while (uVar13 == uVar11);
    }
  }
LAB_1072d10f4:
  func_0x0001072d20f8();
  return;
}



/* Entry: 1072d1158; end: 1072d115f;  */

undefined1  [16] FUN_1072d1158(long *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = ((undefined8 *)*param_1)[1];
  uStack_20 = *(undefined8 *)*param_1;
  FUN_1072d1464(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1072d1160; end: 1072d121f;  */

long FUN_1072d1160(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong *unaff_x19;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  uint6 uVar10;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar11;
  byte bVar17;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  func_0x0001072d2190();
  func_0x0001072d2074();
  lVar6 = 0;
  uVar1 = unaff_x19[2];
  uVar7 = *unaff_x19;
  uVar5 = uVar7 >> 0xc ^ param_1 >> 7;
  bVar3 = (byte)param_1;
  uVar10 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar1;
    uVar11 = *(undefined8 *)(uVar7 + uVar5);
    cVar12 = (char)((ulong)uVar11 >> 8);
    cVar13 = (char)((ulong)uVar11 >> 0x10);
    cVar14 = (char)((ulong)uVar11 >> 0x18);
    cVar15 = (char)((ulong)uVar11 >> 0x20);
    cVar16 = (char)((ulong)uVar11 >> 0x28);
    bVar9 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar17 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar9 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar16 == (char)(uVar10 >> 0x28)),
                                            CONCAT14(-(cVar15 == (char)(uVar10 >> 0x20)),
                                                     CONCAT13(-(cVar14 == (char)(uVar10 >> 0x18)),
                                                              CONCAT12(-(cVar13 ==
                                                                        (char)(uVar10 >> 0x10)),
                                                                       CONCAT11(-(cVar12 ==
                                                                                 (char)(uVar10 >> 8)
                                                                                 ),-((char)uVar11 ==
                                                                                    (char)uVar10))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      iVar4 = (int)&stack0x00000000;
      func_0x0001072d14bc();
      if (iVar4 != 0) {
        return *unaff_x19 + (uVar5 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar1);
      }
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                CONCAT16(-(bVar9 == 0x80),
                                         CONCAT15(-(cVar16 == -0x80),
                                                  CONCAT14(-(cVar15 == -0x80),
                                                           CONCAT13(-(cVar14 == -0x80),
                                                                    CONCAT12(-(cVar13 == -0x80),
                                                                             CONCAT11(-(cVar12 ==
                                                                                       -0x80),-((
                                                  char)uVar11 == -0x80)))))))),1);
    if ((bVar9 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return 0;
}



/* Entry: 1072d1220; end: 1072d126f;  */

long FUN_1072d1220(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  func_0x0001072d16b0();
  lVar2 = *param_1;
  uVar1 = *(ulong *)(lVar2 + 8);
  if (uVar1 < *(ulong *)(lVar2 + 0x10)) {
    func_0x0001072d1830();
    lVar3 = uVar1 + 0x38;
  }
  else {
    lVar3 = lVar2;
    FUN_1072d1858(lVar2,param_2);
  }
  *(long *)(lVar2 + 8) = lVar3;
  return lVar3 + -0x38;
}



/* Entry: 1072d1270; end: 1072d1303;  */

void FUN_1072d1270(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  if ((bRam00000001131ad278 & 1) == 0) {
    iVar6 = 0x131ad278;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_1072d1304(0x1131ad268);
      ___cxa_guard_release(0x1131ad278);
    }
  }
  lVar5 = lRam00000001131ad270;
  uVar4 = uRam00000001131ad268;
  param_1[1] = lRam00000001131ad270;
  *param_1 = uVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1072d1304; end: 1072d1323;  */

void FUN_1072d1304(void)

{
  undefined1 uStack_11;
  
  FUN_1072d1324(&uStack_11);
  return;
}



/* Entry: 1072d1324; end: 1072d1397;  */

long FUN_1072d1324(long *param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x0001072d208c();
  func_0x0001072d2130();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_11099bf80;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  *param_1 = (long)(puStack_30 + 3);
  param_1[1] = (long)puStack_30;
  func_0x0001072d2128();
  func_0x0001072d2020(extraout_x8);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(param_2 + 8) = param_3;
  lVar1 = param_2;
  FUN_1072d13c0();
  *(long *)(param_2 + 0x10) = lVar1;
  return param_2;
}



/* Entry: 1072d1398; end: 1072d13bf;  */

long FUN_1072d1398(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1072d13c0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1072d13c0; end: 1072d13ef;  */

void FUN_1072d13c0(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_11099bf80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072d13f0; end: 1072d13f3;  */

void FUN_1072d13f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099bf80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072d13f4; end: 1072d1407;  */

void FUN_1072d13f4(void)

{
  func_0x0001072d1414();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d1408; end: 1072d1437;  */

void FUN_1072d1408(long param_1)

{
  func_0x0001072745e4(param_1 + 0x18);
  func_0x00010726e008();
  return;
}



/* Entry: 1072d1438; end: 1072d1463;  */

undefined1  [16] FUN_1072d1438(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_1072d1464(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1072d1464; end: 1072d14d3;  */

void FUN_1072d1464(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x70;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 1072d14d4; end: 1072d1517;  */

undefined8 * FUN_1072d14d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_1072a9d70(&uStack_30);
  return param_1;
}



/* Entry: 1072d1518; end: 1072d157f;  */

void FUN_1072d1518(undefined8 *param_1)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 1072d1580; end: 1072d164f;  */

undefined1  [16] FUN_1072d1580(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x19;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  uint6 uVar10;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar11;
  byte bVar17;
  undefined1 auVar18 [16];
  
  func_0x0001072d2190();
  func_0x0001072d2074();
  lVar5 = 0;
  uVar6 = *unaff_x19;
  uVar7 = unaff_x19[2];
  uVar3 = uVar6 >> 0xc ^ param_1 >> 7;
  bVar1 = (byte)param_1;
  uVar10 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar3 = uVar3 & uVar7;
    uVar11 = *(undefined8 *)(uVar6 + uVar3);
    cVar12 = (char)((ulong)uVar11 >> 8);
    cVar13 = (char)((ulong)uVar11 >> 0x10);
    cVar14 = (char)((ulong)uVar11 >> 0x18);
    cVar15 = (char)((ulong)uVar11 >> 0x20);
    cVar16 = (char)((ulong)uVar11 >> 0x28);
    bVar9 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar17 == (bVar1 & 0x7f)),
                          CONCAT16(-(bVar9 == (bVar1 & 0x7f)),
                                   CONCAT15(-(cVar16 == (char)(uVar10 >> 0x28)),
                                            CONCAT14(-(cVar15 == (char)(uVar10 >> 0x20)),
                                                     CONCAT13(-(cVar14 == (char)(uVar10 >> 0x18)),
                                                              CONCAT12(-(cVar13 ==
                                                                        (char)(uVar10 >> 0x10)),
                                                                       CONCAT11(-(cVar12 ==
                                                                                 (char)(uVar10 >> 8)
                                                                                 ),-((char)uVar11 ==
                                                                                    (char)uVar10))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar4 = (ulong *)(uVar3 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar7);
      uVar2 = 0;
      func_0x0001072d14bc();
      if ((uVar2 & 1) != 0) {
        uVar11 = 0;
        goto LAB_1072d162c;
      }
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                CONCAT16(-(bVar9 == 0x80),
                                         CONCAT15(-(cVar16 == -0x80),
                                                  CONCAT14(-(cVar15 == -0x80),
                                                           CONCAT13(-(cVar14 == -0x80),
                                                                    CONCAT12(-(cVar13 == -0x80),
                                                                             CONCAT11(-(cVar12 ==
                                                                                       -0x80),-((
                                                  char)uVar11 == -0x80)))))))),1);
    if ((bVar9 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    uVar3 = lVar5 + uVar3;
  }
  func_0x0001072a9900();
  uVar11 = 1;
  puVar4 = unaff_x19;
LAB_1072d162c:
  auVar18._8_8_ = uVar11;
  auVar18._0_8_ = puVar4;
  return auVar18;
}



/* Entry: 1072d1650; end: 1072d16ff;  */

long FUN_1072d1650(long param_1)

{
  func_0x000104c2f714(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 1072d1700; end: 1072d1723;  */

void FUN_1072d1700(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1072d1724(&uStack_11,param_1);
  return;
}



/* Entry: 1072d1724; end: 1072d1793;  */

undefined8 * FUN_1072d1724(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x0001072d208c();
  func_0x0001072d2130();
  puVar1 = puStack_30;
  FUN_1072d1794(puStack_30,param_3);
  *param_1 = (long)(puStack_30 + 3);
  param_1[1] = (long)puStack_30;
  func_0x0001072d2128();
  func_0x0001072d2020(extraout_x8);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001072d2128();
  func_0x0001072d206c();
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_11099bf80;
  puVar1[1] = 0;
  FUN_1072d17dc(puVar1 + 3);
  return puVar1;
}



/* Entry: 1072d1794; end: 1072d17db;  */

undefined8 * FUN_1072d1794(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11099bf80;
  param_1[1] = 0;
  FUN_1072d17dc(param_1 + 3);
  return param_1;
}



/* Entry: 1072d17dc; end: 1072d17f3;  */

void FUN_1072d17dc(long param_1)

{
  FUN_10726fe1c();
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1072d17f4; end: 1072d1857;  */

long FUN_1072d17f4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001072d1830();
    lVar2 = uVar1 + 0x38;
  }
  else {
    lVar2 = param_1;
    FUN_1072d1858();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x38;
}



/* Entry: 1072d1858; end: 1072d18ff;  */

long FUN_1072d1858(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_107299934(param_1,(param_1[1] - *param_1) / 0x38 + 1);
  FUN_107299afc(auStack_58,plVar1,(param_1[1] - *param_1) / 0x38,param_1 + 2);
  func_0x000104c2fe00(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x38;
  FUN_107299ac0(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x000107299bdc(auStack_58);
  return lVar2;
}



/* Entry: 1072d1900; end: 1072d195b;  */

void FUN_1072d1900(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != param_2) {
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    FUN_1072d14d4(param_1,&uStack_20);
    FUN_1072a9d70(&uStack_20);
  }
  return;
}



/* Entry: 1072d195c; end: 1072d1983;  */

void FUN_1072d195c(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  FUN_1072a9f04(param_1 + 0x10);
  lVar1 = param_1;
  FUN_10726b0e4();
  if ((lVar1 == 1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
    func_0x000107274f70();
    func_0x000107275200();
    func_0x000107275208();
  }
  FUN_10726b120(param_1);
  return;
}



/* Entry: 1072d1984; end: 1072d1987;  */

undefined8 * FUN_1072d1984(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099bfd0;
  FUN_1072d199c(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 1072d1988; end: 1072d199b;  */

void FUN_1072d1988(void)

{
  func_0x0001072d0490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d199c; end: 1072d1a63;  */

long FUN_1072d199c(long param_1)

{
  func_0x0001072d19c4(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_1072d1a64(param_1,0);
  return param_1;
}



/* Entry: 1072d1a64; end: 1072d1a7b;  */

void FUN_1072d1a64(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072d1a7c; end: 1072d1e0b;  */

void FUN_1072d1a7c(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulong extraout_x8;
  long lVar7;
  ulong extraout_x9;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  uVar1 = *(uint *)(param_2 + 2);
  uVar16 = (ulong)uVar1;
  param_2[1] = uVar16;
  uVar17 = param_1[1];
  if ((uVar17 == 0) || (*(float *)(param_1 + 4) * (float)uVar17 < (float)(param_1[3] + 1))) {
    bVar4 = 2 < uVar17;
    bVar5 = uVar17 == 3;
    func_0x0001072d2148(uVar17 << 1);
    uVar15 = extraout_x8;
    if (!bVar4 || bVar5) {
      uVar15 = extraout_x9;
    }
    if (uVar15 - 1 == 0) {
      uVar15 = 2;
    }
    else if ((uVar15 & uVar15 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar17 = param_1[1];
    }
    if (uVar17 < uVar15) {
LAB_1072d1b1c:
      uVar17 = uVar15;
      FUN_1072d1fc0(uVar15);
      FUN_1072d1fa8(param_1,uVar17);
      param_1[1] = uVar15;
      lVar7 = *param_1;
      for (uVar17 = 0; uVar15 != uVar17; uVar17 = uVar17 + 1) {
        *(undefined8 *)(lVar7 + uVar17 * 8) = 0;
      }
      plVar9 = (long *)param_1[2];
      uVar17 = uVar15;
      if (plVar9 != (long *)0x0) {
        uVar11 = plVar9[1];
        uVar8 = uVar15 - 1;
        if ((uVar15 & uVar8) == 0) {
          uVar11 = uVar11 & uVar8;
        }
        else if (uVar15 <= uVar11) {
          uVar12 = 0;
          if (uVar15 != 0) {
            uVar12 = uVar11 / uVar15;
          }
          uVar11 = uVar11 - uVar12 * uVar15;
        }
        *(long **)(lVar7 + uVar11 * 8) = param_1 + 2;
        while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
          uVar12 = plVar9[1];
          if ((uVar15 & uVar8) == 0) {
            uVar12 = uVar12 & uVar8;
          }
          else if (uVar15 <= uVar12) {
            uVar2 = 0;
            if (uVar15 != 0) {
              uVar2 = uVar12 / uVar15;
            }
            uVar12 = uVar12 - uVar2 * uVar15;
          }
          if (uVar12 != uVar11) {
            plVar14 = plVar9;
            if (*(long *)(lVar7 + uVar12 * 8) == 0) {
              *(long **)(lVar7 + uVar12 * 8) = plVar10;
              uVar11 = uVar12;
            }
            else {
              do {
                plVar13 = plVar14;
                plVar14 = (long *)*plVar13;
                if (plVar14 == (long *)0x0) break;
              } while (*(int *)(plVar9 + 2) == *(int *)(plVar14 + 2));
              *plVar10 = (long)plVar14;
              *plVar13 = **(long **)(lVar7 + uVar12 * 8);
              **(long **)(lVar7 + uVar12 * 8) = (long)plVar9;
              plVar9 = plVar10;
            }
          }
        }
      }
    }
    else if (uVar15 < uVar17) {
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x0001072d20b8();
      }
      if (uVar15 <= uVar11) {
        uVar15 = uVar11;
      }
      if (uVar15 < uVar17) {
        if (uVar15 != 0) goto LAB_1072d1b1c;
        FUN_1072d1fa8(param_1,0);
        param_1[1] = 0;
        uVar17 = 0;
      }
      else {
        uVar17 = param_1[1];
      }
    }
  }
  uVar15 = uVar17 - 1;
  if ((uVar17 & uVar15) == 0) {
    uVar11 = (ulong)((int)uVar17 - 1U & uVar1);
  }
  else {
    uVar11 = uVar16;
    if (uVar17 <= uVar16) {
      uVar11 = 0;
      if (uVar17 != 0) {
        uVar11 = uVar16 / uVar17;
      }
      uVar11 = uVar16 - uVar11 * uVar17;
    }
  }
  lVar7 = *param_1;
  plVar9 = *(long **)(lVar7 + uVar11 * 8);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    bVar5 = false;
    bVar3 = 0;
    do {
      plVar10 = plVar9;
      plVar9 = (long *)*plVar10;
      if (plVar9 == (long *)0x0) break;
      uVar8 = plVar9[1];
      if ((uVar17 & uVar15) == 0) {
        uVar12 = uVar8 & uVar15;
      }
      else {
        uVar12 = uVar8;
        if (uVar17 <= uVar8) {
          uVar12 = 0;
          if (uVar17 != 0) {
            uVar12 = uVar8 / uVar17;
          }
          uVar12 = uVar8 - uVar12 * uVar17;
        }
      }
      if (uVar12 != uVar11) break;
      if (uVar8 == uVar16) {
        bVar4 = (int)plVar9[2] == (int)param_2[2];
      }
      else {
        bVar4 = false;
      }
      bVar6 = bVar4 != bVar5;
      bVar4 = (bool)(bVar3 & bVar6);
      bVar5 = (bool)(bVar5 | bVar6);
      bVar3 = bVar3 | bVar6;
    } while (!bVar4);
  }
  uVar16 = param_2[1];
  if ((uVar17 & uVar15) == 0) {
    uVar16 = uVar15 & uVar16;
    if (plVar10 == (long *)0x0) goto LAB_1072d1d60;
LAB_1072d1d24:
    *param_2 = *plVar10;
    *plVar10 = (long)param_2;
    if (*param_2 == 0) goto LAB_1072d1db4;
    uVar11 = *(ulong *)(*param_2 + 8);
    if ((uVar17 & uVar15) == 0) {
      uVar11 = uVar11 & uVar15;
    }
    else if (uVar17 <= uVar11) {
      uVar15 = 0;
      if (uVar17 != 0) {
        uVar15 = uVar11 / uVar17;
      }
      uVar11 = uVar11 - uVar15 * uVar17;
    }
    if (uVar11 == uVar16) goto LAB_1072d1db4;
  }
  else {
    if (uVar17 <= uVar16) {
      uVar11 = 0;
      if (uVar17 != 0) {
        uVar11 = uVar16 / uVar17;
      }
      uVar16 = uVar16 - uVar11 * uVar17;
    }
    if (plVar10 != (long *)0x0) goto LAB_1072d1d24;
LAB_1072d1d60:
    plVar9 = param_1 + 2;
    *param_2 = *plVar9;
    *plVar9 = (long)param_2;
    *(long **)(lVar7 + uVar16 * 8) = plVar9;
    if (*param_2 == 0) goto LAB_1072d1db4;
    uVar11 = *(ulong *)(*param_2 + 8);
    if ((uVar17 & uVar15) == 0) {
      uVar11 = uVar11 & uVar15;
    }
    else if (uVar17 <= uVar11) {
      uVar16 = 0;
      if (uVar17 != 0) {
        uVar16 = uVar11 / uVar17;
      }
      uVar11 = uVar11 - uVar16 * uVar17;
    }
  }
  *(long **)(lVar7 + uVar11 * 8) = param_2;
LAB_1072d1db4:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1072d1e0c; end: 1072d1f4f;  */

long * FUN_1072d1e0c(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long *plVar5;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long alStack_60 [3];
  long *plStack_48;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  plVar4 = alStack_60;
  plVar3 = alStack_60;
  plVar2 = alStack_60;
  func_0x0001072d208c();
  uStack_28 = extraout_x8;
  FUN_1072d1f50(alStack_60);
  uVar1 = param_1 == alStack_60;
  if (!(bool)uVar1) {
    plVar5 = (long *)param_1[3];
    if (plStack_48 == alStack_60) {
      uVar1 = plVar5 == param_1;
      if ((bool)uVar1) {
        func_0x0001072d215c();
        (*extraout_x8_00)();
        func_0x0001072d203c(plStack_48);
        plStack_48 = (long *)0x0;
        func_0x0001072d215c(param_1[3]);
        (*extraout_x8_01)();
        func_0x0001072d203c(param_1[3]);
        param_1[3] = 0;
        plStack_48 = alStack_60;
        func_0x0001072d20d8(*(undefined8 *)(alStack_40[0] + 0x18),alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        func_0x0001072d215c();
        func_0x0001072d20d8();
        func_0x0001072d203c(plStack_48);
        plStack_48 = (long *)param_1[3];
        plVar3 = param_2;
      }
      param_1[3] = (long)param_1;
      param_2 = plVar3;
    }
    else {
      uVar1 = plVar5 == param_1;
      if ((bool)uVar1) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
        func_0x0001072d203c(param_1[3]);
        param_1[3] = (long)plStack_48;
        param_2 = plVar4;
        plStack_48 = alStack_60;
      }
      else {
        param_1[3] = (long)plStack_48;
        plStack_48 = plVar5;
      }
    }
  }
  func_0x0001072d19fc();
  func_0x0001072d2020(uStack_28);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  plVar3 = (long *)param_2[3];
  if (plVar3 == (long *)0x0) {
    plVar2[3] = 0;
  }
  else if (plVar3 == param_2) {
    plVar2[3] = (long)plVar2;
    func_0x0001072d215c(param_2[3]);
    func_0x0001072d20d8();
  }
  else {
    (**(code **)(*plVar3 + 0x10))();
    plVar2[3] = (long)plVar3;
  }
  return plVar2;
}



/* Entry: 1072d1f50; end: 1072d1fa7;  */

long FUN_1072d1f50(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x0001072d215c(param_2[3]);
    func_0x0001072d20d8();
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 1072d1fa8; end: 1072d1fbf;  */

void FUN_1072d1fa8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072d1fc0; end: 1072d1fdb;  */

long * FUN_1072d1fc0(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    param_1 = (long *)((long)param_1 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1);
    return param_1;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001072d19fc(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1072d1fdc; end: 1072d201f;  */

long * FUN_1072d1fdc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001072d19fc(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1072d2020; end: 1072d2203;  */

void FUN_1072d2020(void)

{
  return;
}



/* Entry: 1072d2204; end: 1072d2247;  */

undefined8 * FUN_1072d2204(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c000;
  func_0x0001005d0538(param_1 + 9);
  func_0x0001005d0538(param_1 + 4);
  func_0x00010726eeb8(param_1 + 2);
  return param_1;
}



/* Entry: 1072d2248; end: 1072d224b;  */

undefined8 * FUN_1072d2248(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c000;
  func_0x0001005d0538(param_1 + 9);
  func_0x0001005d0538(param_1 + 4);
  func_0x00010726eeb8(param_1 + 2);
  return param_1;
}



/* Entry: 1072d224c; end: 1072d225f;  */

void FUN_1072d224c(void)

{
  FUN_1072d2204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d2260; end: 1072d226b;  */

/* WARNING: Removing unreachable block (ram,0x0001072d2514) */
/* WARNING: Removing unreachable block (ram,0x0001072d2518) */
/* WARNING: Removing unreachable block (ram,0x0001072d251c) */
/* WARNING: Removing unreachable block (ram,0x0001072d2530) */

void FUN_1072d2260(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x21;
  long lVar4;
  undefined8 unaff_x22;
  undefined8 *puVar5;
  undefined8 unaff_x23;
  undefined8 *puVar6;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = 0;
  uVar8 = 0x3f800000;
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    func_0x0001072d3154();
    *(undefined8 *)(puVar1 + -0x48) = extraout_x8;
    *(undefined4 *)(puVar1 + -0x2f0) = uVar8;
    *(undefined4 *)(puVar1 + -0x2ec) = uVar7;
    func_0x000107277eec(puVar1 + -0x300);
    puVar5 = (undefined8 *)(param_2 + 0x10);
    puVar6 = puVar5;
    while (puVar6 = (undefined8 *)*puVar6, puVar6 != (undefined8 *)0x0) {
      FUN_107262e9c(puVar1 + -0x80,puVar6 + 2);
      FUN_107277488(puVar1 + -0x278,puVar1 + -0x80);
      func_0x0001072d312c();
      FUN_1072d2ad0(puVar1 + -0x300,puVar1 + -0x278);
      func_0x0001072d314c();
    }
    *(undefined8 *)(puVar1 + -0x318) = 0;
    *(undefined8 *)(puVar1 + -0x310) = 0;
    puVar6 = (undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(puVar1 + -0x308) = 0;
    while (puVar6 = (undefined8 *)*puVar6, puVar6 != (undefined8 *)0x0) {
      puVar3 = param_2;
      FUN_1072d2e68(param_2,puVar6 + 2);
      if (((ulong)puVar3 & 1) == 0) {
        FUN_1072d2e84(puVar1 + -0x278,puVar6 + 2);
        FUN_1072999ec(puVar1 + -0x318,puVar1 + -0x278);
        func_0x0001072d3194();
      }
    }
    func_0x000100060964(puVar1 + -0x80,&UNK_10f4092b1);
    func_0x000104c318bc(puVar1 + -0x278,puVar1 + -0x80);
    FUN_1072d2ec4(puVar1 + -0x238,puVar1 + -0x300);
    func_0x000100060964(puVar1 + -0x2b0,&DAT_10f4092cb);
    FUN_1072d2ee0(puVar1 + -0x1d0,puVar1 + -0x2b0,puVar1 + -0x2ec);
    func_0x000100060964(puVar1 + -0x2e8,&DAT_10f4092e3);
    FUN_1072d2ee0(puVar1 + -0x128,puVar1 + -0x2e8,puVar1 + -0x2f0);
    FUN_1072965a0(puVar1 + -0x340,puVar1 + -0x278,3);
    func_0x00010786975c(puVar1 + -0x330,puVar1 + -0x340);
    FUN_10726b264(puVar1 + -0x340);
    lVar4 = 0x150;
    do {
      func_0x00010729651c(puVar1 + lVar4 + -0x278);
      lVar4 = lVar4 + -0xa8;
      uVar2 = lVar4 == -0xa8;
    } while (!(bool)uVar2);
    func_0x000104c2f714(puVar1 + -0x2e8);
    func_0x000104c2f714(puVar1 + -0x2b0);
    func_0x0001072d312c();
    unaff_x21 = puVar1 + -0x278;
    unaff_x23 = 1;
    while (puVar5 = (undefined8 *)*puVar5, puVar5 != (undefined8 *)0x0) {
      FUN_1072d2e84(puVar1 + -0x80,puVar5 + 2);
      puVar1[-0x270] = 1;
      *(undefined4 *)(puVar1 + -0x210) = 1;
      func_0x000107869848(puVar1 + -0x330,puVar1 + -0x80,puVar1 + -0x278);
      func_0x0001072d314c();
      func_0x0001072d312c();
    }
    FUN_10729c30c(param_1 + 0x20,param_2);
    param_2 = puVar1 + -0x330;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x40))
              (*(long **)(param_1 + 0x10),param_2,puVar1 + -0x318);
    FUN_10726b264(puVar1 + -0x330);
    FUN_10726e078(puVar1 + -0x318);
    unaff_x19 = puVar1 + -0x300;
    FUN_10726b188();
    func_0x0001072d30fc(*(undefined8 *)(puVar1 + -0x48));
    if ((bool)uVar2) break;
    ___stack_chk_fail();
    lVar4 = -0x1f8;
    puVar3 = unaff_x21;
    do {
      func_0x00010729651c(puVar3);
      puVar3 = puVar3 + -0xa8;
      lVar4 = lVar4 + 0xa8;
    } while (lVar4 != 0);
    unaff_x20 = 1;
    func_0x000104c2f714(puVar1 + -0x2e8);
    func_0x000104c2f714(puVar1 + -0x2b0);
    func_0x0001072d312c();
    FUN_10726e078(puVar1 + -0x318);
    param_1 = puVar1 + -0x300;
    FUN_10726b188();
    unaff_x30 = FUN_1072d259c;
    func_0x0001072d30f4();
    uVar7 = 0x3f800000;
    uVar8 = 0;
    unaff_x22 = 0;
    puVar1 = puVar1 + -0x340;
  }
  return;
}



/* Entry: 1072d226c; end: 1072d259b;  */

/* WARNING: Removing unreachable block (ram,0x0001072d2514) */
/* WARNING: Removing unreachable block (ram,0x0001072d2518) */
/* WARNING: Removing unreachable block (ram,0x0001072d251c) */
/* WARNING: Removing unreachable block (ram,0x0001072d2530) */

void FUN_1072d226c(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x21;
  long lVar3;
  undefined8 unaff_x22;
  undefined8 *puVar4;
  undefined8 unaff_x23;
  undefined8 *puVar5;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072d3154();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    *(undefined4 *)((long)register0x00000008 + -0x2f0) = param_2;
    *(undefined4 *)((long)register0x00000008 + -0x2ec) = param_1;
    func_0x000107277eec((undefined1 *)((long)register0x00000008 + -0x300));
    puVar4 = (undefined8 *)(param_4 + 0x10);
    puVar5 = puVar4;
    while (puVar5 = (undefined8 *)*puVar5, puVar5 != (undefined8 *)0x0) {
      FUN_107262e9c((undefined1 *)((long)register0x00000008 + -0x80),puVar5 + 2);
      FUN_107277488((undefined1 *)((long)register0x00000008 + -0x278),
                    (undefined1 *)((long)register0x00000008 + -0x80));
      func_0x0001072d312c();
      FUN_1072d2ad0((undefined1 *)((long)register0x00000008 + -0x300),
                    (undefined1 *)((long)register0x00000008 + -0x278));
      func_0x0001072d314c();
    }
    *(undefined8 *)((long)register0x00000008 + -0x318) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x310) = 0;
    puVar5 = (undefined8 *)(param_3 + 0x30);
    *(undefined8 *)((long)register0x00000008 + -0x308) = 0;
    while (puVar5 = (undefined8 *)*puVar5, puVar5 != (undefined8 *)0x0) {
      puVar2 = param_4;
      FUN_1072d2e68(param_4,puVar5 + 2);
      if (((ulong)puVar2 & 1) == 0) {
        FUN_1072d2e84((undefined1 *)((long)register0x00000008 + -0x278),puVar5 + 2);
        FUN_1072999ec((undefined1 *)((long)register0x00000008 + -0x318),
                      (undefined1 *)((long)register0x00000008 + -0x278));
        func_0x0001072d3194();
      }
    }
    func_0x000100060964((undefined1 *)((long)register0x00000008 + -0x80),&UNK_10f4092b1);
    func_0x000104c318bc((undefined1 *)((long)register0x00000008 + -0x278),
                        (undefined1 *)((long)register0x00000008 + -0x80));
    FUN_1072d2ec4((undefined1 *)((long)register0x00000008 + -0x238),
                  (undefined1 *)((long)register0x00000008 + -0x300));
    func_0x000100060964((undefined1 *)((long)register0x00000008 + -0x2b0),&DAT_10f4092cb);
    FUN_1072d2ee0((undefined1 *)((long)register0x00000008 + -0x1d0),
                  (undefined1 *)((long)register0x00000008 + -0x2b0),
                  (undefined1 *)((long)register0x00000008 + -0x2ec));
    func_0x000100060964((undefined1 *)((long)register0x00000008 + -0x2e8),&DAT_10f4092e3);
    FUN_1072d2ee0((undefined1 *)((long)register0x00000008 + -0x128),
                  (undefined1 *)((long)register0x00000008 + -0x2e8),
                  (undefined1 *)((long)register0x00000008 + -0x2f0));
    FUN_1072965a0((undefined1 *)((long)register0x00000008 + -0x340),
                  (undefined1 *)((long)register0x00000008 + -0x278),3);
    func_0x00010786975c((undefined1 *)((long)register0x00000008 + -0x330),
                        (undefined1 *)((long)register0x00000008 + -0x340));
    FUN_10726b264((undefined1 *)((long)register0x00000008 + -0x340));
    lVar3 = 0x150;
    do {
      func_0x00010729651c((undefined1 *)((long)register0x00000008 + lVar3 + -0x278));
      lVar3 = lVar3 + -0xa8;
      uVar1 = lVar3 == -0xa8;
    } while (!(bool)uVar1);
    func_0x000104c2f714((undefined1 *)((long)register0x00000008 + -0x2e8));
    func_0x000104c2f714((undefined1 *)((long)register0x00000008 + -0x2b0));
    func_0x0001072d312c();
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x278);
    unaff_x23 = 1;
    while (puVar4 = (undefined8 *)*puVar4, puVar4 != (undefined8 *)0x0) {
      FUN_1072d2e84((undefined1 *)((long)register0x00000008 + -0x80),puVar4 + 2);
      *(undefined1 *)((long)register0x00000008 + -0x270) = 1;
      *(undefined4 *)((long)register0x00000008 + -0x210) = 1;
      func_0x000107869848((undefined1 *)((long)register0x00000008 + -0x330),
                          (undefined1 *)((long)register0x00000008 + -0x80),
                          (undefined1 *)((long)register0x00000008 + -0x278));
      func_0x0001072d314c();
      func_0x0001072d312c();
    }
    FUN_10729c30c(param_3 + 0x20,param_4);
    param_4 = (undefined1 *)((long)register0x00000008 + -0x330);
    (**(code **)(**(long **)(param_3 + 0x10) + 0x40))
              (*(long **)(param_3 + 0x10),param_4,(undefined1 *)((long)register0x00000008 + -0x318))
    ;
    FUN_10726b264((undefined1 *)((long)register0x00000008 + -0x330));
    FUN_10726e078((undefined1 *)((long)register0x00000008 + -0x318));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x300);
    FUN_10726b188();
    func_0x0001072d30fc(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    lVar3 = -0x1f8;
    puVar2 = unaff_x21;
    do {
      func_0x00010729651c(puVar2);
      puVar2 = puVar2 + -0xa8;
      lVar3 = lVar3 + 0xa8;
    } while (lVar3 != 0);
    unaff_x20 = 1;
    func_0x000104c2f714((undefined1 *)((long)register0x00000008 + -0x2e8));
    func_0x000104c2f714((undefined1 *)((long)register0x00000008 + -0x2b0));
    func_0x0001072d312c();
    FUN_10726e078((undefined1 *)((long)register0x00000008 + -0x318));
    param_3 = (undefined1 *)((long)register0x00000008 + -0x300);
    FUN_10726b188();
    unaff_x30 = FUN_1072d259c;
    func_0x0001072d30f4();
    param_1 = 0x3f800000;
    param_2 = 0;
    unaff_x22 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x340);
  }
  return;
}



/* Entry: 1072d259c; end: 1072d25a7;  */

/* WARNING: Removing unreachable block (ram,0x0001072d2514) */
/* WARNING: Removing unreachable block (ram,0x0001072d2518) */
/* WARNING: Removing unreachable block (ram,0x0001072d251c) */
/* WARNING: Removing unreachable block (ram,0x0001072d2530) */

void FUN_1072d259c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  long lVar3;
  undefined1 *unaff_x21;
  undefined8 *puVar4;
  undefined8 unaff_x22;
  undefined8 *puVar5;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar6;
  undefined4 uVar7;
  
  while( true ) {
    uVar6 = 0x3f800000;
    uVar7 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072d3154();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    *(undefined4 *)((long)register0x00000008 + -0x2f0) = uVar7;
    *(undefined4 *)((long)register0x00000008 + -0x2ec) = uVar6;
    func_0x000107277eec((undefined1 *)((long)register0x00000008 + -0x300));
    puVar4 = (undefined8 *)(param_2 + 0x10);
    puVar5 = puVar4;
    while (puVar5 = (undefined8 *)*puVar5, puVar5 != (undefined8 *)0x0) {
      FUN_107262e9c((undefined1 *)((long)register0x00000008 + -0x80),puVar5 + 2);
      FUN_107277488((undefined1 *)((long)register0x00000008 + -0x278),
                    (undefined1 *)((long)register0x00000008 + -0x80));
      func_0x0001072d312c();
      FUN_1072d2ad0((undefined1 *)((long)register0x00000008 + -0x300),
                    (undefined1 *)((long)register0x00000008 + -0x278));
      func_0x0001072d314c();
    }
    *(undefined8 *)((long)register0x00000008 + -0x318) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x310) = 0;
    puVar5 = (undefined8 *)(param_1 + 0x30);
    *(undefined8 *)((long)register0x00000008 + -0x308) = 0;
    while (puVar5 = (undefined8 *)*puVar5, puVar5 != (undefined8 *)0x0) {
      puVar2 = param_2;
      FUN_1072d2e68(param_2,puVar5 + 2);
      if (((ulong)puVar2 & 1) == 0) {
        FUN_1072d2e84((undefined1 *)((long)register0x00000008 + -0x278),puVar5 + 2);
        FUN_1072999ec((undefined1 *)((long)register0x00000008 + -0x318),
                      (undefined1 *)((long)register0x00000008 + -0x278));
        func_0x0001072d3194();
      }
    }
    func_0x000100060964((undefined1 *)((long)register0x00000008 + -0x80),&UNK_10f4092b1);
    func_0x000104c318bc((undefined1 *)((long)register0x00000008 + -0x278),
                        (undefined1 *)((long)register0x00000008 + -0x80));
    FUN_1072d2ec4((undefined1 *)((long)register0x00000008 + -0x238),
                  (undefined1 *)((long)register0x00000008 + -0x300));
    func_0x000100060964((undefined1 *)((long)register0x00000008 + -0x2b0),&DAT_10f4092cb);
    FUN_1072d2ee0((undefined1 *)((long)register0x00000008 + -0x1d0),
                  (undefined1 *)((long)register0x00000008 + -0x2b0),
                  (undefined1 *)((long)register0x00000008 + -0x2ec));
    func_0x000100060964((undefined1 *)((long)register0x00000008 + -0x2e8),&DAT_10f4092e3);
    FUN_1072d2ee0((undefined1 *)((long)register0x00000008 + -0x128),
                  (undefined1 *)((long)register0x00000008 + -0x2e8),
                  (undefined1 *)((long)register0x00000008 + -0x2f0));
    FUN_1072965a0((undefined1 *)((long)register0x00000008 + -0x340),
                  (undefined1 *)((long)register0x00000008 + -0x278),3);
    func_0x00010786975c((undefined1 *)((long)register0x00000008 + -0x330),
                        (undefined1 *)((long)register0x00000008 + -0x340));
    FUN_10726b264((undefined1 *)((long)register0x00000008 + -0x340));
    lVar3 = 0x150;
    do {
      func_0x00010729651c((undefined1 *)((long)register0x00000008 + lVar3 + -0x278));
      lVar3 = lVar3 + -0xa8;
      uVar1 = lVar3 == -0xa8;
    } while (!(bool)uVar1);
    func_0x000104c2f714((undefined1 *)((long)register0x00000008 + -0x2e8));
    func_0x000104c2f714((undefined1 *)((long)register0x00000008 + -0x2b0));
    func_0x0001072d312c();
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x278);
    unaff_x23 = 1;
    while (puVar4 = (undefined8 *)*puVar4, puVar4 != (undefined8 *)0x0) {
      FUN_1072d2e84((undefined1 *)((long)register0x00000008 + -0x80),puVar4 + 2);
      *(undefined1 *)((long)register0x00000008 + -0x270) = 1;
      *(undefined4 *)((long)register0x00000008 + -0x210) = 1;
      func_0x000107869848((undefined1 *)((long)register0x00000008 + -0x330),
                          (undefined1 *)((long)register0x00000008 + -0x80),
                          (undefined1 *)((long)register0x00000008 + -0x278));
      func_0x0001072d314c();
      func_0x0001072d312c();
    }
    FUN_10729c30c(param_1 + 0x20,param_2);
    param_2 = (undefined1 *)((long)register0x00000008 + -0x330);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x40))
              (*(long **)(param_1 + 0x10),param_2,(undefined1 *)((long)register0x00000008 + -0x318))
    ;
    FUN_10726b264((undefined1 *)((long)register0x00000008 + -0x330));
    FUN_10726e078((undefined1 *)((long)register0x00000008 + -0x318));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x300);
    FUN_10726b188();
    func_0x0001072d30fc(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    lVar3 = -0x1f8;
    puVar2 = unaff_x21;
    do {
      func_0x00010729651c(puVar2);
      puVar2 = puVar2 + -0xa8;
      lVar3 = lVar3 + 0xa8;
    } while (lVar3 != 0);
    func_0x000104c2f714((undefined1 *)((long)register0x00000008 + -0x2e8));
    func_0x000104c2f714((undefined1 *)((long)register0x00000008 + -0x2b0));
    func_0x0001072d312c();
    unaff_x20 = 1;
    FUN_10726e078((undefined1 *)((long)register0x00000008 + -0x318));
    param_1 = (undefined1 *)((long)register0x00000008 + -0x300);
    FUN_10726b188();
    unaff_x30 = FUN_1072d259c;
    func_0x0001072d30f4();
    unaff_x22 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x340);
  }
  return;
}



/* Entry: 1072d25a8; end: 1072d25e7;  */

void FUN_1072d25a8(undefined8 param_1)

{
  undefined1 auStack_50 [48];
  
  func_0x0001072d31a8();
  FUN_1072d226c(0x3f800000,0,param_1,auStack_50);
  func_0x0001072d3134();
  return;
}



/* Entry: 1072d25e8; end: 1072d2627;  */

void FUN_1072d25e8(undefined8 param_1)

{
  undefined1 auStack_50 [48];
  
  func_0x0001072d31a8();
  FUN_1072d226c(0,0x3f800000,param_1,auStack_50);
  func_0x0001072d3134();
  return;
}



/* Entry: 1072d2628; end: 1072d2973;  */

long * FUN_1072d2628(long param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined1 uStack_274;
  undefined1 uStack_273;
  undefined1 uStack_272;
  undefined1 uStack_271;
  undefined1 auStack_270 [32];
  undefined1 auStack_250 [16];
  long alStack_240 [5];
  undefined1 auStack_218 [56];
  long lStack_1e0;
  undefined1 auStack_1d8 [56];
  undefined1 auStack_1a0 [104];
  undefined1 auStack_138 [168];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_58;
  
  plVar5 = param_2;
  func_0x0001072d3154();
  uStack_58 = extraout_x8;
  FUN_1072d306c(alStack_240,*plVar5,param_2[1]);
  func_0x000107277eec(auStack_250);
  lVar1 = param_2[1];
  for (lVar6 = *param_2; lVar6 != lVar1; lVar6 = lVar6 + 0x18) {
    FUN_107262e9c(&uStack_90,lVar6);
    FUN_107277488(&lStack_1e0,&uStack_90);
    func_0x0001072d318c();
    FUN_1072d2ad0(auStack_250,&lStack_1e0);
    FUN_10726af18(auStack_1d8);
  }
  func_0x000100060964(&uStack_90,&DAT_10f4092fd);
  func_0x000104c318bc(&lStack_1e0,&uStack_90);
  FUN_1072d2ec4(auStack_1a0,auStack_250);
  func_0x000100060964(auStack_218,&DAT_10f409318);
  uStack_271 = *param_2 != param_2[1];
  FUN_107277564(auStack_138,auStack_218,&uStack_271);
  FUN_1072d2f10(auStack_270,&lStack_1e0,2,0,&uStack_272,&uStack_273,&uStack_274);
  lVar6 = 0xa8;
  do {
    func_0x00010726aef4((long)&lStack_1e0 + lVar6);
    lVar6 = lVar6 + -0xa8;
  } while (lVar6 != -0xa8);
  func_0x000104c2f714(auStack_218);
  func_0x0001072d318c();
  lVar1 = param_2[1];
  for (lVar6 = *param_2; uVar2 = lVar6 == lVar1, !(bool)uVar2; lVar6 = lVar6 + 0x18) {
    FUN_1072d302c(&lStack_1e0,lVar6);
    auStack_218[0] = 1;
    FUN_1072774cc(&uStack_90,auStack_270,&lStack_1e0,auStack_218);
    func_0x0001072d3124();
  }
  uStack_90 = 0;
  uStack_88 = 0;
  plVar5 = (long *)(param_1 + 0x58);
  uStack_80 = 0;
  while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
    plVar4 = alStack_240;
    FUN_1072d2e68(plVar4,plVar5 + 2);
    if (((ulong)plVar4 & 1) == 0) {
      FUN_1072d302c(&lStack_1e0,plVar5 + 2);
      FUN_1072999ec(&uStack_90,&lStack_1e0);
      func_0x0001072d3124();
    }
  }
  func_0x0001005d0464(param_1 + 0x48,alStack_240);
  plVar4 = *(long **)(param_1 + 0x10);
  func_0x0001078697d4(&lStack_1e0,auStack_270);
  plVar5 = &lStack_1e0;
  (**(code **)(*plVar4 + 0x40))(plVar4,plVar5,&uStack_90);
  FUN_10726b264(&lStack_1e0);
  FUN_10726e078(&uStack_90);
  FUN_10726ae88(auStack_270);
  FUN_10726b188(auStack_250);
  plVar4 = alStack_240;
  func_0x0001005d0538();
  func_0x0001072d30fc(uStack_58);
  if ((bool)uVar2) {
    return plVar4;
  }
  ___stack_chk_fail();
  FUN_10726b264(&lStack_1e0);
  FUN_10726e078(&uStack_90);
  FUN_10726ae88(auStack_270);
  FUN_10726b188(auStack_250);
  plVar4 = alStack_240;
  func_0x0001005d0538();
  func_0x0001072d30f4();
  if ((ulong)plVar5 >> 0x3d == 0) {
    plVar3 = (long *)(plVar4[2] - *plVar4 >> 2);
    if (plVar3 <= plVar5) {
      plVar3 = plVar5;
    }
    if (0x7ffffffffffffff7 < (ulong)(plVar4[2] - *plVar4)) {
      plVar3 = (long *)0x1fffffffffffffff;
    }
    return plVar3;
  }
  FUN_1072d2a2c();
  plVar7 = (long *)(plVar5[1] - (plVar4[1] - *plVar4));
  plVar3 = plVar7;
  _memcpy(plVar7);
  plVar5[1] = (long)plVar7;
  lVar6 = *plVar4;
  plVar4[1] = lVar6;
  *plVar4 = plVar5[1];
  plVar5[1] = lVar6;
  lVar6 = plVar4[1];
  plVar4[1] = plVar5[2];
  plVar5[2] = lVar6;
  lVar6 = plVar4[2];
  plVar4[2] = plVar5[3];
  plVar5[3] = lVar6;
  *plVar5 = plVar5[1];
  return plVar3;
}



/* Entry: 1072d2974; end: 1072d29b3;  */

undefined8 * FUN_1072d2974(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 2);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0x1fffffffffffffff;
    }
    return puVar2;
  }
  FUN_1072d2a2c();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return puVar2;
}



/* Entry: 1072d29b4; end: 1072d2a2b;  */

void FUN_1072d29b4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1072d2a2c; end: 1072d2a3f;  */

void FUN_1072d2a2c(void)

{
  func_0x000104bd47e8(&UNK_10f409296);
  FUN_1072d2a64();
  return;
}



/* Entry: 1072d2a40; end: 1072d2a63;  */

void FUN_1072d2a40(void)

{
  FUN_1072d2a64();
  return;
}



/* Entry: 1072d2a64; end: 1072d2a7f;  */

long * FUN_1072d2a64(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1072d2aac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072d2a80; end: 1072d2aab;  */

long * FUN_1072d2a80(long *param_1)

{
  FUN_1072d2aac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072d2aac; end: 1072d2acf;  */

void FUN_1072d2aac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1072d2ad0; end: 1072d2b4b;  */

long FUN_1072d2ad0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  func_0x0001072d2afc();
  lVar3 = *param_1;
  uVar1 = *(ulong *)(lVar3 + 8);
  if (uVar1 < *(ulong *)(lVar3 + 0x10)) {
    func_0x0001072776a4();
    lVar2 = uVar1 + 0x70;
  }
  else {
    lVar2 = lVar3;
    FUN_1072776d4(lVar3,param_2);
  }
  *(long *)(lVar3 + 8) = lVar2;
  return lVar2 + -0x70;
}



/* Entry: 1072d2b4c; end: 1072d2b6f;  */

void FUN_1072d2b4c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1072d2b70(&uStack_11,param_1);
  return;
}



/* Entry: 1072d2b70; end: 1072d2bf7;  */

undefined8 * FUN_1072d2b70(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 auStack_40 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x0001072d3154();
  uStack_28 = extraout_x8;
  FUN_107277bf4(auStack_40,1);
  FUN_1072d2bf8(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000107277c84();
  func_0x0001072d30fc(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107277c84();
  func_0x0001072d30f4();
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110996b80;
  puVar3[1] = 0;
  FUN_1072d2c3c(puVar3 + 3);
  return puVar3;
}



/* Entry: 1072d2bf8; end: 1072d2c3b;  */

undefined8 * FUN_1072d2bf8(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110996b80;
  param_1[1] = 0;
  FUN_1072d2c3c(param_1 + 3);
  return param_1;
}



/* Entry: 1072d2c3c; end: 1072d2c53;  */

void FUN_1072d2c3c(long param_1)

{
  FUN_1072d2c54();
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1072d2c54; end: 1072d2c8f;  */

undefined8 * FUN_1072d2c54(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1072d2c90(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x70);
  return param_1;
}



/* Entry: 1072d2c90; end: 1072d2d0f;  */

void FUN_1072d2c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_1072d2d10(param_1,param_4);
    FUN_1072d2d5c(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_1072d2e3c(&uStack_40);
  return;
}



/* Entry: 1072d2d10; end: 1072d2d5b;  */

void FUN_1072d2d10(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x24924924924924a) {
    plVar1 = param_1 + 2;
    func_0x0001072778a4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0xe);
  }
  else {
    FUN_10727784c();
    plVar1 = param_1 + 2;
    FUN_1072d2d90();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 1072d2d5c; end: 1072d2d8f;  */

void FUN_1072d2d5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_1072d2d90();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1072d2d90; end: 1072d2da3;  */

void FUN_1072d2d90(void)

{
  FUN_1072d2da4();
  return;
}



/* Entry: 1072d2da4; end: 1072d2e3b;  */

long FUN_1072d2da4(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x70) {
    FUN_1072786d8(param_4 + 8,param_2 + 8);
    param_4 = lStack_38 + 0x70;
  }
  uStack_48 = 1;
  FUN_1072779b4(&uStack_60);
  return param_4;
}



/* Entry: 1072d2e3c; end: 1072d2e67;  */

long FUN_1072d2e3c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000107277da4(param_1);
  }
  return param_1;
}



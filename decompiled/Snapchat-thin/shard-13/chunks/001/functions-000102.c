/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a102018; end: 10a102053;  */

void FUN_10a102018(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x70);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x70);
  return;
}



/* Entry: 10a102054; end: 10a1020bb;  */

undefined8 * FUN_10a102054(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0xe);
  puVar1 = param_1;
  (**(code **)*param_1)();
  if (((ulong)puVar1 & 1) != 0) {
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + 1;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0xe);
  return puVar1;
}



/* Entry: 10a1020bc; end: 10a1020f7;  */

void FUN_10a1020bc(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x70);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  __ZNSt3__118condition_variable10notify_allEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x70);
  return;
}



/* Entry: 10a1020f8; end: 10a10215b;  */

undefined8 FUN_10a1020f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10a102054();
  if ((int)uVar1 != 0) {
    (*(code *)*param_2)(param_2);
    FUN_10a1020bc(param_1);
  }
  return uVar1;
}



/* Entry: 10a10215c; end: 10a102183;  */

long FUN_10a10215c(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0xe0);
  return param_1;
}



/* Entry: 10a102184; end: 10a1025f3;  */

long FUN_10a102184(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined *puStack_178;
  undefined **appuStack_170 [7];
  byte bStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined *puStack_128;
  undefined **appuStack_120 [7];
  byte bStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined *puStack_d8;
  undefined **appuStack_d0 [7];
  byte bStack_98;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = 0x1132ffe60;
  if (lRam00000001132fff38 != 0) goto LAB_10a10249c;
  if ((bRam00000001137ea530 & 1) == 0) goto LAB_10a1024d4;
  do {
    __ZNSt3__15mutex4lockEv(0x1132ffe20);
    if (lRam00000001132fff38 == 0) {
      uStack_e0 = 0;
      bStack_98 = 0;
      uStack_130 = 0;
      bStack_e8 = 0;
      uStack_180 = 0;
      bStack_138 = 0;
      ppuVar3 = (undefined8 **)0x1132fff40;
      __ZNSt3__15mutex4lockEv(0x1132fff40);
      FUN_109d1ba5c();
      puStack_90 = (undefined8 *)&UNK_10f63cbc2;
      puStack_88 = (undefined *)0x33;
      if (lRam00000001132fff38 != 0) {
        FUN_10a0edfc4(&puStack_90);
LAB_10a102530:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a102534);
        (*pcVar1)();
      }
      if ((bStack_98 & 1) == 0) {
        func_0x000109d1d4f4();
        puVar4 = (undefined8 *)0x48;
        __Znwm();
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar5 = puVar4 + 3;
        *puVar4 = &PTR_DAT_110b3f038;
        func_0x000109d1d834(puVar5,ppuVar3);
        puStack_88 = &UNK_109896774;
        ppuStack_80 = &PTR_DAT_110b17068;
        puStack_90 = puVar5;
        puStack_78 = puVar5;
        puStack_70 = puVar4;
        FUN_10a1087d0(&uStack_e0,&puStack_90);
        ppuVar3 = &puStack_90;
        func_0x0001092ba41c(ppuVar3);
      }
      if ((bStack_e8 & 1) == 0) {
        func_0x000109d1d3fc();
        puVar4 = (undefined8 *)0x48;
        __Znwm();
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar5 = puVar4 + 3;
        *puVar4 = &PTR_DAT_110b3f038;
        func_0x000109d1d834(puVar5,ppuVar3);
        puStack_88 = &UNK_109896774;
        ppuStack_80 = &PTR_DAT_110b17068;
        puStack_90 = puVar5;
        puStack_78 = puVar5;
        puStack_70 = puVar4;
        FUN_10a1087d0(&uStack_130,&puStack_90);
        ppuVar3 = &puStack_90;
        func_0x0001092ba41c(ppuVar3);
      }
      if ((bStack_138 & 1) == 0) {
        func_0x000109d1d354();
        puVar4 = (undefined8 *)0x48;
        __Znwm();
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar5 = puVar4 + 3;
        *puVar4 = &PTR_DAT_110b3f038;
        func_0x000109d1d834(puVar5,ppuVar3);
        puStack_88 = &UNK_109896774;
        ppuStack_80 = &PTR_DAT_110b17068;
        puStack_90 = puVar5;
        puStack_78 = puVar5;
        puStack_70 = puVar4;
        FUN_10a1087d0(&uStack_180,&puStack_90);
        func_0x0001092ba41c(&puStack_90);
      }
      if ((bStack_98 & 1) == 0) {
        FUN_10a04f808();
        goto LAB_10a102530;
      }
      ppuRam00000001132ffe70 = &PTR_DAT_110ae9180;
      uRam00000001132ffe60 = CONCAT71(uStack_df,uStack_e0);
      puRam00000001132ffe68 = puStack_d8;
      (*(code *)appuStack_d0[0][2])(0x1132ffe70,appuStack_d0);
      puStack_d8 = &UNK_1053a6a3c;
      (*(code *)*appuStack_d0[0])(appuStack_d0);
      appuStack_d0[0] = &PTR_DAT_110ae9180;
      if ((bStack_e8 & 1) == 0) {
        FUN_10a04f808();
        goto LAB_10a102530;
      }
      uRam00000001132ffea8 = CONCAT71(uStack_12f,uStack_130);
      puRam00000001132ffeb0 = puStack_128;
      ppuRam00000001132ffeb8 = &PTR_DAT_110ae9180;
      (*(code *)appuStack_120[0][2])(0x1132ffeb8,appuStack_120);
      puStack_128 = &UNK_1053a6a3c;
      (*(code *)*appuStack_120[0])(appuStack_120);
      appuStack_120[0] = &PTR_DAT_110ae9180;
      if ((bStack_138 & 1) == 0) {
        FUN_10a04f808();
        goto LAB_10a102530;
      }
      ppuRam00000001132fff00 = &PTR_DAT_110ae9180;
      uRam00000001132ffef0 = CONCAT71(uStack_17f,uStack_180);
      puRam00000001132ffef8 = puStack_178;
      (*(code *)appuStack_170[0][2])(0x1132fff00,appuStack_170);
      puStack_178 = &UNK_1053a6a3c;
      (*(code *)*appuStack_170[0])(appuStack_170);
      appuStack_170[0] = &PTR_DAT_110ae9180;
      lRam00000001132fff38 = 0x1132ffe60;
      __ZNSt3__15mutex6unlockEv(0x1132fff40);
      if (bStack_138 == 1) {
        func_0x0001092ba41c(&uStack_180);
      }
      if (bStack_e8 == 1) {
        func_0x0001092ba41c(&uStack_130);
      }
      if (bStack_98 == 1) {
        func_0x0001092ba41c(&uStack_e0);
      }
    }
    lVar6 = lRam00000001132fff38;
    __ZNSt3__15mutex6unlockEv(0x1132ffe20);
LAB_10a10249c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return lVar6;
    }
    ___stack_chk_fail();
LAB_10a1024d4:
    iVar2 = 0x137ea530;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_110346798,0x1132ffe20,0x100000000);
      ___cxa_guard_release(0x1137ea530);
    }
  } while( true );
}



/* Entry: 10a1025f4; end: 10a10271b;  */

void FUN_10a1025f4(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110ba36e8);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110ba36e8);
    uVar2 = 0;
    (**(code **)(*param_2 + 0xc0))(param_2,&PTR_DAT_110ba3708);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110ba4c38,0);
    *(char *)(param_1 + 0x18) = (char)plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010a102690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x220))(param_2);
    return;
  }
  return;
}



/* Entry: 10a10271c; end: 10a10295f;  */

undefined8 * FUN_10a10271c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined **appuStack_168 [2];
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined1 auStack_148 [56];
  undefined8 uStack_110;
  char cStack_f9;
  undefined **appuStack_e8 [19];
  
  *param_1 = 0;
  param_1[1] = 0;
  puStack_198 = (undefined *)0x0;
  lStack_190 = 0;
  uStack_188 = 0;
  FUN_10a108878(appuStack_168,param_2,0x18);
  uStack_180 = 0;
  uStack_178 = 0;
  lStack_170 = 0;
  while( true ) {
    pppuVar2 = appuStack_168;
    FUN_10a10894c(pppuVar2,&uStack_180,param_3);
    if ((*(byte *)((long)pppuVar2 + (long)((*pppuVar2)[-3] + 0x20)) & 5) != 0) break;
    FUN_10a0b4ec0(&puStack_198,&uStack_180);
  }
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  appuStack_168[0] = &PTR_SUB_1108a5a38;
  ppuStack_158 = &PTR_DAT_1108a5a60;
  appuStack_e8[0] = &PTR_DAT_1108a5a88;
  ppuStack_150 = &PTR_DAT_11088d7b0;
  if (cStack_f9 < '\0') {
    __ZdlPv(uStack_110);
  }
  ppuStack_150 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_148);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_168,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e8);
  if (lStack_190 - (long)puStack_198 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    uVar4 = (lStack_190 - (long)puStack_198 >> 3) * -0x5555555555555555;
    if (3 < uVar4) {
      uVar4 = 4;
    }
    do {
      uVar5 = (lStack_190 - (long)puStack_198 >> 3) * -0x5555555555555555;
      if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a102934);
        (*pcVar1)();
      }
      puVar3 = puStack_198 + lVar6;
      __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(puVar3,0,10);
      *(int *)((long)param_1 + uVar7 * 4) = (int)puVar3;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar4 != uVar7);
  }
  appuStack_168[0] = &puStack_198;
  FUN_10a0426d8(appuStack_168);
  return param_1;
}



/* Entry: 10a102960; end: 10a102a1b;  */

undefined8 FUN_10a102960(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    pcVar4 = (char *)*param_1;
    cVar2 = *pcVar4;
    uVar5 = (ulong)(cVar2 == '-');
    if ((uVar5 < uVar3) && (uVar7 = (uint)(byte)pcVar4[uVar5], (byte)pcVar4[uVar5] - 0x30 < 10)) {
      lVar6 = 0;
      do {
        lVar6 = (ulong)(uVar7 & 0xf) + lVar6 * 10;
        if (uVar3 - 1 == uVar5) {
          lVar1 = -lVar6;
          if (cVar2 != '-') {
            lVar1 = lVar6;
          }
          *param_2 = lVar1;
          uVar5 = uVar3;
          goto LAB_10a102a08;
        }
        uVar7 = (uint)(byte)pcVar4[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (0xfffffff5 < uVar7 - 0x3a);
      lVar1 = -lVar6;
      if (cVar2 != '-') {
        lVar1 = lVar6;
      }
      *param_2 = lVar1;
      if (uVar5 <= uVar3) {
LAB_10a102a08:
        *param_1 = (long)(pcVar4 + uVar5);
        param_1[1] = uVar3 - uVar5;
        return 1;
      }
      FUN_109ffdddc(&UNK_10f63c7ab);
    }
  }
  return 0;
}



/* Entry: 10a102a1c; end: 10a102a93;  */

undefined8 * FUN_10a102a1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba5188;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10a102a94; end: 10a102aa3;  */

undefined8 FUN_10a102a94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10a102aa4; end: 10a102b23;  */

undefined8 * FUN_10a102aa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba2e58;
  FUN_10a108b8c(param_1 + 4);
  func_0x00010a06e274(param_1 + 2);
  return param_1;
}



/* Entry: 10a102b24; end: 10a102b2b;  */

void FUN_10a102b24(void)

{
  return;
}



/* Entry: 10a102b2c; end: 10a102c1b;  */

undefined8 * FUN_10a102b2c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110af47c8;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10a102c1c; end: 10a102c23;  */

void FUN_10a102c1c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a102c20);
  (*pcVar1)();
}



/* Entry: 10a102c24; end: 10a102ca3;  */

undefined8 * FUN_10a102c24(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110ba53b0;
  param_1[1] = &PTR_FUN_110ba5578;
  plVar1 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[6] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[4] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[2] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 10a102ca4; end: 10a102d23;  */

void FUN_10a102ca4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110ba53b0;
  param_1[1] = &PTR_FUN_110ba5578;
  plVar1 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[6] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[4] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[2] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a102d24; end: 10a102d9f;  */

void FUN_10a102d24(undefined8 *param_1)

{
  long *plVar1;
  
  param_1[-1] = &PTR_FUN_110ba53b0;
  *param_1 = &PTR_FUN_110ba5578;
  plVar1 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[5] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[3] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[1] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(param_1 + 1);
  return;
}



/* Entry: 10a102da0; end: 10a102e2f;  */

void FUN_10a102da0(undefined8 *param_1)

{
  long *plVar1;
  
  param_1[-1] = &PTR_FUN_110ba53b0;
  *param_1 = &PTR_FUN_110ba5578;
  plVar1 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[5] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[3] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[1] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -1);
  return;
}



/* Entry: 10a102e30; end: 10a102eeb;  */

undefined8 * FUN_10a102e30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba3180;
  if (param_1[0x23] != 0) {
    param_1[0x24] = param_1[0x23];
    _free();
  }
  if (param_1[0x20] != 0) {
    param_1[0x21] = param_1[0x20];
    __ZdlPv();
  }
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110ba33f8;
  param_1[10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0xb);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  FUN_10a10a59c(param_1 + 1);
  return param_1;
}



/* Entry: 10a102eec; end: 10a102eef;  */

undefined8 * FUN_10a102eec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba36d0;
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  __ZNSt3__118condition_variableD1Ev(param_1 + 7);
  __ZNSt3__118condition_variableD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10a102ef0; end: 10a102f03;  */

void FUN_10a102ef0(void)

{
  func_0x00010a108be4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a102f04; end: 10a102f87;  */

void FUN_10a102f04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0cf150(param_1,param_4);
    lVar1 = param_1;
    FUN_10a102f88(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a102f88; end: 10a103043;  */

undefined8 *
FUN_10a102f88(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    param_4 = puStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_10a0cf254(&uStack_60);
  return param_4;
}



/* Entry: 10a103044; end: 10a1030d7;  */

undefined4 FUN_10a103044(long param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if ((int)param_2[2] < *(int *)((long)param_2 + 0xc)) {
    uVar2 = 0;
    *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  }
  else {
    __Unwind_GetIP();
    iVar1 = *(int *)((long)param_2 + 0x14);
    lVar3 = (long)iVar1;
    if ((int)param_2[2] != 0) {
      param_1 = param_1 + -4;
    }
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else if (param_1 == *(long *)(*param_2 + lVar3 * 8 + -8)) {
      return 5;
    }
    *(int *)((long)param_2 + 0x14) = iVar1 + 1;
    *(long *)(*param_2 + lVar3 * 8) = param_1;
    uVar2 = 0;
    if ((int)param_2[1] <= iVar1 + 1) {
      uVar2 = 5;
    }
  }
  return uVar2;
}



/* Entry: 10a1030d8; end: 10a10315f;  */

ulong FUN_10a1030d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  (**(code **)(*param_1 + 0x210))();
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x38))(param_1,&PTR_DAT_110ba3940,0);
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x38))(param_1,&PTR_DAT_110ba3920,0);
  (**(code **)(*param_1 + 0x220))(param_1);
  return (ulong)plVar1 & 0xffffffff | (long)plVar2 << 0x20;
}



/* Entry: 10a103160; end: 10a1032d3;  */

void FUN_10a103160(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_78 [2];
  char cStack_61;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  
  uRam00000001137ea5b0 = 0;
  uRam00000001137ea5a8 = 0;
  uRam00000001137ea5c0 = 0;
  uRam00000001137ea5b8 = 0;
  uRam00000001137ea5c8 = 0x3f800000;
  _CTFontManagerCopyAvailablePostScriptNames();
  lStack_48 = param_1;
  if ((param_1 != 0) && (_CFArrayGetCount(), 0 < param_1)) {
    lVar3 = 0;
    do {
      lVar1 = lStack_48;
      _CFArrayGetValueAtIndex(lStack_48,lVar3);
      lVar2 = lVar1;
      _CFStringGetLength();
      _CFStringGetMaximumSizeForEncoding();
      FUN_10a1032d4(&lStack_60,lVar2 + 1);
      _CFStringGetCString(lVar1,lStack_60,lVar2 + 1,0x8000100);
      if ((int)lVar1 != 0) {
        func_0x000107c2b054(auStack_78,lStack_60);
        func_0x00010726db4c(0x1137ea5a8,auStack_78,auStack_78);
        if (cStack_61 < '\0') {
          __ZdlPv(auStack_78[0]);
        }
      }
      if (lStack_60 != 0) {
        lStack_58 = lStack_60;
        __ZdlPv();
      }
      lVar3 = lVar3 + 1;
    } while (param_1 != lVar3);
  }
  FUN_10a103380(&lStack_48);
  return;
}



/* Entry: 10a1032d4; end: 10a103343;  */

undefined8 * FUN_10a1032d4(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a103344(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2);
    param_1[1] = lVar1 + param_2;
  }
  return param_1;
}



/* Entry: 10a103344; end: 10a10337f;  */

long * FUN_10a103344(long *param_1,long *param_2)

{
  long *plVar1;
  
  if (-1 < (long)param_2) {
    plVar1 = param_2;
    __Znwm();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + (long)param_2;
    return plVar1;
  }
  FUN_10a0cd644();
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10a103380; end: 10a1033af;  */

long * FUN_10a103380(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10a1033b0; end: 10a1033c3;  */

void FUN_10a1033b0(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lStack_48;
  
  plVar1 = (long *)&UNK_10f63bc0b;
  FUN_109ffde64();
  plVar3 = (long *)*plVar1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar5 = plVar3[1];
    lVar2 = lVar4;
    if (lVar5 != lVar4) {
      do {
        lVar5 = lVar5 + -0x18;
        lStack_48 = lVar5;
        func_0x00010a10356c(&lStack_48);
      } while (lVar5 != lVar4);
      lVar2 = *(long *)*plVar1;
    }
    plVar3[1] = lVar4;
    __ZdlPv(lVar2);
  }
  return;
}



/* Entry: 10a1033c4; end: 10a103433;  */

void FUN_10a1033c4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = plVar2[1];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x18;
        lStack_38 = lVar4;
        func_0x00010a10356c(&lStack_38);
      } while (lVar4 != lVar3);
      lVar1 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a103434; end: 10a103447;  */

void FUN_10a103434(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)&UNK_10f63bc0b;
  FUN_109ffde64();
  if ((undefined8 *)0x666666666666666 < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        param_3[2] = puVar2[2];
        param_3[1] = uVar4;
        *param_3 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar3 = puVar2[3];
        *(undefined8 *)((long)param_3 + 0x1d) = *(undefined8 *)((long)puVar2 + 0x1d);
        param_3[3] = uVar3;
        puVar2 = puVar2 + 5;
        param_3 = param_3 + 5;
      } while (puVar2 != param_2);
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          __ZdlPv(*puVar1);
        }
        puVar1 = puVar1 + 5;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x28);
  return;
}



/* Entry: 10a103448; end: 10a1035ab;  */

void FUN_10a103448(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x666666666666666 < param_1) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_3[2] = puVar1[2];
        param_3[1] = uVar3;
        *param_3 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        *(undefined8 *)((long)param_3 + 0x1d) = *(undefined8 *)((long)puVar1 + 0x1d);
        param_3[3] = uVar2;
        puVar1 = puVar1 + 5;
        param_3 = param_3 + 5;
      } while (puVar1 != param_2);
      do {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          __ZdlPv(*param_1);
        }
        param_1 = param_1 + 5;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x28);
  return;
}



/* Entry: 10a1035ac; end: 10a1041f3;  */

/* WARNING: Possible PIC construction at 0x00010a1039e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a1039e4) */

float * FUN_10a1035ac(float *param_1,float *param_2,ulong param_3,ulong param_4,undefined1 param_5,
                     float param_6,undefined1 param_7)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined1 *puVar7;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  float *pfVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  float *unaff_x19;
  float *unaff_x20;
  ulong unaff_x21;
  float *unaff_x22;
  float *unaff_x23;
  float *unaff_x24;
  ulong unaff_x25;
  float *unaff_x26;
  float *unaff_x27;
  float *unaff_x28;
  undefined8 uVar22;
  float fVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 *puVar8;
  
  if (0x7ffffffffffffff7 < param_3) {
    uVar22 = 0x10a103678;
    func_0x000109ffde50();
    puVar5 = &stack0xffffffffffffffa0;
    puVar7 = (undefined1 *)register0x00000008;
SUB_10a103678:
    puVar8 = puVar5;
    *(float **)(puVar8 + -0x60) = unaff_x28;
    *(float **)(puVar8 + -0x58) = unaff_x27;
    *(float **)(puVar8 + -0x50) = unaff_x26;
    *(ulong *)(puVar8 + -0x48) = unaff_x25;
    *(float **)(puVar8 + -0x40) = unaff_x24;
    *(float **)(puVar8 + -0x38) = unaff_x23;
    *(float **)(puVar8 + -0x30) = unaff_x22;
    *(ulong *)(puVar8 + -0x28) = unaff_x21;
    *(float **)(puVar8 + -0x20) = unaff_x20;
    *(float **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar7 + -0x10;
    *(undefined8 *)(puVar8 + -8) = uVar22;
    pfVar10 = param_1;
    unaff_x19 = param_2;
    unaff_x25 = param_4;
LAB_10a1036a8:
    unaff_x22 = unaff_x19 + -3;
    unaff_x23 = unaff_x19 + -6;
    unaff_x24 = unaff_x19 + -9;
    unaff_x26 = param_1;
LAB_10a1036b8:
    do {
      param_1 = unaff_x26;
      uVar13 = (long)unaff_x19 - (long)param_1;
      uVar15 = ((long)uVar13 >> 2) * -0x5555555555555555;
      if (uVar15 - 2 == 0 || (long)uVar15 < 2) {
        if (uVar15 < 2) {
          return pfVar10;
        }
        if (uVar15 == 2) {
          pfVar9 = unaff_x19 + -3;
          fVar23 = (float)*(ulong *)(unaff_x19 + -2);
          fVar25 = (float)(*(ulong *)(unaff_x19 + -2) >> 0x20);
          fVar26 = (float)*(undefined8 *)(param_1 + 1);
          fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20);
          if (SQRT(*param_1 * *param_1 + fVar26 * fVar26 + fVar27 * fVar27) <=
              SQRT(*pfVar9 * *pfVar9 + fVar23 * fVar23 + fVar25 * fVar25)) {
            return pfVar10;
          }
          uVar13 = *(ulong *)param_1;
          *(float *)(puVar8 + -0x68) = param_1[2];
          *(ulong *)(puVar8 + -0x70) = uVar13;
          uVar13 = *(ulong *)pfVar9;
          param_1[2] = unaff_x19[-1];
          *(ulong *)param_1 = uVar13;
          uVar13 = *(ulong *)(puVar8 + -0x70);
          unaff_x19[-1] = *(float *)(puVar8 + -0x68);
          *(ulong *)pfVar9 = uVar13;
          return pfVar10;
        }
      }
      else {
        if (uVar15 == 3) {
          pfVar10 = param_1 + 3;
          fVar25 = (float)*(ulong *)(param_1 + 4);
          fVar26 = (float)(*(ulong *)(param_1 + 4) >> 0x20);
          fVar27 = (float)*(undefined8 *)(param_1 + 1);
          fVar29 = (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20);
          fVar23 = (float)*(ulong *)(unaff_x19 + -2);
          fVar28 = (float)(*(ulong *)(unaff_x19 + -2) >> 0x20);
          fVar23 = SQRT(*unaff_x22 * *unaff_x22 + fVar23 * fVar23 + fVar28 * fVar28);
          fVar25 = SQRT(*pfVar10 * *pfVar10 + fVar25 * fVar25 + fVar26 * fVar26);
          if (SQRT(*param_1 * *param_1 + fVar27 * fVar27 + fVar29 * fVar29) <= fVar25) {
            if (fVar23 < fVar25) {
              fVar23 = param_1[5];
              uVar13 = *(ulong *)pfVar10;
              fVar25 = unaff_x19[-1];
              *(ulong *)pfVar10 = *(ulong *)unaff_x22;
              param_1[5] = fVar25;
              *(ulong *)unaff_x22 = uVar13;
              unaff_x19[-1] = fVar23;
              fVar23 = (float)*(ulong *)(param_1 + 4);
              fVar25 = (float)(*(ulong *)(param_1 + 4) >> 0x20);
              fVar26 = (float)*(undefined8 *)(param_1 + 1);
              fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20);
              if (SQRT(*pfVar10 * *pfVar10 + fVar23 * fVar23 + fVar25 * fVar25) <
                  SQRT(*param_1 * *param_1 + fVar26 * fVar26 + fVar27 * fVar27)) {
                fVar23 = param_1[2];
                uVar13 = *(ulong *)param_1;
                *(ulong *)param_1 = *(ulong *)pfVar10;
                param_1[2] = param_1[5];
                *(ulong *)pfVar10 = uVar13;
                param_1[5] = fVar23;
              }
            }
          }
          else {
            if (fVar25 <= fVar23) {
              fVar23 = param_1[2];
              uVar13 = *(ulong *)param_1;
              *(ulong *)param_1 = *(ulong *)pfVar10;
              param_1[2] = param_1[5];
              *(ulong *)pfVar10 = uVar13;
              param_1[5] = fVar23;
              fVar23 = (float)*(ulong *)(unaff_x19 + -2);
              fVar25 = (float)(*(ulong *)(unaff_x19 + -2) >> 0x20);
              fVar26 = (float)*(ulong *)(param_1 + 4);
              fVar27 = (float)(*(ulong *)(param_1 + 4) >> 0x20);
              if (SQRT(*pfVar10 * *pfVar10 + fVar26 * fVar26 + fVar27 * fVar27) <=
                  SQRT(*unaff_x22 * *unaff_x22 + fVar23 * fVar23 + fVar25 * fVar25)) {
                return param_1;
              }
              fVar23 = param_1[5];
              uVar13 = *(ulong *)pfVar10;
              fVar25 = unaff_x19[-1];
              *(ulong *)pfVar10 = *(ulong *)unaff_x22;
              param_1[5] = fVar25;
            }
            else {
              fVar23 = param_1[2];
              uVar13 = *(ulong *)param_1;
              fVar25 = unaff_x19[-1];
              *(ulong *)param_1 = *(ulong *)unaff_x22;
              param_1[2] = fVar25;
            }
            *(ulong *)unaff_x22 = uVar13;
            unaff_x19[-1] = fVar23;
          }
          return param_1;
        }
        if (uVar15 == 4) {
          pfVar10 = param_1 + 3;
          pfVar9 = param_1 + 6;
          *(undefined8 *)(puVar8 + -0x30) = *(undefined8 *)(puVar8 + -0x30);
          *(undefined8 *)(puVar8 + -0x28) = *(undefined8 *)(puVar8 + -0x28);
          *(undefined8 *)(puVar8 + -0x20) = *(undefined8 *)(puVar8 + -0x20);
          *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
          *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
          *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
          pfVar11 = param_1;
          FUN_10a1041f4();
          fVar23 = (float)*(ulong *)(unaff_x19 + -2);
          fVar25 = (float)(*(ulong *)(unaff_x19 + -2) >> 0x20);
          fVar26 = (float)*(undefined8 *)(param_1 + 7);
          fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 7) >> 0x20);
          if (SQRT(*unaff_x22 * *unaff_x22 + fVar23 * fVar23 + fVar25 * fVar25) <
              SQRT(*pfVar9 * *pfVar9 + fVar26 * fVar26 + fVar27 * fVar27)) {
            fVar23 = param_1[8];
            uVar13 = *(ulong *)pfVar9;
            fVar25 = unaff_x19[-1];
            *(ulong *)pfVar9 = *(ulong *)unaff_x22;
            param_1[8] = fVar25;
            *(ulong *)unaff_x22 = uVar13;
            unaff_x19[-1] = fVar23;
            fVar23 = (float)*(undefined8 *)(param_1 + 7);
            fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 7) >> 0x20);
            fVar26 = (float)*(ulong *)(param_1 + 4);
            fVar27 = (float)(*(ulong *)(param_1 + 4) >> 0x20);
            if (SQRT(*pfVar9 * *pfVar9 + fVar23 * fVar23 + fVar25 * fVar25) <
                SQRT(*pfVar10 * *pfVar10 + fVar26 * fVar26 + fVar27 * fVar27)) {
              fVar23 = param_1[5];
              uVar13 = *(ulong *)pfVar10;
              *(ulong *)pfVar10 = *(ulong *)pfVar9;
              param_1[5] = param_1[8];
              *(ulong *)pfVar9 = uVar13;
              param_1[8] = fVar23;
              fVar23 = (float)*(ulong *)(param_1 + 4);
              fVar25 = (float)(*(ulong *)(param_1 + 4) >> 0x20);
              fVar26 = (float)*(undefined8 *)(param_1 + 1);
              fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20);
              if (SQRT(*pfVar10 * *pfVar10 + fVar23 * fVar23 + fVar25 * fVar25) <
                  SQRT(*param_1 * *param_1 + fVar26 * fVar26 + fVar27 * fVar27)) {
                fVar23 = param_1[2];
                uVar13 = *(ulong *)param_1;
                *(ulong *)param_1 = *(ulong *)pfVar10;
                param_1[2] = param_1[5];
                *(ulong *)pfVar10 = uVar13;
                param_1[5] = fVar23;
              }
            }
          }
          return pfVar11;
        }
        if (uVar15 == 5) {
          pfVar10 = param_1 + 3;
          pfVar9 = param_1 + 6;
          pfVar11 = param_1 + 9;
          *(undefined8 *)(puVar8 + -0x40) = *(undefined8 *)(puVar8 + -0x40);
          *(undefined8 *)(puVar8 + -0x38) = *(undefined8 *)(puVar8 + -0x38);
          *(undefined8 *)(puVar8 + -0x30) = *(undefined8 *)(puVar8 + -0x30);
          *(undefined8 *)(puVar8 + -0x28) = *(undefined8 *)(puVar8 + -0x28);
          *(undefined8 *)(puVar8 + -0x20) = *(undefined8 *)(puVar8 + -0x20);
          *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
          *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
          *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
          pfVar12 = param_1;
          FUN_10a104398();
          fVar23 = (float)*(ulong *)(unaff_x19 + -2);
          fVar25 = (float)(*(ulong *)(unaff_x19 + -2) >> 0x20);
          fVar26 = (float)*(ulong *)(param_1 + 10);
          fVar27 = (float)(*(ulong *)(param_1 + 10) >> 0x20);
          if (SQRT(*unaff_x22 * *unaff_x22 + fVar23 * fVar23 + fVar25 * fVar25) <
              SQRT(*pfVar11 * *pfVar11 + fVar26 * fVar26 + fVar27 * fVar27)) {
            fVar23 = param_1[0xb];
            uVar13 = *(ulong *)pfVar11;
            fVar25 = unaff_x19[-1];
            *(ulong *)pfVar11 = *(ulong *)unaff_x22;
            param_1[0xb] = fVar25;
            *(ulong *)unaff_x22 = uVar13;
            unaff_x19[-1] = fVar23;
            fVar23 = (float)*(ulong *)(param_1 + 10);
            fVar25 = (float)(*(ulong *)(param_1 + 10) >> 0x20);
            fVar26 = (float)*(undefined8 *)(param_1 + 7);
            fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 7) >> 0x20);
            if (SQRT(*pfVar11 * *pfVar11 + fVar23 * fVar23 + fVar25 * fVar25) <
                SQRT(*pfVar9 * *pfVar9 + fVar26 * fVar26 + fVar27 * fVar27)) {
              fVar23 = param_1[8];
              uVar13 = *(ulong *)pfVar9;
              *(ulong *)pfVar9 = *(ulong *)pfVar11;
              param_1[8] = param_1[0xb];
              *(ulong *)pfVar11 = uVar13;
              param_1[0xb] = fVar23;
              fVar23 = (float)*(undefined8 *)(param_1 + 7);
              fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 7) >> 0x20);
              fVar26 = (float)*(ulong *)(param_1 + 4);
              fVar27 = (float)(*(ulong *)(param_1 + 4) >> 0x20);
              if (SQRT(*pfVar9 * *pfVar9 + fVar23 * fVar23 + fVar25 * fVar25) <
                  SQRT(*pfVar10 * *pfVar10 + fVar26 * fVar26 + fVar27 * fVar27)) {
                fVar23 = param_1[5];
                uVar13 = *(ulong *)pfVar10;
                *(ulong *)pfVar10 = *(ulong *)pfVar9;
                param_1[5] = param_1[8];
                *(ulong *)pfVar9 = uVar13;
                param_1[8] = fVar23;
                fVar23 = (float)*(ulong *)(param_1 + 4);
                fVar25 = (float)(*(ulong *)(param_1 + 4) >> 0x20);
                fVar26 = (float)*(undefined8 *)(param_1 + 1);
                fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20);
                if (SQRT(*pfVar10 * *pfVar10 + fVar23 * fVar23 + fVar25 * fVar25) <
                    SQRT(*param_1 * *param_1 + fVar26 * fVar26 + fVar27 * fVar27)) {
                  fVar23 = param_1[2];
                  uVar13 = *(ulong *)param_1;
                  *(ulong *)param_1 = *(ulong *)pfVar10;
                  param_1[2] = param_1[5];
                  *(ulong *)pfVar10 = uVar13;
                  param_1[5] = fVar23;
                }
              }
            }
          }
          return pfVar12;
        }
      }
      if ((long)uVar13 < 0x120) {
        pfVar9 = param_1 + 3;
        if ((unaff_x25 & 1) == 0) {
          if (param_1 == unaff_x19 || pfVar9 == unaff_x19) {
            return pfVar10;
          }
          lVar16 = 0;
          lVar19 = 0xc;
          do {
            pfVar11 = (float *)((long)param_1 + lVar16);
            fVar23 = *pfVar9;
            fVar25 = pfVar11[4];
            fVar26 = pfVar11[5];
            fVar27 = SQRT(fVar23 * fVar23 + fVar25 * fVar25 + fVar26 * fVar26);
            fVar29 = (float)*(undefined8 *)(pfVar11 + 1);
            fVar28 = (float)((ulong)*(undefined8 *)(pfVar11 + 1) >> 0x20);
            if (fVar27 < SQRT(*pfVar11 * *pfVar11 + fVar29 * fVar29 + fVar28 * fVar28)) {
              do {
                lVar14 = lVar16;
                puVar2 = (undefined8 *)((long)param_1 + lVar14);
                *(undefined8 *)((long)puVar2 + 0xc) = *puVar2;
                *(undefined4 *)((long)puVar2 + 0x14) = *(undefined4 *)(puVar2 + 1);
                if (lVar14 == -0xc) {
LAB_10a1041f0:
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1041f4);
                  (*pcVar6)();
                }
                fVar29 = (float)puVar2[-1];
                fVar28 = (float)((ulong)puVar2[-1] >> 0x20);
                lVar16 = lVar14 + -0xc;
              } while (fVar27 < SQRT(*(float *)((long)puVar2 + -0xc) *
                                     *(float *)((long)puVar2 + -0xc) + fVar29 * fVar29 +
                                     fVar28 * fVar28));
              *(float *)((long)param_1 + lVar14) = fVar23;
              *(float *)((long)param_1 + lVar14 + 4) = fVar25;
              *(float *)((long)param_1 + lVar14 + 8) = fVar26;
            }
            pfVar9 = (float *)((long)param_1 + lVar19 + 0xc);
            lVar16 = lVar19;
            lVar19 = lVar19 + 0xc;
            if (pfVar9 == unaff_x19) {
              return pfVar10;
            }
          } while( true );
        }
        if (param_1 == unaff_x19 || pfVar9 == unaff_x19) {
          return pfVar10;
        }
        lVar16 = 0;
        pfVar11 = param_1;
        goto LAB_10a103cd4;
      }
      if (param_3 == 0) {
        if (param_1 == unaff_x19) {
          return pfVar10;
        }
        uVar18 = uVar15 - 2 >> 1;
        uVar20 = uVar18;
        goto LAB_10a103da8;
      }
      pfVar10 = param_1 + (uVar15 >> 1) * 3;
      if (uVar13 < 0x601) {
        FUN_10a1041f4(pfVar10,param_1,unaff_x22);
      }
      else {
        FUN_10a1041f4(param_1,pfVar10,unaff_x22);
        pfVar9 = pfVar10 + -3;
        FUN_10a1041f4(param_1 + 3,pfVar9,unaff_x23);
        FUN_10a1041f4(param_1 + 6,pfVar10 + 3,unaff_x24);
        FUN_10a1041f4(pfVar9,pfVar10,pfVar10 + 3);
        uVar13 = *(ulong *)param_1;
        *(float *)(puVar8 + -0x68) = param_1[2];
        *(ulong *)(puVar8 + -0x70) = uVar13;
        fVar23 = pfVar10[2];
        *(ulong *)param_1 = *(ulong *)pfVar10;
        param_1[2] = fVar23;
        uVar13 = *(ulong *)(puVar8 + -0x70);
        pfVar10[2] = *(float *)(puVar8 + -0x68);
        *(ulong *)pfVar10 = uVar13;
        pfVar10 = pfVar9;
      }
      param_3 = param_3 - 1;
      fVar23 = *param_1;
      if ((unaff_x25 & 1) != 0) {
        fVar25 = param_1[1];
        fVar26 = param_1[2];
        fVar27 = SQRT(fVar23 * fVar23 + fVar25 * fVar25 + fVar26 * fVar26);
LAB_10a103814:
        lVar16 = 0;
        do {
          pfVar10 = (float *)((long)param_1 + lVar16 + 0xc);
          if (pfVar10 == unaff_x19) goto LAB_10a1041f0;
          fVar29 = *pfVar10;
          uVar22 = *(undefined8 *)((long)param_1 + lVar16 + 0x10);
          fVar28 = (float)uVar22;
          fVar30 = (float)((ulong)uVar22 >> 0x20);
          lVar16 = lVar16 + 0xc;
        } while (SQRT(fVar29 * fVar29 + fVar28 * fVar28 + fVar30 * fVar30) < fVar27);
        pfVar10 = (float *)((long)param_1 + lVar16);
        pfVar9 = unaff_x19;
        if (lVar16 == 0xc) {
          do {
            pfVar11 = pfVar9;
            if (pfVar9 <= pfVar10) break;
            pfVar11 = pfVar9 + -3;
            fVar29 = (float)*(ulong *)(pfVar9 + -2);
            fVar28 = (float)(*(ulong *)(pfVar9 + -2) >> 0x20);
            pfVar9 = pfVar11;
          } while (fVar27 <= SQRT(*pfVar11 * *pfVar11 + fVar29 * fVar29 + fVar28 * fVar28));
        }
        else {
          do {
            if (pfVar9 == param_1) goto LAB_10a1041f0;
            pfVar11 = pfVar9 + -3;
            fVar29 = (float)*(ulong *)(pfVar9 + -2);
            fVar28 = (float)(*(ulong *)(pfVar9 + -2) >> 0x20);
            pfVar9 = pfVar11;
          } while (fVar27 <= SQRT(*pfVar11 * *pfVar11 + fVar29 * fVar29 + fVar28 * fVar28));
        }
        pfVar12 = pfVar11;
        unaff_x26 = pfVar10;
        pfVar9 = pfVar10;
        if (pfVar10 < pfVar11) {
          do {
            uVar13 = *(ulong *)pfVar9;
            *(float *)(puVar8 + -0x68) = pfVar9[2];
            *(ulong *)(puVar8 + -0x70) = uVar13;
            uVar13 = *(ulong *)pfVar12;
            pfVar9[2] = pfVar12[2];
            *(ulong *)pfVar9 = uVar13;
            uVar13 = *(ulong *)(puVar8 + -0x70);
            pfVar12[2] = *(float *)(puVar8 + -0x68);
            *(ulong *)pfVar12 = uVar13;
            do {
              unaff_x26 = pfVar9 + 3;
              if (unaff_x26 == unaff_x19) goto LAB_10a1041f0;
              fVar29 = (float)*(ulong *)(pfVar9 + 4);
              fVar28 = (float)(*(ulong *)(pfVar9 + 4) >> 0x20);
              pfVar9 = unaff_x26;
            } while (SQRT(*unaff_x26 * *unaff_x26 + fVar29 * fVar29 + fVar28 * fVar28) < fVar27);
            do {
              if (pfVar12 == param_1) goto LAB_10a1041f0;
              pfVar17 = pfVar12 + -3;
              fVar29 = (float)*(ulong *)(pfVar12 + -2);
              fVar28 = (float)(*(ulong *)(pfVar12 + -2) >> 0x20);
              pfVar12 = pfVar17;
            } while (fVar27 <= SQRT(*pfVar17 * *pfVar17 + fVar29 * fVar29 + fVar28 * fVar28));
          } while (unaff_x26 < pfVar17);
        }
        param_2 = unaff_x26 + -3;
        if (param_2 != param_1) {
          uVar13 = *(ulong *)param_2;
          param_1[2] = unaff_x26[-1];
          *(ulong *)param_1 = uVar13;
        }
        unaff_x26[-3] = fVar23;
        unaff_x26[-2] = fVar25;
        unaff_x26[-1] = fVar26;
        if (pfVar11 <= pfVar10) {
          unaff_x28 = param_1;
          FUN_10a1046d8(param_1,param_2);
          pfVar10 = unaff_x26;
          FUN_10a1046d8(unaff_x26,unaff_x19);
          if ((int)pfVar10 != 0) goto LAB_10a103ba0;
          if (((ulong)unaff_x28 & 1) != 0) goto LAB_10a1036b8;
        }
        param_4 = (ulong)((uint)unaff_x25 & 1);
        uVar22 = 0x10a1039e4;
        puVar5 = puVar8 + -0x70;
        unaff_x20 = param_1;
        unaff_x21 = param_3;
        unaff_x27 = param_2;
        puVar7 = puVar8;
        goto SUB_10a103678;
      }
      fVar29 = (float)*(ulong *)(param_1 + -2);
      fVar28 = (float)(*(ulong *)(param_1 + -2) >> 0x20);
      fVar25 = param_1[1];
      fVar26 = param_1[2];
      fVar27 = SQRT(fVar23 * fVar23 + fVar25 * fVar25 + fVar26 * fVar26);
      if (SQRT(param_1[-3] * param_1[-3] + fVar29 * fVar29 + fVar28 * fVar28) < fVar27)
      goto LAB_10a103814;
      fVar29 = (float)*(ulong *)(unaff_x19 + -2);
      fVar28 = (float)(*(ulong *)(unaff_x19 + -2) >> 0x20);
      pfVar9 = param_1 + 3;
      if (SQRT(unaff_x19[-3] * unaff_x19[-3] + fVar29 * fVar29 + fVar28 * fVar28) <= fVar27) {
        do {
          unaff_x26 = pfVar9;
          if (unaff_x19 <= unaff_x26) break;
          fVar29 = (float)*(undefined8 *)(unaff_x26 + 1);
          fVar28 = (float)((ulong)*(undefined8 *)(unaff_x26 + 1) >> 0x20);
          pfVar9 = unaff_x26 + 3;
        } while (SQRT(*unaff_x26 * *unaff_x26 + fVar29 * fVar29 + fVar28 * fVar28) <= fVar27);
      }
      else {
        do {
          unaff_x26 = pfVar9;
          if (unaff_x26 == unaff_x19) goto LAB_10a1041f0;
          fVar29 = (float)*(undefined8 *)(unaff_x26 + 1);
          fVar28 = (float)((ulong)*(undefined8 *)(unaff_x26 + 1) >> 0x20);
          pfVar9 = unaff_x26 + 3;
        } while (SQRT(*unaff_x26 * *unaff_x26 + fVar29 * fVar29 + fVar28 * fVar28) <= fVar27);
      }
      pfVar9 = unaff_x19;
      pfVar11 = unaff_x19;
      if (unaff_x26 < unaff_x19) {
        do {
          if (pfVar11 == param_1) goto LAB_10a1041f0;
          pfVar9 = pfVar11 + -3;
          fVar29 = (float)*(ulong *)(pfVar11 + -2);
          fVar28 = (float)(*(ulong *)(pfVar11 + -2) >> 0x20);
          pfVar11 = pfVar9;
        } while (fVar27 < SQRT(*pfVar9 * *pfVar9 + fVar29 * fVar29 + fVar28 * fVar28));
      }
      while (unaff_x26 < pfVar9) {
        uVar13 = *(ulong *)unaff_x26;
        *(float *)(puVar8 + -0x68) = unaff_x26[2];
        *(ulong *)(puVar8 + -0x70) = uVar13;
        uVar13 = *(ulong *)pfVar9;
        unaff_x26[2] = pfVar9[2];
        *(ulong *)unaff_x26 = uVar13;
        uVar13 = *(ulong *)(puVar8 + -0x70);
        pfVar9[2] = *(float *)(puVar8 + -0x68);
        *(ulong *)pfVar9 = uVar13;
        pfVar11 = unaff_x26;
        do {
          unaff_x26 = pfVar11 + 3;
          if (unaff_x26 == unaff_x19) goto LAB_10a1041f0;
          fVar29 = (float)*(ulong *)(pfVar11 + 4);
          fVar28 = (float)(*(ulong *)(pfVar11 + 4) >> 0x20);
          pfVar12 = pfVar9;
          pfVar11 = unaff_x26;
        } while (SQRT(*unaff_x26 * *unaff_x26 + fVar29 * fVar29 + fVar28 * fVar28) <= fVar27);
        do {
          if (pfVar12 == param_1) goto LAB_10a1041f0;
          pfVar9 = pfVar12 + -3;
          fVar29 = (float)*(ulong *)(pfVar12 + -2);
          fVar28 = (float)(*(ulong *)(pfVar12 + -2) >> 0x20);
          pfVar12 = pfVar9;
        } while (fVar27 < SQRT(*pfVar9 * *pfVar9 + fVar29 * fVar29 + fVar28 * fVar28));
      }
      if (unaff_x26 + -3 != param_1) {
        uVar13 = *(ulong *)(unaff_x26 + -3);
        param_1[2] = unaff_x26[-1];
        *(ulong *)param_1 = uVar13;
      }
      unaff_x25 = 0;
      unaff_x26[-3] = fVar23;
      unaff_x26[-2] = fVar25;
      unaff_x26[-1] = fVar26;
    } while( true );
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    pfVar9 = param_1;
    if (param_3 == 0) goto LAB_10a103640;
  }
  else {
    pfVar10 = (float *)0x19;
    if ((param_3 | 7) != 0x17) {
      pfVar10 = (float *)((param_3 | 7) + 1);
    }
    pfVar9 = pfVar10;
    __Znwm();
    *(ulong *)(param_1 + 2) = param_3;
    *(ulong *)(param_1 + 4) = (ulong)pfVar10 | 0x8000000000000000;
    *(float **)param_1 = pfVar9;
  }
  _memmove(pfVar9,param_2,param_3);
LAB_10a103640:
  *(undefined1 *)((long)pfVar9 + param_3) = 0;
  param_1[6] = (float)param_4;
  *(undefined1 *)(param_1 + 7) = param_5;
  param_1[8] = param_6;
  *(undefined1 *)(param_1 + 9) = param_7;
  return param_1;
LAB_10a103cd4:
  fVar23 = pfVar11[3];
  fVar25 = pfVar11[4];
  fVar26 = pfVar11[5];
  fVar27 = SQRT(fVar23 * fVar23 + fVar25 * fVar25 + fVar26 * fVar26);
  fVar29 = (float)*(undefined8 *)(pfVar11 + 1);
  fVar28 = (float)((ulong)*(undefined8 *)(pfVar11 + 1) >> 0x20);
  lVar19 = lVar16;
  if (fVar27 < SQRT(*pfVar11 * *pfVar11 + fVar29 * fVar29 + fVar28 * fVar28)) {
    do {
      lVar14 = lVar19;
      puVar2 = (undefined8 *)((long)param_1 + lVar14);
      *(undefined8 *)((long)puVar2 + 0xc) = *puVar2;
      *(undefined4 *)((long)puVar2 + 0x14) = *(undefined4 *)(puVar2 + 1);
      pfVar11 = param_1;
      if (lVar14 == 0) goto LAB_10a103d78;
      fVar29 = (float)puVar2[-1];
      fVar28 = (float)((ulong)puVar2[-1] >> 0x20);
      lVar19 = lVar14 + -0xc;
    } while (fVar27 < SQRT(*(float *)((long)puVar2 + -0xc) * *(float *)((long)puVar2 + -0xc) +
                           fVar29 * fVar29 + fVar28 * fVar28));
    pfVar11 = (float *)((long)param_1 + lVar14);
LAB_10a103d78:
    *pfVar11 = fVar23;
    pfVar11[1] = fVar25;
    pfVar11[2] = fVar26;
  }
  pfVar12 = pfVar9 + 3;
  lVar16 = lVar16 + 0xc;
  pfVar11 = pfVar9;
  pfVar9 = pfVar12;
  if (pfVar12 == unaff_x19) {
    return pfVar10;
  }
  goto LAB_10a103cd4;
LAB_10a103da8:
  do {
    if ((long)uVar20 <= (long)uVar18) {
      uVar3 = uVar20 << 1 | 1;
      pfVar9 = param_1 + uVar3 * 3;
      uVar1 = uVar20 * 2 + 2;
      pfVar10 = pfVar9;
      uVar21 = uVar3;
      if (((long)uVar1 < (long)uVar15) &&
         (fVar23 = (float)*(undefined8 *)(pfVar9 + 1),
         fVar25 = (float)((ulong)*(undefined8 *)(pfVar9 + 1) >> 0x20), fVar26 = pfVar9[3],
         fVar27 = (float)*(undefined8 *)(pfVar9 + 4),
         fVar29 = (float)((ulong)*(undefined8 *)(pfVar9 + 4) >> 0x20), pfVar10 = pfVar9 + 3,
         uVar21 = uVar1,
         SQRT(fVar26 * fVar26 + fVar27 * fVar27 + fVar29 * fVar29) <=
         SQRT(*pfVar9 * *pfVar9 + fVar23 * fVar23 + fVar25 * fVar25))) {
        pfVar10 = pfVar9;
        uVar21 = uVar3;
      }
      pfVar9 = param_1 + uVar20 * 3;
      fVar25 = (float)*(undefined8 *)(pfVar10 + 1);
      fVar27 = (float)((ulong)*(undefined8 *)(pfVar10 + 1) >> 0x20);
      fVar23 = *pfVar9;
      fVar26 = pfVar9[1];
      fVar29 = pfVar9[2];
      fVar28 = SQRT(fVar23 * fVar23 + fVar26 * fVar26 + fVar29 * fVar29);
      if (fVar28 <= SQRT(*pfVar10 * *pfVar10 + fVar25 * fVar25 + fVar27 * fVar27)) {
        do {
          pfVar11 = pfVar10;
          uVar22 = *(undefined8 *)pfVar11;
          pfVar9[2] = pfVar11[2];
          *(undefined8 *)pfVar9 = uVar22;
          if ((long)uVar18 < (long)uVar21) break;
          uVar3 = uVar21 << 1 | 1;
          pfVar9 = param_1 + uVar3 * 3;
          uVar1 = uVar21 * 2 + 2;
          pfVar10 = pfVar9;
          uVar21 = uVar3;
          if (((long)uVar1 < (long)uVar15) &&
             (fVar25 = (float)*(undefined8 *)(pfVar9 + 1),
             fVar27 = (float)((ulong)*(undefined8 *)(pfVar9 + 1) >> 0x20), fVar30 = pfVar9[3],
             fVar31 = (float)*(undefined8 *)(pfVar9 + 4),
             fVar32 = (float)((ulong)*(undefined8 *)(pfVar9 + 4) >> 0x20), pfVar10 = pfVar9 + 3,
             uVar21 = uVar1,
             SQRT(fVar30 * fVar30 + fVar31 * fVar31 + fVar32 * fVar32) <=
             SQRT(*pfVar9 * *pfVar9 + fVar25 * fVar25 + fVar27 * fVar27))) {
            pfVar10 = pfVar9;
            uVar21 = uVar3;
          }
          fVar25 = (float)*(undefined8 *)(pfVar10 + 1);
          fVar27 = (float)((ulong)*(undefined8 *)(pfVar10 + 1) >> 0x20);
          pfVar9 = pfVar11;
        } while (fVar28 <= SQRT(*pfVar10 * *pfVar10 + fVar25 * fVar25 + fVar27 * fVar27));
        *pfVar11 = fVar23;
        pfVar11[1] = fVar26;
        pfVar11[2] = fVar29;
      }
    }
    bVar4 = uVar20 != 0;
    uVar20 = uVar20 - 1;
  } while (bVar4);
  lVar16 = (uVar13 >> 2) * -0x5555555555555555;
  do {
    uVar13 = *(ulong *)param_1;
    *(float *)(puVar8 + -0x68) = param_1[2];
    *(ulong *)(puVar8 + -0x70) = uVar13;
    pfVar10 = param_1;
    uVar13 = 0;
    do {
      pfVar11 = (float *)(uVar13 * 2);
      uVar20 = uVar13 << 1 | 1;
      uVar15 = (long)pfVar11 + 2;
      pfVar9 = pfVar10 + uVar13 * 3 + 3;
      uVar18 = uVar20;
      if ((long)uVar15 < lVar16) {
        fVar23 = pfVar10[uVar13 * 3 + 6];
        fVar25 = (float)*(undefined8 *)(pfVar10 + uVar13 * 3 + 4);
        fVar26 = (float)((ulong)*(undefined8 *)(pfVar10 + uVar13 * 3 + 4) >> 0x20);
        fVar27 = (float)*(undefined8 *)(pfVar10 + uVar13 * 3 + 7);
        fVar29 = (float)((ulong)*(undefined8 *)(pfVar10 + uVar13 * 3 + 7) >> 0x20);
        uVar24 = -(uint)(SQRT(pfVar10[uVar13 * 3 + 3] * pfVar10[uVar13 * 3 + 3] + fVar25 * fVar25 +
                              fVar26 * fVar26) <
                        SQRT(fVar23 * fVar23 + fVar27 * fVar27 + fVar29 * fVar29));
        pfVar11 = (float *)(ulong)uVar24;
        pfVar9 = pfVar10 + uVar13 * 3 + 6;
        uVar18 = uVar15;
        if ((uVar24 & 1) == 0) {
          pfVar9 = pfVar10 + uVar13 * 3 + 3;
          uVar18 = uVar20;
        }
      }
      uVar13 = *(ulong *)pfVar9;
      pfVar10[2] = pfVar9[2];
      *(ulong *)pfVar10 = uVar13;
      pfVar10 = pfVar9;
      uVar13 = uVar18;
    } while ((long)uVar18 <= (long)(lVar16 - 2U >> 1));
    pfVar10 = unaff_x19 + -3;
    if (pfVar9 == pfVar10) {
      uVar13 = *(ulong *)(puVar8 + -0x70);
      pfVar9[2] = *(float *)(puVar8 + -0x68);
      *(ulong *)pfVar9 = uVar13;
    }
    else {
      uVar13 = *(ulong *)pfVar10;
      pfVar9[2] = unaff_x19[-1];
      *(ulong *)pfVar9 = uVar13;
      uVar13 = *(ulong *)(puVar8 + -0x70);
      unaff_x19[-1] = *(float *)(puVar8 + -0x68);
      *(ulong *)pfVar10 = uVar13;
      uVar13 = (long)pfVar9 + (0xc - (long)param_1);
      if (0xc < (long)uVar13) {
        uVar13 = (uVar13 >> 2) * -0x5555555555555555 - 2 >> 1;
        pfVar12 = param_1 + uVar13 * 3;
        fVar25 = (float)*(undefined8 *)(pfVar12 + 1);
        fVar27 = (float)((ulong)*(undefined8 *)(pfVar12 + 1) >> 0x20);
        fVar23 = *pfVar9;
        fVar26 = pfVar9[1];
        fVar29 = pfVar9[2];
        fVar28 = SQRT(fVar23 * fVar23 + fVar26 * fVar26 + fVar29 * fVar29);
        if (SQRT(*pfVar12 * *pfVar12 + fVar25 * fVar25 + fVar27 * fVar27) < fVar28) {
          do {
            pfVar17 = pfVar12;
            uVar15 = *(ulong *)pfVar17;
            pfVar9[2] = pfVar17[2];
            *(ulong *)pfVar9 = uVar15;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1 >> 1;
            pfVar12 = param_1 + uVar13 * 3;
            fVar25 = (float)*(undefined8 *)(pfVar12 + 1);
            fVar27 = (float)((ulong)*(undefined8 *)(pfVar12 + 1) >> 0x20);
            pfVar9 = pfVar17;
          } while (SQRT(*pfVar12 * *pfVar12 + fVar25 * fVar25 + fVar27 * fVar27) < fVar28);
          *pfVar17 = fVar23;
          pfVar17[1] = fVar26;
          pfVar17[2] = fVar29;
        }
      }
    }
    bVar4 = lVar16 < 3;
    lVar16 = lVar16 + -1;
    unaff_x19 = pfVar10;
    if (bVar4) {
      return pfVar11;
    }
  } while( true );
LAB_10a103ba0:
  unaff_x19 = param_2;
  if (((ulong)unaff_x28 & 1) != 0) {
    return pfVar10;
  }
  goto LAB_10a1036a8;
}



/* Entry: 10a1041f4; end: 10a104397;  */

void FUN_10a1041f4(float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = (float)*(undefined8 *)(param_2 + 1);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar5 = (float)*(undefined8 *)(param_1 + 1);
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20);
  fVar2 = (float)*(undefined8 *)(param_3 + 1);
  fVar7 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
  fVar2 = SQRT(*param_3 * *param_3 + fVar2 * fVar2 + fVar7 * fVar7);
  fVar3 = SQRT(*param_2 * *param_2 + fVar3 * fVar3 + fVar4 * fVar4);
  if (SQRT(*param_1 * *param_1 + fVar5 * fVar5 + fVar6 * fVar6) <= fVar3) {
    if (fVar2 < fVar3) {
      fVar2 = param_2[2];
      uVar1 = *(undefined8 *)param_2;
      fVar3 = param_3[2];
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      param_2[2] = fVar3;
      *(undefined8 *)param_3 = uVar1;
      param_3[2] = fVar2;
      fVar2 = (float)*(undefined8 *)(param_2 + 1);
      fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
      fVar4 = (float)*(undefined8 *)(param_1 + 1);
      fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20);
      if (SQRT(*param_2 * *param_2 + fVar2 * fVar2 + fVar3 * fVar3) <
          SQRT(*param_1 * *param_1 + fVar4 * fVar4 + fVar5 * fVar5)) {
        fVar2 = param_1[2];
        uVar1 = *(undefined8 *)param_1;
        fVar3 = param_2[2];
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        param_1[2] = fVar3;
        *(undefined8 *)param_2 = uVar1;
        param_2[2] = fVar2;
      }
    }
  }
  else {
    if (fVar3 <= fVar2) {
      fVar2 = param_1[2];
      uVar1 = *(undefined8 *)param_1;
      fVar3 = param_2[2];
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      param_1[2] = fVar3;
      *(undefined8 *)param_2 = uVar1;
      param_2[2] = fVar2;
      fVar2 = (float)*(undefined8 *)(param_3 + 1);
      fVar3 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
      fVar4 = (float)*(undefined8 *)(param_2 + 1);
      fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
      if (SQRT(*param_2 * *param_2 + fVar4 * fVar4 + fVar5 * fVar5) <=
          SQRT(*param_3 * *param_3 + fVar2 * fVar2 + fVar3 * fVar3)) {
        return;
      }
      fVar2 = param_2[2];
      uVar1 = *(undefined8 *)param_2;
      fVar3 = param_3[2];
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      param_2[2] = fVar3;
    }
    else {
      fVar2 = param_1[2];
      uVar1 = *(undefined8 *)param_1;
      fVar3 = param_3[2];
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      param_1[2] = fVar3;
    }
    *(undefined8 *)param_3 = uVar1;
    param_3[2] = fVar2;
  }
  return;
}



/* Entry: 10a104398; end: 10a1044ff;  */

void FUN_10a104398(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_10a1041f4();
  fVar2 = (float)*(undefined8 *)(param_4 + 1);
  fVar3 = (float)((ulong)*(undefined8 *)(param_4 + 1) >> 0x20);
  fVar4 = (float)*(undefined8 *)(param_3 + 1);
  fVar5 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
  if (SQRT(*param_4 * *param_4 + fVar2 * fVar2 + fVar3 * fVar3) <
      SQRT(*param_3 * *param_3 + fVar4 * fVar4 + fVar5 * fVar5)) {
    fVar2 = param_3[2];
    uVar1 = *(undefined8 *)param_3;
    fVar3 = param_4[2];
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    param_3[2] = fVar3;
    *(undefined8 *)param_4 = uVar1;
    param_4[2] = fVar2;
    fVar2 = (float)*(undefined8 *)(param_3 + 1);
    fVar3 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
    fVar4 = (float)*(undefined8 *)(param_2 + 1);
    fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
    if (SQRT(*param_3 * *param_3 + fVar2 * fVar2 + fVar3 * fVar3) <
        SQRT(*param_2 * *param_2 + fVar4 * fVar4 + fVar5 * fVar5)) {
      fVar2 = param_2[2];
      uVar1 = *(undefined8 *)param_2;
      fVar3 = param_3[2];
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      param_2[2] = fVar3;
      *(undefined8 *)param_3 = uVar1;
      param_3[2] = fVar2;
      fVar2 = (float)*(undefined8 *)(param_2 + 1);
      fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
      fVar4 = (float)*(undefined8 *)(param_1 + 1);
      fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20);
      if (SQRT(*param_2 * *param_2 + fVar2 * fVar2 + fVar3 * fVar3) <
          SQRT(*param_1 * *param_1 + fVar4 * fVar4 + fVar5 * fVar5)) {
        fVar2 = param_1[2];
        uVar1 = *(undefined8 *)param_1;
        fVar3 = param_2[2];
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        param_1[2] = fVar3;
        *(undefined8 *)param_2 = uVar1;
        param_2[2] = fVar2;
      }
    }
  }
  return;
}



/* Entry: 10a104500; end: 10a1046d7;  */

void FUN_10a104500(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_10a104398();
  fVar2 = (float)*(undefined8 *)(param_5 + 1);
  fVar3 = (float)((ulong)*(undefined8 *)(param_5 + 1) >> 0x20);
  fVar4 = (float)*(undefined8 *)(param_4 + 1);
  fVar5 = (float)((ulong)*(undefined8 *)(param_4 + 1) >> 0x20);
  if (SQRT(*param_5 * *param_5 + fVar2 * fVar2 + fVar3 * fVar3) <
      SQRT(*param_4 * *param_4 + fVar4 * fVar4 + fVar5 * fVar5)) {
    fVar2 = param_4[2];
    uVar1 = *(undefined8 *)param_4;
    fVar3 = param_5[2];
    *(undefined8 *)param_4 = *(undefined8 *)param_5;
    param_4[2] = fVar3;
    *(undefined8 *)param_5 = uVar1;
    param_5[2] = fVar2;
    fVar2 = (float)*(undefined8 *)(param_4 + 1);
    fVar3 = (float)((ulong)*(undefined8 *)(param_4 + 1) >> 0x20);
    fVar4 = (float)*(undefined8 *)(param_3 + 1);
    fVar5 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
    if (SQRT(*param_4 * *param_4 + fVar2 * fVar2 + fVar3 * fVar3) <
        SQRT(*param_3 * *param_3 + fVar4 * fVar4 + fVar5 * fVar5)) {
      fVar2 = param_3[2];
      uVar1 = *(undefined8 *)param_3;
      fVar3 = param_4[2];
      *(undefined8 *)param_3 = *(undefined8 *)param_4;
      param_3[2] = fVar3;
      *(undefined8 *)param_4 = uVar1;
      param_4[2] = fVar2;
      fVar2 = (float)*(undefined8 *)(param_3 + 1);
      fVar3 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
      fVar4 = (float)*(undefined8 *)(param_2 + 1);
      fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
      if (SQRT(*param_3 * *param_3 + fVar2 * fVar2 + fVar3 * fVar3) <
          SQRT(*param_2 * *param_2 + fVar4 * fVar4 + fVar5 * fVar5)) {
        fVar2 = param_2[2];
        uVar1 = *(undefined8 *)param_2;
        fVar3 = param_3[2];
        *(undefined8 *)param_2 = *(undefined8 *)param_3;
        param_2[2] = fVar3;
        *(undefined8 *)param_3 = uVar1;
        param_3[2] = fVar2;
        fVar2 = (float)*(undefined8 *)(param_2 + 1);
        fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
        fVar4 = (float)*(undefined8 *)(param_1 + 1);
        fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20);
        if (SQRT(*param_2 * *param_2 + fVar2 * fVar2 + fVar3 * fVar3) <
            SQRT(*param_1 * *param_1 + fVar4 * fVar4 + fVar5 * fVar5)) {
          fVar2 = param_1[2];
          uVar1 = *(undefined8 *)param_1;
          fVar3 = param_2[2];
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          param_1[2] = fVar3;
          *(undefined8 *)param_2 = uVar1;
          param_2[2] = fVar2;
        }
      }
    }
  }
  return;
}



/* Entry: 10a1046d8; end: 10a1048ff;  */

bool FUN_10a1046d8(float *param_1,float *param_2)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar2 = ((long)param_2 - (long)param_1 >> 2) * -0x5555555555555555;
  if ((long)uVar2 < 3) {
    if (uVar2 < 2) {
      return true;
    }
    if (uVar2 == 2) {
      pfVar8 = param_2 + -3;
      fVar10 = (float)*(undefined8 *)(param_2 + -2);
      fVar11 = (float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20);
      fVar12 = (float)*(undefined8 *)(param_1 + 1);
      fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20);
      if (SQRT(*param_1 * *param_1 + fVar12 * fVar12 + fVar13 * fVar13) <=
          SQRT(*pfVar8 * *pfVar8 + fVar10 * fVar10 + fVar11 * fVar11)) {
        return true;
      }
      fVar10 = param_1[2];
      uVar4 = *(undefined8 *)param_1;
      fVar11 = param_2[-1];
      *(undefined8 *)param_1 = *(undefined8 *)pfVar8;
      param_1[2] = fVar11;
      *(undefined8 *)pfVar8 = uVar4;
      param_2[-1] = fVar10;
      return true;
    }
  }
  else {
    if (uVar2 == 3) {
      FUN_10a1041f4(param_1,param_1 + 3,param_2 + -3);
      return true;
    }
    if (uVar2 == 4) {
      FUN_10a104398(param_1,param_1 + 3,param_1 + 6,param_2 + -3);
      return true;
    }
    if (uVar2 == 5) {
      FUN_10a104500(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3);
      return true;
    }
  }
  FUN_10a1041f4(param_1,param_1 + 3,param_1 + 6);
  if (param_1 + 9 != param_2) {
    lVar5 = 0;
    iVar6 = 0;
    pfVar8 = param_1 + 9;
    pfVar9 = param_1 + 6;
    do {
      pfVar3 = pfVar8;
      fVar10 = *pfVar3;
      fVar11 = pfVar3[1];
      fVar12 = pfVar3[2];
      fVar13 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12);
      fVar14 = (float)*(undefined8 *)(pfVar9 + 1);
      fVar15 = (float)((ulong)*(undefined8 *)(pfVar9 + 1) >> 0x20);
      lVar1 = lVar5;
      if (fVar13 < SQRT(*pfVar9 * *pfVar9 + fVar14 * fVar14 + fVar15 * fVar15)) {
        do {
          lVar7 = lVar1;
          *(undefined8 *)((long)param_1 + lVar7 + 0x24) =
               *(undefined8 *)((long)param_1 + lVar7 + 0x18);
          *(undefined4 *)((long)param_1 + lVar7 + 0x2c) =
               *(undefined4 *)((long)param_1 + lVar7 + 0x20);
          pfVar8 = param_1;
          if (lVar7 == -0x18) goto LAB_10a104898;
          fVar14 = *(float *)((long)param_1 + lVar7 + 0xc);
          uVar4 = *(undefined8 *)((long)param_1 + lVar7 + 0x10);
          fVar15 = (float)uVar4;
          fVar16 = (float)((ulong)uVar4 >> 0x20);
          lVar1 = lVar7 + -0xc;
        } while (fVar13 < SQRT(fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16));
        pfVar8 = (float *)((long)param_1 + lVar7 + 0x18);
LAB_10a104898:
        *pfVar8 = fVar10;
        pfVar8[1] = fVar11;
        pfVar8[2] = fVar12;
        iVar6 = iVar6 + 1;
        if (iVar6 == 8) {
          return pfVar3 + 3 == param_2;
        }
      }
      lVar5 = lVar5 + 0xc;
      pfVar8 = pfVar3 + 3;
      pfVar9 = pfVar3;
    } while (pfVar3 + 3 != param_2);
  }
  return true;
}



/* Entry: 10a104900; end: 10a104957;  */

float FUN_10a104900(float *param_1,float *param_2)

{
  return (*param_1 + *param_2) * 0.5;
}



/* Entry: 10a104958; end: 10a10498f;  */

long FUN_10a104958(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 8;
  FUN_10a104dac(&lStack_28);
  return param_1;
}



/* Entry: 10a104990; end: 10a104ba7;  */

void FUN_10a104990(undefined8 *param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_51;
  
  uStack_74 = *param_3;
  uStack_70 = (undefined4)*(undefined8 *)(param_3 + 1);
  uStack_6c = (undefined4)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
  uStack_60 = (undefined4)*(undefined8 *)(param_3 + 7);
  uStack_5c = (undefined4)((ulong)*(undefined8 *)(param_3 + 7) >> 0x20);
  uStack_68 = (undefined4)*(undefined8 *)(param_3 + 5);
  uStack_64 = (undefined4)((ulong)*(undefined8 *)(param_3 + 5) >> 0x20);
  uStack_58 = param_3[0x1a];
  puVar10 = (ulong *)(param_2 + 1);
  uVar11 = *puVar10;
  uVar12 = param_2[2];
  uVar8 = uVar11;
  if (uVar11 != uVar12) {
    do {
      uVar7 = uVar8;
      FUN_10a105098(uVar8,&uStack_74);
      uVar11 = uVar8;
      if ((uVar7 & 1) != 0) break;
      uVar8 = uVar8 + 0x30;
      uVar11 = uVar12;
    } while (uVar8 != uVar12);
    uVar12 = param_2[2];
  }
  if (uVar11 == uVar12) {
    FUN_10a104e20(&plStack_1a0,param_3);
    FUN_10a1052b4(param_1,&uStack_51,&plStack_1a0);
    plVar1 = plStack_1a0;
    plStack_1a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    lVar9 = param_2[1];
    lVar3 = param_2[2];
    if ((lVar3 - lVar9 >> 4) * -0x5555555555555555 - *param_2 == 0) {
      if (lVar9 == lVar3) goto LAB_10a104b68;
      func_0x00010a1094bc(lVar3 + -0x10);
      param_2[2] = lVar3 + -0x30;
      lVar9 = param_2[1];
    }
    uStack_198 = CONCAT44(uStack_68,uStack_6c);
    plStack_1a0 = (long *)CONCAT44(uStack_70,uStack_74);
    uStack_188 = CONCAT44(uStack_58,uStack_5c);
    uStack_190 = CONCAT44(uStack_60,uStack_64);
    plStack_178 = (long *)param_1[1];
    uStack_180 = *param_1;
    if (param_1[1] != 0) {
      plVar1 = (long *)(param_1[1] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a104f40(puVar10,lVar9,&plStack_1a0);
    plVar1 = plStack_178;
    if (plStack_178 != (long *)0x0) {
      plVar2 = plStack_178 + 1;
      do {
        lVar9 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  else {
    uVar8 = *puVar10;
    if (uVar8 != uVar11) {
      FUN_10a105100(uVar8,uVar11,uVar11 + 0x30);
      uVar8 = param_2[1];
      uVar12 = param_2[2];
    }
    if (uVar8 == uVar12) {
LAB_10a104b68:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a104b6c);
      (*pcVar6)();
    }
    lVar9 = *(long *)(uVar8 + 0x28);
    uVar13 = *(undefined8 *)(uVar8 + 0x20);
    param_1[1] = *(undefined8 *)(uVar8 + 0x28);
    *param_1 = uVar13;
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  return;
}



/* Entry: 10a104ba8; end: 10a104c07;  */

ulong * FUN_10a104ba8(ulong *param_1,ulong param_2)

{
  if (param_2 < 2) {
    param_2 = 1;
  }
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10a104c08(param_1 + 1);
  return param_1;
}



/* Entry: 10a104c08; end: 10a104d03;  */

/* WARNING: Possible PIC construction at 0x00010a104ce4: Changing call to branch */

undefined1  [16] FUN_10a104c08(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined1 **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  puVar2 = auStack_70;
  ppuVar10 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar5 = *param_1;
  if (param_2 <= (ulong)((param_1[2] - lVar5 >> 4) * -0x5555555555555555)) {
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = param_1;
    return auVar14;
  }
  if (param_2 < 0x555555555555556) {
    lVar8 = param_1[1];
    plVar3 = param_1;
    plStack_48 = param_1;
    FUN_10a104d18();
    unaff_x20 = (long)plVar3 + (lVar8 - lVar5);
    lVar5 = param_2 * 6;
    puStack_58 = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[1];
    puVar7 = (undefined8 *)(unaff_x20 + ((long)puStack_58 - (long)puVar1));
    puVar6 = puStack_58;
    puVar9 = puVar7;
    if ((long)puStack_58 - (long)puVar1 != 0) {
      do {
        uVar11 = *puVar6;
        uVar13 = puVar6[3];
        uVar12 = puVar6[2];
        puVar9[1] = puVar6[1];
        *puVar9 = uVar11;
        puVar9[3] = uVar13;
        puVar9[2] = uVar12;
        uVar11 = puVar6[4];
        puVar9[5] = puVar6[5];
        puVar9[4] = uVar11;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6 = puVar6 + 6;
        puVar9 = puVar9 + 6;
      } while (puVar6 != puVar1);
      do {
        func_0x00010a1094bc(puStack_58 + 4);
        puStack_58 = puStack_58 + 6;
      } while (puStack_58 != puVar1);
      puStack_58 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar7;
    param_1[1] = unaff_x20;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar3 + lVar5);
    puStack_68 = puStack_58;
    puStack_60 = puStack_58;
    ppuVar4 = &puStack_68;
    uVar11 = 0x10a104ce8;
    unaff_x19 = param_1;
  }
  else {
    FUN_10a104d04();
    pcStack_78 = FUN_10a104d04;
    ppuVar4 = (undefined8 **)&UNK_10f63bc0b;
    ppuStack_80 = ppuVar10;
    FUN_109ffde64();
    puVar2 = &stack0xffffffffffffff60;
    pcStack_88 = FUN_10a104d18;
    ppuVar10 = &puStack_90;
    if (param_2 < 0x555555555555556) {
      lVar5 = param_2 * 0x30;
      puStack_90 = (undefined1 *)&ppuStack_80;
      __Znwm(lVar5);
      auVar15._8_8_ = param_2;
      auVar15._0_8_ = lVar5;
      return auVar15;
    }
    uVar11 = 0x10a104d5c;
    puStack_90 = (undefined1 *)&ppuStack_80;
    func_0x000109ffded8();
  }
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(long **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar10;
  *(undefined8 *)(puVar2 + -8) = uVar11;
  puVar6 = ppuVar4[1];
  puVar7 = ppuVar4[2];
  while (puVar7 != puVar6) {
    ppuVar4[2] = puVar7 + -6;
    func_0x00010a1094bc(puVar7 + -2);
    puVar7 = ppuVar4[2];
  }
  if (*ppuVar4 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = ppuVar4;
  return auVar16;
}



/* Entry: 10a104d04; end: 10a104d17;  */

undefined1  [16] FUN_10a104d04(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f63bc0b;
  FUN_109ffde64();
  if (param_2 < 0x555555555555556) {
    lVar2 = param_2 * 0x30;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x30;
    func_0x00010a1094bc(lVar3 + -0x10);
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a104d18; end: 10a104dab;  */

undefined1  [16] FUN_10a104d18(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x555555555555556) {
    lVar1 = param_2 * 0x30;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x30;
    func_0x00010a1094bc(lVar2 + -0x10);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a104dac; end: 10a104e1f;  */

void FUN_10a104dac(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar1 = plVar2[1];
    if (plVar2[1] != lVar3) {
      do {
        lVar4 = lVar1 + -0x30;
        func_0x00010a1094bc(lVar1 + -0x10);
        lVar1 = lVar4;
      } while (lVar4 != lVar3);
      lVar4 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10a104e20; end: 10a104f3f;  */

void FUN_10a104e20(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar2 = param_2;
  func_0x00010a0ed4c8();
  uStack_88 = *(undefined8 *)((long)param_2 + 4);
  dStack_80 = (double)(float)*(undefined8 *)((long)param_2 + 0x14);
  dStack_78 = (double)(float)((ulong)*(undefined8 *)((long)param_2 + 0x14) >> 0x20);
  dStack_70 = (double)(float)*(undefined8 *)((long)param_2 + 0x1c);
  dStack_68 = (double)(float)((ulong)*(undefined8 *)((long)param_2 + 0x1c) >> 0x20);
  func_0x000107c2b054(auStack_60,(&PTR_s_NONE_110ba5758)[*(uint *)(param_2 + 0xd)]);
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  FUN_10a1053a8(&lStack_48,*plVar2,plVar2[1],plVar2[1] - *plVar2 >> 3);
  func_0x0001093f6250(param_1);
  puVar3 = &uStack_88;
  func_0x0001098f8bb0(puVar3,param_1);
  if (((ulong)puVar3 & 1) != 0) {
    if (lStack_48 != 0) {
      lStack_40 = lStack_48;
      __ZdlPv();
    }
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
    return;
  }
  FUN_10a00946c(&UNK_10f63c73e);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a104ef4);
  (*pcVar1)();
}



/* Entry: 10a104f40; end: 10a105097;  */

long * FUN_10a104f40(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = (long *)param_1[1];
  if (plVar2 < (long *)param_1[2]) {
    if (param_2 == plVar2) {
      lVar4 = *param_3;
      lVar7 = param_3[3];
      lVar3 = param_3[2];
      plVar2[1] = param_3[1];
      *plVar2 = lVar4;
      plVar2[3] = lVar7;
      plVar2[2] = lVar3;
      lVar4 = param_3[4];
      plVar2[5] = param_3[5];
      plVar2[4] = lVar4;
      param_3[4] = 0;
      param_3[5] = 0;
      param_1[1] = (long)(plVar2 + 6);
      param_1 = param_2;
    }
    else {
      FUN_10a105418(param_1,param_2,plVar2,param_2 + 6);
      lVar4 = *param_3;
      lVar7 = param_3[3];
      lVar3 = param_3[2];
      param_2[1] = param_3[1];
      *param_2 = lVar4;
      param_2[3] = lVar7;
      param_2[2] = lVar3;
      func_0x00010a105250(param_2 + 4,param_3 + 4);
      param_1 = param_2;
    }
  }
  else {
    lVar4 = *param_1;
    uVar6 = ((long)plVar2 - lVar4 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar6) {
      FUN_10a104d04();
      func_0x00010a104d5c(&plStack_58);
      __Unwind_Resume();
      if (((int)*param_1 == (int)*param_2) &&
         (*(int *)((long)param_1 + 4) == *(int *)((long)param_2 + 4) &&
          (int)param_1[1] == (int)param_2[1])) {
        bVar1 = false;
        if ((*(float *)((long)param_1 + 0xc) == *(float *)((long)param_2 + 0xc)) &&
           (bVar1 = false, !NAN(*(float *)(param_1 + 2)) && !NAN(*(float *)(param_2 + 2)))) {
          bVar1 = *(float *)(param_1 + 2) == *(float *)(param_2 + 2);
        }
        if (bVar1) {
          bVar1 = false;
          if ((*(float *)((long)param_1 + 0x14) == *(float *)((long)param_2 + 0x14)) &&
             (bVar1 = false, !NAN(*(float *)(param_1 + 3)) && !NAN(*(float *)(param_2 + 3)))) {
            bVar1 = *(float *)(param_1 + 3) == *(float *)(param_2 + 3);
          }
          if (bVar1) {
            return (long *)(ulong)(*(int *)((long)param_1 + 0x1c) == *(int *)((long)param_2 + 0x1c))
            ;
          }
        }
      }
      return (long *)0x0;
    }
    lVar3 = param_1[2] - lVar4 >> 4;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
      uVar5 = uVar6;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar5 = 0x555555555555555;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a104d18();
    }
    lStack_50 = (long)plVar2 + ((long)param_2 - lVar4);
    plStack_40 = plVar2 + uVar5 * 6;
    plStack_58 = plVar2;
    lStack_48 = lStack_50;
    FUN_10a1054bc(&plStack_58,param_3);
    func_0x00010a105640(param_1,&plStack_58,param_2);
    func_0x00010a104d5c(&plStack_58);
  }
  return param_1;
}



/* Entry: 10a105098; end: 10a1050ff;  */

bool FUN_10a105098(int *param_1,int *param_2)

{
  bool bVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1] && param_1[2] == param_2[2])) {
    bVar1 = false;
    if (((float)param_1[3] == (float)param_2[3]) &&
       (bVar1 = false, !NAN((float)param_1[4]) && !NAN((float)param_2[4]))) {
      bVar1 = (float)param_1[4] == (float)param_2[4];
    }
    if (bVar1) {
      bVar1 = false;
      if (((float)param_1[5] == (float)param_2[5]) &&
         (bVar1 = false, !NAN((float)param_1[6]) && !NAN((float)param_2[6]))) {
        bVar1 = (float)param_1[6] == (float)param_2[6];
      }
      if (bVar1) {
        return param_1[7] == param_2[7];
      }
    }
  }
  return false;
}



/* Entry: 10a105100; end: 10a1051ab;  */

long FUN_10a105100(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lStack_40 = param_2;
  lStack_38 = param_1;
  while( true ) {
    lVar2 = param_2;
    FUN_10a1051ac(&lStack_38,&lStack_40);
    lVar1 = lStack_38 + 0x30;
    lStack_40 = lStack_40 + 0x30;
    lStack_38 = lVar1;
    if (lStack_40 == param_3) break;
    param_2 = lStack_40;
    if (lVar1 != lVar2) {
      param_2 = lVar2;
    }
  }
  lStack_40 = lVar2;
  if (lVar1 != lVar2) {
    do {
      while( true ) {
        lVar3 = lVar2;
        FUN_10a1051ac(&lStack_38,&lStack_40);
        lStack_38 = lStack_38 + 0x30;
        lStack_40 = lStack_40 + 0x30;
        if (lStack_40 == param_3) break;
        lVar2 = lStack_40;
        if (lStack_38 != lVar3) {
          lVar2 = lVar3;
        }
      }
      lVar2 = lVar3;
      lStack_40 = lVar3;
    } while (lStack_38 != lVar3);
  }
  return lVar1;
}



/* Entry: 10a1051ac; end: 10a1052b3;  */

void FUN_10a1051ac(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar6 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)*param_2;
  uVar11 = puVar6[1];
  uVar9 = *puVar6;
  uVar14 = puVar6[3];
  uVar12 = puVar6[2];
  puVar5 = puVar6 + 4;
  plStack_28 = (long *)puVar6[5];
  uStack_30 = *puVar5;
  puVar6[5] = 0;
  *puVar5 = 0;
  uVar10 = *puVar8;
  uVar15 = puVar8[3];
  uVar13 = puVar8[2];
  puVar6[1] = puVar8[1];
  *puVar6 = uVar10;
  puVar6[3] = uVar15;
  puVar6[2] = uVar13;
  func_0x00010a105250(puVar5,puVar8 + 4);
  puVar8[1] = uVar11;
  *puVar8 = uVar9;
  puVar8[3] = uVar14;
  puVar8[2] = uVar12;
  func_0x00010a105250(puVar8 + 4,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a1052b4; end: 10a10530b;  */

void FUN_10a1052b4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x138;
  __Znwm();
  FUN_10a10530c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a10530c; end: 10a105353;  */

undefined8 * FUN_10a10530c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba4a90;
  func_0x0001094cf620(param_1 + 3);
  return param_1;
}



/* Entry: 10a105354; end: 10a105363;  */

void FUN_10a105354(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba4a90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a105364; end: 10a105383;  */

void FUN_10a105364(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba4a90;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a105384; end: 10a1053a7;  */

void FUN_10a105384(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a10539c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 10a1053a8; end: 10a105417;  */

void FUN_10a1053a8(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a0cf094(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a105418; end: 10a1054bb;  */

void FUN_10a105418(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined8 *)((long)puVar4 + (param_2 - (long)param_4));
  puVar2 = puVar4;
  for (puVar1 = puVar3; puVar1 < param_3; puVar1 = puVar1 + 6) {
    uVar6 = *puVar1;
    uVar8 = puVar1[3];
    uVar7 = puVar1[2];
    puVar2[1] = puVar1[1];
    *puVar2 = uVar6;
    puVar2[3] = uVar8;
    puVar2[2] = uVar7;
    uVar6 = puVar1[4];
    puVar2[5] = puVar1[5];
    puVar2[4] = uVar6;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar2 + 6;
  }
  *(undefined8 **)(param_1 + 8) = puVar2;
  if (puVar4 != param_4) {
    lVar5 = 0;
    do {
      uVar6 = *(undefined8 *)((long)puVar3 + lVar5 + -0x30);
      uVar8 = *(undefined8 *)((long)puVar3 + lVar5 + -0x18);
      uVar7 = *(undefined8 *)((long)puVar3 + lVar5 + -0x20);
      *(undefined8 *)((long)puVar4 + lVar5 + -0x28) = *(undefined8 *)((long)puVar3 + lVar5 + -0x28);
      *(undefined8 *)((long)puVar4 + lVar5 + -0x30) = uVar6;
      *(undefined8 *)((long)puVar4 + lVar5 + -0x18) = uVar8;
      *(undefined8 *)((long)puVar4 + lVar5 + -0x20) = uVar7;
      func_0x00010a105250((long)puVar4 + lVar5 + -0x10,(long)puVar3 + lVar5 + -0x10);
      lVar5 = lVar5 + -0x30;
    } while ((long)param_4 - (long)puVar4 != lVar5);
  }
  return;
}



/* Entry: 10a1054bc; end: 10a105773;  */

void FUN_10a1054bc(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uStack_68;
  undefined8 *puStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar6 = (undefined8 *)param_1[2];
  if (puVar6 == (undefined8 *)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
    puVar7 = (undefined8 *)param_1[1];
    if (puVar7 < puVar4 || (long)puVar7 - (long)puVar4 == 0) {
      uVar3 = ((long)puVar6 - (long)puVar4 >> 4) * 0x5555555555555556;
      if ((long)puVar6 - (long)puVar4 == 0) {
        uVar3 = 1;
      }
      uVar5 = uVar3 >> 2;
      uVar2 = param_1[4];
      uStack_48 = uVar2;
      FUN_10a104d18();
      puVar7 = (undefined8 *)(uVar2 + uVar5 * 0x30);
      uStack_58 = param_1[2];
      puStack_60 = (undefined8 *)param_1[1];
      puVar6 = puVar7;
      if (uStack_58 - (long)puStack_60 != 0) {
        puVar6 = (undefined8 *)((long)puVar7 + (uStack_58 - (long)puStack_60));
        puVar4 = puVar7;
        do {
          uVar8 = *puStack_60;
          uVar10 = puStack_60[3];
          uVar9 = puStack_60[2];
          puVar4[1] = puStack_60[1];
          *puVar4 = uVar8;
          puVar4[3] = uVar10;
          puVar4[2] = uVar9;
          uVar8 = puStack_60[4];
          puVar4[5] = puStack_60[5];
          puVar4[4] = uVar8;
          puStack_60[4] = 0;
          puStack_60[5] = 0;
          puVar4 = puVar4 + 6;
          puStack_60 = puStack_60 + 6;
        } while (puVar4 != puVar6);
        uStack_58 = param_1[2];
        puStack_60 = (undefined8 *)param_1[1];
      }
      uStack_68 = *param_1;
      *param_1 = uVar2;
      param_1[1] = (ulong)puVar7;
      uStack_50 = param_1[3];
      param_1[2] = (ulong)puVar6;
      param_1[3] = uVar2 + uVar3 * 0x30;
      func_0x00010a104d5c(&uStack_68);
      puVar6 = (undefined8 *)param_1[2];
    }
    else {
      lVar1 = (((long)puVar7 - (long)puVar4 >> 4) * -0x5555555555555555 + 1) / 2;
      puVar4 = puVar7 + lVar1 * -6;
      if (puVar7 != puVar6) {
        do {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          puVar4[1] = puVar7[1];
          *puVar4 = uVar8;
          puVar4[3] = uVar10;
          puVar4[2] = uVar9;
          func_0x00010a105250(puVar4 + 4,puVar7 + 4);
          puVar7 = puVar7 + 6;
          puVar4 = puVar4 + 6;
        } while (puVar7 != puVar6);
        puVar7 = (undefined8 *)param_1[1];
      }
      puVar6 = puVar4;
      param_1[1] = (ulong)(puVar7 + lVar1 * -6);
      param_1[2] = (ulong)puVar6;
    }
  }
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  puVar6[1] = param_2[1];
  *puVar6 = uVar8;
  puVar6[3] = uVar10;
  puVar6[2] = uVar9;
  uVar8 = param_2[4];
  puVar6[5] = param_2[5];
  puVar6[4] = uVar8;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[2] = param_1[2] + 0x30;
  return;
}



/* Entry: 10a105774; end: 10a1057db;  */

undefined4 FUN_10a105774(uint param_1,uint param_2,ulong param_3,long param_4,ulong param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((((param_1 >> 2 < param_5) &&
       (uVar2 = (ulong)((param_2 << 8 | param_1 << 0x10) >> 0xc) & 0x3f, uVar2 < param_5)) &&
      (uVar3 = (ulong)(((uint)param_3 & 0xff | (param_2 & 0xff) << 8) >> 6) & 0x3f, uVar3 < param_5)
      ) && ((param_3 & 0x3f) < param_5)) {
    return CONCAT13(*(undefined1 *)(param_4 + (param_3 & 0x3f)),
                    CONCAT12(*(undefined1 *)(param_4 + uVar3),
                             CONCAT11(*(undefined1 *)(param_4 + uVar2),
                                      *(undefined1 *)(param_4 + (ulong)(param_1 >> 2)))));
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1057dc);
  (*pcVar1)();
}



/* Entry: 10a1057dc; end: 10a10592f;  */

void FUN_10a1057dc(long *param_1,ulong param_2)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  cVar2 = *(char *)((long)param_1 + 0x17);
  uVar6 = (ulong)cVar2;
  if ((long)uVar6 < 0) {
    uVar6 = param_1[1];
    uVar4 = (param_1[2] & 0x7fffffffffffffffU) - 1;
    uVar5 = (ulong)param_1[2] >> 0x38;
  }
  else {
    uVar4 = 0x16;
    uVar5 = uVar6;
  }
  bVar1 = 0x16 >= param_2;
  if (0x16 < param_2) {
    plVar7 = param_1;
    if (uVar4 < param_2) {
      plVar3 = (long *)(param_2 + 1);
      __Znwm();
      if (((uint)uVar5 >> 7 & 1) != 0) {
LAB_10a1058ac:
        plVar7 = (long *)*param_1;
        goto LAB_10a1058b0;
      }
    }
    else {
      plVar3 = (long *)(param_2 + 1);
      __Znwm();
      if ((-1 < cVar2) || (uVar4 = param_1[2], (uVar4 & 0x7fffffffffffffff) - 1 < param_2)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar3);
        return;
      }
      uVar5 = uVar4 >> 0x38;
      if ((long)uVar4 < 0) goto LAB_10a1058ac;
    }
LAB_10a10585c:
    uVar5 = uVar5 & 0xff;
  }
  else {
    plVar7 = (long *)*param_1;
    plVar3 = param_1;
    if (((uint)uVar5 >> 7 & 1) == 0) goto LAB_10a10585c;
LAB_10a1058b0:
    uVar5 = param_1[1];
    bVar1 = true;
  }
  if (uVar5 != 0xffffffffffffffff) {
    _memmove(plVar3,plVar7,uVar5 + 1);
  }
  if (bVar1) {
    __ZdlPv(plVar7);
  }
  if (param_2 < 0x17) {
    *(byte *)((long)param_1 + 0x17) = (byte)uVar6 & 0x7f;
  }
  else {
    param_1[1] = uVar6;
    param_1[2] = param_2 + 1 | 0x8000000000000000;
    *param_1 = (long)plVar3;
  }
  return;
}



/* Entry: 10a105930; end: 10a105a37;  */

undefined1  [16] FUN_10a105930(long *param_1,ulong param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  lVar16 = param_1[1];
  if ((ulong)(param_1[2] - lVar16) < param_2) {
    lVar16 = lVar16 - *param_1;
    uVar6 = lVar16 + param_2;
    if ((long)uVar6 < 0) {
      FUN_10a105a38();
      FUN_109ffde64(&UNK_10f63bc0b);
      uVar6 = param_2 + 8;
      _malloc();
      if (uVar6 != 0) {
        puVar12 = (ulong *)(uVar6 & 0xfffffffffffffff8) + 1;
        *(ulong *)(uVar6 & 0xfffffffffffffff8) = uVar6;
        if (puVar12 != (ulong *)0x0) {
          auVar19._8_8_ = param_2;
          auVar19._0_8_ = puVar12;
          return auVar19;
        }
      }
      lVar7 = 8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      puVar17 = PTR___ZTISt9bad_alloc_110346a68;
      puVar8 = PTR___ZNSt9bad_allocD1Ev_110346998;
      ___cxa_throw();
      lVar16 = lVar7;
      if (param_4 != (undefined1 *)0x0) {
        FUN_10a103344();
        puVar13 = *(undefined1 **)(lVar7 + 8);
        for (; puVar17 != puVar8; puVar17 = puVar17 + 1) {
          *puVar13 = *puVar17;
          puVar13 = puVar13 + 1;
        }
        *(undefined1 **)(lVar7 + 8) = puVar13;
        puVar17 = param_4;
      }
      auVar20._8_8_ = puVar17;
      auVar20._0_8_ = lVar16;
      return auVar20;
    }
    uVar9 = param_1[2] - *param_1;
    uVar14 = uVar9 * 2;
    if (uVar14 < uVar6 || uVar14 - uVar6 == 0) {
      uVar14 = uVar6;
    }
    if (0x3ffffffffffffffe < uVar9) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      FUN_10a105a4c();
    }
    lVar16 = (long)plVar4 + lVar16;
    lVar1 = lVar16 + param_2;
    lVar7 = lVar16;
    _bzero(lVar16,param_2);
    puVar11 = (undefined1 *)*param_1;
    puVar2 = (undefined1 *)param_1[1];
    lVar3 = (long)puVar11 - (long)puVar2;
    puVar13 = (undefined1 *)(lVar16 + lVar3);
    puVar15 = puVar13;
    if (lVar3 != 0) {
      do {
        puVar10 = puVar11 + 1;
        *puVar15 = *puVar11;
        puVar11 = puVar10;
        puVar15 = puVar15 + 1;
      } while (puVar10 != puVar2);
      puVar11 = (undefined1 *)*param_1;
    }
    *param_1 = (long)puVar13;
    param_1[1] = lVar1;
    param_1[2] = (long)plVar4 + uVar14;
    if (puVar11 != (undefined1 *)0x0) {
      uVar5 = *(undefined8 *)(puVar11 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(uVar5);
      auVar21._8_8_ = param_2;
      auVar21._0_8_ = uVar5;
      return auVar21;
    }
  }
  else {
    lVar7 = lVar16;
    if (param_2 != 0) {
      lVar7 = lVar16 + param_2;
      _bzero(lVar16,param_2);
    }
    param_1[1] = lVar7;
  }
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = lVar7;
  return auVar18;
}



/* Entry: 10a105a38; end: 10a105a4b;  */

undefined1  [16]
FUN_10a105a38(undefined8 param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  FUN_109ffde64(&UNK_10f63bc0b);
  uVar1 = param_2 + 8;
  _malloc();
  if (uVar1 != 0) {
    puVar5 = (ulong *)(uVar1 & 0xfffffffffffffff8) + 1;
    *(ulong *)(uVar1 & 0xfffffffffffffff8) = uVar1;
    if (puVar5 != (ulong *)0x0) {
      auVar8._8_8_ = param_2;
      auVar8._0_8_ = puVar5;
      return auVar8;
    }
  }
  lVar2 = 8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puVar7 = PTR___ZTISt9bad_alloc_110346a68;
  puVar4 = PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  lVar3 = lVar2;
  if (param_4 != (undefined1 *)0x0) {
    FUN_10a103344();
    puVar6 = *(undefined1 **)(lVar2 + 8);
    for (; puVar7 != puVar4; puVar7 = puVar7 + 1) {
      *puVar6 = *puVar7;
      puVar6 = puVar6 + 1;
    }
    *(undefined1 **)(lVar2 + 8) = puVar6;
    puVar7 = param_4;
  }
  auVar9._8_8_ = puVar7;
  auVar9._0_8_ = lVar3;
  return auVar9;
}



/* Entry: 10a105a4c; end: 10a105aa7;  */

undefined1  [16]
FUN_10a105a4c(undefined8 param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar1 = param_2 + 8;
  _malloc();
  if (uVar1 != 0) {
    puVar5 = (ulong *)(uVar1 & 0xfffffffffffffff8) + 1;
    *(ulong *)(uVar1 & 0xfffffffffffffff8) = uVar1;
    if (puVar5 != (ulong *)0x0) {
      auVar8._8_8_ = param_2;
      auVar8._0_8_ = puVar5;
      return auVar8;
    }
  }
  lVar2 = 8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puVar7 = PTR___ZTISt9bad_alloc_110346a68;
  puVar4 = PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  lVar3 = lVar2;
  if (param_4 != (undefined1 *)0x0) {
    FUN_10a103344();
    puVar6 = *(undefined1 **)(lVar2 + 8);
    for (; puVar7 != puVar4; puVar7 = puVar7 + 1) {
      *puVar6 = *puVar7;
      puVar6 = puVar6 + 1;
    }
    *(undefined1 **)(lVar2 + 8) = puVar6;
    puVar7 = param_4;
  }
  auVar9._8_8_ = puVar7;
  auVar9._0_8_ = lVar3;
  return auVar9;
}



/* Entry: 10a105aa8; end: 10a105b17;  */

void FUN_10a105aa8(long param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a103344(param_1,param_4);
    puVar1 = *(undefined1 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined1 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a105b18; end: 10a105b1f;  */

void FUN_10a105b18(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a105b1c);
  (*pcVar1)();
}



/* Entry: 10a105b20; end: 10a105bbb;  */

undefined8 * FUN_10a105b20(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  lVar4 = param_2[7];
  uVar7 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar5 = (undefined8 *)param_2[9];
    puVar6 = (undefined8 *)param_1[9];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1);
  }
  return param_1;
}



/* Entry: 10a105bbc; end: 10a105c3f;  */

void FUN_10a105bbc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  param_1[0xb] = 0;
  param_1[10] = 0;
  piVar2 = (int *)((long)param_2 + 4);
  iVar1 = *piVar2;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  puVar3 = (undefined8 *)param_2[9];
  if (iVar1 < 3) {
    param_1[10] = *puVar3;
    param_1[0xb] = puVar3[1];
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = puVar3;
    param_2[8] = param_2 + 1;
    param_2[9] = param_2 + 10;
  }
  *(undefined4 *)param_2 = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  return;
}



/* Entry: 10a105c40; end: 10a105cdb;  */

long FUN_10a105c40(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10a105cdc; end: 10a105e77;  */

/* WARNING: Removing unreachable block (ram,0x00010a105e38) */

long * FUN_10a105cdc(long *param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x23;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = (long *)*param_1;
  plVar1 = param_1;
  if ((ulong)((param_1[2] - (long)plVar4 >> 3) * -0x5555555555555555) < param_4) {
    plVar4 = param_1;
    func_0x000107c3193c();
    if (0xaaaaaaaaaaaaaaa < param_4) {
      FUN_10a05a0c0();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0xaaaaaaaaaaaaaaa;
      __Unwind_Resume();
      plVar1 = (long *)plVar4[1];
      *plVar4 = (long)&PTR_DAT_110ba4b28;
      plVar4[1] = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      return plVar4;
    }
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < param_4 || uVar3 - param_4 == 0) {
      uVar3 = param_4;
    }
    if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = 0xaaaaaaaaaaaaaaa;
    }
    FUN_10a0cf150(param_1,uVar3);
    FUN_10a0cf198(param_1,param_2,param_3,param_1[1]);
  }
  else {
    plVar5 = (long *)param_1[1];
    lVar2 = (long)plVar5 - (long)plVar4;
    if (param_4 <= (ulong)((lVar2 >> 3) * -0x5555555555555555)) {
      if (param_2 != param_3) {
        do {
          plVar1 = plVar4;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar4,param_2);
          param_2 = param_2 + 0x18;
          plVar4 = plVar4 + 3;
        } while (param_2 != param_3);
        plVar5 = (long *)param_1[1];
      }
      for (; plVar5 != plVar4; plVar5 = plVar5 + -3) {
      }
      param_1[1] = (long)plVar4;
      return plVar1;
    }
    lVar6 = param_2;
    lVar7 = lVar2;
    if (plVar5 != plVar4) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar4,lVar6);
        plVar4 = plVar4 + 3;
        lVar7 = lVar7 + -0x18;
        lVar6 = lVar6 + 0x18;
      } while (lVar7 != 0);
      plVar5 = (long *)param_1[1];
    }
    FUN_10a0cf198(param_1,param_2 + lVar2,param_3,plVar5);
  }
  param_1[1] = (long)plVar1;
  return plVar1;
}



/* Entry: 10a105e78; end: 10a105fdb;  */

undefined8 * FUN_10a105e78(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_DAT_110ba4b28;
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10a105fdc; end: 10a105fef;  */

void FUN_10a105fdc(void)

{
  func_0x00010a105f78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a105ff0; end: 10a10606f;  */

undefined8 * FUN_10a105ff0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = *param_3;
  if (param_2 != 0) {
    FUN_10a106070(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2);
    param_1[1] = lVar1 + param_2;
  }
  return param_1;
}



/* Entry: 10a106070; end: 10a1060bf;  */

void FUN_10a106070(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  if (-1 < param_2) {
    plVar1 = (long *)param_1[3];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2,1);
    }
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2;
    return;
  }
  FUN_10a1060c0();
  puVar2 = (undefined8 *)&UNK_10f63bc0b;
  FUN_109ffde64();
  plVar1 = (long *)*puVar2;
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    plVar1[1] = lVar4;
    plVar3 = (long *)plVar1[3];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,plVar1[2] - lVar4,1);
    }
  }
  return;
}



/* Entry: 10a1060c0; end: 10a1060d3;  */

void FUN_10a1060c0(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = (undefined8 *)&UNK_10f63bc0b;
  FUN_109ffde64();
  plVar4 = (long *)*puVar1;
  lVar3 = *plVar4;
  if (lVar3 != 0) {
    plVar4[1] = lVar3;
    plVar2 = (long *)plVar4[3];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3,plVar4[2] - lVar3,1);
    }
  }
  return;
}



/* Entry: 10a1060d4; end: 10a106117;  */

void FUN_10a1060d4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  lVar2 = *plVar3;
  if (lVar2 != 0) {
    plVar3[1] = lVar2;
    plVar1 = (long *)plVar3[3];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2,plVar3[2] - lVar2,1);
    }
  }
  return;
}



/* Entry: 10a106118; end: 10a106b47;  */

void FUN_10a106118(float *param_1,float *param_2,long *param_3,long param_4,uint param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  float *pfVar4;
  code *pcVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  undefined8 uVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  float *pfVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  float *pfVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  do {
    pfVar20 = param_2 + -2;
    pfVar10 = param_1;
LAB_10a10616c:
    param_1 = pfVar10;
    uVar8 = (long)param_2 - (long)param_1 >> 3;
    if (uVar8 - 2 == 0 || (long)uVar8 < 2) {
      if (uVar8 < 2) {
        return;
      }
      if (uVar8 == 2) {
        fVar22 = *(float *)*param_3;
        fVar23 = ((float *)*param_3)[1];
        if (-((param_2[-1] - fVar23) * (*param_1 - fVar22)) +
            (param_1[1] - fVar23) * (param_2[-2] - fVar22) <= 1e-06) {
          return;
        }
        uVar9 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_2 + -2) = uVar9;
        return;
      }
    }
    else {
      if (uVar8 == 3) {
        pfVar10 = param_1 + 2;
        fVar22 = (float)*(undefined8 *)*param_3;
        fVar24 = (float)*(undefined8 *)pfVar10;
        fVar23 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
        fVar25 = (float)((ulong)*(undefined8 *)pfVar10 >> 0x20);
        uVar9 = NEON_rev64(CONCAT44(fVar25 - fVar23,fVar24 - fVar22),4);
        fVar24 = (fVar24 - fVar22) * -((float)((ulong)*(undefined8 *)pfVar20 >> 0x20) - fVar23) +
                 ((float)*(undefined8 *)pfVar20 - fVar22) * (float)uVar9;
        if (((float)*(undefined8 *)param_1 - fVar22) * -(fVar25 - fVar23) +
            ((float)((ulong)*(undefined8 *)param_1 >> 0x20) - fVar23) *
            (float)((ulong)uVar9 >> 0x20) <= 1e-06) {
          if (1e-06 < fVar24) {
            uVar9 = *(undefined8 *)pfVar10;
            *(undefined8 *)pfVar10 = *(undefined8 *)pfVar20;
            *(undefined8 *)pfVar20 = uVar9;
            fVar22 = *(float *)*param_3;
            fVar23 = ((float *)*param_3)[1];
            if (1e-06 < -((param_1[3] - fVar23) * (*param_1 - fVar22)) +
                        (param_1[1] - fVar23) * (*pfVar10 - fVar22)) {
              uVar9 = *(undefined8 *)param_1;
              *(undefined8 *)param_1 = *(undefined8 *)pfVar10;
              *(undefined8 *)pfVar10 = uVar9;
              return;
            }
          }
        }
        else {
          uVar9 = *(undefined8 *)param_1;
          if (fVar24 <= 1e-06) {
            *(undefined8 *)param_1 = *(undefined8 *)pfVar10;
            *(undefined8 *)pfVar10 = uVar9;
            fVar22 = *(float *)*param_3;
            fVar23 = ((float *)*param_3)[1];
            if (-((param_2[-1] - fVar23) * ((float)uVar9 - fVar22)) +
                ((float)((ulong)uVar9 >> 0x20) - fVar23) * (*pfVar20 - fVar22) <= 1e-06) {
              return;
            }
            *(undefined8 *)pfVar10 = *(undefined8 *)pfVar20;
          }
          else {
            *(undefined8 *)param_1 = *(undefined8 *)pfVar20;
          }
          *(undefined8 *)pfVar20 = uVar9;
        }
        return;
      }
      if (uVar8 == 4) {
        FUN_10a106b48(param_1,param_1 + 2,param_1 + 4,param_3);
        fVar22 = *(float *)*param_3;
        fVar23 = ((float *)*param_3)[1];
        if (-((param_2[-1] - fVar23) * (param_1[4] - fVar22)) +
            (param_1[5] - fVar23) * (param_2[-2] - fVar22) <= 1e-06) {
          return;
        }
        uVar9 = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_2 + -2) = uVar9;
        fVar22 = *(float *)*param_3;
        fVar23 = ((float *)*param_3)[1];
        if (-((param_1[5] - fVar23) * (param_1[2] - fVar22)) +
            (param_1[3] - fVar23) * (param_1[4] - fVar22) <= 1e-06) {
          return;
        }
        uVar9 = *(undefined8 *)(param_1 + 2);
        uVar3 = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(param_1 + 2) = uVar3;
        *(undefined8 *)(param_1 + 4) = uVar9;
        fVar22 = *(float *)*param_3;
        fVar23 = ((float *)*param_3)[1];
        if (-(((float)((ulong)uVar3 >> 0x20) - fVar23) * (*param_1 - fVar22)) +
            (param_1[1] - fVar23) * ((float)uVar3 - fVar22) <= 1e-06) {
          return;
        }
        uVar9 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = uVar3;
        *(undefined8 *)(param_1 + 2) = uVar9;
        return;
      }
      if (uVar8 == 5) {
        pfVar10 = param_1 + 2;
        pfVar6 = param_1 + 4;
        pfVar7 = param_1 + 6;
        FUN_10a106b48();
        fVar22 = *(float *)*param_3;
        fVar23 = ((float *)*param_3)[1];
        if (1e-06 < -((param_1[7] - fVar23) * (*pfVar6 - fVar22)) +
                    (param_1[5] - fVar23) * (*pfVar7 - fVar22)) {
          uVar9 = *(undefined8 *)pfVar6;
          *(undefined8 *)pfVar6 = *(undefined8 *)pfVar7;
          *(undefined8 *)pfVar7 = uVar9;
          fVar22 = *(float *)*param_3;
          fVar23 = ((float *)*param_3)[1];
          if (1e-06 < -((param_1[5] - fVar23) * (*pfVar10 - fVar22)) +
                      (param_1[3] - fVar23) * (*pfVar6 - fVar22)) {
            uVar9 = *(undefined8 *)pfVar10;
            *(undefined8 *)pfVar10 = *(undefined8 *)pfVar6;
            *(undefined8 *)pfVar6 = uVar9;
            fVar22 = *(float *)*param_3;
            fVar23 = ((float *)*param_3)[1];
            if (1e-06 < -((param_1[3] - fVar23) * (*param_1 - fVar22)) +
                        (param_1[1] - fVar23) * (*pfVar10 - fVar22)) {
              uVar9 = *(undefined8 *)param_1;
              *(undefined8 *)param_1 = *(undefined8 *)pfVar10;
              *(undefined8 *)pfVar10 = uVar9;
              fVar22 = *(float *)*param_3;
              fVar23 = ((float *)*param_3)[1];
            }
          }
        }
        if (1e-06 < -((param_2[-1] - fVar23) * (*pfVar7 - fVar22)) +
                    (param_1[7] - fVar23) * (*pfVar20 - fVar22)) {
          uVar9 = *(undefined8 *)pfVar7;
          *(undefined8 *)pfVar7 = *(undefined8 *)pfVar20;
          *(undefined8 *)pfVar20 = uVar9;
          fVar22 = *(float *)*param_3;
          fVar23 = ((float *)*param_3)[1];
          if (1e-06 < -((param_1[7] - fVar23) * (*pfVar6 - fVar22)) +
                      (param_1[5] - fVar23) * (*pfVar7 - fVar22)) {
            uVar9 = *(undefined8 *)pfVar6;
            *(undefined8 *)pfVar6 = *(undefined8 *)pfVar7;
            *(undefined8 *)pfVar7 = uVar9;
            fVar22 = *(float *)*param_3;
            fVar23 = ((float *)*param_3)[1];
            if (1e-06 < -((param_1[5] - fVar23) * (*pfVar10 - fVar22)) +
                        (param_1[3] - fVar23) * (*pfVar6 - fVar22)) {
              uVar9 = *(undefined8 *)pfVar10;
              *(undefined8 *)pfVar10 = *(undefined8 *)pfVar6;
              *(undefined8 *)pfVar6 = uVar9;
              fVar22 = *(float *)*param_3;
              fVar23 = ((float *)*param_3)[1];
              if (1e-06 < -((param_1[3] - fVar23) * (*param_1 - fVar22)) +
                          (param_1[1] - fVar23) * (*pfVar10 - fVar22)) {
                uVar9 = *(undefined8 *)param_1;
                *(undefined8 *)param_1 = *(undefined8 *)pfVar10;
                *(undefined8 *)pfVar10 = uVar9;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar8 < 0x18) {
      pfVar10 = param_1 + 2;
      if ((param_5 & 1) == 0) {
        if (param_1 == param_2 || pfVar10 == param_2) {
          return;
        }
        lVar12 = -8;
        lVar13 = 0;
        lVar19 = 8;
        do {
          pfVar20 = (float *)((long)param_1 + lVar13);
          fVar22 = *pfVar10;
          fVar24 = *(float *)*param_3;
          fVar25 = ((float *)*param_3)[1];
          fVar23 = pfVar20[3];
          pfVar6 = pfVar10;
          lVar13 = lVar12;
          if (1e-06 < -((fVar23 - fVar25) * (*pfVar20 - fVar24)) +
                      (pfVar20[1] - fVar25) * (fVar22 - fVar24)) {
            do {
              pfVar20 = pfVar6;
              *(undefined8 *)pfVar20 = *(undefined8 *)(pfVar20 + -2);
              if (lVar13 == 0) {
LAB_10a106b44:
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10a106b48);
                (*pcVar5)();
              }
              fVar24 = *(float *)*param_3;
              fVar25 = ((float *)*param_3)[1];
              pfVar6 = pfVar20 + -2;
              lVar13 = lVar13 + 8;
            } while (1e-06 < -((fVar23 - fVar25) * (pfVar20[-4] - fVar24)) +
                             (pfVar20[-3] - fVar25) * (fVar22 - fVar24));
            pfVar20[-2] = fVar22;
            pfVar20[-1] = fVar23;
          }
          pfVar10 = pfVar10 + 2;
          lVar12 = lVar12 + -8;
          lVar13 = lVar19;
          lVar19 = lVar19 + 8;
          if (pfVar10 == param_2) {
            return;
          }
        } while( true );
      }
      if (param_1 == param_2 || pfVar10 == param_2) {
        return;
      }
      lVar13 = 0;
      pfVar20 = param_1;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar11 = uVar8 - 2 >> 1;
      uVar16 = uVar11;
      goto LAB_10a1067c8;
    }
    pfVar10 = param_1 + (uVar8 & 0xfffffffffffffffe);
    if (uVar8 < 0x81) {
      FUN_10a106b48(pfVar10,param_1,pfVar20,param_3);
    }
    else {
      FUN_10a106b48(param_1,pfVar10,pfVar20,param_3);
      FUN_10a106b48(param_1 + 2,pfVar10 + -2,param_2 + -4,param_3);
      FUN_10a106b48(param_1 + 4,pfVar10 + 2,param_2 + -6,param_3);
      FUN_10a106b48(pfVar10 + -2,pfVar10,pfVar10 + 2,param_3);
      uVar9 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)pfVar10;
      *(undefined8 *)pfVar10 = uVar9;
    }
    param_4 = param_4 + -1;
    if ((param_5 & 1) == 0) {
      pfVar10 = (float *)*param_3;
      fVar24 = *pfVar10;
      fVar25 = pfVar10[1];
      fVar23 = *param_1;
      fVar22 = param_1[1];
      fVar27 = fVar22 - fVar25;
      fVar26 = fVar23 - fVar24;
      if (-((param_1[-1] - fVar25) * fVar26) + fVar27 * (param_1[-2] - fVar24) <= 1e-06) {
        fVar28 = -fVar27;
        pfVar6 = param_1 + 2;
        if (-(fVar27 * (param_2[-2] - fVar24)) + (param_2[-1] - fVar25) * fVar26 <= 1e-06) {
          do {
            pfVar10 = pfVar6;
            if (param_2 <= pfVar10) break;
            pfVar6 = pfVar10 + 2;
          } while ((*pfVar10 - fVar24) * fVar28 + (pfVar10[1] - fVar25) * fVar26 <= 1e-06);
        }
        else {
          do {
            pfVar10 = pfVar6;
            if (pfVar10 == param_2) goto LAB_10a106b44;
            pfVar6 = pfVar10 + 2;
          } while ((*pfVar10 - fVar24) * fVar28 + (pfVar10[1] - fVar25) * fVar26 <= 1e-06);
        }
        pfVar6 = param_2;
        pfVar7 = param_2;
        if (pfVar10 < param_2) {
          do {
            if (pfVar7 == param_1) goto LAB_10a106b44;
            pfVar6 = pfVar7 + -2;
            pfVar14 = pfVar7 + -1;
            pfVar7 = pfVar6;
          } while (1e-06 < (*pfVar6 - fVar24) * fVar28 + (*pfVar14 - fVar25) * fVar26);
        }
        while (pfVar10 < pfVar6) {
          uVar9 = *(undefined8 *)pfVar10;
          *(undefined8 *)pfVar10 = *(undefined8 *)pfVar6;
          *(undefined8 *)pfVar6 = uVar9;
          pfVar7 = pfVar10;
          do {
            pfVar10 = pfVar7 + 2;
            if (pfVar10 == param_2) goto LAB_10a106b44;
            fVar24 = *(float *)*param_3;
            fVar25 = ((float *)*param_3)[1];
            pfVar14 = pfVar7 + 3;
            pfVar7 = pfVar10;
          } while (-((fVar22 - fVar25) * (*pfVar10 - fVar24)) +
                   (*pfVar14 - fVar25) * (fVar23 - fVar24) <= 1e-06);
          pfVar7 = pfVar6;
          do {
            if (pfVar7 == param_1) goto LAB_10a106b44;
            pfVar6 = pfVar7 + -2;
            pfVar14 = pfVar7 + -1;
            pfVar7 = pfVar6;
          } while (1e-06 < (*pfVar6 - fVar24) * -(fVar22 - fVar25) +
                           (*pfVar14 - fVar25) * (fVar23 - fVar24));
        }
        if (pfVar10 + -2 != param_1) {
          *(undefined8 *)param_1 = *(undefined8 *)(pfVar10 + -2);
        }
        param_5 = 0;
        pfVar10[-2] = fVar23;
        pfVar10[-1] = fVar22;
        goto LAB_10a10616c;
      }
    }
    else {
      fVar23 = *param_1;
      fVar22 = param_1[1];
      pfVar10 = (float *)*param_3;
    }
    lVar13 = 0;
    do {
      pfVar6 = (float *)((long)param_1 + lVar13 + 8);
      if (pfVar6 == param_2) goto LAB_10a106b44;
      fVar24 = *pfVar10;
      fVar25 = pfVar10[1];
      fVar26 = fVar22 - fVar25;
      lVar19 = lVar13 + 0xc;
      fVar27 = fVar23 - fVar24;
      lVar13 = lVar13 + 8;
    } while (1e-06 < -((*(float *)((long)param_1 + lVar19) - fVar25) * fVar27) +
                     fVar26 * (*pfVar6 - fVar24));
    pfVar6 = (float *)((long)param_1 + lVar13);
    pfVar10 = param_2;
    if (lVar13 == 8) {
      do {
        pfVar7 = pfVar10;
        if (pfVar10 <= pfVar6) break;
        pfVar7 = pfVar10 + -2;
        pfVar14 = pfVar10 + -1;
        pfVar10 = pfVar7;
      } while (-((*pfVar14 - fVar25) * fVar27) + fVar26 * (*pfVar7 - fVar24) <= 1e-06);
    }
    else {
      do {
        if (pfVar10 == param_1) goto LAB_10a106b44;
        pfVar7 = pfVar10 + -2;
        pfVar14 = pfVar10 + -1;
        pfVar10 = pfVar7;
      } while (-((*pfVar14 - fVar25) * fVar27) + fVar26 * (*pfVar7 - fVar24) <= 1e-06);
    }
    pfVar14 = pfVar7;
    pfVar10 = pfVar6;
    pfVar21 = pfVar6;
    if (pfVar6 < pfVar7) {
      do {
        uVar9 = *(undefined8 *)pfVar21;
        *(undefined8 *)pfVar21 = *(undefined8 *)pfVar14;
        *(undefined8 *)pfVar14 = uVar9;
        do {
          pfVar10 = pfVar21 + 2;
          if (pfVar10 == param_2) goto LAB_10a106b44;
          fVar24 = *(float *)*param_3;
          fVar25 = ((float *)*param_3)[1];
          pfVar4 = pfVar21 + 3;
          pfVar21 = pfVar10;
        } while (1e-06 < -((*pfVar4 - fVar25) * (fVar23 - fVar24)) +
                         (fVar22 - fVar25) * (*pfVar10 - fVar24));
        do {
          if (pfVar14 == param_1) goto LAB_10a106b44;
          pfVar15 = pfVar14 + -2;
          pfVar4 = pfVar14 + -1;
          pfVar14 = pfVar15;
        } while (-((*pfVar4 - fVar25) * (fVar23 - fVar24)) + (fVar22 - fVar25) * (*pfVar15 - fVar24)
                 <= 1e-06);
      } while (pfVar10 < pfVar15);
    }
    pfVar14 = pfVar10 + -2;
    if (pfVar14 != param_1) {
      *(undefined8 *)param_1 = *(undefined8 *)pfVar14;
    }
    pfVar10[-2] = fVar23;
    pfVar10[-1] = fVar22;
    if (pfVar6 < pfVar7) goto LAB_10a1063f8;
    pfVar6 = param_1;
    FUN_10a106e7c(param_1,pfVar14,param_3);
    pfVar7 = pfVar10;
    FUN_10a106e7c(pfVar10,param_2,param_3);
    if ((int)pfVar7 == 0) goto code_r0x00010a1063f4;
    param_2 = pfVar14;
    if (((ulong)pfVar6 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10a106714:
  pfVar6 = pfVar10;
  fVar22 = pfVar20[3];
  fVar23 = *pfVar6;
  fVar24 = *(float *)*param_3;
  fVar25 = ((float *)*param_3)[1];
  lVar19 = lVar13;
  if (1e-06 < -((fVar22 - fVar25) * (*pfVar20 - fVar24)) + (pfVar20[1] - fVar25) * (fVar23 - fVar24)
     ) {
    do {
      lVar12 = lVar19;
      puVar1 = (undefined8 *)((long)param_1 + lVar12);
      puVar1[1] = *puVar1;
      pfVar10 = param_1;
      if (lVar12 == 0) goto LAB_10a1067a0;
      fVar24 = *(float *)*param_3;
      fVar25 = ((float *)*param_3)[1];
      lVar19 = lVar12 + -8;
    } while (1e-06 < -((fVar22 - fVar25) * (*(float *)(puVar1 + -1) - fVar24)) +
                     (*(float *)((long)puVar1 + -4) - fVar25) * (fVar23 - fVar24));
    pfVar10 = (float *)((long)param_1 + lVar12);
LAB_10a1067a0:
    *pfVar10 = fVar23;
    pfVar10[1] = fVar22;
  }
  lVar13 = lVar13 + 8;
  pfVar10 = pfVar6 + 2;
  pfVar20 = pfVar6;
  if (pfVar6 + 2 == param_2) {
    return;
  }
  goto LAB_10a106714;
LAB_10a1067c8:
  do {
    if ((long)uVar16 <= (long)uVar11) {
      uVar17 = uVar16 << 1 | 1;
      pfVar10 = param_1 + uVar17 * 2;
      uVar18 = uVar16 * 2 + 2;
      pfVar20 = (float *)*param_3;
      fVar22 = *pfVar20;
      if ((long)uVar18 < (long)uVar8) {
        fVar23 = pfVar20[1];
        if (1e-06 < -((pfVar10[1] - fVar23) * (pfVar10[2] - fVar22)) +
                    (pfVar10[3] - fVar23) * (*pfVar10 - fVar22)) {
          uVar17 = uVar18;
          pfVar10 = pfVar10 + 2;
        }
      }
      else {
        fVar23 = pfVar20[1];
      }
      uVar9 = *(undefined8 *)(param_1 + uVar16 * 2);
      fVar24 = (float)((ulong)uVar9 >> 0x20);
      pfVar20 = param_1 + uVar16 * 2;
      if (-((pfVar10[1] - fVar23) * ((float)uVar9 - fVar22)) +
          (fVar24 - fVar23) * (*pfVar10 - fVar22) <= 1e-06) {
        do {
          pfVar6 = pfVar10;
          *(undefined8 *)pfVar20 = *(undefined8 *)pfVar6;
          if ((long)uVar11 < (long)uVar17) break;
          lVar13 = uVar17 * 2;
          uVar17 = uVar17 << 1 | 1;
          pfVar10 = param_1 + uVar17 * 2;
          uVar18 = lVar13 + 2;
          pfVar20 = (float *)*param_3;
          fVar22 = *pfVar20;
          if ((long)uVar18 < (long)uVar8) {
            fVar23 = pfVar20[1];
            if (1e-06 < -((pfVar10[1] - fVar23) * (pfVar10[2] - fVar22)) +
                        (pfVar10[3] - fVar23) * (*pfVar10 - fVar22)) {
              uVar17 = uVar18;
              pfVar10 = pfVar10 + 2;
            }
          }
          else {
            fVar23 = pfVar20[1];
          }
          pfVar20 = pfVar6;
        } while (-((pfVar10[1] - fVar23) * ((float)uVar9 - fVar22)) +
                 (fVar24 - fVar23) * (*pfVar10 - fVar22) <= 1e-06);
        *(undefined8 *)pfVar6 = uVar9;
      }
    }
    bVar2 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar2);
  do {
    uVar9 = *(undefined8 *)param_1;
    pfVar10 = param_1;
    uVar16 = 0;
    do {
      uVar18 = uVar16 << 1 | 1;
      uVar11 = uVar16 * 2 + 2;
      pfVar20 = pfVar10 + uVar16 * 2 + 2;
      if (((long)uVar11 < (long)uVar8) &&
         (fVar22 = *(float *)*param_3, fVar23 = ((float *)*param_3)[1],
         1e-06 < -((pfVar10[uVar16 * 2 + 3] - fVar23) * (pfVar10[uVar16 * 2 + 4] - fVar22)) +
                 (pfVar10[uVar16 * 2 + 5] - fVar23) * (pfVar10[uVar16 * 2 + 2] - fVar22))) {
        pfVar20 = pfVar10 + uVar16 * 2 + 4;
        uVar18 = uVar11;
      }
      *(undefined8 *)pfVar10 = *(undefined8 *)pfVar20;
      pfVar10 = pfVar20;
      uVar16 = uVar18;
    } while ((long)uVar18 <= (long)(uVar8 - 2 >> 1));
    param_2 = param_2 + -2;
    if (pfVar20 == param_2) {
      *(undefined8 *)pfVar20 = uVar9;
    }
    else {
      *(undefined8 *)pfVar20 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar9;
      lVar13 = (long)pfVar20 + (8 - (long)param_1) >> 3;
      if (1 < lVar13) {
        uVar16 = lVar13 - 2U >> 1;
        pfVar10 = param_1 + uVar16 * 2;
        fVar24 = *(float *)*param_3;
        fVar25 = ((float *)*param_3)[1];
        fVar23 = *pfVar20;
        fVar22 = pfVar20[1];
        if (1e-06 < -((pfVar10[1] - fVar25) * (fVar23 - fVar24)) +
                    (fVar22 - fVar25) * (*pfVar10 - fVar24)) {
          do {
            pfVar6 = pfVar10;
            *(undefined8 *)pfVar20 = *(undefined8 *)pfVar6;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            pfVar10 = param_1 + uVar16 * 2;
            fVar24 = *(float *)*param_3;
            fVar25 = ((float *)*param_3)[1];
            pfVar20 = pfVar6;
          } while (1e-06 < -((pfVar10[1] - fVar25) * (fVar23 - fVar24)) +
                           (fVar22 - fVar25) * (*pfVar10 - fVar24));
          *pfVar6 = fVar23;
          pfVar6[1] = fVar22;
        }
      }
    }
    bVar2 = (long)uVar8 < 3;
    uVar8 = uVar8 - 1;
    if (bVar2) {
      return;
    }
  } while( true );
code_r0x00010a1063f4:
  if (((ulong)pfVar6 & 1) == 0) {
LAB_10a1063f8:
    FUN_10a106118(param_1,pfVar14,param_3,param_4,param_5 & 1);
    param_5 = 0;
  }
  goto LAB_10a10616c;
}



/* Entry: 10a106b48; end: 10a106c6b;  */

void FUN_10a106b48(float *param_1,float *param_2,float *param_3,long *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
  fVar2 = (float)*(undefined8 *)*param_4;
  fVar1 = (float)*(undefined8 *)param_2;
  fVar4 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20);
  fVar3 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  uVar5 = NEON_rev64(CONCAT44(fVar3 - fVar4,fVar1 - fVar2),4);
  fVar1 = (fVar1 - fVar2) * -((float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar4) +
          ((float)*(undefined8 *)param_3 - fVar2) * (float)uVar5;
  if (((float)*(undefined8 *)param_1 - fVar2) * -(fVar3 - fVar4) +
      ((float)((ulong)*(undefined8 *)param_1 >> 0x20) - fVar4) * (float)((ulong)uVar5 >> 0x20) <=
      1e-06) {
    if (1e-06 < fVar1) {
      uVar5 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar5;
      fVar2 = *(float *)*param_4;
      fVar4 = ((float *)*param_4)[1];
      if (1e-06 < -((param_2[1] - fVar4) * (*param_1 - fVar2)) +
                  (param_1[1] - fVar4) * (*param_2 - fVar2)) {
        uVar5 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = uVar5;
        return;
      }
    }
  }
  else {
    uVar5 = *(undefined8 *)param_1;
    if (fVar1 <= 1e-06) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar5;
      fVar2 = *(float *)*param_4;
      fVar4 = ((float *)*param_4)[1];
      if (-((param_3[1] - fVar4) * ((float)uVar5 - fVar2)) +
          ((float)((ulong)uVar5 >> 0x20) - fVar4) * (*param_3 - fVar2) <= 1e-06) {
        return;
      }
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
    }
    *(undefined8 *)param_3 = uVar5;
  }
  return;
}



/* Entry: 10a106c6c; end: 10a106e7b;  */

void FUN_10a106c6c(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  long *param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  FUN_10a106b48();
  fVar2 = *(float *)*param_6;
  fVar3 = ((float *)*param_6)[1];
  if (1e-06 < -((param_4[1] - fVar3) * (*param_3 - fVar2)) +
              (param_3[1] - fVar3) * (*param_4 - fVar2)) {
    uVar1 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = uVar1;
    fVar2 = *(float *)*param_6;
    fVar3 = ((float *)*param_6)[1];
    if (1e-06 < -((param_3[1] - fVar3) * (*param_2 - fVar2)) +
                (param_2[1] - fVar3) * (*param_3 - fVar2)) {
      uVar1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar1;
      fVar2 = *(float *)*param_6;
      fVar3 = ((float *)*param_6)[1];
      if (1e-06 < -((param_2[1] - fVar3) * (*param_1 - fVar2)) +
                  (param_1[1] - fVar3) * (*param_2 - fVar2)) {
        uVar1 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = uVar1;
        fVar2 = *(float *)*param_6;
        fVar3 = ((float *)*param_6)[1];
      }
    }
  }
  if (1e-06 < -((param_5[1] - fVar3) * (*param_4 - fVar2)) +
              (param_4[1] - fVar3) * (*param_5 - fVar2)) {
    uVar1 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = *(undefined8 *)param_5;
    *(undefined8 *)param_5 = uVar1;
    fVar2 = *(float *)*param_6;
    fVar3 = ((float *)*param_6)[1];
    if (1e-06 < -((param_4[1] - fVar3) * (*param_3 - fVar2)) +
                (param_3[1] - fVar3) * (*param_4 - fVar2)) {
      uVar1 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = *(undefined8 *)param_4;
      *(undefined8 *)param_4 = uVar1;
      fVar2 = *(float *)*param_6;
      fVar3 = ((float *)*param_6)[1];
      if (1e-06 < -((param_3[1] - fVar3) * (*param_2 - fVar2)) +
                  (param_2[1] - fVar3) * (*param_3 - fVar2)) {
        uVar1 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = *(undefined8 *)param_3;
        *(undefined8 *)param_3 = uVar1;
        fVar2 = *(float *)*param_6;
        fVar3 = ((float *)*param_6)[1];
        if (1e-06 < -((param_2[1] - fVar3) * (*param_1 - fVar2)) +
                    (param_1[1] - fVar3) * (*param_2 - fVar2)) {
          uVar1 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          *(undefined8 *)param_2 = uVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 10a106e7c; end: 10a10712b;  */

bool FUN_10a106e7c(float *param_1,float *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar3 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar3 < 3) {
    if (uVar3 < 2) {
      return true;
    }
    if (uVar3 == 2) {
      fVar11 = *(float *)*param_3;
      fVar12 = ((float *)*param_3)[1];
      if (-((param_2[-1] - fVar12) * (*param_1 - fVar11)) +
          (param_1[1] - fVar12) * (param_2[-2] - fVar11) <= 1e-06) {
        return true;
      }
      uVar4 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar4;
      return true;
    }
  }
  else {
    if (uVar3 == 3) {
      FUN_10a106b48(param_1,param_1 + 2,param_2 + -2,param_3);
      return true;
    }
    if (uVar3 == 4) {
      FUN_10a106b48(param_1,param_1 + 2,param_1 + 4,param_3);
      fVar11 = *(float *)*param_3;
      fVar12 = ((float *)*param_3)[1];
      if (-((param_2[-1] - fVar12) * (param_1[4] - fVar11)) +
          (param_1[5] - fVar12) * (param_2[-2] - fVar11) <= 1e-06) {
        return true;
      }
      uVar4 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar4;
      fVar11 = *(float *)*param_3;
      fVar12 = ((float *)*param_3)[1];
      if (-((param_1[5] - fVar12) * (param_1[2] - fVar11)) +
          (param_1[3] - fVar12) * (param_1[4] - fVar11) <= 1e-06) {
        return true;
      }
      uVar4 = *(undefined8 *)(param_1 + 2);
      uVar1 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 2) = uVar1;
      *(undefined8 *)(param_1 + 4) = uVar4;
      fVar11 = *(float *)*param_3;
      fVar12 = ((float *)*param_3)[1];
      if (-(((float)((ulong)uVar1 >> 0x20) - fVar12) * (*param_1 - fVar11)) +
          (param_1[1] - fVar12) * ((float)uVar1 - fVar11) <= 1e-06) {
        return true;
      }
      uVar4 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = uVar1;
      *(undefined8 *)(param_1 + 2) = uVar4;
      return true;
    }
    if (uVar3 == 5) {
      FUN_10a106c6c(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2,param_3);
      return true;
    }
  }
  FUN_10a106b48(param_1,param_1 + 2,param_1 + 4,param_3);
  if (param_1 + 6 != param_2) {
    lVar6 = 0;
    iVar7 = 0;
    pfVar9 = param_1 + 6;
    pfVar10 = param_1 + 4;
    do {
      pfVar5 = pfVar9;
      fVar13 = *(float *)*param_3;
      fVar14 = ((float *)*param_3)[1];
      fVar11 = *pfVar5;
      fVar12 = pfVar5[1];
      lVar2 = lVar6;
      if (1e-06 < -((fVar12 - fVar14) * (*pfVar10 - fVar13)) +
                  (pfVar10[1] - fVar14) * (fVar11 - fVar13)) {
        do {
          lVar8 = lVar2;
          *(undefined8 *)((long)param_1 + lVar8 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x10);
          pfVar9 = param_1;
          if (lVar8 == -0x10) goto LAB_10a10700c;
          fVar13 = *(float *)*param_3;
          fVar14 = ((float *)*param_3)[1];
          lVar2 = lVar8 + -8;
        } while (1e-06 < -((fVar12 - fVar14) * (*(float *)((long)param_1 + lVar8 + 8) - fVar13)) +
                         (*(float *)((long)param_1 + lVar8 + 0xc) - fVar14) * (fVar11 - fVar13));
        pfVar9 = (float *)((long)param_1 + lVar8 + 0x10);
LAB_10a10700c:
        *pfVar9 = fVar11;
        pfVar9[1] = fVar12;
        iVar7 = iVar7 + 1;
        if (iVar7 == 8) {
          return pfVar5 + 2 == param_2;
        }
      }
      lVar6 = lVar6 + 8;
      pfVar9 = pfVar5 + 2;
      pfVar10 = pfVar5;
    } while (pfVar5 + 2 != param_2);
  }
  return true;
}



/* Entry: 10a10712c; end: 10a10713f;  */

void FUN_10a10712c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)&UNK_10f63bc0b;
  FUN_109ffde64();
  puVar2 = puVar1;
  if (puVar1 != param_2) {
    do {
      uVar4 = *puVar2;
      uVar3 = puVar2[2];
      param_3[1] = puVar2[1];
      *param_3 = uVar4;
      param_3[2] = uVar3;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      uVar3 = puVar2[3];
      param_3[4] = puVar2[4];
      param_3[3] = uVar3;
      param_3[5] = puVar2[5];
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2 = puVar2 + 6;
      param_3 = param_3 + 6;
    } while (puVar2 != param_2);
    do {
      if (puVar1[3] != 0) {
        puVar1[4] = puVar1[3];
        __ZdlPv();
      }
      puVar1 = puVar1 + 6;
    } while (puVar1 != param_2);
  }
  return;
}



/* Entry: 10a107140; end: 10a107263;  */

void FUN_10a107140(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = param_1;
  if (param_1 != param_2) {
    do {
      uVar3 = *puVar1;
      uVar2 = puVar1[2];
      param_3[1] = puVar1[1];
      *param_3 = uVar3;
      param_3[2] = uVar2;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      uVar2 = puVar1[3];
      param_3[4] = puVar1[4];
      param_3[3] = uVar2;
      param_3[5] = puVar1[5];
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1 = puVar1 + 6;
      param_3 = param_3 + 6;
    } while (puVar1 != param_2);
    do {
      if (param_1[3] != 0) {
        param_1[4] = param_1[3];
        __ZdlPv();
      }
      param_1 = param_1 + 6;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10a107264; end: 10a1072af;  */

void FUN_10a107264(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x30) {
    if (*(long *)(lVar2 + -0x18) != 0) {
      *(long *)(lVar2 + -0x10) = *(long *)(lVar2 + -0x18);
      __ZdlPv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a1072b0; end: 10a10734f;  */

undefined8 * FUN_10a1072b0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_SUB_110b01d60;
  puVar2 = (undefined8 *)0x28;
  _malloc();
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 3) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110ba4b80;
  param_1[1] = puVar2;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = 0;
  if (param_2 != 0) {
    return param_1;
  }
  FUN_10a00946c(&UNK_10f63c867);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a10733c);
  (*pcVar1)();
}



/* Entry: 10a107350; end: 10a107383;  */

void FUN_10a107350(undefined8 *param_1)

{
  *param_1 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a107384; end: 10a10758f;  */

/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

undefined1  [16]
FUN_10a107384(ulong *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
             long param_5)

{
  byte bVar1;
  ushort uVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined1 **ppuVar12;
  undefined8 uVar13;
  ulong uVar14;
  ushort *puVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined1 *puVar21;
  ulong *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  long lVar25;
  undefined1 *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 *puStack_2e0;
  long *plStack_2d8;
  undefined1 **ppuStack_2d0;
  code *pcStack_2c8;
  undefined1 *puStack_2b8;
  uint auStack_2b0 [2];
  long lStack_2a8;
  undefined1 *puStack_2a0;
  undefined8 uStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined1 *puStack_280;
  long *plStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  undefined1 ***pppuStack_260;
  code *pcStack_258;
  undefined1 *puStack_250;
  long *plStack_248;
  undefined1 **ppuStack_240;
  undefined8 uStack_238;
  undefined1 *puStack_230;
  long *plStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined1 *puStack_200;
  long *plStack_1f8;
  undefined1 **ppuStack_1f0;
  undefined8 uStack_1e8;
  undefined1 *puStack_1e0;
  long *plStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined1 *puStack_1b0;
  long *plStack_1a8;
  undefined1 **ppuStack_1a0;
  undefined8 uStack_198;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined1 ***pppuStack_150;
  code *pcStack_148;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined1 *puStack_e0;
  ulong *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  puVar3 = param_2;
  puVar23 = param_2;
  if (0 < param_5) {
    puVar18 = (undefined1 *)param_1[1];
    if ((long)(param_1[2] - (long)puVar18) < param_5) {
      puVar24 = (undefined1 *)*param_1;
      puVar3 = puVar18 + (param_5 - (long)puVar24);
      if ((long)puVar3 < 0) {
        FUN_10a0cd644();
        pcStack_68 = FUN_10a107590;
        puVar6 = (ulong *)param_1[1];
        puStack_70 = &stack0xfffffffffffffff0;
        if ((undefined1 *)(param_1[2] - (long)puVar6) < param_2) {
          puVar23 = (undefined1 *)*param_1;
          lVar25 = (long)puVar6 - (long)puVar23;
          puVar3 = param_2 + lVar25;
          if ((long)puVar3 < 0) {
            puVar3 = param_2;
            FUN_10a1076a4();
            pcStack_b8 = FUN_10a1076a4;
            puVar11 = &UNK_10f63bc0b;
            ppuStack_c0 = &puStack_70;
            FUN_109ffde64();
            pcStack_c8 = FUN_10a1076b8;
            puVar5 = puVar11;
            puStack_e0 = param_2;
            puStack_d8 = param_1;
            puStack_d0 = (undefined1 *)&ppuStack_c0;
            _malloc();
            if ((puVar11 == (undefined *)0x0) || (puVar5 != (undefined *)0x0)) {
              auVar29._8_8_ = puVar3;
              auVar29._0_8_ = puVar5;
              return auVar29;
            }
            puVar6 = (ulong *)0x8;
            ___cxa_allocate_exception();
            __ZNSt9bad_allocC1Ev();
            puVar11 = PTR___ZTISt9bad_alloc_110346a68;
            puVar5 = PTR___ZNSt9bad_allocD1Ev_110346998;
            ___cxa_throw();
            pcStack_e8 = FUN_10a107700;
            puVar23 = puVar11;
            puVar3 = puVar11;
            if (0 < param_5) {
              puVar18 = (undefined1 *)puVar6[1];
              ppuStack_f0 = &puStack_d0;
              if ((long)(puVar6[2] - (long)puVar18) < param_5) {
                puVar24 = (undefined1 *)*puVar6;
                puVar3 = puVar18 + (param_5 - (long)puVar24);
                if ((long)puVar3 < 0) {
                  puVar3 = puVar11;
                  puVar23 = puVar5;
                  FUN_109ffdf98();
                  pcStack_148 = FUN_10a107904;
                  plVar7 = (long *)&UNK_10f63bc0b;
                  pppuStack_150 = &ppuStack_f0;
                  FUN_109ffde64();
                  pcStack_158 = FUN_10a107918;
                  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  ppuVar12 = &puStack_188;
                  plVar8 = plVar7;
                  puStack_188 = puVar3;
                  puStack_180 = puVar23;
                  puStack_170 = puVar5;
                  puStack_168 = puVar11;
                  puStack_160 = (undefined1 *)&pppuStack_150;
                  FUN_10a0fc030();
                  if (((ulong)ppuVar12 & 1) == 0) {
                    puVar15 = (ushort *)&UNK_10e4965ac;
                  }
                  else {
                    puVar15 = (ushort *)(*plVar7 + (long)plVar8 * 0x10 + 0xc);
                  }
                  uVar2 = *puVar15;
                  if ((ulong)uVar2 == 0xffff) {
                    plVar8 = (long *)&UNK_10f63c8ec;
                    FUN_10a00946c();
                  }
                  else {
                    *(ushort *)(plVar7 + 7) = uVar2;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
                      auVar31._8_8_ = ppuVar12;
                      auVar31._0_8_ = plVar7[4] + (ulong)uVar2;
                      return auVar31;
                    }
                  }
                  ___stack_chk_fail();
                  uStack_198 = 0x10a1079b8;
                  puStack_1b0 = puVar5;
                  plStack_1a8 = plVar7;
                  ppuStack_1a0 = &puStack_160;
                  if (ppuVar12 < (undefined1 **)0x1555555555555556) {
                    plVar7 = plVar8;
                    FUN_10a107a14();
                    *plVar8 = (long)plVar7;
                    plVar8[1] = (long)plVar7;
                    plVar8[2] = (long)((long)plVar7 + (long)ppuVar12 * 0xc);
                    auVar32._8_8_ = ppuVar12;
                    auVar32._0_8_ = plVar7;
                    return auVar32;
                  }
                  FUN_10a107a00();
                  pcStack_1b8 = FUN_10a107a00;
                  puVar9 = (undefined8 *)&UNK_10f63bc0b;
                  pppuStack_1c0 = &ppuStack_1a0;
                  FUN_109ffde64();
                  pcStack_1c8 = FUN_10a107a14;
                  puStack_1e0 = puVar5;
                  plStack_1d8 = plVar7;
                  if (ppuVar12 < (undefined1 **)0x1555555555555556) {
                    lVar25 = (long)ppuVar12 * 0xc;
                    puStack_1d0 = (undefined1 *)&pppuStack_1c0;
                    __Znwm(lVar25);
                    auVar33._8_8_ = ppuVar12;
                    auVar33._0_8_ = lVar25;
                    return auVar33;
                  }
                  puStack_1d0 = (undefined1 *)&pppuStack_1c0;
                  func_0x000109ffded8();
                  uStack_1e8 = 0x10a107a58;
                  puStack_200 = puVar5;
                  plStack_1f8 = plVar7;
                  ppuStack_1f0 = &puStack_1d0;
                  if (ppuVar12 < (undefined1 **)0xccccccccccccccd) {
                    puVar10 = puVar9;
                    FUN_10a107ab0();
                    *puVar9 = puVar10;
                    puVar9[1] = puVar10;
                    puVar9[2] = (undefined *)((long)puVar10 + (long)ppuVar12 * 0x14);
                    auVar34._8_8_ = ppuVar12;
                    auVar34._0_8_ = puVar10;
                    return auVar34;
                  }
                  FUN_10a107a9c();
                  pcStack_208 = FUN_10a107a9c;
                  puVar9 = (undefined8 *)&UNK_10f63bc0b;
                  pppuStack_210 = &ppuStack_1f0;
                  FUN_109ffde64();
                  pcStack_218 = FUN_10a107ab0;
                  puStack_230 = puVar5;
                  plStack_228 = plVar7;
                  if (ppuVar12 < (undefined1 **)0xccccccccccccccd) {
                    lVar25 = (long)ppuVar12 * 0x14;
                    puStack_220 = (undefined1 *)&pppuStack_210;
                    __Znwm(lVar25);
                    auVar35._8_8_ = ppuVar12;
                    auVar35._0_8_ = lVar25;
                    return auVar35;
                  }
                  puStack_220 = (undefined1 *)&pppuStack_210;
                  func_0x000109ffded8();
                  uStack_238 = 0x10a107af0;
                  puStack_250 = puVar5;
                  plStack_248 = plVar7;
                  ppuStack_240 = &puStack_220;
                  if ((ulong)ppuVar12 >> 0x3d == 0) {
                    puVar10 = puVar9;
                    FUN_10a107b3c();
                    *puVar9 = puVar10;
                    puVar9[1] = puVar10;
                    puVar9[2] = puVar10 + (long)ppuVar12;
                    auVar36._8_8_ = ppuVar12;
                    auVar36._0_8_ = puVar10;
                    return auVar36;
                  }
                  FUN_10a107b28();
                  pcStack_258 = FUN_10a107b28;
                  pppuStack_260 = &ppuStack_240;
                  FUN_109ffde64(&UNK_10f63bc0b);
                  pcStack_268 = FUN_10a107b3c;
                  puStack_280 = puVar5;
                  plStack_278 = plVar7;
                  if ((ulong)ppuVar12 >> 0x3d == 0) {
                    lVar25 = (long)ppuVar12 << 3;
                    puStack_270 = (undefined1 *)&pppuStack_260;
                    __Znwm(lVar25);
                    auVar37._8_8_ = ppuVar12;
                    auVar37._0_8_ = lVar25;
                    return auVar37;
                  }
                  puStack_270 = (undefined1 *)&pppuStack_260;
                  func_0x000109ffded8();
                  pcStack_288 = FUN_10a107b70;
                  puVar11 = &UNK_10f63bc0b;
                  ppuStack_290 = &puStack_270;
                  FUN_109ffde64();
                  uStack_298 = 0x10a107b84;
                  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  puStack_2a0 = (undefined1 *)&ppuStack_290;
                  FUN_10a107c14();
                  lVar25 = 0;
                  puStack_2b8 = (undefined1 *)0x0;
                  auStack_2b0[0] = 0;
                  do {
                    *(char *)((long)auStack_2b0 + lVar25 + -8) = (char)puVar11;
                    lVar25 = lVar25 + 1;
                    puVar11 = (undefined *)((ulong)puVar11 >> 8);
                  } while (lVar25 != 8);
                  lVar25 = 8;
                  do {
                    *(char *)((long)auStack_2b0 + lVar25 + -8) = (char)ppuVar12;
                    lVar25 = lVar25 + 1;
                    ppuVar12 = (undefined1 **)((ulong)ppuVar12 >> 8 & 0xffffff);
                  } while (lVar25 != 0xc);
                  auVar38._8_4_ = auStack_2b0[0];
                  auVar38._0_8_ = puStack_2b8;
                  uVar14 = (ulong)auStack_2b0[0];
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
                    puVar3 = puStack_2b8;
                    ___stack_chk_fail();
                    pcStack_2c8 = FUN_10a107c14;
                    uStack_2e8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                    puStack_2e0 = puVar5;
                    plStack_2d8 = plVar7;
                    ppuStack_2d0 = &puStack_2a0;
                    if (uVar14 < 0x11) {
                      uStack_2f8 = 0;
                      uStack_2f0 = 0;
                      if (uVar14 != 0) {
                        puVar9 = &uStack_2f8;
                        do {
                          *(undefined1 *)puVar9 = *puVar3;
                          uVar14 = uVar14 - 1;
                          puVar3 = puVar3 + 1;
                          puVar9 = (undefined8 *)((long)puVar9 + 1);
                        } while (uVar14 != 0);
                      }
                      puVar9 = &uStack_2f8;
                    }
                    else {
                      puVar9 = (undefined8 *)&UNK_10f63c976;
                      FUN_10a00946c();
                      ___stack_chk_fail();
                    }
                    uVar13 = 0;
                    puVar10 = puVar9;
                    func_0x00010a107d98();
                    bVar1 = *(byte *)((long)puVar9 + 10);
                    if (bVar1 == 0) {
                      uVar14 = 0;
                    }
                    else {
                      lVar25 = 0xffffffbf;
                      if (0x19 < bVar1 - 0x41) {
                        lVar25 = -0x16;
                      }
                      lVar25 = (ulong)bVar1 + lVar25 + 0x1a;
                      if (bVar1 - 0x61 < 0x1a) {
                        lVar25 = (ulong)bVar1 + 0xffffff9f;
                      }
                      uVar14 = (lVar25 << 0x3c) + 0x1000000000000000;
                    }
                    auVar39._0_8_ = uVar14 | (ulong)puVar10;
                    auVar39._8_8_ = uVar13;
                    return auVar39;
                  }
                  auVar38._12_4_ = 0;
                  return auVar38;
                }
                uVar14 = puVar6[2] - (long)puVar24;
                puVar16 = (undefined1 *)(uVar14 * 2);
                if (puVar16 < puVar3 || (long)puVar16 - (long)puVar3 == 0) {
                  puVar16 = puVar3;
                }
                if (0x3ffffffffffffffe < uVar14) {
                  puVar16 = (undefined1 *)0x7fffffffffffffff;
                }
                if (puVar16 == (undefined1 *)0x0) {
                  puVar26 = (undefined1 *)0x0;
                }
                else {
                  puVar26 = puVar16;
                  __Znwm();
                }
                puVar3 = puVar26 + ((long)puVar11 - (long)puVar24);
                _memcpy(puVar3,puVar5,param_5);
                _memcpy(puVar3 + param_5,puVar11,(long)puVar18 - (long)puVar11);
                puVar6[1] = (ulong)puVar11;
                puVar23 = puVar24;
                _memcpy(puVar26,puVar24,(long)puVar11 - (long)puVar24);
                *puVar6 = (ulong)puVar26;
                puVar6[1] = (ulong)(puVar3 + param_5 + ((long)puVar18 - (long)puVar11));
                puVar6[2] = (ulong)(puVar26 + (long)puVar16);
                if (puVar24 != (undefined1 *)0x0) {
                  __ZdlPv(puVar24);
                }
              }
              else {
                lVar25 = (long)puVar18 - (long)puVar11;
                if (lVar25 < param_5) {
                  puVar24 = puVar18;
                  puVar16 = puVar18;
                  if (puVar5 + lVar25 != param_4) {
                    puVar24 = puVar11 + (long)param_4 + -(long)puVar5;
                    puVar26 = puVar18;
                    puVar21 = puVar5 + lVar25;
                    do {
                      puVar19 = puVar21 + 1;
                      puVar16 = puVar26 + 1;
                      *puVar26 = *puVar21;
                      puVar26 = puVar16;
                      puVar21 = puVar19;
                    } while (puVar19 != param_4);
                  }
                  puVar6[1] = (ulong)puVar24;
                  if (lVar25 < 1) goto LAB_10a1078e0;
                  puVar23 = puVar24 + -param_5;
                  puVar26 = puVar24;
                  if (puVar24 + -param_5 < puVar18) {
                    do {
                      puVar21 = puVar23 + 1;
                      puVar24 = puVar26 + 1;
                      *puVar26 = *puVar23;
                      puVar23 = puVar21;
                      puVar26 = puVar24;
                    } while (puVar21 != puVar18);
                  }
                  puVar6[1] = (ulong)puVar24;
                  if (puVar16 != puVar11 + param_5) {
                    _memmove(puVar11 + param_5,puVar11);
                  }
                }
                else {
                  puVar23 = puVar18 + -param_5;
                  puVar24 = puVar18;
                  puVar16 = puVar18;
                  if (puVar18 + -param_5 < puVar18) {
                    do {
                      puVar26 = puVar23 + 1;
                      puVar16 = puVar24 + 1;
                      *puVar24 = *puVar23;
                      puVar23 = puVar26;
                      puVar24 = puVar16;
                    } while (puVar26 != puVar18);
                  }
                  puVar6[1] = (ulong)puVar16;
                  lVar25 = param_5;
                  if (puVar18 != puVar11 + param_5) {
                    _memmove(puVar11 + param_5,puVar11);
                  }
                }
                _memmove(puVar11,puVar5,lVar25);
                puVar23 = puVar5;
              }
            }
LAB_10a1078e0:
            auVar30._8_8_ = puVar23;
            auVar30._0_8_ = puVar3;
            return auVar30;
          }
          uVar14 = param_1[2] - (long)puVar23;
          puVar18 = (undefined1 *)(uVar14 * 2);
          if (puVar18 < puVar3 || (long)puVar18 - (long)puVar3 == 0) {
            puVar18 = puVar3;
          }
          if (0x3ffffffffffffffe < uVar14) {
            puVar18 = (undefined1 *)0x7fffffffffffffff;
          }
          if (puVar18 == (undefined1 *)0x0) {
            puVar3 = (undefined1 *)0x0;
            lVar17 = lVar25;
          }
          else {
            puVar3 = puVar18;
            FUN_10a1076b8();
            puVar23 = (undefined1 *)*param_1;
            puVar6 = (ulong *)param_1[1];
            lVar17 = (long)puVar6 - (long)puVar23;
          }
          puVar24 = puVar3 + lVar25;
          puVar16 = puVar24 + (long)param_2;
          _bzero(puVar24,param_2);
          puVar6 = (ulong *)(puVar24 + ((long)puVar23 - (long)puVar6));
          puVar4 = puVar6;
          param_2 = puVar23;
          _memcpy(puVar6,puVar23,lVar17);
          *param_1 = (ulong)puVar6;
          param_1[1] = (ulong)puVar16;
          param_1[2] = (ulong)(puVar3 + (long)puVar18);
          if (puVar23 != (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_11034c310)(puVar23);
            auVar40._8_8_ = param_2;
            auVar40._0_8_ = puVar23;
            return auVar40;
          }
        }
        else {
          puVar4 = param_1;
          puVar22 = puVar6;
          if (param_2 != (undefined1 *)0x0) {
            puVar22 = (ulong *)((long)puVar6 + (long)param_2);
            _bzero(puVar6,param_2);
            puVar4 = puVar6;
          }
          param_1[1] = (ulong)puVar22;
        }
        auVar28._8_8_ = param_2;
        auVar28._0_8_ = puVar4;
        return auVar28;
      }
      uVar14 = param_1[2] - (long)puVar24;
      puVar16 = (undefined1 *)(uVar14 * 2);
      if (puVar16 < puVar3 || (long)puVar16 - (long)puVar3 == 0) {
        puVar16 = puVar3;
      }
      if (0x3ffffffffffffffe < uVar14) {
        puVar16 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar16 == (undefined1 *)0x0) {
        puVar26 = (undefined1 *)0x0;
      }
      else {
        puVar26 = puVar16;
        __Znwm();
      }
      puVar23 = puVar26 + ((long)param_2 - (long)puVar24);
      _memcpy(puVar23,param_3,param_5);
      _memcpy(puVar23 + param_5,param_2,(long)puVar18 - (long)param_2);
      param_1[1] = (ulong)param_2;
      puVar3 = puVar24;
      _memcpy(puVar26,puVar24,(long)param_2 - (long)puVar24);
      *param_1 = (ulong)puVar26;
      param_1[1] = (ulong)(puVar23 + param_5 + ((long)puVar18 - (long)param_2));
      param_1[2] = (ulong)(puVar26 + (long)puVar16);
      if (puVar24 != (undefined1 *)0x0) {
        __ZdlPv(puVar24);
      }
    }
    else {
      lVar25 = (long)puVar18 - (long)param_2;
      if (lVar25 < param_5) {
        puVar3 = param_3 + lVar25;
        lVar17 = (long)param_4 - (long)puVar3;
        if (lVar17 != 0) {
          _memmove(puVar18,puVar3,lVar17);
        }
        puVar24 = puVar18 + lVar17;
        param_1[1] = (ulong)puVar24;
        if (lVar25 < 1) goto LAB_10a10756c;
        puVar3 = puVar24;
        if (puVar24 + -param_5 < puVar18) {
          lVar17 = (long)param_2 - (long)(param_3 + param_5);
          lVar20 = (long)param_2 - (long)param_3;
          do {
            param_4[lVar20] = param_4[lVar17];
            lVar17 = lVar17 + 1;
            lVar20 = lVar20 + 1;
          } while (param_4 + lVar17 < puVar18);
          puVar3 = param_4 + lVar20;
        }
        param_1[1] = (ulong)puVar3;
        if (puVar24 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
      }
      else {
        puVar3 = puVar18 + -param_5;
        puVar24 = puVar18;
        puVar16 = puVar18;
        if (puVar18 + -param_5 < puVar18) {
          do {
            puVar26 = puVar3 + 1;
            puVar16 = puVar24 + 1;
            *puVar24 = *puVar3;
            puVar3 = puVar26;
            puVar24 = puVar16;
          } while (puVar26 != puVar18);
        }
        param_1[1] = (ulong)puVar16;
        lVar25 = param_5;
        if (puVar18 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
      }
      _memmove(param_2,param_3,lVar25);
      puVar3 = param_3;
    }
  }
LAB_10a10756c:
  auVar27._8_8_ = puVar3;
  auVar27._0_8_ = puVar23;
  return auVar27;
}



/* Entry: 10a107590; end: 10a1076a3;  */

/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

undefined1  [16]
FUN_10a107590(ulong *param_1,ulong param_2,undefined8 param_3,undefined1 *param_4,long param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 **ppuVar15;
  undefined8 uVar16;
  ulong uVar17;
  ushort *puVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulong *puVar23;
  ulong uVar24;
  undefined1 *puVar25;
  long lVar26;
  long lVar27;
  undefined1 *puVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 *puStack_280;
  long *plStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined1 *puStack_258;
  uint auStack_250 [2];
  long lStack_248;
  undefined1 *puStack_240;
  undefined8 uStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined1 *puStack_220;
  long *plStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  undefined1 *puStack_1f0;
  long *plStack_1e8;
  undefined1 **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  long *plStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined1 *puStack_1a0;
  long *plStack_198;
  undefined1 **ppuStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_180;
  long *plStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  undefined1 *puStack_150;
  long *plStack_148;
  undefined1 **ppuStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 ***pppuStack_f0;
  code *pcStack_e8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar7 = (ulong *)param_1[1];
  if (param_1[2] - (long)puVar7 < param_2) {
    uVar24 = *param_1;
    lVar27 = (long)puVar7 - uVar24;
    uVar4 = lVar27 + param_2;
    if ((long)uVar4 < 0) {
      uVar4 = param_2;
      FUN_10a1076a4();
      pcStack_58 = FUN_10a1076a4;
      puVar12 = &UNK_10f63bc0b;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_109ffde64();
      pcStack_68 = FUN_10a1076b8;
      puVar6 = puVar12;
      uStack_80 = param_2;
      puStack_78 = param_1;
      puStack_70 = (undefined1 *)&puStack_60;
      _malloc();
      if ((puVar12 == (undefined *)0x0) || (puVar6 != (undefined *)0x0)) {
        auVar30._8_8_ = uVar4;
        auVar30._0_8_ = puVar6;
        return auVar30;
      }
      puVar7 = (ulong *)0x8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      puVar12 = PTR___ZTISt9bad_alloc_110346a68;
      puVar6 = PTR___ZNSt9bad_allocD1Ev_110346998;
      ___cxa_throw();
      pcStack_88 = FUN_10a107700;
      puVar14 = puVar12;
      puVar13 = puVar12;
      if (0 < param_5) {
        puVar1 = (undefined1 *)puVar7[1];
        ppuStack_90 = &puStack_70;
        if ((long)(puVar7[2] - (long)puVar1) < param_5) {
          puVar25 = (undefined1 *)*puVar7;
          puVar13 = puVar1 + (param_5 - (long)puVar25);
          if ((long)puVar13 < 0) {
            puVar13 = puVar12;
            puVar14 = puVar6;
            FUN_109ffdf98();
            pcStack_e8 = FUN_10a107904;
            plVar8 = (long *)&UNK_10f63bc0b;
            pppuStack_f0 = &ppuStack_90;
            FUN_109ffde64();
            pcStack_f8 = FUN_10a107918;
            lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
            ppuVar15 = &puStack_128;
            plVar9 = plVar8;
            puStack_128 = puVar13;
            puStack_120 = puVar14;
            puStack_110 = puVar6;
            puStack_108 = puVar12;
            puStack_100 = (undefined1 *)&pppuStack_f0;
            FUN_10a0fc030();
            if (((ulong)ppuVar15 & 1) == 0) {
              puVar18 = (ushort *)&UNK_10e4965ac;
            }
            else {
              puVar18 = (ushort *)(*plVar8 + (long)plVar9 * 0x10 + 0xc);
            }
            uVar3 = *puVar18;
            if ((ulong)uVar3 == 0xffff) {
              plVar9 = (long *)&UNK_10f63c8ec;
              FUN_10a00946c();
            }
            else {
              *(ushort *)(plVar8 + 7) = uVar3;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
                auVar32._8_8_ = ppuVar15;
                auVar32._0_8_ = plVar8[4] + (ulong)uVar3;
                return auVar32;
              }
            }
            ___stack_chk_fail();
            uStack_138 = 0x10a1079b8;
            puStack_150 = puVar6;
            plStack_148 = plVar8;
            ppuStack_140 = &puStack_100;
            if (ppuVar15 < (undefined1 **)0x1555555555555556) {
              plVar8 = plVar9;
              FUN_10a107a14();
              *plVar9 = (long)plVar8;
              plVar9[1] = (long)plVar8;
              plVar9[2] = (long)((long)plVar8 + (long)ppuVar15 * 0xc);
              auVar33._8_8_ = ppuVar15;
              auVar33._0_8_ = plVar8;
              return auVar33;
            }
            FUN_10a107a00();
            pcStack_158 = FUN_10a107a00;
            puVar10 = (undefined8 *)&UNK_10f63bc0b;
            pppuStack_160 = &ppuStack_140;
            FUN_109ffde64();
            pcStack_168 = FUN_10a107a14;
            puStack_180 = puVar6;
            plStack_178 = plVar8;
            if (ppuVar15 < (undefined1 **)0x1555555555555556) {
              lVar27 = (long)ppuVar15 * 0xc;
              puStack_170 = (undefined1 *)&pppuStack_160;
              __Znwm(lVar27);
              auVar34._8_8_ = ppuVar15;
              auVar34._0_8_ = lVar27;
              return auVar34;
            }
            puStack_170 = (undefined1 *)&pppuStack_160;
            func_0x000109ffded8();
            uStack_188 = 0x10a107a58;
            puStack_1a0 = puVar6;
            plStack_198 = plVar8;
            ppuStack_190 = &puStack_170;
            if (ppuVar15 < (undefined1 **)0xccccccccccccccd) {
              puVar11 = puVar10;
              FUN_10a107ab0();
              *puVar10 = puVar11;
              puVar10[1] = puVar11;
              puVar10[2] = (undefined *)((long)puVar11 + (long)ppuVar15 * 0x14);
              auVar35._8_8_ = ppuVar15;
              auVar35._0_8_ = puVar11;
              return auVar35;
            }
            FUN_10a107a9c();
            pcStack_1a8 = FUN_10a107a9c;
            puVar10 = (undefined8 *)&UNK_10f63bc0b;
            pppuStack_1b0 = &ppuStack_190;
            FUN_109ffde64();
            pcStack_1b8 = FUN_10a107ab0;
            puStack_1d0 = puVar6;
            plStack_1c8 = plVar8;
            if (ppuVar15 < (undefined1 **)0xccccccccccccccd) {
              lVar27 = (long)ppuVar15 * 0x14;
              puStack_1c0 = (undefined1 *)&pppuStack_1b0;
              __Znwm(lVar27);
              auVar36._8_8_ = ppuVar15;
              auVar36._0_8_ = lVar27;
              return auVar36;
            }
            puStack_1c0 = (undefined1 *)&pppuStack_1b0;
            func_0x000109ffded8();
            uStack_1d8 = 0x10a107af0;
            puStack_1f0 = puVar6;
            plStack_1e8 = plVar8;
            ppuStack_1e0 = &puStack_1c0;
            if ((ulong)ppuVar15 >> 0x3d == 0) {
              puVar11 = puVar10;
              FUN_10a107b3c();
              *puVar10 = puVar11;
              puVar10[1] = puVar11;
              puVar10[2] = puVar11 + (long)ppuVar15;
              auVar37._8_8_ = ppuVar15;
              auVar37._0_8_ = puVar11;
              return auVar37;
            }
            FUN_10a107b28();
            pcStack_1f8 = FUN_10a107b28;
            pppuStack_200 = &ppuStack_1e0;
            FUN_109ffde64(&UNK_10f63bc0b);
            pcStack_208 = FUN_10a107b3c;
            puStack_220 = puVar6;
            plStack_218 = plVar8;
            if ((ulong)ppuVar15 >> 0x3d == 0) {
              lVar27 = (long)ppuVar15 << 3;
              puStack_210 = (undefined1 *)&pppuStack_200;
              __Znwm(lVar27);
              auVar38._8_8_ = ppuVar15;
              auVar38._0_8_ = lVar27;
              return auVar38;
            }
            puStack_210 = (undefined1 *)&pppuStack_200;
            func_0x000109ffded8();
            pcStack_228 = FUN_10a107b70;
            puVar12 = &UNK_10f63bc0b;
            ppuStack_230 = &puStack_210;
            FUN_109ffde64();
            uStack_238 = 0x10a107b84;
            lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puStack_240 = (undefined1 *)&ppuStack_230;
            FUN_10a107c14();
            lVar27 = 0;
            puStack_258 = (undefined1 *)0x0;
            auStack_250[0] = 0;
            do {
              *(char *)((long)auStack_250 + lVar27 + -8) = (char)puVar12;
              lVar27 = lVar27 + 1;
              puVar12 = (undefined *)((ulong)puVar12 >> 8);
            } while (lVar27 != 8);
            lVar27 = 8;
            do {
              *(char *)((long)auStack_250 + lVar27 + -8) = (char)ppuVar15;
              lVar27 = lVar27 + 1;
              ppuVar15 = (undefined1 **)((ulong)ppuVar15 >> 8 & 0xffffff);
            } while (lVar27 != 0xc);
            auVar39._8_4_ = auStack_250[0];
            auVar39._0_8_ = puStack_258;
            uVar4 = (ulong)auStack_250[0];
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
              puVar13 = puStack_258;
              ___stack_chk_fail();
              pcStack_268 = FUN_10a107c14;
              uStack_288 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              puStack_280 = puVar6;
              plStack_278 = plVar8;
              ppuStack_270 = &puStack_240;
              if (uVar4 < 0x11) {
                uStack_298 = 0;
                uStack_290 = 0;
                if (uVar4 != 0) {
                  puVar10 = &uStack_298;
                  do {
                    *(undefined1 *)puVar10 = *puVar13;
                    uVar4 = uVar4 - 1;
                    puVar13 = puVar13 + 1;
                    puVar10 = (undefined8 *)((long)puVar10 + 1);
                  } while (uVar4 != 0);
                }
                puVar10 = &uStack_298;
              }
              else {
                puVar10 = (undefined8 *)&UNK_10f63c976;
                FUN_10a00946c();
                ___stack_chk_fail();
              }
              uVar16 = 0;
              puVar11 = puVar10;
              func_0x00010a107d98();
              bVar2 = *(byte *)((long)puVar10 + 10);
              if (bVar2 == 0) {
                uVar4 = 0;
              }
              else {
                lVar27 = 0xffffffbf;
                if (0x19 < bVar2 - 0x41) {
                  lVar27 = -0x16;
                }
                lVar27 = (ulong)bVar2 + lVar27 + 0x1a;
                if (bVar2 - 0x61 < 0x1a) {
                  lVar27 = (ulong)bVar2 + 0xffffff9f;
                }
                uVar4 = (lVar27 << 0x3c) + 0x1000000000000000;
              }
              auVar40._0_8_ = uVar4 | (ulong)puVar11;
              auVar40._8_8_ = uVar16;
              return auVar40;
            }
            auVar39._12_4_ = 0;
            return auVar39;
          }
          uVar4 = puVar7[2] - (long)puVar25;
          puVar20 = (undefined1 *)(uVar4 * 2);
          if (puVar20 < puVar13 || (long)puVar20 - (long)puVar13 == 0) {
            puVar20 = puVar13;
          }
          if (0x3ffffffffffffffe < uVar4) {
            puVar20 = (undefined1 *)0x7fffffffffffffff;
          }
          if (puVar20 == (undefined1 *)0x0) {
            puVar28 = (undefined1 *)0x0;
          }
          else {
            puVar28 = puVar20;
            __Znwm();
          }
          puVar13 = puVar28 + ((long)puVar12 - (long)puVar25);
          _memcpy(puVar13,puVar6,param_5);
          _memcpy(puVar13 + param_5,puVar12,(long)puVar1 - (long)puVar12);
          puVar7[1] = (ulong)puVar12;
          puVar14 = puVar25;
          _memcpy(puVar28,puVar25,(long)puVar12 - (long)puVar25);
          *puVar7 = (ulong)puVar28;
          puVar7[1] = (ulong)(puVar13 + param_5 + ((long)puVar1 - (long)puVar12));
          puVar7[2] = (ulong)(puVar28 + (long)puVar20);
          if (puVar25 != (undefined1 *)0x0) {
            __ZdlPv(puVar25);
          }
        }
        else {
          lVar27 = (long)puVar1 - (long)puVar12;
          if (lVar27 < param_5) {
            puVar25 = puVar1;
            puVar20 = puVar1;
            if (puVar6 + lVar27 != param_4) {
              puVar25 = puVar12 + (long)param_4 + -(long)puVar6;
              puVar28 = puVar1;
              puVar22 = puVar6 + lVar27;
              do {
                puVar21 = puVar22 + 1;
                puVar20 = puVar28 + 1;
                *puVar28 = *puVar22;
                puVar28 = puVar20;
                puVar22 = puVar21;
              } while (puVar21 != param_4);
            }
            puVar7[1] = (ulong)puVar25;
            if (lVar27 < 1) goto LAB_10a1078e0;
            puVar14 = puVar25 + -param_5;
            puVar28 = puVar25;
            if (puVar25 + -param_5 < puVar1) {
              do {
                puVar22 = puVar14 + 1;
                puVar25 = puVar28 + 1;
                *puVar28 = *puVar14;
                puVar14 = puVar22;
                puVar28 = puVar25;
              } while (puVar22 != puVar1);
            }
            puVar7[1] = (ulong)puVar25;
            if (puVar20 != puVar12 + param_5) {
              _memmove(puVar12 + param_5,puVar12);
            }
          }
          else {
            puVar14 = puVar1 + -param_5;
            puVar25 = puVar1;
            puVar20 = puVar1;
            if (puVar1 + -param_5 < puVar1) {
              do {
                puVar28 = puVar14 + 1;
                puVar20 = puVar25 + 1;
                *puVar25 = *puVar14;
                puVar14 = puVar28;
                puVar25 = puVar20;
              } while (puVar28 != puVar1);
            }
            puVar7[1] = (ulong)puVar20;
            lVar27 = param_5;
            if (puVar1 != puVar12 + param_5) {
              _memmove(puVar12 + param_5,puVar12);
            }
          }
          _memmove(puVar12,puVar6,lVar27);
          puVar14 = puVar6;
        }
      }
LAB_10a1078e0:
      auVar31._8_8_ = puVar14;
      auVar31._0_8_ = puVar13;
      return auVar31;
    }
    uVar17 = param_1[2] - uVar24;
    uVar19 = uVar17 * 2;
    if (uVar19 < uVar4 || uVar19 - uVar4 == 0) {
      uVar19 = uVar4;
    }
    if (0x3ffffffffffffffe < uVar17) {
      uVar19 = 0x7fffffffffffffff;
    }
    if (uVar19 == 0) {
      uVar4 = 0;
      lVar26 = lVar27;
    }
    else {
      uVar4 = uVar19;
      FUN_10a1076b8();
      uVar24 = *param_1;
      puVar7 = (ulong *)param_1[1];
      lVar26 = (long)puVar7 - uVar24;
    }
    lVar27 = uVar4 + lVar27;
    uVar17 = lVar27 + param_2;
    _bzero(lVar27,param_2);
    puVar7 = (ulong *)(lVar27 + (uVar24 - (long)puVar7));
    puVar5 = puVar7;
    param_2 = uVar24;
    _memcpy(puVar7,uVar24,lVar26);
    *param_1 = (ulong)puVar7;
    param_1[1] = uVar17;
    param_1[2] = uVar4 + uVar19;
    if (uVar24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(uVar24);
      auVar41._8_8_ = param_2;
      auVar41._0_8_ = uVar24;
      return auVar41;
    }
  }
  else {
    puVar5 = param_1;
    puVar23 = puVar7;
    if (param_2 != 0) {
      puVar23 = (ulong *)((long)puVar7 + param_2);
      _bzero(puVar7,param_2);
      puVar5 = puVar7;
    }
    param_1[1] = (ulong)puVar23;
  }
  auVar29._8_8_ = param_2;
  auVar29._0_8_ = puVar5;
  return auVar29;
}



/* Entry: 10a1076a4; end: 10a1076b7;  */

/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

undefined1  [16]
FUN_10a1076a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             long param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 **ppuVar14;
  undefined8 uVar15;
  ulong uVar16;
  ushort *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 *puStack_230;
  long *plStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined1 *puStack_208;
  uint auStack_200 [2];
  long lStack_1f8;
  undefined1 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined1 *puStack_1d0;
  long *plStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined1 *puStack_1a0;
  long *plStack_198;
  undefined1 **ppuStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_180;
  long *plStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  undefined1 *puStack_150;
  long *plStack_148;
  undefined1 **ppuStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined1 ***pppuStack_110;
  code *pcStack_108;
  undefined1 *puStack_100;
  long *plStack_f8;
  undefined1 **ppuStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 ***pppuStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar11 = &UNK_10f63bc0b;
  FUN_109ffde64();
  pcStack_18 = FUN_10a1076b8;
  puVar4 = puVar11;
  puStack_20 = &stack0xfffffffffffffff0;
  _malloc();
  if ((puVar11 == (undefined *)0x0) || (puVar4 != (undefined *)0x0)) {
    auVar23._8_8_ = param_2;
    auVar23._0_8_ = puVar4;
    return auVar23;
  }
  puVar5 = (ulong *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puVar11 = PTR___ZTISt9bad_alloc_110346a68;
  puVar4 = PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  pcStack_38 = FUN_10a107700;
  puVar13 = puVar11;
  puVar12 = puVar11;
  if (0 < param_5) {
    puVar1 = (undefined1 *)puVar5[1];
    ppuStack_40 = &puStack_20;
    if ((long)(puVar5[2] - (long)puVar1) < param_5) {
      puVar21 = (undefined1 *)*puVar5;
      puVar12 = puVar1 + (param_5 - (long)puVar21);
      if ((long)puVar12 < 0) {
        puVar12 = puVar11;
        puVar13 = puVar4;
        FUN_109ffdf98();
        pcStack_98 = FUN_10a107904;
        plVar6 = (long *)&UNK_10f63bc0b;
        pppuStack_a0 = &ppuStack_40;
        FUN_109ffde64();
        pcStack_a8 = FUN_10a107918;
        lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar14 = &puStack_d8;
        plVar7 = plVar6;
        puStack_d8 = puVar12;
        puStack_d0 = puVar13;
        puStack_c0 = puVar4;
        puStack_b8 = puVar11;
        puStack_b0 = (undefined1 *)&pppuStack_a0;
        FUN_10a0fc030();
        if (((ulong)ppuVar14 & 1) == 0) {
          puVar17 = (ushort *)&UNK_10e4965ac;
        }
        else {
          puVar17 = (ushort *)(*plVar6 + (long)plVar7 * 0x10 + 0xc);
        }
        uVar3 = *puVar17;
        if ((ulong)uVar3 == 0xffff) {
          plVar7 = (long *)&UNK_10f63c8ec;
          FUN_10a00946c();
        }
        else {
          *(ushort *)(plVar6 + 7) = uVar3;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
            auVar25._8_8_ = ppuVar14;
            auVar25._0_8_ = plVar6[4] + (ulong)uVar3;
            return auVar25;
          }
        }
        ___stack_chk_fail();
        uStack_e8 = 0x10a1079b8;
        puStack_100 = puVar4;
        plStack_f8 = plVar6;
        ppuStack_f0 = &puStack_b0;
        if (ppuVar14 < (undefined1 **)0x1555555555555556) {
          plVar6 = plVar7;
          FUN_10a107a14();
          *plVar7 = (long)plVar6;
          plVar7[1] = (long)plVar6;
          plVar7[2] = (long)((long)plVar6 + (long)ppuVar14 * 0xc);
          auVar26._8_8_ = ppuVar14;
          auVar26._0_8_ = plVar6;
          return auVar26;
        }
        FUN_10a107a00();
        pcStack_108 = FUN_10a107a00;
        puVar8 = (undefined8 *)&UNK_10f63bc0b;
        pppuStack_110 = &ppuStack_f0;
        FUN_109ffde64();
        pcStack_118 = FUN_10a107a14;
        puStack_130 = puVar4;
        plStack_128 = plVar6;
        if (ppuVar14 < (undefined1 **)0x1555555555555556) {
          lVar9 = (long)ppuVar14 * 0xc;
          puStack_120 = (undefined1 *)&pppuStack_110;
          __Znwm(lVar9);
          auVar27._8_8_ = ppuVar14;
          auVar27._0_8_ = lVar9;
          return auVar27;
        }
        puStack_120 = (undefined1 *)&pppuStack_110;
        func_0x000109ffded8();
        uStack_138 = 0x10a107a58;
        puStack_150 = puVar4;
        plStack_148 = plVar6;
        ppuStack_140 = &puStack_120;
        if (ppuVar14 < (undefined1 **)0xccccccccccccccd) {
          puVar10 = puVar8;
          FUN_10a107ab0();
          *puVar8 = puVar10;
          puVar8[1] = puVar10;
          puVar8[2] = (undefined *)((long)puVar10 + (long)ppuVar14 * 0x14);
          auVar28._8_8_ = ppuVar14;
          auVar28._0_8_ = puVar10;
          return auVar28;
        }
        FUN_10a107a9c();
        pcStack_158 = FUN_10a107a9c;
        puVar8 = (undefined8 *)&UNK_10f63bc0b;
        pppuStack_160 = &ppuStack_140;
        FUN_109ffde64();
        pcStack_168 = FUN_10a107ab0;
        puStack_180 = puVar4;
        plStack_178 = plVar6;
        if (ppuVar14 < (undefined1 **)0xccccccccccccccd) {
          lVar9 = (long)ppuVar14 * 0x14;
          puStack_170 = (undefined1 *)&pppuStack_160;
          __Znwm(lVar9);
          auVar29._8_8_ = ppuVar14;
          auVar29._0_8_ = lVar9;
          return auVar29;
        }
        puStack_170 = (undefined1 *)&pppuStack_160;
        func_0x000109ffded8();
        uStack_188 = 0x10a107af0;
        puStack_1a0 = puVar4;
        plStack_198 = plVar6;
        ppuStack_190 = &puStack_170;
        if ((ulong)ppuVar14 >> 0x3d == 0) {
          puVar10 = puVar8;
          FUN_10a107b3c();
          *puVar8 = puVar10;
          puVar8[1] = puVar10;
          puVar8[2] = puVar10 + (long)ppuVar14;
          auVar30._8_8_ = ppuVar14;
          auVar30._0_8_ = puVar10;
          return auVar30;
        }
        FUN_10a107b28();
        pcStack_1a8 = FUN_10a107b28;
        pppuStack_1b0 = &ppuStack_190;
        FUN_109ffde64(&UNK_10f63bc0b);
        pcStack_1b8 = FUN_10a107b3c;
        puStack_1d0 = puVar4;
        plStack_1c8 = plVar6;
        if ((ulong)ppuVar14 >> 0x3d == 0) {
          lVar9 = (long)ppuVar14 << 3;
          puStack_1c0 = (undefined1 *)&pppuStack_1b0;
          __Znwm(lVar9);
          auVar31._8_8_ = ppuVar14;
          auVar31._0_8_ = lVar9;
          return auVar31;
        }
        puStack_1c0 = (undefined1 *)&pppuStack_1b0;
        func_0x000109ffded8();
        pcStack_1d8 = FUN_10a107b70;
        puVar11 = &UNK_10f63bc0b;
        ppuStack_1e0 = &puStack_1c0;
        FUN_109ffde64();
        uStack_1e8 = 0x10a107b84;
        lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_1f0 = (undefined1 *)&ppuStack_1e0;
        FUN_10a107c14();
        lVar9 = 0;
        puStack_208 = (undefined1 *)0x0;
        auStack_200[0] = 0;
        do {
          *(char *)((long)auStack_200 + lVar9 + -8) = (char)puVar11;
          lVar9 = lVar9 + 1;
          puVar11 = (undefined *)((ulong)puVar11 >> 8);
        } while (lVar9 != 8);
        lVar9 = 8;
        do {
          *(char *)((long)auStack_200 + lVar9 + -8) = (char)ppuVar14;
          lVar9 = lVar9 + 1;
          ppuVar14 = (undefined1 **)((ulong)ppuVar14 >> 8 & 0xffffff);
        } while (lVar9 != 0xc);
        auVar32._8_4_ = auStack_200[0];
        auVar32._0_8_ = puStack_208;
        uVar16 = (ulong)auStack_200[0];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
          puVar12 = puStack_208;
          ___stack_chk_fail();
          pcStack_218 = FUN_10a107c14;
          uStack_238 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          puStack_230 = puVar4;
          plStack_228 = plVar6;
          ppuStack_220 = &puStack_1f0;
          if (uVar16 < 0x11) {
            uStack_248 = 0;
            uStack_240 = 0;
            if (uVar16 != 0) {
              puVar8 = &uStack_248;
              do {
                *(undefined1 *)puVar8 = *puVar12;
                uVar16 = uVar16 - 1;
                puVar12 = puVar12 + 1;
                puVar8 = (undefined8 *)((long)puVar8 + 1);
              } while (uVar16 != 0);
            }
            puVar8 = &uStack_248;
          }
          else {
            puVar8 = (undefined8 *)&UNK_10f63c976;
            FUN_10a00946c();
            ___stack_chk_fail();
          }
          uVar15 = 0;
          puVar10 = puVar8;
          func_0x00010a107d98();
          bVar2 = *(byte *)((long)puVar8 + 10);
          if (bVar2 == 0) {
            uVar16 = 0;
          }
          else {
            lVar9 = 0xffffffbf;
            if (0x19 < bVar2 - 0x41) {
              lVar9 = -0x16;
            }
            lVar9 = (ulong)bVar2 + lVar9 + 0x1a;
            if (bVar2 - 0x61 < 0x1a) {
              lVar9 = (ulong)bVar2 + 0xffffff9f;
            }
            uVar16 = (lVar9 << 0x3c) + 0x1000000000000000;
          }
          auVar33._0_8_ = uVar16 | (ulong)puVar10;
          auVar33._8_8_ = uVar15;
          return auVar33;
        }
        auVar32._12_4_ = 0;
        return auVar32;
      }
      uVar16 = puVar5[2] - (long)puVar21;
      puVar18 = (undefined1 *)(uVar16 * 2);
      if (puVar18 < puVar12 || (long)puVar18 - (long)puVar12 == 0) {
        puVar18 = puVar12;
      }
      if (0x3ffffffffffffffe < uVar16) {
        puVar18 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar18 == (undefined1 *)0x0) {
        puVar22 = (undefined1 *)0x0;
      }
      else {
        puVar22 = puVar18;
        __Znwm();
      }
      puVar12 = puVar22 + ((long)puVar11 - (long)puVar21);
      _memcpy(puVar12,puVar4,param_5);
      _memcpy(puVar12 + param_5,puVar11,(long)puVar1 - (long)puVar11);
      puVar5[1] = (ulong)puVar11;
      puVar13 = puVar21;
      _memcpy(puVar22,puVar21,(long)puVar11 - (long)puVar21);
      *puVar5 = (ulong)puVar22;
      puVar5[1] = (ulong)(puVar12 + param_5 + ((long)puVar1 - (long)puVar11));
      puVar5[2] = (ulong)(puVar22 + (long)puVar18);
      if (puVar21 != (undefined1 *)0x0) {
        __ZdlPv(puVar21);
      }
    }
    else {
      lVar9 = (long)puVar1 - (long)puVar11;
      if (lVar9 < param_5) {
        puVar21 = puVar1;
        puVar18 = puVar1;
        if (puVar4 + lVar9 != param_4) {
          puVar21 = puVar11 + (long)param_4 + -(long)puVar4;
          puVar22 = puVar1;
          puVar20 = puVar4 + lVar9;
          do {
            puVar19 = puVar20 + 1;
            puVar18 = puVar22 + 1;
            *puVar22 = *puVar20;
            puVar22 = puVar18;
            puVar20 = puVar19;
          } while (puVar19 != param_4);
        }
        puVar5[1] = (ulong)puVar21;
        if (lVar9 < 1) goto LAB_10a1078e0;
        puVar13 = puVar21 + -param_5;
        puVar22 = puVar21;
        if (puVar21 + -param_5 < puVar1) {
          do {
            puVar20 = puVar13 + 1;
            puVar21 = puVar22 + 1;
            *puVar22 = *puVar13;
            puVar13 = puVar20;
            puVar22 = puVar21;
          } while (puVar20 != puVar1);
        }
        puVar5[1] = (ulong)puVar21;
        if (puVar18 != puVar11 + param_5) {
          _memmove(puVar11 + param_5,puVar11);
        }
      }
      else {
        puVar13 = puVar1 + -param_5;
        puVar21 = puVar1;
        puVar18 = puVar1;
        if (puVar1 + -param_5 < puVar1) {
          do {
            puVar22 = puVar13 + 1;
            puVar18 = puVar21 + 1;
            *puVar21 = *puVar13;
            puVar13 = puVar22;
            puVar21 = puVar18;
          } while (puVar22 != puVar1);
        }
        puVar5[1] = (ulong)puVar18;
        lVar9 = param_5;
        if (puVar1 != puVar11 + param_5) {
          _memmove(puVar11 + param_5,puVar11);
        }
      }
      _memmove(puVar11,puVar4,lVar9);
      puVar13 = puVar4;
    }
  }
LAB_10a1078e0:
  auVar24._8_8_ = puVar13;
  auVar24._0_8_ = puVar12;
  return auVar24;
}



/* Entry: 10a1076b8; end: 10a1076ff;  */

/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

undefined1  [16]
FUN_10a1076b8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,long param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  ushort uVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined1 **ppuVar14;
  undefined8 uVar15;
  ulong uVar16;
  ushort *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 *puStack_220;
  long *plStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  undefined1 *puStack_1f8;
  uint auStack_1f0 [2];
  long lStack_1e8;
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined1 *puStack_1c0;
  long *plStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  undefined1 *puStack_190;
  long *plStack_188;
  undefined1 **ppuStack_180;
  undefined8 uStack_178;
  undefined1 *puStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined1 ***pppuStack_150;
  code *pcStack_148;
  undefined1 *puStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  long *plStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  undefined1 *puStack_f0;
  long *plStack_e8;
  undefined1 **ppuStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  lVar8 = param_1;
  _malloc();
  if ((param_1 == 0) || (lVar8 != 0)) {
    auVar23._8_8_ = param_2;
    auVar23._0_8_ = lVar8;
    return auVar23;
  }
  puVar4 = (ulong *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puVar10 = PTR___ZTISt9bad_alloc_110346a68;
  puVar13 = PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  pcStack_28 = FUN_10a107700;
  puVar12 = puVar10;
  puVar11 = puVar10;
  if (0 < param_5) {
    puVar1 = (undefined1 *)puVar4[1];
    puStack_30 = &stack0xfffffffffffffff0;
    if ((long)(puVar4[2] - (long)puVar1) < param_5) {
      puVar21 = (undefined1 *)*puVar4;
      puVar11 = puVar1 + (param_5 - (long)puVar21);
      if ((long)puVar11 < 0) {
        puVar11 = puVar10;
        puVar12 = puVar13;
        FUN_109ffdf98();
        pcStack_88 = FUN_10a107904;
        plVar5 = (long *)&UNK_10f63bc0b;
        ppuStack_90 = &puStack_30;
        FUN_109ffde64();
        pcStack_98 = FUN_10a107918;
        lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar14 = &puStack_c8;
        plVar6 = plVar5;
        puStack_c8 = puVar11;
        puStack_c0 = puVar12;
        puStack_b0 = puVar13;
        puStack_a8 = puVar10;
        puStack_a0 = (undefined1 *)&ppuStack_90;
        FUN_10a0fc030();
        if (((ulong)ppuVar14 & 1) == 0) {
          puVar17 = (ushort *)&UNK_10e4965ac;
        }
        else {
          puVar17 = (ushort *)(*plVar5 + (long)plVar6 * 0x10 + 0xc);
        }
        uVar3 = *puVar17;
        if ((ulong)uVar3 == 0xffff) {
          plVar6 = (long *)&UNK_10f63c8ec;
          FUN_10a00946c();
        }
        else {
          *(ushort *)(plVar5 + 7) = uVar3;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
            auVar25._8_8_ = ppuVar14;
            auVar25._0_8_ = plVar5[4] + (ulong)uVar3;
            return auVar25;
          }
        }
        ___stack_chk_fail();
        uStack_d8 = 0x10a1079b8;
        puStack_f0 = puVar13;
        plStack_e8 = plVar5;
        ppuStack_e0 = &puStack_a0;
        if (ppuVar14 < (undefined1 **)0x1555555555555556) {
          plVar5 = plVar6;
          FUN_10a107a14();
          *plVar6 = (long)plVar5;
          plVar6[1] = (long)plVar5;
          plVar6[2] = (long)((long)plVar5 + (long)ppuVar14 * 0xc);
          auVar26._8_8_ = ppuVar14;
          auVar26._0_8_ = plVar5;
          return auVar26;
        }
        FUN_10a107a00();
        pcStack_f8 = FUN_10a107a00;
        puVar7 = (undefined8 *)&UNK_10f63bc0b;
        pppuStack_100 = &ppuStack_e0;
        FUN_109ffde64();
        pcStack_108 = FUN_10a107a14;
        puStack_120 = puVar13;
        plStack_118 = plVar5;
        if (ppuVar14 < (undefined1 **)0x1555555555555556) {
          lVar8 = (long)ppuVar14 * 0xc;
          puStack_110 = (undefined1 *)&pppuStack_100;
          __Znwm(lVar8);
          auVar27._8_8_ = ppuVar14;
          auVar27._0_8_ = lVar8;
          return auVar27;
        }
        puStack_110 = (undefined1 *)&pppuStack_100;
        func_0x000109ffded8();
        uStack_128 = 0x10a107a58;
        puStack_140 = puVar13;
        plStack_138 = plVar5;
        ppuStack_130 = &puStack_110;
        if (ppuVar14 < (undefined1 **)0xccccccccccccccd) {
          puVar9 = puVar7;
          FUN_10a107ab0();
          *puVar7 = puVar9;
          puVar7[1] = puVar9;
          puVar7[2] = (undefined *)((long)puVar9 + (long)ppuVar14 * 0x14);
          auVar28._8_8_ = ppuVar14;
          auVar28._0_8_ = puVar9;
          return auVar28;
        }
        FUN_10a107a9c();
        pcStack_148 = FUN_10a107a9c;
        puVar7 = (undefined8 *)&UNK_10f63bc0b;
        pppuStack_150 = &ppuStack_130;
        FUN_109ffde64();
        pcStack_158 = FUN_10a107ab0;
        puStack_170 = puVar13;
        plStack_168 = plVar5;
        if (ppuVar14 < (undefined1 **)0xccccccccccccccd) {
          lVar8 = (long)ppuVar14 * 0x14;
          puStack_160 = (undefined1 *)&pppuStack_150;
          __Znwm(lVar8);
          auVar29._8_8_ = ppuVar14;
          auVar29._0_8_ = lVar8;
          return auVar29;
        }
        puStack_160 = (undefined1 *)&pppuStack_150;
        func_0x000109ffded8();
        uStack_178 = 0x10a107af0;
        puStack_190 = puVar13;
        plStack_188 = plVar5;
        ppuStack_180 = &puStack_160;
        if ((ulong)ppuVar14 >> 0x3d == 0) {
          puVar9 = puVar7;
          FUN_10a107b3c();
          *puVar7 = puVar9;
          puVar7[1] = puVar9;
          puVar7[2] = puVar9 + (long)ppuVar14;
          auVar30._8_8_ = ppuVar14;
          auVar30._0_8_ = puVar9;
          return auVar30;
        }
        FUN_10a107b28();
        pcStack_198 = FUN_10a107b28;
        pppuStack_1a0 = &ppuStack_180;
        FUN_109ffde64(&UNK_10f63bc0b);
        pcStack_1a8 = FUN_10a107b3c;
        puStack_1c0 = puVar13;
        plStack_1b8 = plVar5;
        if ((ulong)ppuVar14 >> 0x3d == 0) {
          lVar8 = (long)ppuVar14 << 3;
          puStack_1b0 = (undefined1 *)&pppuStack_1a0;
          __Znwm(lVar8);
          auVar31._8_8_ = ppuVar14;
          auVar31._0_8_ = lVar8;
          return auVar31;
        }
        puStack_1b0 = (undefined1 *)&pppuStack_1a0;
        func_0x000109ffded8();
        pcStack_1c8 = FUN_10a107b70;
        puVar10 = &UNK_10f63bc0b;
        ppuStack_1d0 = &puStack_1b0;
        FUN_109ffde64();
        uStack_1d8 = 0x10a107b84;
        lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_1e0 = (undefined1 *)&ppuStack_1d0;
        FUN_10a107c14();
        lVar8 = 0;
        puStack_1f8 = (undefined1 *)0x0;
        auStack_1f0[0] = 0;
        do {
          *(char *)((long)auStack_1f0 + lVar8 + -8) = (char)puVar10;
          lVar8 = lVar8 + 1;
          puVar10 = (undefined *)((ulong)puVar10 >> 8);
        } while (lVar8 != 8);
        lVar8 = 8;
        do {
          *(char *)((long)auStack_1f0 + lVar8 + -8) = (char)ppuVar14;
          lVar8 = lVar8 + 1;
          ppuVar14 = (undefined1 **)((ulong)ppuVar14 >> 8 & 0xffffff);
        } while (lVar8 != 0xc);
        auVar32._8_4_ = auStack_1f0[0];
        auVar32._0_8_ = puStack_1f8;
        uVar16 = (ulong)auStack_1f0[0];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
          puVar11 = puStack_1f8;
          ___stack_chk_fail();
          pcStack_208 = FUN_10a107c14;
          uStack_228 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          puStack_220 = puVar13;
          plStack_218 = plVar5;
          ppuStack_210 = &puStack_1e0;
          if (uVar16 < 0x11) {
            uStack_238 = 0;
            uStack_230 = 0;
            if (uVar16 != 0) {
              puVar7 = &uStack_238;
              do {
                *(undefined1 *)puVar7 = *puVar11;
                uVar16 = uVar16 - 1;
                puVar11 = puVar11 + 1;
                puVar7 = (undefined8 *)((long)puVar7 + 1);
              } while (uVar16 != 0);
            }
            puVar7 = &uStack_238;
          }
          else {
            puVar7 = (undefined8 *)&UNK_10f63c976;
            FUN_10a00946c();
            ___stack_chk_fail();
          }
          uVar15 = 0;
          puVar9 = puVar7;
          func_0x00010a107d98();
          bVar2 = *(byte *)((long)puVar7 + 10);
          if (bVar2 == 0) {
            uVar16 = 0;
          }
          else {
            lVar8 = 0xffffffbf;
            if (0x19 < bVar2 - 0x41) {
              lVar8 = -0x16;
            }
            lVar8 = (ulong)bVar2 + lVar8 + 0x1a;
            if (bVar2 - 0x61 < 0x1a) {
              lVar8 = (ulong)bVar2 + 0xffffff9f;
            }
            uVar16 = (lVar8 << 0x3c) + 0x1000000000000000;
          }
          auVar33._0_8_ = uVar16 | (ulong)puVar9;
          auVar33._8_8_ = uVar15;
          return auVar33;
        }
        auVar32._12_4_ = 0;
        return auVar32;
      }
      uVar16 = puVar4[2] - (long)puVar21;
      puVar18 = (undefined1 *)(uVar16 * 2);
      if (puVar18 < puVar11 || (long)puVar18 - (long)puVar11 == 0) {
        puVar18 = puVar11;
      }
      if (0x3ffffffffffffffe < uVar16) {
        puVar18 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar18 == (undefined1 *)0x0) {
        puVar22 = (undefined1 *)0x0;
      }
      else {
        puVar22 = puVar18;
        __Znwm();
      }
      puVar11 = puVar22 + ((long)puVar10 - (long)puVar21);
      _memcpy(puVar11,puVar13,param_5);
      _memcpy(puVar11 + param_5,puVar10,(long)puVar1 - (long)puVar10);
      puVar4[1] = (ulong)puVar10;
      puVar12 = puVar21;
      _memcpy(puVar22,puVar21,(long)puVar10 - (long)puVar21);
      *puVar4 = (ulong)puVar22;
      puVar4[1] = (ulong)(puVar11 + param_5 + ((long)puVar1 - (long)puVar10));
      puVar4[2] = (ulong)(puVar22 + (long)puVar18);
      if (puVar21 != (undefined1 *)0x0) {
        __ZdlPv(puVar21);
      }
    }
    else {
      lVar8 = (long)puVar1 - (long)puVar10;
      if (lVar8 < param_5) {
        puVar21 = puVar1;
        puVar18 = puVar1;
        if (puVar13 + lVar8 != param_4) {
          puVar21 = puVar10 + (long)param_4 + -(long)puVar13;
          puVar22 = puVar1;
          puVar20 = puVar13 + lVar8;
          do {
            puVar19 = puVar20 + 1;
            puVar18 = puVar22 + 1;
            *puVar22 = *puVar20;
            puVar22 = puVar18;
            puVar20 = puVar19;
          } while (puVar19 != param_4);
        }
        puVar4[1] = (ulong)puVar21;
        if (lVar8 < 1) goto LAB_10a1078e0;
        puVar12 = puVar21 + -param_5;
        puVar22 = puVar21;
        if (puVar21 + -param_5 < puVar1) {
          do {
            puVar20 = puVar12 + 1;
            puVar21 = puVar22 + 1;
            *puVar22 = *puVar12;
            puVar12 = puVar20;
            puVar22 = puVar21;
          } while (puVar20 != puVar1);
        }
        puVar4[1] = (ulong)puVar21;
        if (puVar18 != puVar10 + param_5) {
          _memmove(puVar10 + param_5,puVar10);
        }
      }
      else {
        puVar12 = puVar1 + -param_5;
        puVar21 = puVar1;
        puVar18 = puVar1;
        if (puVar1 + -param_5 < puVar1) {
          do {
            puVar22 = puVar12 + 1;
            puVar18 = puVar21 + 1;
            *puVar21 = *puVar12;
            puVar12 = puVar22;
            puVar21 = puVar18;
          } while (puVar22 != puVar1);
        }
        puVar4[1] = (ulong)puVar18;
        lVar8 = param_5;
        if (puVar1 != puVar10 + param_5) {
          _memmove(puVar10 + param_5,puVar10);
        }
      }
      _memmove(puVar10,puVar13,lVar8);
      puVar12 = puVar13;
    }
  }
LAB_10a1078e0:
  auVar24._8_8_ = puVar12;
  auVar24._0_8_ = puVar11;
  return auVar24;
}



/* Entry: 10a107700; end: 10a107903;  */

/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

undefined1  [16]
FUN_10a107700(ulong *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
             long param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  ushort uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 **ppuVar12;
  undefined8 uVar13;
  ulong uVar14;
  ushort *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 *puStack_200;
  long *plStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined1 *puStack_1d8;
  uint auStack_1d0 [2];
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined1 *puStack_1a0;
  long *plStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined1 *puStack_170;
  long *plStack_168;
  undefined1 **ppuStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined1 ***pppuStack_130;
  code *pcStack_128;
  undefined1 *puStack_120;
  long *plStack_118;
  undefined1 **ppuStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 ***pppuStack_e0;
  code *pcStack_d8;
  undefined1 *puStack_d0;
  long *plStack_c8;
  undefined1 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  puVar11 = param_2;
  puVar10 = param_2;
  if (0 < param_5) {
    puVar1 = (undefined1 *)param_1[1];
    if ((long)(param_1[2] - (long)puVar1) < param_5) {
      puVar19 = (undefined1 *)*param_1;
      puVar10 = puVar1 + (param_5 - (long)puVar19);
      if ((long)puVar10 < 0) {
        puVar10 = param_2;
        puVar11 = param_3;
        FUN_109ffdf98();
        pcStack_68 = FUN_10a107904;
        plVar4 = (long *)&UNK_10f63bc0b;
        puStack_70 = &stack0xfffffffffffffff0;
        FUN_109ffde64();
        pcStack_78 = FUN_10a107918;
        lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar12 = &puStack_a8;
        plVar5 = plVar4;
        puStack_a8 = puVar10;
        puStack_a0 = puVar11;
        puStack_90 = param_3;
        puStack_88 = param_2;
        puStack_80 = (undefined1 *)&puStack_70;
        FUN_10a0fc030();
        if (((ulong)ppuVar12 & 1) == 0) {
          puVar15 = (ushort *)&UNK_10e4965ac;
        }
        else {
          puVar15 = (ushort *)(*plVar4 + (long)plVar5 * 0x10 + 0xc);
        }
        uVar3 = *puVar15;
        if ((ulong)uVar3 == 0xffff) {
          plVar5 = (long *)&UNK_10f63c8ec;
          FUN_10a00946c();
        }
        else {
          *(ushort *)(plVar4 + 7) = uVar3;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
            auVar22._8_8_ = ppuVar12;
            auVar22._0_8_ = plVar4[4] + (ulong)uVar3;
            return auVar22;
          }
        }
        ___stack_chk_fail();
        uStack_b8 = 0x10a1079b8;
        puStack_d0 = param_3;
        plStack_c8 = plVar4;
        ppuStack_c0 = &puStack_80;
        if (ppuVar12 < (undefined1 **)0x1555555555555556) {
          plVar4 = plVar5;
          FUN_10a107a14();
          *plVar5 = (long)plVar4;
          plVar5[1] = (long)plVar4;
          plVar5[2] = (long)((long)plVar4 + (long)ppuVar12 * 0xc);
          auVar23._8_8_ = ppuVar12;
          auVar23._0_8_ = plVar4;
          return auVar23;
        }
        FUN_10a107a00();
        pcStack_d8 = FUN_10a107a00;
        puVar6 = (undefined8 *)&UNK_10f63bc0b;
        pppuStack_e0 = &ppuStack_c0;
        FUN_109ffde64();
        pcStack_e8 = FUN_10a107a14;
        puStack_100 = param_3;
        plStack_f8 = plVar4;
        if (ppuVar12 < (undefined1 **)0x1555555555555556) {
          lVar7 = (long)ppuVar12 * 0xc;
          puStack_f0 = (undefined1 *)&pppuStack_e0;
          __Znwm(lVar7);
          auVar24._8_8_ = ppuVar12;
          auVar24._0_8_ = lVar7;
          return auVar24;
        }
        puStack_f0 = (undefined1 *)&pppuStack_e0;
        func_0x000109ffded8();
        uStack_108 = 0x10a107a58;
        puStack_120 = param_3;
        plStack_118 = plVar4;
        ppuStack_110 = &puStack_f0;
        if (ppuVar12 < (undefined1 **)0xccccccccccccccd) {
          puVar8 = puVar6;
          FUN_10a107ab0();
          *puVar6 = puVar8;
          puVar6[1] = puVar8;
          puVar6[2] = (undefined *)((long)puVar8 + (long)ppuVar12 * 0x14);
          auVar25._8_8_ = ppuVar12;
          auVar25._0_8_ = puVar8;
          return auVar25;
        }
        FUN_10a107a9c();
        pcStack_128 = FUN_10a107a9c;
        puVar6 = (undefined8 *)&UNK_10f63bc0b;
        pppuStack_130 = &ppuStack_110;
        FUN_109ffde64();
        pcStack_138 = FUN_10a107ab0;
        puStack_150 = param_3;
        plStack_148 = plVar4;
        if (ppuVar12 < (undefined1 **)0xccccccccccccccd) {
          lVar7 = (long)ppuVar12 * 0x14;
          puStack_140 = (undefined1 *)&pppuStack_130;
          __Znwm(lVar7);
          auVar26._8_8_ = ppuVar12;
          auVar26._0_8_ = lVar7;
          return auVar26;
        }
        puStack_140 = (undefined1 *)&pppuStack_130;
        func_0x000109ffded8();
        uStack_158 = 0x10a107af0;
        puStack_170 = param_3;
        plStack_168 = plVar4;
        ppuStack_160 = &puStack_140;
        if ((ulong)ppuVar12 >> 0x3d == 0) {
          puVar8 = puVar6;
          FUN_10a107b3c();
          *puVar6 = puVar8;
          puVar6[1] = puVar8;
          puVar6[2] = puVar8 + (long)ppuVar12;
          auVar27._8_8_ = ppuVar12;
          auVar27._0_8_ = puVar8;
          return auVar27;
        }
        FUN_10a107b28();
        pcStack_178 = FUN_10a107b28;
        pppuStack_180 = &ppuStack_160;
        FUN_109ffde64(&UNK_10f63bc0b);
        pcStack_188 = FUN_10a107b3c;
        puStack_1a0 = param_3;
        plStack_198 = plVar4;
        if ((ulong)ppuVar12 >> 0x3d == 0) {
          lVar7 = (long)ppuVar12 << 3;
          puStack_190 = (undefined1 *)&pppuStack_180;
          __Znwm(lVar7);
          auVar28._8_8_ = ppuVar12;
          auVar28._0_8_ = lVar7;
          return auVar28;
        }
        puStack_190 = (undefined1 *)&pppuStack_180;
        func_0x000109ffded8();
        pcStack_1a8 = FUN_10a107b70;
        puVar9 = &UNK_10f63bc0b;
        ppuStack_1b0 = &puStack_190;
        FUN_109ffde64();
        uStack_1b8 = 0x10a107b84;
        lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_1c0 = (undefined1 *)&ppuStack_1b0;
        FUN_10a107c14();
        lVar7 = 0;
        puStack_1d8 = (undefined1 *)0x0;
        auStack_1d0[0] = 0;
        do {
          *(char *)((long)auStack_1d0 + lVar7 + -8) = (char)puVar9;
          lVar7 = lVar7 + 1;
          puVar9 = (undefined *)((ulong)puVar9 >> 8);
        } while (lVar7 != 8);
        lVar7 = 8;
        do {
          *(char *)((long)auStack_1d0 + lVar7 + -8) = (char)ppuVar12;
          lVar7 = lVar7 + 1;
          ppuVar12 = (undefined1 **)((ulong)ppuVar12 >> 8 & 0xffffff);
        } while (lVar7 != 0xc);
        auVar29._8_4_ = auStack_1d0[0];
        auVar29._0_8_ = puStack_1d8;
        uVar14 = (ulong)auStack_1d0[0];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
          puVar10 = puStack_1d8;
          ___stack_chk_fail();
          pcStack_1e8 = FUN_10a107c14;
          uStack_208 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          puStack_200 = param_3;
          plStack_1f8 = plVar4;
          ppuStack_1f0 = &puStack_1c0;
          if (uVar14 < 0x11) {
            uStack_218 = 0;
            uStack_210 = 0;
            if (uVar14 != 0) {
              puVar6 = &uStack_218;
              do {
                *(undefined1 *)puVar6 = *puVar10;
                uVar14 = uVar14 - 1;
                puVar10 = puVar10 + 1;
                puVar6 = (undefined8 *)((long)puVar6 + 1);
              } while (uVar14 != 0);
            }
            puVar6 = &uStack_218;
          }
          else {
            puVar6 = (undefined8 *)&UNK_10f63c976;
            FUN_10a00946c();
            ___stack_chk_fail();
          }
          uVar13 = 0;
          puVar8 = puVar6;
          func_0x00010a107d98();
          bVar2 = *(byte *)((long)puVar6 + 10);
          if (bVar2 == 0) {
            uVar14 = 0;
          }
          else {
            lVar7 = 0xffffffbf;
            if (0x19 < bVar2 - 0x41) {
              lVar7 = -0x16;
            }
            lVar7 = (ulong)bVar2 + lVar7 + 0x1a;
            if (bVar2 - 0x61 < 0x1a) {
              lVar7 = (ulong)bVar2 + 0xffffff9f;
            }
            uVar14 = (lVar7 << 0x3c) + 0x1000000000000000;
          }
          auVar30._0_8_ = uVar14 | (ulong)puVar8;
          auVar30._8_8_ = uVar13;
          return auVar30;
        }
        auVar29._12_4_ = 0;
        return auVar29;
      }
      uVar14 = param_1[2] - (long)puVar19;
      puVar16 = (undefined1 *)(uVar14 * 2);
      if (puVar16 < puVar10 || (long)puVar16 - (long)puVar10 == 0) {
        puVar16 = puVar10;
      }
      if (0x3ffffffffffffffe < uVar14) {
        puVar16 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar16 == (undefined1 *)0x0) {
        puVar20 = (undefined1 *)0x0;
      }
      else {
        puVar20 = puVar16;
        __Znwm();
      }
      puVar10 = puVar20 + ((long)param_2 - (long)puVar19);
      _memcpy(puVar10,param_3,param_5);
      _memcpy(puVar10 + param_5,param_2,(long)puVar1 - (long)param_2);
      param_1[1] = (ulong)param_2;
      puVar11 = puVar19;
      _memcpy(puVar20,puVar19,(long)param_2 - (long)puVar19);
      *param_1 = (ulong)puVar20;
      param_1[1] = (ulong)(puVar10 + param_5 + ((long)puVar1 - (long)param_2));
      param_1[2] = (ulong)(puVar20 + (long)puVar16);
      if (puVar19 != (undefined1 *)0x0) {
        __ZdlPv(puVar19);
      }
    }
    else {
      lVar7 = (long)puVar1 - (long)param_2;
      if (lVar7 < param_5) {
        puVar19 = puVar1;
        puVar16 = puVar1;
        if (param_3 + lVar7 != param_4) {
          puVar19 = param_4 + ((long)param_2 - (long)param_3);
          puVar20 = puVar1;
          puVar18 = param_3 + lVar7;
          do {
            puVar17 = puVar18 + 1;
            puVar16 = puVar20 + 1;
            *puVar20 = *puVar18;
            puVar20 = puVar16;
            puVar18 = puVar17;
          } while (puVar17 != param_4);
        }
        param_1[1] = (ulong)puVar19;
        if (lVar7 < 1) goto LAB_10a1078e0;
        puVar11 = puVar19 + -param_5;
        puVar20 = puVar19;
        if (puVar19 + -param_5 < puVar1) {
          do {
            puVar18 = puVar11 + 1;
            puVar19 = puVar20 + 1;
            *puVar20 = *puVar11;
            puVar11 = puVar18;
            puVar20 = puVar19;
          } while (puVar18 != puVar1);
        }
        param_1[1] = (ulong)puVar19;
        if (puVar16 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
      }
      else {
        puVar11 = puVar1 + -param_5;
        puVar19 = puVar1;
        puVar16 = puVar1;
        if (puVar1 + -param_5 < puVar1) {
          do {
            puVar20 = puVar11 + 1;
            puVar16 = puVar19 + 1;
            *puVar19 = *puVar11;
            puVar11 = puVar20;
            puVar19 = puVar16;
          } while (puVar20 != puVar1);
        }
        param_1[1] = (ulong)puVar16;
        lVar7 = param_5;
        if (puVar1 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
      }
      _memmove(param_2,param_3,lVar7);
      puVar11 = param_3;
    }
  }
LAB_10a1078e0:
  auVar21._8_8_ = puVar11;
  auVar21._0_8_ = puVar10;
  return auVar21;
}



/* Entry: 10a107904; end: 10a107917;  */

/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

undefined1  [16] FUN_10a107904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ushort *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *puStack_178;
  uint auStack_170 [2];
  long lStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 ***pppuStack_120;
  code *pcStack_118;
  undefined1 **ppuStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 ***pppuStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  plVar3 = (long *)&UNK_10f63bc0b;
  FUN_109ffde64();
  pcStack_18 = FUN_10a107918;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = &uStack_48;
  plVar4 = plVar3;
  uStack_48 = param_2;
  uStack_40 = param_3;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_10a0fc030();
  if (((ulong)puVar10 & 1) == 0) {
    puVar13 = (ushort *)&UNK_10e4965ac;
  }
  else {
    puVar13 = (ushort *)(*plVar3 + (long)plVar4 * 0x10 + 0xc);
  }
  uVar2 = *puVar13;
  if ((ulong)uVar2 == 0xffff) {
    plVar4 = (long *)&UNK_10f63c8ec;
    FUN_10a00946c();
  }
  else {
    *(ushort *)(plVar3 + 7) = uVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      auVar14._8_8_ = puVar10;
      auVar14._0_8_ = plVar3[4] + (ulong)uVar2;
      return auVar14;
    }
  }
  ___stack_chk_fail();
  uStack_58 = 0x10a1079b8;
  pppuStack_80 = &ppuStack_60;
  ppuStack_60 = &puStack_20;
  if (puVar10 < (undefined8 *)0x1555555555555556) {
    plVar3 = plVar4;
    FUN_10a107a14();
    *plVar4 = (long)plVar3;
    plVar4[1] = (long)plVar3;
    plVar4[2] = (long)((long)plVar3 + (long)puVar10 * 0xc);
    auVar15._8_8_ = puVar10;
    auVar15._0_8_ = plVar3;
    return auVar15;
  }
  FUN_10a107a00();
  pcStack_78 = FUN_10a107a00;
  puVar5 = (undefined8 *)&UNK_10f63bc0b;
  FUN_109ffde64();
  pcStack_88 = FUN_10a107a14;
  ppuStack_b0 = &puStack_90;
  if (puVar10 < (undefined8 *)0x1555555555555556) {
    lVar6 = (long)puVar10 * 0xc;
    puStack_90 = (undefined1 *)&pppuStack_80;
    __Znwm(lVar6);
    auVar16._8_8_ = puVar10;
    auVar16._0_8_ = lVar6;
    return auVar16;
  }
  puStack_90 = (undefined1 *)&pppuStack_80;
  func_0x000109ffded8();
  uStack_a8 = 0x10a107a58;
  pppuStack_d0 = &ppuStack_b0;
  if (puVar10 < (undefined8 *)0xccccccccccccccd) {
    puVar7 = puVar5;
    FUN_10a107ab0();
    *puVar5 = puVar7;
    puVar5[1] = puVar7;
    puVar5[2] = (undefined *)((long)puVar7 + (long)puVar10 * 0x14);
    auVar17._8_8_ = puVar10;
    auVar17._0_8_ = puVar7;
    return auVar17;
  }
  FUN_10a107a9c();
  pcStack_c8 = FUN_10a107a9c;
  puVar5 = (undefined8 *)&UNK_10f63bc0b;
  FUN_109ffde64();
  pcStack_d8 = FUN_10a107ab0;
  ppuStack_100 = &puStack_e0;
  if (puVar10 < (undefined8 *)0xccccccccccccccd) {
    lVar6 = (long)puVar10 * 0x14;
    puStack_e0 = (undefined1 *)&pppuStack_d0;
    __Znwm(lVar6);
    auVar18._8_8_ = puVar10;
    auVar18._0_8_ = lVar6;
    return auVar18;
  }
  puStack_e0 = (undefined1 *)&pppuStack_d0;
  func_0x000109ffded8();
  uStack_f8 = 0x10a107af0;
  pppuStack_120 = &ppuStack_100;
  if ((ulong)puVar10 >> 0x3d == 0) {
    puVar7 = puVar5;
    FUN_10a107b3c();
    *puVar5 = puVar7;
    puVar5[1] = puVar7;
    puVar5[2] = puVar7 + (long)puVar10;
    auVar19._8_8_ = puVar10;
    auVar19._0_8_ = puVar7;
    return auVar19;
  }
  FUN_10a107b28();
  pcStack_118 = FUN_10a107b28;
  FUN_109ffde64(&UNK_10f63bc0b);
  pcStack_128 = FUN_10a107b3c;
  ppuStack_150 = &puStack_130;
  if ((ulong)puVar10 >> 0x3d == 0) {
    lVar6 = (long)puVar10 << 3;
    puStack_130 = (undefined1 *)&pppuStack_120;
    __Znwm(lVar6);
    auVar20._8_8_ = puVar10;
    auVar20._0_8_ = lVar6;
    return auVar20;
  }
  puStack_130 = (undefined1 *)&pppuStack_120;
  func_0x000109ffded8();
  pcStack_148 = FUN_10a107b70;
  puVar8 = &UNK_10f63bc0b;
  FUN_109ffde64();
  uStack_158 = 0x10a107b84;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = (undefined1 *)&ppuStack_150;
  FUN_10a107c14();
  lVar6 = 0;
  puStack_178 = (undefined1 *)0x0;
  auStack_170[0] = 0;
  do {
    *(char *)((long)auStack_170 + lVar6 + -8) = (char)puVar8;
    lVar6 = lVar6 + 1;
    puVar8 = (undefined *)((ulong)puVar8 >> 8);
  } while (lVar6 != 8);
  lVar6 = 8;
  do {
    *(char *)((long)auStack_170 + lVar6 + -8) = (char)puVar10;
    lVar6 = lVar6 + 1;
    puVar10 = (undefined8 *)((ulong)puVar10 >> 8 & 0xffffff);
  } while (lVar6 != 0xc);
  auVar21._8_4_ = auStack_170[0];
  auVar21._0_8_ = puStack_178;
  uVar11 = (ulong)auStack_170[0];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    auVar21._12_4_ = 0;
    return auVar21;
  }
  puVar9 = puStack_178;
  ___stack_chk_fail();
  uStack_1a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (uVar11 < 0x11) {
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    if (uVar11 != 0) {
      puVar10 = &uStack_1b8;
      do {
        *(undefined1 *)puVar10 = *puVar9;
        uVar11 = uVar11 - 1;
        puVar9 = puVar9 + 1;
        puVar10 = (undefined8 *)((long)puVar10 + 1);
      } while (uVar11 != 0);
    }
    puVar10 = &uStack_1b8;
  }
  else {
    puVar10 = (undefined8 *)&UNK_10f63c976;
    FUN_10a00946c();
    ___stack_chk_fail();
  }
  uVar12 = 0;
  puVar5 = puVar10;
  func_0x00010a107d98();
  bVar1 = *(byte *)((long)puVar10 + 10);
  if (bVar1 == 0) {
    uVar11 = 0;
  }
  else {
    lVar6 = 0xffffffbf;
    if (0x19 < bVar1 - 0x41) {
      lVar6 = -0x16;
    }
    lVar6 = (ulong)bVar1 + lVar6 + 0x1a;
    if (bVar1 - 0x61 < 0x1a) {
      lVar6 = (ulong)bVar1 + 0xffffff9f;
    }
    uVar11 = (lVar6 << 0x3c) + 0x1000000000000000;
  }
  auVar22._0_8_ = uVar11 | (ulong)puVar5;
  auVar22._8_8_ = uVar12;
  return auVar22;
}



/* Entry: 10a107918; end: 10a1079ff;  */

/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

undefined1  [16] FUN_10a107918(long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ushort *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 *puStack_168;
  uint auStack_160 [2];
  long lStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined1 ***pppuStack_110;
  code *pcStack_108;
  undefined1 **ppuStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 ***pppuStack_c0;
  code *pcStack_b8;
  undefined1 **ppuStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = &uStack_38;
  plVar3 = param_1;
  uStack_38 = param_2;
  uStack_30 = param_3;
  FUN_10a0fc030();
  if (((ulong)puVar10 & 1) == 0) {
    puVar13 = (ushort *)&UNK_10e4965ac;
  }
  else {
    puVar13 = (ushort *)(*param_1 + (long)plVar3 * 0x10 + 0xc);
  }
  uVar2 = *puVar13;
  if ((ulong)uVar2 == 0xffff) {
    plVar3 = (long *)&UNK_10f63c8ec;
    FUN_10a00946c();
  }
  else {
    *(ushort *)(param_1 + 7) = uVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      auVar14._8_8_ = puVar10;
      auVar14._0_8_ = param_1[4] + (ulong)uVar2;
      return auVar14;
    }
  }
  ___stack_chk_fail();
  uStack_48 = 0x10a1079b8;
  ppuStack_70 = &puStack_50;
  puStack_50 = &stack0xfffffffffffffff0;
  if (puVar10 < (undefined8 *)0x1555555555555556) {
    plVar4 = plVar3;
    FUN_10a107a14();
    *plVar3 = (long)plVar4;
    plVar3[1] = (long)plVar4;
    plVar3[2] = (long)((long)plVar4 + (long)puVar10 * 0xc);
    auVar15._8_8_ = puVar10;
    auVar15._0_8_ = plVar4;
    return auVar15;
  }
  FUN_10a107a00();
  pcStack_68 = FUN_10a107a00;
  puVar5 = (undefined8 *)&UNK_10f63bc0b;
  FUN_109ffde64();
  pcStack_78 = FUN_10a107a14;
  ppuStack_a0 = &puStack_80;
  if (puVar10 < (undefined8 *)0x1555555555555556) {
    lVar6 = (long)puVar10 * 0xc;
    puStack_80 = (undefined1 *)&ppuStack_70;
    __Znwm(lVar6);
    auVar16._8_8_ = puVar10;
    auVar16._0_8_ = lVar6;
    return auVar16;
  }
  puStack_80 = (undefined1 *)&ppuStack_70;
  func_0x000109ffded8();
  uStack_98 = 0x10a107a58;
  pppuStack_c0 = &ppuStack_a0;
  if (puVar10 < (undefined8 *)0xccccccccccccccd) {
    puVar7 = puVar5;
    FUN_10a107ab0();
    *puVar5 = puVar7;
    puVar5[1] = puVar7;
    puVar5[2] = (undefined *)((long)puVar7 + (long)puVar10 * 0x14);
    auVar17._8_8_ = puVar10;
    auVar17._0_8_ = puVar7;
    return auVar17;
  }
  FUN_10a107a9c();
  pcStack_b8 = FUN_10a107a9c;
  puVar5 = (undefined8 *)&UNK_10f63bc0b;
  FUN_109ffde64();
  pcStack_c8 = FUN_10a107ab0;
  ppuStack_f0 = &puStack_d0;
  if (puVar10 < (undefined8 *)0xccccccccccccccd) {
    lVar6 = (long)puVar10 * 0x14;
    puStack_d0 = (undefined1 *)&pppuStack_c0;
    __Znwm(lVar6);
    auVar18._8_8_ = puVar10;
    auVar18._0_8_ = lVar6;
    return auVar18;
  }
  puStack_d0 = (undefined1 *)&pppuStack_c0;
  func_0x000109ffded8();
  uStack_e8 = 0x10a107af0;
  pppuStack_110 = &ppuStack_f0;
  if ((ulong)puVar10 >> 0x3d == 0) {
    puVar7 = puVar5;
    FUN_10a107b3c();
    *puVar5 = puVar7;
    puVar5[1] = puVar7;
    puVar5[2] = puVar7 + (long)puVar10;
    auVar19._8_8_ = puVar10;
    auVar19._0_8_ = puVar7;
    return auVar19;
  }
  FUN_10a107b28();
  pcStack_108 = FUN_10a107b28;
  FUN_109ffde64(&UNK_10f63bc0b);
  pcStack_118 = FUN_10a107b3c;
  ppuStack_140 = &puStack_120;
  if ((ulong)puVar10 >> 0x3d == 0) {
    lVar6 = (long)puVar10 << 3;
    puStack_120 = (undefined1 *)&pppuStack_110;
    __Znwm(lVar6);
    auVar20._8_8_ = puVar10;
    auVar20._0_8_ = lVar6;
    return auVar20;
  }
  puStack_120 = (undefined1 *)&pppuStack_110;
  func_0x000109ffded8();
  pcStack_138 = FUN_10a107b70;
  puVar8 = &UNK_10f63bc0b;
  FUN_109ffde64();
  uStack_148 = 0x10a107b84;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_150 = (undefined1 *)&ppuStack_140;
  FUN_10a107c14();
  lVar6 = 0;
  puStack_168 = (undefined1 *)0x0;
  auStack_160[0] = 0;
  do {
    *(char *)((long)auStack_160 + lVar6 + -8) = (char)puVar8;
    lVar6 = lVar6 + 1;
    puVar8 = (undefined *)((ulong)puVar8 >> 8);
  } while (lVar6 != 8);
  lVar6 = 8;
  do {
    *(char *)((long)auStack_160 + lVar6 + -8) = (char)puVar10;
    lVar6 = lVar6 + 1;
    puVar10 = (undefined8 *)((ulong)puVar10 >> 8 & 0xffffff);
  } while (lVar6 != 0xc);
  auVar21._8_4_ = auStack_160[0];
  auVar21._0_8_ = puStack_168;
  uVar11 = (ulong)auStack_160[0];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    auVar21._12_4_ = 0;
    return auVar21;
  }
  puVar9 = puStack_168;
  ___stack_chk_fail();
  uStack_198 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (uVar11 < 0x11) {
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    if (uVar11 != 0) {
      puVar10 = &uStack_1a8;
      do {
        *(undefined1 *)puVar10 = *puVar9;
        uVar11 = uVar11 - 1;
        puVar9 = puVar9 + 1;
        puVar10 = (undefined8 *)((long)puVar10 + 1);
      } while (uVar11 != 0);
    }
    puVar10 = &uStack_1a8;
  }
  else {
    puVar10 = (undefined8 *)&UNK_10f63c976;
    FUN_10a00946c();
    ___stack_chk_fail();
  }
  uVar12 = 0;
  puVar5 = puVar10;
  func_0x00010a107d98();
  bVar1 = *(byte *)((long)puVar10 + 10);
  if (bVar1 == 0) {
    uVar11 = 0;
  }
  else {
    lVar6 = 0xffffffbf;
    if (0x19 < bVar1 - 0x41) {
      lVar6 = -0x16;
    }
    lVar6 = (ulong)bVar1 + lVar6 + 0x1a;
    if (bVar1 - 0x61 < 0x1a) {
      lVar6 = (ulong)bVar1 + 0xffffff9f;
    }
    uVar11 = (lVar6 << 0x3c) + 0x1000000000000000;
  }
  auVar22._0_8_ = uVar11 | (ulong)puVar5;
  auVar22._8_8_ = uVar12;
  return auVar22;
}



/* Entry: 10a107a00; end: 10a107a13;  */

/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

undefined1  [16] FUN_10a107a00(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_108;
  uint auStack_100 [2];
  long lStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  undefined1 **ppuStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 ***pppuStack_60;
  code *pcStack_58;
  undefined1 **ppuStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar2 = (undefined8 *)&UNK_10f63bc0b;
  FUN_109ffde64();
  pcStack_18 = FUN_10a107a14;
  ppuStack_40 = &puStack_20;
  if (param_2 < 0x1555555555555556) {
    lVar3 = param_2 * 0xc;
    puStack_20 = &stack0xfffffffffffffff0;
    __Znwm(lVar3);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar3;
    return auVar9;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000109ffded8();
  uStack_38 = 0x10a107a58;
  pppuStack_60 = &ppuStack_40;
  if (param_2 < 0xccccccccccccccd) {
    puVar4 = puVar2;
    FUN_10a107ab0();
    *puVar2 = puVar4;
    puVar2[1] = puVar4;
    puVar2[2] = (undefined *)((long)puVar4 + param_2 * 0x14);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = puVar4;
    return auVar10;
  }
  FUN_10a107a9c();
  pcStack_58 = FUN_10a107a9c;
  puVar2 = (undefined8 *)&UNK_10f63bc0b;
  FUN_109ffde64();
  pcStack_68 = FUN_10a107ab0;
  ppuStack_90 = &puStack_70;
  if (param_2 < 0xccccccccccccccd) {
    lVar3 = param_2 * 0x14;
    puStack_70 = (undefined1 *)&pppuStack_60;
    __Znwm(lVar3);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar3;
    return auVar11;
  }
  puStack_70 = (undefined1 *)&pppuStack_60;
  func_0x000109ffded8();
  uStack_88 = 0x10a107af0;
  pppuStack_b0 = &ppuStack_90;
  if (param_2 >> 0x3d == 0) {
    puVar4 = puVar2;
    FUN_10a107b3c();
    *puVar2 = puVar4;
    puVar2[1] = puVar4;
    puVar2[2] = puVar4 + param_2;
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = puVar4;
    return auVar12;
  }
  FUN_10a107b28();
  pcStack_a8 = FUN_10a107b28;
  FUN_109ffde64(&UNK_10f63bc0b);
  pcStack_b8 = FUN_10a107b3c;
  ppuStack_e0 = &puStack_c0;
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    puStack_c0 = (undefined1 *)&pppuStack_b0;
    __Znwm(lVar3);
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = lVar3;
    return auVar13;
  }
  puStack_c0 = (undefined1 *)&pppuStack_b0;
  func_0x000109ffded8();
  pcStack_d8 = FUN_10a107b70;
  puVar5 = &UNK_10f63bc0b;
  FUN_109ffde64();
  uStack_e8 = 0x10a107b84;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = (undefined1 *)&ppuStack_e0;
  FUN_10a107c14();
  lVar3 = 0;
  puStack_108 = (undefined1 *)0x0;
  auStack_100[0] = 0;
  do {
    *(char *)((long)auStack_100 + lVar3 + -8) = (char)puVar5;
    lVar3 = lVar3 + 1;
    puVar5 = (undefined *)((ulong)puVar5 >> 8);
  } while (lVar3 != 8);
  lVar3 = 8;
  do {
    *(char *)((long)auStack_100 + lVar3 + -8) = (char)param_2;
    lVar3 = lVar3 + 1;
    param_2 = param_2 >> 8 & 0xffffff;
  } while (lVar3 != 0xc);
  auVar14._8_4_ = auStack_100[0];
  auVar14._0_8_ = puStack_108;
  uVar7 = (ulong)auStack_100[0];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    auVar14._12_4_ = 0;
    return auVar14;
  }
  puVar6 = puStack_108;
  ___stack_chk_fail();
  uStack_138 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (uVar7 < 0x11) {
    uStack_148 = 0;
    uStack_140 = 0;
    if (uVar7 != 0) {
      puVar2 = &uStack_148;
      do {
        *(undefined1 *)puVar2 = *puVar6;
        uVar7 = uVar7 - 1;
        puVar6 = puVar6 + 1;
        puVar2 = (undefined8 *)((long)puVar2 + 1);
      } while (uVar7 != 0);
    }
    puVar2 = &uStack_148;
  }
  else {
    puVar2 = (undefined8 *)&UNK_10f63c976;
    FUN_10a00946c();
    ___stack_chk_fail();
  }
  uVar8 = 0;
  puVar4 = puVar2;
  func_0x00010a107d98();
  bVar1 = *(byte *)((long)puVar2 + 10);
  if (bVar1 == 0) {
    uVar7 = 0;
  }
  else {
    lVar3 = 0xffffffbf;
    if (0x19 < bVar1 - 0x41) {
      lVar3 = -0x16;
    }
    lVar3 = (ulong)bVar1 + lVar3 + 0x1a;
    if (bVar1 - 0x61 < 0x1a) {
      lVar3 = (ulong)bVar1 + 0xffffff9f;
    }
    uVar7 = (lVar3 << 0x3c) + 0x1000000000000000;
  }
  auVar15._0_8_ = uVar7 | (ulong)puVar4;
  auVar15._8_8_ = uVar8;
  return auVar15;
}



/* Entry: 10a107a14; end: 10a107a9b;  */

/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

undefined1  [16] FUN_10a107a14(long *param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_f8;
  uint auStack_f0 [2];
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 ***pppuStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  if (param_2 < 0x1555555555555556) {
    lVar2 = param_2 * 0xc;
    __Znwm(lVar2);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar2;
    return auVar10;
  }
  func_0x000109ffded8();
  uStack_28 = 0x10a107a58;
  ppuStack_50 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if (param_2 < 0xccccccccccccccd) {
    plVar3 = param_1;
    FUN_10a107ab0();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)plVar3 + param_2 * 0x14;
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = plVar3;
    return auVar11;
  }
  FUN_10a107a9c();
  pcStack_48 = FUN_10a107a9c;
  puVar4 = (undefined8 *)&UNK_10f63bc0b;
  FUN_109ffde64();
  pcStack_58 = FUN_10a107ab0;
  ppuStack_80 = &puStack_60;
  if (param_2 < 0xccccccccccccccd) {
    lVar2 = param_2 * 0x14;
    puStack_60 = (undefined1 *)&ppuStack_50;
    __Znwm(lVar2);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = lVar2;
    return auVar12;
  }
  puStack_60 = (undefined1 *)&ppuStack_50;
  func_0x000109ffded8();
  uStack_78 = 0x10a107af0;
  pppuStack_a0 = &ppuStack_80;
  if (param_2 >> 0x3d == 0) {
    puVar5 = puVar4;
    FUN_10a107b3c();
    *puVar4 = puVar5;
    puVar4[1] = puVar5;
    puVar4[2] = puVar5 + param_2;
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  FUN_10a107b28();
  pcStack_98 = FUN_10a107b28;
  FUN_109ffde64(&UNK_10f63bc0b);
  pcStack_a8 = FUN_10a107b3c;
  ppuStack_d0 = &puStack_b0;
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    puStack_b0 = (undefined1 *)&pppuStack_a0;
    __Znwm(lVar2);
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = lVar2;
    return auVar14;
  }
  puStack_b0 = (undefined1 *)&pppuStack_a0;
  func_0x000109ffded8();
  pcStack_c8 = FUN_10a107b70;
  puVar6 = &UNK_10f63bc0b;
  FUN_109ffde64();
  uStack_d8 = 0x10a107b84;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = (undefined1 *)&ppuStack_d0;
  FUN_10a107c14();
  lVar2 = 0;
  puStack_f8 = (undefined1 *)0x0;
  auStack_f0[0] = 0;
  do {
    *(char *)((long)auStack_f0 + lVar2 + -8) = (char)puVar6;
    lVar2 = lVar2 + 1;
    puVar6 = (undefined *)((ulong)puVar6 >> 8);
  } while (lVar2 != 8);
  lVar2 = 8;
  do {
    *(char *)((long)auStack_f0 + lVar2 + -8) = (char)param_2;
    lVar2 = lVar2 + 1;
    param_2 = param_2 >> 8 & 0xffffff;
  } while (lVar2 != 0xc);
  auVar15._8_4_ = auStack_f0[0];
  auVar15._0_8_ = puStack_f8;
  uVar8 = (ulong)auStack_f0[0];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    auVar15._12_4_ = 0;
    return auVar15;
  }
  puVar7 = puStack_f8;
  ___stack_chk_fail();
  uStack_128 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (uVar8 < 0x11) {
    uStack_138 = 0;
    uStack_130 = 0;
    if (uVar8 != 0) {
      puVar4 = &uStack_138;
      do {
        *(undefined1 *)puVar4 = *puVar7;
        uVar8 = uVar8 - 1;
        puVar7 = puVar7 + 1;
        puVar4 = (undefined8 *)((long)puVar4 + 1);
      } while (uVar8 != 0);
    }
    puVar4 = &uStack_138;
  }
  else {
    puVar4 = (undefined8 *)&UNK_10f63c976;
    FUN_10a00946c();
    ___stack_chk_fail();
  }
  uVar9 = 0;
  puVar5 = puVar4;
  func_0x00010a107d98();
  bVar1 = *(byte *)((long)puVar4 + 10);
  if (bVar1 == 0) {
    uVar8 = 0;
  }
  else {
    lVar2 = 0xffffffbf;
    if (0x19 < bVar1 - 0x41) {
      lVar2 = -0x16;
    }
    lVar2 = (ulong)bVar1 + lVar2 + 0x1a;
    if (bVar1 - 0x61 < 0x1a) {
      lVar2 = (ulong)bVar1 + 0xffffff9f;
    }
    uVar8 = (lVar2 << 0x3c) + 0x1000000000000000;
  }
  auVar16._0_8_ = uVar8 | (ulong)puVar5;
  auVar16._8_8_ = uVar9;
  return auVar16;
}



/* Entry: 10a107a9c; end: 10a107aaf;  */

/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

undefined1  [16] FUN_10a107a9c(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_b8;
  uint auStack_b0 [2];
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 ***pppuStack_60;
  code *pcStack_58;
  undefined1 **ppuStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar2 = (undefined8 *)&UNK_10f63bc0b;
  FUN_109ffde64();
  pcStack_18 = FUN_10a107ab0;
  ppuStack_40 = &puStack_20;
  if (param_2 < 0xccccccccccccccd) {
    lVar3 = param_2 * 0x14;
    puStack_20 = &stack0xfffffffffffffff0;
    __Znwm(lVar3);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar3;
    return auVar9;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000109ffded8();
  uStack_38 = 0x10a107af0;
  pppuStack_60 = &ppuStack_40;
  if (param_2 >> 0x3d == 0) {
    puVar4 = puVar2;
    FUN_10a107b3c();
    *puVar2 = puVar4;
    puVar2[1] = puVar4;
    puVar2[2] = puVar4 + param_2;
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = puVar4;
    return auVar10;
  }
  FUN_10a107b28();
  pcStack_58 = FUN_10a107b28;
  FUN_109ffde64(&UNK_10f63bc0b);
  pcStack_68 = FUN_10a107b3c;
  ppuStack_90 = &puStack_70;
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    puStack_70 = (undefined1 *)&pppuStack_60;
    __Znwm(lVar3);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar3;
    return auVar11;
  }
  puStack_70 = (undefined1 *)&pppuStack_60;
  func_0x000109ffded8();
  pcStack_88 = FUN_10a107b70;
  puVar5 = &UNK_10f63bc0b;
  FUN_109ffde64();
  uStack_98 = 0x10a107b84;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = (undefined1 *)&ppuStack_90;
  FUN_10a107c14();
  lVar3 = 0;
  puStack_b8 = (undefined1 *)0x0;
  auStack_b0[0] = 0;
  do {
    *(char *)((long)auStack_b0 + lVar3 + -8) = (char)puVar5;
    lVar3 = lVar3 + 1;
    puVar5 = (undefined *)((ulong)puVar5 >> 8);
  } while (lVar3 != 8);
  lVar3 = 8;
  do {
    *(char *)((long)auStack_b0 + lVar3 + -8) = (char)param_2;
    lVar3 = lVar3 + 1;
    param_2 = param_2 >> 8 & 0xffffff;
  } while (lVar3 != 0xc);
  auVar12._8_4_ = auStack_b0[0];
  auVar12._0_8_ = puStack_b8;
  uVar7 = (ulong)auStack_b0[0];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    auVar12._12_4_ = 0;
    return auVar12;
  }
  puVar6 = puStack_b8;
  ___stack_chk_fail();
  uStack_e8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (uVar7 < 0x11) {
    uStack_f8 = 0;
    uStack_f0 = 0;
    if (uVar7 != 0) {
      puVar2 = &uStack_f8;
      do {
        *(undefined1 *)puVar2 = *puVar6;
        uVar7 = uVar7 - 1;
        puVar6 = puVar6 + 1;
        puVar2 = (undefined8 *)((long)puVar2 + 1);
      } while (uVar7 != 0);
    }
    puVar2 = &uStack_f8;
  }
  else {
    puVar2 = (undefined8 *)&UNK_10f63c976;
    FUN_10a00946c();
    ___stack_chk_fail();
  }
  uVar8 = 0;
  puVar4 = puVar2;
  func_0x00010a107d98();
  bVar1 = *(byte *)((long)puVar2 + 10);
  if (bVar1 == 0) {
    uVar7 = 0;
  }
  else {
    lVar3 = 0xffffffbf;
    if (0x19 < bVar1 - 0x41) {
      lVar3 = -0x16;
    }
    lVar3 = (ulong)bVar1 + lVar3 + 0x1a;
    if (bVar1 - 0x61 < 0x1a) {
      lVar3 = (ulong)bVar1 + 0xffffff9f;
    }
    uVar7 = (lVar3 << 0x3c) + 0x1000000000000000;
  }
  auVar13._0_8_ = uVar7 | (ulong)puVar4;
  auVar13._8_8_ = uVar8;
  return auVar13;
}



/* Entry: 10a107ab0; end: 10a107b27;  */

/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

undefined1  [16] FUN_10a107ab0(long *param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_a8;
  uint auStack_a0 [2];
  long lStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  if (param_2 < 0xccccccccccccccd) {
    lVar2 = param_2 * 0x14;
    __Znwm(lVar2);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar2;
    return auVar10;
  }
  func_0x000109ffded8();
  uStack_28 = 0x10a107af0;
  ppuStack_50 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if (param_2 >> 0x3d == 0) {
    plVar3 = param_1;
    FUN_10a107b3c();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + param_2);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = plVar3;
    return auVar11;
  }
  FUN_10a107b28();
  pcStack_48 = FUN_10a107b28;
  FUN_109ffde64(&UNK_10f63bc0b);
  pcStack_58 = FUN_10a107b3c;
  ppuStack_80 = &puStack_60;
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    puStack_60 = (undefined1 *)&ppuStack_50;
    __Znwm(lVar2);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = lVar2;
    return auVar12;
  }
  puStack_60 = (undefined1 *)&ppuStack_50;
  func_0x000109ffded8();
  pcStack_78 = FUN_10a107b70;
  puVar4 = &UNK_10f63bc0b;
  FUN_109ffde64();
  uStack_88 = 0x10a107b84;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = (undefined1 *)&ppuStack_80;
  FUN_10a107c14();
  lVar2 = 0;
  puStack_a8 = (undefined1 *)0x0;
  auStack_a0[0] = 0;
  do {
    *(char *)((long)auStack_a0 + lVar2 + -8) = (char)puVar4;
    lVar2 = lVar2 + 1;
    puVar4 = (undefined *)((ulong)puVar4 >> 8);
  } while (lVar2 != 8);
  lVar2 = 8;
  do {
    *(char *)((long)auStack_a0 + lVar2 + -8) = (char)param_2;
    lVar2 = lVar2 + 1;
    param_2 = param_2 >> 8 & 0xffffff;
  } while (lVar2 != 0xc);
  auVar13._8_4_ = auStack_a0[0];
  auVar13._0_8_ = puStack_a8;
  uVar8 = (ulong)auStack_a0[0];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    auVar13._12_4_ = 0;
    return auVar13;
  }
  puVar5 = puStack_a8;
  ___stack_chk_fail();
  uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (uVar8 < 0x11) {
    uStack_e8 = 0;
    uStack_e0 = 0;
    if (uVar8 != 0) {
      puVar6 = &uStack_e8;
      do {
        *(undefined1 *)puVar6 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = (undefined8 *)((long)puVar6 + 1);
      } while (uVar8 != 0);
    }
    puVar6 = &uStack_e8;
  }
  else {
    puVar6 = (undefined8 *)&UNK_10f63c976;
    FUN_10a00946c();
    ___stack_chk_fail();
  }
  uVar9 = 0;
  puVar7 = puVar6;
  func_0x00010a107d98();
  bVar1 = *(byte *)((long)puVar6 + 10);
  if (bVar1 == 0) {
    uVar8 = 0;
  }
  else {
    lVar2 = 0xffffffbf;
    if (0x19 < bVar1 - 0x41) {
      lVar2 = -0x16;
    }
    lVar2 = (ulong)bVar1 + lVar2 + 0x1a;
    if (bVar1 - 0x61 < 0x1a) {
      lVar2 = (ulong)bVar1 + 0xffffff9f;
    }
    uVar8 = (lVar2 << 0x3c) + 0x1000000000000000;
  }
  auVar14._0_8_ = uVar8 | (ulong)puVar7;
  auVar14._8_8_ = uVar9;
  return auVar14;
}



/* Entry: 10a107b28; end: 10a107b3b;  */

/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

undefined1  [16] FUN_10a107b28(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_68;
  uint auStack_60 [2];
  long lStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  FUN_109ffde64(&UNK_10f63bc0b);
  pcStack_18 = FUN_10a107b3c;
  ppuStack_40 = &puStack_20;
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    puStack_20 = &stack0xfffffffffffffff0;
    __Znwm(lVar2);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar2;
    return auVar9;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000109ffded8();
  pcStack_38 = FUN_10a107b70;
  puVar3 = &UNK_10f63bc0b;
  FUN_109ffde64();
  uStack_48 = 0x10a107b84;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = (undefined1 *)&ppuStack_40;
  FUN_10a107c14();
  lVar2 = 0;
  puStack_68 = (undefined1 *)0x0;
  auStack_60[0] = 0;
  do {
    *(char *)((long)auStack_60 + lVar2 + -8) = (char)puVar3;
    lVar2 = lVar2 + 1;
    puVar3 = (undefined *)((ulong)puVar3 >> 8);
  } while (lVar2 != 8);
  lVar2 = 8;
  do {
    *(char *)((long)auStack_60 + lVar2 + -8) = (char)param_2;
    lVar2 = lVar2 + 1;
    param_2 = param_2 >> 8 & 0xffffff;
  } while (lVar2 != 0xc);
  auVar10._8_4_ = auStack_60[0];
  auVar10._0_8_ = puStack_68;
  uVar7 = (ulong)auStack_60[0];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar10._12_4_ = 0;
    return auVar10;
  }
  puVar4 = puStack_68;
  ___stack_chk_fail();
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (uVar7 < 0x11) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    if (uVar7 != 0) {
      puVar5 = &uStack_a8;
      do {
        *(undefined1 *)puVar5 = *puVar4;
        uVar7 = uVar7 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = (undefined8 *)((long)puVar5 + 1);
      } while (uVar7 != 0);
    }
    puVar5 = &uStack_a8;
  }
  else {
    puVar5 = (undefined8 *)&UNK_10f63c976;
    FUN_10a00946c();
    ___stack_chk_fail();
  }
  uVar8 = 0;
  puVar6 = puVar5;
  func_0x00010a107d98();
  bVar1 = *(byte *)((long)puVar5 + 10);
  if (bVar1 == 0) {
    uVar7 = 0;
  }
  else {
    lVar2 = 0xffffffbf;
    if (0x19 < bVar1 - 0x41) {
      lVar2 = -0x16;
    }
    lVar2 = (ulong)bVar1 + lVar2 + 0x1a;
    if (bVar1 - 0x61 < 0x1a) {
      lVar2 = (ulong)bVar1 + 0xffffff9f;
    }
    uVar7 = (lVar2 << 0x3c) + 0x1000000000000000;
  }
  auVar11._0_8_ = uVar7 | (ulong)puVar6;
  auVar11._8_8_ = uVar8;
  return auVar11;
}



/* Entry: 10a107b3c; end: 10a107b6f;  */

/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

undefined1  [16] FUN_10a107b3c(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_58;
  uint auStack_50 [2];
  long lStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar2;
    return auVar9;
  }
  func_0x000109ffded8();
  pcStack_28 = FUN_10a107b70;
  puVar3 = &UNK_10f63bc0b;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  uStack_38 = 0x10a107b84;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = (undefined1 *)&puStack_30;
  FUN_10a107c14();
  lVar2 = 0;
  puStack_58 = (undefined1 *)0x0;
  auStack_50[0] = 0;
  do {
    *(char *)((long)auStack_50 + lVar2 + -8) = (char)puVar3;
    lVar2 = lVar2 + 1;
    puVar3 = (undefined *)((ulong)puVar3 >> 8);
  } while (lVar2 != 8);
  lVar2 = 8;
  do {
    *(char *)((long)auStack_50 + lVar2 + -8) = (char)param_2;
    lVar2 = lVar2 + 1;
    param_2 = param_2 >> 8 & 0xffffff;
  } while (lVar2 != 0xc);
  auVar10._8_4_ = auStack_50[0];
  auVar10._0_8_ = puStack_58;
  uVar7 = (ulong)auStack_50[0];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar10._12_4_ = 0;
    return auVar10;
  }
  puVar4 = puStack_58;
  ___stack_chk_fail();
  uStack_88 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (uVar7 < 0x11) {
    uStack_98 = 0;
    uStack_90 = 0;
    if (uVar7 != 0) {
      puVar5 = &uStack_98;
      do {
        *(undefined1 *)puVar5 = *puVar4;
        uVar7 = uVar7 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = (undefined8 *)((long)puVar5 + 1);
      } while (uVar7 != 0);
    }
    puVar5 = &uStack_98;
  }
  else {
    puVar5 = (undefined8 *)&UNK_10f63c976;
    FUN_10a00946c();
    ___stack_chk_fail();
  }
  uVar8 = 0;
  puVar6 = puVar5;
  func_0x00010a107d98();
  bVar1 = *(byte *)((long)puVar5 + 10);
  if (bVar1 == 0) {
    uVar7 = 0;
  }
  else {
    lVar2 = 0xffffffbf;
    if (0x19 < bVar1 - 0x41) {
      lVar2 = -0x16;
    }
    lVar2 = (ulong)bVar1 + lVar2 + 0x1a;
    if (bVar1 - 0x61 < 0x1a) {
      lVar2 = (ulong)bVar1 + 0xffffff9f;
    }
    uVar7 = (lVar2 << 0x3c) + 0x1000000000000000;
  }
  auVar11._0_8_ = uVar7 | (ulong)puVar6;
  auVar11._8_8_ = uVar8;
  return auVar11;
}



/* Entry: 10a107b70; end: 10a107c13;  */

/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

undefined1 * FUN_10a107b70(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_38;
  uint auStack_30 [2];
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  puVar2 = &UNK_10f63bc0b;
  FUN_109ffde64();
  uStack_18 = 0x10a107b84;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_10a107c14();
  lVar7 = 0;
  puStack_38 = (undefined1 *)0x0;
  auStack_30[0] = 0;
  do {
    *(char *)((long)auStack_30 + lVar7 + -8) = (char)puVar2;
    lVar7 = lVar7 + 1;
    puVar2 = (undefined *)((ulong)puVar2 >> 8);
  } while (lVar7 != 8);
  lVar7 = 8;
  do {
    *(char *)((long)auStack_30 + lVar7 + -8) = (char)param_2;
    lVar7 = lVar7 + 1;
    param_2 = param_2 >> 8 & 0xffffff;
  } while (lVar7 != 0xc);
  uVar6 = (ulong)auStack_30[0];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puStack_38;
  }
  puVar3 = puStack_38;
  ___stack_chk_fail();
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (uVar6 < 0x11) {
    uStack_78 = 0;
    uStack_70 = 0;
    if (uVar6 != 0) {
      puVar4 = &uStack_78;
      do {
        *(undefined1 *)puVar4 = *puVar3;
        uVar6 = uVar6 - 1;
        puVar3 = puVar3 + 1;
        puVar4 = (undefined8 *)((long)puVar4 + 1);
      } while (uVar6 != 0);
    }
    puVar4 = &uStack_78;
  }
  else {
    puVar4 = (undefined8 *)&UNK_10f63c976;
    FUN_10a00946c();
    ___stack_chk_fail();
  }
  puVar5 = puVar4;
  func_0x00010a107d98();
  bVar1 = *(byte *)((long)puVar4 + 10);
  if (bVar1 == 0) {
    uVar6 = 0;
  }
  else {
    lVar7 = 0xffffffbf;
    if (0x19 < bVar1 - 0x41) {
      lVar7 = -0x16;
    }
    lVar7 = (ulong)bVar1 + lVar7 + 0x1a;
    if (bVar1 - 0x61 < 0x1a) {
      lVar7 = (ulong)bVar1 + 0xffffff9f;
    }
    uVar6 = (lVar7 << 0x3c) + 0x1000000000000000;
  }
  return (undefined1 *)(uVar6 | (ulong)puVar5);
}



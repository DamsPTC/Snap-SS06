/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10885b280; end: 10885b2a3;  */

void FUN_10885b280(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885b2a4; end: 10885b3cf;  */

void FUN_10885b2a4(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar3;
  long *extraout_x8_01;
  long *extraout_x8_02;
  undefined8 uVar4;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  uint in_stack_00000008;
  
  func_0x00010885cac8();
  func_0x00010885bf88();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010885c554();
    FUN_108854588();
    func_0x00010885bb94();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885baa4();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010885c058();
      func_0x00010885b6f0();
      unaff_x21 = *param_1;
      if (unaff_x21 == 0) {
        func_0x000107c3a5c0();
        unaff_x21 = *param_1;
      }
      func_0x00010885bcd8();
      plVar3 = extraout_x8_00;
      do {
        if (*plVar3 == 0) {
          func_0x00010885b89c();
          plVar3 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar5 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar5 = extraout_w11;
        }
        if ((uVar5 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar2 = unaff_x19 + 0x30;
  FUN_10885318c();
  func_0x00010885bac4();
  do {
    func_0x00010885b75c();
    if ((int)lVar2 != 0) {
      if (*(char *)(unaff_x21 + 0xa4) == '\x01') {
        *(undefined1 *)(unaff_x21 + 0xa4) = 0;
      }
      uVar4 = *unaff_x22;
      *(undefined4 *)(unaff_x21 + 0xa0) = *(undefined4 *)(unaff_x22 + 1);
      *(undefined8 *)(unaff_x21 + 0x98) = uVar4;
      *(undefined1 *)(unaff_x21 + 0xa4) = 1;
      func_0x00010885b744();
      break;
    }
  } while ((in_stack_00000008 >> 1 & 1) == 0);
  func_0x00010885ba18();
  func_0x00010885bc98();
  func_0x00010885bcbc();
  func_0x00010885bbf0();
  func_0x00010885be10();
  func_0x00010885bc18();
  return;
}



/* Entry: 10885b3d0; end: 10885b3ff;  */

void FUN_10885b3d0(void)

{
  undefined1 in_ZR;
  
  func_0x00010885bd6c();
  if ((bool)in_ZR) {
    func_0x00010885bc98();
    func_0x00010885bcbc();
  }
  func_0x00010885bbf0();
  func_0x00010885be10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885b400; end: 10885b53b;  */

void FUN_10885b400(long param_1)

{
  long lVar1;
  long *unaff_x20;
  long *aplStack_50 [2];
  undefined1 auStack_40 [16];
  
  FUN_10885318c(param_1 + 0x30);
  func_0x00010885c0e0();
  func_0x00010885c614(auStack_40);
  func_0x0001052c16b4();
  func_0x0001052c16dc(aplStack_50,auStack_40);
  func_0x00010885c90c();
  func_0x00010885c68c();
  __ZNSt3__15mutex4lockEv(aplStack_50[0] + 8);
  if (*(char *)((long)aplStack_50[0] + 0xc) == '\x01') {
    lVar1 = *unaff_x20;
    *(char *)(aplStack_50[0] + 1) = (char)unaff_x20[1];
    *aplStack_50[0] = lVar1;
  }
  else {
    func_0x00010885ca54();
  }
  func_0x00010885c32c();
  if (unaff_x20 == (long *)0x0) {
    func_0x00010885c5d4(aplStack_50[0]);
  }
  else {
    func_0x00010885c0d4(*(undefined8 *)(*unaff_x20 + 0x10));
    func_0x00010885bea4();
  }
  func_0x00010885c874();
  func_0x00010885bc98();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 10885b53c; end: 10885b55b;  */

void FUN_10885b53c(void)

{
  func_0x00010885bec8();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885b55c; end: 10885b647;  */

void FUN_10885b55c(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar2;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x00010885c204();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010885ca00();
    FUN_108854760();
    func_0x00010885bd40();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(*(undefined8 *)(unaff_x19 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010885c628();
      func_0x00010885b6f0();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x00010885b89c();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x00010885c0f4();
  func_0x00010885bcc4();
  func_0x00010885bd08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885c974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885b648; end: 10885b677;  */

void FUN_10885b648(void)

{
  undefined1 in_ZR;
  
  func_0x00010885c1a0();
  if ((bool)in_ZR) {
    func_0x00010885bcc4();
    func_0x00010885bd08();
  }
  func_0x00010885bbf0();
  func_0x00010885c974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885b678; end: 10885cadb;  */

void FUN_10885b678(ulong param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  lVar1 = unaff_x22 + (param_1 & 0xffffffff) * 0x18;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = unaff_x19;
  *(undefined8 *)(lVar1 + 0x20) = unaff_x21;
  *(char *)(*(long *)(unaff_x20 + 0x90) + 1) = *(char *)(*(long *)(unaff_x20 + 0x90) + 1) + '\x01';
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 10885cadc; end: 10885cb0b;  */

undefined8 * FUN_10885cadc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110a7c540;
  puVar1 = param_1;
  func_0x000107c30128();
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10885cb0c; end: 10885cbd7;  */

void FUN_10885cb0c(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long *plVar6;
  undefined8 in_register_00005008;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar3 = (undefined8 *)0x68;
  __Znwm();
  plVar6 = puVar3 + 1;
  *plVar6 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110a7c5a0;
  puVar3[3] = &PTR_DAT_110ceeae0;
  puVar4 = puVar3;
  func_0x00010885ced8();
  puVar4[0xc] = in_register_00005008;
  puVar4[0xb] = param_1;
  puVar4[10] = in_register_00005008;
  puVar4[9] = param_1;
  puVar3[4] = extraout_x8 + 0x78;
  puVar3[6] = param_3;
  *(undefined1 *)(puVar3 + 7) = 1;
  puStack_50 = puVar3 + 3;
  puStack_48 = puVar3;
  func_0x00010885cef0();
  uVar5 = *(undefined8 *)(param_2 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  func_0x00010885cf00(uVar5);
  func_0x00010885cea8();
  FUN_10885cdcc(&puStack_50);
  return;
}



/* Entry: 10885cbd8; end: 10885cc93;  */

void FUN_10885cbd8(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar3 = (undefined8 *)0x50;
  __Znwm();
  plVar5 = puVar3 + 1;
  *plVar5 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110a7c5f0;
  puVar6 = puVar3 + 3;
  *puVar6 = &PTR_DAT_110cef3d0;
  func_0x00010885ced8();
  puVar3[9] = 0;
  puVar3[4] = extraout_x8 + 0x78;
  puStack_50 = puVar6;
  puStack_48 = puVar3;
  func_0x00010885cef0(puVar3 + 6);
  uVar4 = *(undefined8 *)(param_1 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  func_0x00010885cf00(uVar4);
  func_0x00010885cea8();
  FUN_10885ce20(&puStack_50);
  return;
}



/* Entry: 10885cc94; end: 10885cd97;  */

void FUN_10885cc94(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long *plVar6;
  undefined8 in_register_00005008;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar3 = (undefined8 *)0x90;
  __Znwm();
  plVar6 = puVar3 + 1;
  *plVar6 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110a7c640;
  puVar3[3] = &PTR_DAT_110cef468;
  puVar4 = puVar3;
  func_0x00010885ced8();
  puVar4[10] = in_register_00005008;
  puVar4[9] = param_1;
  puVar4[0xc] = in_register_00005008;
  puVar4[0xb] = param_1;
  puVar4[0xe] = in_register_00005008;
  puVar4[0xd] = param_1;
  puVar4[0x10] = in_register_00005008;
  puVar4[0xf] = param_1;
  puVar4[0x11] = 0;
  puVar4[4] = extraout_x8 + 0x78;
  puStack_60 = puVar3 + 3;
  puStack_58 = puVar4;
  func_0x000107c27b98(puVar4 + 6,param_3);
  func_0x000107c27b98(puVar3 + 10,param_4);
  func_0x00010885cef0(puVar3 + 0xe);
  uVar5 = *(undefined8 *)(param_2 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  func_0x00010885cf00(uVar5);
  func_0x00010885cea8();
  FUN_10885ce74(&puStack_60);
  return;
}



/* Entry: 10885cd98; end: 10885cda3;  */

void FUN_10885cd98(void)

{
  return;
}



/* Entry: 10885cda4; end: 10885cdb7;  */

void FUN_10885cda4(void)

{
  func_0x00010885cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885cdb8; end: 10885cdcb;  */

void FUN_10885cdb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010885ceb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10885cdcc; end: 10885cdf3;  */

long FUN_10885cdcc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10885cdf4; end: 10885cdf7;  */

void FUN_10885cdf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7c5f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10885cdf8; end: 10885ce0b;  */

void FUN_10885cdf8(void)

{
  func_0x00010885ce14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885ce0c; end: 10885ce1f;  */

void FUN_10885ce0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010885ceb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10885ce20; end: 10885ce47;  */

long FUN_10885ce20(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10885ce48; end: 10885ce4b;  */

void FUN_10885ce48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7c640;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10885ce4c; end: 10885ce5f;  */

void FUN_10885ce4c(void)

{
  func_0x00010885ce68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885ce60; end: 10885ce73;  */

void FUN_10885ce60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010885ceb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10885ce74; end: 10885ce9b;  */

long FUN_10885ce74(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10885ce9c; end: 10885cf07;  */

void FUN_10885ce9c(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10885cf08; end: 10885cfa7;  */

/* WARNING: Removing unreachable block (ram,0x00010885d46c) */

void FUN_10885cf08(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  ulong uVar7;
  long ***ppplVar8;
  int unaff_w20;
  undefined ***pppuStack_570;
  undefined ***pppuStack_568;
  undefined ***pppuStack_560;
  undefined ***pppuStack_558;
  undefined ***pppuStack_550;
  undefined ***pppuStack_548;
  undefined ***pppuStack_540;
  undefined ***pppuStack_538;
  undefined ***pppuStack_530;
  long lStack_528;
  undefined ***pppuStack_520;
  undefined ***pppuStack_518;
  undefined ***pppuStack_510;
  undefined ***pppuStack_508;
  undefined ***pppuStack_500;
  undefined1 *puStack_4f8;
  undefined1 **ppuStack_4f0;
  code *pcStack_4e8;
  long ***ppplStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  ulong uStack_4a8;
  long ***ppplStack_498;
  ulong uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined1 uStack_470;
  undefined4 uStack_46f;
  uint uStack_468;
  char cStack_464;
  byte bStack_460;
  long ***ppplStack_458;
  long ***ppplStack_450;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined5 uStack_428;
  undefined5 uStack_420;
  char cStack_418;
  undefined1 auStack_410 [24];
  undefined **ppuStack_3f8;
  undefined8 uStack_3f0;
  undefined1 auStack_3e0 [112];
  long **pplStack_370;
  undefined1 auStack_2c8 [24];
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  undefined1 uStack_288;
  undefined1 uStack_280;
  undefined1 uStack_278;
  undefined1 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined4 uStack_230;
  undefined1 uStack_22c;
  long *plStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 ***pppuStack_1e0;
  ulong uStack_1d8;
  byte bStack_1c9;
  long ***ppplStack_1c8;
  long ***ppplStack_1c0;
  long lStack_1b8;
  undefined1 auStack_1b0 [136];
  undefined8 uStack_128;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [136];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c313f4(auStack_b0,param_1,&UNK_10f4be60b,0x136);
  func_0x000107c28200(auStack_b0);
  func_0x000107c31400(auStack_b0);
  uVar2 = 1;
  while( true ) {
    func_0x00010885dc18(uStack_28,uVar2);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107c34130();
    puVar3 = auStack_b0;
    func_0x000107c31400();
    in_ZR = unaff_w20 == 1;
    if (!(bool)in_ZR) break;
    func_0x00010885dbe8();
    ___cxa_end_catch();
    uVar2 = 0;
  }
  func_0x00010885dbb0();
  pcStack_b8 = FUN_10885cfa8;
  uStack_128 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x000107c29f1c(auStack_1b0,puVar3,&UNK_10f4be830,0xc);
  ppuStack_3f8 = (undefined **)&UNK_10f4be742;
  uStack_3f0 = 0xed;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  plStack_228 = (long *)0x32aaaba7;
  uStack_1f0 = 0;
  pppuVar4 = &ppuStack_3f8;
  puStack_1e8 = puVar3;
  func_0x000107c27958(&pppuStack_1e0);
  ppplStack_498 = (long ***)&plStack_228;
  lStack_1b8 = 0;
  uStack_490 = CONCAT71(uStack_490._1_7_,1);
  ppplStack_1c8 = (long ***)&ppplStack_1c8;
  ppplStack_1c0 = (long ***)&ppplStack_1c8;
  __ZNSt3__15mutex4lockEv(&plStack_228);
  pppplVar6 = &ppplStack_1c0;
  do {
    pppplVar5 = (long ****)*pppplVar6;
    if (pppplVar5 == &ppplStack_1c8) {
      func_0x000107c280c4(&ppplStack_498);
      uVar1 = bStack_1c9 == 0;
      if (-1 < (char)bStack_1c9) {
        uStack_1d8 = (ulong)bStack_1c9;
        pppuStack_1e0 = &pppuStack_1e0;
      }
      func_0x000107c313f4(&ppuStack_3f8,puStack_1e8,pppuStack_1e0,uStack_1d8);
      ppuStack_3f8 = &PTR_FUN_110a7c6d0;
      pplStack_370 = (long **)0x0;
      func_0x000107c28204(&ppplStack_498);
      pppplVar6 = (long ****)0xa0;
      __Znwm();
      pppuVar4 = &ppuStack_3f8;
      func_0x000107c313fc(pppplVar6 + 2);
      pppplVar6[1] = (long ***)&ppplStack_1c8;
      pppplVar6[2] = (long ***)&PTR_FUN_110a7c6d0;
      pppplVar6[0x13] = (long ***)pplStack_370;
      *pppplVar6 = ppplStack_1c8;
      ppplStack_1c8[1] = (long **)pppplVar6;
      lStack_1b8 = lStack_1b8 + 1;
      ppplStack_1c8 = (long ***)pppplVar6;
      func_0x000107c31400(&ppuStack_3f8);
      goto LAB_10885d144;
    }
    pppplVar6 = pppplVar5 + 1;
  } while (pppplVar5[0x13] != (long ***)0x0);
  pppplVar6 = (long ****)*pppplVar6;
  uVar1 = &ppplStack_1c8 == pppplVar6;
  if (!(bool)uVar1) {
    ppplVar8 = *pppplVar5;
    ppplVar8[1] = (long **)pppplVar6;
    *pppplVar6 = ppplVar8;
    ppplStack_1c8[1] = (long **)pppplVar5;
    *pppplVar5 = ppplStack_1c8;
    pppplVar5[1] = (long ***)&ppplStack_1c8;
    ppplStack_1c8 = (long ***)pppplVar5;
  }
LAB_10885d144:
  pppplVar6 = (long ****)(ppplStack_1c8 + 2);
  ppplStack_1c8[0x13] = &plStack_228;
  func_0x000107c2798c(&ppplStack_498);
  uStack_448 = uStack_448 & 0xffffffffffffff00;
  cStack_418 = '\0';
  ppplStack_458 = (long ***)pppplVar6;
  ppplStack_450 = (long ***)pppplVar6;
  FUN_10885d670(&ppplStack_450);
  uStack_490 = uStack_490 & 0xffffffffffffff00;
  bStack_460 = 0;
  if (cStack_418 != '\0') {
    uStack_488 = uStack_440;
    uStack_490 = uStack_448;
    uStack_480 = uStack_438;
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_448 = 0;
    uStack_470 = (undefined1)uStack_428;
    uStack_46f = (undefined4)((uint5)uStack_428 >> 8);
    uStack_478 = uStack_430;
    uStack_468 = (uint)uStack_420;
    cStack_464 = (char)((uint5)uStack_420 >> 0x20);
    bStack_460 = 1;
    FUN_10885d768(&uStack_448);
  }
  ppplStack_498 = ppplStack_450;
  ppplStack_450 = (long ***)0x0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_4d8 = 0;
  ppplStack_4e0 = (long ***)0x0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  while ((((bStack_460 & 1) != 0 || ((uStack_4a8 & 1) != 0)) &&
         (uVar1 = 1, ppplStack_498 != ppplStack_4e0))) {
    if ((bStack_460 & 1) == 0) {
      ppplVar8 = (long ***)ppplStack_498[1];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_410,ppplStack_498 + 0xb);
      func_0x000107c27f54(&ppuStack_3f8,&UNK_10f2e0451,auStack_410);
      func_0x00010bcc7444(ppplVar8,0x65,&ppuStack_3f8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_3f8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_410);
    }
    uVar7 = (ulong)uStack_468 | 0x100000000;
    uVar1 = cStack_464 == '\0';
    if ((bool)uVar1) {
      uVar7 = 0x100000003;
    }
    func_0x000107c27994(&ppuStack_3f8,&uStack_490);
    func_0x000107c28dcc(auStack_3e0);
    func_0x000107c278b8(auStack_2c8,&DAT_10f4bdfe8);
    uStack_2b0 = 0;
    uStack_2a8 = 1;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_270 = 1;
    uStack_26c = 10;
    uStack_260 = 0;
    uStack_268 = 0;
    uStack_250 = 0;
    uStack_258 = 0;
    uStack_248 = 0;
    uStack_240 = uStack_478;
    uStack_238 = uStack_470;
    uStack_230 = (undefined4)uVar7;
    uStack_22c = (undefined1)(uVar7 >> 0x20);
    pppuVar4 = &ppuStack_3f8;
    FUN_10885d484(auStack_1b0);
    func_0x000107c287e4(&ppuStack_3f8);
    FUN_10885d670(&ppplStack_498);
  }
  func_0x00010885dbf8();
  FUN_10885d5f4(&uStack_490);
  FUN_10885d504(&ppplStack_458);
  FUN_10885d570(&plStack_228);
  func_0x000107c31400(auStack_1b0);
  func_0x00010885dc18(uStack_128,1);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107c34130();
    func_0x000107c2798c(&ppplStack_498);
    FUN_10885d570(&plStack_228);
    puVar3 = auStack_1b0;
    func_0x000107c31400();
    func_0x00010885dbb0();
    pcStack_4e8 = FUN_10885d484;
    pppuStack_568 = pppuVar4 + 3;
    pppuStack_560 = pppuVar4 + 0x26;
    pppuStack_558 = pppuVar4 + 0x29;
    pppuStack_550 = pppuVar4 + 0x2b;
    pppuStack_548 = pppuVar4 + 0x2c;
    pppuStack_540 = pppuVar4 + 0x2d;
    pppuStack_538 = pppuVar4 + 0x2f;
    pppuStack_530 = pppuVar4 + 0x31;
    lStack_528 = (long)pppuVar4 + 0x18c;
    pppuStack_520 = pppuVar4 + 0x32;
    pppuStack_518 = pppuVar4 + 0x35;
    pppuStack_510 = pppuVar4 + 0x36;
    pppuStack_508 = pppuVar4 + 0x37;
    pppuStack_500 = pppuVar4 + 0x39;
    pppuStack_570 = pppuVar4;
    puStack_4f8 = puVar3;
    ppuStack_4f0 = &puStack_c0;
    func_0x00010885d78c(&puStack_4f8,&pppuStack_570);
    return;
  }
  return;
}



/* Entry: 10885cfa8; end: 10885d483;  */

/* WARNING: Removing unreachable block (ram,0x00010885d46c) */

void FUN_10885cfa8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  ulong uVar6;
  long ***ppplVar7;
  undefined ***pppuStack_4c0;
  undefined ***pppuStack_4b8;
  undefined ***pppuStack_4b0;
  undefined ***pppuStack_4a8;
  undefined ***pppuStack_4a0;
  undefined ***pppuStack_498;
  undefined ***pppuStack_490;
  undefined ***pppuStack_488;
  undefined ***pppuStack_480;
  long lStack_478;
  undefined ***pppuStack_470;
  undefined ***pppuStack_468;
  undefined ***pppuStack_460;
  undefined ***pppuStack_458;
  undefined ***pppuStack_450;
  undefined1 *puStack_448;
  undefined1 *puStack_440;
  code *pcStack_438;
  long ***ppplStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  ulong uStack_3f8;
  long ***ppplStack_3e8;
  ulong uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 uStack_3c0;
  undefined4 uStack_3bf;
  uint uStack_3b8;
  char cStack_3b4;
  byte bStack_3b0;
  long ***ppplStack_3a8;
  long ***ppplStack_3a0;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined5 uStack_378;
  undefined5 uStack_370;
  char cStack_368;
  undefined1 auStack_360 [24];
  undefined **ppuStack_348;
  undefined8 uStack_340;
  undefined1 auStack_330 [112];
  long **pplStack_2c0;
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined1 uStack_1d8;
  undefined1 uStack_1d0;
  undefined1 uStack_1c8;
  undefined1 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  long *plStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  ulong uStack_128;
  byte bStack_119;
  long ***ppplStack_118;
  long ***ppplStack_110;
  long lStack_108;
  undefined1 auStack_100 [136];
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c29f1c(auStack_100,param_1,&UNK_10f4be830,0xc);
  ppuStack_348 = (undefined **)&UNK_10f4be742;
  uStack_340 = 0xed;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  plStack_178 = (long *)0x32aaaba7;
  uStack_140 = 0;
  pppuVar3 = &ppuStack_348;
  uStack_138 = param_1;
  func_0x000107c27958(&pppuStack_130);
  ppplStack_3e8 = (long ***)&plStack_178;
  lStack_108 = 0;
  uStack_3e0 = CONCAT71(uStack_3e0._1_7_,1);
  ppplStack_118 = (long ***)&ppplStack_118;
  ppplStack_110 = (long ***)&ppplStack_118;
  __ZNSt3__15mutex4lockEv(&plStack_178);
  pppplVar5 = &ppplStack_110;
  do {
    pppplVar4 = (long ****)*pppplVar5;
    if (pppplVar4 == &ppplStack_118) {
      func_0x000107c280c4(&ppplStack_3e8);
      uVar1 = bStack_119 == 0;
      if (-1 < (char)bStack_119) {
        uStack_128 = (ulong)bStack_119;
        pppuStack_130 = &pppuStack_130;
      }
      func_0x000107c313f4(&ppuStack_348,uStack_138,pppuStack_130,uStack_128);
      ppuStack_348 = &PTR_FUN_110a7c6d0;
      pplStack_2c0 = (long **)0x0;
      func_0x000107c28204(&ppplStack_3e8);
      pppplVar5 = (long ****)0xa0;
      __Znwm();
      pppuVar3 = &ppuStack_348;
      func_0x000107c313fc(pppplVar5 + 2);
      pppplVar5[1] = (long ***)&ppplStack_118;
      pppplVar5[2] = (long ***)&PTR_FUN_110a7c6d0;
      pppplVar5[0x13] = (long ***)pplStack_2c0;
      *pppplVar5 = ppplStack_118;
      ppplStack_118[1] = (long **)pppplVar5;
      lStack_108 = lStack_108 + 1;
      ppplStack_118 = (long ***)pppplVar5;
      func_0x000107c31400(&ppuStack_348);
      goto LAB_10885d144;
    }
    pppplVar5 = pppplVar4 + 1;
  } while (pppplVar4[0x13] != (long ***)0x0);
  pppplVar5 = (long ****)*pppplVar5;
  uVar1 = &ppplStack_118 == pppplVar5;
  if (!(bool)uVar1) {
    ppplVar7 = *pppplVar4;
    ppplVar7[1] = (long **)pppplVar5;
    *pppplVar5 = ppplVar7;
    ppplStack_118[1] = (long **)pppplVar4;
    *pppplVar4 = ppplStack_118;
    pppplVar4[1] = (long ***)&ppplStack_118;
    ppplStack_118 = (long ***)pppplVar4;
  }
LAB_10885d144:
  pppplVar5 = (long ****)(ppplStack_118 + 2);
  ppplStack_118[0x13] = &plStack_178;
  func_0x000107c2798c(&ppplStack_3e8);
  uStack_398 = uStack_398 & 0xffffffffffffff00;
  cStack_368 = '\0';
  ppplStack_3a8 = (long ***)pppplVar5;
  ppplStack_3a0 = (long ***)pppplVar5;
  FUN_10885d670(&ppplStack_3a0);
  uStack_3e0 = uStack_3e0 & 0xffffffffffffff00;
  bStack_3b0 = 0;
  if (cStack_368 != '\0') {
    uStack_3d8 = uStack_390;
    uStack_3e0 = uStack_398;
    uStack_3d0 = uStack_388;
    uStack_390 = 0;
    uStack_388 = 0;
    uStack_398 = 0;
    uStack_3c0 = (undefined1)uStack_378;
    uStack_3bf = (undefined4)((uint5)uStack_378 >> 8);
    uStack_3c8 = uStack_380;
    uStack_3b8 = (uint)uStack_370;
    cStack_3b4 = (char)((uint5)uStack_370 >> 0x20);
    bStack_3b0 = 1;
    FUN_10885d768(&uStack_398);
  }
  ppplStack_3e8 = ppplStack_3a0;
  ppplStack_3a0 = (long ***)0x0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_428 = 0;
  ppplStack_430 = (long ***)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  while ((((bStack_3b0 & 1) != 0 || ((uStack_3f8 & 1) != 0)) &&
         (uVar1 = 1, ppplStack_3e8 != ppplStack_430))) {
    if ((bStack_3b0 & 1) == 0) {
      ppplVar7 = (long ***)ppplStack_3e8[1];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_360,ppplStack_3e8 + 0xb);
      func_0x000107c27f54(&ppuStack_348,&UNK_10f2e0451,auStack_360);
      func_0x00010bcc7444(ppplVar7,0x65,&ppuStack_348);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_348);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_360);
    }
    uVar6 = (ulong)uStack_3b8 | 0x100000000;
    uVar1 = cStack_3b4 == '\0';
    if ((bool)uVar1) {
      uVar6 = 0x100000003;
    }
    func_0x000107c27994(&ppuStack_348,&uStack_3e0);
    func_0x000107c28dcc(auStack_330);
    func_0x000107c278b8(auStack_218,&DAT_10f4bdfe8);
    uStack_200 = 0;
    uStack_1f8 = 1;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1c0 = 1;
    uStack_1bc = 10;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_198 = 0;
    uStack_190 = uStack_3c8;
    uStack_188 = uStack_3c0;
    uStack_180 = (undefined4)uVar6;
    uStack_17c = (undefined1)(uVar6 >> 0x20);
    pppuVar3 = &ppuStack_348;
    FUN_10885d484(auStack_100);
    func_0x000107c287e4(&ppuStack_348);
    FUN_10885d670(&ppplStack_3e8);
  }
  func_0x00010885dbf8();
  FUN_10885d5f4(&uStack_3e0);
  FUN_10885d504(&ppplStack_3a8);
  FUN_10885d570(&plStack_178);
  func_0x000107c31400(auStack_100);
  func_0x00010885dc18(uStack_78,1);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107c34130();
    func_0x000107c2798c(&ppplStack_3e8);
    FUN_10885d570(&plStack_178);
    puVar2 = auStack_100;
    func_0x000107c31400();
    func_0x00010885dbb0();
    pcStack_438 = FUN_10885d484;
    pppuStack_4b8 = pppuVar3 + 3;
    pppuStack_4b0 = pppuVar3 + 0x26;
    pppuStack_4a8 = pppuVar3 + 0x29;
    pppuStack_4a0 = pppuVar3 + 0x2b;
    pppuStack_498 = pppuVar3 + 0x2c;
    pppuStack_490 = pppuVar3 + 0x2d;
    pppuStack_488 = pppuVar3 + 0x2f;
    pppuStack_480 = pppuVar3 + 0x31;
    lStack_478 = (long)pppuVar3 + 0x18c;
    pppuStack_470 = pppuVar3 + 0x32;
    pppuStack_468 = pppuVar3 + 0x35;
    pppuStack_460 = pppuVar3 + 0x36;
    pppuStack_458 = pppuVar3 + 0x37;
    pppuStack_450 = pppuVar3 + 0x39;
    pppuStack_4c0 = pppuVar3;
    puStack_448 = puVar2;
    puStack_440 = &stack0xfffffffffffffff0;
    func_0x00010885d78c(&puStack_448,&pppuStack_4c0);
    return;
  }
  return;
}



/* Entry: 10885d484; end: 10885d503;  */

void FUN_10885d484(undefined8 param_1,long param_2)

{
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_88 = param_2 + 0x18;
  lStack_80 = param_2 + 0x130;
  lStack_78 = param_2 + 0x148;
  lStack_70 = param_2 + 0x158;
  lStack_68 = param_2 + 0x160;
  lStack_60 = param_2 + 0x168;
  lStack_58 = param_2 + 0x178;
  lStack_50 = param_2 + 0x188;
  lStack_48 = param_2 + 0x18c;
  lStack_40 = param_2 + 400;
  lStack_38 = param_2 + 0x1a8;
  lStack_30 = param_2 + 0x1b0;
  lStack_28 = param_2 + 0x1b8;
  lStack_20 = param_2 + 0x1c8;
  lStack_90 = param_2;
  uStack_18 = param_1;
  func_0x00010885d78c(&uStack_18,&lStack_90);
  return;
}



/* Entry: 10885d504; end: 10885d56f;  */

undefined8 * FUN_10885d504(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_10885d768(param_1 + 2);
  }
  FUN_10885d5f4((ulong)&uStack_60 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_10885d5f4(param_1 + 2);
  return param_1;
}



/* Entry: 10885d570; end: 10885d5ef;  */

void FUN_10885d570(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar3 = *(long **)(param_1 + 0x68);
    plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    *(undefined8 *)(param_1 + 0x70) = 0;
    while (plVar3 != (long *)(param_1 + 0x60)) {
      plVar1 = (long *)plVar3[1];
      (**(code **)plVar3[2])();
      __ZdlPv(plVar3);
      plVar3 = plVar1;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10885d5f0; end: 10885d5f3;  */

undefined8 * FUN_10885d5f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10885d5f4; end: 10885d627;  */

void FUN_10885d5f4(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10885d628; end: 10885d62b;  */

undefined8 * FUN_10885d628(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10885d62c; end: 10885d63f;  */

void FUN_10885d62c(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885d640; end: 10885d66f;  */

void FUN_10885d640(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  __ZNSt3__15mutex4lockEv(uVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar1);
  return;
}



/* Entry: 10885d670; end: 10885d767;  */

void FUN_10885d670(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 uStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (func_0x000107c3141c(), (int)lVar1 != 0)) {
    lVar2 = *param_1;
    func_0x000107c313f8();
    func_0x000107c2879c(&lStack_60);
    uStack_40 = 1;
    lVar1 = lVar2;
    func_0x000107c28228();
    lStack_48 = lVar1;
    func_0x000107c29160(lVar2,2);
    uStack_38 = (undefined4)lVar2;
    uStack_34 = (undefined1)((ulong)lVar2 >> 0x20);
    if ((char)param_1[7] == '\x01') {
      func_0x000107c3194c(param_1 + 1,&lStack_60);
      func_0x00010885dc2c();
    }
    else {
      param_1[2] = lStack_58;
      param_1[1] = lStack_60;
      param_1[3] = lStack_50;
      lStack_58 = 0;
      lStack_50 = 0;
      lStack_60 = 0;
      func_0x00010885dc2c();
      *(undefined1 *)(param_1 + 7) = 1;
    }
    func_0x000107c27914(&lStack_60);
    return;
  }
  plVar3 = param_1 + 1;
  if ((char)param_1[7] == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(plVar3 + 6) = 0;
  }
  return;
}



/* Entry: 10885d768; end: 10885d7d7;  */

void FUN_10885d768(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10885d7d8; end: 10885d7df;  */

void FUN_10885d7d8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long lVar1;
  long lStack_58;
  
  lVar1 = *param_1;
  lStack_58 = lVar1;
  __ZNSt3__15mutex4lockEv(lVar1 + 0x18);
  FUN_10885d8c0(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11,param_12,param_13,param_14,param_15,param_16);
  func_0x000107c3141c(lVar1);
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x18);
  func_0x000107c27e6c(&lStack_58);
  return;
}



/* Entry: 10885d7e0; end: 10885d8bf;  */

void FUN_10885d7e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long lStack_58;
  
  lStack_58 = param_1;
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  FUN_10885d8c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11,param_12,param_13,param_14,param_15,param_16);
  func_0x000107c3141c(param_1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  func_0x000107c27e6c(&lStack_58);
  return;
}



/* Entry: 10885d8c0; end: 10885da33;  */

void FUN_10885d8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,long param_16)

{
  int iVar1;
  
  func_0x000107c287ac(param_1,1,param_2);
  FUN_10885da34(param_1,2,param_3);
  func_0x000107c2820c(param_1,3,param_4);
  func_0x000100867a20(param_1,4,param_5);
  func_0x000107c28208(param_1,5,param_6);
  func_0x000107c28208(param_1,6,param_7);
  func_0x000100867a20(param_1,7,param_8);
  func_0x000100867a20(param_1,8,param_9);
  func_0x0001056453e4(param_1,9,param_10);
  FUN_10885da68(param_1,10,param_11);
  FUN_10885da70(param_1,0xb,param_12);
  func_0x000107c28208(param_1,0xc,param_13);
  func_0x000107c28208(param_1,0xd,param_14);
  func_0x000100867a20(param_1,0xe,param_15);
  if (*(char *)(param_16 + 4) == '\x01') {
    func_0x0001005edd44();
    iVar1 = (int)param_1;
    func_0x000107c6132c();
    if (iVar1 != 0) {
      func_0x000107c3a4f8();
      func_0x000107c3a50c();
      func_0x000107c3a520();
      func_0x0001003a91d4(&UNK_10f82fa21);
      func_0x000107c3a500();
      func_0x000107c3a4f0();
      func_0x000107c3a4fc();
      func_0x000107c3a504();
    }
    return;
  }
  func_0x00010bccb8cc(param_1,0xf,&stack0xffffffffffffffef);
  return;
}



/* Entry: 10885da34; end: 10885da67;  */

void FUN_10885da34(void)

{
  func_0x00010885dc04();
  FUN_10885daa4();
  func_0x00010885dbc0();
  func_0x00010885dbb8();
  return;
}



/* Entry: 10885da68; end: 10885da6f;  */

void FUN_10885da68(int param_1)

{
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 10885da70; end: 10885daa3;  */

void FUN_10885da70(void)

{
  func_0x00010885dc04();
  FUN_10885daf0();
  func_0x00010885dbc0();
  func_0x00010885dbb8();
  return;
}



/* Entry: 10885daa4; end: 10885daef;  */

void FUN_10885daa4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1088f4d20();
  func_0x000107c27fdc(param_1,uVar1);
  func_0x00010b4d1758(param_2,*param_1,*(int *)(param_1 + 1) - (int)*param_1);
  return;
}



/* Entry: 10885daf0; end: 10885db77;  */

void FUN_10885daf0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010089a97c(param_1,(param_2[1] - *param_2) / 0x18 << 4);
  plVar1 = (long *)param_2[1];
  for (param_2 = (long *)*param_2; param_2 != plVar1; param_2 = param_2 + 3) {
    if (param_2[1] - *param_2 == 0x10) {
      func_0x0001078a80e0(param_1,param_1[1]);
    }
  }
  return;
}



/* Entry: 10885db78; end: 10885dba7;  */

void FUN_10885db78(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  if (*(char *)(param_3 + 4) == '\x01') {
    func_0x0001005edd44();
    iVar1 = (int)param_1;
    func_0x000107c6132c();
    if (iVar1 != 0) {
      func_0x000107c3a4f8();
      func_0x000107c3a50c();
      func_0x000107c3a520();
      func_0x0001003a91d4(&UNK_10f82fa21);
      func_0x000107c3a500();
      func_0x000107c3a4f0();
      func_0x000107c3a4fc();
      func_0x000107c3a504();
    }
    return;
  }
  func_0x00010bccb8cc(param_1,param_2,&stack0xffffffffffffffef);
  return;
}



/* Entry: 10885dba8; end: 10885dc3f;  */

void FUN_10885dba8(int param_1)

{
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 10885dc40; end: 10885e373;  */

undefined1 * FUN_10885dc40(undefined8 param_1)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  long ***ppplVar3;
  byte bVar4;
  undefined1 in_ZR;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  long ****pppplVar7;
  long *plVar8;
  long ****pppplVar9;
  long lVar10;
  long ***ppplVar11;
  long **applStack_878 [35];
  char cStack_760;
  undefined1 auStack_758 [224];
  undefined8 uStack_678;
  long lStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  ulong uStack_620;
  long alStack_610 [4];
  byte bStack_5f0;
  undefined1 auStack_5e8 [48];
  undefined1 auStack_5b8 [24];
  undefined1 auStack_5a0 [64];
  long **pplStack_560;
  undefined1 auStack_558 [288];
  undefined1 auStack_438 [24];
  undefined *puStack_420;
  undefined **ppuStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 ***pppuStack_3a8;
  ulong uStack_3a0;
  byte bStack_391;
  long ***ppplStack_390;
  long ***ppplStack_388;
  long lStack_380;
  long ***ppplStack_378;
  long ***ppplStack_370;
  undefined1 auStack_368 [8];
  undefined1 auStack_360 [272];
  char cStack_250;
  undefined1 auStack_248 [120];
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long ***ppplStack_1a0;
  ulong auStack_198 [16];
  long **pplStack_118;
  byte bStack_80;
  undefined8 uStack_78;
  
  func_0x000107c34140();
  uStack_78 = extraout_x8;
  func_0x000107c278b8(auStack_5b8,"");
  func_0x000107c31420(auStack_5a0,param_1,auStack_5b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5b8);
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  puStack_1d0 = &UNK_105277f7c;
  ppuStack_1c8 = &PTR_DAT_110873830;
  func_0x000107c31358(param_1,&UNK_10f4be83d,0x20,1,&puStack_1d0);
  func_0x00010885e5d0(ppuStack_1c8);
  func_0x000107c29f28(auStack_248,param_1,&UNK_10f4be85e,0x58);
  func_0x000107c29f20(auStack_5e8,auStack_248);
  func_0x000107c29010(alStack_610,auStack_5e8);
  uStack_620 = 0;
  uStack_638 = 0;
  lStack_640 = 0;
  uStack_628 = 0;
  uStack_630 = 0;
  do {
    if ((((bStack_5f0 & 1) == 0) && ((uStack_620 & 1) == 0)) ||
       (in_ZR = 1, alStack_610[0] == lStack_640)) {
      func_0x00010885e60c();
      func_0x00010885e618();
      func_0x000107c2900c(auStack_5e8);
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      puStack_420 = &UNK_105277f7c;
      ppuStack_418 = &PTR_DAT_110873830;
      func_0x000107c31358(param_1,&UNK_10f4beab8,0x1f,1,&puStack_420);
      func_0x00010885e5d0(ppuStack_418);
      func_0x000107c31428(auStack_5a0);
      FUN_10885e3ec(auStack_248);
      func_0x000107c31424(auStack_5a0);
      while( true ) {
        func_0x000107c34138(uStack_78);
        if ((bool)in_ZR) {
          return (undefined1 *)0x1;
        }
        ___stack_chk_fail();
        func_0x00010885e5c4();
        FUN_10885e3ec(auStack_248);
        puVar6 = auStack_5a0;
        func_0x000107c31424();
        in_ZR = (int)param_1 == 1;
        if (!(bool)in_ZR) break;
        func_0x00010885e5f0();
        ___cxa_end_catch();
      }
      func_0x00010885e5f8();
      if (*(long *)(puVar6 + 0x70) != 0) {
        plVar5 = *(long **)(puVar6 + 0x68);
        plVar8 = *(long **)(*(long *)(puVar6 + 0x60) + 8);
        lVar10 = *plVar5;
        *(long **)(lVar10 + 8) = plVar8;
        *plVar8 = lVar10;
        *(undefined8 *)(puVar6 + 0x70) = 0;
        while (plVar5 != (long *)(puVar6 + 0x60)) {
          plVar8 = (long *)plVar5[1];
          func_0x00010885e600(plVar5);
          __ZdlPv(plVar5);
          plVar5 = plVar8;
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(puVar6);
      return puVar6;
    }
    plVar5 = alStack_610;
    FUN_1086afc30(plVar5);
    func_0x00010885e624();
    func_0x000107c313f4();
    func_0x00010885e5e4();
    func_0x00010885e5dc();
    func_0x00010885e624();
    func_0x000107c313f4();
    func_0x00010885e5e4();
    func_0x00010885e5dc();
    func_0x00010885e624();
    func_0x000107c313f4();
    func_0x00010885e5e4();
    func_0x00010885e5dc();
    ppplStack_1a0 = (long ***)&UNK_10f4be9b5;
    auStack_198[0] = 0x4f;
    uStack_3e0 = 0;
    uStack_3e8 = 0;
    uStack_3d0 = 0;
    uStack_3d8 = 0;
    uStack_3c0 = 0;
    uStack_3c8 = 0;
    uStack_3b8 = 0;
    plStack_3f0 = (long *)0x32aaaba7;
    uStack_3b0 = param_1;
    func_0x000107c27958(&pppuStack_3a8,&ppplStack_1a0);
    ppplStack_390 = (long ***)&ppplStack_390;
    lStack_380 = 0;
    auStack_558[0] = 1;
    pplStack_560 = &plStack_3f0;
    ppplStack_388 = (long ***)&ppplStack_390;
    __ZNSt3__15mutex4lockEv(&plStack_3f0);
    pppplVar9 = &ppplStack_388;
    do {
      pppplVar7 = (long ****)*pppplVar9;
      if (pppplVar7 == &ppplStack_390) {
        func_0x000107c280c4(&pplStack_560);
        uVar1 = uStack_3a0;
        ppppuVar2 = (undefined8 ****)pppuStack_3a8;
        if (-1 < (char)bStack_391) {
          uVar1 = (ulong)bStack_391;
          ppppuVar2 = &pppuStack_3a8;
        }
        func_0x000107c313f4(&ppplStack_1a0,uStack_3b0,ppppuVar2,uVar1);
        ppplStack_1a0 = (long ***)&PTR_DAT_110a7c838;
        pplStack_118 = (long **)0x0;
        func_0x000107c28204(&pplStack_560);
        pppplVar9 = (long ****)0xa0;
        __Znwm();
        func_0x000107c313fc(pppplVar9 + 2,&ppplStack_1a0);
        pppplVar9[1] = (long ***)&ppplStack_390;
        pppplVar9[2] = (long ***)&PTR_DAT_110a7c838;
        pppplVar9[0x13] = (long ***)pplStack_118;
        *pppplVar9 = ppplStack_390;
        ppplStack_390[1] = (long **)pppplVar9;
        lStack_380 = lStack_380 + 1;
        ppplStack_390 = (long ***)pppplVar9;
        func_0x000107c31400(&ppplStack_1a0);
        goto LAB_10885df08;
      }
      pppplVar9 = pppplVar7 + 1;
    } while (pppplVar7[0x13] != (long ***)0x0);
    pppplVar9 = (long ****)*pppplVar9;
    if (&ppplStack_390 != pppplVar9) {
      ppplVar11 = *pppplVar7;
      ppplVar11[1] = (long **)pppplVar9;
      *pppplVar9 = ppplVar11;
      ppplStack_390[1] = (long **)pppplVar7;
      *pppplVar7 = ppplStack_390;
      pppplVar7[1] = (long ***)&ppplStack_390;
      ppplStack_390 = (long ***)pppplVar7;
    }
LAB_10885df08:
    pppplVar9 = (long ****)(ppplStack_390 + 2);
    ppplStack_390[0x13] = &plStack_3f0;
    func_0x000107c2798c(&pplStack_560);
    func_0x000107c287a8(pppplVar9,plVar5);
    auStack_368[0] = 0;
    cStack_250 = '\0';
    pppplVar7 = pppplVar9;
    ppplStack_378 = (long ***)pppplVar9;
    ppplStack_370 = (long ***)pppplVar9;
    func_0x000107c3141c();
    if ((int)pppplVar7 == 0) {
      func_0x00010885e510(auStack_368);
    }
    else {
      func_0x000107c313f8(pppplVar9);
      func_0x000107c2915c(&ppplStack_1a0);
      func_0x00010885e534(auStack_368,&ppplStack_1a0);
      func_0x000107c2a3a8(&ppplStack_1a0);
    }
    ppplStack_1a0 = (long ***)0x0;
    auStack_198[0] = auStack_198[0] & 0xffffffffffffff00;
    bStack_80 = 0;
    if (cStack_250 == '\0') {
      ppplVar11 = (long ***)0x0;
    }
    else {
      func_0x00010885e534(auStack_198,auStack_368);
      func_0x00010885e510(auStack_368);
      ppplVar11 = ppplStack_1a0;
    }
    bVar4 = bStack_80;
    ppplVar3 = ppplStack_370;
    ppplStack_1a0 = ppplStack_370;
    ppplStack_370 = ppplVar11;
    _bzero(&pplStack_560,0x128);
    if ((bVar4 & 1) == 0) {
      FUN_10872cd14(auStack_558);
LAB_10885e044:
      applStack_878[0]._0_1_ = 0;
      cStack_760 = '\0';
    }
    else {
      FUN_10872cd14(auStack_558);
      if ((long ****)ppplVar3 == (long ****)0x0) goto LAB_10885e044;
      if ((bStack_80 & 1) == 0) {
        ppplVar11 = (long ***)ppplStack_1a0[1];
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_438,ppplStack_1a0 + 0xb);
        func_0x000107c27f54(&pplStack_560,&UNK_10f2e0451,auStack_438);
        func_0x00010bcc7444(ppplVar11,0x65,&pplStack_560);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pplStack_560);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_438);
      }
      FUN_108789f68(applStack_878,auStack_198);
    }
    FUN_10872cd14(auStack_198);
    func_0x000107c28dcc(&ppplStack_1a0);
    in_ZR = cStack_760 == '\0';
    pppplVar9 = (long ****)applStack_878;
    if ((bool)in_ZR) {
      pppplVar9 = &ppplStack_1a0;
    }
    func_0x000107c28dec(auStack_758,pppplVar9);
    func_0x000107c2a3a8(&ppplStack_1a0);
    FUN_10872cd14(applStack_878);
    FUN_10885e550(&ppplStack_378);
    FUN_10885e374(&plStack_3f0);
    uStack_678 = 0;
    func_0x00010885e624();
    func_0x000107c313f4();
    ppplStack_1a0 = (long ***)&ppplStack_378;
    __ZNSt3__15mutex4lockEv(auStack_360);
    func_0x000107c287ac(&ppplStack_378,1,plVar5);
    FUN_10885da34(&ppplStack_378,2,auStack_758);
    func_0x000107c3141c(&ppplStack_378);
    __ZNSt3__15mutex6unlockEv(auStack_360);
    func_0x000107c27e6c(&ppplStack_1a0);
    func_0x00010885e5dc();
    func_0x000107c2a3a8(auStack_758);
    func_0x000107c29018(alStack_610);
  } while( true );
}



/* Entry: 10885e374; end: 10885e3eb;  */

void FUN_10885e374(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar3 = *(long **)(param_1 + 0x68);
    plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    *(undefined8 *)(param_1 + 0x70) = 0;
    while (plVar3 != (long *)(param_1 + 0x60)) {
      plVar1 = (long *)plVar3[1];
      func_0x00010885e600(plVar3);
      __ZdlPv(plVar3);
      plVar3 = plVar1;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10885e3ec; end: 10885e41b;  */

void FUN_10885e3ec(long param_1)

{
  FUN_10885e41c(param_1 + 0x60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10885e41c; end: 10885e477;  */

void FUN_10885e41c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1[2] != 0) {
    plVar3 = (long *)param_1[1];
    plVar1 = *(long **)(*param_1 + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[2] = 0;
    while (plVar3 != param_1) {
      plVar3 = (long *)plVar3[1];
      FUN_10885e478(param_1);
    }
  }
  return;
}



/* Entry: 10885e478; end: 10885e49f;  */

void FUN_10885e478(undefined8 param_1,undefined8 param_2)

{
  func_0x00010885e600(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10885e4a0; end: 10885e4a3;  */

undefined8 * FUN_10885e4a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10885e4a4; end: 10885e4b7;  */

void FUN_10885e4a4(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885e4b8; end: 10885e4bb;  */

undefined8 * FUN_10885e4b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10885e4bc; end: 10885e4cf;  */

void FUN_10885e4bc(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885e4d0; end: 10885e4d7;  */

void FUN_10885e4d0(void)

{
  return;
}



/* Entry: 10885e4d8; end: 10885e4eb;  */

void FUN_10885e4d8(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885e4ec; end: 10885e50f;  */

void FUN_10885e4ec(void)

{
  long unaff_x19;
  
  func_0x000107c3413c();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10885e510; end: 10885e54f;  */

void FUN_10885e510(long param_1)

{
  if (*(char *)(param_1 + 0x118) == '\x01') {
    func_0x000107c2a3a8();
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
  return;
}



/* Entry: 10885e550; end: 10885e5c3;  */

undefined8 * FUN_10885e550(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [288];
  
  _bzero(auStack_158,0x128);
  param_1[1] = 0;
  if (*(char *)(param_1 + 0x25) != '\0') {
    FUN_10885e510(param_1 + 2);
  }
  FUN_10872cd14(auStack_150);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_10872cd14(param_1 + 2);
  return param_1;
}



/* Entry: 10885e5c4; end: 10885e697;  */

void FUN_10885e5c4(void)

{
  return;
}



/* Entry: 10885e698; end: 10885e87b;  */

void FUN_10885e698(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined1 in_stack_00000038;
  undefined **in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 in_stack_00000060;
  
  func_0x00010887d040();
  func_0x000107c344b4();
  func_0x000107c316c8(&stack0x00000068,&UNK_10f4d359e);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000040 = &PTR_FUN_110a609a8;
  in_stack_00000048 = 0;
  in_stack_00000060 = 0x24;
  uVar1 = *param_4;
  if (uVar1 < 5) {
    func_0x000107c278b8(&stack0x00000020,PTR_DAT_113268de8);
    func_0x000107c28824(&stack0x00000040,&stack0x00000020,(&PTR_DAT_113269da0)[uVar1]);
    func_0x00010887be50();
  }
  puVar3 = &stack0x00000040;
  FUN_1086820b0(puVar3,1);
  in_stack_00000020 = 0x25;
  in_stack_00000028 = 0;
  in_stack_00000030 = (undefined8 *)0x0;
  in_stack_00000038 = 0;
  func_0x000107c28258();
  in_stack_00000038 = 1;
  in_stack_00000030 = puVar3;
  (*(code *)*param_3)(param_4,param_3);
  func_0x000107c28288(&stack0x00000028);
  func_0x000107c28afc(&stack0x00000020);
  if (((ulong)param_4 & 1) == 0) {
    uVar5 = *(undefined8 *)(unaff_x19 + 0x18);
    func_0x000107c345e4();
    func_0x00010887c4c4(uVar5);
    func_0x000107c34388();
  }
  func_0x00010887cf14();
  lVar4 = *(long *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  if (lVar4 != 0) {
    func_0x00010887bf74();
  }
  func_0x00010887cb4c();
  func_0x000107c278b8();
  iVar2 = (int)&stack0x00000008;
  func_0x00010bcc5450();
  func_0x000107c34388();
  if (iVar2 != 0) {
    uVar5 = *(undefined8 *)(unaff_x19 + 0x18);
    func_0x000107c2793c(&UNK_10f4d35e1);
    func_0x000107c3173c(&stack0x00000008);
    func_0x00010887c4c4(uVar5);
    func_0x000107c34388();
  }
  func_0x00010887cb4c();
  func_0x000107c34740();
  lVar4 = *(long *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000008;
  if (lVar4 != 0) {
    func_0x00010887bf74();
  }
  func_0x000107c2882c(&stack0x00000040);
  func_0x000107c316d0(&stack0x00000068);
  return;
}



/* Entry: 10885e87c; end: 10885e93f;  */

void FUN_10885e87c(long param_1)

{
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c316c8(auStack_38,&UNK_10f4d3639);
  func_0x000107c345e4();
  func_0x000107c278b8(auStack_50,&UNK_10f4d3630);
  func_0x000107c344fc();
  FUN_10885ea00();
  func_0x000107c2a074(auStack_68);
  func_0x000107c345e4();
  func_0x000107c29e04(auStack_50,param_1 + 0x40);
  func_0x000107c344fc();
  FUN_10885ea00();
  func_0x000107c2a074(auStack_68);
  func_0x000107c316d0(auStack_38);
  return;
}



/* Entry: 10885e940; end: 10885e9e7;  */

undefined8 * FUN_10885e940(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  *param_1 = &PTR_FUN_110a7c958;
  func_0x000107c316c8(auStack_38,&UNK_10f4d3552);
  func_0x00010887cf14();
  func_0x000107c316d0(auStack_38);
  func_0x000107c28eb4(param_1 + 0x6c);
  func_0x000107c28800(param_1 + 0x6a);
  func_0x000107c289fc(param_1 + 0x68);
  FUN_10886e33c(param_1 + 0x1e);
  func_0x000107c279a4(param_1 + 0x1a);
  func_0x000108870394(param_1 + 0x15);
  func_0x000108870348(param_1 + 0x10);
  func_0x000107c27914(param_1 + 8);
  func_0x000107c28d9c(param_1 + 6);
  func_0x000107c2a07c(param_1 + 4);
  func_0x000105275748(param_1 + 3);
  return param_1;
}



/* Entry: 10885e9e8; end: 10885e9eb;  */

undefined8 * FUN_10885e9e8(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  *param_1 = &PTR_FUN_110a7c958;
  func_0x000107c316c8(auStack_38,&UNK_10f4d3552);
  func_0x00010887cf14();
  func_0x000107c316d0(auStack_38);
  func_0x000107c28eb4(param_1 + 0x6c);
  func_0x000107c28800(param_1 + 0x6a);
  func_0x000107c289fc(param_1 + 0x68);
  FUN_10886e33c(param_1 + 0x1e);
  func_0x000107c279a4(param_1 + 0x1a);
  func_0x000108870394(param_1 + 0x15);
  func_0x000108870348(param_1 + 0x10);
  func_0x000107c27914(param_1 + 8);
  func_0x000107c28d9c(param_1 + 6);
  func_0x000107c2a07c(param_1 + 4);
  func_0x000105275748(param_1 + 3);
  return param_1;
}



/* Entry: 10885e9ec; end: 10885e9ff;  */

void FUN_10885e9ec(void)

{
  FUN_10885e940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885ea00; end: 10885ea83;  */

void FUN_10885ea00(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001008672bc();
  if ((bool)in_ZR) {
    func_0x000107c34178();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b508();
      func_0x00010887b644();
      func_0x00010887b760();
      func_0x000107c316c4();
      func_0x00010887b460();
      func_0x00010887b794();
      func_0x00010887be30();
      func_0x000107c34368();
      func_0x000107c34364();
    }
  }
  func_0x0001073a7244(*(long *)(unaff_x20 + 0x20) + 0xf0);
  return;
}



/* Entry: 10885ea84; end: 10885eb03;  */

void FUN_10885ea84(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001008672bc();
  if ((bool)in_ZR) {
    func_0x000107c34178();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b508();
      func_0x00010887b644();
      func_0x00010887b760();
      func_0x000107c316c4();
      func_0x00010887b460();
      func_0x00010887b794();
      func_0x00010887be30();
      func_0x000107c34368();
      func_0x000107c34364();
    }
  }
  FUN_10885eb04(*(long *)(unaff_x20 + 0x20) + 0x1f0);
  return;
}



/* Entry: 10885eb04; end: 10885eb27;  */

void FUN_10885eb04(void)

{
  func_0x00010887c1c4();
  func_0x00010887c4e4();
  FUN_1088715f0();
  return;
}



/* Entry: 10885eb28; end: 10885eb33;  */

void FUN_10885eb28(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x0001056541d4();
  func_0x0001005ecd38(lVar1 + 0x278,param_2);
  func_0x0001056541ec();
  func_0x00010565409c();
  func_0x000105654070();
  return;
}



/* Entry: 10885eb34; end: 10885ebc3;  */

void FUN_10885eb34(void)

{
  undefined1 in_ZR;
  
  func_0x000107c3430c();
  if ((bool)in_ZR) {
    func_0x000107c34190();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b5cc();
      func_0x00010887b8c8();
      func_0x00010887b760();
      func_0x000107c316c4();
      func_0x00010887b460();
      func_0x00010887bc2c();
      func_0x00010887be30();
      func_0x000107c34368();
      func_0x000107c34364();
    }
  }
  func_0x000107c344f4();
  func_0x000107c28400();
  func_0x00010887c7a8();
  func_0x00010887baa8();
  func_0x00010887ca18();
  return;
}



/* Entry: 10885ebc4; end: 10885ec53;  */

void FUN_10885ebc4(void)

{
  undefined1 in_ZR;
  
  func_0x000107c3430c();
  if ((bool)in_ZR) {
    func_0x000107c34190();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b5cc();
      func_0x00010887b8c8();
      func_0x00010887b760();
      func_0x000107c316c4();
      func_0x00010887b460();
      func_0x00010887bc2c();
      func_0x00010887be30();
      func_0x000107c34368();
      func_0x000107c34364();
    }
  }
  func_0x000107c344f4();
  func_0x000107c28400();
  func_0x00010887c7a8();
  func_0x00010887baa8();
  func_0x00010887ca18();
  return;
}



/* Entry: 10885ec54; end: 10885ece3;  */

void FUN_10885ec54(void)

{
  undefined1 in_ZR;
  
  func_0x0001008672bc();
  if ((bool)in_ZR) {
    func_0x000107c34178();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b508();
      func_0x00010887b644();
      func_0x00010887b760();
      func_0x000107c316c4();
      func_0x00010887b460();
      func_0x00010887b794();
      func_0x00010887be30();
      func_0x000107c34368();
      func_0x000107c34364();
    }
  }
  func_0x00010887c0c4();
  func_0x00010887c7a8();
  func_0x00010887baa8();
  func_0x00010887ca18();
  return;
}



/* Entry: 10885ece4; end: 10885ed07;  */

void FUN_10885ece4(void)

{
  func_0x000107c34420();
  func_0x000107c2840c();
  func_0x000107c343c8();
  func_0x000107c343c4();
  func_0x000107c287a8();
  func_0x000107c34320();
  return;
}



/* Entry: 10885ed08; end: 10885edab;  */

void FUN_10885ed08(void)

{
  undefined1 in_ZR;
  
  func_0x000107c34380();
  if ((bool)in_ZR) {
    func_0x000107c34190();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b5cc();
      func_0x00010887b8c8();
      func_0x00010887b760();
      func_0x000107c316c4();
      func_0x00010887b460();
      func_0x00010887bc2c();
      func_0x00010887be30();
      func_0x000107c34368();
      func_0x000107c34364();
    }
  }
  func_0x000107c344f4();
  FUN_10885edac();
  func_0x00010887c7a8();
  func_0x00010887baa8();
  func_0x00010887ca18();
  return;
}



/* Entry: 10885edac; end: 10885edd7;  */

void FUN_10885edac(void)

{
  func_0x000107c34290();
  func_0x000107c2840c();
  func_0x000107c34278();
  func_0x000107c343c4();
  FUN_1088716c4();
  func_0x000107c34320();
  return;
}



/* Entry: 10885edd8; end: 10885ee5f;  */

void FUN_10885edd8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long unaff_x21;
  undefined1 auStack_90 [96];
  
  func_0x000107c341a8();
  if ((bool)in_ZR) {
    func_0x000107c34180();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b51c();
      func_0x00010887b644();
      func_0x00010887b760();
      func_0x000107c316c4();
      func_0x00010887b460();
      func_0x00010887b804();
      func_0x00010887be30();
      func_0x000107c34368();
      func_0x000107c34364();
    }
  }
  auStack_90[0] = 0;
  func_0x000107c343c8(*(long *)(unaff_x21 + 0x20) + 0x300,param_2,auStack_90);
  FUN_10885ee60();
  return;
}



/* Entry: 10885ee60; end: 10885ee8b;  */

void FUN_10885ee60(void)

{
  func_0x000107c34290();
  FUN_1088716e8();
  func_0x000107c34278();
  func_0x000107c343c4();
  func_0x00010887181c();
  func_0x000107c343c0();
  func_0x000108871840();
  return;
}



/* Entry: 10885ee8c; end: 10885ef0b;  */

void FUN_10885ee8c(void)

{
  undefined1 in_ZR;
  long unaff_x21;
  
  func_0x000107c341a8();
  if ((bool)in_ZR) {
    func_0x000107c34180();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b51c();
      func_0x00010887b644();
      func_0x00010887b760();
      func_0x000107c316c4();
      func_0x00010887b460();
      func_0x00010887b804();
      func_0x00010887be30();
      func_0x000107c34368();
      func_0x000107c34364();
    }
  }
  func_0x000107c343c8(*(long *)(unaff_x21 + 0x20) + 0x378);
  FUN_10885ef0c();
  return;
}



/* Entry: 10885ef0c; end: 10885ef2f;  */

void FUN_10885ef0c(void)

{
  func_0x000107c34420();
  FUN_1088716e8();
  func_0x000107c343c8();
  func_0x000107c343c4();
  func_0x000107c287a8();
  func_0x000107c343c0();
  func_0x000108871840();
  return;
}



/* Entry: 10885ef30; end: 10885efb3;  */

void FUN_10885ef30(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c341e0();
  if ((bool)in_ZR) {
    func_0x000107c34178();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b508();
      func_0x00010887b668();
      func_0x00010887b788();
      func_0x000107c316c4();
      func_0x00010887b4a4();
      func_0x00010887b838();
      func_0x00010887be60();
      func_0x000107c34388();
      func_0x00010887be50();
    }
  }
  FUN_10885efb4(*(long *)(unaff_x20 + 0x20) + 0x3f0,auStack_48);
  return;
}



/* Entry: 10885efb4; end: 10885efd7;  */

void FUN_10885efb4(void)

{
  func_0x000107c34420();
  FUN_1088716e8();
  func_0x000107c343c8();
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x000108871840();
  return;
}



/* Entry: 10885efd8; end: 10885f06f;  */

void FUN_10885efd8(undefined8 param_1)

{
  undefined1 in_ZR;
  
  func_0x000107c341d4();
  if ((bool)in_ZR) {
    func_0x000107c34180();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b51c();
      func_0x00010887b644();
      func_0x00010887b760();
      func_0x000107c316c4();
      func_0x00010887b460();
      func_0x00010887b804();
      func_0x00010887be30();
      func_0x000107c34368();
      func_0x000107c34364();
    }
  }
  func_0x00010887c318();
  func_0x000107c34554();
  if (!(bool)in_ZR) {
    func_0x00010887c028(param_1,&UNK_10f4d3673);
    FUN_10885f070();
  }
  return;
}



/* Entry: 10885f070; end: 10885f2fb;  */

void FUN_10885f070(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  long lVar7;
  long extraout_x9;
  long unaff_x19;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long alStack_160 [4];
  byte bStack_140;
  long alStack_138 [4];
  byte bStack_118;
  undefined1 auStack_110 [48];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [24];
  ulong uStack_c0;
  ulong uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  long *plStack_80;
  long *plStack_78;
  
  func_0x000107c342a8();
  lVar8 = *param_4;
  while (lVar5 = *(long *)(unaff_x19 + 8), lVar8 != lVar5) {
    lVar7 = lVar5 - lVar8;
    lVar8 = lVar8 + *(long *)(param_1 + 0x70) * 0x18;
    if (lVar7 / 0x18 <= *(long *)(param_1 + 0x70)) {
      lVar8 = lVar5;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010887c4a4(auStack_110);
    uStack_e0 = uVar9;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d8,auStack_110)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
    func_0x00010887ccb8(auStack_110,&uStack_e0);
    func_0x000107c29010(alStack_138,auStack_110);
    func_0x00010887c5a0();
    while ((((bStack_118 & 1) != 0 || ((bStack_140 & 1) != 0)) && (alStack_138[0] != alStack_160[0])
           )) {
      plVar3 = alStack_138;
      FUN_1086afc30();
      uVar6 = unaff_x20[1];
      if (uVar6 < (ulong)unaff_x20[2]) {
        func_0x000104beded0();
      }
      else {
        plVar4 = plVar3;
        func_0x00010887d0b0((long)(uVar6 - *unaff_x20) / 0x18);
        func_0x000107c27ac8();
        func_0x000107c27ab8(&uStack_c0,plVar4,(long)(uVar6 - *unaff_x20) / 0x18,unaff_x20 + 2);
        if (plStack_b0 == plStack_a8) {
          if (uStack_b8 < uStack_c0 || uStack_b8 - uStack_c0 == 0) {
            uVar6 = (long)((long)plStack_b0 - uStack_c0) / 0x18 << 1;
            if ((long)plStack_b0 - uStack_c0 == 0) {
              uVar6 = 1;
            }
            func_0x000107c27ab8(&uStack_90,uVar6,uVar6 >> 2,uStack_a0);
            FUN_1086aa9f4();
            plVar2 = plStack_a8;
            plVar4 = plStack_b0;
            uVar1 = uStack_b8;
            uVar6 = uStack_c0;
            uStack_b8 = uStack_88;
            uStack_c0 = uStack_90;
            plStack_a8 = plStack_78;
            plStack_b0 = plStack_80;
            uStack_88 = uVar1;
            uStack_90 = uVar6;
            plStack_78 = plVar2;
            plStack_80 = plVar4;
            func_0x000107c27ac0(&uStack_90);
          }
          else {
            plVar4 = plStack_b0;
            func_0x00010887c98c((long)(uStack_b8 - uStack_c0) / 0x18);
            lVar5 = 0;
            if (extraout_x9 != 0) {
              lVar5 = extraout_x8 / extraout_x9;
            }
            FUN_10867cbd8();
            uStack_b8 = uStack_b8 + lVar5 * 0x18;
            plStack_b0 = plVar4;
          }
        }
        *plStack_b0 = 0;
        plStack_b0[1] = 0;
        plStack_b0[2] = 0;
        lVar5 = *plVar3;
        plStack_b0[1] = plVar3[1];
        *plStack_b0 = lVar5;
        plStack_b0[2] = plVar3[2];
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
        plStack_b0 = plStack_b0 + 3;
        FUN_1086aa8cc();
        func_0x000107c27ac0(&uStack_c0);
      }
      func_0x000107c29018(alStack_138);
    }
    func_0x00010887c7cc(alStack_160);
    func_0x00010887c7cc(alStack_138);
    func_0x000107c2900c(auStack_110);
    func_0x000107c345dc();
  }
  return;
}



/* Entry: 10885f2fc; end: 10885f3a7;  */

void FUN_10885f2fc(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x9;
  
  func_0x000107c341d4();
  if ((bool)in_ZR) {
    func_0x000107c34180();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b51c();
      func_0x00010887b644();
      func_0x00010887b760();
      func_0x000107c316c4();
      func_0x00010887b460();
      func_0x00010887b804();
      func_0x00010887be30();
      func_0x000107c34368();
      func_0x000107c34364();
    }
  }
  func_0x00010887c318();
  func_0x000107c34554();
  if (!(bool)in_ZR) {
    func_0x00010887cc68(extraout_x9 - extraout_x8);
    FUN_10885f3a8();
    func_0x00010887c028();
    FUN_10885f428();
  }
  return;
}



/* Entry: 10885f3a8; end: 10885f427;  */

void FUN_10885f3a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar5;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x10;
  long extraout_x10_00;
  long lVar6;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long unaff_x23;
  undefined8 *puVar9;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  ulong auStack_688 [59];
  byte bStack_4b0;
  ulong auStack_4a8 [59];
  byte bStack_2d0;
  undefined1 auStack_2c8 [488];
  undefined8 auStack_e0 [4];
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined1 auStack_48 [40];
  
  func_0x00010887d09c();
  if ((ulong)(extraout_x9 / 0x1d0) < param_5) {
    uVar3 = param_5 == 0x8d3dcb08d3dcb1;
    if (0x8d3dcb08d3dcb0 < param_5) {
      FUN_1086aacf0();
      func_0x00010887bf34();
      func_0x0001086aae8c();
      func_0x00010887be28();
      func_0x000107c34578();
      func_0x00010887c9b8();
      do {
        func_0x00010887cbe0();
        if ((bool)uVar3) {
          return;
        }
        func_0x00010887c58c();
        lVar6 = unaff_x23 + extraout_x10 * 0x18;
        if (extraout_x9_00 <= extraout_x10) {
          lVar6 = extraout_x8;
        }
        uVar7 = *(undefined8 *)(extraout_x12 + 0x18);
        func_0x000107c278b8(auStack_2c8);
        auStack_e0[0] = uVar7;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (unaff_x27 + 1,auStack_2c8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2c8);
        puVar9 = (undefined8 *)((lVar6 - unaff_x23) / 0x18);
        func_0x00010887cd08();
        func_0x00010887cf78();
        func_0x00010887c580();
        func_0x00010887c0b4(auStack_4a8);
        func_0x000107c34500();
        func_0x000107c2a0d8();
        *puVar9 = &PTR_DAT_110a7d348;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4a8);
        func_0x000107c34364();
        while (uVar3 = unaff_x23 == lVar6, !(bool)uVar3) {
          func_0x00010887c160();
          func_0x00010887c300();
        }
        func_0x000107c2a0d4(auStack_2c8,puVar9);
        func_0x000107c2905c(auStack_4a8,auStack_2c8);
        _bzero(auStack_688,0x1e0);
        while (((bStack_2d0 & 1) != 0 || ((bStack_4b0 & 1) != 0))) {
          uVar2 = auStack_688[0] <= auStack_4a8[0];
          uVar3 = auStack_4a8[0] == auStack_688[0];
          if ((bool)uVar3) break;
          func_0x000107c29060(auStack_4a8);
          func_0x00010887cc20();
          if ((bool)uVar2) {
            func_0x00010887d0bc();
            func_0x00010887d0b0(extraout_x8_00 / 0x1d0);
            FUN_1086aac5c();
            func_0x00010887d0bc();
            FUN_1086aacfc(&uStack_c0);
            uVar1 = uStack_b0;
            uVar5 = uStack_b8;
            uVar3 = 0;
            if (uStack_b0 == uStack_a8) {
              if (uStack_b8 < uStack_c0 || uStack_b8 - uStack_c0 == 0) {
                uVar3 = uStack_b0 - uStack_c0 == 0;
                uVar5 = (long)(uStack_b0 - uStack_c0) / 0x1d0 << 1;
                if ((bool)uVar3) {
                  uVar5 = 1;
                }
                FUN_1086aacfc(auStack_90,uVar5,uVar5 >> 2,uStack_a0);
                lVar8 = uStack_b0 - uStack_b8;
                uVar1 = lStack_80 + lVar8;
                uVar5 = uStack_b8;
                lVar4 = lStack_80;
                for (; lVar8 != 0; lVar8 = lVar8 + -0x1d0) {
                  func_0x000107c28de8(lVar4,uVar5);
                  lVar4 = lVar4 + 0x1d0;
                  uVar5 = uVar5 + 0x1d0;
                }
                func_0x00010887d088();
                *(undefined8 *)(unaff_x28 + 0x38) = in_register_00005028;
                *(undefined8 *)(unaff_x28 + 0x30) = param_2;
                *(undefined8 *)(unaff_x28 + 0x48) = in_register_00005048;
                *(undefined8 *)(unaff_x28 + 0x40) = param_3;
                uStack_b0 = uVar1;
                uStack_a8 = extraout_x8_02;
                func_0x0001086aae8c(auStack_90);
              }
              else {
                func_0x00010887c98c((long)(uStack_b8 - uStack_c0) / 0x1d0);
                lVar4 = 0;
                if (extraout_x9_01 != 0) {
                  lVar4 = extraout_x8_01 / extraout_x9_01;
                }
                for (; uVar3 = uVar5 == uVar1, !(bool)uVar3; uVar5 = uVar5 + 0x1d0) {
                  func_0x000107c290b0(uVar5 + lVar4 * 0x1d0,uVar5);
                }
                uStack_b0 = uVar5 + lVar4 * 0x1d0;
                uStack_b8 = uStack_b8 + lVar4 * 0x1d0;
                unaff_x27 = auStack_e0;
              }
            }
            func_0x000107c28de8(uStack_b0,puVar9);
            uStack_b0 = uStack_b0 + 0x1d0;
            FUN_1086aad80(unaff_x20 + 0x10,unaff_x23,*(undefined8 *)(unaff_x20 + 8));
            func_0x00010887c96c();
            puVar9 = (undefined8 *)(extraout_x10_00 + (extraout_x8_03 / -0x1d0) * 0x1d0);
            func_0x00010887cbd0();
            FUN_1086aad80();
            func_0x00010887c8a8();
            func_0x0001086aae8c();
          }
          else {
            func_0x000107c28de8(unaff_x23,puVar9);
            *(long *)(unaff_x20 + 8) = unaff_x23 + 0x1d0;
          }
          func_0x000107c29158(auStack_4a8);
        }
        func_0x000107c345bc(auStack_688);
        func_0x000107c345bc(auStack_4a8);
        func_0x000107c29150(auStack_2c8);
        func_0x00010887c44c();
        unaff_x23 = lVar6;
      } while( true );
    }
    FUN_1086aacfc(auStack_48);
    func_0x000107c344fc();
    FUN_1086aacb4();
    func_0x0001086aae8c(auStack_48);
  }
  return;
}



/* Entry: 10885f428; end: 10885f773;  */

void FUN_10885f428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar4;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  long lVar5;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long unaff_x23;
  undefined8 *puVar8;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  ulong auStack_638 [59];
  byte bStack_460;
  ulong auStack_458 [59];
  byte bStack_280;
  undefined1 auStack_278 [488];
  undefined8 auStack_90 [4];
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x000107c34578();
  func_0x00010887c9b8();
  do {
    func_0x00010887cbe0();
    if ((bool)in_ZR) {
      return;
    }
    func_0x00010887c58c();
    lVar5 = unaff_x23 + extraout_x10 * 0x18;
    if (extraout_x9 <= extraout_x10) {
      lVar5 = extraout_x8;
    }
    uVar6 = *(undefined8 *)(extraout_x12 + 0x18);
    func_0x000107c278b8(auStack_278);
    auStack_90[0] = uVar6;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (unaff_x27 + 1,auStack_278);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_278);
    puVar8 = (undefined8 *)((lVar5 - unaff_x23) / 0x18);
    func_0x00010887cd08();
    func_0x00010887cf78();
    func_0x00010887c580();
    func_0x00010887c0b4(auStack_458);
    func_0x000107c34500();
    func_0x000107c2a0d8();
    *puVar8 = &PTR_DAT_110a7d348;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_458);
    func_0x000107c34364();
    while (in_ZR = unaff_x23 == lVar5, !(bool)in_ZR) {
      func_0x00010887c160();
      func_0x00010887c300();
    }
    func_0x000107c2a0d4(auStack_278,puVar8);
    func_0x000107c2905c(auStack_458,auStack_278);
    _bzero(auStack_638,0x1e0);
    while (((bStack_280 & 1) != 0 || ((bStack_460 & 1) != 0))) {
      uVar2 = auStack_638[0] <= auStack_458[0];
      in_ZR = auStack_458[0] == auStack_638[0];
      if ((bool)in_ZR) break;
      func_0x000107c29060(auStack_458);
      func_0x00010887cc20();
      if ((bool)uVar2) {
        func_0x00010887d0bc();
        func_0x00010887d0b0(extraout_x8_00 / 0x1d0);
        FUN_1086aac5c();
        func_0x00010887d0bc();
        FUN_1086aacfc(&uStack_70);
        uVar1 = uStack_60;
        uVar4 = uStack_68;
        in_ZR = 0;
        if (uStack_60 == uStack_58) {
          if (uStack_68 < uStack_70 || uStack_68 - uStack_70 == 0) {
            in_ZR = uStack_60 - uStack_70 == 0;
            uVar4 = (long)(uStack_60 - uStack_70) / 0x1d0 << 1;
            if ((bool)in_ZR) {
              uVar4 = 1;
            }
            FUN_1086aacfc(auStack_40,uVar4,uVar4 >> 2,uStack_50);
            lVar7 = uStack_60 - uStack_68;
            uVar1 = lStack_30 + lVar7;
            uVar4 = uStack_68;
            lVar3 = lStack_30;
            for (; lVar7 != 0; lVar7 = lVar7 + -0x1d0) {
              func_0x000107c28de8(lVar3,uVar4);
              lVar3 = lVar3 + 0x1d0;
              uVar4 = uVar4 + 0x1d0;
            }
            func_0x00010887d088();
            *(undefined8 *)(unaff_x28 + 0x38) = in_register_00005028;
            *(undefined8 *)(unaff_x28 + 0x30) = param_2;
            *(undefined8 *)(unaff_x28 + 0x48) = in_register_00005048;
            *(undefined8 *)(unaff_x28 + 0x40) = param_3;
            uStack_60 = uVar1;
            uStack_58 = extraout_x8_02;
            func_0x0001086aae8c(auStack_40);
          }
          else {
            func_0x00010887c98c((long)(uStack_68 - uStack_70) / 0x1d0);
            lVar3 = 0;
            if (extraout_x9_00 != 0) {
              lVar3 = extraout_x8_01 / extraout_x9_00;
            }
            for (; in_ZR = uVar4 == uVar1, !(bool)in_ZR; uVar4 = uVar4 + 0x1d0) {
              func_0x000107c290b0(uVar4 + lVar3 * 0x1d0,uVar4);
            }
            uStack_60 = uVar4 + lVar3 * 0x1d0;
            uStack_68 = uStack_68 + lVar3 * 0x1d0;
            unaff_x27 = auStack_90;
          }
        }
        func_0x000107c28de8(uStack_60,puVar8);
        uStack_60 = uStack_60 + 0x1d0;
        FUN_1086aad80(unaff_x20 + 0x10,unaff_x23,*(undefined8 *)(unaff_x20 + 8));
        func_0x00010887c96c();
        puVar8 = (undefined8 *)(extraout_x10_00 + (extraout_x8_03 / -0x1d0) * 0x1d0);
        func_0x00010887cbd0();
        FUN_1086aad80();
        func_0x00010887c8a8();
        func_0x0001086aae8c();
      }
      else {
        func_0x000107c28de8(unaff_x23,puVar8);
        *(long *)(unaff_x20 + 8) = unaff_x23 + 0x1d0;
      }
      func_0x000107c29158(auStack_458);
    }
    func_0x000107c345bc(auStack_638);
    func_0x000107c345bc(auStack_458);
    func_0x000107c29150(auStack_278);
    func_0x00010887c44c();
    unaff_x23 = lVar5;
  } while( true );
}



/* Entry: 10885f774; end: 10885f81f;  */

void FUN_10885f774(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x9;
  
  func_0x000107c341d4();
  if ((bool)in_ZR) {
    func_0x000107c34180();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b51c();
      func_0x00010887b644();
      func_0x00010887b760();
      func_0x000107c316c4();
      func_0x00010887b460();
      func_0x00010887b804();
      func_0x00010887be30();
      func_0x000107c34368();
      func_0x000107c34364();
    }
  }
  func_0x000107c342e4();
  func_0x000107c34554();
  if (!(bool)in_ZR) {
    func_0x00010887cc68(extraout_x9 - extraout_x8);
    func_0x000100869d24();
    func_0x00010887c028();
    FUN_10885f820();
  }
  return;
}



/* Entry: 10885f820; end: 10885f97f;  */

void FUN_10885f820(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long lStack_110;
  undefined1 auStack_108 [24];
  byte bStack_f0;
  long alStack_e0 [4];
  byte bStack_c0;
  undefined1 auStack_b8 [48];
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  func_0x000107c342a8();
  lVar3 = *param_4;
  while (lVar1 = *(long *)(unaff_x19 + 8), lVar3 != lVar1) {
    lVar2 = lVar1 - lVar3;
    lVar3 = lVar3 + *(long *)(param_1 + 0x70) * 0x18;
    if (lVar2 / 0x18 <= *(long *)(param_1 + 0x70)) {
      lVar3 = lVar1;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010887c4a4(auStack_b8);
    uStack_88 = uVar4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_80,auStack_b8);
    func_0x00010887cc94();
    func_0x00010887ccb8(auStack_b8,&uStack_88);
    func_0x000107c29010(alStack_e0,auStack_b8);
    func_0x00010887c5a0();
    while ((((bStack_c0 & 1) != 0 || ((bStack_f0 & 1) != 0)) && (alStack_e0[0] != lStack_110))) {
      FUN_1086afc30(alStack_e0);
      FUN_1086f51f0();
      func_0x000107c29018(alStack_e0);
    }
    func_0x000107c279dc(auStack_108);
    func_0x00010887c7cc(alStack_e0);
    func_0x000107c2900c(auStack_b8);
    func_0x00010887c570();
  }
  return;
}



/* Entry: 10885f980; end: 10885fa17;  */

void FUN_10885f980(undefined8 param_1)

{
  undefined1 in_ZR;
  
  func_0x000107c341d4();
  if ((bool)in_ZR) {
    func_0x000107c34180();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b51c();
      func_0x00010887b644();
      func_0x00010887b760();
      func_0x000107c316c4();
      func_0x00010887b460();
      func_0x00010887b804();
      func_0x00010887be30();
      func_0x000107c34368();
      func_0x000107c34364();
    }
  }
  func_0x00010887c318();
  func_0x000107c34554();
  if (!(bool)in_ZR) {
    func_0x00010887c028(param_1,&UNK_10f4d383f);
    FUN_10885fa18();
  }
  return;
}



/* Entry: 10885fa18; end: 10885fef3;  */

void FUN_10885fa18(long param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *apuStack_548 [49];
  byte bStack_3c0;
  undefined8 *puStack_3b8;
  undefined1 auStack_3b0 [384];
  byte bStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined1 auStack_218 [384];
  char cStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  func_0x000107c34578();
  lVar15 = *param_4;
  do {
    lVar11 = param_4[1];
    if (lVar15 == lVar11) {
      return;
    }
    lVar3 = lVar15 + *(long *)(param_1 + 0x70) * 0x18;
    if ((lVar11 - lVar15) / 0x18 <= *(long *)(param_1 + 0x70)) {
      lVar3 = lVar11;
    }
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c278b8(&puStack_228,param_2);
    uStack_90 = uVar14;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_88,&puStack_228);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_228);
    puVar12 = (undefined8 *)((lVar3 - lVar15) / 0x18);
    func_0x00010887cd08();
    func_0x00010887cf78();
    func_0x00010887c580();
    func_0x00010887c0b4(&puStack_3b8);
    func_0x000107c34500();
    func_0x00010887cc9c();
    *puVar12 = &PTR_DAT_110a7d410;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_3b8);
    func_0x000107c34364();
    for (; lVar15 != lVar3; lVar15 = lVar15 + 0x18) {
      func_0x00010887cb2c();
      func_0x00010887c554();
    }
    auStack_218[0] = 0;
    cStack_98 = '\0';
    puStack_228 = puVar12;
    puStack_220 = puVar12;
    FUN_108871b60(&puStack_220);
    puStack_3b8 = (undefined8 *)0x0;
    auStack_3b0[0] = 0;
    bStack_230 = 0;
    if (cStack_98 == '\0') {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      FUN_108871ccc(auStack_3b0,auStack_218);
      FUN_108871c64(auStack_218);
      puVar12 = puStack_3b8;
    }
    puStack_3b8 = puStack_220;
    puStack_220 = puVar12;
    _bzero(apuStack_548,400);
    while ((((bStack_230 & 1) != 0 || ((bStack_3c0 & 1) != 0)) && (puStack_3b8 != apuStack_548[0])))
    {
      if ((bStack_230 & 1) == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&uStack_70,puStack_3b8 + 0xb);
        func_0x00010887ccdc(&uStack_40);
        func_0x00010887d014();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
        func_0x00010887c578();
      }
      uVar13 = param_3[1];
      if (uVar13 < param_3[2]) {
        FUN_108871ce8(uVar13,auStack_3b0);
        param_3[1] = uVar13 + 0x180;
      }
      else {
        if (0xaaaaaaaaaaaaaa < (long)(uVar13 - *param_3) / 0x180 + 1U) {
          func_0x000108871d74();
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10885fe2c);
          (*pcVar9)();
        }
        func_0x00010887c544((long)(param_3[2] - *param_3) / 0x180);
        uVar14 = extraout_x9;
        if (0x55555555555554 < extraout_x8) {
          uVar14 = 0xaaaaaaaaaaaaaa;
        }
        FUN_108871d80(&uStack_70,uVar14);
        uVar8 = uStack_58;
        uVar7 = uStack_60;
        uVar16 = uStack_68;
        uVar2 = uStack_70;
        uVar17 = uStack_60;
        if (uStack_60 == uStack_58) {
          if (uStack_68 < uStack_70 || uStack_68 - uStack_70 == 0) {
            uVar17 = (long)(uStack_60 - uStack_70) / 0x180 << 1;
            if (uStack_60 - uStack_70 == 0) {
              uVar17 = 1;
            }
            FUN_108871d80(&uStack_40,uVar17,uVar17 >> 2,uStack_50);
            lVar15 = uVar7 - uVar16;
            uVar17 = uStack_30 + lVar15;
            uVar1 = uVar16;
            uVar4 = uStack_40;
            uVar5 = uStack_38;
            uVar10 = uStack_30;
            uVar6 = uStack_28;
            for (; lVar15 != 0; lVar15 = lVar15 + -0x180) {
              uStack_40 = uVar4;
              uStack_38 = uVar5;
              uStack_28 = uVar6;
              FUN_108871ce8(uVar10,uVar1);
              uVar10 = uVar10 + 0x180;
              uVar1 = uVar1 + 0x180;
              uVar4 = uStack_40;
              uVar5 = uStack_38;
              uVar6 = uStack_28;
            }
            uStack_40 = uVar2;
            uStack_38 = uVar16;
            uStack_30 = uVar7;
            uStack_28 = uVar8;
            uStack_70 = uVar4;
            uStack_68 = uVar5;
            uStack_60 = uVar17;
            uStack_58 = uVar6;
            func_0x000108871e84(&uStack_40);
          }
          else {
            func_0x00010887c98c((long)(uStack_68 - uStack_70) / 0x180);
            lVar15 = 0;
            if (extraout_x9_00 != 0) {
              lVar15 = extraout_x8_00 / extraout_x9_00;
            }
            uVar2 = uVar16 + lVar15 * 0x180;
            for (; uVar16 != uVar7; uVar16 = uVar16 + 0x180) {
              FUN_108871c88(uVar16 + lVar15 * 0x180,uVar16);
            }
            uStack_60 = uVar16 + lVar15 * 0x180;
            uVar17 = uStack_60;
            uStack_68 = uVar2;
          }
        }
        FUN_108871ce8(uVar17,auStack_3b0);
        uVar17 = uStack_68;
        lVar15 = uStack_60 + 0x180;
        func_0x000108871ddc(param_3 + 2,uVar13,param_3[1],lVar15);
        uVar16 = param_3[1];
        param_3[1] = uVar13;
        uVar17 = uVar17 + ((long)(uVar13 - *param_3) / -0x180) * 0x180;
        func_0x000108871ddc(param_3 + 2,*param_3,uVar13,uVar17);
        uStack_70 = *param_3;
        *param_3 = uVar17;
        param_3[1] = lVar15 + (uVar16 - uVar13);
        uVar13 = param_3[2];
        param_3[2] = uStack_58;
        uStack_68 = uStack_70;
        uStack_60 = uStack_70;
        uStack_58 = uVar13;
        func_0x000108871e84(&uStack_70);
      }
      FUN_108871b60(&puStack_3b8);
    }
    func_0x00010887ca50();
    func_0x000108871d54();
    func_0x000108871d54(auStack_3b0);
    FUN_108871ec4(&puStack_228);
    func_0x00010887c44c();
    lVar15 = lVar3;
  } while( true );
}



/* Entry: 10885fef4; end: 10885ff73;  */

void FUN_10885fef4(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001008672bc();
  if ((bool)in_ZR) {
    func_0x000107c34178();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b508();
      func_0x00010887b644();
      func_0x00010887b760();
      func_0x000107c316c4();
      func_0x00010887b460();
      func_0x00010887b794();
      func_0x00010887be30();
      func_0x000107c34368();
      func_0x000107c34364();
    }
  }
  FUN_10885ff74(*(long *)(unaff_x20 + 0x20) + 0x468);
  return;
}



/* Entry: 10885ff74; end: 10885ff97;  */

void FUN_10885ff74(void)

{
  func_0x00010887c1c4();
  func_0x00010887c530();
  FUN_108871f30();
  return;
}



/* Entry: 10885ff98; end: 10886008b;  */

void FUN_10885ff98(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  func_0x00010887d040();
  func_0x0001008672bc();
  if ((bool)in_ZR) {
    func_0x000107c34178();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b6a4();
      func_0x00010887b700();
      func_0x00010887b760();
      func_0x000107c316c4();
      func_0x00010887b460();
      func_0x00010887b794();
      func_0x00010887be30();
      func_0x000107c34368();
      func_0x000107c34364();
    }
  }
  FUN_10885d484(*(long *)(unaff_x20 + 0x20) + 0x668);
  if (*(int *)(unaff_x19 + 0x11c) == 8) {
    func_0x0001086a74d4();
    if ((int)unaff_x19 != 0) {
      plVar1 = (long *)(unaff_x20 + 0x360);
      FUN_108679cf0();
      if (0 < *plVar1) {
        lVar2 = *(long *)(unaff_x20 + 0x20);
        func_0x00010887c170();
        FUN_108679cf0();
        FUN_10886008c(lVar2 + 0x9020);
        return;
      }
    }
    func_0x00010887b8f0(*(undefined8 *)(unaff_x20 + 0x20));
  }
  return;
}



/* Entry: 10886008c; end: 1088600d7;  */

void FUN_10886008c(void)

{
  func_0x00010887b890();
  func_0x00010086756c();
  func_0x00010887bba4();
  FUN_108871fe0();
  func_0x000107c343f8();
  func_0x000100867aa4();
  func_0x000100867aac();
  return;
}



/* Entry: 1088600d8; end: 108860157;  */

void FUN_1088600d8(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x00010887b8a4();
  if ((bool)in_ZR) {
    func_0x000107c34178();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b508();
      func_0x00010887b668();
      func_0x00010887b788();
      func_0x000107c316c4();
      func_0x00010887b4a4();
      func_0x00010887b838();
      func_0x00010887be60();
      func_0x000107c34388();
      func_0x00010887be50();
    }
  }
  func_0x00010887ca10(*(long *)(unaff_x20 + 0x20) + 0x778,auStack_48);
  return;
}



/* Entry: 108860158; end: 1088601a3;  */

void FUN_108860158(void)

{
  func_0x00010887b890();
  func_0x00010086756c();
  func_0x00010887bba4();
  FUN_10887200c();
  func_0x000107c343f8();
  func_0x000100867aa4();
  func_0x000100867aac();
  return;
}



/* Entry: 1088601a4; end: 108860227;  */

void FUN_1088601a4(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c341e0();
  if ((bool)in_ZR) {
    func_0x000107c34178();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b508();
      func_0x00010887b668();
      func_0x00010887b788();
      func_0x000107c316c4();
      func_0x00010887b4a4();
      func_0x00010887b838();
      func_0x00010887be60();
      func_0x000107c34388();
      func_0x00010887be50();
    }
  }
  FUN_108860228(*(long *)(unaff_x20 + 0x20) + 0x800,auStack_48);
  return;
}



/* Entry: 108860228; end: 10886024b;  */

void FUN_108860228(void)

{
  func_0x000107c34420();
  func_0x000107c29f2c();
  func_0x000107c343c8();
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x000107c29f38();
  return;
}



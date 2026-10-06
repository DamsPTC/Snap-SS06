/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10887fea8; end: 10887febb;  */

void FUN_10887fea8(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887febc; end: 10887feeb;  */

void FUN_10887febc(long param_1)

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



/* Entry: 10887feec; end: 10887ffd3;  */

void FUN_10887feec(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  undefined1 auStack_a8 [120];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (func_0x000107c3141c(), (int)lVar1 != 0)) {
    lVar2 = *param_1;
    func_0x000107c313f8();
    func_0x000107c2879c(auStack_c8);
    lVar1 = lVar2;
    func_0x000107c313d8(lVar2,1);
    lStack_b0 = lVar1;
    func_0x000107c28988(auStack_a8,lVar2,2);
    if ((char)param_1[0x14] == '\x01') {
      func_0x000107c3194c(param_1 + 1,auStack_c8);
      param_1[4] = lStack_b0;
      func_0x000107c2895c(param_1 + 5,auStack_a8);
    }
    else {
      FUN_10887fff8(param_1 + 1,auStack_c8);
    }
    FUN_10887fe7c(auStack_c8);
    return;
  }
  plVar3 = param_1 + 1;
  if ((char)param_1[0x14] == '\x01') {
    FUN_10887fe7c();
    *(undefined1 *)(plVar3 + 0x13) = 0;
  }
  return;
}



/* Entry: 10887ffd4; end: 10887fff7;  */

void FUN_10887ffd4(long param_1)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    FUN_10887fe7c();
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return;
}



/* Entry: 10887fff8; end: 10888004b;  */

void FUN_10887fff8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = uVar1;
  func_0x000107c28974(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 0x13) = 1;
  return;
}



/* Entry: 10888004c; end: 10888006f;  */

void FUN_10888004c(void)

{
  char in_stack_000000d8;
  
  if (in_stack_000000d8 == '\x01') {
    FUN_10887fe7c();
  }
  return;
}



/* Entry: 108880070; end: 1088804d7;  */

long ** FUN_108880070(undefined **param_1)

{
  undefined **ppuVar1;
  long **pplVar2;
  long *plVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined **ppuStack_340;
  undefined *puStack_338;
  undefined1 *puStack_330;
  code *pcStack_328;
  long *plStack_318;
  long ***ppplStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  long ***ppplStack_290;
  long ***ppplStack_288;
  undefined1 auStack_280 [112];
  char cStack_210;
  undefined1 auStack_208 [24];
  undefined1 *apuStack_1f0 [3];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [112];
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 ***pppuStack_108;
  ulong uStack_100;
  byte bStack_f1;
  long ***ppplStack_f0;
  long ***ppplStack_e8;
  long lStack_e0;
  long ***ppplStack_d8;
  ulong auStack_d0 [3];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [40];
  undefined **ppuStack_88;
  byte bStack_60;
  long **pplStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_d8 = (long ***)&UNK_10f4e9d7a;
  auStack_d0[0] = 0x84;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  plStack_150 = (long *)0x32aaaba7;
  uStack_118 = 0;
  ppuStack_110 = param_1;
  func_0x000107c27958(&pppuStack_108,&ppplStack_d8);
  lStack_e0 = 0;
  ppplStack_f0 = (long ***)&ppplStack_f0;
  ppplStack_e8 = (long ***)&ppplStack_f0;
  func_0x000107c313f4(auStack_1d8,param_1,&UNK_10f4e9dff,0xa1);
  ppplStack_310 = (long ***)&plStack_150;
  uStack_308 = CONCAT71(uStack_308._1_7_,1);
  __ZNSt3__15mutex4lockEv(&plStack_150);
  pppplVar5 = &ppplStack_e8;
  do {
    pppplVar4 = (long ****)*pppplVar5;
    if (pppplVar4 == &ppplStack_f0) {
      func_0x000107c280c4(&ppplStack_310);
      if (-1 < (char)bStack_f1) {
        uStack_100 = (ulong)bStack_f1;
        pppuStack_108 = &pppuStack_108;
      }
      func_0x000107c313f4(&ppplStack_d8,ppuStack_110,pppuStack_108,uStack_100);
      param_1 = &PTR_FUN_110a7fab8;
      ppplStack_d8 = (long ***)&PTR_FUN_110a7fab8;
      pplStack_50 = (long **)0x0;
      func_0x000107c28204(&ppplStack_310);
      pppplVar5 = (long ****)0xa0;
      __Znwm();
      func_0x000107c313fc(pppplVar5 + 2,&ppplStack_d8);
      pppplVar5[1] = (long ***)&ppplStack_f0;
      pppplVar5[2] = (long ***)&PTR_FUN_110a7fab8;
      pppplVar5[0x13] = (long ***)pplStack_50;
      *pppplVar5 = ppplStack_f0;
      ppplStack_f0[1] = (long **)pppplVar5;
      lStack_e0 = lStack_e0 + 1;
      ppplStack_f0 = (long ***)pppplVar5;
      func_0x000107c31400(&ppplStack_d8);
      goto LAB_108880200;
    }
    pppplVar5 = pppplVar4 + 1;
  } while (pppplVar4[0x13] != (long ***)0x0);
  pppplVar5 = (long ****)*pppplVar5;
  if (&ppplStack_f0 != pppplVar5) {
    ppplVar6 = *pppplVar4;
    ppplVar6[1] = (long **)pppplVar5;
    *pppplVar5 = ppplVar6;
    ppplStack_f0[1] = (long **)pppplVar4;
    *pppplVar4 = ppplStack_f0;
    pppplVar4[1] = (long ***)&ppplStack_f0;
    ppplStack_f0 = (long ***)pppplVar4;
  }
LAB_108880200:
  pppplVar5 = (long ****)(ppplStack_f0 + 2);
  ppplStack_f0[0x13] = &plStack_150;
  func_0x000107c2798c(&ppplStack_310);
  auStack_280[0] = 0;
  cStack_210 = '\0';
  ppplStack_290 = (long ***)pppplVar5;
  ppplStack_288 = (long ***)pppplVar5;
  FUN_10888065c(&ppplStack_288);
  ppplStack_d8 = (long ***)0x0;
  auStack_d0[0] = auStack_d0[0] & 0xffffffffffffff00;
  bStack_60 = 0;
  if (cStack_210 == '\0') {
    ppplVar6 = (long ***)0x0;
  }
  else {
    FUN_108880788(auStack_d0,auStack_280);
    FUN_108880764(auStack_280);
    ppplVar6 = ppplStack_d8;
  }
  ppplStack_d8 = ppplStack_288;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_308 = 0;
  ppplStack_310 = (long ***)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  ppplStack_288 = ppplVar6;
  while ((((bStack_60 & 1) != 0 || ((uStack_298 & 1) != 0)) && (ppplStack_d8 != ppplStack_310))) {
    if ((bStack_60 & 1) == 0) {
      ppplVar6 = (long ***)ppplStack_d8[1];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_208,ppplStack_d8 + 0xb);
      func_0x000107c27f54(apuStack_1f0,&UNK_10f2e0451,auStack_208);
      func_0x00010bcc7444(ppplVar6,0x65,apuStack_1f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_1f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
    }
    ppuVar1 = &PTR_PTR_113284418;
    if (ppuStack_88 != (undefined **)0x0) {
      ppuVar1 = ppuStack_88;
    }
    param_1 = (undefined **)(long)*(int *)(ppuVar1 + 8);
    apuStack_1f0[0] = auStack_1d8;
    __ZNSt3__15mutex4lockEv(auStack_1c0);
    func_0x000107c3140c(auStack_1d8,1,param_1);
    func_0x000107c287ac(auStack_1d8,2,auStack_d0);
    func_0x000107c3140c(auStack_1d8,3,uStack_b8);
    func_0x000107c28230(auStack_1d8,4,auStack_b0);
    func_0x000107c3141c(auStack_1d8);
    __ZNSt3__15mutex6unlockEv(auStack_1c0);
    func_0x000107c27e6c(apuStack_1f0);
    FUN_10888065c(&ppplStack_d8);
  }
  FUN_1088807e8();
  FUN_1088805cc(auStack_d0);
  FUN_1088804d8(&ppplStack_290);
  func_0x000107c31400(auStack_1d8);
  pplVar2 = &plStack_150;
  FUN_10888054c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    plStack_318 = (long *)pplVar2;
    func_0x000107c2798c(&ppplStack_310);
    func_0x000107c31400(auStack_1d8);
    FUN_10888054c(&plStack_150);
    pplVar2 = (long **)plStack_318;
    __Unwind_Resume();
    puStack_338 = &UNK_10f2e0451;
    pcStack_328 = FUN_1088804d8;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    pplVar2[1] = (long *)0x0;
    ppuStack_340 = param_1;
    puStack_330 = &stack0xfffffffffffffff0;
    if (*(char *)(pplVar2 + 0x10) != '\0') {
      FUN_108880764(pplVar2 + 2);
    }
    FUN_1088805cc((ulong)&uStack_3c0 | 8);
    plVar3 = *pplVar2;
    *pplVar2 = (long *)0x0;
    func_0x000107c31408(plVar3);
    FUN_1088805cc(pplVar2 + 2);
    return pplVar2;
  }
  return (long **)0x1;
}



/* Entry: 1088804d8; end: 10888054b;  */

undefined8 * FUN_1088804d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
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
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_108880764(param_1 + 2);
  }
  FUN_1088805cc((ulong)&uStack_a0 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_1088805cc(param_1 + 2);
  return param_1;
}



/* Entry: 10888054c; end: 1088805cb;  */

void FUN_10888054c(long param_1)

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



/* Entry: 1088805cc; end: 1088805eb;  */

void FUN_1088805cc(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_1088805ec();
  }
  return;
}



/* Entry: 1088805ec; end: 108880613;  */

long FUN_1088805ec(long param_1)

{
  long lStack_28;
  
  FUN_108929390(param_1 + 0x30);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 108880614; end: 108880617;  */

undefined8 * FUN_108880614(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108880618; end: 10888062b;  */

void FUN_108880618(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10888062c; end: 10888065b;  */

void FUN_10888062c(long param_1)

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



/* Entry: 10888065c; end: 108880763;  */

void FUN_10888065c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [64];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (func_0x000107c3141c(), (int)lVar1 != 0)) {
    lVar2 = *param_1;
    func_0x000107c313f8();
    func_0x000107c2879c(auStack_a0);
    lVar1 = lVar2;
    func_0x000107c313d8(lVar2,1);
    uStack_78 = 2;
    lVar3 = lVar2;
    lStack_88 = lVar1;
    func_0x000107c28228();
    lStack_80 = lVar3;
    FUN_1086adb3c(auStack_70,lVar2,3);
    if ((char)param_1[0xf] == '\x01') {
      func_0x000107c3194c(param_1 + 1,auStack_a0);
      param_1[5] = lStack_80;
      param_1[4] = lStack_88;
      *(undefined1 *)(param_1 + 6) = uStack_78;
      FUN_1086a8024(param_1 + 7,auStack_70);
    }
    else {
      FUN_108880788(param_1 + 1,auStack_a0);
    }
    FUN_1088805ec(auStack_a0);
    return;
  }
  plVar4 = param_1 + 1;
  if ((char)param_1[0xf] == '\x01') {
    FUN_1088805ec();
    *(undefined1 *)(plVar4 + 0xe) = 0;
  }
  return;
}



/* Entry: 108880764; end: 108880787;  */

void FUN_108880764(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_1088805ec();
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



/* Entry: 108880788; end: 1088807e7;  */

void FUN_108880788(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  FUN_1086a7fe8(param_1 + 6,param_2 + 6);
  *(undefined1 *)(param_1 + 0xe) = 1;
  return;
}



/* Entry: 1088807e8; end: 1088807f3;  */

void FUN_1088807e8(void)

{
  if (*(char *)(((ulong)&stack0x00000010 | 8) + 0x70) == '\x01') {
    FUN_1088805ec();
  }
  return;
}



/* Entry: 1088807f4; end: 108880887;  */

long *** FUN_1088807f4(undefined8 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  long **pplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long ***ppplVar8;
  undefined1 auStack_768 [312];
  long ***ppplStack_600;
  undefined1 uStack_5f8;
  byte bStack_4c8;
  long ***ppplStack_4c0;
  long ***ppplStack_4b8;
  undefined1 auStack_4b0 [304];
  char cStack_380;
  undefined1 auStack_378 [24];
  undefined1 *apuStack_360 [3];
  long ***ppplStack_348;
  undefined1 auStack_340 [128];
  long **pplStack_2c0;
  undefined **ppuStack_2a8;
  byte bStack_210;
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [112];
  long **pplStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined8 ***pppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  long ***ppplStack_120;
  long ***ppplStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_b0 [136];
  long lStack_28;
  
  puVar4 = auStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c313f4(auStack_b0,param_1,&UNK_10f4e9ea1,0xa5);
  func_0x000107c28200(auStack_b0);
  func_0x000107c31400();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (long ***)0x1;
  }
  ___stack_chk_fail();
  func_0x000107c31400(auStack_b0);
  __Unwind_Resume();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_4c0 = (long ***)&UNK_10f4e9f47;
  ppplStack_4b8 = (long ***)0x47;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  pplStack_180 = (long **)0x32aaaba7;
  uStack_148 = 0;
  puStack_140 = puVar4;
  func_0x000107c27958(&pppuStack_138,&ppplStack_4c0);
  lStack_110 = 0;
  ppplStack_120 = (long ***)&ppplStack_120;
  ppplStack_118 = (long ***)&ppplStack_120;
  func_0x000107c313f4(auStack_208,puVar4,&UNK_10f4e9f8f,0x77);
  ppplStack_600 = &pplStack_180;
  uStack_5f8 = 1;
  __ZNSt3__15mutex4lockEv(&pplStack_180);
  pppplVar7 = &ppplStack_118;
  do {
    pppplVar6 = (long ****)*pppplVar7;
    if (pppplVar6 == &ppplStack_120) {
      func_0x000107c280c4(&ppplStack_600);
      if (-1 < (char)bStack_121) {
        uStack_130 = (ulong)bStack_121;
        pppuStack_138 = &pppuStack_138;
      }
      func_0x000107c313f4(&ppplStack_348,puStack_140,pppuStack_138,uStack_130);
      ppplStack_348 = (long ***)&PTR_FUN_110a7fb58;
      pplStack_2c0 = (long **)0x0;
      func_0x000107c28204(&ppplStack_600);
      pppplVar7 = (long ****)0xa0;
      __Znwm();
      func_0x000107c313fc(pppplVar7 + 2,&ppplStack_348);
      pppplVar7[1] = (long ***)&ppplStack_120;
      pppplVar7[2] = (long ***)&PTR_FUN_110a7fb58;
      pppplVar7[0x13] = (long ***)pplStack_2c0;
      *pppplVar7 = ppplStack_120;
      ppplStack_120[1] = (long **)pppplVar7;
      lStack_110 = lStack_110 + 1;
      ppplStack_120 = (long ***)pppplVar7;
      func_0x000107c31400(&ppplStack_348);
      goto LAB_108880a10;
    }
    pppplVar7 = pppplVar6 + 1;
  } while (pppplVar6[0x13] != (long ***)0x0);
  pppplVar7 = (long ****)*pppplVar7;
  if (&ppplStack_120 != pppplVar7) {
    ppplVar8 = *pppplVar6;
    ppplVar8[1] = (long **)pppplVar7;
    *pppplVar7 = ppplVar8;
    ppplStack_120[1] = (long **)pppplVar6;
    *pppplVar6 = ppplStack_120;
    pppplVar6[1] = (long ***)&ppplStack_120;
    ppplStack_120 = (long ***)pppplVar6;
  }
LAB_108880a10:
  pppplVar7 = (long ****)(ppplStack_120 + 2);
  ppplStack_120[0x13] = (long **)&pplStack_180;
  func_0x000107c2798c(&ppplStack_600);
  auStack_4b0[0] = 0;
  cStack_380 = '\0';
  ppplStack_4c0 = (long ***)pppplVar7;
  ppplStack_4b8 = (long ***)pppplVar7;
  FUN_108880e60(&ppplStack_4b8);
  ppplStack_348 = (long ***)0x0;
  auStack_340[0] = 0;
  bStack_210 = 0;
  if (cStack_380 == '\0') {
    ppplVar8 = (long ***)0x0;
  }
  else {
    FUN_108880f54(auStack_340,auStack_4b0);
    FUN_108880f30(auStack_4b0);
    ppplVar8 = ppplStack_348;
  }
  ppplStack_348 = ppplStack_4b8;
  ppplStack_4b8 = ppplVar8;
  FUN_108880fa4();
  while ((((bStack_210 & 1) != 0 || ((bStack_4c8 & 1) != 0)) && (ppplStack_348 != ppplStack_600))) {
    if ((bStack_210 & 1) == 0) {
      ppplVar8 = (long ***)ppplStack_348[1];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_378,ppplStack_348 + 0xb);
      func_0x000107c27f54(apuStack_360,&UNK_10f2e0451,auStack_378);
      func_0x00010bcc7444(ppplVar8,0x65,apuStack_360);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_360);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_378);
    }
    ppuVar1 = &PTR_PTR_11327ab60;
    if (ppuStack_2a8 != (undefined **)0x0) {
      ppuVar1 = ppuStack_2a8;
    }
    iVar2 = *(int *)(ppuVar1 + 10);
    iVar3 = *(int *)((long)ppuVar1 + 0x54);
    if (iVar3 != 0 || iVar2 != 0) {
      apuStack_360[0] = auStack_208;
      __ZNSt3__15mutex4lockEv(auStack_1f0);
      func_0x000107c3140c(auStack_208,1,iVar3 != 0);
      func_0x000107c3140c(auStack_208,2,iVar2 != 0);
      func_0x000107c287ac(auStack_208,3,auStack_340);
      func_0x000107c3141c(auStack_208);
      __ZNSt3__15mutex6unlockEv(auStack_1f0);
      func_0x000107c27e6c(apuStack_360);
    }
    FUN_108880e60(&ppplStack_348);
  }
  func_0x000108880fb0();
  FUN_108880dd0(auStack_340);
  FUN_108880ce4(&ppplStack_4c0);
  func_0x000107c31400(auStack_208);
  ppplVar8 = &pplStack_180;
  FUN_108880d50();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    func_0x000107c2798c(&ppplStack_600);
    func_0x000107c31400(auStack_208);
    FUN_108880d50(&pplStack_180);
    __Unwind_Resume();
    FUN_108880fa4();
    ppplVar8[1] = (long **)0x0;
    if (*(char *)(ppplVar8 + 0x28) != '\0') {
      FUN_108880f30(ppplVar8 + 2);
    }
    FUN_108880dd0(auStack_768);
    pplVar5 = *ppplVar8;
    *ppplVar8 = (long **)0x0;
    func_0x000107c31408(pplVar5);
    FUN_108880dd0(ppplVar8 + 2);
    return ppplVar8;
  }
  return (long ***)0x1;
}



/* Entry: 108880888; end: 108880ce3;  */

long *** FUN_108880888(undefined8 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  long **pplVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long ***ppplVar7;
  undefined1 auStack_6b8 [312];
  long ***ppplStack_550;
  undefined1 uStack_548;
  byte bStack_418;
  long ***ppplStack_410;
  long ***ppplStack_408;
  undefined1 auStack_400 [304];
  char cStack_2d0;
  undefined1 auStack_2c8 [24];
  undefined1 *apuStack_2b0 [3];
  long ***ppplStack_298;
  undefined1 auStack_290 [128];
  long **pplStack_210;
  undefined **ppuStack_1f8;
  byte bStack_160;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [112];
  long **pplStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 ***pppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  long ***ppplStack_70;
  long ***ppplStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_410 = (long ***)&UNK_10f4e9f47;
  ppplStack_408 = (long ***)0x47;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  pplStack_d0 = (long **)0x32aaaba7;
  uStack_98 = 0;
  uStack_90 = param_1;
  func_0x000107c27958(&pppuStack_88,&ppplStack_410);
  lStack_60 = 0;
  ppplStack_70 = (long ***)&ppplStack_70;
  ppplStack_68 = (long ***)&ppplStack_70;
  func_0x000107c313f4(auStack_158,param_1,&UNK_10f4e9f8f,0x77);
  ppplStack_550 = &pplStack_d0;
  uStack_548 = 1;
  __ZNSt3__15mutex4lockEv(&pplStack_d0);
  pppplVar6 = &ppplStack_68;
  do {
    pppplVar5 = (long ****)*pppplVar6;
    if (pppplVar5 == &ppplStack_70) {
      func_0x000107c280c4(&ppplStack_550);
      if (-1 < (char)bStack_71) {
        uStack_80 = (ulong)bStack_71;
        pppuStack_88 = &pppuStack_88;
      }
      func_0x000107c313f4(&ppplStack_298,uStack_90,pppuStack_88,uStack_80);
      ppplStack_298 = (long ***)&PTR_FUN_110a7fb58;
      pplStack_210 = (long **)0x0;
      func_0x000107c28204(&ppplStack_550);
      pppplVar6 = (long ****)0xa0;
      __Znwm();
      func_0x000107c313fc(pppplVar6 + 2,&ppplStack_298);
      pppplVar6[1] = (long ***)&ppplStack_70;
      pppplVar6[2] = (long ***)&PTR_FUN_110a7fb58;
      pppplVar6[0x13] = (long ***)pplStack_210;
      *pppplVar6 = ppplStack_70;
      ppplStack_70[1] = (long **)pppplVar6;
      lStack_60 = lStack_60 + 1;
      ppplStack_70 = (long ***)pppplVar6;
      func_0x000107c31400(&ppplStack_298);
      goto LAB_108880a10;
    }
    pppplVar6 = pppplVar5 + 1;
  } while (pppplVar5[0x13] != (long ***)0x0);
  pppplVar6 = (long ****)*pppplVar6;
  if (&ppplStack_70 != pppplVar6) {
    ppplVar7 = *pppplVar5;
    ppplVar7[1] = (long **)pppplVar6;
    *pppplVar6 = ppplVar7;
    ppplStack_70[1] = (long **)pppplVar5;
    *pppplVar5 = ppplStack_70;
    pppplVar5[1] = (long ***)&ppplStack_70;
    ppplStack_70 = (long ***)pppplVar5;
  }
LAB_108880a10:
  pppplVar6 = (long ****)(ppplStack_70 + 2);
  ppplStack_70[0x13] = (long **)&pplStack_d0;
  func_0x000107c2798c(&ppplStack_550);
  auStack_400[0] = 0;
  cStack_2d0 = '\0';
  ppplStack_410 = (long ***)pppplVar6;
  ppplStack_408 = (long ***)pppplVar6;
  FUN_108880e60(&ppplStack_408);
  ppplStack_298 = (long ***)0x0;
  auStack_290[0] = 0;
  bStack_160 = 0;
  if (cStack_2d0 == '\0') {
    ppplVar7 = (long ***)0x0;
  }
  else {
    FUN_108880f54(auStack_290,auStack_400);
    FUN_108880f30(auStack_400);
    ppplVar7 = ppplStack_298;
  }
  ppplStack_298 = ppplStack_408;
  ppplStack_408 = ppplVar7;
  FUN_108880fa4();
  while ((((bStack_160 & 1) != 0 || ((bStack_418 & 1) != 0)) && (ppplStack_298 != ppplStack_550))) {
    if ((bStack_160 & 1) == 0) {
      ppplVar7 = (long ***)ppplStack_298[1];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_2c8,ppplStack_298 + 0xb);
      func_0x000107c27f54(apuStack_2b0,&UNK_10f2e0451,auStack_2c8);
      func_0x00010bcc7444(ppplVar7,0x65,apuStack_2b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_2b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2c8);
    }
    ppuVar1 = &PTR_PTR_11327ab60;
    if (ppuStack_1f8 != (undefined **)0x0) {
      ppuVar1 = ppuStack_1f8;
    }
    iVar2 = *(int *)(ppuVar1 + 10);
    iVar3 = *(int *)((long)ppuVar1 + 0x54);
    if (iVar3 != 0 || iVar2 != 0) {
      apuStack_2b0[0] = auStack_158;
      __ZNSt3__15mutex4lockEv(auStack_140);
      func_0x000107c3140c(auStack_158,1,iVar3 != 0);
      func_0x000107c3140c(auStack_158,2,iVar2 != 0);
      func_0x000107c287ac(auStack_158,3,auStack_290);
      func_0x000107c3141c(auStack_158);
      __ZNSt3__15mutex6unlockEv(auStack_140);
      func_0x000107c27e6c(apuStack_2b0);
    }
    FUN_108880e60(&ppplStack_298);
  }
  func_0x000108880fb0();
  FUN_108880dd0(auStack_290);
  FUN_108880ce4(&ppplStack_410);
  func_0x000107c31400(auStack_158);
  ppplVar7 = &pplStack_d0;
  FUN_108880d50();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x000107c2798c(&ppplStack_550);
    func_0x000107c31400(auStack_158);
    FUN_108880d50(&pplStack_d0);
    __Unwind_Resume();
    FUN_108880fa4();
    ppplVar7[1] = (long **)0x0;
    if (*(char *)(ppplVar7 + 0x28) != '\0') {
      FUN_108880f30(ppplVar7 + 2);
    }
    FUN_108880dd0(auStack_6b8);
    pplVar4 = *ppplVar7;
    *ppplVar7 = (long **)0x0;
    func_0x000107c31408(pplVar4);
    FUN_108880dd0(ppplVar7 + 2);
    return ppplVar7;
  }
  return (long ***)0x1;
}



/* Entry: 108880ce4; end: 108880d4f;  */

undefined8 * FUN_108880ce4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_168 [312];
  
  FUN_108880fa4();
  param_1[1] = 0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_108880f30(param_1 + 2);
  }
  FUN_108880dd0(auStack_168);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_108880dd0(param_1 + 2);
  return param_1;
}



/* Entry: 108880d50; end: 108880dcf;  */

void FUN_108880d50(long param_1)

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



/* Entry: 108880dd0; end: 108880def;  */

void FUN_108880dd0(long param_1)

{
  if (*(char *)(param_1 + 0x130) == '\x01') {
    FUN_108880df0();
  }
  return;
}



/* Entry: 108880df0; end: 108880e17;  */

long FUN_108880df0(long param_1)

{
  long lStack_28;
  
  func_0x000107c2a3a8(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 108880e18; end: 108880e1b;  */

undefined8 * FUN_108880e18(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108880e1c; end: 108880e2f;  */

void FUN_108880e1c(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108880e30; end: 108880e5f;  */

void FUN_108880e30(long param_1)

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



/* Entry: 108880e60; end: 108880f2f;  */

void FUN_108880e60(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [280];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (func_0x000107c3141c(), (int)lVar1 != 0)) {
    lVar1 = *param_1;
    func_0x000107c313f8(lVar1);
    func_0x000107c2879c(auStack_160);
    func_0x000107c2915c(auStack_148,lVar1,1);
    if ((char)param_1[0x27] == '\x01') {
      func_0x000107c3194c(param_1 + 1,auStack_160);
      func_0x000107c28df0(param_1 + 4,auStack_148);
    }
    else {
      FUN_108880f54(param_1 + 1,auStack_160);
    }
    FUN_108880df0(auStack_160);
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[0x27] == '\x01') {
    FUN_108880df0();
    *(undefined1 *)(plVar2 + 0x26) = 0;
  }
  return;
}



/* Entry: 108880f30; end: 108880f53;  */

void FUN_108880f30(long param_1)

{
  if (*(char *)(param_1 + 0x130) == '\x01') {
    FUN_108880df0();
    *(undefined1 *)(param_1 + 0x130) = 0;
  }
  return;
}



/* Entry: 108880f54; end: 108880fa3;  */

void FUN_108880f54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x000107c28dec(param_1 + 3,param_2 + 3);
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}



/* Entry: 108880fa4; end: 108880fbb;  */

void FUN_108880fa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)();
  return;
}



/* Entry: 108880fbc; end: 1088816ff;  */

long ** FUN_108880fbc(undefined8 param_1,undefined8 param_2)

{
  undefined *****pppppuVar1;
  ulong *puVar2;
  long ***ppplVar3;
  byte bVar4;
  undefined *****pppppuVar5;
  long ****pppplVar6;
  long **pplVar7;
  long *plVar8;
  undefined1 *puVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ***ppplVar12;
  undefined1 auStack_a58 [8];
  undefined1 auStack_a50 [432];
  undefined ****ppppuStack_868;
  long ***ppplStack_860;
  undefined1 auStack_858 [7];
  char cStack_851;
  char cStack_6b0;
  undefined ***apppuStack_6a8 [3];
  undefined1 auStack_690 [24];
  ulong uStack_678;
  int iStack_670;
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [16];
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined1 auStack_540 [16];
  undefined1 auStack_530 [16];
  undefined1 uStack_520;
  int iStack_51c;
  undefined1 auStack_518 [24];
  char cStack_500;
  undefined1 auStack_4f8 [24];
  long *plStack_4e0;
  undefined1 auStack_4d8 [432];
  undefined1 auStack_328 [24];
  long **applStack_310 [3];
  undefined1 auStack_2f8 [112];
  long *plStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  ulong uStack_238;
  byte bStack_229;
  long ***ppplStack_228;
  long ***ppplStack_220;
  long lStack_218;
  long ***ppplStack_210;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [112];
  long **pplStack_188;
  undefined1 auStack_e0 [24];
  long ***ppplStack_c8;
  undefined1 uStack_c0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  undefined1 uStack_a0;
  long ***ppplStack_98;
  undefined1 uStack_90;
  undefined1 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [32];
  byte bStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_868 = (undefined ****)&UNK_10f4d5b90;
  ppplStack_860 = (long ***)0x3b;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  plStack_288 = (long *)0x32aaaba7;
  uStack_250 = 0;
  uStack_248 = param_1;
  func_0x000107c27958(&pppuStack_240,&ppppuStack_868);
  lStack_218 = 0;
  ppplStack_228 = (long ***)&ppplStack_228;
  ppplStack_220 = (long ***)&ppplStack_228;
  func_0x000107c31430(&ppppuStack_868,&UNK_10f4be830,0xc,0xb);
  pppppuVar1 = (undefined *****)ppppuStack_868;
  if (-1 < cStack_851) {
    pppppuVar1 = &ppppuStack_868;
  }
  pppppuVar5 = pppppuVar1;
  _strlen(pppppuVar1);
  func_0x000107c313f4(applStack_310,param_1,pppppuVar1,pppppuVar5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_868);
  applStack_310[0] = (long **)&PTR_FUN_110a7fbf8;
  func_0x000107c29ef4(auStack_4f8,param_2);
  plStack_4e0 = (long *)&plStack_288;
  auStack_4d8[0] = 1;
  __ZNSt3__15mutex4lockEv(&plStack_288);
  pppplVar11 = &ppplStack_220;
  do {
    pppplVar10 = (long ****)*pppplVar11;
    if (pppplVar10 == &ppplStack_228) {
      func_0x000107c280c4(&plStack_4e0);
      if (-1 < (char)bStack_229) {
        uStack_238 = (ulong)bStack_229;
        pppuStack_240 = &pppuStack_240;
      }
      func_0x000107c313f4(&ppplStack_210,uStack_248,pppuStack_240,uStack_238);
      ppplStack_210 = (long ***)&PTR_FUN_110a7fc38;
      pplStack_188 = (long **)0x0;
      func_0x000107c28204(&plStack_4e0);
      pppplVar11 = (long ****)0xa0;
      __Znwm();
      func_0x000107c313fc(pppplVar11 + 2,&ppplStack_210);
      pppplVar11[1] = (long ***)&ppplStack_228;
      pppplVar11[2] = (long ***)&PTR_FUN_110a7fc38;
      pppplVar11[0x13] = (long ***)pplStack_188;
      *pppplVar11 = ppplStack_228;
      ppplStack_228[1] = (long **)pppplVar11;
      lStack_218 = lStack_218 + 1;
      ppplStack_228 = (long ***)pppplVar11;
      func_0x000107c31400(&ppplStack_210);
      goto LAB_1088811a4;
    }
    pppplVar11 = pppplVar10 + 1;
  } while (pppplVar10[0x13] != (long ***)0x0);
  pppplVar11 = (long ****)*pppplVar11;
  if (&ppplStack_228 != pppplVar11) {
    ppplVar12 = *pppplVar10;
    ppplVar12[1] = (long **)pppplVar11;
    *pppplVar11 = ppplVar12;
    ppplStack_228[1] = (long **)pppplVar10;
    *pppplVar10 = ppplStack_228;
    pppplVar10[1] = (long ***)&ppplStack_228;
    ppplStack_228 = (long ***)pppplVar10;
  }
LAB_1088811a4:
  pppplVar11 = (long ****)(ppplStack_228 + 2);
  ppplStack_228[0x13] = &plStack_288;
  func_0x000107c2798c(&plStack_4e0);
  func_0x000107c287a8(pppplVar11,auStack_4f8);
  auStack_858[0] = 0;
  cStack_6b0 = '\0';
  pppplVar10 = pppplVar11;
  ppppuStack_868 = (undefined ****)pppplVar11;
  ppplStack_860 = (long ***)pppplVar11;
  func_0x000107c3141c();
  if ((int)pppplVar10 == 0) {
    func_0x0001088818ac(auStack_858);
  }
  else {
    func_0x000107c313f8();
    func_0x000107c2879c(&ppplStack_210);
    func_0x000107c2915c(auStack_1f8,pppplVar11,1);
    func_0x000107c313dc(auStack_e0,pppplVar11,2);
    uStack_c0 = 3;
    pppplVar10 = pppplVar11;
    func_0x000107c28228();
    pppplVar6 = pppplVar11;
    ppplStack_c8 = (long ***)pppplVar10;
    func_0x000107c313d8(pppplVar11,4);
    pppplVar10 = pppplVar11;
    ppplStack_b8 = (long ***)pppplVar6;
    func_0x000107c313d8(pppplVar11,5);
    uStack_a0 = 6;
    pppplVar6 = pppplVar11;
    ppplStack_b0 = (long ***)pppplVar10;
    func_0x000107c28228();
    uStack_90 = 7;
    pppplVar10 = pppplVar11;
    ppplStack_a8 = (long ***)pppplVar6;
    func_0x000107c28228();
    pppplVar6 = pppplVar11;
    ppplStack_98 = (long ***)pppplVar10;
    func_0x000107c287bc(pppplVar11,8);
    uStack_88 = SUB81(pppplVar6,0);
    pppplVar10 = pppplVar11;
    func_0x000107c313d8(pppplVar11,9);
    uStack_84 = SUB84(pppplVar10,0);
    func_0x000107c28928(auStack_80,pppplVar11,10);
    func_0x0001088818d0(auStack_858,&ppplStack_210);
    FUN_108881818(&ppplStack_210);
  }
  ppplStack_210 = (long ***)0x0;
  pppplVar11 = &ppplStack_210;
  auStack_208[0] = 0;
  bStack_60 = 0;
  if (cStack_6b0 == '\0') {
    ppplVar12 = (long ***)0x0;
  }
  else {
    func_0x0001088818d0(auStack_208,auStack_858);
    func_0x0001088818ac(auStack_858);
    ppplVar12 = ppplStack_210;
  }
  bVar4 = bStack_60;
  ppplVar3 = ppplStack_860;
  ppplStack_210 = ppplStack_860;
  puVar9 = (undefined1 *)0x1b8;
  ppplStack_860 = ppplVar12;
  _bzero(&plStack_4e0);
  if ((bVar4 & 1) == 0) {
    FUN_108881774(auStack_4d8);
  }
  else {
    FUN_108881774(auStack_4d8);
    if ((long ****)ppplVar3 != (long ****)0x0) {
      if ((bStack_60 & 1) == 0) {
        ppplVar12 = (long ***)ppplStack_210[1];
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_328,ppplStack_210 + 0xb);
        func_0x000107c27f54(&plStack_4e0,&UNK_10f2e0451,auStack_328);
        func_0x00010bcc7444(ppplVar12,0x65,&plStack_4e0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_4e0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_328);
      }
      puVar9 = auStack_208;
      FUN_1088818ec(apppuStack_6a8);
      cStack_500 = '\x01';
      goto LAB_1088813b0;
    }
  }
  cStack_500 = '\0';
  apppuStack_6a8[0]._0_1_ = 0;
LAB_1088813b0:
  FUN_108881774(auStack_208);
  FUN_108881700(&ppppuStack_868);
  if ((cStack_500 == '\x01') && (1 < iStack_670)) {
    pppplVar11 = (long ****)apppuStack_6a8;
    puVar2 = &uStack_678;
    if ((uStack_678 & 1) != 0) {
      puVar2 = (ulong *)(uStack_678 + 7);
    }
    FUN_1086aaad0(&ppppuStack_868,*puVar2);
    func_0x000107c29ee4(&ppplStack_210,param_2);
    FUN_1086a505c(&ppppuStack_868);
    func_0x000107c287d0();
    func_0x000107c2a2e0(&ppplStack_210);
    func_0x000107c2a170(&uStack_678);
    FUN_1086a9d54(&uStack_678);
    func_0x0001088f65f0();
    ppplStack_210 = applStack_310;
    __ZNSt3__15mutex4lockEv(auStack_2f8);
    func_0x000107c287ac(applStack_310,1,apppuStack_6a8);
    FUN_10885da34(applStack_310,2,auStack_690);
    func_0x000107c2820c(applStack_310,3,auStack_578);
    func_0x000107c28230(applStack_310,4,auStack_560);
    func_0x000107c3140c(applStack_310,5,uStack_550);
    func_0x000107c3140c(applStack_310,6,uStack_548);
    func_0x000107c28230(applStack_310,7,auStack_540);
    func_0x000107c28230(applStack_310,8,auStack_530);
    func_0x000107c3140c(applStack_310,9,uStack_520);
    func_0x000107c3140c(applStack_310,10,(long)iStack_51c);
    puVar9 = (undefined1 *)0xb;
    FUN_10885da70(applStack_310,0xb,auStack_518);
    func_0x000107c3141c(applStack_310);
    __ZNSt3__15mutex6unlockEv(auStack_2f8);
    func_0x000107c27e6c(&ppplStack_210);
    func_0x000107c2a3ec(&ppppuStack_868);
  }
  FUN_108881774(apppuStack_6a8);
  func_0x000107c27914(auStack_4f8);
  func_0x000107c31400(applStack_310);
  pplVar7 = &plStack_288;
  FUN_108881798();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_4e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_328);
    FUN_108881774(pppplVar11 + 1);
    FUN_108881700(&ppppuStack_868);
    func_0x000107c27914(auStack_4f8);
    func_0x000107c31400(applStack_310);
    FUN_108881798(&plStack_288);
    do {
      __Unwind_Resume();
    } while ((int)puVar9 == 0);
    func_0x000104bd46a0();
    _bzero(auStack_a58,0x1b8);
    pplVar7[1] = (long *)0x0;
    if (*(char *)(pplVar7 + 0x37) != '\0') {
      func_0x0001088818ac(pplVar7 + 2);
    }
    FUN_108881774(auStack_a50);
    plVar8 = *pplVar7;
    *pplVar7 = (long *)0x0;
    func_0x000107c31408(plVar8);
    FUN_108881774(pplVar7 + 2);
    return pplVar7;
  }
  return (long **)0x1;
}



/* Entry: 108881700; end: 108881773;  */

undefined8 * FUN_108881700(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [432];
  
  _bzero(auStack_1e8,0x1b8);
  param_1[1] = 0;
  if (*(char *)(param_1 + 0x37) != '\0') {
    FUN_1088818ac(param_1 + 2);
  }
  FUN_108881774(auStack_1e0);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_108881774(param_1 + 2);
  return param_1;
}



/* Entry: 108881774; end: 108881793;  */

void FUN_108881774(long param_1)

{
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    FUN_108881818();
  }
  return;
}



/* Entry: 108881794; end: 108881797;  */

undefined8 * FUN_108881794(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108881798; end: 108881817;  */

void FUN_108881798(long param_1)

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



/* Entry: 108881818; end: 10888184f;  */

long FUN_108881818(long param_1)

{
  long lStack_28;
  
  func_0x000107c27a04(param_1 + 400);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x130);
  func_0x000107c2a3a8(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 108881850; end: 108881863;  */

void FUN_108881850(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108881864; end: 108881867;  */

undefined8 * FUN_108881864(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108881868; end: 10888187b;  */

void FUN_108881868(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10888187c; end: 1088818ab;  */

void FUN_10888187c(long param_1)

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



/* Entry: 1088818ac; end: 1088818eb;  */

void FUN_1088818ac(long param_1)

{
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    FUN_108881818();
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
  return;
}



/* Entry: 1088818ec; end: 108881983;  */

undefined8 * FUN_1088818ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x000107c28dec(param_1 + 3,param_2 + 3);
  uVar2 = param_2[0x27];
  uVar1 = param_2[0x26];
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar2;
  param_1[0x26] = uVar1;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  _memcpy(param_1 + 0x29,param_2 + 0x29,0x48);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  uVar1 = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x32] = uVar1;
  param_1[0x34] = param_2[0x34];
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return param_1;
}



/* Entry: 108881984; end: 10888198f;  */

void FUN_108881984(void)

{
  return;
}



/* Entry: 108881990; end: 1088819ef;  */

undefined1 * FUN_108881990(undefined1 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  param_1[0x28] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x38) = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 0x40);
  param_1[0x68] = 1;
  param_1[0x70] = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return param_1;
}



/* Entry: 1088819f0; end: 108881a2f;  */

int FUN_1088819f0(long param_1,undefined8 param_2)

{
  undefined1 auStack_28 [20];
  int iStack_14;
  
  iStack_14 = *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x74) = iStack_14 + 1;
  FUN_108881a30(auStack_28,param_1 + 0x78,&iStack_14,param_2);
  return iStack_14;
}



/* Entry: 108881a30; end: 108881a6b;  */

void FUN_108881a30(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_108882308(&uStack_30);
  *param_1 = uStack_30;
  *(undefined1 *)(param_1 + 1) = uStack_28;
  return;
}



/* Entry: 108881a6c; end: 108881a8f;  */

void FUN_108881a6c(long param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_108882930(param_1 + 0x78,&uStack_14);
  return;
}



/* Entry: 108881a90; end: 108881abb;  */

undefined1 * FUN_108881a90(undefined1 *param_1,undefined8 param_2)

{
  FUN_108881abc();
  *param_1 = 0;
  param_1[0x20] = 0;
  FUN_108881ddc(param_1,param_2);
  return param_1;
}



/* Entry: 108881abc; end: 108881c73;  */

void FUN_108881abc(code **param_1,code **param_2)

{
  undefined1 uVar1;
  code **ppcVar2;
  code **ppcVar3;
  code *pcVar4;
  code **unaff_x20;
  undefined1 auStack_158 [40];
  code **ppcStack_130;
  code **ppcStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined1 auStack_110 [40];
  undefined1 auStack_e8 [32];
  undefined1 uStack_c8;
  undefined1 auStack_c0 [32];
  char cStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [40];
  code *pcStack_68;
  undefined **ppuStack_60;
  code **ppcStack_58;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(char *)(param_1 + 0xd) == '\x01';
  if (((!(bool)uVar1) || (((ulong)param_1[0xe] & 1) != 0)) || (((ulong)param_1[4] & 1) != 0))
  goto LAB_108881bf8;
  *(undefined1 *)(param_1 + 0xe) = 1;
  pcStack_68 = FUN_108882b28;
  ppuStack_60 = &PTR_DAT_110a7fd40;
  unaff_x20 = param_1 + 8;
  pcStack_98 = param_1[7];
  param_2 = unaff_x20;
  ppcStack_58 = param_1;
  (**(code **)(*unaff_x20 + 0x10))(auStack_90);
  uVar1 = *(char *)(param_1 + 0xd) == '\x01';
  if ((bool)uVar1) {
    (**(code **)param_1[8])(unaff_x20);
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  (*pcStack_98)(auStack_c0,&pcStack_98);
  if (((ulong)param_1[4] & 1) == 0) {
    uVar1 = 0;
    if (cStack_a0 == '\x01') {
      FUN_108739e4c(param_1,auStack_c0);
      *(undefined1 *)(param_1 + 4) = 1;
      pcVar4 = (code *)(ulong)*(uint *)(param_1 + 3);
      uVar1 = *(uint *)(param_1 + 3) == 0xffffffff;
      if ((bool)uVar1) {
        pcVar4 = (code *)0xffffffffffffffff;
      }
      param_1[5] = pcVar4;
      *(undefined1 *)(param_1 + 6) = 1;
      goto LAB_108881bb0;
    }
  }
  else {
LAB_108881bb0:
    auStack_e8[0] = 0;
    uStack_c8 = 0;
    FUN_1088822ec(auStack_110,param_1);
    param_2 = (code **)auStack_e8;
    FUN_108881d54(param_1,param_2,auStack_110);
    func_0x000108739e00(auStack_110);
    func_0x000108739e00(auStack_e8);
  }
  func_0x000108739e00(auStack_c0);
  func_0x000108882bb8();
  param_1 = &pcStack_68;
  func_0x000107c281f0();
LAB_108881bf8:
  func_0x000108882c08(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108739e00(auStack_110);
  func_0x000108739e00(auStack_e8);
  func_0x000108739e00(auStack_c0);
  func_0x000108882bb8();
  func_0x000107c281f0(&pcStack_68);
  func_0x000108882ba0();
  ppcVar2 = param_1;
  func_0x000104bd46a0();
  pcStack_118 = FUN_108881c74;
  ppcStack_130 = unaff_x20;
  ppcStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  FUN_108881abc();
  if (*(char *)(param_2 + 4) == '\x01') {
    pcVar4 = (code *)(ulong)*(uint *)(param_2 + 3);
    if (*(uint *)(param_2 + 3) == 0xffffffff) {
      pcVar4 = (code *)0xffffffffffffffff;
    }
    if (*(char *)(ppcVar2 + 6) == '\x01') {
      if (pcVar4 != ppcVar2[5]) {
        return;
      }
    }
    else {
      ppcVar2[5] = pcVar4;
      *(undefined1 *)(ppcVar2 + 6) = 1;
    }
  }
  ppcVar3 = ppcVar2;
  FUN_108881d38(ppcVar2,param_2);
  if ((int)ppcVar3 != 0) {
    FUN_108881da0(auStack_158,ppcVar2);
    func_0x000108881fa4(ppcVar2,param_2);
    if (((ulong)ppcVar2[0xe] & 1) == 0) {
      FUN_108881d54(ppcVar2,auStack_158,param_2);
    }
    func_0x000108739e00(auStack_158);
  }
  return;
}



/* Entry: 108881c74; end: 108881d37;  */

void FUN_108881c74(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_48 [40];
  
  FUN_108881abc();
  if (*(char *)(param_2 + 0x20) == '\x01') {
    uVar2 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(uint *)(param_2 + 0x18) == 0xffffffff) {
      uVar2 = 0xffffffffffffffff;
    }
    if (*(char *)(param_1 + 0x30) == '\x01') {
      if (uVar2 != *(ulong *)(param_1 + 0x28)) {
        return;
      }
    }
    else {
      *(ulong *)(param_1 + 0x28) = uVar2;
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
  }
  lVar1 = param_1;
  FUN_108881d38(param_1,param_2);
  if ((int)lVar1 != 0) {
    FUN_108881da0(auStack_48,param_1);
    func_0x000108881fa4(param_1,param_2);
    if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
      FUN_108881d54(param_1,auStack_48,param_2);
    }
    func_0x000108739e00(auStack_48);
  }
  return;
}



/* Entry: 108881d38; end: 108881d53;  */

undefined1 ** FUN_108881d38(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 **ppuVar3;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  cVar2 = *(char *)(param_1 + 0x20);
  if (cVar2 != *(char *)(param_2 + 0x20) || cVar2 == '\0') {
    return (undefined1 **)(ulong)(cVar2 != *(char *)(param_2 + 0x20));
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  ppuVar3 = (undefined1 **)(ulong)(*(uint *)(param_2 + 0x18) != uVar1);
  if (uVar1 != 0xffffffff && *(uint *)(param_2 + 0x18) == uVar1) {
    puStack_18 = &uStack_19;
    ppuVar3 = &puStack_18;
    (*(code *)(&PTR_FUN_110a7fcf0)[uVar1])(ppuVar3,param_1);
  }
  return ppuVar3;
}



/* Entry: 108881d54; end: 108881d9f;  */

void FUN_108881d54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  for (lVar2 = *(long *)(param_1 + 0x80) * 0x28; lVar2 != 0; lVar2 = lVar2 + -0x28) {
    FUN_108882b4c(lVar1 + 8,param_2,param_3);
    lVar1 = lVar1 + 0x28;
  }
  return;
}



/* Entry: 108881da0; end: 108881ddb;  */

undefined1 * FUN_108881da0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  FUN_108881ddc();
  return param_1;
}



/* Entry: 108881ddc; end: 108881def;  */

void FUN_108881ddc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_108881e0c();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 108881df0; end: 108881e0b;  */

void FUN_108881df0(long param_1)

{
  FUN_108881e0c();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 108881e0c; end: 108881e4b;  */

undefined1 * FUN_108881e0c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_108881e4c();
  return param_1;
}



/* Entry: 108881e4c; end: 108881e9f;  */

void FUN_108881e4c(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_108739ed8();
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_FUN_110a7fcc8)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 108881ea0; end: 108881eeb;  */

void FUN_108881ea0(undefined8 *param_1,undefined1 *param_2)

{
  *(undefined1 *)*param_1 = *param_2;
  return;
}



/* Entry: 108881eec; end: 108881f43;  */

void FUN_108881eec(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0xffffffff && *(uint *)(param_2 + 0x18) == uVar1) {
    puStack_18 = &uStack_19;
    (*(code *)(&PTR_FUN_110a7fcf0)[uVar1])(&puStack_18,param_1);
  }
  return;
}



/* Entry: 108881f44; end: 108881f6f;  */

bool FUN_108881f44(undefined8 param_1,char *param_2,char *param_3)

{
  return *param_2 != *param_3;
}



/* Entry: 108881f70; end: 108881f8f;  */

uint FUN_108881f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c278d0(param_2,param_3);
  return (uint)param_2 ^ 1;
}



/* Entry: 108881f90; end: 108881fcb;  */

bool FUN_108881f90(undefined8 param_1,double *param_2,double *param_3)

{
  return *param_2 != *param_3;
}



/* Entry: 108881fcc; end: 108881ffb;  */

void FUN_108881fcc(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_108739ed8();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 108881ffc; end: 108882057;  */

void FUN_108881ffc(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  if (*(int *)(param_1 + 0x18) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110a69ed8)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_110a7fd18)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 108882058; end: 108882073;  */

void FUN_108882058(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (*(int *)(*param_1 + 0x18) != 0) {
    func_0x000108882bd8();
    FUN_1088820a4();
    return;
  }
  *param_2 = *param_3;
  return;
}



/* Entry: 108882074; end: 1088820a3;  */

void FUN_108882074(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x000108882bd8();
    FUN_1088820a4();
    return;
  }
  *param_2 = *param_3;
  return;
}



/* Entry: 1088820a4; end: 1088820af;  */

void FUN_1088820a4(undefined8 *param_1)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  FUN_108882b6c(*param_1,param_1[1]);
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 1088820b0; end: 1088820d7;  */

void FUN_1088820b0(void)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  FUN_108882b6c();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 1088820d8; end: 1088820df;  */

void FUN_1088820d8(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(*param_1 + 0x18) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x000108882bd8();
  FUN_108882114();
  return;
}



/* Entry: 1088820e0; end: 108882113;  */

void FUN_1088820e0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0x18) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x000108882bd8();
  FUN_108882114();
  return;
}



/* Entry: 108882114; end: 10888211f;  */

void FUN_108882114(undefined8 *param_1)

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  FUN_108882b6c(*param_1,param_1[1]);
  *unaff_x20 = *unaff_x19;
  func_0x000108882bfc(1);
  return;
}



/* Entry: 108882120; end: 108882147;  */

void FUN_108882120(void)

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  FUN_108882b6c();
  *unaff_x20 = *unaff_x19;
  func_0x000108882bfc(1);
  return;
}



/* Entry: 108882148; end: 10888214f;  */

void FUN_108882148(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(*param_1 + 0x18) == 2) {
    *param_2 = *param_3;
    return;
  }
  func_0x000108882bd8();
  FUN_108882184();
  return;
}



/* Entry: 108882150; end: 108882183;  */

void FUN_108882150(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(param_1 + 0x18) == 2) {
    *param_2 = *param_3;
    return;
  }
  func_0x000108882bd8();
  FUN_108882184();
  return;
}



/* Entry: 108882184; end: 10888218f;  */

void FUN_108882184(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_108882b6c(*param_1,param_1[1]);
  *unaff_x20 = *unaff_x19;
  func_0x000108882bfc(2);
  return;
}



/* Entry: 108882190; end: 1088821b7;  */

void FUN_108882190(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_108882b6c();
  *unaff_x20 = *unaff_x19;
  func_0x000108882bfc(2);
  return;
}



/* Entry: 1088821b8; end: 1088821bf;  */

void FUN_1088821b8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*param_1 + 0x18) == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )(param_2,param_3);
    return;
  }
  func_0x000108882bd8();
  FUN_1088821f4();
  return;
}



/* Entry: 1088821c0; end: 1088821f3;  */

void FUN_1088821c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x18) == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )(param_2,param_3);
    return;
  }
  func_0x000108882bd8();
  FUN_1088821f4();
  return;
}



/* Entry: 1088821f4; end: 108882243;  */

void FUN_1088821f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_38,param_1[1]);
  FUN_108882244(uVar1,auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 108882244; end: 10888227b;  */

void FUN_108882244(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_108882b6c();
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  unaff_x20[2] = unaff_x19[2];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  func_0x000108882bfc(3);
  return;
}



/* Entry: 10888227c; end: 108882283;  */

void FUN_10888227c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(*param_1 + 0x18) == 4) {
    *param_2 = *param_3;
    return;
  }
  func_0x000108882bd8();
  FUN_1088822b8();
  return;
}



/* Entry: 108882284; end: 1088822b7;  */

void FUN_108882284(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(param_1 + 0x18) == 4) {
    *param_2 = *param_3;
    return;
  }
  func_0x000108882bd8();
  FUN_1088822b8();
  return;
}



/* Entry: 1088822b8; end: 1088822c3;  */

void FUN_1088822b8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_108882b6c(*param_1,param_1[1]);
  *unaff_x20 = *unaff_x19;
  func_0x000108882bfc(4);
  return;
}



/* Entry: 1088822c4; end: 1088822eb;  */

void FUN_1088822c4(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_108882b6c();
  *unaff_x20 = *unaff_x19;
  func_0x000108882bfc(4);
  return;
}



/* Entry: 1088822ec; end: 108882307;  */

void FUN_1088822ec(long param_1)

{
  FUN_108881e0c();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 108882308; end: 10888238b;  */

void FUN_108882308(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *extraout_x8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1088823e8(auStack_60);
  FUN_10888238c(param_1,param_2,auStack_60);
  func_0x00010873a5b4();
  func_0x000108882c08(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    iVar1 = (int)auStack_58;
    func_0x00010873a5b4();
    func_0x000108882ba0();
    func_0x000108882bf0();
    uStack_98 = 0;
    FUN_108882470();
    *(char *)(extraout_x8 + 1) = (char)iVar1;
    if (iVar1 != 0) {
      func_0x0001088824b0(&uStack_a0,auStack_60,&uStack_98,param_1);
      uStack_98 = uStack_a0;
    }
    *extraout_x8 = uStack_98;
    return;
  }
  return;
}



/* Entry: 10888238c; end: 1088823e7;  */

void FUN_10888238c(int param_1)

{
  undefined8 *extraout_x8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000108882bf0();
  uStack_38 = 0;
  FUN_108882470();
  *(char *)(extraout_x8 + 1) = (char)param_1;
  if (param_1 != 0) {
    func_0x0001088824b0(&uStack_40);
    uStack_38 = uStack_40;
  }
  *extraout_x8 = uStack_38;
  return;
}



/* Entry: 1088823e8; end: 108882413;  */

undefined4 * FUN_1088823e8(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  FUN_108882414(param_1 + 2,param_3);
  return param_1;
}



/* Entry: 108882414; end: 10888246f;  */

long FUN_108882414(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 108882470; end: 1088824cb;  */

void FUN_108882470(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *param_1;
  lStack_20 = lStack_18 + param_1[1] * 0x28;
  FUN_1088824cc(param_1,&lStack_18,&lStack_20,param_2,param_3);
  return;
}



/* Entry: 1088824cc; end: 108882537;  */

bool FUN_1088824cc(undefined8 param_1,undefined8 *param_2,long *param_3,uint *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  
  uVar1 = *param_4;
  puVar4 = (uint *)*param_2;
  uVar3 = (*param_3 - (long)*param_2) / 0x28;
  while (puVar2 = puVar4, uVar3 != 0) {
    uVar5 = uVar3 >> 1;
    puVar4 = puVar2 + uVar5 * 10 + 10;
    uVar3 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
    if (uVar1 <= puVar2[uVar5 * 10]) {
      puVar4 = puVar2;
      uVar3 = uVar5;
    }
  }
  *param_5 = puVar2;
  if (puVar2 == (uint *)*param_3) {
    return true;
  }
  return uVar1 < *puVar2;
}



/* Entry: 108882538; end: 108882553;  */

void FUN_108882538(void)

{
  func_0x000108882bc8();
  FUN_108882554();
  return;
}



/* Entry: 108882554; end: 10888255f;  */

undefined8 * FUN_108882554(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_78;
  long *plStack_70;
  ulong uStack_68;
  
  puVar7 = (undefined8 *)*param_3;
  lVar8 = param_2[1];
  if (param_2[2] != lVar8) {
    lVar9 = *param_2;
    puVar3 = (undefined8 *)(lVar9 + lVar8 * 0x28);
    if (puVar3 == puVar7) {
      FUN_1088827c8(puVar3,param_4);
      param_2[1] = param_2[1] + 1;
    }
    else {
      FUN_1088827c8(puVar3,puVar3 + -5);
      param_2[1] = param_2[1] + 1;
      for (lVar8 = lVar9 + lVar8 * 0x28 + -0x50; (undefined8 *)(lVar8 + 0x28) != puVar7;
          lVar8 = lVar8 + -0x28) {
        func_0x0001088827f0((undefined8 *)(lVar8 + 0x28),lVar8);
      }
      func_0x0001088827f0(puVar7,param_4);
      puVar3 = puVar7;
    }
    *param_1 = *param_3;
    return puVar3;
  }
  uVar2 = param_2[2];
  uVar1 = param_2[1] + 1;
  if (uVar1 - uVar2 <= 0x333333333333333 - uVar2) {
    if (uVar2 >> 0x3d == 0) {
      uVar6 = (uVar2 << 3) / 5;
    }
    else {
      uVar6 = uVar2 << 3;
      if (4 < uVar2 >> 0x3d) {
        uVar6 = 0xffffffffffffffff;
      }
    }
    if (0x333333333333332 < uVar6) {
      uVar6 = 0x333333333333333;
    }
    uVar2 = uVar1;
    if (uVar1 <= uVar6) {
      uVar2 = uVar6;
    }
    if (uVar1 < 0x333333333333334) {
      lVar10 = *param_2;
      lVar4 = uVar2 * 0x28;
      __Znwm();
      lVar8 = *param_2;
      lVar9 = param_2[1];
      lVar5 = lVar8;
      plStack_70 = param_2;
      uStack_68 = uVar2;
      FUN_1088828c4(lVar8,puVar7,lVar4);
      FUN_1088827c8();
      FUN_1088828c4(puVar7,lVar8 + lVar9 * 0x28,lVar5 + 0x28);
      uStack_78 = 0;
      if (lVar8 != 0) {
        FUN_10873a584(param_2,lVar8,param_2[1]);
        __ZdlPv(*param_2);
      }
      *param_2 = lVar4;
      param_2[1] = param_2[1] + 1;
      param_2[2] = uVar2;
      puVar3 = &uStack_78;
      FUN_108882908(puVar3);
      *param_1 = (long)puVar7 + (*param_2 - lVar10);
      return puVar3;
    }
  }
  func_0x00010772e1f8();
  puVar7 = &uStack_78;
  FUN_108882908();
  func_0x000108882ba0();
  *(int *)puVar7 = (int)*param_2;
  FUN_108882414(puVar7 + 1,param_2 + 1);
  return puVar7;
}



/* Entry: 108882560; end: 10888265b;  */

undefined8 *
FUN_108882560(long *param_1,long *param_2,long *param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_78;
  long *plStack_70;
  ulong uStack_68;
  
  puVar7 = (undefined8 *)*param_3;
  lVar8 = param_2[1];
  if (param_4 <= (ulong)(param_2[2] - lVar8)) {
    lVar9 = *param_2;
    puVar3 = (undefined8 *)(lVar9 + lVar8 * 0x28);
    if (puVar3 == puVar7) {
      FUN_1088827c8(puVar3,param_5);
      param_2[1] = param_2[1] + 1;
    }
    else {
      FUN_1088827c8(puVar3,puVar3 + -5);
      param_2[1] = param_2[1] + 1;
      for (lVar8 = lVar9 + lVar8 * 0x28 + -0x50; (undefined8 *)(lVar8 + 0x28) != puVar7;
          lVar8 = lVar8 + -0x28) {
        func_0x0001088827f0((undefined8 *)(lVar8 + 0x28),lVar8);
      }
      func_0x0001088827f0(puVar7,param_5);
      puVar3 = puVar7;
    }
    *param_1 = *param_3;
    return puVar3;
  }
  uVar2 = param_2[2];
  uVar1 = param_2[1] + param_4;
  if (uVar1 - uVar2 <= 0x333333333333333 - uVar2) {
    if (uVar2 >> 0x3d == 0) {
      uVar6 = (uVar2 << 3) / 5;
    }
    else {
      uVar6 = uVar2 << 3;
      if (4 < uVar2 >> 0x3d) {
        uVar6 = 0xffffffffffffffff;
      }
    }
    if (0x333333333333332 < uVar6) {
      uVar6 = 0x333333333333333;
    }
    uVar2 = uVar1;
    if (uVar1 <= uVar6) {
      uVar2 = uVar6;
    }
    if (uVar1 < 0x333333333333334) {
      lVar10 = *param_2;
      lVar4 = uVar2 * 0x28;
      __Znwm();
      lVar8 = *param_2;
      lVar9 = param_2[1];
      lVar5 = lVar8;
      plStack_70 = param_2;
      uStack_68 = uVar2;
      FUN_1088828c4(lVar8,puVar7,lVar4);
      FUN_1088827c8();
      FUN_1088828c4(puVar7,lVar8 + lVar9 * 0x28,lVar5 + param_4 * 0x28);
      uStack_78 = 0;
      if (lVar8 != 0) {
        FUN_10873a584(param_2,lVar8,param_2[1]);
        __ZdlPv(*param_2);
      }
      *param_2 = lVar4;
      param_2[1] = param_2[1] + param_4;
      param_2[2] = uVar2;
      puVar3 = &uStack_78;
      FUN_108882908(puVar3);
      *param_1 = (long)puVar7 + (*param_2 - lVar10);
      return puVar3;
    }
  }
  func_0x00010772e1f8();
  puVar7 = &uStack_78;
  FUN_108882908();
  func_0x000108882ba0();
  *(int *)puVar7 = (int)*param_2;
  FUN_108882414(puVar7 + 1,param_2 + 1);
  return puVar7;
}



/* Entry: 10888265c; end: 1088827c7;  */

undefined8 * FUN_10888265c(long *param_1,long *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_78;
  long *plStack_70;
  ulong uStack_68;
  
  uVar3 = param_2[2];
  uVar1 = param_2[1] + param_4;
  if (uVar1 - uVar3 <= 0x333333333333333 - uVar3) {
    if (uVar3 >> 0x3d == 0) {
      uVar8 = (uVar3 << 3) / 5;
    }
    else {
      uVar8 = uVar3 << 3;
      if (4 < uVar3 >> 0x3d) {
        uVar8 = 0xffffffffffffffff;
      }
    }
    if (0x333333333333332 < uVar8) {
      uVar8 = 0x333333333333333;
    }
    uVar3 = uVar1;
    if (uVar1 <= uVar8) {
      uVar3 = uVar8;
    }
    if (uVar1 < 0x333333333333334) {
      lVar9 = *param_2;
      lVar5 = uVar3 * 0x28;
      __Znwm();
      lVar2 = *param_2;
      lVar4 = param_2[1];
      lVar6 = lVar2;
      plStack_70 = param_2;
      uStack_68 = uVar3;
      FUN_1088828c4(lVar2,param_3,lVar5);
      FUN_1088827c8();
      FUN_1088828c4(param_3,lVar2 + lVar4 * 0x28,lVar6 + param_4 * 0x28);
      uStack_78 = 0;
      if (lVar2 != 0) {
        FUN_10873a584(param_2,lVar2,param_2[1]);
        __ZdlPv(*param_2);
      }
      *param_2 = lVar5;
      param_2[1] = param_2[1] + param_4;
      param_2[2] = uVar3;
      puVar7 = &uStack_78;
      FUN_108882908(puVar7);
      *param_1 = *param_2 + (param_3 - lVar9);
      return puVar7;
    }
  }
  func_0x00010772e1f8();
  puVar7 = &uStack_78;
  FUN_108882908();
  func_0x000108882ba0();
  *(int *)puVar7 = (int)*param_2;
  FUN_108882414(puVar7 + 1,param_2 + 1);
  return puVar7;
}



/* Entry: 1088827c8; end: 108882817;  */

undefined4 * FUN_1088827c8(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_108882414(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 108882818; end: 10888283b;  */

undefined8 FUN_108882818(undefined8 param_1)

{
  FUN_10888283c();
  return param_1;
}



/* Entry: 10888283c; end: 1088828c3;  */

long * FUN_10888283c(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10888287c;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10888287c:
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    param_1[3] = 0;
  }
  else if (lVar2 == param_2) {
    param_1[3] = (long)param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    param_1[3] = lVar2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1088828c4; end: 108882907;  */

long FUN_1088828c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108882bf0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x28) {
    FUN_1088827c8(param_3,unaff_x21);
    param_3 = param_3 + 0x28;
  }
  return param_3;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107508248; end: 107508277;  */

undefined8 FUN_107508248(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  func_0x00010725afe8(param_1 + 0x50);
  func_0x0001075082b4(param_1 + 0x28,*(undefined8 *)(param_1 + 0x38));
  func_0x0001075088c8(param_1 + 0x28);
  FUN_107508308();
  return unaff_x19;
}



/* Entry: 107508278; end: 10750828b;  */

void FUN_107508278(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10750828c; end: 107508307;  */

undefined8 FUN_10750828c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001075082b4(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x0001075088c8(param_1);
  FUN_107508308();
  return unaff_x19;
}



/* Entry: 107508308; end: 10750831f;  */

void FUN_107508308(long *param_1)

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



/* Entry: 107508320; end: 10750833b;  */

void FUN_107508320(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1074df008(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10750833c; end: 107508387;  */

undefined4 FUN_10750833c(long param_1)

{
  undefined4 uVar1;
  long lStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 1;
  lStack_40 = param_1;
  func_0x00010724e404();
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  func_0x00010724e49c(&lStack_40);
  return uVar1;
}



/* Entry: 107508388; end: 1075083b3;  */

undefined8 * FUN_107508388(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b78a8;
  FUN_1075061d4(param_1 + 1);
  return param_1;
}



/* Entry: 1075083b4; end: 1075083c7;  */

void FUN_1075083b4(void)

{
  FUN_107508388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075083c8; end: 107508403;  */

undefined8 FUN_1075083c8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x90;
  __Znwm(0x90);
  FUN_107508588();
  return uVar1;
}



/* Entry: 107508404; end: 107508427;  */

void FUN_107508404(long param_1,undefined8 param_2)

{
  func_0x000107508a00(param_2,param_1 + 8);
  func_0x000107508870(&PTR_FUN_1109b78a8);
  FUN_107506d24();
  return;
}



/* Entry: 107508428; end: 107508553;  */

void FUN_107508428(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_a8 [16];
  uint uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_7c;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  func_0x000107508184(auStack_a8,param_1 + 8);
  func_0x00010726fc00(&uStack_98,param_1 + 8);
  if ((long *)CONCAT44(uStack_94,uStack_98) == (long *)0x0) {
    func_0x0001072508cc(&uStack_98);
  }
  else {
    lVar1 = *(long *)CONCAT44(uStack_94,uStack_98);
    func_0x0001072508cc(&uStack_98);
    if (lVar1 != -1) {
      plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 0x2b30);
      uStack_98 = (uint)*(byte *)(param_1 + 0x28);
      uStack_90 = *(undefined8 *)(param_1 + 0x30);
      uStack_88 = *(undefined1 *)(param_1 + 0x38);
      uStack_80 = *(undefined1 *)(param_1 + 0x40);
      uStack_7c = *(undefined8 *)(param_1 + 0x44);
      func_0x000107410ee0(auStack_70,param_1 + 0x50);
      FUN_1074116bc(auStack_58,param_1 + 0x68);
      func_0x000107277f0c(auStack_48,param_1 + 0x78);
      (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_98);
      FUN_107506d90(&uStack_98);
    }
  }
  func_0x000107270b00(auStack_a8);
  return;
}



/* Entry: 107508554; end: 10750857b;  */

void FUN_107508554(undefined8 param_1)

{
  func_0x0001075089e0();
  func_0x0001075088ac(param_1,&PTR_DAT_1109b7908);
  func_0x00010750876c();
  return;
}



/* Entry: 10750857c; end: 107508587;  */

undefined ** FUN_10750857c(void)

{
  return &PTR_DAT_1109b7908;
}



/* Entry: 107508588; end: 1075085cf;  */

void FUN_107508588(void)

{
  func_0x000107508a00();
  func_0x000107508870(&PTR_FUN_1109b78a8);
  FUN_107506d24();
  return;
}



/* Entry: 1075085d0; end: 1075085d7;  */

void FUN_1075085d0(void)

{
  return;
}



/* Entry: 1075085d8; end: 107508607;  */

void FUN_1075085d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109b7928;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107508608; end: 10750862b;  */

void FUN_107508608(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b7928;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10750862c; end: 1075086c7;  */

void FUN_10750862c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(param_1 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_38,lVar1 + 0x2ba0);
  func_0x00010726e300(param_2,&DAT_10f34bc88,auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_50,lVar1 + 0x2bb8);
  func_0x00010726e300(param_2,&UNK_10f408d9c,auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 1075086c8; end: 1075086ef;  */

void FUN_1075086c8(undefined8 param_1)

{
  func_0x0001075089e0();
  func_0x0001075088ac(param_1,&PTR_DAT_1109b7988);
  func_0x00010750876c();
  return;
}



/* Entry: 1075086f0; end: 107508a2b;  */

undefined ** FUN_1075086f0(void)

{
  return &PTR_DAT_1109b7988;
}



/* Entry: 107508a2c; end: 107508a53;  */

undefined8 FUN_107508a2c(undefined8 param_1)

{
  FUN_107508a54(param_1,0);
  return param_1;
}



/* Entry: 107508a54; end: 107508a6b;  */

void FUN_107508a54(long *param_1,long param_2)

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



/* Entry: 107508a6c; end: 107508aaf;  */

long FUN_107508a6c(long param_1)

{
  FUN_107508ab0();
  FUN_1075094c8(param_1 + 0x50);
  func_0x00010750958c(param_1 + 0x38);
  func_0x00010750958c(param_1 + 0x20);
  func_0x00010724b8b8(param_1 + 0x10);
  return param_1;
}



/* Entry: 107508ab0; end: 107508c57;  */

void FUN_107508ab0(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined4 auStack_2d8 [6];
  undefined4 uStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_290;
  undefined1 uStack_28c;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined **ppuStack_268;
  long **pplStack_260;
  undefined ***pppuStack_250;
  long *plStack_248;
  ulong uStack_240;
  undefined1 auStack_140 [264];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  auStack_2d8[0] = 0x7e;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  ppuStack_2b8 = &PTR_DAT_110996720;
  uStack_2b0 = 0;
  uStack_298 = 0x7e;
  uStack_290 = 1;
  uStack_28c = 1;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_288 = 0;
  FUN_10743cc34(&plStack_248,auStack_2d8,7);
  FUN_10743d7bc(auStack_140,&plStack_248);
  func_0x000107288cd8(&plStack_248);
  func_0x000107262330(auStack_2d8);
  FUN_107508c58(param_1 + 0x20);
  FUN_107508c58(param_1 + 0x38);
  plVar1 = *(long **)(param_1 + 0x58);
  for (plVar6 = *(long **)(param_1 + 0x50); uVar2 = plVar6 == plVar1, !(bool)uVar2;
      plVar6 = plVar6 + 2) {
    plStack_248 = (long *)0x0;
    uStack_240 = 0;
    uVar3 = plVar6[1];
    if (uVar3 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (uVar3 != 0) {
        plStack_248 = (long *)*plVar6;
      }
      uStack_240 = uVar3;
      if (plStack_248 != (long *)0x0) {
        (**(code **)(*plStack_248 + 0x18))();
      }
    }
    func_0x000107509620(&plStack_248);
  }
  uStack_240 = uStack_240 & 0xffffffffffffff00;
  pplStack_260 = &plStack_248;
  ppuStack_268 = &PTR_FUN_1109b79c0;
  pppuStack_250 = &ppuStack_268;
  plStack_248 = (long *)0x0;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),&ppuStack_268);
  func_0x0001006393ec(&ppuStack_268);
  func_0x00010ae7dcc4(&plStack_248);
  func_0x00010ae7dc90(&plStack_248);
  puVar4 = auStack_140;
  FUN_10743d7e4();
  func_0x000107509f5c(uStack_38);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010ae7dc90(&plStack_248);
    puVar5 = auStack_140;
    FUN_10743d7e4();
    func_0x000107509f34();
    func_0x000107509f70();
    puVar5 = *(undefined1 **)(puVar5 + 8);
    while (puVar5 != puVar4) {
      puVar5 = puVar5 + -0x10;
      func_0x000107509620();
    }
    plVar6[1] = (long)puVar4;
    return;
  }
  return;
}



/* Entry: 107508c58; end: 107508c5f;  */

void FUN_107508c58(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107509f70(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000107509620();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107508c60; end: 107508ca7;  */

undefined8 * FUN_107508c60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    puVar2 = puVar1 + 2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar2 = param_1;
    FUN_107509648();
  }
  param_1[1] = puVar2;
  return puVar2 + -2;
}



/* Entry: 107508ca8; end: 1075092c3;  */

/* WARNING: Removing unreachable block (ram,0x0001075091fc) */

void FUN_107508ca8(long *param_1,undefined4 **param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 uVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined4 **ppuVar20;
  long lVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  long lStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined4 *puStack_490;
  undefined4 uStack_488;
  undefined4 uStack_484;
  long lStack_480;
  undefined4 uStack_470;
  undefined **ppuStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined4 uStack_440;
  undefined1 uStack_43c;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_418 [32];
  undefined1 uStack_3f8;
  undefined1 uStack_3e0;
  undefined1 uStack_3d8;
  undefined1 uStack_3c0;
  undefined1 uStack_3b8;
  undefined1 uStack_380;
  undefined1 uStack_378;
  undefined1 uStack_374;
  undefined1 auStack_370 [24];
  undefined8 *puStack_358;
  undefined1 auStack_350 [208];
  undefined **ppuStack_280;
  undefined4 **ppuStack_278;
  undefined4 **ppuStack_270;
  undefined ***pppuStack_268;
  undefined **ppuStack_260;
  undefined1 auStack_178 [264];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar23 = param_2[5];
  puVar22 = param_2[4];
  puVar25 = param_2[8];
  puVar24 = param_2[7];
  puVar12 = param_2[5];
  puVar13 = param_2[8];
  plVar18 = param_1 + 4;
  param_1[5] = 0;
  *plVar18 = 0;
  param_1[1] = (long)puVar25 - (long)puVar24 >> 4;
  *param_1 = (long)puVar23 - (long)puVar22 >> 4;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  uVar7 = puVar22 == puVar12 && puVar24 == puVar13;
  if (puVar22 != puVar12 || puVar24 != puVar13) {
    uStack_488 = 0x7d;
    uStack_470 = 0;
    uStack_458 = 0;
    uStack_450 = 0;
    ppuStack_468 = &PTR_DAT_110996720;
    uStack_460 = 0;
    uStack_448 = 0x7d;
    uStack_440 = 1;
    uStack_43c = 1;
    uStack_430 = 0;
    uStack_428 = 0;
    uStack_438 = 0;
    FUN_10743cc34(&ppuStack_280,&uStack_488,7);
    FUN_10743d7bc(auStack_178,&ppuStack_280);
    func_0x000107288cd8(&ppuStack_280);
    puVar12 = &uStack_488;
    func_0x000107262330();
    __ZNSt3__16chrono12steady_clock3nowEv();
    ppuStack_280 = &PTR_DAT_1109b7a40;
    puStack_490 = puVar12;
    ppuStack_278 = &puStack_490;
    ppuStack_270 = param_2;
    pppuStack_268 = &ppuStack_280;
    FUN_1075092c4(&uStack_488,param_2 + 4,&ppuStack_280,0);
    func_0x000107509f14();
    ppuStack_280 = &PTR_FUN_1109b7ad0;
    ppuStack_278 = &puStack_490;
    ppuStack_270 = param_2;
    pppuStack_268 = &ppuStack_280;
    FUN_1075092c4(&lStack_4a8,param_2 + 7,&ppuStack_280,1);
    func_0x000107509f14();
    if (lStack_480 != CONCAT44(uStack_484,uStack_488)) {
      func_0x000107509df8();
      func_0x00010729d56c(&ppuStack_280,&UNK_10f415fa1,&DAT_10f348430);
      func_0x000107509e3c(lStack_480);
      func_0x000107509ebc();
      func_0x000107509f54();
    }
    lVar16 = lStack_4a0;
    if (lStack_4a0 != lStack_4a8) {
      func_0x000107509df8();
      func_0x00010729d56c(&ppuStack_280,&UNK_10f415fa1,"background");
      func_0x000107509e3c(lStack_4a0);
      func_0x000107509ebc();
      func_0x000107509f54();
      lVar16 = lStack_4a8;
    }
    lVar19 = lStack_480 - CONCAT44(uStack_484,uStack_488) >> 5;
    lVar16 = lStack_4a0 - lVar16 >> 5;
    param_1[2] = param_1[2] + lVar19;
    param_1[3] = param_1[3] + lVar16;
    *param_1 = *param_1 - lVar19;
    param_1[1] = param_1[1] - lVar16;
    uVar11 = ((long)param_2[8] - (long)param_2[7] >> 4) + lVar19;
    ppuVar8 = (undefined **)(param_1 + 6);
    lVar16 = param_1[4];
    if ((ulong)((long)*ppuVar8 - lVar16 >> 3) < uVar11) {
      if (uVar11 >> 0x3d != 0) goto LAB_1075091f4;
      lVar19 = param_1[5];
      ppuStack_260 = ppuVar8;
      FUN_1073bc134();
      ppuStack_278 = (undefined4 **)((long)ppuVar8 + (lVar19 - lVar16));
      pppuStack_268 = (undefined ***)(ppuVar8 + uVar11);
      ppuStack_280 = ppuVar8;
      ppuStack_270 = ppuStack_278;
      FUN_1073bc0f4(plVar18,&ppuStack_280);
      FUN_1073bc170(&ppuStack_280);
    }
    ppuVar20 = param_2 + 10;
    puVar13 = param_2[0xb];
    for (puVar12 = *ppuVar20; puVar12 != puVar13; puVar12 = puVar12 + 4) {
      puVar22 = puVar12;
      if ((*(long *)(puVar12 + 2) == 0) || (*(long *)(*(long *)(puVar12 + 2) + 8) == -1))
      goto LAB_107508f58;
    }
    goto LAB_107508fac;
  }
  goto LAB_1075091b4;
LAB_107508f58:
  while (puVar23 = puVar22 + 4, puVar23 != puVar13) {
    plVar1 = (long *)(puVar22 + 6);
    puVar22 = puVar23;
    if ((*plVar1 != 0) && (*(long *)(*plVar1 + 8) != -1)) {
      FUN_1075098f0(puVar12,puVar23);
      puVar12 = puVar12 + 4;
    }
  }
  if (puVar12 != param_2[0xb]) {
    FUN_107509530(ppuVar20,puVar12);
  }
LAB_107508fac:
  for (lVar16 = CONCAT44(uStack_484,uStack_488); lVar19 = lStack_4a0, lVar21 = lStack_4a8,
      lVar16 != lStack_480; lVar16 = lVar16 + 0x20) {
    if (*(char *)(lVar16 + 8) == '\x01') {
      FUN_1075094b0(lVar16);
      func_0x0001073bbfe4(plVar18,lVar16);
    }
  }
  for (; uVar3 = uStack_498, lVar17 = lStack_4a0, lVar16 = lStack_4a8, uVar7 = lVar21 == lVar19,
      !(bool)uVar7; lVar21 = lVar21 + 0x20) {
    uVar3 = *(undefined8 *)(lVar21 + 0x10);
    lVar16 = *(long *)(lVar21 + 0x18);
    puVar10 = (undefined8 *)param_2[0xb];
    if (puVar10 < param_2[0xc]) {
      *puVar10 = uVar3;
      puVar10[1] = lVar16;
      if (lVar16 != 0) {
        plVar1 = (long *)(lVar16 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar10 = puVar10 + 2;
    }
    else {
      puVar12 = *ppuVar20;
      lVar17 = (long)puVar10 - (long)puVar12 >> 4;
      uVar11 = lVar17 + 1;
      if (uVar11 >> 0x3c != 0) {
        FUN_10750992c();
        goto LAB_1075091f8;
      }
      uVar14 = (long)param_2[0xc] - (long)puVar12;
      uVar15 = (long)uVar14 >> 3;
      if (uVar15 <= uVar11) {
        uVar15 = uVar11;
      }
      if (0x7fffffffffffffef < uVar14) {
        uVar15 = 0xfffffffffffffff;
      }
      if (uVar15 >> 0x3c != 0) {
        func_0x000104bd35f4();
        goto LAB_1075091f8;
      }
      lVar9 = uVar15 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar9 + ((long)puVar10 - (long)puVar12));
      *puVar2 = uVar3;
      puVar2[1] = lVar16;
      if (lVar16 != 0) {
        plVar1 = (long *)(lVar16 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar12 = param_2[10];
        lVar17 = (long)param_2[0xb] - (long)puVar12 >> 4;
      }
      puVar10 = puVar2 + 2;
      func_0x000107509ed0();
      param_2[10] = (undefined4 *)(puVar2 + lVar17 * -2);
      param_2[0xb] = (undefined4 *)puVar10;
      param_2[0xc] = (undefined4 *)(lVar9 + uVar15 * 0x10);
      if (puVar12 != (undefined4 *)0x0) {
        __ZdlPv(puVar12);
      }
    }
    param_2[0xb] = (undefined4 *)puVar10;
    if (*(char *)(lVar21 + 8) == '\x01') {
      FUN_1075094b0(lVar21);
      func_0x0001073bbfe4(plVar18,lVar21);
    }
  }
  plVar18 = (long *)param_2[2];
  lStack_4e0 = lStack_4a8;
  lStack_4d8 = lStack_4a0;
  uStack_4d0 = uStack_498;
  lStack_4a8 = 0;
  lStack_4a0 = 0;
  uStack_498 = 0;
  puStack_358 = (undefined8 *)0x0;
  puVar10 = (undefined8 *)0x20;
  __Znwm();
  *puVar10 = &PTR_FUN_1109b7b50;
  puVar10[1] = lVar16;
  puVar10[2] = lVar17;
  puVar10[3] = uVar3;
  lStack_4d8 = 0;
  uStack_4d0 = 0;
  lStack_4e0 = 0;
  puStack_358 = puVar10;
  FUN_107474460(auStack_418,&UNK_10f415fa8);
  uStack_3f8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_374 = 0;
  func_0x000107273dcc(auStack_350,auStack_370,auStack_418);
  (**(code **)(*plVar18 + 0x18))(plVar18,auStack_350);
  func_0x000107273efc(auStack_350);
  func_0x000107273f24(auStack_418);
  func_0x0001006393ec(auStack_370);
  FUN_107509938(&lStack_4e0);
  FUN_107509938(&lStack_4a8);
  FUN_107509938(&uStack_488);
  FUN_10743d7e4(auStack_178);
LAB_1075091b4:
  func_0x000107509f5c(uStack_70);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
LAB_1075091f4:
  FUN_1073bc128();
LAB_1075091f8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1075091fc);
  (*pcVar6)();
}



/* Entry: 1075092c4; end: 1075094af;  */

void FUN_1075092c4(long *param_1,undefined8 *param_2,int param_3,int param_4)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar13 = (undefined8 *)*param_2;
  puVar5 = param_2;
  do {
    if (puVar13 == (undefined8 *)param_2[1]) {
      return;
    }
    if ((puVar13[1] == 0) || (*(long *)(puVar13[1] + 8) != 0)) {
      puVar13 = puVar13 + 2;
    }
    else {
      plVar4 = (long *)*puVar13;
      (**(code **)(*plVar4 + 0x20))();
      uStack_78 = CONCAT71(uStack_78._1_7_,(char)puVar5);
      uStack_68 = puVar13[1];
      uStack_70 = *puVar13;
      *puVar13 = 0;
      puVar13[1] = 0;
      plStack_80 = plVar4;
      if ((ulong)param_1[1] < (ulong)param_1[2]) {
        func_0x000107509ef8();
        uStack_70 = 0;
        uStack_68 = 0;
        lVar10 = extraout_x8;
      }
      else {
        lVar8 = *param_1;
        lVar10 = param_1[1] - lVar8;
        lVar12 = lVar10 >> 5;
        uVar1 = lVar12 + 1;
        if (uVar1 >> 0x3b != 0) {
          FUN_107509890();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x107509488);
          (*pcVar2)();
        }
        uVar6 = param_1[2] - lVar8;
        uVar7 = (long)uVar6 >> 4;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7fffffffffffffdf < uVar6) {
          uVar7 = 0x7ffffffffffffff;
        }
        FUN_10750989c();
        func_0x000107509ef8(uVar7 + lVar10);
        uStack_70 = 0;
        uStack_68 = 0;
        func_0x000107509ed0();
        *param_1 = extraout_x8_00 + lVar12 * -0x20;
        param_1[2] = uVar7 + (long)puVar5 * 0x20;
        lVar10 = extraout_x8_00;
        if (lVar8 != 0) {
          __ZdlPv(lVar8);
        }
      }
      param_1[1] = lVar10 + 0x20;
      func_0x000107509620(&uStack_70);
      if (param_4 == 0) {
        uStack_78 = *(undefined8 *)(lVar10 + 0x18);
        plStack_80 = *(long **)(lVar10 + 0x10);
        *(undefined8 *)(lVar10 + 0x10) = 0;
        *(undefined8 *)(lVar10 + 0x18) = 0;
        func_0x000107509620(&plStack_80);
      }
      else {
        (**(code **)(**(long **)(lVar10 + 0x10) + 0x10))();
      }
      puVar11 = (undefined8 *)param_2[1];
      puVar5 = puVar13;
      while (puVar9 = puVar5 + 2, puVar9 != puVar11) {
        uStack_78 = puVar5[1];
        plStack_80 = (long *)*puVar5;
        uVar15 = puVar5[3];
        uVar14 = *puVar9;
        *puVar9 = 0;
        puVar5[3] = 0;
        puVar5[1] = uVar15;
        *puVar5 = uVar14;
        func_0x000107509620(&plStack_80);
        puVar5 = puVar9;
      }
      func_0x0001075095ec(param_2);
    }
    iVar3 = param_3;
    FUN_1075098d0();
  } while (iVar3 == 0);
  return;
}



/* Entry: 1075094b0; end: 1075094c7;  */

void FUN_1075094b0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x000107509f1c();
  func_0x0001075094ec();
  return;
}



/* Entry: 1075094c8; end: 107509527;  */

void FUN_1075094c8(void)

{
  func_0x000107509f1c();
  func_0x0001075094ec();
  return;
}



/* Entry: 107509528; end: 10750952f;  */

void FUN_107509528(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107509f70(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000107509564();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107509530; end: 107509647;  */

void FUN_107509530(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107509f70();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000107509564();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107509648; end: 1075096df;  */

long FUN_107509648(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_1075096e0(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_1075097a0(auStack_48,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar3 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar3;
  *param_2 = 0;
  param_2[1] = 0;
  puStack_38 = puStack_38 + 2;
  FUN_107509720(param_1,auStack_48);
  lVar2 = param_1[1];
  FUN_107509828(auStack_48);
  return lVar2;
}



/* Entry: 1075096e0; end: 10750971f;  */

ulong FUN_1075096e0(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 >> 0x3c == 0) {
    uVar2 = param_1[2] - *param_1 >> 3;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0xfffffffffffffff;
    }
    return uVar2;
  }
  FUN_107509794();
  func_0x000107509f70();
  uVar3 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}



/* Entry: 107509720; end: 107509793;  */

void FUN_107509720(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000107509f70();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 107509794; end: 10750979f;  */

long * FUN_107509794(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x000107509e70();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001075097e8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1075097a0; end: 10750980b;  */

long * FUN_1075097a0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001075097e8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10750980c; end: 107509827;  */

long * FUN_10750980c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107509854();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107509828; end: 107509853;  */

long * FUN_107509828(long *param_1)

{
  FUN_107509854();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107509854; end: 10750985b;  */

void FUN_107509854(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107509f70(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x000107509620();
  }
  return;
}



/* Entry: 10750985c; end: 10750988f;  */

void FUN_10750985c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107509f70();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x000107509620();
  }
  return;
}



/* Entry: 107509890; end: 10750989b;  */

undefined1  [16] FUN_107509890(ulong param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lStack_70;
  long lStack_68;
  
  func_0x000107509e70();
  if (param_1 >> 0x3b == 0) {
    lVar1 = param_1 << 5;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104bd35f4();
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001075098e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar5._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar5._0_8_ = plVar2;
    return auVar5;
  }
  func_0x000104bfeb48();
  lVar3 = param_2[1];
  lVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  lStack_68 = plVar2[1];
  lStack_70 = *plVar2;
  plVar2[1] = lVar3;
  *plVar2 = lVar1;
  func_0x000107509564(&lStack_70);
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar2;
  return auVar6;
}



/* Entry: 10750989c; end: 1075098cf;  */

undefined1  [16] FUN_10750989c(ulong param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lStack_60;
  long lStack_58;
  
  if (param_1 >> 0x3b == 0) {
    lVar1 = param_1 << 5;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104bd35f4();
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001075098e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar5._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar5._0_8_ = plVar2;
    return auVar5;
  }
  func_0x000104bfeb48();
  lVar3 = param_2[1];
  lVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  lStack_58 = plVar2[1];
  lStack_60 = *plVar2;
  plVar2[1] = lVar3;
  *plVar2 = lVar1;
  func_0x000107509564(&lStack_60);
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar2;
  return auVar6;
}



/* Entry: 1075098d0; end: 1075098ef;  */

long * FUN_1075098d0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001075098e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  lVar3 = param_2[1];
  lVar2 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  lStack_38 = plVar1[1];
  lStack_40 = *plVar1;
  plVar1[1] = lVar3;
  *plVar1 = lVar2;
  func_0x000107509564(&lStack_40);
  return plVar1;
}



/* Entry: 1075098f0; end: 10750992b;  */

undefined8 * FUN_1075098f0(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000107509564(&uStack_30);
  return param_1;
}



/* Entry: 10750992c; end: 107509937;  */

void FUN_10750992c(void)

{
  func_0x000107509e70();
  func_0x000107509f1c();
  FUN_10750995c();
  return;
}



/* Entry: 107509938; end: 10750995b;  */

void FUN_107509938(void)

{
  func_0x000107509f1c();
  FUN_10750995c();
  return;
}



/* Entry: 10750995c; end: 1075099bf;  */

void FUN_10750995c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    for (lVar1 = plVar2[1]; lVar1 != lVar3; lVar1 = lVar1 + -0x20) {
      func_0x000107509620(lVar1 + -0x10);
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1075099c0; end: 1075099c7;  */

void FUN_1075099c0(void)

{
  return;
}



/* Entry: 1075099c8; end: 1075099f7;  */

void FUN_1075099c8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109b79c0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1075099f8; end: 107509a23;  */

void FUN_1075099f8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b79c0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107509a24; end: 107509a4b;  */

void FUN_107509a24(undefined8 param_1)

{
  func_0x000107509f7c();
  func_0x000107509ef0(param_1,&PTR_DAT_1109b7a20);
  func_0x000107509ea4();
  return;
}



/* Entry: 107509a4c; end: 107509a5f;  */

undefined ** FUN_107509a4c(void)

{
  return &PTR_DAT_1109b7a20;
}



/* Entry: 107509a60; end: 107509a8b;  */

void FUN_107509a60(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x000107509f48();
  *param_1 = &PTR_DAT_1109b7a40;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 107509a8c; end: 107509aa7;  */

void FUN_107509a8c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109b7a40;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107509aa8; end: 107509aef;  */

void FUN_107509aa8(void)

{
  func_0x000107509f3c();
  func_0x000107509e7c();
  return;
}



/* Entry: 107509af0; end: 107509afb;  */

undefined ** FUN_107509af0(void)

{
  return &PTR_DAT_1109b7ab0;
}



/* Entry: 107509afc; end: 107509b3f;  */

long * FUN_107509afc(long *param_1)

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



/* Entry: 107509b40; end: 107509b47;  */

void FUN_107509b40(void)

{
  return;
}



/* Entry: 107509b48; end: 107509b73;  */

void FUN_107509b48(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x000107509f48();
  *param_1 = &PTR_FUN_1109b7ad0;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 107509b74; end: 107509b8f;  */

void FUN_107509b74(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109b7ad0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107509b90; end: 107509bd7;  */

void FUN_107509b90(void)

{
  func_0x000107509f3c();
  func_0x000107509e7c();
  return;
}



/* Entry: 107509bd8; end: 107509be3;  */

undefined ** FUN_107509bd8(void)

{
  return &PTR_DAT_1109b7b30;
}



/* Entry: 107509be4; end: 107509c0f;  */

undefined8 * FUN_107509be4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b7b50;
  FUN_107509938(param_1 + 1);
  return param_1;
}



/* Entry: 107509c10; end: 107509c23;  */

void FUN_107509c10(void)

{
  FUN_107509be4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107509c24; end: 107509c63;  */

undefined8 FUN_107509c24(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x20;
  __Znwm(0x20);
  FUN_107509cc0();
  return uVar1;
}



/* Entry: 107509c64; end: 107509c8b;  */

undefined8 * FUN_107509c64(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  plVar6 = (long *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b7b50;
  puStack_40 = param_2 + 1;
  *puStack_40 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  puVar9 = (undefined8 *)*plVar6;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  uStack_38 = 0;
  lVar8 = (long)puVar1 - (long)puVar9;
  if (lVar8 != 0) {
    puVar5 = (undefined8 *)(lVar8 >> 5);
    if ((ulong)puVar5 >> 0x3b != 0) {
      FUN_107509890();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x107509d9c);
      (*pcVar4)();
    }
    FUN_10750989c();
    param_2[1] = puVar5;
    param_2[2] = puVar5;
    param_2[3] = puVar5 + (long)plVar6 * 4;
    for (; puVar9 != puVar1; puVar9 = puVar9 + 4) {
      uVar7 = *puVar9;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar9 + 1);
      *puVar5 = uVar7;
      lVar8 = puVar9[3];
      uVar7 = puVar9[2];
      puVar5[3] = puVar9[3];
      puVar5[2] = uVar7;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar5 = puVar5 + 4;
    }
    param_2[2] = puVar5;
  }
  uStack_38 = 1;
  FUN_107509dac(&puStack_40);
  return param_2;
}



/* Entry: 107509c8c; end: 107509cb3;  */

void FUN_107509c8c(undefined8 param_1)

{
  func_0x000107509f7c();
  func_0x000107509ef0(param_1,&PTR_DAT_1109b7bb0);
  func_0x000107509ea4();
  return;
}



/* Entry: 107509cb4; end: 107509cbf;  */

undefined ** FUN_107509cb4(void)

{
  return &PTR_DAT_1109b7bb0;
}



/* Entry: 107509cc0; end: 107509dab;  */

undefined8 * FUN_107509cc0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = &PTR_FUN_1109b7b50;
  puStack_40 = param_1 + 1;
  *puStack_40 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar9 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  uStack_38 = 0;
  lVar8 = (long)puVar2 - (long)puVar9;
  if (lVar8 != 0) {
    puVar6 = (undefined8 *)(lVar8 >> 5);
    if ((ulong)puVar6 >> 0x3b != 0) {
      FUN_107509890();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x107509d9c);
      (*pcVar5)();
    }
    FUN_10750989c();
    param_1[1] = puVar6;
    param_1[2] = puVar6;
    param_1[3] = puVar6 + (long)param_2 * 4;
    for (; puVar9 != puVar2; puVar9 = puVar9 + 4) {
      uVar7 = *puVar9;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar9 + 1);
      *puVar6 = uVar7;
      lVar8 = puVar9[3];
      uVar7 = puVar9[2];
      puVar6[3] = puVar9[3];
      puVar6[2] = uVar7;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar6 = puVar6 + 4;
    }
    param_1[2] = puVar6;
  }
  uStack_38 = 1;
  FUN_107509dac(&puStack_40);
  return param_1;
}



/* Entry: 107509dac; end: 107509dd7;  */

long FUN_107509dac(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10750995c(param_1);
  }
  return param_1;
}



/* Entry: 107509dd8; end: 107509f87;  */

void FUN_107509dd8(void)

{
  return;
}



/* Entry: 107509f88; end: 10750a093;  */

void FUN_107509f88(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 *puStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [32];
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined ***pppuStack_170;
  undefined1 auStack_150 [56];
  undefined8 uStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 auStack_b8 [3];
  undefined8 *puStack_a0;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  uVar7 = param_4;
  uVar8 = param_5;
  func_0x00010750b448();
  uStack_48 = extraout_x8;
  FUN_10745f83c(param_1);
  func_0x00010750b584(param_2 + 0x30);
  func_0x000107279a5c();
  func_0x000104c2f64c(auStack_b8);
  func_0x0001072d78b4(auStack_80,param_3,auStack_b8);
  puVar1 = auStack_b8;
  func_0x000104c2f714();
  func_0x00010750b554();
  *puVar1 = &PTR_DAT_1109b7bf0;
  puVar1[1] = param_2;
  puVar1[2] = auStack_80;
  puVar1[3] = param_4;
  puVar1[4] = param_1;
  puVar6 = auStack_b8;
  puStack_a0 = puVar1;
  func_0x000107869948(param_5);
  func_0x000107277390(auStack_b8);
  puVar2 = auStack_80;
  func_0x000104c2f714();
  func_0x00010750b53c();
  func_0x00010750b428(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107277390(auStack_b8);
  func_0x000104c2f714(auStack_80);
  func_0x00010750b53c();
  lVar3 = param_1;
  FUN_10745f870(param_1);
  func_0x00010750b5ac();
  pcStack_d8 = FUN_10750a094;
  lVar4 = lVar3;
  puStack_110 = auStack_80;
  uStack_108 = param_3;
  lStack_100 = param_2;
  uStack_f8 = param_4;
  puStack_f0 = puVar2;
  lStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010750b448();
  uStack_118 = extraout_x8_00;
  func_0x00010750b584(lVar4 + 0x30);
  func_0x00010724e404();
  func_0x000104c2f64c(&ppuStack_188);
  func_0x0001072d78b4(auStack_150,uVar7,&ppuStack_188);
  func_0x000104c2f714(&ppuStack_188);
  ppuStack_188 = &PTR_DAT_1109b7c70;
  uStack_180 = uVar8;
  puStack_178 = puVar6;
  pppuStack_170 = &ppuStack_188;
  func_0x00010750b574(&PTR_FUN_1109b7d70);
  func_0x00010786a074(lVar3,auStack_150,&ppuStack_188,auStack_1a8);
  func_0x00010750b55c();
  FUN_10750ad00(&ppuStack_188);
  func_0x000104c2f714(auStack_150);
  puVar2 = auStack_1b8;
  func_0x00010724e49c();
  func_0x00010750b428(uStack_118);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010750b55c();
  FUN_10750ad00(&ppuStack_188);
  func_0x000104c2f714(auStack_150);
  puVar5 = auStack_1b8;
  func_0x00010724e49c();
  func_0x00010750b494();
  pcStack_1c8 = FUN_10750a194;
  puStack_1f0 = puVar5 + 0x30;
  uStack_1e8 = 1;
  uStack_1e0 = uVar8;
  puStack_1d8 = puVar2;
  ppuStack_1d0 = &puStack_e0;
  func_0x000107279a5c();
  func_0x0001074f5878(extraout_x8_01,puVar5 + 0x18);
  func_0x00010786a8b0(puVar5 + 0x18);
  func_0x000107279ee0(&puStack_1f0);
  return;
}



/* Entry: 10750a094; end: 10750a193;  */

void FUN_10750a094(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *puStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [32];
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined ***pppuStack_a0;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  lVar1 = param_1;
  func_0x00010750b448();
  uStack_48 = extraout_x8;
  func_0x00010750b584(lVar1 + 0x30);
  func_0x00010724e404();
  func_0x000104c2f64c(&ppuStack_b8);
  func_0x0001072d78b4(auStack_80,param_3,&ppuStack_b8);
  func_0x000104c2f714(&ppuStack_b8);
  ppuStack_b8 = &PTR_DAT_1109b7c70;
  uStack_b0 = param_4;
  uStack_a8 = param_2;
  pppuStack_a0 = &ppuStack_b8;
  func_0x00010750b574(&PTR_FUN_1109b7d70);
  func_0x00010786a074(param_1,auStack_80,&ppuStack_b8,auStack_d8);
  func_0x00010750b55c();
  FUN_10750ad00(&ppuStack_b8);
  func_0x000104c2f714(auStack_80);
  puVar2 = auStack_e8;
  func_0x00010724e49c();
  func_0x00010750b428(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010750b55c();
  FUN_10750ad00(&ppuStack_b8);
  func_0x000104c2f714(auStack_80);
  puVar3 = auStack_e8;
  func_0x00010724e49c();
  func_0x00010750b494();
  pcStack_f8 = FUN_10750a194;
  puStack_120 = puVar3 + 0x30;
  uStack_118 = 1;
  uStack_110 = param_4;
  puStack_108 = puVar2;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x000107279a5c();
  func_0x0001074f5878(extraout_x8_00,puVar3 + 0x18);
  func_0x00010786a8b0(puVar3 + 0x18);
  func_0x000107279ee0(&puStack_120);
  return;
}



/* Entry: 10750a194; end: 10750a203;  */

void FUN_10750a194(undefined8 param_1,long param_2)

{
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = param_2 + 0x30;
  uStack_28 = 1;
  func_0x000107279a5c();
  func_0x0001074f5878(param_1,param_2 + 0x18);
  func_0x00010786a8b0(param_2 + 0x18);
  func_0x000107279ee0(&lStack_30);
  return;
}



/* Entry: 10750a204; end: 10750a407;  */

void FUN_10750a204(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 *unaff_x25;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [96];
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 *apuStack_170 [7];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [104];
  long alStack_c8 [3];
  undefined8 *puStack_b0;
  long alStack_90 [7];
  undefined8 uStack_58;
  
  lVar6 = param_2;
  lVar2 = param_5;
  func_0x00010750b448();
  uStack_58 = extraout_x8;
  func_0x00010750b584(lVar6 + 0x30);
  func_0x000107279a5c();
  func_0x000104c2f64c(alStack_c8);
  plVar8 = alStack_c8;
  func_0x0001072d78b4(alStack_90,param_3);
  plVar3 = alStack_c8;
  func_0x000104c2f714();
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(char *)(param_4 + 0x38) == '\x01';
  apuStack_170[0] = param_1;
  if ((bool)uVar1) {
    uVar1 = *(char *)(param_5 + 0x38) == '\x01';
    if ((bool)uVar1) {
      func_0x00010750b5ec();
      func_0x00010786a204();
      if (((ulong)plVar8 & 1) != 0) {
        lVar6 = param_4;
        func_0x00010725ffc4(param_4);
        unaff_x25 = auStack_138;
        func_0x0001072786d8(auStack_130,plVar3 + 1);
        lVar2 = param_5;
        func_0x00010725ffc4(param_5);
        FUN_10750a408(apuStack_170,lVar6,auStack_138,lVar2);
        func_0x00010726af18(auStack_130);
        plVar8 = alStack_90;
        lVar2 = param_5;
        func_0x00010786a52c(param_2 + 0x18,plVar8,param_4,param_5);
        func_0x00010750b5ec();
        func_0x000107869fd8();
      }
      goto LAB_10750a37c;
    }
    func_0x00010750b554();
    *plVar3 = (long)&PTR_DAT_1109b7df0;
    plVar3[1] = param_4;
    plVar3[2] = (long)apuStack_170;
    plVar3[3] = param_2;
    plVar3[4] = (long)alStack_90;
    puStack_b0 = plVar3;
    func_0x00010750b574(&PTR_DAT_1109b7ef0);
    func_0x00010750b520();
  }
  else {
    plVar3 = (long *)0x20;
    __Znwm();
    *plVar3 = (long)&PTR_DAT_1109b7f70;
    plVar3[1] = (long)apuStack_170;
    plVar3[2] = param_2;
    plVar3[3] = (long)alStack_90;
    puStack_b0 = plVar3;
    func_0x00010750b574(&PTR_FUN_1109b80f0);
    func_0x00010750b520();
  }
  func_0x00010750b55c();
  FUN_10750ad00(alStack_c8);
LAB_10750a37c:
  plVar3 = alStack_90;
  func_0x000104c2f714();
  func_0x00010750b53c();
  func_0x00010750b428(uStack_58);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x25 + 8);
  FUN_1074f8690(param_1);
  plVar4 = alStack_90;
  func_0x000104c2f714();
  func_0x00010750b53c();
  func_0x00010750b5ac();
  pcStack_178 = FUN_10750a408;
  plVar5 = plVar4;
  lStack_1a0 = param_5;
  lStack_198 = param_4;
  plStack_190 = plVar3;
  puStack_188 = param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  func_0x00010750b448();
  uStack_1a8 = extraout_x8_00;
  FUN_10750a570(*plVar5);
  func_0x00010786981c();
  lVar6 = *plVar4;
  FUN_10750a570(lVar6,plVar8);
  uStack_1b0 = 0;
  func_0x000107869848(lVar6 + 0x18,lVar2,auStack_218);
  func_0x00010726af18();
  func_0x00010750b428(uStack_1a8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = auStack_210;
  func_0x00010726af18(puVar7);
  func_0x00010750b494();
  func_0x00010750b468();
  FUN_10750a938(extraout_x8_01,puVar7);
  func_0x00010750b4fc();
  return;
}



/* Entry: 10750a408; end: 10750a49b;  */

void FUN_10750a408(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [96];
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  func_0x00010750b448();
  uStack_38 = extraout_x8;
  FUN_10750a570(*plVar1);
  func_0x00010786981c();
  lVar2 = *param_1;
  FUN_10750a570(lVar2,param_2);
  uStack_40 = 0;
  func_0x000107869848(lVar2 + 0x18,param_4,auStack_a8);
  func_0x00010726af18();
  func_0x00010750b428(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = auStack_a0;
  func_0x00010726af18(puVar3);
  func_0x00010750b494();
  func_0x00010750b468();
  FUN_10750a938(extraout_x8_00,puVar3);
  func_0x00010750b4fc();
  return;
}



/* Entry: 10750a49c; end: 10750a4d7;  */

void FUN_10750a49c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010750b468();
  FUN_10750a938(param_1,param_2);
  func_0x00010750b4fc();
  return;
}



/* Entry: 10750a4d8; end: 10750a527;  */

void FUN_10750a4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010750b468();
  func_0x00010786a0bc(param_2,param_3);
  FUN_1074f80c0(param_1,param_2);
  func_0x00010750b4fc();
  return;
}



/* Entry: 10750a528; end: 10750a56f;  */

void FUN_10750a528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010750b468();
  func_0x000107869c68(param_1,param_2,param_3);
  func_0x00010750b4fc();
  return;
}



/* Entry: 10750a570; end: 10750a6b7;  */

long FUN_10750a570(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint6 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar13;
  byte bVar19;
  
  Hint_Prefetch(*param_1,0,2,0);
  uVar2 = param_2;
  func_0x000104c2fe38(*param_1);
  lVar7 = 0;
  uVar8 = *param_1;
  uVar9 = param_1[2];
  uVar4 = uVar8 >> 0xc ^ uVar2 >> 7;
  bVar1 = (byte)uVar2;
  uVar12 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar4 = uVar4 & uVar9;
    uVar13 = *(undefined8 *)(uVar8 + uVar4);
    cVar14 = (char)((ulong)uVar13 >> 8);
    cVar15 = (char)((ulong)uVar13 >> 0x10);
    cVar16 = (char)((ulong)uVar13 >> 0x18);
    cVar17 = (char)((ulong)uVar13 >> 0x20);
    cVar18 = (char)((ulong)uVar13 >> 0x28);
    bVar11 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar10 = CONCAT17(-(bVar19 == (bVar1 & 0x7f)),
                           CONCAT16(-(bVar11 == (bVar1 & 0x7f)),
                                    CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                             CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                      CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                               CONCAT12(-(cVar15 ==
                                                                         (char)(uVar12 >> 0x10)),
                                                                        CONCAT11(-(cVar14 ==
                                                                                  (char)(uVar12 >> 8
                                                                                        )),
                                                                                 -((char)uVar13 ==
                                                                                  (char)uVar12))))))
                                   )) & 0x8080808080808080; uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      uVar3 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar6 = (ulong *)(uVar4 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar9);
      uVar3 = param_1[1] + (long)puVar6 * 0x68;
      func_0x000104c32db4(uVar3,param_2);
      if ((uVar3 & 1) != 0) goto LAB_10750a674;
    }
    bVar11 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar11 == 0x80),
                                          CONCAT15(-(cVar18 == -0x80),
                                                   CONCAT14(-(cVar17 == -0x80),
                                                            CONCAT13(-(cVar16 == -0x80),
                                                                     CONCAT12(-(cVar15 == -0x80),
                                                                              CONCAT11(-(cVar14 ==
                                                                                        -0x80),-((
                                                  char)uVar13 == -0x80)))))))),1);
    if ((bVar11 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar4 = lVar7 + uVar4;
  }
  puVar6 = param_1;
  FUN_10750a6b8(param_1,uVar2);
  lVar5 = param_1[1] + (long)puVar6 * 0x68;
  lVar7 = lVar5;
  func_0x000104c2fe00(lVar5,param_2);
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  FUN_10745f83c();
LAB_10750a674:
  return param_1[1] + (long)puVar6 * 0x68 + 0x38;
}



/* Entry: 10750a6b8; end: 10750a7b3;  */

void FUN_10750a6b8(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_90 [104];
  undefined8 uStack_28;
  
  plVar4 = param_1;
  lVar10 = param_2;
  func_0x00010750b448();
  uStack_28 = extraout_x8;
  func_0x000100061de0();
  lVar6 = *param_1;
  if ((*(long *)(lVar6 + -8) == 0) && (*(char *)(lVar6 + (long)plVar4) != -2)) {
    uVar7 = param_1[2];
    if ((uVar7 < 9) || (uVar7 * 0x19 < (ulong)(param_1[3] << 5))) {
      FUN_10750a7b4(param_1,uVar7 << 1 | 1);
    }
    else {
      func_0x00010ae6c914(param_1,&UNK_1109b7bc0,auStack_90);
    }
    plVar4 = param_1;
    lVar10 = param_2;
    func_0x000100061de0();
    lVar6 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  bVar3 = *(char *)(lVar6 + (long)plVar4) == -0x80;
  *(ulong *)(lVar6 + -8) = *(long *)(lVar6 + -8) - (ulong)bVar3;
  bVar2 = (byte)param_2 & 0x7f;
  uVar7 = param_1[2];
  *(byte *)(lVar6 + (long)plVar4) = bVar2;
  *(byte *)(lVar6 + (uVar7 & (long)plVar4 - 7U) + (uVar7 & 7)) = bVar2;
  func_0x00010750b428(uStack_28);
  if (bVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *plVar4;
  lVar6 = plVar4[1];
  lVar9 = plVar4[2];
  plVar4[2] = lVar10;
  FUN_10750a888();
  lVar11 = plVar4[1];
  for (lVar10 = 0; lVar9 != lVar10; lVar10 = lVar10 + 1) {
    if (-1 < *(char *)(lVar1 + lVar10)) {
      lVar8 = lVar6;
      func_0x000104c2fe38();
      plVar5 = plVar4;
      func_0x000100061de0(plVar4,lVar8);
      bVar2 = (byte)lVar8 & 0x7f;
      uVar7 = plVar4[2];
      lVar8 = *plVar4;
      *(byte *)(lVar8 + (long)plVar5) = bVar2;
      *(byte *)(lVar8 + ((long)plVar5 - 7U & uVar7) + (uVar7 & 7)) = bVar2;
      func_0x00010750a8d8(lVar11 + (long)plVar5 * 0x68,lVar6);
    }
    lVar6 = lVar6 + 0x68;
  }
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10750a7b4; end: 10750a887;  */

void FUN_10750a7b4(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  param_1[2] = param_2;
  FUN_10750a888();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar5 = lVar6;
      func_0x000104c2fe38();
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar5);
      bVar2 = (byte)lVar5 & 0x7f;
      uVar4 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + (long)plVar3) = bVar2;
      *(byte *)(lVar5 + ((long)plVar3 - 7U & uVar4) + (uVar4 & 7)) = bVar2;
      func_0x00010750a8d8(lVar9 + (long)plVar3 * 0x68,lVar6);
    }
    lVar6 = lVar6 + 0x68;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10750a888; end: 10750a923;  */

void FUN_10750a888(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  uVar2 = param_1[2] + 0x17U & 0xfffffffffffffff8;
  puVar1 = &uStack_21;
  func_0x000100063148(puVar1,uVar2 + param_1[2] * 0x68);
  *param_1 = (long)(puVar1 + 8);
  param_1[1] = (long)(puVar1 + uVar2);
  func_0x0001000631d0(param_1,0x68);
  return;
}



/* Entry: 10750a924; end: 10750a937;  */

long FUN_10750a924(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 10750a938; end: 10750a97f;  */

void FUN_10750a938(long param_1,long param_2)

{
  func_0x00010750a95c();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  return;
}



/* Entry: 10750a980; end: 10750a9cb;  */

void FUN_10750a980(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = param_3[1];
  uVar6 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*param_2 != 0) {
    piVar2 = (int *)(*param_2 + 0x28);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}



/* Entry: 10750a9cc; end: 10750a9fb;  */

void FUN_10750a9cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010750b554();
  func_0x00010750b484(&PTR_DAT_1109b7bf0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  return;
}



/* Entry: 10750a9fc; end: 10750aa27;  */

void FUN_10750a9fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_DAT_1109b7bf0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10750aa28; end: 10750ab33;  */

void FUN_10750aa28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  undefined8 *puVar5;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [96];
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_1;
  func_0x00010750b448();
  puVar1 = *(undefined8 **)(lVar2 + 8);
  uVar4 = *(ulong *)(lVar2 + 0x10);
  puVar5 = puVar1;
  uStack_48 = extraout_x8;
  func_0x00010786a204(puVar1,uVar4,*(undefined8 *)(lVar2 + 0x18),param_2);
  if ((uVar4 & 1) == 0) {
    uStack_50 = 0;
    func_0x000107869848(*(undefined8 *)(param_1 + 0x20),param_2,auStack_b8);
    func_0x00010726af18(auStack_b0);
  }
  else {
    puVar3 = puVar5;
    FUN_10745fc40();
    if ((int)puVar3 == 0) goto LAB_10750aaf4;
    func_0x00010786981c(*(undefined8 *)(param_1 + 0x20),param_2,puVar5);
  }
  func_0x00010786981c(*(long *)(param_1 + 0x20) + 0x18,param_2,param_3);
  puVar5 = (undefined8 *)(param_1 + 0x18);
  func_0x00010786a52c(puVar1 + 3,*(undefined8 *)(param_1 + 0x10),*puVar5,param_2);
  func_0x000107869e84(puVar1,*(undefined8 *)(param_1 + 0x10),*puVar5,param_2,param_3);
LAB_10750aaf4:
  func_0x00010750b428(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(puVar5 + 1);
  func_0x00010750b494();
  func_0x00010750b4c4();
  func_0x00010750b4bc();
  func_0x00010750b458();
  return;
}



/* Entry: 10750ab34; end: 10750ab5b;  */

void FUN_10750ab34(undefined8 param_1)

{
  func_0x00010750b4c4();
  func_0x00010750b4bc(param_1,&PTR_DAT_1109b7c50);
  func_0x00010750b458();
  return;
}



/* Entry: 10750ab5c; end: 10750ab6f;  */

undefined ** FUN_10750ab5c(void)

{
  return &PTR_DAT_1109b7c50;
}



/* Entry: 10750ab70; end: 10750ab93;  */

void FUN_10750ab70(void)

{
  func_0x00010750b4d8();
  func_0x00010750b484(&PTR_DAT_1109b7c70);
  return;
}



/* Entry: 10750ab94; end: 10750abaf;  */

void FUN_10750ab94(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109b7c70;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10750abb0; end: 10750ac37;  */

void FUN_10750abb0(long param_1)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  char cStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x00010750b448();
  uStack_28 = extraout_x8;
  func_0x00010750b5e0();
  uVar1 = cStack_50 == '\x01';
  if ((bool)uVar1) {
    uStack_40 = *(undefined8 *)(param_1 + 0x10);
    ppuStack_48 = &PTR_DAT_1109b7ce0;
    pppuStack_30 = &ppuStack_48;
    func_0x00010750b594();
    func_0x00010750b564();
  }
  func_0x00010750b534();
  func_0x00010750b428(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010750b564();
  func_0x00010750b534();
  func_0x00010750b494();
  func_0x00010750b4c4();
  func_0x00010750b4bc();
  func_0x00010750b458();
  return;
}



/* Entry: 10750ac38; end: 10750ac5f;  */

void FUN_10750ac38(undefined8 param_1)

{
  func_0x00010750b4c4();
  func_0x00010750b4bc(param_1,&PTR_DAT_1109b7d50);
  func_0x00010750b458();
  return;
}



/* Entry: 10750ac60; end: 10750ac73;  */

undefined ** FUN_10750ac60(void)

{
  return &PTR_DAT_1109b7d50;
}



/* Entry: 10750ac74; end: 10750ac9f;  */

void FUN_10750ac74(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x00010750b504();
  uVar2 = param_1[1];
  *puVar1 = &PTR_DAT_1109b7ce0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10750aca0; end: 10750accb;  */

void FUN_10750aca0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109b7ce0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10750accc; end: 10750acf3;  */

void FUN_10750accc(undefined8 param_1)

{
  func_0x00010750b4c4();
  func_0x00010750b4bc(param_1,&PTR_DAT_1109b7d40);
  func_0x00010750b458();
  return;
}



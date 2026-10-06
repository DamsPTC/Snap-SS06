/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077bd57c; end: 1077bd59f;  */

void FUN_1077bd57c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077bebc0(param_2,param_1 + 8);
  func_0x0001077bebf8();
  func_0x000107283e34();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  lVar2 = *(long *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x0001077be93c();
    } while (extraout_w10 != 0);
  }
  func_0x0001077bd444(unaff_x19 + 0x40,unaff_x20 + 0x38);
  return;
}



/* Entry: 1077bda14; end: 1077bda17;  */

undefined8 * FUN_1077bda14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dbf18;
  func_0x0001077bdb88(param_1 + 1);
  return param_1;
}



/* Entry: 1077bdb34; end: 1077bdb87;  */

void FUN_1077bdb34(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001077bebc0();
  *param_1 = &PTR_FUN_1109dbf18;
  func_0x0001077bd444(param_1 + 1);
  func_0x0001072c8ed8(param_1 + 5,unaff_x20 + 0x20);
  return;
}



/* Entry: 1077bde90; end: 1077be143;  */

/* WARNING: Possible PIC construction at 0x0001077be098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077be124: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077be09c) */
/* WARNING: Removing unreachable block (ram,0x0001077be0c4) */
/* WARNING: Removing unreachable block (ram,0x0001077be0cc) */
/* WARNING: Removing unreachable block (ram,0x0001077be0e4) */
/* WARNING: Removing unreachable block (ram,0x0001077be10c) */
/* WARNING: Removing unreachable block (ram,0x0001077be118) */
/* WARNING: Removing unreachable block (ram,0x0001077be0a8) */
/* WARNING: Removing unreachable block (ram,0x0001077be128) */
/* WARNING: Removing unreachable block (ram,0x0001077be140) */

undefined4 * FUN_1077bde90(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  ulong auStack_480 [8];
  undefined8 uStack_440;
  undefined1 uStack_410;
  undefined1 auStack_408 [72];
  undefined1 auStack_3c0 [8];
  undefined8 uStack_3b8;
  undefined8 *puStack_3b0;
  int iStack_348;
  undefined1 auStack_230 [400];
  undefined1 auStack_a0 [64];
  undefined1 uStack_60;
  
  func_0x0001077be83c();
  uStack_3b8 = 1;
  puVar3 = (undefined8 *)0xb8;
  __Znwm();
  plVar6 = puVar3 + 1;
  *plVar6 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_1109dc018;
  puStack_3b0 = puVar3;
  func_0x0001072692d4(auStack_230,param_2);
  puVar5 = puVar3 + 3;
  *puVar5 = &PTR_DAT_1109dc068;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 8) = 0x3f800000;
  puVar3[9] = auStack_230;
  *(undefined1 *)(puVar3 + 10) = 0;
  *(undefined1 *)(puVar3 + 0x12) = 0;
  *(undefined1 *)(puVar3 + 0x13) = 0;
  *(undefined1 *)(puVar3 + 0x16) = 0;
  func_0x000107269e60(auStack_230);
  puStack_3b0 = (undefined8 *)0x0;
  puStack_490 = puVar5;
  puStack_488 = puVar3;
  func_0x0001077be168(auStack_3c0);
  if ((*(byte *)(param_4 + 0x40) & 1) == 0) {
    auStack_a0[0] = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000104c32a18(auStack_230,param_4);
    func_0x00010729d394(auStack_a0,auStack_230);
    func_0x000104c3323c(auStack_230);
  }
  func_0x000107751284(auStack_3c0);
  func_0x000107284cf0(auStack_408,auStack_a0);
  func_0x000107542f90(&uStack_3b8,auStack_408);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  auStack_480[0] = auStack_480[0] & 0xffffffffffffff00;
  uStack_410 = 0;
  puStack_4a0 = puVar5;
  puStack_498 = puVar3;
  FUN_107751444(auStack_3c0,&puStack_4a0,auStack_480);
  func_0x000107751334(auStack_230,auStack_3c0);
  func_0x000107267e8c(auStack_480);
  func_0x000107267e44(&puStack_4a0);
  func_0x000107267ed0(auStack_408);
  func_0x000107267da8(auStack_3c0);
  uStack_440 = 0;
  auStack_480[5] = 0;
  auStack_480[4] = 0;
  auStack_480[7] = 0;
  auStack_480[6] = 0;
  auStack_480[1] = 0;
  auStack_480[0] = 0;
  auStack_480[3] = 0;
  auStack_480[2] = 0;
  func_0x000107753050(auStack_3c0,*param_3,auStack_230,auStack_480);
  func_0x00010724b3d8(auStack_480);
  if (iStack_348 == 1) {
    func_0x00010727f7dc(auStack_3c0);
    func_0x00010729d318(auStack_480);
    if ((char)uStack_440 == '\x01') {
      func_0x000104c32a18(param_1,auStack_480);
      func_0x000107267ed0(auStack_480);
      goto LAB_1077be080;
    }
    func_0x000107267ed0(auStack_480);
  }
  *param_1 = 7;
LAB_1077be080:
  func_0x0001077bec88();
  func_0x000107267da8(auStack_230);
  func_0x000107267ed0(auStack_a0);
  ppuVar4 = &puStack_490;
  func_0x0001077bed9c();
  if (ppuVar4 != (undefined8 **)0x0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1077be284; end: 1077be2af;  */

long FUN_1077be284(long param_1)

{
  return *(long *)(param_1 + 0x30) + 0x20;
}



/* Entry: 1077be5a0; end: 1077be607;  */

undefined ** FUN_1077be5a0(void)

{
  return &PTR_DAT_1109dc160;
}



/* Entry: 1077be6c4; end: 1077be6cb;  */

void FUN_1077be6c4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001077bd418();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077bef7c; end: 1077bef7f;  */

undefined8 * FUN_1077bef7c(undefined8 *param_1)

{
  func_0x0001077b68e0(param_1 + 0x10);
  func_0x0001072aca78(param_1 + 0xf);
  func_0x00010724b3d8(param_1 + 7);
  *param_1 = &PTR_DAT_1109db730;
  func_0x000107783268(param_1 + 5);
  func_0x0001074f7454(param_1 + 1);
  return param_1;
}



/* Entry: 1077bf2a8; end: 1077bf2cf;  */

void FUN_1077bf2a8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x0001077bf2d0(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1077bf424; end: 1077bf453;  */

void FUN_1077bf424(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  uStack_28 = param_3[5];
  uStack_30 = param_3[4];
  uStack_18 = param_3[7];
  uStack_20 = param_3[6];
  func_0x0001077bf7f4(param_1,param_2,&uStack_50);
  return;
}



/* Entry: 1077bf760; end: 1077bf7f3;  */

undefined ** FUN_1077bf760(void)

{
  return &PTR_DAT_1109dc378;
}



/* Entry: 1077bf9f0; end: 1077bfa73;  */

void FUN_1077bf9f0(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077bfe60(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077c0820();
  return;
}



/* Entry: 1077bfe38; end: 1077bfe5f;  */

long FUN_1077bfe38(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1077bffd8; end: 1077c0013;  */

void FUN_1077bffd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001077bffe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1077c0184; end: 1077c01ab;  */

undefined8 * FUN_1077c0184(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109dc490;
  puVar1[1] = uVar2;
  func_0x000104c2fe00(puVar1 + 2,param_1 + 0x10);
  return puVar1;
}



/* Entry: 1077c0680; end: 1077c06eb;  */

void FUN_1077c0680(undefined8 param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR_DAT_1131ad2e8;
  uStack_30 = param_1;
  func_0x000107563ab8(&ppuStack_38);
  func_0x0001072f5f6c();
  func_0x0001077c07d8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072f5f6c(&ppuStack_38);
  func_0x0001077c0804();
  ___cxa_allocate_exception(0x10);
  func_0x0001077c0748();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1077c0728);
  (*pcVar1)();
}



/* Entry: 1077c092c; end: 1077c093f;  */

void FUN_1077c092c(void)

{
  func_0x0001077c0940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c0bcc; end: 1077c0c2f;  */

void FUN_1077c0bcc(void)

{
  undefined1 auStack_30 [16];
  
  func_0x0001077c1228(auStack_30);
  func_0x0001077c13e8();
  return;
}



/* Entry: 1077c0e5c; end: 1077c0e8b;  */

void FUN_1077c0e5c(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x1642c8590b21643) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb8);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001077c1428();
  func_0x0001077c0ed8();
  return;
}



/* Entry: 1077c0f94; end: 1077c0fbf;  */

void FUN_1077c0f94(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x2aaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x60);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_1109dc620;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077c1074; end: 1077c10ef;  */

/* WARNING: Possible PIC construction at 0x0001077c10b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077c10bc) */
/* WARNING: Removing unreachable block (ram,0x0001077c10d8) */
/* WARNING: Removing unreachable block (ram,0x0001077c10ec) */
/* WARNING: Removing unreachable block (ram,0x0001077c10d0) */
/* WARNING: Removing unreachable block (ram,0x0001077c1388) */

undefined8 *
FUN_1077c1074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  
  func_0x0001077c1374();
  func_0x0001077c0f6c(auStack_50,1);
  puStack_40[1] = 0;
  puStack_40[2] = 0;
  *puStack_40 = &PTR_DAT_1109dc620;
  func_0x0001077c1128(puStack_40 + 3,param_2,param_3,param_4);
  return puStack_40;
}



/* Entry: 1077c1318; end: 1077c1353;  */

undefined8 * FUN_1077c1318(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001074f7454(&uStack_30);
  return param_1;
}



/* Entry: 1077c1a30; end: 1077c1a43;  */

void FUN_1077c1a30(void)

{
  func_0x0001077c19fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c1d74; end: 1077c1ddb;  */

void FUN_1077c1d74(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x0001077c1bb4(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x48;
  }
  return;
}



/* Entry: 1077c1f34; end: 1077c1f9f;  */

void FUN_1077c1f34(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001077c287c();
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001077c2864();
    } while (extraout_w10 != 0);
  }
  func_0x0001077c1ef0(unaff_x19 + 0x20,unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  return;
}



/* Entry: 1077c22ec; end: 1077c22f7;  */

undefined ** FUN_1077c22ec(void)

{
  return &PTR_DAT_1109dc800;
}



/* Entry: 1077c24c0; end: 1077c251f;  */

void FUN_1077c24c0(long param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined1 auStack_40 [32];
  
  func_0x0001077c25b8(auStack_40,param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,auStack_40);
    func_0x0001077c1d38(auStack_40);
    return;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1077c2510);
  (*pcVar1)();
}



/* Entry: 1077c2714; end: 1077c273f;  */

undefined1  [16] FUN_1077c2714(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  func_0x0001077c2740(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1077c2a90; end: 1077c2cab;  */

/* WARNING: Possible PIC construction at 0x0001077c2b40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077c2b44) */

undefined8 ** FUN_1077c2a90(undefined8 **param_1,undefined8 **param_2)

{
  undefined1 uVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 extraout_x8;
  undefined8 **unaff_x20;
  undefined8 ***unaff_x22;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 **ppuStack_300;
  undefined8 **ppuStack_2f8;
  undefined1 *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 **ppuStack_2d8;
  undefined1 auStack_2d0 [56];
  undefined1 auStack_298 [24];
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_48;
  
  ppuVar2 = param_1;
  func_0x0001077c3418();
  uVar1 = *(int *)(ppuVar2 + 0x16) == 1;
  if ((bool)uVar1) {
    ppuVar4 = param_1 + 1;
    puVar6 = *ppuVar4;
    ppuVar2 = param_1 + 7;
    func_0x0001077c0124(ppuVar2);
    func_0x0001077c343c(&puStack_80);
    puVar3 = puStack_70;
    puStack_70[1] = 0;
    puStack_70[2] = 0;
    *puStack_70 = &PTR_DAT_1109dc878;
    func_0x00010750fed8(&puStack_278,ppuVar2);
    FUN_1077c34b8(puVar3 + 3,puVar6,&puStack_278);
    func_0x00010750fcd8(&puStack_278);
    puVar3 = puStack_70;
    puStack_70 = (undefined8 *)0x0;
    func_0x0001077c2fd0(&puStack_80);
    puStack_78 = puVar3;
    puStack_278 = (undefined8 *)0x0;
    uStack_270 = 0;
    puStack_80 = puVar3 + 3;
    func_0x0001077c2e34(&puStack_278);
    ppuVar5 = &puStack_80;
    puVar7 = (undefined *)0x1077c2b44;
    ppuVar2 = param_1;
    unaff_x20 = ppuVar4;
  }
  else {
    ppuVar5 = param_2;
    uStack_48 = extraout_x8;
    if (param_1[0x17] == (undefined8 *)0x0) {
      ppuVar2 = param_1 + 7;
      func_0x0001077c0108(ppuVar2);
      func_0x000104c2fe00(&puStack_80,ppuVar2);
      func_0x000107526c60(&puStack_278);
      unaff_x22 = &ppuStack_2d8;
      ppuStack_2d8 = param_1;
      func_0x000104c2fe00(auStack_2d0,&puStack_80);
      puStack_280 = (undefined8 *)0x0;
      puVar3 = (undefined8 *)0x48;
      __Znwm();
      *puVar3 = &PTR_DAT_1109dc8c8;
      puVar3[1] = ppuStack_2d8;
      func_0x000104c2fe00(puVar3 + 2,auStack_2d0);
      ppuVar5 = &puStack_278;
      puStack_280 = puVar3;
      (*(code *)(*param_2)[2])(&puStack_2e0,param_2,ppuVar5,auStack_298);
      puVar3 = puStack_2e0;
      puStack_2e0 = (undefined8 *)0x0;
      puVar6 = param_1[0x17];
      param_1[0x17] = puVar3;
      if (puVar6 != (undefined8 *)0x0) {
        func_0x0001077c346c();
        puVar3 = puStack_2e0;
        puStack_2e0 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          func_0x0001077c346c();
        }
      }
      func_0x0001072ad0c8(auStack_298);
      func_0x000104c2f714(auStack_2d0);
      func_0x00010724b374(&puStack_278);
      ppuVar2 = &puStack_80;
      func_0x000104c2f714();
      unaff_x20 = param_2;
    }
    func_0x0001077c33fc(uStack_48);
    if ((bool)uVar1) {
      return ppuVar2;
    }
    ___stack_chk_fail();
    func_0x0001072ad0c8(auStack_298);
    func_0x000104c2f714(unaff_x22 + 1);
    func_0x00010724b374(&puStack_278);
    ppuVar4 = &puStack_80;
    func_0x000104c2f714();
    puVar7 = &SUB_1077c2cac;
    func_0x0001077c3434();
  }
  puVar6 = ppuVar5[1];
  puVar3 = *ppuVar5;
  *ppuVar5 = (undefined8 *)0x0;
  ppuVar5[1] = (undefined8 *)0x0;
  uStack_320 = 0;
  uStack_318 = 0;
  puStack_308 = ppuVar4[1];
  puStack_310 = *ppuVar4;
  ppuVar4[1] = puVar6;
  *ppuVar4 = puVar3;
  ppuStack_300 = unaff_x20;
  ppuStack_2f8 = ppuVar2;
  puStack_2f0 = &stack0xfffffffffffffff0;
  puStack_2e8 = puVar7;
  func_0x0001074f7454(&puStack_310);
  func_0x0001074fffa0(&uStack_320);
  return ppuVar4;
}



/* Entry: 1077c2f04; end: 1077c2f2b;  */

long FUN_1077c2f04(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001077c2f2c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1077c3060; end: 1077c3087;  */

undefined8 * FUN_1077c3060(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109dc8c8;
  puVar1[1] = uVar2;
  func_0x000104c2fe00(puVar1 + 2,param_1 + 0x10);
  return puVar1;
}



/* Entry: 1077c34b8; end: 1077c34f3;  */

undefined8 * FUN_1077c34b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_1077b706c();
  *puVar1 = &PTR_DAT_1109dc948;
  func_0x000107564e10(puVar1 + 0x10,param_3);
  return param_1;
}



/* Entry: 1077c3724; end: 1077c3773;  */

void FUN_1077c3724(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 auStack_a0 [6];
  undefined4 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = *(long *)(param_1 + 8);
  auStack_a0[0] = 0x1c;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_DAT_110996720;
  uStack_78 = 0;
  uStack_60 = 0x1c;
  uStack_58 = 0;
  uStack_54 = 1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,1);
  uStack_a8 = 0;
  uStack_c0 = **(undefined8 **)(lVar1 + 0x28);
  uStack_b8 = 3;
  func_0x00010743fa9c(*(undefined8 **)(lVar1 + 0x28),auStack_a0,&uStack_b0,&uStack_c0,7);
  uStack_b0 = 0;
  __ZNSt13exception_ptraSERKS_(lVar1 + 0x3b8,&uStack_b0);
  __ZNSt13exception_ptrD1Ev(&uStack_b0);
  (**(code **)(**(long **)(lVar1 + 0x3a8) + 0x30))();
  func_0x0001001a5598(lVar1 + 0x50);
  func_0x0001077c4178(lVar1,param_2,param_3);
  func_0x000107262330(auStack_a0);
  return;
}



/* Entry: 1077c3914; end: 1077c3933;  */

void FUN_1077c3914(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010725af58();
  }
  return;
}



/* Entry: 1077c3a60; end: 1077c3f3f;  */

undefined8 *
FUN_1077c3a60(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  param_2[3] = &PTR_DAT_1109dca50;
  *param_2 = &PTR_DAT_1109dc988;
  param_2[1] = &PTR_DAT_1109dc9e8;
  param_2[2] = &PTR_DAT_1109dca28;
  *(undefined2 *)(param_2 + 4) = 0;
  *(undefined1 *)((long)param_2 + 0x22) = 0;
  param_2[5] = param_5;
  uVar1 = *param_3;
  param_2[7] = param_3[1];
  param_2[6] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_2[9] = param_4[1];
  param_2[8] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  uVar1 = 0x58;
  __Znwm();
  func_0x000107520ab4(param_1);
  param_2[0x12] = 0;
  param_2[0x11] = uVar1;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  func_0x0001074eb0cc(&uStack_c0);
  param_2[0x16] = uStack_b8;
  param_2[0x15] = uStack_c0;
  func_0x0001077c9f6c();
  func_0x0001074f4d90();
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  func_0x0001074eb0f4(&uStack_c0);
  param_2[0x1b] = uStack_b8;
  param_2[0x1a] = uStack_c0;
  func_0x0001077c9f6c();
  func_0x0001074f4db4();
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  func_0x0001074eb11c(&uStack_c0);
  param_2[0x20] = uStack_b8;
  param_2[0x1f] = uStack_c0;
  func_0x0001077c9f6c();
  func_0x0001074f4dd8();
  *(undefined1 *)(param_2 + 0x21) = 0;
  *(undefined4 *)(param_2 + 0x27) = 1;
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2e) = 1;
  param_2[0x2f] = 300000000;
  param_2[0x31] = 30000000;
  param_2[0x30] = 30000000;
  param_2[0x34] = 0;
  param_2[0x33] = 0;
  param_2[0x36] = 0;
  param_2[0x35] = 0;
  *(undefined1 *)(param_2 + 0x37) = 1;
  uVar2 = 0x18;
  __Znwm();
  uVar1 = uVar2;
  func_0x0001077ae0f8();
  param_2[0x38] = uVar2;
  func_0x0001077ca28c();
  func_0x0001077b4e14();
  param_2[0x3b] = 0;
  param_2[0x39] = uVar1;
  param_2[0x3a] = &PTR_DAT_1109ed050;
  *(undefined8 *)((long)param_2 + 500) = 0;
  *(undefined8 *)((long)param_2 + 0x1ec) = 0;
  *(undefined1 *)(param_2 + 0x46) = 0;
  *(undefined1 *)(param_2 + 0x47) = 0;
  *(undefined1 *)(param_2 + 0x4a) = 0;
  *(undefined1 *)(param_2 + 0x4b) = 0;
  *(undefined1 *)(param_2 + 0x4e) = 0;
  *(undefined1 *)(param_2 + 0x4f) = 0;
  *(undefined1 *)(param_2 + 0x55) = 0;
  param_2[0x40] = 0;
  param_2[0x42] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x43) = 0;
  func_0x00010725aae0(param_2 + 0x56);
  func_0x00010746a83c(&uStack_c0);
  param_2[0x68] = uStack_b8;
  param_2[0x67] = uStack_c0;
  func_0x0001077c9f6c();
  func_0x00010747090c();
  puVar3 = (undefined8 *)0x40;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_1109dcb90;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 7) = 0x3f800000;
  func_0x0001077c9f6c();
  func_0x0001077c6304();
  param_2[0x69] = puVar3 + 3;
  param_2[0x6a] = puVar3;
  uStack_80 = 0;
  uStack_78 = 0;
  puVar3 = &uStack_80;
  func_0x0001077c6304();
  func_0x0001077c9fa4();
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = &UNK_10e52b660;
  *puVar3 = &PTR_DAT_1109dcbe0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[4] = 0;
  func_0x0001077c9f6c();
  func_0x0001077c6328();
  param_2[0x6b] = puVar3 + 3;
  param_2[0x6c] = puVar3;
  uStack_80 = 0;
  uStack_78 = 0;
  puVar3 = &uStack_80;
  func_0x0001077c6328();
  func_0x0001077ca260();
  puVar3[2] = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_DAT_1109dcc30;
  *(undefined1 *)(puVar3 + 3) = 0;
  *(undefined1 *)(puVar3 + 0x1e) = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  func_0x0001077c634c(&uStack_c0);
  param_2[0x6d] = puVar3 + 3;
  param_2[0x6e] = puVar3;
  uStack_78 = 0;
  uStack_80 = 0;
  puVar3 = &uStack_80;
  func_0x0001077c634c();
  param_2[0x70] = 0;
  param_2[0x6f] = 0;
  param_2[0x72] = 0;
  param_2[0x71] = 0;
  *(undefined4 *)(param_2 + 0x73) = 0x3f800000;
  param_2[0x74] = &PTR_DAT_1109dcaf0;
  param_2[0x75] = param_2 + 0x74;
  param_2[0x77] = 0;
  param_2[0x76] = 0;
  *(undefined1 *)(param_2 + 0x78) = 0;
  func_0x00010726ed14(param_2 + 0x79);
  param_2[0x7b] = param_2;
  func_0x00010785f1f4();
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  puVar3 = puVar3 + 0x38;
  func_0x00010724e2c8(puVar3,&uStack_c0);
  *(char *)(param_2 + 0x78) = (char)puVar3;
  uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
  uStack_90 = 1;
  func_0x000107310c44(param_2 + 0x21,&uStack_c0);
  func_0x00010727fc1c(&uStack_c0);
  *(undefined8 **)(param_2[0x11] + 0x18) = param_2;
  *(undefined8 **)(param_2[0x38] + 0x10) = param_2 + 3;
  return param_2;
}



/* Entry: 1077c4670; end: 1077c4973;  */

void FUN_1077c4670(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long *plVar4;
  undefined4 uStack_398;
  undefined1 uStack_394;
  undefined1 auStack_390 [24];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined1 uStack_354;
  undefined1 auStack_350 [24];
  undefined8 uStack_338;
  undefined **appuStack_330 [2];
  undefined1 auStack_320 [8];
  undefined4 auStack_318 [6];
  undefined4 uStack_300;
  undefined **ppuStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d0;
  undefined1 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2a8 [24];
  undefined8 *puStack_290;
  long lStack_288;
  undefined4 uStack_280;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined1 auStack_80 [40];
  undefined8 uStack_58;
  
  func_0x0001077c9d00();
  auStack_318[0] = 0x1d;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  ppuStack_2f8 = &PTR_DAT_110996720;
  uStack_2f0 = 0;
  uStack_2d8 = 0x1d;
  uStack_2d0 = 0;
  uStack_2cc = 1;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2c8 = 0;
  uStack_250 = CONCAT44(uStack_250._4_4_,1);
  uStack_248 = 0;
  lStack_288 = **(long **)(param_1 + 0x28);
  uStack_280 = 3;
  uStack_58 = extraout_x8;
  func_0x00010743fa9c(*(long **)(param_1 + 0x28),auStack_318,&uStack_250,&lStack_288,7);
  if (*(long *)(unaff_x19 + 0x30) == 0) {
    plVar4 = *(long **)(unaff_x19 + 0x3a8);
    func_0x00010740efc4(appuStack_330,&UNK_10f42a395);
    appuStack_330[0] = &PTR_DAT_1109dcb68;
    func_0x00010bdb1468(auStack_320,appuStack_330);
    (**(code **)(*plVar4 + 0x58))(plVar4,auStack_320);
    __ZNSt13exception_ptrD1Ev(auStack_320);
    __ZNSt13runtime_errorD2Ev(appuStack_330);
  }
  else {
    uStack_250 = 0;
    __ZNSt13exception_ptraSERKS_(unaff_x19 + 0x3b8,&uStack_250);
    __ZNSt13exception_ptrD1Ev(&uStack_250);
    func_0x0001077c9e90();
    (**(code **)(extraout_x8_00 + 0x30))();
    *(undefined1 *)(unaff_x19 + 0x21) = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (unaff_x19 + 0x50,param_2);
    func_0x000107262e9c(&lStack_288,unaff_x19 + 0x50);
    func_0x000107526c28(&uStack_250,&lStack_288);
    func_0x000104c2f714(&lStack_288);
    func_0x0001072adb50(auStack_80,param_4);
    plVar4 = *(long **)(unaff_x19 + 0x30);
    uStack_398 = 0;
    uStack_394 = param_3;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_390,param_2);
    func_0x0001077c63f4(&uStack_370,unaff_x19 + 0x3c8);
    puVar2 = (undefined8 *)&uStack_358;
    func_0x0001077c6448(puVar2,&uStack_398);
    puStack_290 = (undefined8 *)0x0;
    func_0x0001077ca064();
    *puVar2 = &PTR_DAT_1109dcc80;
    puVar2[2] = uStack_368;
    puVar2[1] = uStack_370;
    uStack_370 = 0;
    uStack_368 = 0;
    puVar2[3] = uStack_360;
    *(undefined4 *)(puVar2 + 4) = uStack_358;
    *(undefined1 *)((long)puVar2 + 0x24) = uStack_354;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar2 + 5,auStack_350)
    ;
    puVar2[8] = uStack_338;
    puStack_290 = puVar2;
    (**(code **)(*plVar4 + 0x10))(&lStack_288,plVar4,&uStack_250,auStack_2a8);
    lVar1 = lStack_288;
    lStack_288 = 0;
    lVar3 = *(long *)(unaff_x19 + 0x80);
    *(long *)(unaff_x19 + 0x80) = lVar1;
    if (lVar3 != 0) {
      func_0x0001077c9d14();
      lVar1 = lStack_288;
      lStack_288 = 0;
      if (lVar1 != 0) {
        func_0x0001077c9d14();
      }
    }
    func_0x0001072ad0c8(auStack_2a8);
    func_0x0001077c4978(&uStack_370);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_390);
    func_0x0001077ca098();
  }
  func_0x000107262330(auStack_318);
  func_0x0001077c9cec(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt13exception_ptrD1Ev(auStack_320);
  __ZNSt13runtime_errorD2Ev(appuStack_330);
  func_0x000107262330(auStack_318);
  func_0x0001077c9da4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1077c59b0; end: 1077c59e7;  */

undefined8 FUN_1077c59b0(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = param_1;
  func_0x0001077c95fc();
  if (plVar1 < (long *)(param_1[1] - *param_1 >> 3)) {
    uVar2 = *(undefined8 *)(*param_1 + (long)plVar1 * 8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1077c5d4c; end: 1077c5ddb;  */

void FUN_1077c5d4c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong *extraout_x8;
  int extraout_w10;
  long unaff_x20;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  func_0x0001077ca30c();
  puVar1 = (ulong *)(*(undefined8 **)(param_1 + 0xa8))[1];
  for (puVar5 = (ulong *)**(undefined8 **)(param_1 + 0xa8); puVar4 = puVar1, puVar5 != puVar1;
      puVar5 = puVar5 + 2) {
    uVar2 = *puVar5;
    func_0x000107283140();
    puVar4 = puVar5;
    if ((uVar2 & 1) != 0) break;
  }
  if (puVar4 == *(ulong **)(*(long *)(unaff_x20 + 0xa8) + 8)) {
    uVar3 = 0;
    *(undefined1 *)extraout_x8 = 0;
  }
  else {
    uVar2 = puVar4[1];
    uVar6 = *puVar4;
    extraout_x8[1] = puVar4[1];
    *extraout_x8 = uVar6;
    if (uVar2 != 0) {
      do {
        func_0x0001077c9f5c();
      } while (extraout_w10 != 0);
    }
    uVar3 = 1;
  }
  *(undefined1 *)(extraout_x8 + 2) = uVar3;
  return;
}



/* Entry: 1077c5fdc; end: 1077c6027;  */

void FUN_1077c5fdc(void)

{
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001077c9de8();
  func_0x0001077ca29c();
  func_0x0001077ca0b8();
  func_0x0001077ca268(*(undefined8 *)(extraout_x8 + 0x28));
  if (((*(byte *)(unaff_x19 + 4) & 1) == 0) && (*(long *)(unaff_x20 + 0x30) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001077ca0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x10))();
    return;
  }
  return;
}



/* Entry: 1077c6390; end: 1077c63df;  */

undefined8 FUN_1077c6390(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107410d38(param_1 + 0x18);
  func_0x00010752ac44(param_1);
  func_0x000107529510();
  return unaff_x19;
}



/* Entry: 1077c6588; end: 1077c65bb;  */

undefined1 * FUN_1077c6588(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  func_0x0001077c65bc();
  return param_1;
}



/* Entry: 1077c702c; end: 1077c7147;  */

void FUN_1077c702c(long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  if (1 < param_2) {
    uVar8 = param_2 - 2U >> 1;
    if ((long)param_3 - param_1 >> 4 <= (long)uVar8) {
      lVar7 = (long)param_3 - param_1 >> 3;
      uVar5 = lVar7 + 1;
      puVar2 = (ulong *)(param_1 + uVar5 * 0x10);
      uVar1 = lVar7 + 2;
      puVar9 = puVar2;
      uVar11 = uVar5;
      if ((long)uVar1 < param_2) {
        uVar4 = *puVar2;
        func_0x000104c2fc44(uVar4,puVar2[2]);
        puVar9 = puVar2 + 2;
        uVar11 = uVar1;
        if ((int)uVar4 == 0) {
          puVar9 = puVar2;
          uVar11 = uVar5;
        }
      }
      uVar5 = *puVar9;
      func_0x0001077c9e74();
      if ((uVar5 & 1) == 0) {
        uVar12 = *param_3;
        *param_3 = 0;
        param_3[1] = 0;
        do {
          func_0x0001077ca100();
          if ((long)uVar8 < (long)uVar11) break;
          uVar1 = uVar11 << 1 | 1;
          puVar3 = (undefined8 *)(param_1 + uVar1 * 0x10);
          uVar5 = uVar11 * 2 + 2;
          puVar10 = puVar3;
          uVar11 = uVar1;
          if ((long)uVar5 < param_2) {
            uVar6 = *puVar3;
            func_0x000104c2fc44(uVar6,puVar3[2]);
            puVar10 = puVar3 + 2;
            uVar11 = uVar5;
            if ((int)uVar6 == 0) {
              puVar10 = puVar3;
              uVar11 = uVar1;
            }
          }
          uVar6 = *puVar10;
          func_0x000104c2fc44(uVar6,uVar12);
        } while ((int)uVar6 == 0);
        func_0x0001077ca2d0();
        func_0x0001077c9f94();
      }
    }
  }
  return;
}



/* Entry: 1077c7224; end: 1077c7237;  */

void FUN_1077c7224(void)

{
  func_0x0001077c7244();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c7528; end: 1077c7533;  */

undefined ** FUN_1077c7528(void)

{
  return &PTR_DAT_1109dcce0;
}



/* Entry: 1077c82b0; end: 1077c82bb;  */

undefined ** FUN_1077c82b0(void)

{
  return &PTR_DAT_1109dcd70;
}



/* Entry: 1077c83ec; end: 1077c843f;  */

undefined8 * FUN_1077c83ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109dcd90;
  func_0x0001077c49cc(param_1 + 1);
  return param_1;
}



/* Entry: 1077c85dc; end: 1077c85fb;  */

void FUN_1077c85dc(void)

{
  func_0x0001077ca2ec();
  func_0x0001077c85fc();
  return;
}



/* Entry: 1077c88bc; end: 1077c88c7;  */

undefined ** FUN_1077c88bc(void)

{
  return &PTR_DAT_1109dcf00;
}



/* Entry: 1077c8b38; end: 1077c8b5f;  */

void FUN_1077c8b38(undefined8 param_1)

{
  func_0x0001077c9e84();
  func_0x0001077c9e30(param_1,&PTR_DAT_1109dcf90);
  func_0x0001077c9d4c();
  return;
}



/* Entry: 1077c8c88; end: 1077c8c93;  */

undefined ** FUN_1077c8c88(void)

{
  return &PTR_DAT_1109dd020;
}



/* Entry: 1077c8dfc; end: 1077c8e4f;  */

undefined8 * FUN_1077c8dfc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109dd040;
  func_0x0001077c4a44(param_1 + 1);
  return param_1;
}



/* Entry: 1077c8f70; end: 1077c9037;  */

void FUN_1077c8f70(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_1077c8fb8;
    }
    return;
  }
LAB_1077c8fb8:
  if (param_2 == 0) {
    func_0x0001077c9134(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    func_0x0001077c914c(plVar2);
    func_0x0001077c9134(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1077c92c0; end: 1077c9343;  */

long FUN_1077c92c0(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  long *unaff_x19;
  ulong uVar5;
  
  func_0x0001077c9e24();
  puVar3 = (undefined8 *)*param_1;
  uVar2 = param_1[1] - *param_1 >> 4;
  while (puVar1 = puVar3, uVar2 != 0) {
    uVar5 = uVar2 >> 1;
    iVar4 = (int)puVar1[uVar5 * 2] + 0x10;
    func_0x000104c2fc44();
    puVar3 = puVar1 + uVar5 * 2 + 2;
    uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
    if (iVar4 == 0) {
      puVar3 = puVar1;
      uVar2 = uVar5;
    }
  }
  return (long)puVar1 - *unaff_x19 >> 4;
}



/* Entry: 1077c947c; end: 1077c94af;  */

void FUN_1077c947c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077c9de8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x000107529620();
  }
  return;
}



/* Entry: 1077c9734; end: 1077c975b;  */

void FUN_1077c9734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001077ca2ec(param_1,param_2,param_2,param_3);
  func_0x0001077c975c();
  return;
}



/* Entry: 1077c9908; end: 1077c998b;  */

/* WARNING: Possible PIC construction at 0x0001077c993c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077c9940) */
/* WARNING: Removing unreachable block (ram,0x0001077c9974) */
/* WARNING: Removing unreachable block (ram,0x0001077c9988) */
/* WARNING: Removing unreachable block (ram,0x0001077c9964) */

undefined8 * FUN_1077c9908(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  func_0x0001077c9d20();
  func_0x0001074f9598(auStack_40,1);
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_1109b7130;
  puStack_30[1] = 0;
  func_0x000107471f3c(puStack_30 + 3,param_2);
  return puStack_30;
}



/* Entry: 1077c9c78; end: 1077c9c83;  */

undefined ** FUN_1077c9c78(void)

{
  return &PTR_DAT_1109dd1c0;
}



/* Entry: 1077ca410; end: 1077ca49b;  */

void FUN_1077ca410(undefined8 param_1,uint *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  int extraout_w8;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x0001077efc88();
  func_0x0001077f0954();
  if ((bool)in_ZR) {
    func_0x0001077ca49c(param_2);
  }
  else if (extraout_w8 == 4) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = (ulong)*param_2 * 0x18;
    lVar1 = (ulong)*param_2 * 3;
    while (lVar1 != 0) {
      if (*(short *)(lVar2 + 0x16) == 3) {
        func_0x0001077ef0e0();
        func_0x0001077ca49c();
      }
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -0x18;
      lVar1 = lVar3;
    }
  }
  lVar2 = unaff_x20[1];
  uVar4 = *unaff_x20;
  unaff_x19[1] = unaff_x20[1];
  *unaff_x19 = uVar4;
  if (lVar2 != 0) {
    do {
      func_0x0001077f0f48();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1077cacfc; end: 1077cad3b;  */

void FUN_1077cacfc(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined1 auStack_108 [136];
  byte bStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001077ee468();
  func_0x000107563d94(auStack_38);
  func_0x0001077ef55c();
  func_0x0001077ee344(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eecd4();
  func_0x0001077ef068();
  func_0x0001077efd7c();
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0001077cadb0(auStack_108,extraout_x9,&uStack_78);
  if ((bStack_80 & 1) != 0) {
    func_0x0001077cadf0(unaff_x19 + 0xb0,auStack_108);
  }
  func_0x0001077d5df0(auStack_108);
  func_0x0001077f02ec();
  return;
}



/* Entry: 1077cafa8; end: 1077cb013;  */

void FUN_1077cafa8(void)

{
  undefined8 extraout_x9;
  long unaff_x19;
  undefined1 auStack_58 [24];
  byte bStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077efd7c();
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077cb014(auStack_58,extraout_x9,&uStack_38);
  if ((bStack_40 & 1) != 0) {
    func_0x0001077cb054(unaff_x19 + 0x168,auStack_58);
  }
  func_0x0001077d5e10(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return;
}



/* Entry: 1077cfdc0; end: 1077cfdcf;  */

bool FUN_1077cfdc0(undefined8 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = puVar2;
  func_0x0001073270c8();
  return (uint *)(*(long *)(puVar2 + 2) + (ulong)*puVar2 * 0x30) != puVar1;
}



/* Entry: 1077d5334; end: 1077d53c7;  */

void FUN_1077d5334(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined1 auStack_e0 [48];
  byte bStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_70 [32];
  char cStack_50;
  undefined1 auStack_48 [8];
  
  func_0x0001077ee374();
  uVar1 = 0;
  if (*(short *)(param_2 + 0x16) == 4) {
    func_0x0001077eec18();
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    func_0x0001077efb9c();
    func_0x0001077f1cb4(auStack_70,param_1 + 8,auStack_48);
    func_0x0001072f5f6c(auStack_48);
    uVar1 = cStack_50 == '\x01';
    if ((bool)uVar1) {
      FUN_1077b3074(unaff_x19 + 0x3d8,auStack_70);
    }
    func_0x0001073b0514(auStack_70);
  }
  func_0x0001077ee28c();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077efcd0();
  func_0x0001072f5f6c();
  func_0x0001077ef068();
  func_0x0001077f0954();
  if ((bool)uVar1) {
    func_0x0001077efd7c();
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    func_0x0001077d5440(auStack_e0,extraout_x9,&uStack_a8);
    if ((bStack_b0 & 1) != 0) {
      func_0x00010793f5a4(unaff_x19 + 400,auStack_e0);
    }
    func_0x0001077da3dc(auStack_e0);
    func_0x0001077f02ec();
  }
  return;
}



/* Entry: 1077d5bc8; end: 1077d5d43;  */

undefined1 * FUN_1077d5bc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x22;
  long lStack_b0;
  long lStack_a8;
  undefined1 uStack_90;
  undefined1 auStack_88 [4];
  undefined1 uStack_84;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  
  func_0x0001077f184c();
  func_0x0001077ee434();
  puVar3 = (undefined1 *)*param_4;
  if (puVar3 != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 8);
    func_0x00010771feb4(extraout_x8,puVar1);
    if ((*(byte *)(extraout_x8 + 0x10) & 1) != 0) goto LAB_1077d5ce4;
    func_0x0001072c95d0(extraout_x8);
  }
  func_0x0001077efb9c();
  uStack_50 = *(undefined8 *)(param_1 + 8);
  puStack_78 = &UNK_10e52b660;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lVar4 = *(long *)(unaff_x22 + 0x50);
  func_0x00010757995c(&puStack_78);
  lVar2 = unaff_x22 + 0x38;
  func_0x000107552d68();
  lStack_b0 = lVar2;
  while (lStack_a8 = lVar4, lStack_b0 != 0) {
    func_0x000107721d94(auStack_88,lVar4 + 0x70);
    func_0x000107579438(&puStack_78,lVar4);
    func_0x0001077205cc();
    func_0x000107722144(auStack_88);
    func_0x000107552de8(&lStack_b0);
    lVar4 = lStack_a8;
  }
  auStack_88[0] = 0;
  uStack_84 = 0;
  func_0x0001077f1964();
  func_0x000107579804();
  uStack_90 = 1;
  puVar3 = auStack_58;
  func_0x000107771274(extraout_x8);
  func_0x0001072c94e0(&lStack_b0);
  func_0x0001072c9500(&puStack_78);
  puVar1 = auStack_58;
  func_0x0001072f5f6c(puVar1);
LAB_1077d5ce4:
  func_0x0001077ee314();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077ef244();
    func_0x0001072c94e0();
    func_0x0001072c9500(&puStack_78);
    puVar1 = auStack_58;
    func_0x0001072f5f6c(puVar1);
    func_0x0001077ef068();
    func_0x0001004a5364(puVar3,&PTR_DAT_1109dd270);
    puVar1 = puVar1 + 8;
    if ((int)puVar3 == 0) {
      puVar1 = (undefined1 *)0x0;
    }
    return puVar1;
  }
  return puVar1;
}



/* Entry: 1077d5e90; end: 1077d5eff;  */

void FUN_1077d5e90(void)

{
  undefined8 uStack_48;
  
  func_0x0001077eef14();
  func_0x00010752c148();
  func_0x0001077ef4c8();
  func_0x00010752c230();
  func_0x000107277f0c(uStack_48);
  func_0x0001077efec4();
  func_0x00010752c198();
  func_0x0001077f1000();
  func_0x00010752c400();
  return;
}



/* Entry: 1077d75f8; end: 1077d7747;  */

long FUN_1077d75f8(long param_1)

{
  func_0x00010727fc1c(param_1 + 0x608);
  func_0x000107266a30(param_1 + 0x5d0);
  func_0x00010732442c(param_1 + 0x560);
  func_0x00010732442c(param_1 + 0x4e8);
  func_0x00010733acb4(param_1 + 0x490);
  func_0x000107560d40(param_1 + 0x458);
  func_0x000107266a30(param_1 + 0x420);
  func_0x000107266a30(param_1 + 1000);
  func_0x00010732442c(param_1 + 0x378);
  func_0x00010755fea8(param_1 + 0x338);
  func_0x00010732442c(param_1 + 0x2c8);
  func_0x00010732442c(param_1 + 0x250);
  func_0x00010732442c(param_1 + 0x1d8);
  func_0x00010732442c(param_1 + 0x160);
  func_0x00010732442c(param_1 + 0xe8);
  func_0x000107266a30(param_1 + 0xa8);
  func_0x000107266a30(param_1 + 0x70);
  func_0x000107266a30(param_1 + 0x38);
  func_0x000107266a30(param_1);
  return param_1;
}



/* Entry: 1077d79b8; end: 1077d79d3;  */

void FUN_1077d79b8(void)

{
  func_0x0001077f1970();
  func_0x00010755b668();
  return;
}



/* Entry: 1077d7e2c; end: 1077d7eab;  */

undefined8 * FUN_1077d7e2c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  int unaff_w23;
  
  func_0x0001077ee32c();
  if (*(int *)(param_3 + 0x70) == 0) {
    func_0x0001077ee28c();
    if ((bool)in_ZR) {
      func_0x0001077f106c();
SUB_104c2fe00:
      func_0x0001000d03a8();
      func_0x000104c2feb0();
      unaff_x19[6] = 0xffffffffffffffff;
      func_0x000104c2fe38();
      unaff_x19[6] = unaff_x20;
      return unaff_x19;
    }
  }
  else {
    func_0x0001077f1840();
    if ((bool)in_ZR) {
      func_0x0001077ee28c();
      if ((bool)in_ZR) {
        func_0x0001077f0fe8();
        goto SUB_104c2fe00;
      }
    }
    else {
      func_0x0001077ee890();
      func_0x0001077ee9c4();
      func_0x0001077efaf8();
      func_0x0001077efa48();
      func_0x0001077ee28c();
      if ((bool)in_ZR) {
        return param_1;
      }
    }
  }
  uVar1 = 0;
  ___stack_chk_fail();
  func_0x0001077ef21c();
  func_0x000104c2f714();
  func_0x0001077efa48();
  func_0x0001077ef068();
  puVar2 = param_1;
  func_0x0001077ee434();
  puVar2 = (undefined8 *)*puVar2;
  func_0x0001077ef734(puVar2);
  func_0x0001077efcac();
  if ((bool)uVar1) {
    func_0x0001077ef72c();
    func_0x00010755ced0();
    func_0x0001077f1648();
  }
  else {
    unaff_w22 = 0;
    unaff_w21 = 0;
    unaff_w23 = 1;
  }
  func_0x0001077ee79c();
  if (unaff_w23 == 0) {
    param_4 = (undefined8 *)(ulong)(unaff_w21 | unaff_w22);
  }
  else {
    uVar1 = *(char *)((long)param_1 + 0x2c) == '\x01';
    if ((bool)uVar1) {
      param_4 = (undefined8 *)(ulong)*(uint *)(param_1 + 5);
    }
  }
  func_0x0001077ee314();
  if ((bool)uVar1) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x0001077ee510();
  func_0x0001077ef068();
  func_0x0001077ee32c();
  func_0x0001077ef048();
  func_0x0001077ee8ac();
  func_0x0001077f05dc();
  func_0x0001077ef7b8();
  func_0x0001077efdf0();
  func_0x0001077efe10();
  func_0x0001077ee28c();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001077ef8a8();
  func_0x0001077efe10();
  func_0x0001077ef068();
  func_0x0001077f1970();
  func_0x00010755ccf0();
  return puVar2;
}



/* Entry: 1077d82b0; end: 1077d8363;  */

long FUN_1077d82b0(long param_1)

{
  func_0x00010727e9d0(param_1 + 0x170);
  func_0x0001077f1534();
  func_0x000107266a30(param_1 + 0x100);
  func_0x000107266a30(param_1 + 200);
  func_0x00010727e9d0(param_1 + 0x78);
  func_0x0001077efd28();
  return param_1;
}



/* Entry: 1077d878c; end: 1077d8863;  */

long FUN_1077d878c(long param_1)

{
  func_0x00010727e9d0(param_1 + 0xb0);
  func_0x000107560e68(param_1 + 0x78);
  func_0x0001077efd28();
  return param_1;
}



/* Entry: 1077d8d34; end: 1077d8fb7;  */

void FUN_1077d8d34(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x21;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [56];
  undefined1 auStack_138 [56];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_c8 [56];
  undefined1 auStack_90 [80];
  
  func_0x0001077ee358();
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  if ((*(int *)(param_1 + 0x50) == 0) || (in_ZR = *(int *)(param_1 + 0x50) == 1, (bool)in_ZR)) {
    func_0x0001077efd30(auStack_1a8);
  }
  else {
    func_0x0001077eeff4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_c8,&uStack_100)
    ;
    func_0x0001077f0288(auStack_1a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
    func_0x0001077ef544();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_100);
  func_0x0001077d9104(auStack_90);
  func_0x0001077ef914(auStack_c8);
  func_0x0001077efb94();
  func_0x0001077d9108(auStack_90);
  func_0x0001077ef914(&uStack_100);
  func_0x0001077efb94();
  func_0x0001077d910c(auStack_90);
  func_0x0001077ef914(auStack_138);
  func_0x0001077efb94();
  func_0x0001077d9110(auStack_90);
  func_0x0001077ef914(auStack_170);
  func_0x0001077efb94();
  func_0x0001077d9114(auStack_190);
  if ((*(int *)(unaff_x21 + 0x278) == 0) || (in_ZR = *(int *)(unaff_x21 + 0x278) == 1, (bool)in_ZR))
  {
    func_0x0001077f03c8();
    func_0x000107268400();
  }
  else {
    func_0x0001077eeff4();
    func_0x000107268400(auStack_180,auStack_190);
    func_0x0001077ef0e0(&uStack_1c0);
    func_0x000107339590();
    func_0x000104c335c0(auStack_180);
    func_0x0001077ef544();
  }
  puVar1 = auStack_190;
  func_0x000104c335c0();
  func_0x0001077f1308();
  puVar2 = puVar1;
  func_0x0001077f0c30();
  func_0x000104c318bc(puVar2 + 0x20,auStack_c8);
  func_0x000104c318bc(puVar1 + 0x58,&uStack_100);
  func_0x000104c318bc(puVar1 + 0x90,auStack_138);
  func_0x000104c318bc(puVar1 + 200,auStack_170);
  *(undefined8 *)(puVar1 + 0x108) = uStack_1b8;
  *(undefined8 *)(puVar1 + 0x100) = uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  func_0x0001077f07dc(&PTR_DAT_1109dd9d0);
  func_0x000104c335c0(&uStack_1c0);
  func_0x0001077f11e8();
  func_0x0001077efe08();
  func_0x0001077f0e5c();
  func_0x000104c2f714(auStack_c8);
  func_0x0001077ef370();
  func_0x0001077ee314();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077f0c78();
    func_0x000104c335c0();
    func_0x0001077ef544();
    func_0x000104c335c0(auStack_190);
    func_0x000104c2f714(auStack_170);
    do {
      func_0x000104c2f714();
      func_0x000104c2f714(&uStack_100);
      func_0x000104c2f714(auStack_c8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
      func_0x0001077ef068();
      func_0x0001077efc7c();
    } while( true );
  }
  return;
}



/* Entry: 1077d93dc; end: 1077d945b;  */

long FUN_1077d93dc(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_c0 [144];
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x0001077ee32c();
  if (*(int *)(param_3 + 0x70) == 0) {
    func_0x0001077ee28c();
    if ((bool)in_ZR) {
      func_0x0001077f106c();
      goto SUB_104c2fe00;
    }
  }
  else {
    func_0x0001077f1840();
    if ((bool)in_ZR) {
      func_0x0001077ee28c();
      if ((bool)in_ZR) {
        func_0x0001077f0fe8();
        goto SUB_104c2fe00;
      }
    }
    else {
      func_0x0001077ee890();
      func_0x0001077ee9c4();
      func_0x0001077efaf8();
      func_0x0001077efa48();
      func_0x0001077ee28c();
      if ((bool)in_ZR) {
        return param_1;
      }
    }
  }
  ___stack_chk_fail();
  func_0x0001077ef21c();
  func_0x000104c2f714();
  func_0x0001077efa48();
  unaff_x30 = &UNK_1077d945c;
  func_0x0001077ef068();
  register0x00000008 = (BADSPACEBASE *)auStack_c0;
  unaff_x29 = puVar1;
SUB_104c2fe00:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001000d03a8();
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 1077d9784; end: 1077d97ef;  */

long FUN_1077d9784(long param_1)

{
  func_0x00010727e9d0(param_1 + 0x38);
  func_0x0001075610b8(param_1);
  return param_1;
}



/* Entry: 1077d9b44; end: 1077d9b57;  */

void FUN_1077d9b44(void)

{
  return;
}



/* Entry: 1077d9d0c; end: 1077d9d37;  */

void FUN_1077d9d0c(void)

{
  __Znwm(8);
  func_0x0001077f1acc(&PTR_DAT_1109ddd18);
  return;
}



/* Entry: 1077da008; end: 1077da047;  */

undefined1 * FUN_1077da008(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001077ee468();
  puVar1 = auStack_38;
  func_0x0001077da078(puVar1);
  func_0x0001077ef55c();
  func_0x0001077ee344(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001077eecd4();
  func_0x0001077ef068();
  func_0x0001077da094();
  return puVar1 + 0x48;
}



/* Entry: 1077da3ac; end: 1077da3b7;  */

undefined ** FUN_1077da3ac(void)

{
  return &PTR_DAT_1109dded8;
}



/* Entry: 1077da8dc; end: 1077da9f3;  */

void FUN_1077da8dc(int param_1)

{
  undefined1 in_ZR;
  undefined1 *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [32];
  undefined1 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_b4;
  undefined1 auStack_b0 [16];
  byte bStack_a0;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined1 auStack_88 [88];
  
  func_0x0001077ef424();
  func_0x0001077f0e64();
  if (param_1 == 0) {
    (**(code **)(*unaff_x20 + 0x50))(unaff_x20 + 1);
    func_0x0001077efc48();
    *unaff_x19 = in_ZR;
    *(undefined4 *)(unaff_x19 + 0x30) = 1;
  }
  else {
    uStack_90 = 2;
    func_0x0001077ef09c(auStack_88,auStack_98);
    func_0x0001072c9884(auStack_98);
    uStack_b8 = 0;
    uStack_b4 = 0;
    auStack_e0[0] = 0;
    uStack_c0 = 0;
    func_0x0001077ef358(auStack_b0,auStack_88);
    func_0x0001072c94e0(auStack_e0);
    if ((bStack_a0 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined4 *)(unaff_x19 + 0x30) = 1;
    }
    else {
      func_0x0001077f131c(auStack_110,auStack_b0);
      func_0x0001077efeb8();
      func_0x0001073863ec();
      func_0x0001077f1440();
    }
    func_0x0001072c95d0(auStack_b0);
    func_0x0001077f0a80();
  }
  return;
}



/* Entry: 1077dcb78; end: 1077dcbc3;  */

void FUN_1077dcb78(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if (lVar1 != 0) {
    func_0x0001077ee6cc();
  }
  func_0x0001077df314(param_1 + 0x148);
  func_0x00010727fc1c(param_1 + 0x110);
  func_0x000107780d58(param_1 + 0xd0);
  func_0x00010732442c(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 1077dd5d4; end: 1077dd5e7;  */

void FUN_1077dd5d4(void)

{
  func_0x0001077dda38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077dda70; end: 1077dda7f;  */

long FUN_1077dda70(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined4 extraout_w8;
  undefined1 auStack_c0 [128];
  int iStack_40;
  
  param_1 = param_1 + 8;
  func_0x0001077ee374();
  func_0x0001077f0170();
  func_0x0001077ef8cc();
  func_0x0001077f0360();
  func_0x0001077f02e0();
  if (iStack_40 == 0) {
    func_0x0001077f13c8();
    func_0x000104c2d614();
    if ((int)param_1 != 0) {
      func_0x0001077efcb8();
      goto code_r0x0001077ddafc;
    }
  }
  func_0x0001077f0354(auStack_c0);
  func_0x0001077ef810();
  func_0x0001077eff90();
code_r0x0001077ddafc:
  func_0x0001077eef78();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar1 = param_1;
  func_0x0001077eef78();
  func_0x0001077ef068();
  if (*(int *)(lVar1 + 0x80) == 0) {
    return lVar1 + 8;
  }
  func_0x00010563ab98();
  func_0x0001077ef148();
  *(undefined4 *)(lVar1 + 0x78) = extraout_w8;
  func_0x0001077ddb8c();
  return param_1;
}



/* Entry: 1077ddc40; end: 1077ddc47;  */

void FUN_1077ddc40(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(*param_1);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077ddd98; end: 1077ddde3;  */

void FUN_1077ddd98(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001077ee564();
  while (unaff_x21 != unaff_x19) {
    func_0x0001077f140c();
    func_0x0001077f1800();
  }
  func_0x0001077efad0();
  func_0x0001077ddde4();
  return;
}



/* Entry: 1077ddf74; end: 1077ddf93;  */

void FUN_1077ddf74(void)

{
  func_0x0001077ddf94();
  return;
}



/* Entry: 1077de130; end: 1077de15b;  */

void FUN_1077de130(void)

{
  uint extraout_w8;
  
  func_0x0001077f0c60();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001077de15c();
  }
  return;
}



/* Entry: 1077de3d4; end: 1077de3fb;  */

void FUN_1077de3d4(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001077f0638();
  func_0x0001077f0a90();
  func_0x0001077de688();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1077de6c4; end: 1077de707;  */

void FUN_1077de6c4(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef424();
  func_0x0001074730f4();
  iVar1 = *(int *)(unaff_x20 + 0x78);
  if (iVar1 != -1) {
    func_0x0001077eebf8(&PTR_DAT_1109de088);
    *(int *)(unaff_x19 + 0x78) = iVar1;
  }
  return;
}



/* Entry: 1077de86c; end: 1077de877;  */

void FUN_1077de86c(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001077ef34c(*param_1,param_1[1]);
  func_0x0001074730f4();
  func_0x0001077ef474();
  func_0x000104c318bc();
  *(undefined4 *)(unaff_x20 + 0x78) = 0;
  return;
}



/* Entry: 1077de954; end: 1077de97f;  */

void FUN_1077de954(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x78) == 2) {
    func_0x000104c342bc(param_2,param_3);
    func_0x000104c2f698();
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    return;
  }
  func_0x0001077f1770();
  func_0x0001077de980();
  return;
}



/* Entry: 1077deac4; end: 1077deb1b;  */

void FUN_1077deac4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef62c();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x88) {
    func_0x0001077eff90();
  }
  return;
}



/* Entry: 1077decc0; end: 1077dee93;  */

void FUN_1077decc0(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long in_x6;
  long lVar5;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000048;
  
  func_0x0001077f0f94();
  func_0x0001077ef9e8();
  func_0x0001077ef1ec(param_2);
  func_0x0001077ef1fc(unaff_x27 + 0x18);
  func_0x0001077ef228(unaff_x27 + 0x30);
  func_0x0001077ef1ec();
  func_0x0001077ef1fc(unaff_x26 + 0x18);
  func_0x0001077ef228(unaff_x26 + 0x30);
  func_0x0001077ef1ec();
  func_0x0001077ef1fc(unaff_x25 + 0x18);
  func_0x0001077ef228(unaff_x25 + 0x30);
  func_0x0001077ef1ec();
  func_0x0001077ef1fc(unaff_x24 + 0x18);
  func_0x0001077ef228(unaff_x24 + 0x30);
  func_0x0001077ef1ec();
  func_0x0001077ef1fc(unaff_x23 + 0x18);
  func_0x0001077ef228(unaff_x23 + 0x30);
  func_0x0001077ef1ec(in_x6);
  func_0x0001077ef1fc(in_x6 + 0x18);
  func_0x0001077ef228(in_x6 + 0x30);
  func_0x0001077eebb8();
  func_0x0001077ee7b8();
  func_0x0001077eec48();
  func_0x0001077ef1ec(in_stack_00000000);
  func_0x0001077ef1fc(in_stack_00000000 + 0x18);
  func_0x0001077ef228(in_stack_00000000 + 0x30);
  func_0x0001077ef1ec(in_stack_00000008);
  func_0x0001077ef1fc(in_stack_00000008 + 0x18);
  func_0x0001077ef228(in_stack_00000008 + 0x30);
  func_0x0001077eebb8();
  func_0x0001077ee7b8();
  func_0x0001077eec48();
  func_0x0001077eebb8();
  func_0x0001077ee7b8();
  func_0x0001077eec48();
  func_0x0001077eebb8();
  func_0x0001077ee7b8();
  func_0x0001077eec48();
  func_0x0001077eebb8();
  func_0x0001077ee7b8();
  func_0x0001077eec48();
  func_0x0001077eebb8();
  func_0x0001077ee7b8();
  func_0x0001077eec48();
  func_0x0001077eebb8();
  func_0x0001077ee7b8();
  func_0x0001077eec48();
  func_0x0001077eebb8();
  func_0x0001077ee7b8();
  func_0x0001077eec48();
  func_0x0001077eebb8();
  func_0x0001077ee7b8();
  plVar2 = (long *)(in_stack_00000048 + 0x30);
  if ((*(int *)(in_stack_00000048 + 0x40) == 0) || (*(int *)(param_1 + 0x40) == 0)) {
    func_0x00010774a660(param_1 + 0x30,&stack0xffffffffffffffcf);
  }
  else if (*(int *)(in_stack_00000048 + 0x40) == 2) {
    if (*(int *)(param_1 + 0x40) == 2) {
      FUN_10774a6b0();
      plVar3 = plVar2;
      FUN_10774a6b0();
      lVar5 = *(long *)(*plVar3 + 0x18);
      func_0x00010774a6b8();
      lVar5 = *(long *)(*plVar3 + 0x18) + lVar5;
      func_0x00010747b534();
      FUN_10774a6b0();
      plVar3 = plVar2;
      func_0x00010774a6b8();
      func_0x00010746bbb8();
      func_0x00010774a6b8();
      func_0x00010745f964();
      lVar4 = *plVar2;
      while (plVar3 != (long *)0x0) {
        func_0x0001072628ec(&stack0xffffffffffffffb8,lVar4,lVar5);
        func_0x000107262260(&stack0xffffffffffffffd0);
      }
      return;
    }
    uVar1 = *(uint *)(in_stack_00000048 + 0x40);
    if (*(int *)(param_1 + 0x40) != -1 || uVar1 != 0xffffffff) {
      if (uVar1 == 0xffffffff) {
        if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
          (*(code *)(&PTR_DAT_1109acee0)[*(uint *)(param_1 + 0x40)])
                    (&stack0xffffffffffffffdf,param_1 + 0x30,plVar2);
        }
        *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
        return;
      }
      (*(code *)(&PTR_DAT_1109b3228)[uVar1])(&stack0xffffffffffffffe8);
    }
    return;
  }
  return;
}



/* Entry: 1077df168; end: 1077df193;  */

void FUN_1077df168(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_20 = *param_3;
  uStack_18 = *(undefined4 *)(param_3 + 1);
  func_0x0001077df194(param_1,param_2,&uStack_20);
  return;
}



/* Entry: 1077df4c8; end: 1077df5cf;  */

ulong FUN_1077df4c8(void)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x9;
  long lVar3;
  long extraout_x9_00;
  long extraout_x10;
  long lVar4;
  long extraout_x10_00;
  int extraout_w11;
  int iVar5;
  int extraout_w11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  ulong unaff_x19;
  ulong uVar6;
  long unaff_x21;
  undefined1 auStack_270 [72];
  undefined1 auStack_228 [72];
  undefined1 auStack_1e0 [416];
  
  func_0x0001077ee358();
  func_0x0001077efc18();
  func_0x0001077df79c(auStack_228);
  if (*(int *)(unaff_x21 + 0x78) != 0) {
    in_ZR = *(int *)(unaff_x21 + 0x78) == 1;
    if ((bool)in_ZR) {
      func_0x0001077f02c4();
    }
    else {
      func_0x0001077efe74(auStack_1e0);
      func_0x0001077ef0c4(auStack_270,unaff_x21 + 0x10,auStack_1e0);
      func_0x0001074332fc(auStack_1e0);
    }
  }
  func_0x000104c2f714(auStack_228);
  func_0x0001077df830(auStack_1e0,unaff_x21 + 0x80);
  func_0x0001077df830(auStack_228,unaff_x21 + 0xb8);
  FUN_1077df7bc();
  func_0x0001077efc00();
  func_0x0001077efc5c();
  func_0x0001077ef870();
  func_0x0001077ee314();
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x000104c2f714();
  func_0x0001077ef998();
  func_0x0001077ef0b0();
  func_0x0001077ef1b8();
  func_0x0001077df888();
  func_0x0001077f1184();
  func_0x0001077f118c();
  func_0x0001077f0bd8();
  func_0x0001077ee5f4();
  uVar6 = extraout_x8;
  lVar3 = extraout_x9;
  lVar4 = extraout_x10;
  iVar5 = extraout_w11;
  while( true ) {
    uVar2 = lVar3 == lVar4 && (int)uVar6 == iVar5;
    uVar6 = (ulong)(byte)uVar2;
    if (((bool)uVar2) || (func_0x0001077f03b4(), (extraout_w13 & 1) == 0)) break;
    func_0x0001077f038c();
    lVar3 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar2) {
      uVar1 = extraout_w8 + 1;
    }
    uVar6 = (ulong)uVar1;
    lVar4 = extraout_x10_00;
    iVar5 = extraout_w11_00;
  }
  func_0x0001077eff98();
  return uVar6;
}



/* Entry: 1077df7bc; end: 1077df82f;  */

void FUN_1077df7bc(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  long unaff_x22;
  undefined1 auStack_48 [8];
  
  func_0x0001077eead8();
  func_0x0001077f1264(param_2);
  func_0x0001077f115c(unaff_x21 + 0x18);
  FUN_10774a39c(unaff_x21 + 0x30,unaff_x22 + 0x30);
  func_0x0001077f1264();
  func_0x0001077f115c(unaff_x20 + 0x18);
  FUN_10774a39c(unaff_x20 + 0x30,unaff_x22 + 0x30);
  func_0x0001077f1264();
  func_0x0001077f115c(unaff_x19 + 0x18);
  plVar2 = (long *)(unaff_x19 + 0x30);
  if ((*(int *)(unaff_x19 + 0x40) == 0) || (*(int *)(unaff_x22 + 0x40) == 0)) {
    func_0x00010774a660(unaff_x22 + 0x30,&stack0xffffffffffffffcf);
  }
  else if (*(int *)(unaff_x19 + 0x40) == 2) {
    if (*(int *)(unaff_x22 + 0x40) == 2) {
      FUN_10774a6b0();
      plVar3 = plVar2;
      FUN_10774a6b0();
      lVar5 = *(long *)(*plVar3 + 0x18);
      func_0x00010774a6b8();
      lVar5 = *(long *)(*plVar3 + 0x18) + lVar5;
      func_0x00010747b534();
      FUN_10774a6b0();
      plVar3 = plVar2;
      func_0x00010774a6b8();
      func_0x00010746bbb8();
      func_0x00010774a6b8();
      func_0x00010745f964();
      lVar4 = *plVar2;
      while (plVar3 != (long *)0x0) {
        func_0x0001072628ec(auStack_48,lVar4,lVar5);
        func_0x000107262260(&stack0xffffffffffffffd0);
      }
      return;
    }
    uVar1 = *(uint *)(unaff_x19 + 0x40);
    if (*(int *)(unaff_x22 + 0x40) != -1 || uVar1 != 0xffffffff) {
      if (uVar1 == 0xffffffff) {
        if (*(uint *)(unaff_x22 + 0x40) != 0xffffffff) {
          (*(code *)(&PTR_DAT_1109acee0)[*(uint *)(unaff_x22 + 0x40)])
                    (&stack0xffffffffffffffdf,unaff_x22 + 0x30,plVar2);
        }
        *(undefined4 *)(unaff_x22 + 0x40) = 0xffffffff;
        return;
      }
      (*(code *)(&PTR_DAT_1109b3228)[uVar1])(&stack0xffffffffffffffe8);
    }
    return;
  }
  return;
}



/* Entry: 1077e1774; end: 1077e1aeb;  */

void FUN_1077e1774(void)

{
  undefined1 in_ZR;
  long unaff_x21;
  undefined1 auStack_660 [72];
  undefined1 auStack_618 [16];
  undefined4 uStack_608;
  undefined4 uStack_5f0;
  undefined4 uStack_5d8;
  undefined1 auStack_5d0 [72];
  undefined1 auStack_588 [72];
  undefined1 auStack_540 [72];
  undefined1 auStack_4f8 [72];
  undefined1 auStack_4b0 [72];
  undefined1 auStack_468 [72];
  undefined1 auStack_420 [72];
  undefined1 auStack_3d8 [72];
  undefined1 auStack_390 [72];
  undefined1 auStack_348 [72];
  undefined1 auStack_300 [72];
  undefined1 auStack_2b8 [72];
  undefined1 auStack_270 [72];
  undefined1 auStack_228 [16];
  undefined4 uStack_218;
  undefined4 uStack_200;
  undefined4 uStack_1e8;
  undefined1 auStack_1e0 [416];
  
  func_0x0001077ee358();
  func_0x0001077eea20(1);
  FUN_1077e1e24(auStack_270);
  if ((*(int *)(unaff_x21 + 0x50) == 0) || (in_ZR = *(int *)(unaff_x21 + 0x50) == 1, (bool)in_ZR)) {
    uStack_218 = 1;
    uStack_200 = uStack_218;
    uStack_1e8 = uStack_218;
  }
  else {
    func_0x0001077efe74(auStack_1e0);
    func_0x0001077ef0c4(auStack_228,unaff_x21 + 8,auStack_1e0);
    func_0x0001074332fc(auStack_1e0);
  }
  func_0x0001077f15f8();
  func_0x0001077ef820(auStack_270,unaff_x21 + 0x58);
  func_0x0001077ef820(auStack_2b8,unaff_x21 + 0x90);
  func_0x0001077ef820(auStack_300,unaff_x21 + 200);
  func_0x0001077ef820(auStack_348,unaff_x21 + 0x100);
  func_0x0001077ef820(auStack_390,unaff_x21 + 0x138);
  func_0x0001077ef820(auStack_3d8,unaff_x21 + 0x170);
  func_0x0001077f1338(auStack_420,unaff_x21 + 0x1a8);
  func_0x0001077f1338(auStack_468,unaff_x21 + 0x1f0);
  func_0x0001077ef820(auStack_4b0,unaff_x21 + 0x238);
  func_0x0001077ef820(auStack_4f8,unaff_x21 + 0x270);
  func_0x0001077ef820(auStack_540,unaff_x21 + 0x270);
  func_0x0001077ef820(auStack_588,unaff_x21 + 0x2e0);
  func_0x0001077ef820(auStack_5d0,unaff_x21 + 0x318);
  if ((*(int *)(unaff_x21 + 0x388) == 0) || (in_ZR = *(int *)(unaff_x21 + 0x388) == 1, (bool)in_ZR))
  {
    uStack_608 = 1;
    uStack_5f0 = uStack_608;
    uStack_5d8 = uStack_608;
  }
  else {
    func_0x0001077efe74(auStack_1e0);
    func_0x0001077ef0c4(auStack_618,unaff_x21 + 0x350,auStack_1e0);
    func_0x0001074332fc(auStack_1e0);
  }
  func_0x0001077ef820(auStack_1e0,unaff_x21 + 0x390);
  func_0x0001077f1338(auStack_660,unaff_x21 + 0x3c8);
  func_0x0001077f14bc(auStack_468);
  func_0x0001077f09ac();
  func_0x0001073ebef4(auStack_1e0);
  func_0x0001077f0d50();
  func_0x0001077f0e44();
  func_0x0001073ebef4(auStack_588);
  func_0x0001073ebef4(auStack_540);
  func_0x0001073ebef4(auStack_4f8);
  func_0x0001073ebef4(auStack_4b0);
  func_0x0001073ebef4(auStack_468);
  func_0x0001073ebef4(auStack_420);
  func_0x0001073ebef4(auStack_3d8);
  func_0x0001073ebef4(auStack_390);
  func_0x0001073ebef4(auStack_348);
  func_0x0001073ebef4(auStack_300);
  func_0x0001073ebef4(auStack_2b8);
  func_0x0001073ebef4(auStack_270);
  func_0x0001073ebef4(auStack_228);
  func_0x0001077ee314();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077f0e44();
    func_0x0001073ebef4(auStack_588);
    do {
      func_0x0001073ebef4(auStack_540);
      func_0x0001073ebef4(auStack_4f8);
      func_0x0001073ebef4(auStack_4b0);
      func_0x0001073ebef4(auStack_468);
      func_0x0001073ebef4(auStack_420);
      func_0x0001073ebef4(auStack_3d8);
      func_0x0001073ebef4(auStack_390);
      func_0x0001073ebef4(auStack_348);
      func_0x0001073ebef4(auStack_300);
      func_0x0001073ebef4(auStack_2b8);
      func_0x0001073ebef4(auStack_270);
      func_0x0001073ebef4(auStack_228);
      func_0x0001077ef998();
      func_0x0001077ef0b0();
    } while( true );
  }
  return;
}



/* Entry: 1077e1e24; end: 1077e1e43;  */

/* WARNING: Possible PIC construction at 0x000107544d4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107544d50) */
/* WARNING: Removing unreachable block (ram,0x000107544d78) */
/* WARNING: Removing unreachable block (ram,0x000107544d8c) */
/* WARNING: Removing unreachable block (ram,0x000107544d64) */

undefined8 * FUN_1077e1e24(undefined8 *param_1)

{
  undefined1 auStack_60 [64];
  
  func_0x0001075491f8(param_1,"");
  func_0x000100060964(auStack_60);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107544dec(param_1,auStack_60,&UNK_10dd62ad6,&UNK_10dd62ad6,&UNK_10dd62ad6,&UNK_10dd62ad6
                      ,&UNK_10dd62ad6,&UNK_10dd62ad6,&UNK_10dd62ad6,&UNK_10dd62ad6,&UNK_10dd62ad6,
                      &UNK_10dd62ad6);
  return param_1;
}



/* Entry: 1077e239c; end: 1077e244b;  */

bool FUN_1077e239c(undefined1 param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int extraout_w8;
  ulong extraout_x8;
  ulong uVar6;
  long extraout_x9;
  long lVar7;
  long extraout_x9_00;
  long extraout_x10;
  long lVar8;
  long extraout_x10_00;
  int extraout_w11;
  int iVar9;
  int extraout_w11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  long unaff_x19;
  undefined1 uStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  byte bStack_39;
  undefined1 auStack_38 [24];
  
  uStack_3d = param_1;
  func_0x0001077ef1b8();
  func_0x0001077e4248();
  cVar2 = (char)unaff_x19;
  cStack_3c = cVar2 + '`';
  FUN_1077e42ac();
  cStack_3b = cVar2 + -0x68;
  func_0x0001077df020();
  cStack_3a = cVar2 + -0x30;
  func_0x0001077df020();
  if (*(int *)(unaff_x19 + 0x150) == 0) {
    bStack_39 = 1;
  }
  else {
    bStack_39 = *(byte *)(unaff_x19 + 0x118) >> 1 & 1;
    if (*(int *)(unaff_x19 + 0x150) == 1) {
      bStack_39 = 1;
    }
  }
  func_0x0001077df080(auStack_38,&uStack_3d,5);
  func_0x0001077ee5f4();
  uVar6 = extraout_x8;
  lVar7 = extraout_x9;
  lVar8 = extraout_x10;
  iVar9 = extraout_w11;
  while ((bVar5 = (int)uVar6 == iVar9, bVar3 = lVar7 == lVar8 && bVar5, lVar7 != lVar8 || !bVar5 &&
         (uVar4 = bVar3, func_0x0001077f03b4(), (extraout_w13 & 1) != 0))) {
    func_0x0001077f038c();
    lVar7 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar4) {
      uVar1 = extraout_w8 + 1;
    }
    uVar6 = (ulong)uVar1;
    lVar8 = extraout_x10_00;
    iVar9 = extraout_w11_00;
  }
  func_0x0001077eff98();
  return bVar3;
}



/* Entry: 1077e25cc; end: 1077e261b;  */

void FUN_1077e25cc(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001077ef0d4();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x0001077ee6cc();
  }
  return;
}



/* Entry: 1077e278c; end: 1077e279f;  */

void FUN_1077e278c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x0001077e27bc();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 1077e2904; end: 1077e2963;  */

undefined8 * FUN_1077e2904(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  func_0x0001077ef1b8(param_1);
  func_0x0001077e2660();
  puVar1 = unaff_x19;
  func_0x0001077ef0d4();
  *unaff_x19 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001077ee6cc();
  }
  return unaff_x19;
}



/* Entry: 1077e2e28; end: 1077e2e8f;  */

void FUN_1077e2e28(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_180 [80];
  undefined1 auStack_110 [64];
  undefined8 uStack_d0;
  undefined1 auStack_98 [104];
  
  func_0x0001077ef62c();
  func_0x0001077ee374();
  func_0x0001077e3670(auStack_98);
  func_0x0001077ef474(extraout_x8);
  func_0x0001077e364c();
  func_0x0001077ef564();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eedc4();
  func_0x0001077ef068();
  uStack_d0 = param_1;
  func_0x0001077ee9f8();
  func_0x0001077ee374();
  FUN_1077e3748(auStack_110);
  func_0x0001077eeee0();
  func_0x0001077e3724();
  func_0x0001077ef230();
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077eea08();
    func_0x0001077ef068();
    func_0x0001077ee9f8();
    func_0x0001077ee374();
    func_0x0001077e37f4(auStack_180);
    func_0x0001077eeee0();
    func_0x0001077e3724();
    func_0x0001077ef230();
    func_0x0001077ee28c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001077eea08();
      func_0x0001077ef068();
      func_0x0001077f002c();
      func_0x0001077ee7c4();
      return;
    }
  }
  return;
}



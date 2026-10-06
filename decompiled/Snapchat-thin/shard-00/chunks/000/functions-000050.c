/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100144cdc; end: 100144ce3;  */

void FUN_100144cdc(void)

{
  return;
}



/* Entry: 100144ce4; end: 100145f73;  */

void FUN_100144ce4(void)

{
  return;
}



/* Entry: 100145f74; end: 100145fa3;  */

void FUN_100145f74(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 8;
  func_0x000107c60e20();
  FUN_100145fa4();
  *param_1 = uVar1;
  return;
}



/* Entry: 100145fa4; end: 100146123;  */

/* WARNING: Possible PIC construction at 0x000100145fd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100145fdc) */
/* WARNING: Removing unreachable block (ram,0x000100146068) */
/* WARNING: Removing unreachable block (ram,0x000100146054) */

undefined8 * FUN_100145fa4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0x148;
  func_0x000107c60e20();
  uStack_98 = 0x100145fdc;
  uStack_b0 = param_2;
  uStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_10012dbd0(auStack_c8,&UNK_10f75c616);
  FUN_100120d44(puVar1,auStack_c8);
  func_0x000107c60ca0(auStack_c8);
  *puVar1 = &PTR_DAT_110ce01a0;
  puVar1[0x25] = 0;
  puVar1[0x26] = param_2;
  func_0x0001001460d8(puVar1 + 0x27,puVar1);
  return puVar1;
}



/* Entry: 100146124; end: 100146153;  */

void FUN_100146124(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010b3bbc68(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100146154; end: 100146177;  */

undefined8 FUN_100146154(undefined8 param_1)

{
  func_0x00010014613c(param_1,0);
  return param_1;
}



/* Entry: 100146178; end: 10014617f;  */

void FUN_100146178(void)

{
  return;
}



/* Entry: 100146180; end: 1001468ff;  */

void FUN_100146180(void)

{
  return;
}



/* Entry: 100146900; end: 100146a0f;  */

void FUN_100146900(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c4a02c();
  puVar2 = (undefined8 *)0x90;
  func_0x000107c60e20();
  if ((int)puVar1 != 0) {
    FUN_10012d238(puVar2,1);
    *puVar2 = &PTR_DAT_110cd6720;
    puVar2[0x11] = 0;
    *param_1 = puVar2;
    return;
  }
  FUN_10012d238(puVar2,1);
  *puVar2 = &PTR_DAT_110cd66a8;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_40 = 0;
  puStack_38 = &UNK_10b32b8f8;
  uVar3 = 0;
  func_0x000107c60820(0,0,&uStack_80);
  puVar2[0x11] = uVar3;
  func_0x000107c607fc(puVar2[1],uVar3,*(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
  *param_1 = puVar2;
  return;
}



/* Entry: 100146a10; end: 100146a17;  */

void FUN_100146a10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x50);
  return;
}



/* Entry: 100146a18; end: 100146a37; -[_TtC25SCSystemLaunchTabServices25SCSystemLaunchTabServices launchTabCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100146a18(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113059890));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100146a38; end: 100146a6b; -[_TtC33SCSystemLaunchTabServicesProvider24SystemLaunchTabCacheImpl shouldSkipCameraPrewarm] */

uint FUN_100146a38(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100146a6c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 100146a6c; end: 100146c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100146a6c(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c3f0ec();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_38);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c615e8();
    uVar1 = (uint)lVar3;
    func_0x000100146b24();
    if ((uVar1 == 3) || (uVar1 == 0)) {
      FUN_100148aa4();
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1 & 1;
}



/* Entry: 100146c14; end: 100146d03; -[SCPreferencesBasedUserSessionRepository _logAuthTokenIsNil:snapTokenIsNil:] */

/* WARNING: Possible PIC construction at 0x000100146c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100146cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100146ce0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100146cb0) */
/* WARNING: Removing unreachable block (ram,0x000100146c84) */
/* WARNING: Removing unreachable block (ram,0x000100146c88) */
/* WARNING: Removing unreachable block (ram,0x000100146ce4) */

void FUN_100146c14(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd520;
  func_0x000107c5da64(PTR_PTR_1126bd520);
  func_0x000107c61180();
  func_0x000107c5e508();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100146d04; end: 100146d0f;  */

void FUN_100146d04(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined8 *unaff_x20;
  
  piVar4 = (int *)*param_3;
  *param_3 = 0;
  (**(code **)*unaff_x20)();
  if (piVar4 != (int *)0x0) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      (**(code **)(piVar4 + 4))(piVar4);
    }
  }
  return;
}



/* Entry: 100146d10; end: 100146d3b; +[SCGrapheneAuthenticationMetric userSessionAuthToken] */

void FUN_100146d10(void)

{
  func_0x000107c610f4(PTR_PTR_1126bd520);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100146d3c; end: 100146e6b; -[SCGrapheneMetricBase withDimension:value:] */

void FUN_100146d3c(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  lVar3 = param_1;
  func_0x000107c61158(param_1);
  func_0x000107c610f4();
  uVar7 = *(undefined8 *)(param_1 + 8);
  ppuVar4 = param_4;
  uStack_68 = param_3;
  func_0x000107c4adac();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110db6c78;
  if (ppuVar4 != (undefined **)0x0) {
    ppuStack_60 = param_4;
  }
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c();
  func_0x000107c61180();
  func_0x000107c3e164(uVar7);
  func_0x000107c61180();
  func_0x000107c46d6c(lVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar7);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
    return;
  }
  func_0x000107c60e78();
  pcVar6 = *(code **)(puVar5 + 0x20);
  plVar1 = (long *)(*(long *)(puVar5 + 0x30) + ((long)*(ulong *)(puVar5 + 0x28) >> 1));
  if ((*(ulong *)(puVar5 + 0x28) & 1) != 0) {
    pcVar6 = *(code **)(*plVar1 + ((ulong)pcVar6 & 0xffffffff));
  }
  pcStack_78 = FUN_100146e6c;
  uVar7 = *(undefined8 *)(puVar5 + 0x38);
  uVar2 = *(undefined8 *)(puVar5 + 0x40);
  *(undefined8 *)(puVar5 + 0x38) = 0;
  *(undefined8 *)(puVar5 + 0x40) = 0;
  lStack_88 = *(long *)(puVar5 + 0x48);
  *(undefined8 *)(puVar5 + 0x48) = 0;
  puStack_80 = &stack0xfffffffffffffff0;
  (*pcVar6)(plVar1,uVar7,uVar2,&lStack_88);
  lVar3 = lStack_88;
  lStack_88 = 0;
  if (lVar3 != 0) {
    func_0x000107c3907c();
  }
  return;
}



/* Entry: 100146e6c; end: 100147453;  */

void FUN_100146e6c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lStack_18;
  
  pcVar5 = *(code **)(param_1 + 0x20);
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1));
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    pcVar5 = *(code **)(*plVar1 + ((ulong)pcVar5 & 0xffffffff));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  lStack_18 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  (*pcVar5)(plVar1,uVar2,uVar3,&lStack_18);
  lVar4 = lStack_18;
  lStack_18 = 0;
  if (lVar4 != 0) {
    func_0x000107c3907c();
  }
  return;
}



/* Entry: 100147454; end: 100147473;  */

void FUN_100147454(double param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  bVar2 = true;
  if (0.0 <= param_1) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_1)) {
      bVar1 = param_1 == 1.0;
      bVar2 = 1.0 <= param_1;
    }
  }
  if (bVar2 && !bVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c213cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSThread_1126b47e0,PTR_s_setThreadPriority__112662958);
  return;
}



/* Entry: 100147474; end: 10014748b;  */

void FUN_100147474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100147488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x140) + 0x38))(*(long **)(param_1 + 0x140),param_1 + 8);
  return;
}



/* Entry: 10014748c; end: 10014749f;  */

void FUN_10014748c(void)

{
  return;
}



/* Entry: 1001474a0; end: 1001475bb;  */

void FUN_1001474a0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  int *piStack_1f0;
  undefined8 uStack_1e8;
  undefined4 *puStack_1e0;
  undefined1 auStack_1d8 [32];
  long *plStack_1b8;
  undefined4 uStack_17c;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [288];
  undefined2 auStack_48 [8];
  undefined8 uStack_38;
  
  FUN_10014748c(auStack_48);
  lVar7 = *(long *)(param_1 + 8);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  auStack_48[0] = 0x210;
  uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uStack_38 = extraout_x9;
  func_0x000107c60b34(uVar3,auStack_48);
  FUN_10014a6cc(lVar7 + 0xb0,uVar3);
  uStack_17c = 0xaaaaaaaa;
  uVar3 = *(undefined8 *)(lVar7 + 0xb0);
  func_0x000107c60b3c(uVar3,&uStack_17c);
  if ((int)uVar3 == 0) {
    FUN_100156e30();
    func_0x000107c377a4(auStack_178);
    FUN_1001549e4(auStack_168,&UNK_10f75c538);
    FUN_1001549e4();
    FUN_100155450(auStack_178);
    uVar6 = 0;
  }
  else {
    uVar6 = uStack_17c;
    FUN_10014db18();
  }
  func_0x00010012d504(lVar7 + 0x30);
  *(undefined4 *)(lVar7 + 0x24) = uVar6;
  *(undefined1 *)(lVar7 + 0x28) = 1;
  func_0x000107c6121c(lVar7 + 0x70);
  lVar7 = lVar7 + 0x30;
  func_0x000107c61268();
  func_0x000100147490(uStack_38);
  if (extraout_x9_00 != extraout_x8_00) {
    func_0x000107c60e78();
    FUN_100155450(auStack_178);
    func_0x000107c60bd8();
    (**(code **)(**(long **)(lVar7 + 0x130) + 0x10))();
    uVar3 = 1;
    func_0x00010013b3a4(1);
    plVar4 = *(long **)(lVar7 + 200);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar4 + 0x10))();
    }
    plStack_1b8 = plVar4;
    FUN_10012dd4c(auStack_1d8,&DAT_10f500dfc,&UNK_10f75c64a,0xad);
    piVar9 = *(int **)(lVar7 + 0x138);
    if (piVar9 == (int *)0x0) {
      piStack_1f0 = (int *)0x0;
      uVar8 = *(undefined8 *)(lVar7 + 0x140);
    }
    else {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar8 = *(undefined8 *)(lVar7 + 0x140);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        piStack_1f0 = piVar9;
      } while (cVar1 != '\0');
    }
    FUN_10014dd80(&piStack_1f0);
    puVar5 = (undefined4 *)0x40;
    uStack_1e8 = uVar8;
    func_0x000107c60e20();
    *puVar5 = 1;
    *(undefined **)(puVar5 + 2) = &UNK_10b3f456c;
    *(undefined **)(puVar5 + 4) = &UNK_10b3f4604;
    *(undefined **)(puVar5 + 6) = &UNK_10b3f4630;
    *(undefined **)(puVar5 + 8) = &UNK_10b3f44e4;
    *(undefined8 *)(puVar5 + 10) = 0;
    *(int **)(puVar5 + 0xc) = piVar9;
    piStack_1f0 = (int *)0x0;
    *(undefined8 *)(puVar5 + 0xe) = uVar8;
    puStack_1e0 = puVar5;
    (**(code **)*plVar4)(plVar4,auStack_1d8,&puStack_1e0,uVar3);
    func_0x000100140e00(&puStack_1e0);
    FUN_10014f860(&piStack_1f0);
    FUN_10013f390(&plStack_1b8);
    return;
  }
  return;
}



/* Entry: 1001475bc; end: 100147e7f;  */

void FUN_1001475bc(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piStack_70;
  undefined8 uStack_68;
  undefined4 *puStack_60;
  undefined1 auStack_58 [32];
  long *plStack_38;
  
  (**(code **)(**(long **)(param_1 + 0x130) + 0x10))();
  uVar3 = 1;
  func_0x00010013b3a4(1);
  plVar4 = *(long **)(param_1 + 200);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x10))();
  }
  plStack_38 = plVar4;
  FUN_10012dd4c(auStack_58,&DAT_10f500dfc,&UNK_10f75c64a,0xad);
  piVar7 = *(int **)(param_1 + 0x138);
  if (piVar7 == (int *)0x0) {
    piStack_70 = (int *)0x0;
    uVar6 = *(undefined8 *)(param_1 + 0x140);
  }
  else {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = *(undefined8 *)(param_1 + 0x140);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      piStack_70 = piVar7;
    } while (cVar1 != '\0');
  }
  FUN_10014dd80(&piStack_70);
  puVar5 = (undefined4 *)0x40;
  uStack_68 = uVar6;
  func_0x000107c60e20();
  *puVar5 = 1;
  *(undefined **)(puVar5 + 2) = &UNK_10b3f456c;
  *(undefined **)(puVar5 + 4) = &UNK_10b3f4604;
  *(undefined **)(puVar5 + 6) = &UNK_10b3f4630;
  *(undefined **)(puVar5 + 8) = &UNK_10b3f44e4;
  *(undefined8 *)(puVar5 + 10) = 0;
  *(int **)(puVar5 + 0xc) = piVar7;
  piStack_70 = (int *)0x0;
  *(undefined8 *)(puVar5 + 0xe) = uVar6;
  puStack_60 = puVar5;
  (**(code **)*plVar4)(plVar4,auStack_58,&puStack_60,uVar3);
  func_0x000100140e00(&puStack_60);
  FUN_10014f860(&piStack_70);
  FUN_10013f390(&plStack_38);
  return;
}



/* Entry: 100147e80; end: 100147f77;  */

/* WARNING: Possible PIC construction at 0x00010014840c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100148754) */
/* WARNING: Removing unreachable block (ram,0x00010014823c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100147e80(ulong *******param_1,ulong *******param_2,ulong *******param_3,
                  ulong ******param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong ******ppppppuVar6;
  ulong ******ppppppuVar7;
  byte bVar8;
  ulong ******ppppppuVar9;
  ulong *******extraout_x8;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar12;
  ulong ******ppppppuVar13;
  uint uVar14;
  ulong uVar15;
  ulong ******ppppppuVar16;
  ulong ******ppppppuVar17;
  ulong *******pppppppuStack_c8;
  ulong ******ppppppuStack_c0;
  undefined8 uStack_b8;
  ulong *******pppppppuStack_b0;
  ulong ******ppppppuStack_a8;
  undefined8 uStack_a0;
  
  if (param_3 < (ulong *******)0x7ffffffffffffff8) {
    if (param_3 < (ulong *******)0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_3;
      pppppppuVar10 = param_1;
      if (param_3 != (ulong *******)0x0) goto LAB_100147eec;
    }
    else {
      pppppppuVar11 = (ulong *******)0x19;
      if (((ulong)param_3 | 7) != 0x17) {
        pppppppuVar11 = (ulong *******)(((ulong)param_3 | 7) + 1);
      }
      pppppppuVar10 = pppppppuVar11;
      func_0x000107c60e20();
      param_1[1] = (ulong ******)param_3;
      param_1[2] = (ulong ******)((ulong)pppppppuVar11 | 0x8000000000000000);
      *param_1 = (ulong ******)pppppppuVar10;
LAB_100147eec:
      func_0x000107c610b8(pppppppuVar10,param_2,param_3);
    }
    *(undefined1 *)((long)pppppppuVar10 + (long)param_3) = 0;
    bVar2 = *(byte *)((long)param_1 + 0x17);
    pppppppuVar11 = (ulong *******)*param_1;
    ppppppuVar7 = param_1[1];
    param_4 = ppppppuVar7;
    pppppppuVar10 = pppppppuVar11;
    if (-1 < (char)bVar2) {
      param_4 = (ulong ******)(ulong)bVar2;
      pppppppuVar10 = param_1;
    }
    param_3 = (ulong *******)0x0;
    param_2 = pppppppuVar10;
    func_0x000107c610ac();
    ppppppuVar9 = (ulong ******)((long)param_2 - (long)pppppppuVar10);
    if (param_2 == (ulong *******)0x0 || ppppppuVar9 == (ulong ******)0xffffffffffffffff) {
      return;
    }
    if ((char)bVar2 < '\0') {
      if (ppppppuVar9 <= ppppppuVar7) {
        param_1[1] = ppppppuVar9;
        goto LAB_100147f58;
      }
    }
    else if (ppppppuVar9 <= (ulong ******)(ulong)bVar2) {
      *(char *)((long)param_1 + 0x17) = (char)ppppppuVar9;
      pppppppuVar11 = param_1;
LAB_100147f58:
      *(undefined1 *)((long)pppppppuVar11 + (long)ppppppuVar9) = 0;
      return;
    }
  }
  else {
    func_0x000107c35c54();
  }
  func_0x000104c03f14();
  pppppppuStack_b0 = (ulong *******)0x0;
  ppppppuStack_a8 = (ulong ******)0x0;
  uStack_a0 = 0;
  if (param_4 != (ulong ******)0x0) {
    ppppppuVar7 = (ulong ******)0x0;
    pppppppuVar11 = param_3;
    func_0x000107c610ac(param_3,0,param_4);
    if ((pppppppuVar11 == (ulong *******)0x0) ||
       (ppppppuVar9 = (ulong ******)((long)pppppppuVar11 - (long)param_3),
       ppppppuVar9 == (ulong ******)0xffffffffffffffff)) goto LAB_10014804c;
    if (ppppppuVar9 <= param_4) {
      param_4 = ppppppuVar9;
    }
    if (param_4 < (ulong ******)0x7ffffffffffffff8) {
      if (param_4 < (ulong ******)0x17) {
        uStack_b8 = CONCAT17((char)param_4,(undefined7)uStack_b8);
        pppppppuVar10 = (ulong *******)&pppppppuStack_c8;
        if (param_3 != pppppppuVar11) goto LAB_100148218;
        *(undefined1 *)((long)pppppppuVar10 + (long)param_4) = 0;
      }
      else {
        pppppppuVar11 = (ulong *******)0x19;
        if (((ulong)param_4 | 7) != 0x17) {
          pppppppuVar11 = (ulong *******)(((ulong)param_4 | 7) + 1);
        }
        pppppppuVar10 = pppppppuVar11;
        func_0x000107c60e20();
        uStack_b8 = (ulong)pppppppuVar11 | 0x8000000000000000;
        pppppppuStack_c8 = pppppppuVar10;
        ppppppuStack_c0 = param_4;
LAB_100148218:
        func_0x000107c610b8(pppppppuVar10,param_3,param_4);
        *(undefined1 *)((long)pppppppuVar10 + (long)param_4) = 0;
      }
      pppppppuVar10 = pppppppuStack_b0;
      if ((long)uStack_a0 < 0) goto code_r0x000107c60e14;
      uStack_a0._7_1_ = (char)(uStack_b8 >> 0x38);
      ppppppuVar7 = (ulong ******)(long)uStack_a0._7_1_;
      param_3 = pppppppuStack_c8;
      if (-1 < (long)ppppppuVar7) {
        param_3 = (ulong *******)&pppppppuStack_b0;
      }
      param_4 = ppppppuStack_c0;
      if (-1 < (long)uStack_b8) {
        param_4 = ppppppuVar7;
      }
      cVar3 = *(char *)((long)param_2 + 0x17);
      pppppppuStack_b0 = pppppppuStack_c8;
      ppppppuStack_a8 = ppppppuStack_c0;
      uStack_a0 = uStack_b8;
      goto joined_r0x000100148044;
    }
LAB_1001484cc:
    func_0x000107c35c54();
    goto LAB_1001484d0;
  }
LAB_10014804c:
  ppppppuVar7 = (ulong ******)0x0;
  cVar3 = *(char *)((long)param_2 + 0x17);
joined_r0x000100148044:
  ppppppuVar17 = (ulong ******)(long)cVar3;
  uVar14 = (uint)ppppppuVar7;
  pppppppuVar11 = param_2;
  ppppppuVar9 = ppppppuVar17;
  if ((long)ppppppuVar17 < 0) {
    pppppppuVar11 = (ulong *******)*param_2;
    ppppppuVar9 = param_2[1];
  }
  ppppppuVar7 = (ulong ******)&UNK_10e573fb0;
  func_0x000107c610b0(pppppppuVar11,&UNK_10e573fb0,ppppppuVar9 != (ulong ******)0x0);
  if ((ppppppuVar9 == (ulong ******)0x1 && (int)pppppppuVar11 == 0) && param_4 != (ulong ******)0x0)
  {
    if ((ulong ******)0x7ffffffffffffff7 < param_4) goto LAB_1001484cc;
    if (param_4 < (ulong ******)0x17) {
      *(char *)((long)extraout_x8 + 0x17) = (char)param_4;
      pppppppuVar10 = extraout_x8;
    }
    else {
      pppppppuVar11 = (ulong *******)0x19;
      if (((ulong)param_4 | 7) != 0x17) {
        pppppppuVar11 = (ulong *******)(((ulong)param_4 | 7) + 1);
      }
      pppppppuVar10 = pppppppuVar11;
      func_0x000107c60e20();
      extraout_x8[1] = param_4;
      extraout_x8[2] = (ulong ******)((ulong)pppppppuVar11 | 0x8000000000000000);
      *extraout_x8 = (ulong ******)pppppppuVar10;
    }
    func_0x000107c610b8(pppppppuVar10,param_3,param_4);
    *(undefined1 *)((long)pppppppuVar10 + (long)param_4) = 0;
    bVar2 = *(byte *)((long)extraout_x8 + 0x17);
    pppppppuVar10 = (ulong *******)*extraout_x8;
    ppppppuVar17 = extraout_x8[1];
    ppppppuVar9 = ppppppuVar17;
    pppppppuVar12 = pppppppuVar10;
    if (-1 < (char)bVar2) {
      ppppppuVar9 = (ulong ******)(ulong)bVar2;
      pppppppuVar12 = extraout_x8;
    }
    ppppppuVar7 = (ulong ******)0x0;
    pppppppuVar11 = pppppppuVar12;
    func_0x000107c610ac(pppppppuVar12,0,ppppppuVar9);
    if ((pppppppuVar11 != (ulong *******)0x0) &&
       (ppppppuVar9 = (ulong ******)((long)pppppppuVar11 - (long)pppppppuVar12),
       ppppppuVar9 != (ulong ******)0xffffffffffffffff)) {
      if ((char)bVar2 < '\0') {
        if (ppppppuVar17 < ppppppuVar9) goto LAB_1001484d0;
        extraout_x8[1] = ppppppuVar9;
        *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar9) = 0;
      }
      else {
        if ((ulong ******)(ulong)bVar2 < ppppppuVar9) goto LAB_1001484d0;
        *(char *)((long)extraout_x8 + 0x17) = (char)ppppppuVar9;
        *(undefined1 *)((long)extraout_x8 + (long)ppppppuVar9) = 0;
      }
    }
  }
  else {
    extraout_x8[1] = (ulong ******)0xaaaaaaaaaaaaaaaa;
    extraout_x8[2] = (ulong ******)0xaaaaaaaaaaaaaaaa;
    *extraout_x8 = (ulong ******)0xaaaaaaaaaaaaaaaa;
    ppppppuVar9 = param_2[1];
    pppppppuVar10 = (ulong *******)*param_2;
    if (-1 < cVar3) {
      ppppppuVar9 = ppppppuVar17;
      pppppppuVar10 = param_2;
    }
    if ((ulong ******)0x7ffffffffffffff7 < ppppppuVar9) goto LAB_1001484cc;
    if (ppppppuVar9 < (ulong ******)0x17) {
      *(char *)((long)extraout_x8 + 0x17) = (char)ppppppuVar9;
      pppppppuVar12 = extraout_x8;
      if (ppppppuVar9 != (ulong ******)0x0) goto LAB_100148108;
    }
    else {
      pppppppuVar11 = (ulong *******)0x19;
      if (((ulong)ppppppuVar9 | 7) != 0x17) {
        pppppppuVar11 = (ulong *******)(((ulong)ppppppuVar9 | 7) + 1);
      }
      pppppppuVar12 = pppppppuVar11;
      func_0x000107c60e20();
      extraout_x8[1] = ppppppuVar9;
      extraout_x8[2] = (ulong ******)((ulong)pppppppuVar11 | 0x8000000000000000);
      *extraout_x8 = (ulong ******)pppppppuVar12;
LAB_100148108:
      func_0x000107c610b8(pppppppuVar12,pppppppuVar10,ppppppuVar9);
    }
    *(undefined1 *)((long)pppppppuVar12 + (long)ppppppuVar9) = 0;
    bVar2 = *(byte *)((long)extraout_x8 + 0x17);
    pppppppuVar10 = (ulong *******)*extraout_x8;
    ppppppuVar17 = extraout_x8[1];
    ppppppuVar9 = ppppppuVar17;
    pppppppuVar12 = pppppppuVar10;
    if (-1 < (char)bVar2) {
      ppppppuVar9 = (ulong ******)(ulong)bVar2;
      pppppppuVar12 = extraout_x8;
    }
    ppppppuVar7 = (ulong ******)0x0;
    pppppppuVar11 = pppppppuVar12;
    func_0x000107c610ac(pppppppuVar12,0,ppppppuVar9);
    if ((pppppppuVar11 != (ulong *******)0x0) &&
       (ppppppuVar9 = (ulong ******)((long)pppppppuVar11 - (long)pppppppuVar12),
       ppppppuVar9 != (ulong ******)0xffffffffffffffff)) {
      if ((char)bVar2 < '\0') {
        if (ppppppuVar17 < ppppppuVar9) goto LAB_1001484d0;
        extraout_x8[1] = ppppppuVar9;
      }
      else {
        if ((ulong ******)(ulong)bVar2 < ppppppuVar9) {
LAB_1001484d0:
          func_0x000104c03f14();
          goto LAB_1001484d4;
        }
        *(char *)((long)extraout_x8 + 0x17) = (char)ppppppuVar9;
        pppppppuVar10 = extraout_x8;
      }
      *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar9) = 0;
    }
    pppppppuVar11 = extraout_x8;
    FUN_1001484d8();
    bVar2 = *(byte *)((long)extraout_x8 + 0x17);
    ppppppuVar9 = (ulong ******)(ulong)bVar2;
    if (param_4 == (ulong ******)0x0) {
LAB_100148354:
      if ((uint)ppppppuVar9 >> 7 == 0) goto LAB_100148358;
      ppppppuVar9 = extraout_x8[1];
LAB_10014842c:
      uVar15 = ((ulong)extraout_x8[2] & 0x7fffffffffffffff) - 1;
      bVar4 = true;
      bVar5 = true;
      if ((ulong ******)(uVar15 - (long)ppppppuVar9) < param_4) goto LAB_100148370;
LAB_100148448:
      if (param_4 != (ulong ******)0x0) {
        pppppppuVar11 = (ulong *******)*extraout_x8;
        if (!bVar4) {
          pppppppuVar11 = extraout_x8;
        }
        func_0x000107c610b8((undefined1 *)((long)pppppppuVar11 + (long)ppppppuVar9),param_3,param_4)
        ;
        ppppppuVar9 = (ulong ******)((long)ppppppuVar9 + (long)param_4);
        if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
          extraout_x8[1] = ppppppuVar9;
        }
        else {
          *(byte *)((long)extraout_x8 + 0x17) = (byte)ppppppuVar9 & 0x7f;
        }
        *(undefined1 *)((long)pppppppuVar11 + (long)ppppppuVar9) = 0;
      }
    }
    else {
      if ((char)bVar2 < '\0') {
        if (extraout_x8[1] != (ulong ******)0x0) {
          cVar3 = *(char *)((long)*extraout_x8 + (long)extraout_x8[1] + -1);
          goto joined_r0x000100148294;
        }
        ppppppuVar9 = (ulong ******)0x0;
        goto LAB_10014842c;
      }
      if (bVar2 != 0) {
        cVar3 = ((undefined1 *)((long)extraout_x8 + (long)ppppppuVar9))[-1];
joined_r0x000100148294:
        if (cVar3 != '/') {
          ppppppuVar17 = extraout_x8[1];
          if (-1 < (char)bVar2) {
            ppppppuVar17 = ppppppuVar9;
          }
          if (ppppppuVar17 != (ulong ******)0x0) {
            ppppppuVar9 = (ulong ******)(((ulong)extraout_x8[2] & 0x7fffffffffffffff) - 1);
            bVar8 = (byte)((ulong)extraout_x8[2] >> 0x38);
            if (-1 < (char)bVar2) {
              ppppppuVar9 = (ulong ******)0x16;
              bVar8 = bVar2;
            }
            if (ppppppuVar9 == ppppppuVar17) {
              pppppppuVar11 = extraout_x8;
              ppppppuVar7 = ppppppuVar17;
              func_0x000107c60c88(extraout_x8,ppppppuVar17,1,ppppppuVar17,ppppppuVar17,0,0);
              extraout_x8[1] = ppppppuVar17;
              bVar8 = *(byte *)((long)extraout_x8 + 0x17);
            }
            pppppppuVar10 = (ulong *******)*extraout_x8;
            if (-1 < (char)bVar8) {
              pppppppuVar10 = extraout_x8;
            }
            *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar17) = 0x2f;
            ppppppuVar17 = (ulong ******)((long)ppppppuVar17 + 1);
            if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
              extraout_x8[1] = ppppppuVar17;
            }
            else {
              *(byte *)((long)extraout_x8 + 0x17) = (byte)ppppppuVar17 & 0x7f;
            }
            *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar17) = 0;
            ppppppuVar9 = (ulong ******)(ulong)*(byte *)((long)extraout_x8 + 0x17);
          }
        }
        goto LAB_100148354;
      }
LAB_100148358:
      bVar4 = false;
      bVar5 = false;
      uVar15 = 0x16;
      if (param_4 <= (ulong ******)(0x16 - (long)ppppppuVar9)) goto LAB_100148448;
LAB_100148370:
      if ((undefined1 *)(~uVar15 + 0x7ffffffffffffff7) <
          (undefined1 *)(((long)param_4 - uVar15) + (long)ppppppuVar9)) {
LAB_1001484d4:
        func_0x000104bd47d4();
        ppppppuVar9 = pppppppuVar11[1];
        if (-1 < (char)*(byte *)((long)pppppppuVar11 + 0x17)) {
          ppppppuVar9 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar11 + 0x17);
        }
        if ((ulong ******)0x1 < ppppppuVar9) {
          pppppppuVar10 = pppppppuVar11;
          ppppppuVar17 = (ulong ******)0xffffffffffffffff;
          do {
            pppppppuVar12 = pppppppuVar11;
            if (*(char *)((long)pppppppuVar11 + 0x17) < '\0') {
              pppppppuVar12 = (ulong *******)*pppppppuVar11;
            }
            if (*(char *)((long)pppppppuVar12 + ((long)ppppppuVar9 - 1U)) != '/') {
              return;
            }
            bVar2 = *(byte *)((long)pppppppuVar11 + 0x17);
            ppppppuVar13 = (ulong ******)(ulong)bVar2;
            if ((ppppppuVar9 == (ulong ******)0x2) && (ppppppuVar17 != (ulong ******)0x3)) {
              pppppppuVar12 = pppppppuVar11;
              if ((char)bVar2 < '\0') {
                pppppppuVar12 = (ulong *******)*pppppppuVar11;
              }
              if (*(char *)pppppppuVar12 == '/') {
                return;
              }
            }
            ppppppuVar16 = (ulong ******)((long)ppppppuVar9 - 1);
            if ((char)bVar2 < '\0') {
              ppppppuVar13 = pppppppuVar11[1];
              ppppppuVar17 = (ulong ******)((long)ppppppuVar16 - (long)ppppppuVar13);
              if (ppppppuVar16 < ppppppuVar13 || ppppppuVar17 == (ulong ******)0x0) {
                pppppppuVar12 = (ulong *******)*pppppppuVar11;
                pppppppuVar11[1] = ppppppuVar16;
                goto LAB_10014852c;
              }
              if ((ulong ******)((long)ppppppuVar13 + 1U) == ppppppuVar9) goto LAB_100148534;
              uVar15 = ((ulong)pppppppuVar11[2] & 0x7fffffffffffffff) - 1;
              uVar14 = (uint)((ulong)pppppppuVar11[2] >> 0x3f);
              if ((ulong ******)(uVar15 - (long)ppppppuVar13) < ppppppuVar17) goto LAB_1001485c4;
LAB_10014866c:
              pppppppuVar12 = pppppppuVar11;
              if (uVar14 != 0) goto LAB_100148674;
LAB_100148678:
              pppppppuVar10 = (ulong *******)((long)pppppppuVar12 + (long)ppppppuVar13);
              ppppppuVar7 = ppppppuVar17;
              func_0x000107c60ee4();
              ppppppuVar13 = (ulong ******)((long)ppppppuVar13 + (long)ppppppuVar17);
              if (*(char *)((long)pppppppuVar11 + 0x17) < '\0') {
                pppppppuVar11[1] = ppppppuVar13;
                *(undefined1 *)((long)pppppppuVar12 + (long)ppppppuVar13) = 0;
              }
              else {
                *(byte *)((long)pppppppuVar11 + 0x17) = (byte)ppppppuVar13 & 0x7f;
                *(undefined1 *)((long)pppppppuVar12 + (long)ppppppuVar13) = 0;
              }
            }
            else if (ppppppuVar13 < ppppppuVar16) {
              ppppppuVar17 = (ulong ******)(~(ulong)ppppppuVar13 + (long)ppppppuVar9);
              if (ppppppuVar17 != (ulong ******)0x0) {
                uVar14 = 0;
                uVar15 = 0x16;
                if (ppppppuVar17 <= (ulong ******)(0x16 - (long)ppppppuVar13)) goto LAB_10014866c;
LAB_1001485c4:
                if ((undefined1 *)(0x7ffffffffffffff7 - uVar15) <
                    (undefined1 *)((long)ppppppuVar17 + ((long)ppppppuVar13 - uVar15))) {
                  func_0x000104c4f6b8();
                  if (-1 < *(char *)((long)pppppppuVar10 + 0x17)) {
                    ppppppuVar17 = (ulong ******)ppppppuVar7[1];
                    ppppppuVar9 = (ulong ******)*ppppppuVar7;
                    pppppppuVar10[2] = (ulong ******)ppppppuVar7[2];
                    pppppppuVar10[1] = ppppppuVar17;
                    *pppppppuVar10 = ppppppuVar9;
                    *(undefined1 *)((long)ppppppuVar7 + 0x17) = 0;
                    *(undefined1 *)ppppppuVar7 = 0;
                    return;
                  }
                  pppppppuVar10 = (ulong *******)*pppppppuVar10;
                }
                else {
                  if ((char)bVar2 < '\0') {
                    pppppppuVar10 = (ulong *******)*pppppppuVar11;
                    if (0x3ffffffffffffff2 < uVar15) goto LAB_1001485f8;
LAB_1001486cc:
                    puVar1 = (undefined1 *)((long)ppppppuVar13 + (long)ppppppuVar17);
                    if ((undefined1 *)((long)ppppppuVar13 + (long)ppppppuVar17) <=
                        (undefined1 *)(uVar15 * 2)) {
                      puVar1 = (undefined1 *)(uVar15 * 2);
                    }
                    ppppppuVar6 = (ulong ******)0x19;
                    if (((ulong)puVar1 | 7) != 0x17) {
                      ppppppuVar6 = (ulong ******)(((ulong)puVar1 | 7) + 1);
                    }
                    ppppppuVar7 = (ulong ******)0x17;
                    if ((undefined1 *)0x16 < puVar1) {
                      ppppppuVar7 = ppppppuVar6;
                    }
                    ppppppuVar6 = ppppppuVar7;
                    func_0x000107c60e20();
                  }
                  else {
                    pppppppuVar10 = pppppppuVar11;
                    if (uVar15 < 0x3ffffffffffffff3) goto LAB_1001486cc;
LAB_1001485f8:
                    ppppppuVar7 = (ulong ******)0x7ffffffffffffff7;
                    ppppppuVar6 = ppppppuVar7;
                    func_0x000107c60e20();
                  }
                  if (ppppppuVar13 != (ulong ******)0x0) {
                    func_0x000107c610b8(ppppppuVar6,pppppppuVar10,ppppppuVar13);
                  }
                  if (uVar15 == 0x16) {
                    pppppppuVar11[1] = ppppppuVar13;
                    pppppppuVar11[2] = (ulong ******)((ulong)ppppppuVar7 | 0x8000000000000000);
                    *pppppppuVar11 = ppppppuVar6;
LAB_100148674:
                    pppppppuVar12 = (ulong *******)*pppppppuVar11;
                    goto LAB_100148678;
                  }
                }
                goto code_r0x000107c60e14;
              }
            }
            else {
              *(char *)((long)pppppppuVar11 + 0x17) = (char)ppppppuVar16;
              pppppppuVar12 = pppppppuVar11;
LAB_10014852c:
              *(undefined1 *)((long)pppppppuVar12 + ((long)ppppppuVar9 - 1U)) = 0;
            }
LAB_100148534:
            ppppppuVar17 = ppppppuVar9;
            ppppppuVar9 = ppppppuVar16;
          } while ((ulong ******)0x1 < ppppppuVar16);
        }
        return;
      }
      pppppppuVar10 = (ulong *******)*extraout_x8;
      if (!bVar5) {
        pppppppuVar10 = extraout_x8;
      }
      ppppppuVar7 = (ulong ******)0x7ffffffffffffff7;
      if (uVar15 < 0x3ffffffffffffff3) {
        puVar1 = (undefined1 *)((long)ppppppuVar9 + (long)param_4);
        if ((undefined1 *)((long)ppppppuVar9 + (long)param_4) <= (undefined1 *)(uVar15 * 2)) {
          puVar1 = (undefined1 *)(uVar15 * 2);
        }
        ppppppuVar17 = (ulong ******)0x19;
        if (((ulong)puVar1 | 7) != 0x17) {
          ppppppuVar17 = (ulong ******)(((ulong)puVar1 | 7) + 1);
        }
        ppppppuVar7 = (ulong ******)0x17;
        if ((undefined1 *)0x16 < puVar1) {
          ppppppuVar7 = ppppppuVar17;
        }
      }
      ppppppuVar17 = ppppppuVar7;
      func_0x000107c60e20();
      if (ppppppuVar9 != (ulong ******)0x0) {
        func_0x000107c610b8(ppppppuVar17,pppppppuVar10,ppppppuVar9);
      }
      func_0x000107c610b8((undefined1 *)((long)ppppppuVar17 + (long)ppppppuVar9),param_3,param_4);
      if (uVar15 != 0x16) goto code_r0x000107c60e14;
      *extraout_x8 = ppppppuVar17;
      extraout_x8[1] = (ulong ******)((long)ppppppuVar9 + (long)param_4);
      extraout_x8[2] = (ulong ******)((ulong)ppppppuVar7 | 0x8000000000000000);
      *(undefined1 *)((long)ppppppuVar9 + (long)param_4 + (long)ppppppuVar17) = 0;
    }
    uVar14 = (uint)(byte)(uStack_a0 >> 0x38);
  }
  pppppppuVar10 = pppppppuStack_b0;
  if ((uVar14 >> 7 & 1) == 0) {
    return;
  }
code_r0x000107c60e14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(pppppppuVar10);
  return;
}



/* Entry: 100147f78; end: 1001484d7;  */

/* WARNING: Possible PIC construction at 0x00010014840c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100148754) */
/* WARNING: Removing unreachable block (ram,0x00010014823c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100147f78(ulong *******param_1,ulong *******param_2,ulong *******param_3,
                  ulong ******param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong *******pppppppuVar6;
  ulong ******ppppppuVar7;
  ulong ******ppppppuVar8;
  byte bVar9;
  ulong ******ppppppuVar10;
  ulong *******pppppppuVar11;
  ulong ******ppppppuVar12;
  uint uVar13;
  ulong *******pppppppuVar14;
  ulong uVar15;
  ulong ******ppppppuVar16;
  ulong ******ppppppuVar17;
  ulong *******pppppppuStack_88;
  ulong ******ppppppuStack_80;
  undefined8 uStack_78;
  ulong *******pppppppuStack_70;
  ulong ******ppppppuStack_68;
  undefined8 uStack_60;
  
  pppppppuStack_70 = (ulong *******)0x0;
  ppppppuStack_68 = (ulong ******)0x0;
  uStack_60 = 0;
  if (param_4 != (ulong ******)0x0) {
    ppppppuVar8 = (ulong ******)0x0;
    pppppppuVar6 = param_3;
    func_0x000107c610ac(param_3,0,param_4);
    if ((pppppppuVar6 == (ulong *******)0x0) ||
       (ppppppuVar10 = (ulong ******)((long)pppppppuVar6 - (long)param_3),
       ppppppuVar10 == (ulong ******)0xffffffffffffffff)) goto LAB_10014804c;
    if (ppppppuVar10 <= param_4) {
      param_4 = ppppppuVar10;
    }
    if (param_4 < (ulong ******)0x7ffffffffffffff8) {
      if (param_4 < (ulong ******)0x17) {
        uStack_78 = CONCAT17((char)param_4,(undefined7)uStack_78);
        pppppppuVar14 = (ulong *******)&pppppppuStack_88;
        if (param_3 != pppppppuVar6) goto LAB_100148218;
        *(undefined1 *)((long)pppppppuVar14 + (long)param_4) = 0;
      }
      else {
        pppppppuVar6 = (ulong *******)0x19;
        if (((ulong)param_4 | 7) != 0x17) {
          pppppppuVar6 = (ulong *******)(((ulong)param_4 | 7) + 1);
        }
        pppppppuVar14 = pppppppuVar6;
        func_0x000107c60e20();
        uStack_78 = (ulong)pppppppuVar6 | 0x8000000000000000;
        pppppppuStack_88 = pppppppuVar14;
        ppppppuStack_80 = param_4;
LAB_100148218:
        func_0x000107c610b8(pppppppuVar14,param_3,param_4);
        *(undefined1 *)((long)pppppppuVar14 + (long)param_4) = 0;
      }
      pppppppuVar14 = pppppppuStack_70;
      if ((long)uStack_60 < 0) goto code_r0x000107c60e14;
      uStack_60._7_1_ = (char)(uStack_78 >> 0x38);
      ppppppuVar8 = (ulong ******)(long)uStack_60._7_1_;
      param_3 = pppppppuStack_88;
      if (-1 < (long)ppppppuVar8) {
        param_3 = (ulong *******)&pppppppuStack_70;
      }
      param_4 = ppppppuStack_80;
      if (-1 < (long)uStack_78) {
        param_4 = ppppppuVar8;
      }
      cVar3 = *(char *)((long)param_2 + 0x17);
      pppppppuStack_70 = pppppppuStack_88;
      ppppppuStack_68 = ppppppuStack_80;
      uStack_60 = uStack_78;
      goto joined_r0x000100148044;
    }
LAB_1001484cc:
    func_0x000107c35c54();
    goto LAB_1001484d0;
  }
LAB_10014804c:
  ppppppuVar8 = (ulong ******)0x0;
  cVar3 = *(char *)((long)param_2 + 0x17);
joined_r0x000100148044:
  ppppppuVar17 = (ulong ******)(long)cVar3;
  uVar13 = (uint)ppppppuVar8;
  pppppppuVar6 = param_2;
  ppppppuVar10 = ppppppuVar17;
  if ((long)ppppppuVar17 < 0) {
    pppppppuVar6 = (ulong *******)*param_2;
    ppppppuVar10 = param_2[1];
  }
  ppppppuVar8 = (ulong ******)&UNK_10e573fb0;
  func_0x000107c610b0(pppppppuVar6,&UNK_10e573fb0,ppppppuVar10 != (ulong ******)0x0);
  if ((ppppppuVar10 == (ulong ******)0x1 && (int)pppppppuVar6 == 0) && param_4 != (ulong ******)0x0)
  {
    if ((ulong ******)0x7ffffffffffffff7 < param_4) goto LAB_1001484cc;
    if (param_4 < (ulong ******)0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
      pppppppuVar14 = param_1;
    }
    else {
      pppppppuVar6 = (ulong *******)0x19;
      if (((ulong)param_4 | 7) != 0x17) {
        pppppppuVar6 = (ulong *******)(((ulong)param_4 | 7) + 1);
      }
      pppppppuVar14 = pppppppuVar6;
      func_0x000107c60e20();
      param_1[1] = param_4;
      param_1[2] = (ulong ******)((ulong)pppppppuVar6 | 0x8000000000000000);
      *param_1 = (ulong ******)pppppppuVar14;
    }
    func_0x000107c610b8(pppppppuVar14,param_3,param_4);
    *(undefined1 *)((long)pppppppuVar14 + (long)param_4) = 0;
    bVar2 = *(byte *)((long)param_1 + 0x17);
    pppppppuVar14 = (ulong *******)*param_1;
    ppppppuVar17 = param_1[1];
    ppppppuVar10 = ppppppuVar17;
    pppppppuVar11 = pppppppuVar14;
    if (-1 < (char)bVar2) {
      ppppppuVar10 = (ulong ******)(ulong)bVar2;
      pppppppuVar11 = param_1;
    }
    ppppppuVar8 = (ulong ******)0x0;
    pppppppuVar6 = pppppppuVar11;
    func_0x000107c610ac(pppppppuVar11,0,ppppppuVar10);
    if ((pppppppuVar6 != (ulong *******)0x0) &&
       (ppppppuVar10 = (ulong ******)((long)pppppppuVar6 - (long)pppppppuVar11),
       ppppppuVar10 != (ulong ******)0xffffffffffffffff)) {
      if ((char)bVar2 < '\0') {
        if (ppppppuVar17 < ppppppuVar10) goto LAB_1001484d0;
        param_1[1] = ppppppuVar10;
        *(undefined1 *)((long)pppppppuVar14 + (long)ppppppuVar10) = 0;
      }
      else {
        if ((ulong ******)(ulong)bVar2 < ppppppuVar10) goto LAB_1001484d0;
        *(char *)((long)param_1 + 0x17) = (char)ppppppuVar10;
        *(undefined1 *)((long)param_1 + (long)ppppppuVar10) = 0;
      }
    }
  }
  else {
    param_1[1] = (ulong ******)0xaaaaaaaaaaaaaaaa;
    param_1[2] = (ulong ******)0xaaaaaaaaaaaaaaaa;
    *param_1 = (ulong ******)0xaaaaaaaaaaaaaaaa;
    ppppppuVar10 = param_2[1];
    pppppppuVar14 = (ulong *******)*param_2;
    if (-1 < cVar3) {
      ppppppuVar10 = ppppppuVar17;
      pppppppuVar14 = param_2;
    }
    if ((ulong ******)0x7ffffffffffffff7 < ppppppuVar10) goto LAB_1001484cc;
    if (ppppppuVar10 < (ulong ******)0x17) {
      *(char *)((long)param_1 + 0x17) = (char)ppppppuVar10;
      pppppppuVar11 = param_1;
      if (ppppppuVar10 != (ulong ******)0x0) goto LAB_100148108;
    }
    else {
      pppppppuVar6 = (ulong *******)0x19;
      if (((ulong)ppppppuVar10 | 7) != 0x17) {
        pppppppuVar6 = (ulong *******)(((ulong)ppppppuVar10 | 7) + 1);
      }
      pppppppuVar11 = pppppppuVar6;
      func_0x000107c60e20();
      param_1[1] = ppppppuVar10;
      param_1[2] = (ulong ******)((ulong)pppppppuVar6 | 0x8000000000000000);
      *param_1 = (ulong ******)pppppppuVar11;
LAB_100148108:
      func_0x000107c610b8(pppppppuVar11,pppppppuVar14,ppppppuVar10);
    }
    *(undefined1 *)((long)pppppppuVar11 + (long)ppppppuVar10) = 0;
    bVar2 = *(byte *)((long)param_1 + 0x17);
    pppppppuVar14 = (ulong *******)*param_1;
    ppppppuVar17 = param_1[1];
    ppppppuVar10 = ppppppuVar17;
    pppppppuVar11 = pppppppuVar14;
    if (-1 < (char)bVar2) {
      ppppppuVar10 = (ulong ******)(ulong)bVar2;
      pppppppuVar11 = param_1;
    }
    ppppppuVar8 = (ulong ******)0x0;
    pppppppuVar6 = pppppppuVar11;
    func_0x000107c610ac(pppppppuVar11,0,ppppppuVar10);
    if ((pppppppuVar6 != (ulong *******)0x0) &&
       (ppppppuVar10 = (ulong ******)((long)pppppppuVar6 - (long)pppppppuVar11),
       ppppppuVar10 != (ulong ******)0xffffffffffffffff)) {
      if ((char)bVar2 < '\0') {
        if (ppppppuVar17 < ppppppuVar10) goto LAB_1001484d0;
        param_1[1] = ppppppuVar10;
      }
      else {
        if ((ulong ******)(ulong)bVar2 < ppppppuVar10) {
LAB_1001484d0:
          func_0x000104c03f14();
          goto LAB_1001484d4;
        }
        *(char *)((long)param_1 + 0x17) = (char)ppppppuVar10;
        pppppppuVar14 = param_1;
      }
      *(undefined1 *)((long)pppppppuVar14 + (long)ppppppuVar10) = 0;
    }
    pppppppuVar6 = param_1;
    FUN_1001484d8();
    bVar2 = *(byte *)((long)param_1 + 0x17);
    ppppppuVar10 = (ulong ******)(ulong)bVar2;
    if (param_4 == (ulong ******)0x0) {
LAB_100148354:
      if ((uint)ppppppuVar10 >> 7 == 0) goto LAB_100148358;
      ppppppuVar10 = param_1[1];
LAB_10014842c:
      uVar15 = ((ulong)param_1[2] & 0x7fffffffffffffff) - 1;
      bVar4 = true;
      bVar5 = true;
      if ((ulong ******)(uVar15 - (long)ppppppuVar10) < param_4) goto LAB_100148370;
LAB_100148448:
      if (param_4 != (ulong ******)0x0) {
        pppppppuVar6 = (ulong *******)*param_1;
        if (!bVar4) {
          pppppppuVar6 = param_1;
        }
        func_0x000107c610b8((undefined1 *)((long)pppppppuVar6 + (long)ppppppuVar10),param_3,param_4)
        ;
        ppppppuVar10 = (ulong ******)((long)ppppppuVar10 + (long)param_4);
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = ppppppuVar10;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)ppppppuVar10 & 0x7f;
        }
        *(undefined1 *)((long)pppppppuVar6 + (long)ppppppuVar10) = 0;
      }
    }
    else {
      if ((char)bVar2 < '\0') {
        if (param_1[1] != (ulong ******)0x0) {
          cVar3 = *(char *)((long)*param_1 + (long)param_1[1] + -1);
          goto joined_r0x000100148294;
        }
        ppppppuVar10 = (ulong ******)0x0;
        goto LAB_10014842c;
      }
      if (bVar2 != 0) {
        cVar3 = ((undefined1 *)((long)param_1 + (long)ppppppuVar10))[-1];
joined_r0x000100148294:
        if (cVar3 != '/') {
          ppppppuVar17 = param_1[1];
          if (-1 < (char)bVar2) {
            ppppppuVar17 = ppppppuVar10;
          }
          if (ppppppuVar17 != (ulong ******)0x0) {
            ppppppuVar10 = (ulong ******)(((ulong)param_1[2] & 0x7fffffffffffffff) - 1);
            bVar9 = (byte)((ulong)param_1[2] >> 0x38);
            if (-1 < (char)bVar2) {
              ppppppuVar10 = (ulong ******)0x16;
              bVar9 = bVar2;
            }
            if (ppppppuVar10 == ppppppuVar17) {
              pppppppuVar6 = param_1;
              ppppppuVar8 = ppppppuVar17;
              func_0x000107c60c88(param_1,ppppppuVar17,1,ppppppuVar17,ppppppuVar17,0,0);
              param_1[1] = ppppppuVar17;
              bVar9 = *(byte *)((long)param_1 + 0x17);
            }
            pppppppuVar14 = (ulong *******)*param_1;
            if (-1 < (char)bVar9) {
              pppppppuVar14 = param_1;
            }
            *(undefined1 *)((long)pppppppuVar14 + (long)ppppppuVar17) = 0x2f;
            ppppppuVar17 = (ulong ******)((long)ppppppuVar17 + 1);
            if (*(char *)((long)param_1 + 0x17) < '\0') {
              param_1[1] = ppppppuVar17;
            }
            else {
              *(byte *)((long)param_1 + 0x17) = (byte)ppppppuVar17 & 0x7f;
            }
            *(undefined1 *)((long)pppppppuVar14 + (long)ppppppuVar17) = 0;
            ppppppuVar10 = (ulong ******)(ulong)*(byte *)((long)param_1 + 0x17);
          }
        }
        goto LAB_100148354;
      }
LAB_100148358:
      bVar4 = false;
      bVar5 = false;
      uVar15 = 0x16;
      if (param_4 <= (ulong ******)(0x16 - (long)ppppppuVar10)) goto LAB_100148448;
LAB_100148370:
      if ((undefined1 *)(~uVar15 + 0x7ffffffffffffff7) <
          (undefined1 *)(((long)param_4 - uVar15) + (long)ppppppuVar10)) {
LAB_1001484d4:
        func_0x000104bd47d4();
        ppppppuVar10 = pppppppuVar6[1];
        if (-1 < (char)*(byte *)((long)pppppppuVar6 + 0x17)) {
          ppppppuVar10 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar6 + 0x17);
        }
        if ((ulong ******)0x1 < ppppppuVar10) {
          pppppppuVar14 = pppppppuVar6;
          ppppppuVar17 = (ulong ******)0xffffffffffffffff;
          do {
            pppppppuVar11 = pppppppuVar6;
            if (*(char *)((long)pppppppuVar6 + 0x17) < '\0') {
              pppppppuVar11 = (ulong *******)*pppppppuVar6;
            }
            if (*(char *)((long)pppppppuVar11 + ((long)ppppppuVar10 - 1U)) != '/') {
              return;
            }
            bVar2 = *(byte *)((long)pppppppuVar6 + 0x17);
            ppppppuVar12 = (ulong ******)(ulong)bVar2;
            if ((ppppppuVar10 == (ulong ******)0x2) && (ppppppuVar17 != (ulong ******)0x3)) {
              pppppppuVar11 = pppppppuVar6;
              if ((char)bVar2 < '\0') {
                pppppppuVar11 = (ulong *******)*pppppppuVar6;
              }
              if (*(char *)pppppppuVar11 == '/') {
                return;
              }
            }
            ppppppuVar16 = (ulong ******)((long)ppppppuVar10 - 1);
            if ((char)bVar2 < '\0') {
              ppppppuVar12 = pppppppuVar6[1];
              ppppppuVar17 = (ulong ******)((long)ppppppuVar16 - (long)ppppppuVar12);
              if (ppppppuVar16 < ppppppuVar12 || ppppppuVar17 == (ulong ******)0x0) {
                pppppppuVar11 = (ulong *******)*pppppppuVar6;
                pppppppuVar6[1] = ppppppuVar16;
                goto LAB_10014852c;
              }
              if ((ulong ******)((long)ppppppuVar12 + 1U) == ppppppuVar10) goto LAB_100148534;
              uVar15 = ((ulong)pppppppuVar6[2] & 0x7fffffffffffffff) - 1;
              uVar13 = (uint)((ulong)pppppppuVar6[2] >> 0x3f);
              if ((ulong ******)(uVar15 - (long)ppppppuVar12) < ppppppuVar17) goto LAB_1001485c4;
LAB_10014866c:
              pppppppuVar11 = pppppppuVar6;
              if (uVar13 != 0) goto LAB_100148674;
LAB_100148678:
              pppppppuVar14 = (ulong *******)((long)pppppppuVar11 + (long)ppppppuVar12);
              ppppppuVar8 = ppppppuVar17;
              func_0x000107c60ee4();
              ppppppuVar12 = (ulong ******)((long)ppppppuVar12 + (long)ppppppuVar17);
              if (*(char *)((long)pppppppuVar6 + 0x17) < '\0') {
                pppppppuVar6[1] = ppppppuVar12;
                *(undefined1 *)((long)pppppppuVar11 + (long)ppppppuVar12) = 0;
              }
              else {
                *(byte *)((long)pppppppuVar6 + 0x17) = (byte)ppppppuVar12 & 0x7f;
                *(undefined1 *)((long)pppppppuVar11 + (long)ppppppuVar12) = 0;
              }
            }
            else if (ppppppuVar12 < ppppppuVar16) {
              ppppppuVar17 = (ulong ******)(~(ulong)ppppppuVar12 + (long)ppppppuVar10);
              if (ppppppuVar17 != (ulong ******)0x0) {
                uVar13 = 0;
                uVar15 = 0x16;
                if (ppppppuVar17 <= (ulong ******)(0x16 - (long)ppppppuVar12)) goto LAB_10014866c;
LAB_1001485c4:
                if ((undefined1 *)(0x7ffffffffffffff7 - uVar15) <
                    (undefined1 *)((long)ppppppuVar17 + ((long)ppppppuVar12 - uVar15))) {
                  func_0x000104c4f6b8();
                  if (-1 < *(char *)((long)pppppppuVar14 + 0x17)) {
                    ppppppuVar17 = (ulong ******)ppppppuVar8[1];
                    ppppppuVar10 = (ulong ******)*ppppppuVar8;
                    pppppppuVar14[2] = (ulong ******)ppppppuVar8[2];
                    pppppppuVar14[1] = ppppppuVar17;
                    *pppppppuVar14 = ppppppuVar10;
                    *(undefined1 *)((long)ppppppuVar8 + 0x17) = 0;
                    *(undefined1 *)ppppppuVar8 = 0;
                    return;
                  }
                  pppppppuVar14 = (ulong *******)*pppppppuVar14;
                }
                else {
                  if ((char)bVar2 < '\0') {
                    pppppppuVar14 = (ulong *******)*pppppppuVar6;
                    if (0x3ffffffffffffff2 < uVar15) goto LAB_1001485f8;
LAB_1001486cc:
                    puVar1 = (undefined1 *)((long)ppppppuVar12 + (long)ppppppuVar17);
                    if ((undefined1 *)((long)ppppppuVar12 + (long)ppppppuVar17) <=
                        (undefined1 *)(uVar15 * 2)) {
                      puVar1 = (undefined1 *)(uVar15 * 2);
                    }
                    ppppppuVar7 = (ulong ******)0x19;
                    if (((ulong)puVar1 | 7) != 0x17) {
                      ppppppuVar7 = (ulong ******)(((ulong)puVar1 | 7) + 1);
                    }
                    ppppppuVar8 = (ulong ******)0x17;
                    if ((undefined1 *)0x16 < puVar1) {
                      ppppppuVar8 = ppppppuVar7;
                    }
                    ppppppuVar7 = ppppppuVar8;
                    func_0x000107c60e20();
                  }
                  else {
                    pppppppuVar14 = pppppppuVar6;
                    if (uVar15 < 0x3ffffffffffffff3) goto LAB_1001486cc;
LAB_1001485f8:
                    ppppppuVar8 = (ulong ******)0x7ffffffffffffff7;
                    ppppppuVar7 = ppppppuVar8;
                    func_0x000107c60e20();
                  }
                  if (ppppppuVar12 != (ulong ******)0x0) {
                    func_0x000107c610b8(ppppppuVar7,pppppppuVar14,ppppppuVar12);
                  }
                  if (uVar15 == 0x16) {
                    pppppppuVar6[1] = ppppppuVar12;
                    pppppppuVar6[2] = (ulong ******)((ulong)ppppppuVar8 | 0x8000000000000000);
                    *pppppppuVar6 = ppppppuVar7;
LAB_100148674:
                    pppppppuVar11 = (ulong *******)*pppppppuVar6;
                    goto LAB_100148678;
                  }
                }
                goto code_r0x000107c60e14;
              }
            }
            else {
              *(char *)((long)pppppppuVar6 + 0x17) = (char)ppppppuVar16;
              pppppppuVar11 = pppppppuVar6;
LAB_10014852c:
              *(undefined1 *)((long)pppppppuVar11 + ((long)ppppppuVar10 - 1U)) = 0;
            }
LAB_100148534:
            ppppppuVar17 = ppppppuVar10;
            ppppppuVar10 = ppppppuVar16;
          } while ((ulong ******)0x1 < ppppppuVar16);
        }
        return;
      }
      pppppppuVar14 = (ulong *******)*param_1;
      if (!bVar5) {
        pppppppuVar14 = param_1;
      }
      ppppppuVar8 = (ulong ******)0x7ffffffffffffff7;
      if (uVar15 < 0x3ffffffffffffff3) {
        puVar1 = (undefined1 *)((long)ppppppuVar10 + (long)param_4);
        if ((undefined1 *)((long)ppppppuVar10 + (long)param_4) <= (undefined1 *)(uVar15 * 2)) {
          puVar1 = (undefined1 *)(uVar15 * 2);
        }
        ppppppuVar17 = (ulong ******)0x19;
        if (((ulong)puVar1 | 7) != 0x17) {
          ppppppuVar17 = (ulong ******)(((ulong)puVar1 | 7) + 1);
        }
        ppppppuVar8 = (ulong ******)0x17;
        if ((undefined1 *)0x16 < puVar1) {
          ppppppuVar8 = ppppppuVar17;
        }
      }
      ppppppuVar17 = ppppppuVar8;
      func_0x000107c60e20();
      if (ppppppuVar10 != (ulong ******)0x0) {
        func_0x000107c610b8(ppppppuVar17,pppppppuVar14,ppppppuVar10);
      }
      func_0x000107c610b8((undefined1 *)((long)ppppppuVar17 + (long)ppppppuVar10),param_3,param_4);
      if (uVar15 != 0x16) goto code_r0x000107c60e14;
      *param_1 = ppppppuVar17;
      param_1[1] = (ulong ******)((long)ppppppuVar10 + (long)param_4);
      param_1[2] = (ulong ******)((ulong)ppppppuVar8 | 0x8000000000000000);
      *(undefined1 *)((long)ppppppuVar10 + (long)param_4 + (long)ppppppuVar17) = 0;
    }
    uVar13 = (uint)(byte)(uStack_60 >> 0x38);
  }
  pppppppuVar14 = pppppppuStack_70;
  if ((uVar13 >> 7 & 1) == 0) {
    return;
  }
code_r0x000107c60e14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(pppppppuVar14);
  return;
}



/* Entry: 1001484d8; end: 10014872b;  */

void FUN_1001484d8(ulong *param_1,ulong *param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar12 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar12 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (1 < uVar12) {
    puVar8 = param_1;
    uVar10 = 0xffffffffffffffff;
    do {
      puVar4 = param_1;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        puVar4 = (ulong *)*param_1;
      }
      if (*(char *)((long)puVar4 + (uVar12 - 1)) != '/') {
        return;
      }
      bVar2 = *(byte *)((long)param_1 + 0x17);
      uVar5 = (ulong)bVar2;
      if ((uVar12 == 2) && (uVar10 != 3)) {
        puVar4 = param_1;
        if ((char)bVar2 < '\0') {
          puVar4 = (ulong *)*param_1;
        }
        if ((char)*puVar4 == '/') {
          return;
        }
      }
      uVar11 = uVar12 - 1;
      if ((char)bVar2 < '\0') {
        uVar5 = param_1[1];
        puVar4 = (ulong *)(uVar11 - uVar5);
        if (uVar11 < uVar5 || puVar4 == (ulong *)0x0) {
          puVar4 = (ulong *)*param_1;
          param_1[1] = uVar11;
          goto LAB_10014852c;
        }
        if (uVar5 + 1 == uVar12) goto LAB_100148534;
        uVar10 = (param_1[2] & 0x7fffffffffffffff) - 1;
        uVar6 = (uint)(param_1[2] >> 0x3f);
        if ((ulong *)(uVar10 - uVar5) < puVar4) goto LAB_1001485c4;
LAB_10014866c:
        puVar7 = param_1;
        if (uVar6 != 0) goto LAB_100148674;
LAB_100148678:
        puVar8 = (ulong *)((long)puVar7 + uVar5);
        param_2 = puVar4;
        func_0x000107c60ee4();
        puVar1 = (undefined1 *)(uVar5 + (long)puVar4);
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = (ulong)puVar1;
          *(undefined1 *)((long)puVar7 + (long)puVar1) = 0;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)puVar1 & 0x7f;
          *(undefined1 *)((long)puVar7 + (long)puVar1) = 0;
        }
      }
      else if (uVar5 < uVar11) {
        puVar4 = (ulong *)(~uVar5 + uVar12);
        if (puVar4 != (ulong *)0x0) {
          uVar6 = 0;
          uVar10 = 0x16;
          if (puVar4 <= (ulong *)(0x16 - uVar5)) goto LAB_10014866c;
LAB_1001485c4:
          if ((undefined1 *)(0x7ffffffffffffff7 - uVar10) <
              (undefined1 *)((long)puVar4 + (uVar5 - uVar10))) {
            func_0x000104c4f6b8();
            if (*(char *)((long)puVar8 + 0x17) < '\0') {
              func_0x000107c60e14(*puVar8);
            }
            uVar10 = param_2[1];
            uVar12 = *param_2;
            puVar8[2] = param_2[2];
            puVar8[1] = uVar10;
            *puVar8 = uVar12;
            *(undefined1 *)((long)param_2 + 0x17) = 0;
            *(undefined1 *)param_2 = 0;
            return;
          }
          if ((char)bVar2 < '\0') {
            puVar8 = (ulong *)*param_1;
            if (0x3ffffffffffffff2 < uVar10) goto LAB_1001485f8;
LAB_1001486cc:
            puVar1 = (undefined1 *)(uVar5 + (long)puVar4);
            if ((undefined1 *)(uVar5 + (long)puVar4) <= (undefined1 *)(uVar10 * 2)) {
              puVar1 = (undefined1 *)(uVar10 * 2);
            }
            uVar3 = 0x19;
            if (((ulong)puVar1 | 7) != 0x17) {
              uVar3 = ((ulong)puVar1 | 7) + 1;
            }
            uVar9 = 0x17;
            if ((undefined1 *)0x16 < puVar1) {
              uVar9 = uVar3;
            }
            uVar3 = uVar9;
            func_0x000107c60e20();
          }
          else {
            puVar8 = param_1;
            if (uVar10 < 0x3ffffffffffffff3) goto LAB_1001486cc;
LAB_1001485f8:
            uVar9 = 0x7ffffffffffffff7;
            uVar3 = uVar9;
            func_0x000107c60e20();
          }
          if (uVar5 != 0) {
            func_0x000107c610b8(uVar3,puVar8,uVar5);
          }
          if (uVar10 != 0x16) {
            func_0x000107c60e14(puVar8);
          }
          param_1[1] = uVar5;
          param_1[2] = uVar9 | 0x8000000000000000;
          *param_1 = uVar3;
LAB_100148674:
          puVar7 = (ulong *)*param_1;
          goto LAB_100148678;
        }
      }
      else {
        *(char *)((long)param_1 + 0x17) = (char)uVar11;
        puVar4 = param_1;
LAB_10014852c:
        *(undefined1 *)((long)puVar4 + (uVar12 - 1)) = 0;
      }
LAB_100148534:
      uVar10 = uVar12;
      uVar12 = uVar11;
    } while (1 < uVar11);
  }
  return;
}



/* Entry: 10014872c; end: 10014877b;  */

void FUN_10014872c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 10014877c; end: 10014878b;  */

undefined8 * FUN_10014877c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x50) = 1;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  FUN_10014878c(param_1 + 0x70,param_2 + 2);
  return (undefined8 *)(param_1 + 0x60);
}



/* Entry: 10014878c; end: 100148817;  */

undefined8 * FUN_10014878c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    bVar2 = *(byte *)((long)param_2 + 0x17);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      uVar1 = param_2[1];
      puVar3 = (undefined8 *)*param_2;
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2;
      }
      FUN_1006aabfc(param_1,puVar3,uVar1);
      return param_1;
    }
    if ((char)bVar2 < '\0') {
      FUN_10014884c(param_1,*param_2,param_2[1]);
      return param_1;
    }
    uVar5 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
  }
  return param_1;
}



/* Entry: 100148818; end: 10014884b;  */

undefined8 * FUN_100148818(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  FUN_10014878c(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10014884c; end: 1001488af;  */

long FUN_10014884c(long param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x16 || param_3 - 0x16 == 0) {
    *(char *)(param_1 + 0x17) = (char)param_3;
    if (param_3 != 0) {
      FUN_1006aabf0(param_1);
    }
    *(undefined1 *)(param_1 + param_3) = 0;
  }
  else {
    func_0x000107c60c48(param_1,0x16,param_3 - 0x16,*(byte *)(param_1 + 0x17) & 0x7f,0,
                        *(byte *)(param_1 + 0x17) & 0x7f,param_3,param_2);
  }
  return param_1;
}



/* Entry: 1001488b0; end: 1001488b7;  */

void FUN_1001488b0(void)

{
  return;
}



/* Entry: 1001488b8; end: 100148a77;  */

void FUN_1001488b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x110;
  func_0x000107c60e20();
  func_0x000100148944();
  *param_1 = uVar1;
  return;
}



/* Entry: 100148a78; end: 100148aa3; -[SCDocPrefItem valInteger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100148a78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ea48);
}



/* Entry: 100148aa4; end: 100148b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100148aa4(undefined8 *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11304f750);
  func_0x000100148a98();
  uVar4 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar4,uVar1);
  uVar3 = (uint)uVar4;
  func_0x000107c6142c();
  FUN_100148b54();
  func_0x000107c4980c(uVar5);
  func_0x000107c61170();
  FUN_10014a890();
  if ((((uVar3 & 0xff) == 2) || ((uVar3 & 1) != 0)) && (cRam000000011304f790 != '\x01')) {
    bVar2 = false;
  }
  else {
    bVar2 = (int)uVar5 - 1U < 2;
  }
  return bVar2;
}



/* Entry: 100148b54; end: 100148b5f;  */

undefined * FUN_100148b54(void)

{
  return &UNK_10dccf6c0;
}



/* Entry: 100148b60; end: 10014a6cb;  */

undefined8 * FUN_100148b60(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000100148cb4(param_1,&UNK_10e589fb0,&UNK_10e589fc0,2);
  return param_1;
}



/* Entry: 10014a6cc; end: 10014a6f7;  */

void FUN_10014a6cc(long *param_1,long param_2)

{
  if (*param_1 != 0) {
    func_0x000107c607f0();
  }
  *param_1 = param_2;
  return;
}



/* Entry: 10014a6f8; end: 10014a88f;  */

void FUN_10014a6f8(void)

{
  return;
}



/* Entry: 10014a890; end: 10014a96f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10014a890(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_11304f740);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010f1e2fb0);
    lVar3 = lVar1;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (lVar3 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
      lVar5 = lVar3;
      func_0x000107c6148c(lVar3,puVar4);
      if (lVar5 != 0) {
        func_0x000107c3ebcc();
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar1);
        return lVar5;
      }
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar3);
    }
  }
  return 2;
}



/* Entry: 10014a970; end: 10014a97f; -[SCDocPrefItem valByte] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10014a970(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_11278ea44);
}



/* Entry: 10014a980; end: 10014ae3f;  */

void FUN_10014a980(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lStack_20;
  long lStack_18;
  
  lVar1 = param_2;
  do {
    lVar2 = param_1;
    if (lVar1 == 0) goto LAB_10014a9c0;
    lVar2 = param_1 + lVar1;
    lVar1 = lVar1 + -1;
  } while (((byte)(&UNK_10e574bb3)[*(byte *)(lVar2 + -1)] >> 3 & 1) != 0);
  lVar2 = param_1 + lVar1 + 1;
LAB_10014a9c0:
  lStack_20 = param_1;
  lStack_18 = param_2;
  func_0x00010014a860(&lStack_20,0,lVar2 - param_1);
  return;
}



/* Entry: 10014ae40; end: 10014ae4b;  */

void FUN_10014ae40(void)

{
  return;
}



/* Entry: 10014ae4c; end: 10014ae8f;  */

void FUN_10014ae4c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_10014ae40();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_10014aeac();
  }
  lVar1 = param_4 + unaff_x20 * 0x10;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x10;
  return;
}



/* Entry: 10014ae90; end: 10014aeab;  */

void FUN_10014ae90(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  FUN_10014ae90();
  return;
}



/* Entry: 10014aeac; end: 10014aecb;  */

void FUN_10014aeac(void)

{
  FUN_10014ae90();
  return;
}



/* Entry: 10014aecc; end: 10014aedb;  */

void FUN_10014aecc(void)

{
  return;
}



/* Entry: 10014aedc; end: 10014afbb;  */

void FUN_10014aedc(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = puVar3;
  for (lVar4 = param_3 << 4; lVar4 != 0; lVar4 = lVar4 + -0x10) {
    uVar1 = param_2[1];
    *puVar2 = *param_2;
    puVar2[1] = uVar1;
    puVar2 = puVar2 + 2;
    param_2 = param_2 + 2;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3 + param_3 * 2;
  return;
}



/* Entry: 10014afbc; end: 10014afc3;  */

void FUN_10014afbc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10014afc4; end: 10014afef;  */

long * FUN_10014afc4(long *param_1)

{
  FUN_10014afbc();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10014aff0; end: 10014b00b;  */

void FUN_10014aff0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10014b00c; end: 10014b0d7;  */

void FUN_10014b00c(void)

{
  return;
}



/* Entry: 10014b0d8; end: 10014b0eb;  */

undefined8 FUN_10014b0d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10014b0ec; end: 10014b123;  */

undefined4 * FUN_10014b0ec(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 in_CY;
  undefined4 *puVar1;
  undefined4 *unaff_x19;
  
  FUN_10014b0d8();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_10014b138();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  *(undefined4 **)(unaff_x19 + 2) = puVar1;
  return puVar1 + -1;
}



/* Entry: 10014b124; end: 10014b137;  */

void FUN_10014b124(void)

{
  return;
}



/* Entry: 10014b138; end: 10014b1ab;  */

void FUN_10014b138(undefined8 param_1)

{
  long *unaff_x19;
  undefined4 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  FUN_10014b124();
  FUN_10014b1ac();
  FUN_10014b1fc(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 2,unaff_x19 + 2);
  *puStack_38 = *unaff_x20;
  puStack_38 = puStack_38 + 1;
  func_0x00010014b278();
  FUN_10014b2a4();
  func_0x00010014b314();
  FUN_10014b328();
  return;
}



/* Entry: 10014b1ac; end: 10014b1eb;  */

long * FUN_10014b1ac(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 1);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x3fffffffffffffff;
    }
    return plVar1;
  }
  func_0x000105536fa8();
  param_1[3] = 0;
  param_1[4] = param_4;
  return param_1;
}



/* Entry: 10014b1ec; end: 10014b1fb;  */

void FUN_10014b1ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  return;
}



/* Entry: 10014b1fc; end: 10014b26f;  */

void FUN_10014b1fc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_10014b1ec();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010014b23c();
  }
  lVar1 = param_4 + unaff_x20 * 4;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 4;
  return;
}



/* Entry: 10014b270; end: 10014b2a3;  */

void FUN_10014b270(void)

{
  return;
}



/* Entry: 10014b2a4; end: 10014b2d7;  */

void FUN_10014b2a4(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010014b284();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  FUN_10014b2d8();
  return;
}



/* Entry: 10014b2d8; end: 10014b327;  */

void FUN_10014b2d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  unaff_x19[1] = param_1;
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10014b328; end: 10014b353;  */

long * FUN_10014b328(long *param_1)

{
  func_0x00010014b320();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10014b354; end: 10014b383;  */

void FUN_10014b354(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -4;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10014b384; end: 10014b3eb;  */

void FUN_10014b384(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10014b3ec; end: 10014b453;  */

void FUN_10014b3ec(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    func_0x000107c60e14();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10014b454; end: 10014b45b;  */

void FUN_10014b454(void)

{
  return;
}



/* Entry: 10014b45c; end: 10014b607;  */

void FUN_10014b45c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10014b608; end: 10014b627; -[_TtC15StartupServices15StartupServices startupInfoService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10014b608(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_11307d7d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10014b628; end: 10014bb63;  */

void FUN_10014b628(void)

{
  return;
}



/* Entry: 10014bb64; end: 10014bb6f; -[_TtC17SCGhostToSignaler15GhostToSignaler startupType] */

undefined8 FUN_10014bb64(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  (*(code *)0x10014bba8)();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 10014bb70; end: 10014bbff;  */

undefined8 FUN_10014bb70(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  (*param_3)();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 10014bc00; end: 10014bc0f; -[_TtC29SCSystemConfigurationServices29SCSystemConfigurationServices startupConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10014bc00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130815a8));
  return;
}



/* Entry: 10014bc10; end: 10014bc27; -[SCCameraHardwareConfigurationImpl deferPrewarmOnBackgroundLaunch] */

void FUN_10014bc10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0cd8,0,0);
  return;
}



/* Entry: 10014bc28; end: 10014bc87; -[SCCameraHardwareConfigurationImpl cameraWarmupEnabled] */

void FUN_10014bc28(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x000107c40efc(PTR_PTR_1126b2930);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4a41c();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0bd8,puVar2,0);
  return;
}



/* Entry: 10014bc88; end: 10014bcff; -[SCDevice isSimilarToIphone6SorNewer] */

long FUN_10014bc88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c41928();
  if ((lVar1 == 1) || (lVar1 == 2)) {
    func_0x000107c446b4(param_1);
    func_0x000107c61180();
    lVar1 = param_1;
    FUN_10014f9e4();
    func_0x000107c61170(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10014bd00; end: 10014bd8f; -[SCDevice deviceModelType] */

undefined1 FUN_10014bd00(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  
  func_0x000107c41924();
  func_0x000107c61180();
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c4adac();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c4f890(param_1,param_2,&PTR____CFConstantStringClassReference_110ef23d8);
    if (lVar2 == 0x7fffffffffffffff) {
      lVar2 = param_1;
      func_0x000107c4f890(param_1,param_2,&PTR____CFConstantStringClassReference_110f5b438);
      uVar1 = lVar2 != 0x7fffffffffffffff;
    }
    else {
      uVar1 = 2;
    }
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10014bd90; end: 10014bd97; -[SCDevice deviceModel] */

undefined8 FUN_10014bd90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10014bd98; end: 10014c0cf;  */

void FUN_10014bd98(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010014bda0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x000107c60ca0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10014c0d0; end: 10014c2bb;  */

/* WARNING: Removing unreachable block (ram,0x00010014c230) */

void FUN_10014c0d0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar2 = (undefined8 *)param_1[2];
  puVar11 = puVar2;
  if (puVar2 == (undefined8 *)param_1[3]) {
    puVar11 = (undefined8 *)*param_1;
    puVar13 = (undefined8 *)param_1[1];
    if (puVar13 < puVar11 || (long)puVar13 - (long)puVar11 == 0) {
      uVar6 = ((long)puVar2 - (long)puVar11 >> 3) * 0x5555555555555556;
      if ((long)puVar2 - (long)puVar11 == 0) {
        uVar6 = 1;
      }
      if (0xaaaaaaaaaaaaaaa < uVar6) {
        func_0x000104bd35f4();
        return;
      }
      lVar4 = uVar6 * 0x18;
      func_0x000107c60e20();
      lVar7 = lVar4 + (uVar6 >> 2) * 0x18;
      lVar5 = lVar4 + uVar6 * 0x18;
      lVar8 = (long)puVar2 - (long)puVar13;
      if (lVar8 == 0) {
        *param_1 = lVar4;
        param_1[1] = lVar7;
        param_1[2] = lVar7;
        param_1[3] = lVar5;
      }
      else {
        lVar1 = lVar7 + lVar8;
        lVar9 = (uVar6 >> 2) * 0x18;
        do {
          puVar11 = (undefined8 *)(lVar4 + lVar9);
          uVar15 = puVar13[1];
          uVar14 = *puVar13;
          puVar11[2] = puVar13[2];
          puVar11[1] = uVar15;
          *puVar11 = uVar14;
          puVar13[1] = 0;
          puVar13[2] = 0;
          *puVar13 = 0;
          lVar9 = lVar9 + 0x18;
          lVar8 = lVar8 + -0x18;
          puVar13 = puVar13 + 3;
        } while (lVar8 != 0);
        puVar11 = (undefined8 *)*param_1;
        lVar8 = param_1[1];
        lVar9 = param_1[2];
        *param_1 = lVar4;
        param_1[1] = lVar7;
        param_1[2] = lVar1;
        param_1[3] = lVar5;
        for (; lVar8 != lVar9; lVar9 = lVar9 + -0x18) {
        }
      }
      if (puVar11 != (undefined8 *)0x0) {
        func_0x000107c60e14(puVar11);
      }
      puVar11 = (undefined8 *)param_1[2];
      cVar3 = *(char *)((long)param_2 + 0x17);
      goto joined_r0x00010014c250;
    }
    lVar5 = (((long)puVar13 - (long)puVar11 >> 3) * -0x5555555555555555 + 1) / 2;
    puVar11 = puVar13 + lVar5 * -3;
    puVar10 = puVar11;
    if (puVar13 != puVar2) {
      do {
        if (*(char *)((long)puVar10 + 0x17) < '\0') {
          func_0x000107c60e14(*puVar10);
        }
        uVar15 = puVar13[1];
        uVar14 = *puVar13;
        puVar10[2] = puVar13[2];
        puVar11 = puVar10 + 3;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        *(undefined1 *)((long)puVar13 + 0x17) = 0;
        puVar12 = puVar13 + 3;
        *(undefined1 *)puVar13 = 0;
        puVar10 = puVar11;
        puVar13 = puVar12;
      } while (puVar12 != puVar2);
      puVar13 = (undefined8 *)param_1[1];
    }
    param_1[1] = (long)(puVar13 + lVar5 * -3);
    param_1[2] = (long)puVar11;
  }
  cVar3 = *(char *)((long)param_2 + 0x17);
joined_r0x00010014c250:
  if (cVar3 < '\0') {
    FUN_100033dac(puVar11,*param_2,param_2[1]);
  }
  else {
    uVar15 = param_2[1];
    uVar14 = *param_2;
    puVar11[2] = param_2[2];
    puVar11[1] = uVar15;
    *puVar11 = uVar14;
  }
  param_1[2] = param_1[2] + 0x18;
  return;
}



/* Entry: 10014c2bc; end: 10014c2cb;  */

void FUN_10014c2bc(void)

{
  return;
}



/* Entry: 10014c2cc; end: 10014c373;  */

undefined8 FUN_10014c2cc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  FUN_10014c2bc();
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x000107c610b4(*(undefined8 *)(param_2 + 0x10));
  lVar2 = *unaff_x21;
  lVar3 = unaff_x20[1];
  unaff_x20[2] = unaff_x20[2] + (unaff_x21[1] - unaff_x19);
  unaff_x21[1] = unaff_x19;
  lVar3 = lVar3 + ((unaff_x19 - lVar2) / -0x18) * 0x18;
  func_0x000107c610b4(lVar3);
  unaff_x20[1] = lVar3;
  lVar2 = *unaff_x21;
  unaff_x21[1] = lVar2;
  *unaff_x21 = unaff_x20[1];
  unaff_x20[1] = lVar2;
  lVar2 = unaff_x21[1];
  unaff_x21[1] = unaff_x20[2];
  unaff_x20[2] = lVar2;
  lVar2 = unaff_x21[2];
  unaff_x21[2] = unaff_x20[3];
  unaff_x20[3] = lVar2;
  *unaff_x20 = unaff_x20[1];
  return uVar1;
}



/* Entry: 10014c374; end: 10014c37f;  */

void FUN_10014c374(void)

{
  return;
}



/* Entry: 10014c380; end: 10014c44f;  */

uint FUN_10014c380(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2[1];
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar2 = param_1;
  if ((long)uVar5 < 0) {
    puVar2 = (undefined8 *)*param_1;
    uVar5 = param_1[1];
  }
  uVar1 = uVar4;
  if (uVar5 <= uVar4) {
    uVar1 = uVar5;
  }
  func_0x000107c610b0(puVar2,*param_2,uVar1);
  uVar3 = (uint)(uVar4 < uVar5);
  if (uVar5 < uVar4) {
    uVar3 = 0xffffffff;
  }
  if ((uint)puVar2 != 0) {
    uVar3 = (uint)puVar2;
  }
  return uVar3;
}



/* Entry: 10014c450; end: 10014c4a7;  */

void FUN_10014c450(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar1 = (undefined8 *)((long)puVar2 + (param_2 - param_4));
  puVar3 = puVar2;
  for (puVar4 = puVar1; puVar4 < param_3; puVar4 = puVar4 + 3) {
    uVar6 = puVar4[1];
    uVar5 = *puVar4;
    puVar3[2] = puVar4[2];
    puVar3[1] = uVar6;
    *puVar3 = uVar5;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar3 = puVar3 + 3;
  }
  *(undefined8 **)(param_1 + 8) = puVar3;
  func_0x00010014c49c(param_2,puVar1,puVar1,puVar2);
  FUN_10014c4e0();
  return;
}



/* Entry: 10014c4a8; end: 10014c4cf;  */

void FUN_10014c4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010014c49c(param_1,param_2,param_2,param_3);
  FUN_10014c4e0();
  return;
}



/* Entry: 10014c4d0; end: 10014c4df;  */

void FUN_10014c4d0(void)

{
  return;
}



/* Entry: 10014c4e0; end: 10014c53b;  */

void FUN_10014c4e0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x21;
  
  FUN_10014c4d0();
  while (param_4 = param_4 + -0x18, param_3 != unaff_x21) {
    param_3 = param_3 + -0x18;
    FUN_100066230(param_4,param_3);
  }
  FUN_10014c53c();
  return;
}



/* Entry: 10014c53c; end: 10014c553;  */

void FUN_10014c53c(void)

{
  return;
}



/* Entry: 10014c554; end: 10014c593;  */

void FUN_10014c554(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010014c548();
  if (*(char *)(param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*unaff_x20);
  }
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  unaff_x20[2] = unaff_x19[2];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
  *(undefined1 *)unaff_x19 = 0;
  return;
}



/* Entry: 10014c594; end: 10014c59b;  */

void FUN_10014c594(void)

{
  return;
}



/* Entry: 10014c59c; end: 10014d1eb;  */

void FUN_10014c59c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 10014d1ec; end: 10014d25f;  */

void FUN_10014d1ec(long *param_1)

{
  if (*param_1 != 0) {
    FUN_100164364();
    func_0x000107c60e14(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10014d260; end: 10014d293;  */

void FUN_10014d260(void)

{
  return;
}



/* Entry: 10014d294; end: 10014d39b;  */

undefined8 *
FUN_10014d294(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_DAT_110cd4a10;
  *(undefined4 *)(param_1 + 1) = param_4;
  param_1[0x16] = 0;
  param_1[2] = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
  puVar2 = param_1 + 0x10;
  *puVar2 = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
  func_0x000107c60dd0(puVar2,param_1 + 3);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *puVar2 = &PTR_DAT_11088d708;
  puVar1 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  param_1[2] = &PTR_DAT_11088d6e0;
  param_1[3] = puVar1;
  func_0x000107c60dac(param_1 + 4);
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = &PTR_DAT_11088d7b0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x10;
  puVar2 = param_1 + 3;
  FUN_10014d39c();
  param_1[0x24] = param_2;
  *(int *)(param_1 + 0x25) = (int)param_3;
  func_0x000107c60e5c();
  *(undefined4 *)((long)param_1 + 300) = *(undefined4 *)puVar2;
  func_0x000107c60e5c();
  *(undefined4 *)puVar2 = 0;
  FUN_10014d66c(param_1,param_2,param_3);
  return param_1;
}



/* Entry: 10014d39c; end: 10014d66b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10014d39c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  char *pcVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long *plStack_b0;
  
  *(undefined8 *)(param_1 + 0x58) = 0;
  plVar18 = (long *)(param_1 + 0x40);
  uVar10 = (ulong)*(char *)(param_1 + 0x57);
  if ((long)uVar10 < 0) {
    uVar9 = *(uint *)(param_1 + 0x60);
    plVar7 = *(long **)(param_1 + 0x40);
    uVar17 = *(ulong *)(param_1 + 0x48);
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x60);
    plVar7 = plVar18;
    uVar17 = uVar10;
  }
  if ((uVar9 >> 3 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = (long)plVar7 + uVar17;
    *(long **)(param_1 + 0x10) = plVar7;
    *(long **)(param_1 + 0x18) = plVar7;
    *(ulong *)(param_1 + 0x20) = (long)plVar7 + uVar17;
  }
  if ((uVar9 >> 4 & 1) == 0) {
    return;
  }
  *(ulong *)(param_1 + 0x58) = (long)plVar7 + uVar17;
  if (*(char *)(param_1 + 0x57) < '\0') {
    uVar12 = *(ulong *)(param_1 + 0x50);
    uVar19 = (uVar12 & 0x7fffffffffffffff) - 1;
    uVar10 = uVar12 >> 0x38;
    uVar9 = (uint)(byte)(uVar12 >> 0x38);
    if (-1 < (long)uVar12) goto LAB_10014d428;
    uVar10 = *(ulong *)(param_1 + 0x48);
    if (uVar19 <= uVar10) {
      *(ulong *)(param_1 + 0x48) = uVar19;
      *(undefined1 *)(*(long *)(param_1 + 0x40) + uVar19) = 0;
      cVar3 = *(char *)(param_1 + 0x57);
      goto joined_r0x00010014d4d4;
    }
    bVar4 = true;
    uVar13 = uVar19 - uVar10;
    uVar12 = uVar19;
    if (uVar13 <= uVar19 - uVar10) goto LAB_10014d500;
LAB_10014d44c:
    uVar14 = 0x7ffffffffffffff7;
    if (0x7ffffffffffffff7 - uVar12 < (uVar13 - uVar12) + uVar10) {
      func_0x000104c4f6b8();
      lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_c0 = uVar12;
      uStack_b8 = uVar19;
      plStack_b0 = plVar7;
      if (param_2 != 0) {
        uVar10 = param_2;
        func_0x000107c613d0();
        if (uVar10 != 0) {
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_180 = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_178 = 0x100000000;
          uStack_1a8 = 0x100000000000000;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lVar11 = 0;
          do {
            cVar3 = *(char *)((long)&uStack_1d0 + (ulong)*(byte *)(param_2 + uVar10 + -1));
            param_2 = param_2 - 1;
            lVar1 = lVar11 + 1;
            if (uVar10 - 1 == lVar11) break;
            lVar11 = lVar1;
          } while (cVar3 == '\0');
          if ((cVar3 != '\0') && (uVar10 <= uVar10 - lVar1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0,0x10014d9f4);
            (*pcVar5)();
          }
        }
        plVar18 = (long *)(param_1 + 0x10);
        uStack_1d0 = CONCAT71(uStack_1d0._1_7_,0x5b);
        FUN_10014d9fc(plVar18,&uStack_1d0,1);
        uStack_1e8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1e0 = 0xaaaaaaaaaaaaaaaa;
        func_0x000107c61020(&uStack_1e8,0);
        uStack_1f0 = uStack_1e8;
        uStack_1a0 = 0xaaaaaaaaaaaaaaaa;
        uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1c0 = 0xaaaaaaaaaaaaaaaa;
        uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
        uStack_1c8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1d0 = 0xaaaaaaaaaaaaaaaa;
        func_0x000107c61050(&uStack_1f0,&uStack_1d0);
        lVar11 = (long)plVar18 + *(long *)(*(long *)(param_1 + 0x10) + -0x18);
        if (*(int *)(lVar11 + 0x90) == -1) {
          func_0x000107c60c08(&lStack_1d8,lVar11);
          plVar7 = &lStack_1d8;
          func_0x000107c60c00(plVar7,PTR___ZNSt3__15ctypeIcE2idE_110346770);
          (**(code **)(*plVar7 + 0x38))();
          func_0x000107c60db0(&lStack_1d8);
        }
        *(undefined4 *)(lVar11 + 0x90) = 0x30;
        *(undefined8 *)((long)plVar18 + *(long *)(*(long *)(param_1 + 0x10) + -0x18) + 0x18) = 2;
        plVar7 = plVar18;
        func_0x000107c60ce8(plVar18,(int)uStack_1c0 + 1);
        *(undefined8 *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0x18) = 2;
        func_0x000107c60ce8();
        lStack_1d8._0_1_ = 0x2f;
        FUN_10014d9fc();
        *(undefined8 *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0x18) = 2;
        func_0x000107c60ce8();
        *(undefined8 *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0x18) = 2;
        func_0x000107c60ce8();
        *(undefined8 *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0x18) = 2;
        func_0x000107c60ce8();
        lStack_1d8._0_1_ = 0x2e;
        FUN_10014d9fc();
        *(undefined8 *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0x18) = 6;
        func_0x000107c60ce8();
        lStack_1d8._0_1_ = 0x3a;
        FUN_10014d9fc();
        uVar9 = *(uint *)(param_1 + 8);
        if ((int)uVar9 < 0) {
          FUN_10014d9fc(plVar18,&UNK_10f744399,7);
          func_0x000107c60ce8();
        }
        else {
          if (uVar9 < 4) {
            pcVar16 = (&PTR_s_INFO_110cd4a40)[uVar9];
          }
          else {
            pcVar16 = "UNKNOWN";
          }
          pcVar8 = pcVar16;
          func_0x000107c613d0(pcVar16);
          FUN_10014d9fc(plVar18,pcVar16,pcVar8);
        }
        FUN_10014d9fc(plVar18,":",1);
        func_0x000107c60ccc();
        FUN_10014d9fc(plVar18,&DAT_10f68e8ec,1);
        func_0x000107c60ce8();
        FUN_10014d9fc();
        func_0x0001001548e4(&uStack_1d0,param_1 + 0x18);
        if ((long)uStack_1c0._7_1_ < 0) {
          *(undefined8 *)(param_1 + 0x118) = uStack_1c8;
          func_0x000107c60e14(uStack_1d0);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
            return;
          }
        }
        else {
          *(long *)(param_1 + 0x118) = (long)uStack_1c0._7_1_;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
            return;
          }
        }
        func_0x000107c60e78();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x10014d9e8);
      (*pcVar5)();
    }
    if (bVar4) {
      plVar15 = (long *)*plVar18;
      if (0x3ffffffffffffff2 < uVar12) goto LAB_10014d484;
LAB_10014d614:
      uVar6 = uVar19;
      if (uVar19 <= uVar12 * 2) {
        uVar6 = uVar12 * 2;
      }
      uVar2 = 0x19;
      if ((uVar6 | 7) != 0x17) {
        uVar2 = (uVar6 | 7) + 1;
      }
      uVar14 = 0x17;
      if (0x16 < uVar6) {
        uVar14 = uVar2;
      }
      uVar6 = uVar14;
      func_0x000107c60e20();
    }
    else {
      plVar15 = plVar18;
      if (uVar12 < 0x3ffffffffffffff3) goto LAB_10014d614;
LAB_10014d484:
      uVar6 = uVar14;
      func_0x000107c60e20();
    }
    if (uVar10 != 0) {
      func_0x000107c610b8(uVar6,plVar15,uVar10);
    }
    if (uVar12 != 0x16) {
      func_0x000107c60e14(plVar15);
    }
    *(ulong *)(param_1 + 0x48) = uVar10;
    *(ulong *)(param_1 + 0x50) = uVar14 | 0x8000000000000000;
    *(ulong *)(param_1 + 0x40) = uVar6;
LAB_10014d534:
    plVar18 = (long *)*plVar18;
    func_0x000107c60ee4((long)plVar18 + uVar10,uVar13);
    cVar3 = *(char *)(param_1 + 0x57);
  }
  else {
    uVar19 = 0x16;
LAB_10014d428:
    uVar9 = (uint)uVar10;
    uVar10 = uVar10 & 0xff;
    if (uVar19 <= uVar10) {
      *(char *)(param_1 + 0x57) = (char)uVar19;
      *(undefined1 *)((long)plVar18 + uVar19) = 0;
      cVar3 = *(char *)(param_1 + 0x57);
      goto joined_r0x00010014d4d4;
    }
    bVar4 = false;
    uVar13 = uVar19 - uVar10;
    uVar12 = 0x16;
    if (0x16 - uVar10 < uVar13) goto LAB_10014d44c;
LAB_10014d500:
    if ((uVar9 >> 7 & 1) != 0) goto LAB_10014d534;
    func_0x000107c60ee4((long)plVar18 + uVar10,uVar13);
    cVar3 = *(char *)(param_1 + 0x57);
  }
  if (cVar3 < '\0') {
    *(ulong *)(param_1 + 0x48) = uVar19;
    *(undefined1 *)((long)plVar18 + uVar19) = 0;
    cVar3 = *(char *)(param_1 + 0x57);
  }
  else {
    *(byte *)(param_1 + 0x57) = (byte)uVar19 & 0x7f;
    *(undefined1 *)((long)plVar18 + uVar19) = 0;
    cVar3 = *(char *)(param_1 + 0x57);
  }
joined_r0x00010014d4d4:
  lVar11 = (long)cVar3;
  if (lVar11 < 0) {
    lVar11 = *(long *)(param_1 + 0x48);
  }
  *(long **)(param_1 + 0x28) = plVar7;
  *(long **)(param_1 + 0x30) = plVar7;
  *(long *)(param_1 + 0x38) = (long)plVar7 + lVar11;
  if ((*(byte *)(param_1 + 0x60) & 3) != 0) {
    if (uVar17 >> 0x1f != 0) {
      uVar10 = (uVar17 - 0x80000000) / 0x7fffffff;
      plVar7 = (long *)((long)plVar7 + uVar10 * 0x7fffffff + 0x7fffffff);
      uVar17 = (uVar17 + uVar10 * -0x7fffffff) - 0x7fffffff;
      *(long **)(param_1 + 0x30) = plVar7;
    }
    if (uVar17 != 0) {
      *(ulong *)(param_1 + 0x30) = (long)plVar7 + uVar17;
    }
  }
  return;
}



/* Entry: 10014d66c; end: 10014d9fb;  */

void FUN_10014d66c(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0) {
    uVar5 = param_2;
    func_0x000107c613d0();
    if (uVar5 != 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_110 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_108 = 0x100000000;
      uStack_138 = 0x100000000000000;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      lVar9 = 0;
      do {
        cVar3 = *(char *)((long)&uStack_160 + (ulong)*(byte *)(param_2 + uVar5 + -1));
        param_2 = param_2 - 1;
        lVar1 = lVar9 + 1;
        if (uVar5 - 1 == lVar9) break;
        lVar9 = lVar1;
      } while (cVar3 == '\0');
      if ((cVar3 != '\0') && (uVar5 <= uVar5 - lVar1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0,0x10014d9f4);
        (*pcVar4)();
      }
    }
    plVar8 = (long *)(param_1 + 0x10);
    uStack_160 = CONCAT71(uStack_160._1_7_,0x5b);
    FUN_10014d9fc(plVar8,&uStack_160,1);
    uStack_178 = 0xaaaaaaaaaaaaaaaa;
    uStack_170 = 0xaaaaaaaaaaaaaaaa;
    func_0x000107c61020(&uStack_178,0);
    uStack_180 = uStack_178;
    uStack_130 = 0xaaaaaaaaaaaaaaaa;
    uStack_148 = 0xaaaaaaaaaaaaaaaa;
    uStack_150 = 0xaaaaaaaaaaaaaaaa;
    uStack_138 = 0xaaaaaaaaaaaaaaaa;
    uStack_140 = 0xaaaaaaaaaaaaaaaa;
    uStack_158 = 0xaaaaaaaaaaaaaaaa;
    uStack_160 = 0xaaaaaaaaaaaaaaaa;
    func_0x000107c61050(&uStack_180,&uStack_160);
    lVar9 = (long)plVar8 + *(long *)(*(long *)(param_1 + 0x10) + -0x18);
    if (*(int *)(lVar9 + 0x90) == -1) {
      func_0x000107c60c08(&lStack_168,lVar9);
      plVar6 = &lStack_168;
      func_0x000107c60c00(plVar6,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (**(code **)(*plVar6 + 0x38))();
      func_0x000107c60db0(&lStack_168);
    }
    *(undefined4 *)(lVar9 + 0x90) = 0x30;
    *(undefined8 *)((long)plVar8 + *(long *)(*(long *)(param_1 + 0x10) + -0x18) + 0x18) = 2;
    plVar6 = plVar8;
    func_0x000107c60ce8(plVar8,(int)uStack_150 + 1);
    *(undefined8 *)((long)plVar6 + *(long *)(*plVar6 + -0x18) + 0x18) = 2;
    func_0x000107c60ce8();
    lStack_168._0_1_ = 0x2f;
    FUN_10014d9fc();
    *(undefined8 *)((long)plVar6 + *(long *)(*plVar6 + -0x18) + 0x18) = 2;
    func_0x000107c60ce8();
    *(undefined8 *)((long)plVar6 + *(long *)(*plVar6 + -0x18) + 0x18) = 2;
    func_0x000107c60ce8();
    *(undefined8 *)((long)plVar6 + *(long *)(*plVar6 + -0x18) + 0x18) = 2;
    func_0x000107c60ce8();
    lStack_168._0_1_ = 0x2e;
    FUN_10014d9fc();
    *(undefined8 *)((long)plVar6 + *(long *)(*plVar6 + -0x18) + 0x18) = 6;
    func_0x000107c60ce8();
    lStack_168._0_1_ = 0x3a;
    FUN_10014d9fc();
    uVar2 = *(uint *)(param_1 + 8);
    if ((int)uVar2 < 0) {
      FUN_10014d9fc(plVar8,&UNK_10f744399,7);
      func_0x000107c60ce8();
    }
    else {
      if (uVar2 < 4) {
        pcVar10 = (&PTR_s_INFO_110cd4a40)[uVar2];
      }
      else {
        pcVar10 = "UNKNOWN";
      }
      pcVar7 = pcVar10;
      func_0x000107c613d0(pcVar10);
      FUN_10014d9fc(plVar8,pcVar10,pcVar7);
    }
    FUN_10014d9fc(plVar8,":",1);
    func_0x000107c60ccc();
    FUN_10014d9fc(plVar8,&DAT_10f68e8ec,1);
    func_0x000107c60ce8();
    FUN_10014d9fc();
    func_0x0001001548e4(&uStack_160,param_1 + 0x18);
    if ((long)uStack_150._7_1_ < 0) {
      *(undefined8 *)(param_1 + 0x118) = uStack_158;
      func_0x000107c60e14(uStack_160);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
    }
    else {
      *(long *)(param_1 + 0x118) = (long)uStack_150._7_1_;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
    }
    func_0x000107c60e78();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(0,0x10014d9e8);
  (*pcVar4)();
}



/* Entry: 10014d9fc; end: 10014db17;  */

long * FUN_10014d9fc(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c60cd0(&uStack_68,param_1);
  if ((char)uStack_68 == '\x01') {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    lVar4 = *(long *)(lVar1 + 0x28);
    lVar2 = param_2 + param_3;
    if ((*(uint *)(lVar1 + 8) & 0xb0) != 0x20) {
      lVar2 = param_2;
    }
    iVar5 = *(int *)(lVar1 + 0x90);
    if (iVar5 == -1) {
      func_0x000107c60c08(&lStack_58,lVar1);
      plVar3 = &lStack_58;
      func_0x000107c60c00(plVar3,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (**(code **)(*plVar3 + 0x38))();
      iVar5 = (int)plVar3;
      func_0x000107c60db0(&lStack_58);
      *(int *)(lVar1 + 0x90) = iVar5;
    }
    FUN_1001545ec(lVar4,param_2,lVar2,param_2 + param_3,lVar1,(int)(char)iVar5);
    if (lVar4 == 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      func_0x000107c60dd4(lVar1,*(uint *)(lVar1 + 0x20) | 5);
    }
  }
  func_0x000107c60cd4(&uStack_68);
  return param_1;
}



/* Entry: 10014db18; end: 10014dd7f;  */

void FUN_10014db18(uint param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  long extraout_x8;
  int *piVar14;
  long extraout_x9;
  uint uVar15;
  undefined8 *puVar16;
  
  uVar13 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 & 6) == 2) {
    if ((param_1 >> 0x12 & 1) == 0) {
      puVar5 = (undefined8 *)0x2;
    }
    else {
      puVar6 = (undefined8 *)PTR__OBJC_CLASS___CTTelephonyNetworkInfo_1126dfdd8;
      func_0x000107c610fc();
      func_0x000107c61104();
      func_0x000107c51fe8();
      puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x000107c5a790(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                          *(undefined8 *)PTR__CTRadioAccessTechnologyGPRS_11034b968);
      puVar8 = (undefined8 *)PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x000107c5a790(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                          *(undefined8 *)PTR__CTRadioAccessTechnologyWCDMA_11034b998);
      puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x000107c5a790(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                          *(undefined8 *)PTR__CTRadioAccessTechnologyLTE_11034b980);
      puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x000107c5a790(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                          &PTR____CFConstantStringClassReference_110f5fa58);
      puVar11 = puVar10;
      func_0x000107c3778c();
      lVar4 = lRam0000000000000000;
      if (puVar11 != (undefined8 *)0x0) {
        uVar15 = 0;
        do {
          puVar16 = (undefined8 *)0x0;
          puVar5 = puVar11;
          do {
            if (lRam0000000000000000 != lVar4) {
              puVar5 = puVar6;
              func_0x000107c61128();
            }
            func_0x000107c377a8();
            bVar3 = puVar5 != (undefined8 *)0x0;
            puVar5 = (undefined8 *)0x0;
            uVar12 = uVar15;
            if (bVar3) {
              func_0x000107c377a8();
              puVar5 = puVar7;
              func_0x000107c37794();
              if (((ulong)puVar5 & 1) == 0) {
                puVar5 = puVar8;
                func_0x000107c37794();
                if (((ulong)puVar5 & 1) == 0) {
                  puVar5 = puVar9;
                  func_0x000107c37794();
                  if (((ulong)puVar5 & 1) == 0) {
                    puVar5 = puVar10;
                    func_0x000107c37794();
                    if ((int)puVar5 == 0) goto LAB_10014db64;
                    uVar12 = 5;
                  }
                  else {
                    uVar12 = 4;
                  }
                }
                else {
                  uVar12 = 3;
                }
              }
              else {
                uVar12 = 2;
              }
              if (uVar12 <= uVar15) {
                uVar12 = uVar15;
              }
            }
            uVar15 = uVar12;
            puVar16 = (undefined8 *)((long)puVar16 + 1);
          } while (puVar16 < puVar11);
          func_0x000107c3778c();
          puVar11 = puVar5;
        } while (puVar5 != (undefined8 *)0x0);
        if (uVar15 - 2 < 4) {
          puVar5 = (undefined8 *)(ulong)*(uint *)(&UNK_10e58a420 + (ulong)(uVar15 - 2) * 4);
          goto LAB_10014db64;
        }
      }
      puVar5 = (undefined8 *)0x4;
    }
  }
  else {
    puVar5 = (undefined8 *)0x6;
  }
LAB_10014db64:
  FUN_10014748c(uVar13);
  if (extraout_x9 != extraout_x8) {
    func_0x000107c60e78();
    piVar14 = (int *)*puVar5;
    if (piVar14 != (int *)0x0) {
      do {
        iVar1 = *piVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar3) {
          *piVar14 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000107c60e14(piVar14);
      }
    }
    return;
  }
  return;
}



/* Entry: 10014dd80; end: 10014f6e7;  */

undefined8 * FUN_10014dd80(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (piVar4 != (int *)0x0) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000107c60e14(piVar4);
    }
  }
  return param_1;
}



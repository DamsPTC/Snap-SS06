/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10121e28c; end: 10121e2bf;  */

void FUN_10121e28c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10121e2c0; end: 10121e3a7; -[ComposerMusicDependenciesService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010121e2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121e2fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121e31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121e36c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010121e320) */
/* WARNING: Removing unreachable block (ram,0x00010121e300) */
/* WARNING: Removing unreachable block (ram,0x00010121e2e0) */
/* WARNING: Removing unreachable block (ram,0x00010121e370) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121e2c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d69188));
  return;
}



/* Entry: 10121e3a8; end: 10121e3c7;  */

void FUN_10121e3a8(void)

{
  func_0x000107c61168(&PTR_PTR_1127bc7a8);
  return;
}



/* Entry: 10121e3c8; end: 10121e3e7; -[ValdiMusicAudioRecordingServices audioRecorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121e3c8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d69218));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10121e3e8; end: 10121e47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121e3e8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d69218) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10121e480; end: 10121e4b3;  */

void FUN_10121e480(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10121e4b4; end: 10121e4c3; -[ValdiMusicAudioRecordingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121e4b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d69218));
  return;
}



/* Entry: 10121e4c4; end: 10121e4e3;  */

void FUN_10121e4c4(void)

{
  func_0x000107c61168(&PTR_PTR_1127bc8c8);
  return;
}



/* Entry: 10121e4e4; end: 10121e663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10121e4e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112d69250;
  func_0x000107c61614(unaff_x20 + _DAT_112d69250,0);
  lVar3 = _DAT_112d69258;
  func_0x000107c61614(unaff_x20 + _DAT_112d69258,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d69260) = 0;
  lVar6 = _DAT_112d69268;
  uVar5 = 0x112d69248;
  func_0x0001000285a8(0x112d69248,&UNK_10d92cdc0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar6) = uVar5;
  lVar6 = param_1;
  func_0x000107c5cc5c();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10121e660);
    (*pcVar4)();
  }
  *(long *)(unaff_x20 + _DAT_112d69270) = lVar6;
  lVar6 = param_1;
  func_0x000107c5cc50();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + _DAT_112d69278) = lVar6;
    func_0x000107c61604(unaff_x20 + lVar2,param_2);
    *(undefined8 *)(unaff_x20 + _DAT_112d69280) = 0;
    func_0x000107c61604(unaff_x20 + lVar3,param_3);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d69288);
    *puVar1 = param_4;
    puVar1[1] = param_5;
    puVar7 = auStack_70;
    func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(param_3);
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10121e664);
  (*pcVar4)();
}



/* Entry: 10121e664; end: 10121e6b3;  */

undefined8 FUN_10121e664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10121f67c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 10121e6b4; end: 10121e75f; -[_TtC25SCMusicTopicPagePresenter23MusicTopicPagePresenter initWithMusicFeatureLaunchServices:presentingViewController:delegate:captureSessionId:] */

undefined8
FUN_10121e6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  uVar1 = param_3;
  FUN_10121f67c(param_3,param_4,param_5,param_6,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  return uVar1;
}



/* Entry: 10121e760; end: 10121e8eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10121e760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112d69250;
  func_0x000107c61614(unaff_x20 + _DAT_112d69250,0);
  lVar4 = _DAT_112d69258;
  func_0x000107c61614(unaff_x20 + _DAT_112d69258,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d69260) = 0;
  lVar7 = _DAT_112d69268;
  uVar6 = 0x112d69248;
  func_0x0001000285a8(0x112d69248,&UNK_10d92cdc0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar7) = uVar6;
  lVar7 = param_1;
  func_0x000107c5cc5c();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10121e8e8);
    (*pcVar5)();
  }
  *(long *)(unaff_x20 + _DAT_112d69270) = lVar7;
  lVar7 = param_1;
  func_0x000107c5cc50();
  func_0x000107c61180();
  if (lVar7 != 0) {
    *(long *)(unaff_x20 + _DAT_112d69278) = lVar7;
    func_0x000107c61604(unaff_x20 + lVar3,0);
    *(undefined8 *)(unaff_x20 + _DAT_112d69280) = param_2;
    func_0x000107c61604(unaff_x20 + lVar4,param_3);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d69288);
    *puVar1 = param_4;
    puVar1[1] = param_5;
    puVar2 = PTR_s_init_1125d9248;
    func_0x000107c615f0(param_2);
    puVar8 = auStack_70;
    func_0x000107c61154(puVar8,puVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(param_2);
    func_0x000107c615e8(param_3);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10121e8ec);
  (*pcVar5)();
}



/* Entry: 10121e8ec; end: 10121e93b;  */

undefined8 FUN_10121e8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010121f7dc();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 10121e93c; end: 10121e9e3; -[_TtC25SCMusicTopicPagePresenter23MusicTopicPagePresenter initWithMusicFeatureLaunchServices:deckContainerFactory:delegate:captureSessionId:] */

undefined8
FUN_10121e93c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  uVar1 = param_3;
  func_0x00010121f7dc(param_3,param_4,param_5,param_6,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  return uVar1;
}



/* Entry: 10121e9e4; end: 10121eb3b; -[_TtC25SCMusicTopicPagePresenter23MusicTopicPagePresenter trackSelectedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121e9e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  uVar2 = uVar1;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10121eb3c; end: 10121ebdf;  */

void FUN_10121eb3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121ebe0,uVar4,uVar5);
  return;
}



/* Entry: 10121ebe0; end: 10121f34b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121ebe0(double param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x22;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  
  lVar10 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  lVar6 = unaff_x22 + 0x10;
  func_0x000107c61428(lVar10 + 0x10,lVar6,0,0);
  lVar10 = lVar10 + 0x10;
  func_0x000107c61618();
  if (lVar10 == 0) goto LAB_10121f30c;
  puVar2 = *(undefined **)(lVar10 + _DAT_112d69280);
  if (puVar2 == (undefined *)0x0) {
    lVar14 = lVar10 + _DAT_112d69250;
    func_0x000107c61618();
    if (lVar14 != 0) {
      puVar2 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      func_0x000107c61170(lVar14);
      goto LAB_10121ec98;
    }
  }
  else {
    func_0x000107c4d06c();
    func_0x000107c61180();
LAB_10121ec98:
    lVar11 = *(long *)(unaff_x22 + 0x30);
    func_0x000107c615f0(puVar2);
    func_0x000107c5cd58();
    func_0x000107c61180();
    lVar14 = lVar11;
    func_0x000107c5cda4();
    func_0x000107c61180();
    lVar3 = lVar14;
    func_0x000107c2bb50();
    func_0x000107c61170(lVar14);
    lVar14 = lVar11;
    func_0x000107c5cab0();
    func_0x000107c61180();
    lVar4 = lVar14;
    func_0x000107c5faec();
    lVar7 = lVar6;
    func_0x000107c61170(lVar14);
    lVar14 = lVar11;
    func_0x000107c3e1a4();
    func_0x000107c61180();
    lVar17 = lVar14;
    func_0x000107c5faec();
    lVar13 = lVar7;
    func_0x000107c61170(lVar14);
    lVar14 = lVar11;
    func_0x000107c3dab0();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
    if (lVar14 == 0) {
      func_0x000107c5ede0();
      lVar16 = 1;
      (**(code **)(*(long *)(lVar14 + -8) + 0x38))(uVar12,1,1,lVar14);
    }
    else {
      func_0x000107c61174();
      lVar16 = lVar14;
      func_0x000107c5d7e8();
      func_0x000107c61180();
      lVar19 = lVar16;
      func_0x000107c5faec();
      func_0x000107c61170(lVar16);
      lVar16 = lVar13;
      func_0x000107c5edd0(uVar12,lVar19);
      func_0x000107c6142c(lVar13);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(lVar14);
    }
    lVar14 = lVar11;
    func_0x000107c3dab0();
    func_0x000107c61180();
    if (lVar14 == 0) {
      lVar13 = 0;
      lVar14 = lVar16;
LAB_10121ee20:
      lVar16 = -0x1000000000000000;
    }
    else {
      lVar13 = lVar14;
      func_0x000107c427c0();
      func_0x000107c61180();
      func_0x000107c61170(lVar14);
      lVar14 = lVar16;
      if (lVar13 == 0) goto LAB_10121ee20;
      lVar19 = lVar13;
      func_0x000107c4a8c4(lVar13);
      func_0x000107c61180();
      func_0x000107c61170(lVar13);
      lVar13 = lVar19;
      func_0x000107c5ee30(lVar19);
      lVar14 = lVar16;
      func_0x000107c61170(lVar19);
    }
    lVar19 = lVar11;
    func_0x000107c3dab0();
    func_0x000107c61180();
    if (lVar19 == 0) {
LAB_10121ee94:
      lVar20 = 0;
LAB_10121ee98:
      lVar14 = -0x1000000000000000;
    }
    else {
      lVar20 = lVar19;
      func_0x000107c427c0();
      func_0x000107c61180();
      func_0x000107c61170(lVar19);
      if (lVar20 == 0) goto LAB_10121ee98;
      lVar19 = lVar20;
      func_0x000107c4a804();
      func_0x000107c61180();
      func_0x000107c61170(lVar20);
      if (lVar19 == 0) goto LAB_10121ee94;
      lVar20 = lVar19;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar19);
    }
    func_0x000107c4161c(lVar11);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10121f344);
      (*pcVar1)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10121f348);
      (*pcVar1)();
    }
    if (4294967296.0 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10121f34c);
      (*pcVar1)();
    }
    uVar18 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar5 = 0;
    func_0x0001043b1a4c();
    uVar12 = uVar5;
    func_0x000107c610f8();
    func_0x0001043b1198(uVar12,lVar3,lVar4,lVar6,lVar17,lVar7,uVar18,lVar13,lVar16,lVar20,lVar14,
                        (int)param_1);
    lVar6 = lVar11;
    func_0x000107c4fd3c();
    func_0x000107c61180();
    if (lVar6 == 0) {
      lVar14 = 0;
    }
    else {
      lVar17 = lVar6;
      func_0x000107c5cda4();
      func_0x000107c61180();
      lVar14 = lVar17;
      func_0x000107c2bb50();
      func_0x000107c61170(lVar17);
      lVar17 = lVar6;
      func_0x000107c5cab0();
      func_0x000107c61180();
      lVar7 = lVar17;
      func_0x000107c5faec();
      lVar16 = lVar4;
      func_0x000107c61170(lVar17);
      lVar17 = lVar6;
      func_0x000107c3e19c();
      func_0x000107c61180();
      lVar13 = lVar17;
      func_0x000107c5faec();
      lVar19 = lVar16;
      func_0x000107c61170(lVar17);
      lVar17 = lVar6;
      func_0x000107c3dab0();
      func_0x000107c61180();
      uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
      if (lVar17 == 0) {
        func_0x000107c5ede0();
        lVar20 = 1;
        (**(code **)(*(long *)(lVar17 + -8) + 0x38))(uVar12,1,1,lVar17);
      }
      else {
        func_0x000107c61174();
        lVar20 = lVar17;
        func_0x000107c5d7e8();
        func_0x000107c61180();
        lVar8 = lVar20;
        func_0x000107c5faec();
        func_0x000107c61170(lVar20);
        lVar20 = lVar19;
        func_0x000107c5edd0(uVar12,lVar8);
        func_0x000107c6142c(lVar19);
        func_0x000107c61170(lVar17);
        func_0x000107c61170(lVar17);
      }
      lVar17 = lVar6;
      func_0x000107c3dab0();
      func_0x000107c61180();
      lVar19 = lVar20;
      if (lVar17 == 0) {
LAB_10121f0b0:
        lVar17 = 0;
        lVar20 = -0x1000000000000000;
      }
      else {
        lVar8 = lVar17;
        func_0x000107c427c0();
        func_0x000107c61180();
        func_0x000107c61170(lVar17);
        lVar19 = lVar20;
        if (lVar8 == 0) goto LAB_10121f0b0;
        lVar15 = lVar8;
        func_0x000107c4a8c4(lVar8);
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
        lVar17 = lVar15;
        func_0x000107c5ee30(lVar15);
        lVar19 = lVar20;
        func_0x000107c61170(lVar15);
      }
      lVar8 = lVar6;
      func_0x000107c3dab0();
      func_0x000107c61180();
      if (lVar8 == 0) {
LAB_10121f128:
        lVar15 = 0;
LAB_10121f12c:
        lVar19 = -0x1000000000000000;
      }
      else {
        lVar15 = lVar8;
        func_0x000107c427c0();
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
        if (lVar15 == 0) goto LAB_10121f12c;
        lVar8 = lVar15;
        func_0x000107c4a804();
        func_0x000107c61180();
        func_0x000107c61170(lVar15);
        if (lVar8 == 0) goto LAB_10121f128;
        lVar15 = lVar8;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar8);
      }
      uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
      func_0x000107c610f8(uVar5);
      func_0x0001043b1198(uVar5,lVar14,lVar7,lVar4,lVar13,lVar16,uVar12,lVar17,lVar20,lVar15,lVar19,
                          0);
      func_0x000107c61170(lVar6);
    }
    func_0x0001043ade18(0);
    func_0x000107c610f8();
    lVar4 = lVar14;
    func_0x000107c61174(lVar14);
    func_0x000107c61174(lVar3);
    uVar18 = 0;
    func_0x0001043ad274(0,lVar3,lVar14);
    uVar9 = *(undefined8 *)(lVar10 + _DAT_112d69278);
    uVar12 = *(undefined8 *)(lVar10 + _DAT_112d69288);
    uVar5 = ((undefined8 *)(lVar10 + _DAT_112d69288))[1];
    func_0x000107c61174(uVar9);
    func_0x000107c61434(uVar5);
    func_0x000107c5fadc(uVar12,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000107c4a274(lVar11);
    uVar5 = uVar9;
    func_0x000107c3ed6c(uVar9);
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar9);
    func_0x000107c615e8(puVar2);
    func_0x000107c4ab88(*(undefined8 *)(lVar10 + _DAT_112d69270));
    lVar6 = lVar10 + _DAT_112d69258;
    func_0x000107c61618();
    if (lVar6 != 0) {
      func_0x000107c5cc30();
      func_0x000107c615e8(puVar2);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar18);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar10);
      func_0x000107c615e8(lVar6);
      goto LAB_10121f30c;
    }
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(lVar11);
  }
  func_0x000107c61170(lVar10);
LAB_10121f30c:
  uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010121f33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10121f34c; end: 10121f387;  */

void FUN_10121f34c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010121f384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10121f388; end: 10121f3d7; -[_TtC25SCMusicTopicPagePresenter23MusicTopicPagePresenter presentTopicPageForTrackWithSelectedTrack:] */

/* WARNING: Possible PIC construction at 0x00010121f3c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010121f3c4) */

void FUN_10121f388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010121ea44(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10121f3d8; end: 10121f40b;  */

void FUN_10121f3d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10121f40c; end: 10121f4a7; -[_TtC25SCMusicTopicPagePresenter23MusicTopicPagePresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121f40c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d69270));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d69278));
  func_0x000107c61610(param_1 + _DAT_112d69250);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d69280));
  FUN_10121fa44(param_1 + _DAT_112d69258);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d69288 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d69260));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d69268));
  return;
}



/* Entry: 10121f4a8; end: 10121f4b3; -[_TtC25SCMusicTopicPagePresenter23MusicTopicPagePresenter pushToValdiMarshaller:] */

undefined8 FUN_10121f4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df220;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 10121f4b4; end: 10121f57f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121f4b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d69260);
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d69270);
    func_0x000107c61174();
    func_0x000107c42838(uVar4,param_2,param_1);
    lVar3 = _DAT_112d69258;
    lVar2 = unaff_x20 + _DAT_112d69258;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c5cc30();
      func_0x000107c615e8(lVar2);
    }
    lStack_38 = lVar1;
    func_0x0001002a64a8(*(undefined8 *)(unaff_x20 + _DAT_112d69268),&lStack_38);
    lVar3 = unaff_x20 + lVar3;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c5cc38();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10121f580; end: 10121f5cf; -[_TtC25SCMusicTopicPagePresenter23MusicTopicPagePresenter didSelectTrackForTopicViewerMusicScope:] */

/* WARNING: Possible PIC construction at 0x00010121f5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010121f5bc) */

void FUN_10121f580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10121f4b4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10121f5d0; end: 10121f62b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121f5d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c42838(*(undefined8 *)(unaff_x20 + _DAT_112d69270),param_2,param_1);
  lVar1 = unaff_x20 + _DAT_112d69258;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5cc30();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10121f62c; end: 10121f67b; -[_TtC25SCMusicTopicPagePresenter23MusicTopicPagePresenter didCompleteTopicViewerMusicScope:] */

/* WARNING: Possible PIC construction at 0x00010121f664: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010121f668) */

void FUN_10121f62c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10121f5d0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10121f67c; end: 10121f947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121f67c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112d69250;
  func_0x000107c61614(unaff_x20 + _DAT_112d69250,0);
  lVar3 = _DAT_112d69258;
  func_0x000107c61614(unaff_x20 + _DAT_112d69258,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d69260) = 0;
  lVar6 = _DAT_112d69268;
  uVar5 = 0x112d69248;
  func_0x0001000285a8(0x112d69248,&UNK_10d92cdc0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar6) = uVar5;
  lVar6 = param_1;
  func_0x000107c5cc5c();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10121f7d8);
    (*pcVar4)();
  }
  *(long *)(unaff_x20 + _DAT_112d69270) = lVar6;
  func_0x000107c5cc50();
  func_0x000107c61180();
  if (param_1 != 0) {
    *(long *)(unaff_x20 + _DAT_112d69278) = param_1;
    func_0x000107c61604(unaff_x20 + lVar2,param_2);
    *(undefined8 *)(unaff_x20 + _DAT_112d69280) = 0;
    func_0x000107c61604(unaff_x20 + lVar3,param_3);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d69288);
    *puVar1 = param_4;
    puVar1[1] = param_5;
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10121f7dc);
  (*pcVar4)();
}



/* Entry: 10121f948; end: 10121f997;  */

void FUN_10121f948(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10121f998;
  plVar5[5] = lVar1;
  plVar5[6] = lVar4;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[7] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[8] = uVar3;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar4;
  func_0x000107c5fce8();
  plVar5[9] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121ebe0,lVar4,lVar1);
  return;
}



/* Entry: 10121f998; end: 10121f9d3;  */

void FUN_10121f998(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010121f9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10121f9d4; end: 10121fa43;  */

void FUN_10121f9d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10121fa88;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10121fa44; end: 10121fa67;  */

undefined8 FUN_10121fa44(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10121fa68; end: 10121fa87;  */

void FUN_10121fa68(void)

{
  func_0x000107c61168(&PTR_PTR_1127bc988);
  return;
}



/* Entry: 10121fa88; end: 10121fa8b;  */

void FUN_10121fa88(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010121f9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10121fa8c; end: 10121fac3;  */

void FUN_10121fa8c(void)

{
  undefined8 uVar1;
  
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  uVar1 = 0x22;
  func_0x0001044e4b78();
  uRam00000001137ff280 = uVar1;
  return;
}



/* Entry: 10121fac4; end: 10121fc9b;  */

void FUN_10121fac4(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  FUN_100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  if (lRam0000000112d69340 != -1) {
    func_0x000107c61568(0x112d69340,FUN_10121fa8c);
  }
  uVar4 = uRam00000001137ff280;
  *(undefined8 *)(param_1 + 0x20) = uRam00000001137ff280;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar3 = 1;
  func_0x000107c602e8();
  func_0x000107c61174(uVar4);
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10121fc9c);
      (*pcVar2)();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar4 = 0;
    FUN_100f060ac(0,param_1);
  }
  lVar1 = lVar3 + 0x38;
  uVar5 = *(ulong *)(lVar3 + 0x28);
  func_0x000107c60114();
  uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
  uVar6 = uVar5 >> 6;
  uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
  uVar8 = 1L << (uVar5 & 0x3f);
  if ((uVar8 & uVar7) != 0) {
    func_0x0001044e4d64(0);
    do {
      uVar7 = *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8);
      func_0x000107c61174();
      uVar6 = uVar7;
      func_0x000107c60118();
      func_0x000107c61170(uVar7);
      if ((uVar6 & 1) != 0) {
        func_0x000107c61170(uVar4);
        goto LAB_10121fc30;
      }
      uVar5 = uVar5 + 1 & ~uVar9;
      uVar6 = uVar5 >> 6;
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
      uVar8 = 1L << (uVar5 & 0x3f);
    } while ((uVar8 & uVar7) != 0);
  }
  *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
  *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar5 * 8) = uVar4;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10121fc98);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_10121fc30:
  func_0x000107c61588(param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c61408(param_1 + 0x20,uVar10,uVar4);
  lRam00000001137ff288 = lVar3;
  return;
}



/* Entry: 10121fc9c; end: 10121fcff;  */

ulong FUN_10121fc9c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 10121fd00; end: 10122055b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10121fd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 unaff_x20;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c613fc();
  uVar5 = *(undefined8 *)(param_4 + _DAT_1130404b8);
  func_0x000107c61174();
  lVar6 = param_5;
  func_0x000107c40688();
  func_0x000107c61180();
  if (lVar6 != 0) {
    func_0x0001000285a8(0x112d65b40,&UNK_10d92ce30);
    lVar7 = lVar6;
    func_0x0001000bda74();
    func_0x000107c61170(lVar6);
    func_0x0001000285a8(0x112d69350,&UNK_10d92ce38);
    uVar8 = param_6;
    func_0x000107c5c894(param_6);
    func_0x000107c61180();
    uVar23 = uVar8;
    func_0x0001000bda74();
    func_0x000107c61170(uVar8);
    uVar8 = 0;
    FUN_101224db0(0);
    func_0x000107c613fc();
    func_0x0001012246e8(lVar7,uVar23,uVar8);
    puVar9 = &UNK_110395558;
    func_0x000107c613fc(&UNK_110395558,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = param_9;
    *(long *)(puVar9 + 0x18) = param_8;
    func_0x0001000285a8(0x112d69358,&UNK_10d92ce40);
    func_0x000107c613fc();
    func_0x000107c61174();
    func_0x000107c61174();
    uVar8 = 0x101220d9c;
    func_0x0001000bdd8c(0x101220d9c,puVar9);
    puVar9 = &UNK_110395580;
    func_0x000107c613fc(&UNK_110395580,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,param_2);
    puVar10 = &UNK_1103955a8;
    func_0x000107c613fc(&UNK_1103955a8,0x28,7);
    *(undefined8 *)(puVar10 + 0x10) = uVar8;
    *(undefined **)(puVar10 + 0x18) = puVar9;
    *(long *)(puVar10 + 0x20) = param_8;
    lVar6 = _DAT_112faecc0;
    puVar9 = &UNK_1103955d0;
    func_0x000107c613fc(&UNK_1103955d0,0x20,7);
    uVar23 = *(undefined8 *)(param_8 + lVar6);
    *(undefined8 *)(puVar9 + 0x18) = ((undefined8 *)(param_8 + lVar6))[1];
    *(undefined8 *)(puVar9 + 0x10) = uVar23;
    func_0x000107c61174();
    func_0x000107c6157c(uVar8);
    func_0x000107c615f0(uVar23);
    pcVar11 = 
    "init(conditionalBeginIn:playGamesScope:playGamesPresenterServices:myAIExperimentServices:conversationIdServices:textSendingServices:resultStoreServices:shareStoreServices:coreMessagingServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
    puVar12 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar13 = &UNK_1103955f8;
    func_0x000107c613fc(&UNK_1103955f8,0x60,7);
    *(undefined8 *)(puVar13 + 0x10) = uVar5;
    *(long *)(puVar13 + 0x18) = param_8;
    *(long *)(puVar13 + 0x20) = lVar7;
    *(undefined8 *)(puVar13 + 0x28) = param_3;
    *(undefined8 *)(puVar13 + 0x30) = param_7;
    *(undefined8 *)(puVar13 + 0x38) = 0x101220da4;
    *(undefined **)(puVar13 + 0x40) = puVar10;
    *(undefined8 *)(puVar13 + 0x48) = 0x101220db0;
    *(undefined **)(puVar13 + 0x50) = puVar9;
    *(char **)(puVar13 + 0x58) = pcVar11;
    uStack_78 = 0x101220db8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_1010e92f4;
    puStack_80 = &UNK_110395610;
    ppuVar14 = &puStack_98;
    puStack_70 = puVar13;
    func_0x000107c60bc4(ppuVar14);
    puVar13 = puStack_70;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(lVar7);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(puVar10);
    func_0x000107c6157c(puVar9);
    func_0x000107c615f0(pcVar11);
    func_0x000107c61574(puVar13);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar14);
    uVar23 = param_1;
    func_0x000107c4e9e4();
    func_0x000107c61180();
    if (lRam0000000112d69348 != -1) {
      func_0x000107c61568(0x112d69348,FUN_10121fac4);
    }
    uVar16 = uRam00000001137ff288;
    uVar22 = 0xef746e65746e6f63;
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,4,0);
    uVar19 = 0x800000010ef2f290;
    if (bRam0000000112d69388 < 2) {
      if (bRam0000000112d69388 == 0) {
        uVar20 = 0xd000000000000011;
        uVar21 = uVar19;
      }
      else {
        uVar20 = 0x5f73737563736964;
        uVar21 = uVar22;
      }
    }
    else {
      if (bRam0000000112d69388 == 2) {
        uVar20 = 0x5f6572616873;
      }
      else {
        uVar20 = 0x5f7972746572;
      }
      uVar20 = uVar20 | 0x6f63000000000000;
      uVar21 = 0xed0000746e65746e;
    }
    uVar3 = *(ulong *)(puStack_98 + 0x10);
    uVar1 = uVar3 + 1;
    if (*(ulong *)(puStack_98 + 0x18) >> 1 <= uVar3) {
      func_0x000100403514(1 < *(ulong *)(puStack_98 + 0x18),uVar1,1);
    }
    uVar18 = 0xed0000746e65746e;
    *(ulong *)(puStack_98 + 0x10) = uVar1;
    *(ulong *)(puStack_98 + uVar3 * 0x10 + 0x20) = uVar20;
    *(undefined8 *)(puStack_98 + uVar3 * 0x10 + 0x28) = uVar21;
    if (bRam0000000112d69389 < 2) {
      if (bRam0000000112d69389 == 0) {
        uVar20 = 0xd000000000000011;
        uVar18 = uVar19;
      }
      else {
        uVar20 = 0x5f73737563736964;
        uVar18 = uVar22;
      }
    }
    else {
      if (bRam0000000112d69389 == 2) {
        uVar20 = 0x5f6572616873;
      }
      else {
        uVar20 = 0x5f7972746572;
      }
      uVar20 = uVar20 | 0x6f63000000000000;
    }
    uVar2 = uVar3 + 2;
    if (*(ulong *)(puStack_98 + 0x18) >> 1 <= uVar1) {
      func_0x000100403514(1 < *(ulong *)(puStack_98 + 0x18),uVar2,1);
    }
    uVar21 = 0xed0000746e65746e;
    *(ulong *)(puStack_98 + 0x10) = uVar2;
    *(ulong *)(puStack_98 + uVar1 * 0x10 + 0x20) = uVar20;
    *(undefined8 *)(puStack_98 + uVar1 * 0x10 + 0x28) = uVar18;
    if (bRam0000000112d6938a < 2) {
      if (bRam0000000112d6938a == 0) {
        uVar20 = 0xd000000000000011;
        uVar21 = uVar19;
      }
      else {
        uVar20 = 0x5f73737563736964;
        uVar21 = uVar22;
      }
    }
    else {
      if (bRam0000000112d6938a == 2) {
        uVar20 = 0x5f6572616873;
      }
      else {
        uVar20 = 0x5f7972746572;
      }
      uVar20 = uVar20 | 0x6f63000000000000;
    }
    uVar1 = uVar3 + 3;
    if (*(ulong *)(puStack_98 + 0x18) >> 1 <= uVar2) {
      func_0x000100403514(1 < *(ulong *)(puStack_98 + 0x18),uVar1,1);
    }
    uVar18 = 0xed0000746e65746e;
    *(ulong *)(puStack_98 + 0x10) = uVar1;
    *(ulong *)(puStack_98 + uVar2 * 0x10 + 0x20) = uVar20;
    *(undefined8 *)(puStack_98 + uVar2 * 0x10 + 0x28) = uVar21;
    if (bRam0000000112d6938b < 2) {
      if (bRam0000000112d6938b == 0) {
        uVar21 = 0xd000000000000011;
        uVar18 = uVar19;
      }
      else {
        uVar21 = 0x5f73737563736964;
        uVar18 = uVar22;
      }
    }
    else if (bRam0000000112d6938b == 2) {
      uVar21 = 0x6f635f6572616873;
    }
    else {
      uVar21 = 0x6f635f7972746572;
    }
    if (*(ulong *)(puStack_98 + 0x18) >> 1 <= uVar1) {
      func_0x000100403514(1 < *(ulong *)(puStack_98 + 0x18),uVar3 + 4,1);
    }
    puVar13 = puStack_98;
    *(ulong *)(puStack_98 + 0x10) = uVar3 + 4;
    *(undefined8 *)(puStack_98 + uVar1 * 0x10 + 0x20) = uVar21;
    *(undefined8 *)(puStack_98 + uVar1 * 0x10 + 0x28) = uVar18;
    puVar15 = puStack_98;
    func_0x000100403a6c(puStack_98);
    func_0x000107c61574(puVar13);
    puVar13 = PTR_PTR_1126b0260;
    func_0x000107c610f8(PTR_PTR_1126b0260);
    uVar22 = 0;
    func_0x0001044e4d64(0);
    uVar19 = uVar22;
    FUN_100f06a9c();
    func_0x000107c61174(puVar12);
    func_0x000107c5fe08(uVar16,uVar22,uVar19);
    puVar17 = puVar15;
    func_0x000107c5fe08(puVar15,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar15);
    func_0x000107c48360(puVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(puVar17);
    func_0x000107c4fba8(uVar23);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(lVar7);
    func_0x000107c61574(uVar8);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(puVar9);
    func_0x000107c615e8(pcVar11);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(puVar13);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10122055c);
  (*pcVar4)();
}



/* Entry: 10122055c; end: 10122065b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122055c(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  func_0x0001000285a8(0x112d4e900,&UNK_10d914c40);
  func_0x000107c407c0();
  func_0x000107c61180();
  uVar5 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  uVar2 = 0;
  func_0x0001028ede28();
  uVar3 = uVar2;
  func_0x000107c613fc();
  func_0x0001028ed320(uVar5,uVar3);
  lVar1 = _DAT_112faecc0;
  ppuStack_48 = &PTR_DAT_110567420;
  lVar4 = 0;
  auStack_68[0] = uVar5;
  uStack_50 = uVar2;
  func_0x000101223154();
  func_0x000107c613fc();
  uVar5 = *(undefined8 *)(param_3 + lVar1);
  *(undefined8 *)(lVar4 + 0x18) = ((undefined8 *)(param_3 + lVar1))[1];
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  FUN_101220efc(auStack_68,lVar4 + 0x20);
  *param_1 = lVar4;
  func_0x000107c615f0(uVar5);
  return;
}



/* Entry: 10122065c; end: 10122097f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122065c(ulong param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  ulong uStack_b0;
  long lStack_a8;
  
  func_0x0001000d224c(&uStack_b0);
  uVar2 = uStack_b0;
  lVar4 = *(long *)(uStack_b0 + 0x18);
  func_0x000107c614f0(*(undefined8 *)(uStack_b0 + 0x10));
  (**(code **)(lVar4 + 8))(&uStack_b0);
  if (lStack_a8 != 0) {
    if ((param_2 == 0) || ((param_1 == uStack_b0 && (param_2 == lStack_a8)))) {
      FUN_101220ebc(&uStack_b0,0x112d69430,&UNK_10d92ceb0);
    }
    else {
      uVar6 = param_1;
      func_0x000107c605b8(param_1,param_2,uStack_b0,lStack_a8,0);
      FUN_101220ebc(&uStack_b0,0x112d69430,&UNK_10d92ceb0);
      if ((uVar6 & 1) == 0) goto LAB_101220804;
    }
    func_0x000107c61428(param_4 + 0x10,auStack_c8,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      lVar4 = param_4 + _DAT_11306faf8;
      func_0x000107c61428(lVar4,auStack_e0,0,0);
      lVar3 = lVar4;
      func_0x000107c61618();
      if (lVar3 == 0) {
        func_0x000107c61170(param_4);
      }
      else {
        lVar7 = *(long *)(lVar4 + 8);
        func_0x000107c61170(param_4);
        lVar4 = lVar3;
        func_0x000107c614f0();
        (**(code **)(lVar7 + 8))();
        func_0x000107c615e8(lVar3);
        if (lVar4 != 0) {
          uVar5 = *(undefined8 *)(param_5 + _DAT_112faecd0);
          uVar1 = ((undefined8 *)(param_5 + _DAT_112faecd0))[1];
          func_0x000107c614f0(uVar5);
          func_0x00010391df30(lVar4,uVar5,uVar1);
          func_0x000107c61574(uVar2);
          func_0x000107c61170(lVar4);
          return;
        }
      }
    }
    FUN_101222ed4(param_1,param_2);
  }
LAB_101220804:
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 101220980; end: 101220ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101220980(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = &UNK_110395660;
  func_0x000107c613fc(&UNK_110395660,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  lVar8 = _DAT_112faecc0;
  puVar2 = &UNK_110395688;
  func_0x000107c613fc(&UNK_110395688,0x20,7);
  uVar9 = *(undefined8 *)(param_2 + lVar8);
  *(undefined8 *)(puVar2 + 0x18) = ((undefined8 *)(param_2 + lVar8))[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  puVar3 = &UNK_1103956b0;
  func_0x000107c613fc(&UNK_1103956b0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  lVar8 = _DAT_112faebf8;
  puVar4 = &UNK_1103956d8;
  func_0x000107c613fc(&UNK_1103956d8,0x20,7);
  uVar10 = *(undefined8 *)(param_5 + lVar8);
  *(undefined8 *)(puVar4 + 0x18) = ((undefined8 *)(param_5 + lVar8))[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  puVar5 = &UNK_110395700;
  func_0x000107c613fc(&UNK_110395700,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_6;
  *(undefined8 *)(puVar5 + 0x18) = param_7;
  puVar6 = &UNK_110395728;
  func_0x000107c613fc(&UNK_110395728,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_8;
  *(undefined8 *)(puVar6 + 0x18) = param_9;
  puVar7 = &UNK_110395750;
  func_0x000107c613fc(&UNK_110395750,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = param_10;
  lVar8 = 0;
  func_0x000101222bcc();
  func_0x000107c613fc();
  *(code **)(lVar8 + 0x10) = FUN_101220df8;
  *(undefined **)(lVar8 + 0x18) = puVar1;
  *(undefined8 *)(lVar8 + 0x20) = 0x101220e00;
  *(undefined **)(lVar8 + 0x28) = puVar2;
  *(undefined8 *)(lVar8 + 0x30) = 0x101220e08;
  *(undefined8 *)(lVar8 + 0x38) = param_3;
  *(undefined8 *)(lVar8 + 0x40) = 0x101220e0c;
  *(undefined **)(lVar8 + 0x48) = puVar3;
  *(code **)(lVar8 + 0x50) = FUN_101220e14;
  *(undefined **)(lVar8 + 0x58) = puVar4;
  *(code **)(lVar8 + 0x60) = FUN_101220e74;
  *(undefined **)(lVar8 + 0x68) = puVar5;
  *(undefined8 *)(lVar8 + 0x70) = 0x101220e94;
  *(undefined **)(lVar8 + 0x78) = puVar6;
  *(code **)(lVar8 + 0x80) = FUN_101220eb4;
  *(undefined **)(lVar8 + 0x88) = puVar7;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(uVar9);
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(uVar10);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c615f0(param_10);
  return lVar8;
}



/* Entry: 101220ba8; end: 101220c5b;  */

long FUN_101220ba8(long param_1)

{
  long lVar1;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c4a0cc();
    func_0x000107c615e8(param_1);
  }
  return lVar1;
}



/* Entry: 101220c5c; end: 101220d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101220c5c(void)

{
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  func_0x000104875e28(auStack_58);
  if (lStack_40 == 0) {
    FUN_101220ebc(auStack_58,0x112d69428,&UNK_10d92cea8);
  }
  else {
    func_0x0001000a8868(auStack_58,lStack_40);
    (**(code **)(lStack_38 + 0x10))(lStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
  }
  return;
}



/* Entry: 101220d80; end: 101220dd7;  */

void FUN_101220d80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101220dd8; end: 101220df7;  */

void FUN_101220dd8(void)

{
  func_0x000107c61168(&PTR_PTR_112d693d0);
  return;
}



/* Entry: 101220df8; end: 101220e13;  */

long FUN_101220df8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4a0cc();
    func_0x000107c615e8(lVar1);
  }
  return lVar2;
}



/* Entry: 101220e14; end: 101220e73;  */

void FUN_101220e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3,uVar2,lVar1);
  return;
}



/* Entry: 101220e74; end: 101220eb3;  */

void FUN_101220e74(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101220eb4; end: 101220ebb;  */

void FUN_101220eb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar2 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110395768;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101220ebc; end: 101220efb;  */

undefined8 FUN_101220ebc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101220efc; end: 101220f13;  */

undefined8 * FUN_101220efc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101220f14; end: 101220fd7;  */

void FUN_101220f14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101220fd8; end: 101220fdf;  */

void FUN_101220fd8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101220fe0; end: 101222a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101220fe0(undefined *param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  char cVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 ***pppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  undefined *puVar15;
  char cVar16;
  long extraout_x8;
  ulong uVar17;
  ulong uVar18;
  long extraout_x12;
  undefined8 uVar19;
  undefined8 *unaff_x20;
  undefined8 ***pppuVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined *puVar27;
  undefined8 ****ppppuVar28;
  undefined8 ****ppppuVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 ****appppuStack_110 [14];
  undefined8 **ppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ****ppppuStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 ***pppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_160 = *unaff_x20;
  lVar21 = 0x112d69510;
  func_0x0001000285a8(0x112d69510,&UNK_10d92cf28);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar21 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = 0x112d69518;
  pcVar5 = (code *)&UNK_10d92cf30;
  lStack_158 = (long)&lStack_180 - extraout_x8;
  func_0x0001000285a8();
  lVar25 = *(long *)(lVar21 + -8);
  lVar24 = *(long *)(lVar25 + 0x40);
  lStack_168 = lVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = ((long)&lStack_180 - extraout_x8) - (lVar24 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_170 = lVar21 - extraout_x12;
  if (lRam0000000112d69348 != -1) {
    pcVar5 = FUN_10121fac4;
    func_0x000107c61568(0x112d69348);
  }
  pppppuVar6 = pppppuRam00000001137ff288;
  lStack_180 = lVar24;
  lStack_178 = lVar21;
  lStack_150 = lVar25;
  if (((ulong)pppppuRam00000001137ff288 & 0xc000000000000001) == 0) {
    uVar17 = -1L << ((ulong)(byte)*(code *)(pppppuRam00000001137ff288 + 4) & 0x3f);
    pppppuVar14 = pppppuRam00000001137ff288 + 7;
    uVar26 = ~uVar17;
    uVar17 = -uVar17;
    uVar18 = 0xffffffffffffffff;
    if (uVar17 < 0x40) {
      uVar18 = ~(-1L << (uVar17 & 0x3f));
    }
    ppppuVar28 = (undefined8 ****)(uVar18 & (ulong)*pppppuVar14);
    pppppuVar7 = pppppuRam00000001137ff288;
    func_0x000107c61434();
    lStack_80 = 0;
  }
  else {
    pppppuVar7 = (undefined8 *****)((ulong)pppppuRam00000001137ff288 & 0xffffffffffffff8);
    if ((undefined8 *****)0x7fffffffffffffff < pppppuRam00000001137ff288) {
      pppppuVar7 = pppppuRam00000001137ff288;
    }
    func_0x000107c61434(pppppuRam00000001137ff288);
    func_0x000107c60288();
    pcVar5 = (code *)0x0;
    func_0x0001044e4d64();
    pppppuVar6 = (undefined8 *****)pcVar5;
    FUN_100f06a9c();
    func_0x000107c5fe30(&ppppuStack_98,pppppuVar7,pcVar5,pppppuVar6);
    uVar26 = uStack_88;
    pppppuVar14 = (undefined8 *****)ppppuStack_90;
    pppppuVar6 = (undefined8 *****)ppppuStack_98;
    ppppuVar28 = (undefined8 ****)pppuStack_78;
  }
  do {
    ppppuVar29 = ppppuVar28;
    lVar24 = lStack_80;
    lVar21 = lVar24;
    ppppuVar28 = ppppuVar29;
    if ((long)pppppuVar6 < 0) {
      func_0x000107c602ac();
      if (pppppuVar7 == (undefined8 *****)0x0) {
LAB_10122132c:
        ppuStack_a0 = (undefined8 ***)0x0;
      }
      else {
        uVar19 = 0;
        appppuStack_110[0] = pppppuVar7;
        func_0x0001044e4d64(0);
        pppppuVar13 = appppuStack_110;
        func_0x000107c6147c(&ppuStack_a0,pppppuVar13,PTR___syXlN_11034f1a0 + 8,uVar19,7);
        pppuVar20 = (undefined8 ***)ppuStack_a0;
        if ((undefined8 ***)ppuStack_a0 != (undefined8 ***)0x0) goto LAB_10122126c;
      }
LAB_101221330:
      FUN_101222bec(pppppuVar6,pppppuVar14,uVar26,lVar24,ppppuVar29);
      if (param_1 == (undefined *)0x0) goto LAB_101222080;
      goto LAB_101221350;
    }
    while (ppppuVar28 == (undefined8 ****)0x0) {
      lVar25 = lVar21 + 1;
      if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101221b28);
        (*pcVar5)();
      }
      if ((long)(uVar26 + 0x40 >> 6) <= lVar25) {
        ppppuVar29 = (undefined8 ****)0x0;
        goto LAB_10122132c;
      }
      lVar21 = lVar25;
      ppppuVar28 = pppppuVar14[lVar25];
    }
    uVar18 = ((ulong)ppppuVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 |
             ((ulong)ppppuVar28 & 0x5555555555555555) << 1;
    uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
    uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    pppuVar20 = pppppuVar6[6][LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) + lVar21 * 0x40];
    ppuStack_a0 = pppuVar20;
    func_0x000107c61174(pppuVar20);
    pppppuVar13 = (undefined8 *****)pcVar5;
    ppppuVar28 = (undefined8 ****)((long)ppppuVar28 - 1U & (ulong)ppppuVar28);
    if (pppuVar20 == (undefined8 ***)0x0) goto LAB_101221330;
LAB_10122126c:
    puVar8 = (undefined *)(ulong)*(byte *)((long)pppuVar20 + _DAT_113080f70);
    func_0x0001044e388c();
    if (param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10122207c);
      (*pcVar5)();
    }
    puVar9 = param_1;
    pppppuVar7 = pppppuVar13;
    func_0x000107c5b6c0();
    func_0x000107c61180();
    puVar15 = puVar9;
    func_0x000107c5faec();
    func_0x000107c61170(puVar9);
    if (puVar8 == puVar15 && pppppuVar13 == pppppuVar7) {
      func_0x000107c61170(pppuVar20);
      func_0x000107c6142c(pppppuVar13);
      func_0x000107c6142c(pppppuVar7);
      break;
    }
    pcVar5 = (code *)pppppuVar13;
    func_0x000107c605b8(puVar8,pppppuVar13,puVar15,pppppuVar7,0);
    func_0x000107c61170(pppuVar20);
    func_0x000107c6142c(pppppuVar13);
    func_0x000107c6142c();
    lStack_80 = lVar21;
  } while (((ulong)puVar8 & 1) == 0);
  FUN_101222bec(pppppuVar6,pppppuVar14,uVar26,lVar24,ppppuVar29);
  puVar8 = param_1;
  func_0x000107c428b4();
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c5faec();
  func_0x000107c61170(puVar8);
  FUN_10121fc9c(puVar9,pppppuVar14);
  if (((uint)puVar9 & 0xff) == 4) {
LAB_101221350:
    func_0x000107c50374();
    func_0x000107c61180();
    if (param_1 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(pppppuVar14);
    }
    puVar8 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar9 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    puVar27 = puVar15;
    func_0x000107c5f9dc(puVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar15);
    func_0x000107c48368(puVar9);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar27);
    func_0x000107c4a8a4(puVar8);
  }
  else {
    puVar8 = puVar9;
    (*(code *)unaff_x20[2])();
    if (((ulong)puVar8 & 1) == 0) {
      func_0x000107c50374();
      func_0x000107c61180();
      if (param_1 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(pppppuVar14);
      }
      puVar8 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar9 = PTR_PTR_1126b0278;
      func_0x000107c610f8(PTR_PTR_1126b0278);
      puVar27 = puVar15;
      func_0x000107c5f9dc(puVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90
                         );
      func_0x000107c6142c(puVar15);
      func_0x000107c48368(puVar9);
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar27);
      func_0x000107c4a8a4(puVar8);
    }
    else {
      uVar4 = (uint)puVar9 & 0xff;
      if (uVar4 == 1 || ((ulong)puVar9 & 0xff) == 0) {
        if (((ulong)puVar9 & 0xff) != 0) {
          puVar8 = param_1;
          func_0x000107c4e33c();
          func_0x000107c61180();
          puVar9 = puVar8;
          func_0x000107c5f9e8();
          func_0x000107c61170(puVar8);
          if (*(long *)(puVar9 + 0x10) == 0) {
            uVar19 = 0;
            lVar21 = 0;
          }
          else {
            func_0x000107c61434(puVar9);
            lVar21 = 0x5f746e65746e6f63;
            uVar18 = 0;
            func_0x000100029284();
            if ((uVar18 & 1) == 0) {
              uVar19 = 0;
              lVar21 = 0;
            }
            else {
              puVar1 = (undefined8 *)(*(long *)(puVar9 + 0x38) + lVar21 * 0x10);
              uVar19 = *puVar1;
              lVar21 = puVar1[1];
              func_0x000107c61434(lVar21);
            }
            func_0x000107c6142c(puVar9);
          }
          func_0x000107c6142c();
          uVar4 = (uint)puVar9;
          (*(code *)unaff_x20[4])();
          uVar11 = 0;
          if (lVar21 != 0) {
            uVar11 = uVar19;
          }
          lVar24 = -0x2000000000000000;
          if (lVar21 != 0) {
            lVar24 = lVar21;
          }
          lVar21 = 0x112d3cde0;
          func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
          func_0x000107c61538();
          func_0x000107c604c4();
          func_0x000107c6142c(lVar24);
          cVar16 = '\x01';
          if (lVar21 != 1) {
            cVar16 = '\x02';
          }
          cVar3 = '\0';
          if (lVar21 != 0) {
            cVar3 = cVar16;
          }
          cVar16 = '\0';
          if (cVar3 != '\x02') {
            cVar16 = cVar3;
          }
          if ((uVar4 & 0xff) != 2) {
            cVar16 = (char)uVar4;
          }
          func_0x000107c50374();
          func_0x000107c61180();
          if (param_1 == (undefined *)0x0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar11);
          }
          puVar9 = PTR_PTR_1126ae6b8;
          func_0x000107c61168(PTR_PTR_1126ae6b8);
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
          puVar15 = PTR_PTR_1126b0278;
          func_0x000107c610f8(PTR_PTR_1126b0278);
          puVar27 = puVar8;
          func_0x000107c5f9dc(puVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                              PTR___sSSSHsWP_11034da90);
          func_0x000107c6142c(puVar8);
          func_0x000107c48368(puVar15);
          func_0x000107c61170(param_1);
          func_0x000107c61170(puVar27);
          func_0x000107c4a8a4(puVar9);
          func_0x000107c61180();
          func_0x000107c61170(puVar15);
          pcVar5 = (code *)unaff_x20[0x10];
          uVar19 = unaff_x20[0x11];
          puVar8 = &UNK_1103957a8;
          func_0x000107c613fc(&UNK_1103957a8,0x48,7);
          uVar11 = unaff_x20[7];
          uVar22 = unaff_x20[6];
          uVar31 = unaff_x20[9];
          uVar30 = unaff_x20[8];
          *(undefined8 *)(puVar8 + 0x18) = unaff_x20[7];
          *(undefined8 *)(puVar8 + 0x10) = uVar22;
          puVar8[0x20] = cVar16;
          *(code **)(puVar8 + 0x28) = pcVar5;
          *(undefined8 *)(puVar8 + 0x30) = uVar19;
          uVar22 = unaff_x20[9];
          *(undefined8 *)(puVar8 + 0x40) = uVar31;
          *(undefined8 *)(puVar8 + 0x38) = uVar30;
          func_0x000107c6157c(uVar11);
          func_0x000107c6157c(uVar19);
          func_0x000107c6157c(uVar22);
          (*pcVar5)(0x101222bf4,puVar8);
          func_0x000107c61574(puVar8);
          param_1 = puVar9;
          goto LAB_101221428;
        }
        puVar8 = param_1;
        func_0x000107c4e33c();
        func_0x000107c61180();
        puVar9 = puVar8;
        func_0x000107c5f9e8();
        func_0x000107c61170(puVar8);
        lVar24 = lStack_158;
        func_0x000101222084(lStack_158,puVar9);
        func_0x000107c6142c(puVar9);
        lVar25 = lStack_150;
        lVar10 = lVar24;
        (**(code **)(lStack_150 + 0x30))(lVar24,1,lStack_168);
        lVar21 = lStack_170;
        if ((int)lVar10 != 1) {
          lVar10 = lStack_170;
          func_0x000101222d5c(lVar24,lStack_170);
          func_0x000107c50374();
          func_0x000107c61180();
          if (param_1 == (undefined *)0x0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(lVar10);
          }
          puVar9 = PTR_PTR_1126ae6b8;
          func_0x000107c61168(PTR_PTR_1126ae6b8);
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
          puVar15 = PTR_PTR_1126b0278;
          func_0x000107c610f8(PTR_PTR_1126b0278);
          puVar27 = puVar8;
          func_0x000107c5f9dc(puVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                              PTR___sSSSHsWP_11034da90);
          func_0x000107c6142c(puVar8);
          func_0x000107c48368(puVar15);
          func_0x000107c61170(param_1);
          func_0x000107c61170(puVar27);
          func_0x000107c4a8a4(puVar9);
          func_0x000107c61180();
          func_0x000107c61170(puVar15);
          lVar24 = lStack_178;
          pcVar5 = (code *)unaff_x20[0x10];
          uVar19 = unaff_x20[0xb];
          uVar22 = unaff_x20[0xb];
          uVar11 = unaff_x20[10];
          func_0x000101222dac(lVar21,lStack_178);
          uVar18 = (ulong)*(byte *)(lVar25 + 0x50);
          uVar26 = uVar18 + 0x20 & (uVar18 ^ 0xffffffffffffffff);
          puVar8 = &UNK_1103957f8;
          func_0x000107c613fc(&UNK_1103957f8,uVar26 + lStack_180,uVar18 | 7);
          *(undefined8 *)(puVar8 + 0x18) = uVar22;
          *(undefined8 *)(puVar8 + 0x10) = uVar11;
          func_0x000101222d5c(lVar24,puVar8 + uVar26);
          func_0x000107c6157c(uVar19);
          (*pcVar5)(0x101222dfc,puVar8);
          func_0x000107c61574(puVar8);
          func_0x000101222e58(lVar21,0x112d69518,&UNK_10d92cf30);
          param_1 = puVar9;
          goto LAB_101221428;
        }
        uVar19 = 0x112d69510;
        func_0x000101222e58(lVar24,0x112d69510,&UNK_10d92cf28);
        func_0x000107c50374();
        func_0x000107c61180();
        if (param_1 == (undefined *)0x0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar19);
        }
        puVar8 = PTR_PTR_1126ae6b8;
        func_0x000107c61168(PTR_PTR_1126ae6b8);
        puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar9 = PTR_PTR_1126b0278;
        func_0x000107c610f8(PTR_PTR_1126b0278);
        puVar27 = puVar15;
        func_0x000107c5f9dc(puVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                            PTR___sSSSHsWP_11034da90);
        func_0x000107c6142c(puVar15);
        func_0x000107c48368(puVar9);
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar27);
        func_0x000107c4a8a4(puVar8);
      }
      else {
        if (uVar4 == 2) {
          puVar8 = param_1;
          func_0x000107c50374();
          func_0x000107c61180();
          if (puVar8 == (undefined *)0x0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(pppppuVar14);
          }
          puVar9 = PTR_PTR_1126ae6b8;
          func_0x000107c61168(PTR_PTR_1126ae6b8);
          puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
          puVar27 = PTR_PTR_1126b0278;
          func_0x000107c610f8(PTR_PTR_1126b0278);
          puVar23 = puVar15;
          func_0x000107c5f9dc(puVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                              PTR___sSSSHsWP_11034da90);
          func_0x000107c6142c(puVar15);
          func_0x000107c48368(puVar27);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar23);
          func_0x000107c4a8a4(puVar9);
          func_0x000107c61180();
          func_0x000107c61170(puVar27);
          func_0x000107c4e33c();
          func_0x000107c61180();
          puVar8 = param_1;
          func_0x000107c5f9e8();
          func_0x000107c61170(param_1);
          if (*(long *)(puVar8 + 0x10) == 0) {
            uVar19 = 0;
            uVar11 = 0;
          }
          else {
            func_0x000107c61434(puVar8);
            lVar21 = 0x5f746e65746e6f63;
            uVar18 = 0xea00000000006469;
            func_0x000100029284();
            if ((uVar18 & 1) == 0) {
              uVar19 = 0;
              uVar11 = 0;
            }
            else {
              puVar1 = (undefined8 *)(*(long *)(puVar8 + 0x38) + lVar21 * 0x10);
              uVar19 = *puVar1;
              uVar11 = puVar1[1];
              func_0x000107c61434(uVar11);
            }
            func_0x000107c6142c(puVar8);
          }
          func_0x000107c6142c(puVar8);
          pcVar5 = (code *)unaff_x20[0x10];
          puVar8 = &UNK_1103957d0;
          func_0x000107c613fc(&UNK_1103957d0,0x30,7);
          uVar22 = unaff_x20[0xd];
          uVar30 = unaff_x20[0xc];
          *(undefined8 *)(puVar8 + 0x18) = unaff_x20[0xd];
          *(undefined8 *)(puVar8 + 0x10) = uVar30;
          *(undefined8 *)(puVar8 + 0x20) = uVar19;
          *(undefined8 *)(puVar8 + 0x28) = uVar11;
          func_0x000107c6157c(uVar22);
          (*pcVar5)(0x101222d34,puVar8);
          func_0x000107c61574(puVar8);
          param_1 = puVar9;
          goto LAB_101221428;
        }
        puVar8 = param_1;
        func_0x000107c4e33c();
        func_0x000107c61180();
        puVar9 = puVar8;
        puVar15 = PTR___sSSN_11034da80;
        func_0x000107c5f9e8();
        func_0x000107c61170(puVar8);
        puVar8 = puVar9;
        if (*(long *)(puVar9 + 0x10) != 0) {
          lVar21 = 0x5f746e65746e6f63;
          func_0x000107c61434(puVar9);
          puVar15 = (undefined *)0xea00000000006469;
          func_0x000100029284();
          if (((ulong)puVar15 & 1) == 0) {
            func_0x000107c6142c(puVar9);
          }
          else {
            puVar2 = (ulong *)(*(long *)(puVar9 + 0x38) + lVar21 * 0x10);
            uVar26 = *puVar2;
            puVar8 = (undefined *)puVar2[1];
            func_0x000107c61434(puVar8);
            puVar15 = (undefined *)0x2;
            func_0x000107c61430(puVar9,2);
            uVar18 = uVar26 & 0xffffffffffff;
            if (((ulong)puVar8 & 0x2000000000000000) != 0) {
              uVar18 = (ulong)puVar8 >> 0x38 & 0xf;
            }
            if (uVar18 != 0) {
              uVar18 = uVar26;
              puVar9 = puVar8;
              (*(code *)unaff_x20[0xe])();
              if (puVar9 == (undefined *)0x0) {
LAB_101222024:
                func_0x000107c6142c(puVar8);
                puVar23 = (undefined *)0x0;
                puVar27 = (undefined *)0xf000000000000000;
              }
              else {
                puVar15 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
                func_0x000107c61168();
                lVar21 = 0x112d38300;
                func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
                func_0x000107c61534();
                *(undefined8 *)(lVar21 + 0x18) = 4;
                *(undefined8 *)(lVar21 + 0x10) = 2;
                *(undefined8 *)(lVar21 + 0x20) = 0x5f746e65746e6f63;
                *(undefined8 *)(lVar21 + 0x28) = 0xea00000000006469;
                *(ulong *)(lVar21 + 0x30) = uVar26;
                *(undefined **)(lVar21 + 0x38) = puVar8;
                *(undefined8 *)(lVar21 + 0x40) = 0x5f6e6f6973736573;
                *(undefined8 *)(lVar21 + 0x48) = 0xea00000000006469;
                *(ulong *)(lVar21 + 0x50) = uVar18;
                *(undefined **)(lVar21 + 0x58) = puVar9;
                func_0x000107c61434(puVar8);
                func_0x000107c61434(puVar9);
                lVar24 = lVar21;
                func_0x0001001830b8(lVar21);
                func_0x000107c61588(lVar21);
                uVar19 = 0x112d38308;
                func_0x0001000285a8(0x112d38308,&UNK_10d902040);
                func_0x000107c61408((undefined8 *)(lVar21 + 0x20),2,uVar19);
                lVar21 = lVar24;
                puVar27 = PTR___sSSN_11034da80;
                func_0x000107c5f9dc(lVar24,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                                    PTR___sSSSHsWP_11034da90);
                func_0x000107c6142c(lVar24);
                ppuStack_a0 = (undefined8 ***)0x0;
                func_0x000107c41300();
                func_0x000107c61180();
                func_0x000107c61170(lVar21);
                pppuVar20 = (undefined8 ***)ppuStack_a0;
                func_0x000107c61174(ppuStack_a0);
                if (puVar15 == (undefined *)0x0) {
                  pppuVar12 = pppuVar20;
                  func_0x000107c5ed30();
                  func_0x000107c61170(pppuVar20);
                  func_0x000107c61654();
                  func_0x000107c614ac(pppuVar12);
                  func_0x000107c6142c(puVar9);
                  goto LAB_101222024;
                }
                puVar23 = puVar15;
                func_0x000107c5ee30(puVar15);
                func_0x000107c6142c(puVar9);
                func_0x000107c6142c(puVar8);
                func_0x000107c61170(puVar15);
              }
              FUN_101222c08(param_1,1,puVar23,puVar27);
              func_0x0001000b44c0(puVar23,puVar27);
              goto LAB_101221428;
            }
          }
        }
        func_0x000107c6142c(puVar8);
        func_0x000107c50374();
        func_0x000107c61180();
        if (param_1 == (undefined *)0x0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar15);
        }
        puVar8 = PTR_PTR_1126ae6b8;
        func_0x000107c61168(PTR_PTR_1126ae6b8);
        puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar9 = PTR_PTR_1126b0278;
        func_0x000107c610f8(PTR_PTR_1126b0278);
        puVar27 = puVar15;
        func_0x000107c5f9dc(puVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                            PTR___sSSSHsWP_11034da90);
        func_0x000107c6142c(puVar15);
        func_0x000107c48368(puVar9);
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar27);
        func_0x000107c4a8a4(puVar8);
      }
    }
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  param_1 = puVar8;
LAB_101221428:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  func_0x000107c60e78();
LAB_101222080:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101222084);
  (*pcVar5)();
}



/* Entry: 101222a60; end: 101222af7;  */

void FUN_101222a60(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110395820;
  func_0x000107c613fc(&UNK_110395820,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  (*param_1)(param_3,FUN_101222ed0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101222af8; end: 101222b53; -[_TtC28MyAIInteractiveLensApiPlugin35MyAIInteractiveLensApiPluginHandler handleRequest:] */

void FUN_101222af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_101220fe0(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101222b54; end: 101222b57; -[_TtC28MyAIInteractiveLensApiPlugin35MyAIInteractiveLensApiPluginHandler reset] */

void FUN_101222b54(void)

{
  return;
}



/* Entry: 101222b58; end: 101222beb;  */

void FUN_101222b58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 101222bec; end: 101222c07;  */

void FUN_101222bec(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101222c08; end: 101222d33;  */

undefined * FUN_101222c08(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c50374();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar2 = puVar1;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar1);
  if (param_4 >> 0x3c < 0xf) {
    func_0x000107c5ee20(param_3,param_4);
  }
  else {
    param_3 = 0;
  }
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar3 = PTR_PTR_1126b0278;
  func_0x000107c610f8(PTR_PTR_1126b0278);
  func_0x000107c48368();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c4a8a4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  return puVar1;
}



/* Entry: 101222d34; end: 101222ecf;  */

void FUN_101222d34(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101222ed0; end: 101222ed3;  */

void FUN_101222ed0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101222ed4; end: 101223127;  */

void FUN_101222ed4(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
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
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(uVar5);
  pcVar7 = *(code **)(lVar6 + 8);
  (*pcVar7)(&uStack_1d0);
  if (lStack_1c8 != 0) {
    if ((param_2 == 0) || (param_1 == uStack_1d0 && param_2 == lStack_1c8)) {
      func_0x0001012231c4(&uStack_1d0,0x112d69430,&UNK_10d92ceb0);
    }
    else {
      func_0x000107c605b8(param_1,param_2,uStack_1d0,lStack_1c8,0);
      func_0x0001012231c4(&uStack_1d0,0x112d69430,&UNK_10d92ceb0);
      if ((param_1 & 1) == 0) {
        return;
      }
    }
    (*pcVar7)(&uStack_170,uVar5,lVar6);
    if (lStack_168 != 0) {
      uStack_e8 = (undefined1)uStack_138;
      uStack_e7 = (undefined7)((ulong)uStack_138 >> 8);
      uStack_f0 = uStack_140;
      uStack_d8 = (undefined1)uStack_128;
      uStack_d7 = (undefined7)((ulong)uStack_128 >> 8);
      uStack_e0 = (undefined1)uStack_130;
      uStack_df = (undefined7)((ulong)uStack_130 >> 8);
      lStack_c8 = lStack_118;
      uStack_d0 = uStack_120;
      uStack_108 = uStack_158;
      uStack_110 = uStack_160;
      uStack_f8 = uStack_148;
      uStack_100 = uStack_150;
      lStack_b8 = lStack_118;
      uStack_c0 = uStack_120;
      lStack_1d8 = lStack_118;
      uStack_1e0 = uStack_120;
      func_0x000101223174(&uStack_c0,&uStack_b0);
      lVar6 = lStack_1d8;
      uVar5 = uStack_1e0;
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lStack_1d8 != 0) {
        func_0x000107c61434(lStack_1d8);
        puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c61558();
        puVar3 = puVar4;
        if (((ulong)puVar2 & 1) == 0) {
          puVar3 = (undefined *)0x0;
          func_0x0001000d182c(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
        }
        uVar1 = *(ulong *)(puVar3 + 0x10);
        puVar4 = puVar3;
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
          puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
          func_0x0001000d182c(puVar4,uVar1 + 1,1,puVar3);
        }
        *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = uVar5;
        *(long *)(puVar4 + uVar1 * 0x10 + 0x28) = lVar6;
      }
      func_0x0001012231c4(&uStack_1e0,0x112d35ff8,&UNK_10d900cd0);
      if (*(long *)(puVar4 + 0x10) != 0) {
        uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
        lVar6 = *(long *)(unaff_x20 + 0x40);
        func_0x0001000a8868(unaff_x20 + 0x20,uVar5);
        uStack_b0 = uStack_170;
        lStack_a8 = lStack_168;
        uStack_98 = uStack_108;
        uStack_a0 = uStack_110;
        uStack_88 = uStack_f8;
        uStack_90 = uStack_100;
        uStack_78 = uStack_e8;
        uStack_80 = uStack_f0;
        uStack_6f = CONCAT17(uStack_d8,uStack_df);
        uStack_77 = uStack_e7;
        uStack_70 = uStack_e0;
        (**(code **)(lVar6 + 8))(&uStack_b0,puVar4,0,0,0,uVar5,lVar6);
      }
      func_0x000107c6142c(puVar4);
      func_0x0001012231c4(&uStack_170,0x112d69430,&UNK_10d92ceb0);
    }
  }
  return;
}



/* Entry: 101223128; end: 101223173;  */

void FUN_101223128(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101223174; end: 101223203;  */

undefined8 FUN_101223174(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101223204; end: 10122320f; -[SCMyAIInteractiveLensApiPluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101223204(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69620;
  func_0x000107c61428(param_1 + _DAT_112d69620,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101223210; end: 10122321b; -[SCMyAIInteractiveLensApiPluginEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101223210(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69620;
  func_0x000107c61428(param_1 + _DAT_112d69620,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10122321c; end: 101223227; -[SCMyAIInteractiveLensApiPluginEntryPoint playGamesScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122321c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69628;
  func_0x000107c61428(param_1 + _DAT_112d69628,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101223228; end: 101223233; -[SCMyAIInteractiveLensApiPluginEntryPoint setPlayGamesScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101223228(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69628;
  func_0x000107c61428(param_1 + _DAT_112d69628,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101223234; end: 10122323f; -[SCMyAIInteractiveLensApiPluginEntryPoint playGamesPresenterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101223234(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69630;
  func_0x000107c61428(param_1 + _DAT_112d69630,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101223240; end: 10122324b; -[SCMyAIInteractiveLensApiPluginEntryPoint setPlayGamesPresenterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101223240(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69630;
  func_0x000107c61428(param_1 + _DAT_112d69630,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10122324c; end: 101223257; -[SCMyAIInteractiveLensApiPluginEntryPoint myAIExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122324c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69638;
  func_0x000107c61428(param_1 + _DAT_112d69638,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101223258; end: 101223263; -[SCMyAIInteractiveLensApiPluginEntryPoint setMyAIExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101223258(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69638;
  func_0x000107c61428(param_1 + _DAT_112d69638,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101223264; end: 10122326f; -[SCMyAIInteractiveLensApiPluginEntryPoint conversationIdServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101223264(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69640;
  func_0x000107c61428(param_1 + _DAT_112d69640,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101223270; end: 10122327b; -[SCMyAIInteractiveLensApiPluginEntryPoint setConversationIdServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101223270(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69640;
  func_0x000107c61428(param_1 + _DAT_112d69640,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10122327c; end: 101223287; -[SCMyAIInteractiveLensApiPluginEntryPoint textSendingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122327c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69648;
  func_0x000107c61428(param_1 + _DAT_112d69648,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101223288; end: 101223293; -[SCMyAIInteractiveLensApiPluginEntryPoint setTextSendingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101223288(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69648;
  func_0x000107c61428(param_1 + _DAT_112d69648,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101223294; end: 10122329f; -[SCMyAIInteractiveLensApiPluginEntryPoint resultStoreServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101223294(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69650;
  func_0x000107c61428(param_1 + _DAT_112d69650,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012232a0; end: 1012232ab; -[SCMyAIInteractiveLensApiPluginEntryPoint setResultStoreServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012232a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69650;
  func_0x000107c61428(param_1 + _DAT_112d69650,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012232ac; end: 1012232b7; -[SCMyAIInteractiveLensApiPluginEntryPoint shareStoreServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012232ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69658;
  func_0x000107c61428(param_1 + _DAT_112d69658,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012232b8; end: 1012232c3; -[SCMyAIInteractiveLensApiPluginEntryPoint setShareStoreServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012232b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69658;
  func_0x000107c61428(param_1 + _DAT_112d69658,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012232c4; end: 1012232cf; -[SCMyAIInteractiveLensApiPluginEntryPoint coreMessagingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012232c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69660;
  func_0x000107c61428(param_1 + _DAT_112d69660,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012232d0; end: 101223313;  */

void FUN_1012232d0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101223314; end: 10122331f; -[SCMyAIInteractiveLensApiPluginEntryPoint setCoreMessagingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101223314(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69660;
  func_0x000107c61428(param_1 + _DAT_112d69660,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101223320; end: 101223373;  */

void FUN_101223320(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101223374; end: 101223e5b;  */

/* WARNING: Possible PIC construction at 0x0001012234ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101223528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101223c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101223c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101223c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101223c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101223c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101223c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101223cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101223ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101223cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122391c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122392c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122393c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122394c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012238ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012238fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122390c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012238bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012238cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122388c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122389c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122386c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122387c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122385c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101223880) */
/* WARNING: Removing unreachable block (ram,0x000101223870) */
/* WARNING: Removing unreachable block (ram,0x0001012238a0) */
/* WARNING: Removing unreachable block (ram,0x000101223890) */
/* WARNING: Removing unreachable block (ram,0x0001012238d0) */
/* WARNING: Removing unreachable block (ram,0x0001012238c0) */
/* WARNING: Removing unreachable block (ram,0x000101223910) */
/* WARNING: Removing unreachable block (ram,0x000101223900) */
/* WARNING: Removing unreachable block (ram,0x0001012238f0) */
/* WARNING: Removing unreachable block (ram,0x000101223950) */
/* WARNING: Removing unreachable block (ram,0x000101223940) */
/* WARNING: Removing unreachable block (ram,0x000101223930) */
/* WARNING: Removing unreachable block (ram,0x000101223920) */
/* WARNING: Removing unreachable block (ram,0x000101223cf8) */
/* WARNING: Removing unreachable block (ram,0x000101223ce8) */
/* WARNING: Removing unreachable block (ram,0x000101223cb0) */
/* WARNING: Removing unreachable block (ram,0x000101223ca0) */
/* WARNING: Removing unreachable block (ram,0x000101223c90) */
/* WARNING: Removing unreachable block (ram,0x000101223c80) */
/* WARNING: Removing unreachable block (ram,0x000101223c70) */
/* WARNING: Removing unreachable block (ram,0x000101223c58) */
/* WARNING: Removing unreachable block (ram,0x000101223c48) */
/* WARNING: Removing unreachable block (ram,0x00010122352c) */
/* WARNING: Removing unreachable block (ram,0x000101223d30) */
/* WARNING: Removing unreachable block (ram,0x0001012237c0) */
/* WARNING: Removing unreachable block (ram,0x000101223974) */
/* WARNING: Removing unreachable block (ram,0x0001012239c8) */
/* WARNING: Removing unreachable block (ram,0x000101223980) */
/* WARNING: Removing unreachable block (ram,0x0001012239d4) */
/* WARNING: Removing unreachable block (ram,0x000101223810) */
/* WARNING: Removing unreachable block (ram,0x000101223990) */
/* WARNING: Removing unreachable block (ram,0x000101223818) */
/* WARNING: Removing unreachable block (ram,0x0001012239b4) */
/* WARNING: Removing unreachable block (ram,0x0001012239fc) */
/* WARNING: Removing unreachable block (ram,0x000101223d48) */
/* WARNING: Removing unreachable block (ram,0x000101223a0c) */
/* WARNING: Removing unreachable block (ram,0x000101223a3c) */
/* WARNING: Removing unreachable block (ram,0x000101223a6c) */
/* WARNING: Removing unreachable block (ram,0x000101223a44) */
/* WARNING: Removing unreachable block (ram,0x000101223a78) */
/* WARNING: Removing unreachable block (ram,0x000101223a28) */
/* WARNING: Removing unreachable block (ram,0x000101223a54) */
/* WARNING: Removing unreachable block (ram,0x000101223a2c) */
/* WARNING: Removing unreachable block (ram,0x000101223a80) */
/* WARNING: Removing unreachable block (ram,0x000101223d90) */
/* WARNING: Removing unreachable block (ram,0x000101223a94) */
/* WARNING: Removing unreachable block (ram,0x000101223ac4) */
/* WARNING: Removing unreachable block (ram,0x000101223af4) */
/* WARNING: Removing unreachable block (ram,0x000101223acc) */
/* WARNING: Removing unreachable block (ram,0x000101223b00) */
/* WARNING: Removing unreachable block (ram,0x000101223ab0) */
/* WARNING: Removing unreachable block (ram,0x000101223adc) */
/* WARNING: Removing unreachable block (ram,0x000101223ab4) */
/* WARNING: Removing unreachable block (ram,0x000101223b08) */
/* WARNING: Removing unreachable block (ram,0x000101223de0) */
/* WARNING: Removing unreachable block (ram,0x000101223b1c) */
/* WARNING: Removing unreachable block (ram,0x000101223b4c) */
/* WARNING: Removing unreachable block (ram,0x000101223b78) */
/* WARNING: Removing unreachable block (ram,0x000101223b54) */
/* WARNING: Removing unreachable block (ram,0x000101223b84) */
/* WARNING: Removing unreachable block (ram,0x000101223b38) */
/* WARNING: Removing unreachable block (ram,0x000101223b64) */
/* WARNING: Removing unreachable block (ram,0x000101223b3c) */
/* WARNING: Removing unreachable block (ram,0x000101223b8c) */
/* WARNING: Removing unreachable block (ram,0x000101223e30) */
/* WARNING: Removing unreachable block (ram,0x000101223ba0) */
/* WARNING: Removing unreachable block (ram,0x0001012234f0) */
/* WARNING: Removing unreachable block (ram,0x000101223860) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101223374(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c4e88c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c4e888();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
    }
    else {
      lVar4 = unaff_x20;
      func_0x000107c4d348();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4068c();
        func_0x000107c61180();
        if (lVar4 != 0) {
          lVar5 = unaff_x20;
          func_0x000107c5c898();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar5 = unaff_x20;
            func_0x000107c506f4();
            func_0x000107c61180();
            if (lVar5 == 0) {
              func_0x000107c61170(lVar2);
              lVar2 = lVar3;
            }
            else {
              lVar5 = unaff_x20;
              func_0x000107c5a980();
              func_0x000107c61180();
              if (lVar5 == 0) {
                func_0x000107c61170(lVar2);
                lVar2 = lVar3;
              }
              else {
                func_0x000107c407c4();
                func_0x000107c61180();
                if (unaff_x20 != 0) {
                  FUN_101220dd8();
                  func_0x000107c613fc();
                  func_0x000107c61174();
                  func_0x000107c40688();
                  func_0x000107c61180();
                  if (lVar4 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x101223e5c);
                    (*pcVar1)();
                  }
                  func_0x0001000285a8(0x112d65b40,&UNK_10d92ce30);
                  func_0x0001000bda74(lVar4);
                  lVar2 = lVar4;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101223e5c; end: 101223e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101223e5c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d4e900,&UNK_10d914c40);
  func_0x000107c407c0();
  func_0x000107c61180();
  uVar4 = uVar7;
  func_0x0001000bda74();
  func_0x000107c61170(uVar7);
  uVar5 = 0;
  func_0x0001028ede28();
  uVar7 = uVar5;
  func_0x000107c613fc();
  func_0x0001028ed320(uVar4,uVar7);
  lVar3 = _DAT_112faecc0;
  ppuStack_48 = &PTR_DAT_110567420;
  lVar6 = 0;
  auStack_68[0] = uVar4;
  uStack_50 = uVar5;
  func_0x000101223154();
  func_0x000107c613fc();
  puVar2 = (undefined8 *)(lVar1 + lVar3);
  uVar7 = *puVar2;
  *(undefined8 *)(lVar6 + 0x18) = puVar2[1];
  *(undefined8 *)(lVar6 + 0x10) = uVar7;
  FUN_101220efc(auStack_68,lVar6 + 0x20);
  *param_1 = lVar6;
  func_0x000107c615f0(uVar7);
  return;
}



/* Entry: 101223e78; end: 101223eab;  */

void FUN_101223e78(void)

{
  long unaff_x20;
  
  FUN_101220980(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 101223eac; end: 101223ec7;  */

void FUN_101223eac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101223ec8; end: 101223eef; -[SCMyAIInteractiveLensApiPluginEntryPoint begin] */

void FUN_101223ec8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101223374();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101223ef0; end: 101223f33; -[SCMyAIInteractiveLensApiPluginEntryPoint end] */

void FUN_101223ef0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101223f34; end: 1012243b7;  */

void FUN_101223f34(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (uVar2 = uVar3, func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0),
     (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    uVar2 = 0;
    if (((param_2 == 0x656d614779616c70) && (param_3 == -0x11ff9a8f909cac8d)) ||
       (func_0x000107c605b8(0x656d614779616c70,0xee0065706f635373,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5747c();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10d0c60)) ||
         (func_0x000107c605b8(0xd00000000000001a,0x800000010ef2f3a0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57478();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10d4da0)) ||
           (func_0x000107c605b8(0xd000000000000016,0x800000010ef2b260,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c568e0();
        }
        else {
          if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10d3990)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000016,0x800000010ef2c670,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10d3be0)) {
                uVar2 = 0xd000000000000013;
                func_0x000107c605b8(0xd000000000000013,0x800000010ef2c420,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10d0c40)) {
                    uVar2 = 0xd000000000000013;
                    func_0x000107c605b8(0xd000000000000013,0x800000010ef2f3c0,param_2,param_3,0);
                    if ((uVar2 & 1) == 0) {
                      if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10d0c20)) ||
                         (func_0x000107c605b8(0xd000000000000012,0x800000010ef2f3e0,param_2,param_3,
                                              0), (uVar3 & 1) != 0)) {
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c5907c();
                      }
                      else {
                        uVar3 = 0xd000000000000015;
                        if (((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e3960))
                           && (func_0x000107c605b8(0xd000000000000015,0x800000010ef1c6a0,param_2,
                                                   param_3,0), (uVar3 & 1) == 0)) {
                          func_0x000107c602fc(0x15);
                          func_0x000107c6142c(0xe000000000000000);
                          func_0x000107c5fb78(param_2,param_3);
                          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                              0x800000010ef0fc20,
                                              "MyAIInteractiveLensApiPlugin/SCMyAIInteractiveLensApiPluginEntryPoint.swift"
                                              ,0x4b,2,0x4e,0);
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x1012243b8);
                          (*pcVar1)();
                        }
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c539c8();
                      }
                      goto LAB_101223fc8;
                    }
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c57e8c();
                  goto LAB_101223fc8;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c59c90();
              goto LAB_101223fc8;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53968();
        }
      }
    }
  }
LAB_101223fc8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1012243b8; end: 101224463; -[SCMyAIInteractiveLensApiPluginEntryPoint setValue:forIvarName:] */

void FUN_1012243b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101223f34(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101224464; end: 101224563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101224464(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d69620,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69628,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69630,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69638,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69640,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69648,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69650,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69658,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69660,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d69698) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101224564; end: 101224583; -[SCMyAIInteractiveLensApiPluginEntryPoint init] */

void FUN_101224564(void)

{
  FUN_101224464();
  return;
}



/* Entry: 101224584; end: 1012245b7;  */

void FUN_101224584(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012245b8; end: 10122466f; -[SCMyAIInteractiveLensApiPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012245b8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d69620);
  func_0x000107c61610(param_1 + _DAT_112d69628);
  func_0x000107c61610(param_1 + _DAT_112d69630);
  func_0x000107c61610(param_1 + _DAT_112d69638);
  func_0x000107c61610(param_1 + _DAT_112d69640);
  func_0x000107c61610(param_1 + _DAT_112d69648);
  func_0x000107c61610(param_1 + _DAT_112d69650);
  func_0x000107c61610(param_1 + _DAT_112d69658);
  func_0x000107c61610(param_1 + _DAT_112d69660);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d69698));
  return;
}



/* Entry: 101224670; end: 10122468f;  */

void FUN_101224670(void)

{
  func_0x000107c61168(&PTR_PTR_1127bca88);
  return;
}



/* Entry: 101224690; end: 10122472b;  */

long FUN_101224690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 10122472c; end: 10122490f;  */

void FUN_10122472c(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  code *pcVar8;
  code *pcVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  uVar10 = *unaff_x20;
  uVar2 = param_1;
  pcVar8 = param_2;
  func_0x0001000d224c(&puStack_90);
  puVar1 = puStack_90;
  if (puStack_90 == (undefined *)0x0) {
    (*param_2)();
  }
  else {
    if (((uint)param_1 & 0xff) == 1) {
      FUN_101224dd8();
    }
    else {
      func_0x000101224ea4();
    }
    pcVar9 = pcVar8;
    func_0x000104522c9c(0);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e12b58;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e12b58);
    func_0x00010452281c();
    func_0x000107c6142c(pcVar9);
    func_0x000107c40684(puStack_90);
    puVar4 = puStack_90;
    func_0x000107c61180();
    func_0x000107c61170(ppuVar3);
    puVar5 = puVar4;
    func_0x000107c5c6c0(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = &UNK_1103959b8;
    func_0x000107c613fc(&UNK_1103959b8,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    puVar6 = &UNK_1103959e0;
    func_0x000107c613fc(&UNK_1103959e0,0x40,7);
    *(code **)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = param_3;
    *(undefined **)(puVar6 + 0x20) = puVar4;
    *(undefined8 *)(puVar6 + 0x28) = uVar2;
    *(code **)(puVar6 + 0x30) = pcVar8;
    *(undefined8 *)(puVar6 + 0x38) = uVar10;
    pcStack_70 = FUN_101224d84;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100b6fe98;
    puStack_78 = &UNK_1103959f8;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    puVar4 = puStack_68;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar4);
    puVar4 = puVar5;
    func_0x000107c5c320(puVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c3e924(puVar4);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 101224910; end: 1012249eb;  */

void FUN_101224910(long param_1,code *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [24];
  
  puVar2 = auStack_68;
  func_0x000107c61428(param_4 + 0x10,puVar2,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c61574(param_4);
    }
    else {
      lVar1 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      FUN_1012249ec(param_5,param_6,lVar1,puVar2);
      func_0x000107c61574(param_4);
      func_0x000107c6142c(puVar2);
    }
  }
  (*param_2)();
  return;
}



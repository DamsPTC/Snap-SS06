/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033fa458; end: 1033fa4eb;  */

ulong FUN_1033fa458(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_38;
  
  func_0x000104875e28(&uStack_38);
  uVar2 = uStack_38;
  if (uStack_38 != 0) {
    uVar1 = uStack_38;
    func_0x000107c49ef8();
    func_0x000107c615e8(uVar2);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  func_0x000104875e28(&uStack_38);
  if (uStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_38;
    func_0x000107c49ef8(uStack_38);
    func_0x000107c615e8(uStack_38);
  }
  return uVar2;
}



/* Entry: 1033fa4ec; end: 1033fa4f7; -[_TtC19GamesLensProcessing28PlayGamesSnapCapturingRouter isRecordingVideo] */

uint FUN_1033fa4ec(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_1033fa4f8();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 1033fa4f8; end: 1033fa58b;  */

ulong FUN_1033fa4f8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_38;
  
  func_0x000104875e28(&uStack_38);
  uVar2 = uStack_38;
  if (uStack_38 != 0) {
    uVar1 = uStack_38;
    func_0x000107c4a2fc();
    func_0x000107c615e8(uVar2);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  func_0x000104875e28(&uStack_38);
  if (uStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_38;
    func_0x000107c4a2fc(uStack_38);
    func_0x000107c615e8(uStack_38);
  }
  return uVar2;
}



/* Entry: 1033fa58c; end: 1033fa5f7;  */

void FUN_1033fa58c(void)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(*(long *)(unaff_x20 + 0x10) + 0x20,auStack_38,0,0);
  func_0x0001000d224c(&uStack_40);
  func_0x000107c3f5a8(uStack_40);
  func_0x000107c615e8(uStack_40);
  return;
}



/* Entry: 1033fa5f8; end: 1033fa603; -[_TtC19GamesLensProcessing28PlayGamesSnapCapturingRouter captureImage] */

void FUN_1033fa5f8(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_1033fa58c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1033fa604; end: 1033fa67f;  */

void FUN_1033fa604(void)

{
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(*(long *)(unaff_x20 + 0x10) + 0x20,auStack_48,0,0);
  func_0x0001000d224c(&uStack_50);
  func_0x000107c3f5b0(uStack_50);
  func_0x000107c615e8(uStack_50);
  return;
}



/* Entry: 1033fa680; end: 1033fa737; -[_TtC19GamesLensProcessing28PlayGamesSnapCapturingRouter captureImageWithShareSticker:] */

void FUN_1033fa680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_1033fa604(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1033fa738; end: 1033fa743; -[_TtC19GamesLensProcessing28PlayGamesSnapCapturingRouter startVideoCapture] */

uint FUN_1033fa738(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  (*(code *)0x1033fa6c4)();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 1033fa744; end: 1033fa7e7;  */

uint FUN_1033fa744(undefined8 param_1,undefined8 param_2,code *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  (*param_3)();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 1033fa7e8; end: 1033fa7f3; -[_TtC19GamesLensProcessing28PlayGamesSnapCapturingRouter stopVideoCapture] */

void FUN_1033fa7e8(undefined8 param_1)

{
  func_0x000107c6157c();
  (*(code *)0x1033fa77c)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1033fa7f4; end: 1033fa85f;  */

void FUN_1033fa7f4(void)

{
  long lVar1;
  long lStack_28;
  
  func_0x000104875e28(&lStack_28);
  lVar1 = lStack_28;
  if (lStack_28 != 0) {
    func_0x000107c3f4fc(lStack_28);
    func_0x000107c615e8(lVar1);
  }
  func_0x000104875e28(&lStack_28);
  if (lStack_28 != 0) {
    func_0x000107c3f4fc(lStack_28);
    func_0x000107c615e8(lStack_28);
  }
  return;
}



/* Entry: 1033fa860; end: 1033fa86b; -[_TtC19GamesLensProcessing28PlayGamesSnapCapturingRouter cancelVideoCapture] */

void FUN_1033fa860(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_1033fa7f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1033fa86c; end: 1033fa897;  */

void FUN_1033fa86c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  func_0x000107c6157c();
  (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1033fa898; end: 1033fa8eb;  */

void FUN_1033fa898(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033fa8ec; end: 1033fa95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1033fa8ec(void)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f64980;
  pcVar2 = *(char **)(unaff_x20 + _DAT_112f64980);
  pcVar3 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar3 = "mainPerformer";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(char **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    pcVar2 = (char *)0x0;
  }
  func_0x000107c615f0(pcVar2);
  return pcVar3;
}



/* Entry: 1033fa95c; end: 1033fa96b; -[_TtC19GamesLensProcessing29PlayGamesWebLensSnapCapturing isInCaptureFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1033fa95c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f64988);
}



/* Entry: 1033fa96c; end: 1033fa973; -[_TtC19GamesLensProcessing29PlayGamesWebLensSnapCapturing isRecordingVideo] */

undefined8 FUN_1033fa96c(void)

{
  return 0;
}



/* Entry: 1033fa974; end: 1033fac43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fa974(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  long unaff_x20;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_e8 [24];
  ulong uStack_d0;
  long lStack_c8;
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
  undefined1 uStack_70;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112f64968);
  uVar1 = ((ulong *)(unaff_x20 + _DAT_112f64968))[1];
  func_0x000107c614f0();
  uVar4 = uVar3;
  (**(code **)(uVar1 + 0x20))();
  lVar6 = _DAT_112f64988;
  if ((uVar4 & 1) == 0) {
    pcVar10 = "LensSnapCapturing";
    uVar9 = 0xd00000000000003c;
  }
  else if ((*(byte *)(unaff_x20 + _DAT_112f64988) & 1) == 0) {
    func_0x0001000d224c(&uStack_d0);
    lVar11 = lStack_c8;
    uVar4 = uStack_d0;
    uVar5 = uStack_d0;
    func_0x000107c614f0();
    (**(code **)(lVar11 + 0x28))();
    func_0x000107c615e8(uVar4);
    if ((uVar5 & 1) == 0) {
      *(undefined1 *)(unaff_x20 + lVar6) = 1;
      if (param_1 != 0) {
        lVar6 = param_1;
        func_0x000107c61174(param_1);
        func_0x0001000d224c(&uStack_d0);
        uVar4 = uStack_d0;
        func_0x000107c614f0(uStack_d0);
        (**(code **)(lStack_c8 + 0x10))(lVar6,uVar4,lStack_c8);
        func_0x000107c615e8(uStack_d0);
        func_0x000107c61170(lVar6);
      }
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_70 = 5;
      (**(code **)(uVar1 + 0x28))(&uStack_d0,uVar3,uVar1);
      lVar11 = *(long *)(unaff_x20 + _DAT_112f64958);
      puVar7 = &UNK_110650380;
      func_0x000107c613fc(&UNK_110650380,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar8 = &UNK_1106503a8;
      func_0x000107c613fc(&UNK_1106503a8,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(long *)(puVar8 + 0x18) = param_1;
      *(long *)(puVar8 + 0x20) = lVar2;
      func_0x000107c61428(lVar11 + 0x10,auStack_e8,0,0);
      lVar6 = lVar11 + 0x10;
      func_0x000107c61618();
      if (lVar6 == 0) {
        func_0x000107c61174(param_1);
        func_0x000107c6157c(puVar7);
        FUN_1033facc4(0,puVar7,param_1,lVar2);
        func_0x000107c61574(puVar7);
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x18);
        lVar2 = lVar6;
        func_0x000107c614f0();
        pcVar12 = *(code **)(lVar11 + 8);
        func_0x000107c61174(param_1);
        func_0x000107c6157c(puVar7);
        (*pcVar12)(FUN_1033fb5d8,puVar8,lVar2,lVar11);
        func_0x000107c61574(puVar7);
        func_0x000107c615e8(lVar6);
      }
      func_0x000107c61574(puVar8);
      return;
    }
    pcVar10 = "gnoring WebLens captureImage";
    uVar9 = 0xd00000000000002f;
  }
  else {
    pcVar10 = "gress, skipping WebLens capture";
    uVar9 = 0xd000000000000029;
  }
  func_0x0001007d6c6c(1,uVar9,(ulong)pcVar10 | 0x8000000000000000,lVar2,&PTR_DAT_110651b18);
  return;
}



/* Entry: 1033fac44; end: 1033fac6f; -[_TtC19GamesLensProcessing29PlayGamesWebLensSnapCapturing captureImage] */

void FUN_1033fac44(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033fa974(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033fac70; end: 1033facc3; -[_TtC19GamesLensProcessing29PlayGamesWebLensSnapCapturing captureImageWithShareSticker:] */

/* WARNING: Possible PIC construction at 0x0001033facac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033facb0) */

void FUN_1033fac70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1033fa974(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1033facc4; end: 1033faddb;  */

void FUN_1033facc4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    FUN_1033fa8ec();
    puVar2 = &UNK_1106503d0;
    func_0x000107c613fc(&UNK_1106503d0,0x30,7);
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = param_2;
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    *(undefined8 *)(puVar2 + 0x28) = param_4;
    uStack_68 = 0x1033fb5e4;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1106503e8;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1033faddc; end: 1033fafc7;  */

/* WARNING: Possible PIC construction at 0x0001033faea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033faea8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033faddc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uStack_98;
  undefined7 uStack_97;
  long lStack_90;
  undefined1 uStack_38;
  
  if (param_1 != 0) {
    puVar2 = &UNK_110650380;
    func_0x000107c613fc(&UNK_110650380,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    puVar3 = &UNK_110650420;
    func_0x000107c613fc(&UNK_110650420,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(long *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x0001001ca524(0xc,4,0x38,4,0,0,&UNK_10dbc1128,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar3);
    return;
  }
  *(undefined1 *)(param_2 + _DAT_112f64988) = 0;
  func_0x0001007d6c6c(3,0xd00000000000001d,0x800000010f14ab40,param_4,&PTR_DAT_110651b18);
  plVar4 = (long *)(param_2 + _DAT_112f64978);
  func_0x0001000a8868(plVar4,plVar4[3]);
  uVar6 = *(undefined8 *)(*plVar4 + 0x10);
  uVar5 = 0x6567616d695f6f6e;
  func_0x000107c5fadc(0x6567616d695f6f6e,0xe800000000000000);
  func_0x000106b9df10(uVar6,uVar5,1);
  func_0x000107c61170(uVar5);
  func_0x0001000d224c(&uStack_98);
  func_0x000107c614f0(CONCAT71(uStack_97,uStack_98));
  (**(code **)(lStack_90 + 0x30))();
  func_0x000107c615e8(CONCAT71(uStack_97,uStack_98));
  uVar5 = *(undefined8 *)(param_2 + _DAT_112f64968);
  lVar1 = ((undefined8 *)(param_2 + _DAT_112f64968))[1];
  func_0x000107c614f0(uVar5);
  uStack_98 = 0;
  uStack_38 = 2;
  (**(code **)(lVar1 + 0x28))(&uStack_98,uVar5,lVar1);
  return;
}



/* Entry: 1033fafc8; end: 1033fb037;  */

void FUN_1033fafc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1033fb038,uVar1,uVar2);
  return;
}



/* Entry: 1033fb038; end: 1033fb107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fb038(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x78,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xe0) = lVar5;
  if (lVar5 != 0) {
    uVar2 = *(undefined8 *)(lVar5 + _DAT_112f64970);
    lVar5 = ((undefined8 *)(lVar5 + _DAT_112f64970))[1];
    func_0x000107c614f0(uVar2);
    piVar4 = *(int **)(lVar5 + 0x40);
    iVar1 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xe8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1033fb108;
                    /* WARNING: Could not recover jumptable at 0x0001033fb0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))(*(undefined8 *)(unaff_x22 + 0xb8),uVar2,lVar5);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
                    /* WARNING: Could not recover jumptable at 0x0001033fb104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1033fb108; end: 1033fb153;  */

void FUN_1033fb108(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xf0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1033fb154,*(undefined8 *)(lVar1 + 0xd0),*(undefined8 *)(lVar1 + 0xd8));
  return;
}



/* Entry: 1033fb154; end: 1033fb32f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fb154(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  code *pcVar10;
  
  if (*(long *)(unaff_x22 + 0xc0) != 0) {
    func_0x0001000d224c(unaff_x22 + 0xa0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar2 = *(long *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar4;
    func_0x000107c614f0(uVar4);
    piVar5 = *(int **)(lVar2 + 0x18);
    iVar1 = *piVar5;
    plVar3 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x100) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1033fb330;
                    /* WARNING: Could not recover jumptable at 0x0001033fb1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))(uVar4,lVar2);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar6 = *(long *)(unaff_x22 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined1 *)(lVar6 + _DAT_112f64988) = 0;
  plVar3 = (long *)(lVar6 + _DAT_112f64978);
  func_0x0001000a8868(plVar3,plVar3[3]);
  uVar7 = *(undefined8 *)(*plVar3 + 0x10);
  uVar4 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000106b9df10(uVar7,uVar4,1);
  func_0x000107c61170(uVar4);
  func_0x0001000d224c(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar7 = uVar4;
  func_0x000107c614f0(uVar4);
  (**(code **)(lVar2 + 8))(uVar8,uVar9,uVar7,lVar2);
  func_0x000107c615e8(uVar4);
  uVar4 = *(undefined8 *)(lVar6 + _DAT_112f64968);
  lVar2 = ((undefined8 *)(lVar6 + _DAT_112f64968))[1];
  uVar7 = uVar4;
  func_0x000107c614f0(uVar4);
  *(undefined1 *)(unaff_x22 + 0x10) = 1;
  *(undefined1 *)(unaff_x22 + 0x70) = 2;
  pcVar10 = *(code **)(lVar2 + 0x28);
  func_0x000107c615f0(uVar4);
  (*pcVar10)((undefined1 *)(unaff_x22 + 0x10),uVar7,lVar2);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar6);
                    /* WARNING: Could not recover jumptable at 0x0001033fb32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1033fb330; end: 1033fb37b;  */

void FUN_1033fb330(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xf8);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x100));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1033fb37c,*(undefined8 *)(lVar2 + 0xd0),*(undefined8 *)(lVar2 + 0xd8));
  return;
}



/* Entry: 1033fb37c; end: 1033fb4cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fb37c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  code *pcVar8;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar4 = *(long *)(unaff_x22 + 0xe0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined1 *)(lVar4 + _DAT_112f64988) = 0;
  plVar2 = (long *)(lVar4 + _DAT_112f64978);
  func_0x0001000a8868(plVar2,plVar2[3]);
  uVar5 = *(undefined8 *)(*plVar2 + 0x10);
  uVar3 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000106b9df10(uVar5,uVar3,1);
  func_0x000107c61170(uVar3);
  func_0x0001000d224c(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar1 = *(long *)(unaff_x22 + 0x98);
  uVar5 = uVar3;
  func_0x000107c614f0(uVar3);
  (**(code **)(lVar1 + 8))(uVar6,uVar7,uVar5,lVar1);
  func_0x000107c615e8(uVar3);
  uVar3 = *(undefined8 *)(lVar4 + _DAT_112f64968);
  lVar1 = ((undefined8 *)(lVar4 + _DAT_112f64968))[1];
  uVar5 = uVar3;
  func_0x000107c614f0(uVar3);
  *(undefined1 *)(unaff_x22 + 0x10) = 1;
  *(undefined1 *)(unaff_x22 + 0x70) = 2;
  pcVar8 = *(code **)(lVar1 + 0x28);
  func_0x000107c615f0(uVar3);
  (*pcVar8)((undefined1 *)(unaff_x22 + 0x10),uVar5,lVar1);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar4);
                    /* WARNING: Could not recover jumptable at 0x0001033fb4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1033fb4d0; end: 1033fb4d7; -[_TtC19GamesLensProcessing29PlayGamesWebLensSnapCapturing startVideoCapture] */

undefined8 FUN_1033fb4d0(void)

{
  return 0;
}



/* Entry: 1033fb4d8; end: 1033fb4db; -[_TtC19GamesLensProcessing29PlayGamesWebLensSnapCapturing stopVideoCapture] */

void FUN_1033fb4d8(void)

{
  return;
}



/* Entry: 1033fb4dc; end: 1033fb4df; -[_TtC19GamesLensProcessing29PlayGamesWebLensSnapCapturing cancelVideoCapture] */

void FUN_1033fb4dc(void)

{
  return;
}



/* Entry: 1033fb4e0; end: 1033fb53f; -[_TtC19GamesLensProcessing29PlayGamesWebLensSnapCapturing init] */

void FUN_1033fb4e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesLensProcessing.PlayGamesWebLensSnapCapturing",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033fb50c);
  (*pcVar1)();
}



/* Entry: 1033fb540; end: 1033fb5b7; -[_TtC19GamesLensProcessing29PlayGamesWebLensSnapCapturing .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033fb57c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033fb580) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fb540(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f64958));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f64960));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f64968));
  return;
}



/* Entry: 1033fb5b8; end: 1033fb5d7;  */

void FUN_1033fb5b8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d88b0);
  return;
}



/* Entry: 1033fb5d8; end: 1033fb60b;  */

void FUN_1033fb5d8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    FUN_1033fa8ec();
    puVar4 = &UNK_1106503d0;
    func_0x000107c613fc(&UNK_1106503d0,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = param_1;
    *(long *)(puVar4 + 0x18) = lVar2;
    *(undefined8 *)(puVar4 + 0x20) = uVar1;
    *(undefined8 *)(puVar4 + 0x28) = uVar6;
    uStack_68 = 0x1033fb5e4;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1106503e8;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_60;
    func_0x000107c61174(uVar1);
    func_0x000107c61174(param_1);
    func_0x000107c61174(lVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(lVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 1033fb60c; end: 1033fb677;  */

void FUN_1033fb60c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1033fb678;
  plVar3[0x17] = lVar1;
  plVar3[0x18] = lVar4;
  plVar3[0x16] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x19] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x1a] = lVar1;
  plVar3[0x1b] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1033fb038,lVar1,lVar2);
  return;
}



/* Entry: 1033fb678; end: 1033fb6b3;  */

void FUN_1033fb678(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001033fb6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1033fb6b4; end: 1033fb773;  */

undefined8 FUN_1033fb6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1033fb838(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1033fb774; end: 1033fb7cb;  */

void FUN_1033fb774(void)

{
  FUN_103410300();
  return;
}



/* Entry: 1033fb7cc; end: 1033fb7ef;  */

void FUN_1033fb7cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033fb7f0; end: 1033fb837;  */

void FUN_1033fb7f0(void)

{
  FUN_103410300();
  return;
}



/* Entry: 1033fb838; end: 1033fb947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fb838(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = *unaff_x20;
  lVar4 = *(long *)(param_2 + _DAT_113034408);
  lVar1 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000104366fc4(0xd00000000000002a,0x800000010f14ab70,uVar2,&PTR_DAT_1106519f8);
  }
  else {
    func_0x000107c57d4c();
    func_0x000107c615e8(lVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306fae0);
  uVar3 = *(undefined8 *)(param_3 + _DAT_113091b70);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5e370();
  func_0x000107c61180();
  lVar1 = 0;
  func_0x000103410544();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = lVar4;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  unaff_x20[2] = lVar1;
  return;
}



/* Entry: 1033fb948; end: 1033fb967;  */

void FUN_1033fb948(void)

{
  func_0x000107c61168(&PTR_PTR_112f649f8);
  return;
}



/* Entry: 1033fb968; end: 1033fc037;  */

void FUN_1033fb968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long unaff_x20;
  
  func_0x000107c61170(param_2);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_8;
  *(undefined8 *)(unaff_x20 + 0x40) = param_9;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  *(undefined8 *)(unaff_x20 + 0x60) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_14;
  *(undefined8 *)(unaff_x20 + 0x78) = param_15;
  return;
}



/* Entry: 1033fc038; end: 1033fc0a7;  */

void FUN_1033fc038(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == (char *)0x0) {
    pcVar1 = "begin()";
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar1 = param_2;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
  }
  *param_1 = pcVar1;
  return;
}



/* Entry: 1033fc0a8; end: 1033fc0bb;  */

void FUN_1033fc0a8(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (pcVar2 == (char *)0x0) {
    pcVar1 = "begin()";
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar1 = pcVar2;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar2);
  }
  *param_1 = pcVar1;
  return;
}



/* Entry: 1033fc0bc; end: 1033fc22b;  */

undefined8 FUN_1033fc0bc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x80);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x50);
    func_0x000107c6157c(lVar2);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61574(lVar2);
    }
    else {
      func_0x000107c61170();
      uVar1 = *(undefined8 *)(lVar2 + 0x50);
      func_0x000107c4ffe8(uVar1);
      func_0x000107c61180();
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(uVar1);
    }
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  func_0x000107c61574(uVar1);
  lVar2 = *(long *)(unaff_x20 + 0x88);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x18);
    lVar4 = *(long *)(lVar3 + 0x28);
    if (lVar4 != 0) {
      uVar1 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 *)(lVar3 + 0x20) = 0;
      *(undefined8 *)(lVar3 + 0x28) = 0;
      func_0x000107c6157c();
      FUN_103400cfc(uVar1,lVar4);
      func_0x000107c61574(lVar2);
      func_0x000107c6142c(lVar4);
      lVar2 = *(long *)(unaff_x20 + 0x88);
    }
  }
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  func_0x000107c61574(lVar2);
  lVar2 = *(long *)(unaff_x20 + 0x90);
  if (lVar2 != 0) {
    func_0x000107c6157c(lVar2);
    func_0x000103405ad0();
    func_0x000107c61574(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
    *(undefined8 *)(unaff_x20 + 0x90) = 0;
    func_0x000107c61574(uVar1);
  }
  lVar2 = *(long *)(unaff_x20 + 0x98);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar2);
    FUN_103404944();
    func_0x000107c61574(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
  }
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  func_0x000107c61574(uVar1);
  lVar2 = *(long *)(unaff_x20 + 0xa0);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar2);
    FUN_103406e24();
    func_0x000107c61574(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  }
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 1033fc22c; end: 1033fc58f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fc22c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 auStack_130 [4];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_100 [3];
  long lStack_e8;
  undefined **ppuStack_e0;
  long alStack_d8 [3];
  long lStack_c0;
  undefined **ppuStack_b8;
  undefined1 auStack_b0 [40];
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  lVar7 = *(long *)(unaff_x20 + 0x90);
  auStack_130[3] = param_1;
  if (lVar7 != 0) {
    func_0x000107c6157c(lVar7);
    func_0x000103405ad0();
    func_0x000107c61574(lVar7);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
    *(undefined8 *)(unaff_x20 + 0x90) = 0;
    func_0x000107c61574(uVar1);
  }
  lVar4 = _DAT_11306fab0;
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(lVar7 + _DAT_11306faa8);
  uStack_108 = ((undefined8 *)(lVar7 + _DAT_11306fb28))[1];
  uStack_110 = *(undefined8 *)(lVar7 + _DAT_11306fb28);
  func_0x000107c61428(lVar7 + _DAT_11306fab0,auStack_80,0,0);
  lVar7 = lVar7 + lVar4;
  func_0x000107c61618(lVar7);
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + _DAT_11307d1c0);
  func_0x0001000285a8(0x112de7260,&UNK_10dbc1260);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x60);
  func_0x000107c615f0(uStack_110);
  func_0x000107c61174(uVar8);
  func_0x000107c615f0(uVar9);
  func_0x000107c4b028();
  func_0x000107c61180();
  uVar1 = uVar10;
  func_0x0001000bda74();
  auStack_130[2] = uVar1;
  func_0x000107c61170(uVar10);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + _DAT_113070098);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(&uStack_88);
  func_0x000107c61574(uVar1);
  auStack_130[1] = uStack_88;
  FUN_1033fc6c0(*(long *)(unaff_x20 + 0x70) + _DAT_113070218,auStack_b0);
  puVar2 = PTR_PTR_1126ad218;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = 0;
  func_0x000103409520();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined **)(lVar4 + 0x10) = puVar2;
  ppuStack_b8 = &PTR_DAT_110651380;
  lVar5 = 0;
  alStack_d8[0] = lVar4;
  lStack_c0 = lVar3;
  func_0x000103406c54();
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_d8,lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar11 = (undefined8 *)((long)auStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar11);
  auStack_100[0] = *puVar11;
  ppuStack_e0 = &PTR_DAT_110651380;
  lStack_e8 = lVar3;
  func_0x000107c61614(lVar5 + 0x28,0);
  func_0x000107c61614(lVar5 + 0x30,0);
  func_0x000107c6157c(lVar4);
  pcVar6 = "GamesWebLensActivationWorkflow";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar5 + 0xa0) = pcVar6;
  uVar10 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  func_0x000107c61574(lVar4);
  uVar1 = auStack_130[3];
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  *(undefined8 *)(lVar5 + 0xb8) = 0;
  *(undefined8 *)(lVar5 + 0xa8) = uVar10;
  *(undefined4 *)(lVar5 + 0xbf) = 0;
  *(undefined8 *)(lVar5 + 0x10) = auStack_130[3];
  *(undefined8 *)(lVar5 + 0x20) = uStack_108;
  *(undefined8 *)(lVar5 + 0x18) = uStack_110;
  func_0x000107c61604(lVar5 + 0x28,uVar8);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61604(lVar5 + 0x30,lVar7);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(lVar5 + 0x38) = uVar9;
  *(undefined8 *)(lVar5 + 0x40) = auStack_130[2];
  *(undefined8 *)(lVar5 + 0x48) = auStack_130[1];
  func_0x000100d478a0(auStack_b0,lVar5 + 0x50);
  func_0x000100d478a0(auStack_100,lVar5 + 0x78);
  func_0x0001000834e4(alStack_d8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  *(long *)(unaff_x20 + 0x90) = lVar5;
  func_0x000107c6157c(lVar5);
  func_0x000107c61574(uVar1);
  func_0x0001034058e4();
  func_0x000107c61574(lVar5);
  return;
}



/* Entry: 1033fc590; end: 1033fc65b;  */

void FUN_1033fc590(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 1033fc65c; end: 1033fc69f;  */

void FUN_1033fc65c(void)

{
  func_0x0001033fba20();
  return;
}



/* Entry: 1033fc6a0; end: 1033fc6bf;  */

void FUN_1033fc6a0(void)

{
  func_0x000107c61168(&PTR_PTR_112f64aa0);
  return;
}



/* Entry: 1033fc6c0; end: 1033fc703;  */

long FUN_1033fc6c0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1033fc704; end: 1033fc74b;  */

void FUN_1033fc704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 1033fc74c; end: 1033fc8f3;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fc74c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 auStack_c0 [4];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [40];
  
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11306fb08);
  lVar1 = 0;
  func_0x00010340224c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar5;
  ppuStack_70 = &PTR_DAT_110650b70;
  alStack_90[0] = lVar2;
  lStack_78 = lVar1;
  FUN_103412dd4(auStack_68,alStack_90);
  func_0x000107c61174(uVar5);
  func_0x0001000834e4(alStack_90);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c415d8();
  func_0x000107c61180();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = 0;
  func_0x0001034021e4();
  func_0x000107c613fc();
  func_0x000107c61174();
  FUN_103401f78();
  ppuStack_70 = &PTR_DAT_110650b48;
  lVar3 = 0;
  alStack_90[0] = lVar1;
  lStack_78 = lVar2;
  func_0x000103401e74();
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_90,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)auStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar6);
  auStack_c0[1] = *puVar6;
  ppuStack_98 = &PTR_DAT_110650b48;
  pcVar4 = "GamesLensHintController";
  lStack_a0 = lVar2;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar3 + 0x68) = pcVar4;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x10) = uVar5;
  func_0x0001033fc9b0(auStack_68,lVar3 + 0x18);
  FUN_1033fc9f4(auStack_c0 + 1,lVar3 + 0x40);
  func_0x0001000834e4(alStack_90);
  FUN_103401020();
  func_0x0001000834e4(auStack_68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  *(long *)(unaff_x20 + 0x28) = lVar3;
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 1033fc8f4; end: 1033fc96b;  */

undefined8 FUN_1033fc8f4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x70);
    *(undefined8 *)(lVar2 + 0x70) = 0;
    func_0x000107c61574(uVar1);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 1033fc96c; end: 1033fc9f3;  */

void FUN_1033fc96c(void)

{
  FUN_1033fc74c();
  return;
}



/* Entry: 1033fc9f4; end: 1033fca0b;  */

undefined8 * FUN_1033fc9f4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1033fca0c; end: 1033fca2b;  */

void FUN_1033fca0c(void)

{
  func_0x000107c61168(&PTR_PTR_112f64bd0);
  return;
}



/* Entry: 1033fca2c; end: 1033fca83;  */

void FUN_1033fca2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  return;
}



/* Entry: 1033fca84; end: 1033fca97;  */

void FUN_1033fca84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  return;
}



/* Entry: 1033fca98; end: 1033fd02b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fca98(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long unaff_x20;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  code *pcVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  
  lVar22 = _DAT_113091b70;
  lVar24 = *(long *)(unaff_x20 + 0x10);
  lVar27 = *(long *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(lVar24 + _DAT_11306fac0);
  uVar26 = *(undefined8 *)(lVar27 + _DAT_113091b70);
  func_0x000107c61174();
  func_0x000107c41b80();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(lVar27 + lVar22);
  func_0x000107c5e370();
  func_0x000107c61180();
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_1033fd02c;
  uStack_80 = 0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10169a4a0;
  puStack_90 = &UNK_110650508;
  ppuVar10 = &puStack_a8;
  func_0x000107c60bc4(ppuVar10);
  uVar11 = uVar26;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  pcStack_88 = (code *)0x1033fd054;
  uStack_80 = 0;
  puStack_a8 = puVar14;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10169a4a0;
  puStack_90 = &UNK_110650530;
  ppuVar10 = &puStack_a8;
  func_0x000107c60bc4(ppuVar10);
  uVar12 = uVar9;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  puVar13 = PTR_PTR_1126ae6b8;
  func_0x000107c61168();
  puVar14 = puVar13;
  func_0x00010169a604();
  func_0x000107c613fc();
  *(undefined8 *)(puVar14 + 0x18) = 7;
  *(undefined8 *)(puVar14 + 0x10) = 3;
  *(undefined8 *)(puVar14 + 0x20) = uVar8;
  *(undefined8 *)(puVar14 + 0x28) = uVar11;
  *(undefined8 *)(puVar14 + 0x30) = uVar12;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0x112d5b0a0;
  func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
  puVar15 = puVar14;
  func_0x000107c5fc48(puVar14,uVar21);
  func_0x000107c61574(puVar14);
  func_0x000107c4cd50();
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  puVar14 = &UNK_110650568;
  func_0x000107c613fc(&UNK_110650568,0x18,7);
  *(long *)(puVar14 + 0x10) = lVar24;
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar16 = FUN_1033fd184;
  func_0x0001000bdd8c(FUN_1033fd184,puVar14);
  lVar22 = _DAT_11306fab8;
  uVar25 = *(undefined8 *)(lVar24 + _DAT_11306faa8);
  func_0x000107c61428(lVar24 + _DAT_11306fab8,&puStack_a8,0,0);
  lVar22 = lVar24 + lVar22;
  func_0x000107c61618();
  uVar21 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar29 = *(undefined8 *)(lVar24 + _DAT_11306fad0);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar30 = *(undefined8 *)(lVar24 + _DAT_11306fad8);
  uVar2 = *(undefined8 *)(lVar24 + _DAT_11306fac8);
  uVar5 = ((undefined8 *)(lVar24 + _DAT_11306fac8))[1];
  uVar3 = *(undefined8 *)(lVar24 + _DAT_11306fb28);
  lVar27 = ((undefined8 *)(lVar24 + _DAT_11306fb28))[1];
  uVar17 = uVar3;
  func_0x000107c614f0();
  pcVar28 = *(code **)(lVar27 + 8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61434(uVar5);
  func_0x000107c615f0(uVar3);
  (*pcVar28)(uVar17,lVar27);
  func_0x000107c615e8(uVar3);
  uVar6 = *(undefined1 *)(lVar24 + _DAT_11306fb40);
  uVar7 = *(undefined1 *)(lVar24 + _DAT_11306fb50);
  lVar18 = 0;
  FUN_1034058a0();
  lVar19 = lVar18;
  func_0x000107c610f8();
  lVar27 = _DAT_112f657b8;
  func_0x000107c61614(lVar19 + _DAT_112f657b8,0);
  *(undefined8 *)(lVar19 + _DAT_112f657c0) = 0;
  *(undefined8 *)(lVar19 + _DAT_112f657c8) = 0;
  func_0x000107c61614(lVar19 + _DAT_112f657d0,0);
  *(undefined8 *)(lVar19 + _DAT_112f657d8) = 0;
  lVar24 = _DAT_112f657e0;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  pcVar28 = pcVar16;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(code **)(lVar19 + lVar24) = pcVar28;
  *(undefined8 *)(lVar19 + _DAT_112f657e8) = uVar25;
  func_0x000107c61604(lVar19 + lVar27,lVar22);
  *(undefined8 *)(lVar19 + _DAT_112f657f0) = uVar21;
  *(undefined8 *)(lVar19 + _DAT_112f657f8) = uVar4;
  *(undefined8 *)(lVar19 + _DAT_112f65800) = uVar23;
  *(undefined **)(lVar19 + _DAT_112f65808) = puVar13;
  *(undefined8 *)(lVar19 + _DAT_112f65810) = uVar29;
  *(undefined8 *)(lVar19 + _DAT_112f65818) = uVar30;
  puVar1 = (undefined8 *)(lVar19 + _DAT_112f65820);
  *puVar1 = uVar2;
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar19 + _DAT_112f65828) = uVar17;
  *(undefined1 *)(lVar19 + _DAT_112f65830) = uVar6;
  *(code **)(lVar19 + _DAT_112f65838) = pcVar16;
  *(undefined1 *)(lVar19 + _DAT_112f65840) = uVar7;
  puVar14 = PTR_s_init_1125d9248;
  lStack_b8 = lVar19;
  lStack_b0 = lVar18;
  func_0x000107c61174(uVar25);
  func_0x000107c61174(uVar21);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar23);
  plVar20 = &lStack_b8;
  func_0x000107c61154(plVar20,puVar14);
  func_0x000107c61170(uVar25);
  func_0x000107c615e8(lVar22);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x38);
  *(long **)(unaff_x20 + 0x38) = plVar20;
  func_0x000107c61170(uVar21);
  lVar22 = *(long *)(unaff_x20 + 0x38);
  if (lVar22 != 0) {
    func_0x000107c61174();
    FUN_103404e0c();
    func_0x000107c61170(lVar22);
  }
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar9);
  func_0x000107c61574(pcVar16);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 1033fd02c; end: 1033fd05f;  */

void FUN_1033fd02c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x0001005f57cc();
  uVar2 = 0;
  (*(code *)&SUB_10450b3c8)();
  param_1[3] = uVar1;
  *param_1 = uVar2;
  return;
}



/* Entry: 1033fd060; end: 1033fd0a3;  */

void FUN_1033fd060(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x0001005f57cc();
  uVar2 = 0;
  (*param_3)();
  param_1[3] = uVar1;
  *param_1 = uVar2;
  return;
}



/* Entry: 1033fd0a4; end: 1033fd123;  */

undefined8 FUN_1033fd0a4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61180();
  func_0x000107c615e8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 1033fd124; end: 1033fd183;  */

void FUN_1033fd124(void)

{
  FUN_1033fca98();
  return;
}



/* Entry: 1033fd184; end: 1033fd19f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fd184(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11306fb48);
  return;
}



/* Entry: 1033fd1a0; end: 1033fd1bf;  */

void FUN_1033fd1a0(void)

{
  func_0x000107c61168(&PTR_PTR_112f64c88);
  return;
}



/* Entry: 1033fd1c0; end: 1033fd1c7;  */

void FUN_1033fd1c0(long param_1,long param_2)

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



/* Entry: 1033fd1c8; end: 1033fde1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033fd1c8(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  code *pcVar16;
  code *pcVar17;
  undefined8 uVar18;
  long lVar19;
  code *pcVar20;
  ulong auStack_70 [2];
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  uVar3 = *(ulong *)(param_2 + _DAT_113070400);
  uVar1 = ((ulong *)(param_2 + _DAT_113070400))[1];
  uVar2 = uVar3;
  func_0x000107c614f0();
  pcVar17 = *(code **)(uVar1 + 0x10);
  func_0x000107c615f0(uVar3);
  (*pcVar17)(uVar2,uVar1);
  func_0x000107c615e8(uVar3);
  if ((uVar2 & 1) == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
  }
  else {
    func_0x0001000d224c(auStack_70);
    uVar3 = auStack_70[0];
    func_0x000107c4b324();
    func_0x000107c615e8(auStack_70[0]);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
    }
    else {
      lVar4 = *(long *)(param_2 + _DAT_113070408);
      if (lVar4 == 0) {
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_5);
      }
      else {
        lVar19 = ((long *)(param_2 + _DAT_113070408))[1];
        func_0x000107c615f0();
        lVar5 = param_6;
        func_0x000107c4b2ec();
        func_0x000107c61180();
        lVar6 = lVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar6 != 0) {
          uVar13 = *(undefined8 *)(param_4 + _DAT_1130813f0);
          uVar14 = *(undefined8 *)(param_5 + _DAT_113036458);
          uVar15 = *(undefined8 *)(param_5 + _DAT_113036488);
          uVar18 = *(undefined8 *)(*(long *)(param_3 + _DAT_113070f98) + _DAT_113070f60);
          puVar7 = &UNK_1106505b0;
          func_0x000107c613fc(&UNK_1106505b0,0x18,7);
          func_0x000107c61614(puVar7 + 0x10,param_1);
          FUN_103414440(0);
          func_0x000107c613fc();
          uVar8 = param_8;
          FUN_103413f70(param_8);
          uVar9 = 0;
          func_0x000104343354(0);
          func_0x000107c613fc();
          pcVar17 = FUN_1033fde98;
          func_0x000104341f08(FUN_1033fde98,puVar7,0,0,uVar8,&PTR_DAT_110652230,uVar9);
          uVar9 = *(undefined8 *)(param_1 + _DAT_11306fb28);
          lVar5 = ((undefined8 *)(param_1 + _DAT_11306fb28))[1];
          func_0x000107c614f0(uVar9);
          pcVar20 = *(code **)(lVar5 + 8);
          func_0x000107c6157c(uVar13);
          func_0x000107c6157c(uVar14);
          func_0x000107c6157c(uVar15);
          func_0x000107c6157c(uVar18);
          func_0x000107c61174();
          (*pcVar20)(uVar9,lVar5);
          uVar8 = 0x112d5d480;
          func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
          pcVar20 = FUN_1033fdea0;
          func_0x0001000bfde0(FUN_1033fdea0,0,uVar8);
          func_0x000107c61574(uVar9);
          func_0x000107c61580(uVar14,3);
          func_0x000107c6157c(uVar13);
          func_0x000107c6157c(uVar15);
          func_0x000107c6157c(uVar18);
          func_0x000107c6157c(pcVar17);
          lVar5 = lVar6;
          func_0x000107c4c18c();
          func_0x000107c61180();
          func_0x000103417d80(0);
          func_0x000107c613fc();
          func_0x000107c6157c(pcVar20);
          uVar10 = uVar18;
          func_0x0001034162e4(uVar18,pcVar17,&PTR_DAT_11075cab0,FUN_1033fe014,uVar14,FUN_1033fe06c,
                              uVar14,0x1033fe074,uVar14,FUN_1033fe0e8,uVar13,FUN_1033fe140,uVar15,
                              lVar5,pcVar20,&UNK_102a3f210,0);
          func_0x000107c6157c();
          uVar11 = param_7;
          func_0x000107c5c360(param_7);
          func_0x000107c61180();
          uVar8 = *(undefined8 *)(param_2 + _DAT_113070410);
          uVar9 = ((undefined8 *)(param_2 + _DAT_113070410))[1];
          FUN_1034151f0(0);
          func_0x000107c613fc();
          func_0x000107c615f0(uVar8);
          func_0x000107c615f4(lVar4,2);
          uVar12 = uVar10;
          func_0x000103414904(uVar10,&PTR_DAT_1106527e0,uVar11,uVar8,uVar9,lVar4,lVar19);
          func_0x000107c614f0(lVar4);
          pcVar16 = *(code **)(lVar19 + 0x18);
          func_0x000107c6157c(uVar12);
          (*pcVar16)();
          func_0x000107c615e8(lVar4);
          func_0x000107c61574(uVar12);
          func_0x000107c61170(param_2);
          func_0x000107c61170(param_5);
          func_0x000107c61170(param_4);
          func_0x000107c61170(param_3);
          func_0x000107c61170(param_1);
          func_0x000107c615e8(lVar6);
          func_0x000107c61170(param_6);
          func_0x000107c61170(param_7);
          func_0x000107c61170(param_8);
          func_0x000107c61574(pcVar20);
          func_0x000107c61574(uVar15);
          func_0x000107c61574(uVar13);
          func_0x000107c61574(uVar14);
          func_0x000107c61574(pcVar17);
          func_0x000107c61574(uVar18);
          *(long *)(unaff_x20 + 0x10) = lVar4;
          *(long *)(unaff_x20 + 0x18) = lVar19;
          *(undefined8 *)(unaff_x20 + 0x20) = uVar10;
          *(undefined8 *)(unaff_x20 + 0x28) = uVar12;
          return unaff_x20;
        }
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_5);
      }
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
    }
  }
  func_0x000107c61170(param_8);
  return unaff_x20;
}



/* Entry: 1033fde20; end: 1033fde97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033fde20(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11306fb08);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_1);
  }
  return uVar1;
}



/* Entry: 1033fde98; end: 1033fde9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033fde98(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11306fb08);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
  }
  return uVar2;
}



/* Entry: 1033fdea0; end: 1033fe013;  */

void FUN_1033fdea0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar18 = param_2[2];
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((uint)((ulong)uVar18 >> 0x3d) - 1 < 3) {
    uVar1 = param_2[0xb];
    uVar7 = param_2[0xc];
    uVar2 = param_2[9];
    uVar8 = param_2[10];
    uVar3 = param_2[7];
    uVar9 = param_2[8];
    uVar4 = param_2[5];
    uVar10 = param_2[6];
    uVar5 = param_2[3];
    uVar11 = param_2[4];
    uVar6 = *param_2;
    uVar12 = param_2[1];
    puVar13 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(puVar13 + 0x18) = 2;
    *(undefined8 *)(puVar13 + 0x10) = 1;
    uVar17 = uVar12;
    func_0x000102e1264c(uVar6,uVar12,uVar18,uVar5,uVar11,uVar4,uVar10,uVar3,uVar9,uVar2,uVar8,uVar1,
                        uVar7);
    uVar14 = uVar6;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar15 = uVar14;
    func_0x000107c5faec();
    func_0x000102e17c90(uVar6,uVar12,uVar18,uVar5,uVar11,uVar4,uVar10,uVar3,uVar9,uVar2,uVar8,uVar1,
                        uVar7);
    func_0x000107c61170(uVar14);
    *(undefined8 *)(puVar13 + 0x20) = uVar15;
    *(undefined8 *)(puVar13 + 0x28) = uVar17;
  }
  puVar16 = puVar13;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar13);
  *param_1 = puVar16;
  return;
}



/* Entry: 1033fe014; end: 1033fe017;  */

undefined8 FUN_1033fe014(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c49fa0(uStack_28,param_2,param_1,0);
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 1033fe018; end: 1033fe06b;  */

uint FUN_1033fe018(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c49fa0(uStack_28);
  func_0x000107c615e8(uStack_28);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1033fe06c; end: 1033fe077;  */

uint FUN_1033fe06c(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c49fa0(uStack_28);
  func_0x000107c615e8(uStack_28);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1033fe078; end: 1033fe0e7;  */

undefined8 FUN_1033fe078(undefined8 param_1)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0xd0))(uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return param_1;
}



/* Entry: 1033fe0e8; end: 1033fe0ef;  */

undefined8 FUN_1033fe0e8(undefined8 param_1)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0xd0))(uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return param_1;
}



/* Entry: 1033fe0f0; end: 1033fe13f;  */

undefined8 FUN_1033fe0f0(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4b314(uStack_28);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 1033fe140; end: 1033fe147;  */

undefined8 FUN_1033fe140(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4b314(uStack_28);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 1033fe148; end: 1033fe22f;  */

undefined8 FUN_1033fe148(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x28);
  if (lVar3 != 0) {
    func_0x000107c6157c(lVar3);
    func_0x000103414a78();
    func_0x000107c61574(lVar3);
    lVar3 = *(long *)(unaff_x20 + 0x28);
    if ((lVar3 != 0) && (lVar4 = *(long *)(unaff_x20 + 0x10), lVar4 != 0)) {
      lVar5 = *(long *)(unaff_x20 + 0x18);
      lVar1 = lVar4;
      func_0x000107c614f0(lVar4);
      pcVar6 = *(code **)(lVar5 + 0x20);
      func_0x000107c6157c(lVar3);
      func_0x000107c615f0(lVar4);
      (*pcVar6)(lVar3,&PTR_DAT_110652310,lVar1,lVar5);
      func_0x000107c615e8(lVar4);
      func_0x000107c61574(lVar3);
    }
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (lVar3 != 0) {
    func_0x000107c6157c(lVar3);
    FUN_103416fd8();
    func_0x000107c61574(lVar3);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  func_0x000107c61574(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  func_0x000107c61574(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c615e8(uVar2);
  return 0;
}



/* Entry: 1033fe230; end: 1033fe263;  */

void FUN_1033fe230(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033fe264; end: 1033fe267;  */

void FUN_1033fe264(void)

{
  return;
}



/* Entry: 1033fe268; end: 1033fe327;  */

undefined8 FUN_1033fe268(void)

{
  FUN_1033fe148();
  return 0;
}



/* Entry: 1033fe328; end: 1033fe347;  */

void FUN_1033fe328(void)

{
  func_0x000107c61168(&PTR_PTR_112f64d50);
  return;
}



/* Entry: 1033fe348; end: 1033fe35f;  */

undefined8 FUN_1033fe348(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c49fa0(uStack_28,param_2,param_1,0);
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 1033fe360; end: 1033fe3b7;  */

void FUN_1033fe360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170(param_2);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 1033fe3b8; end: 1033fe66b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1033fe3b8(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar8 = _DAT_11306fb30;
  lVar1 = _DAT_11306fb28;
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_11306fbe8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_11306fa40);
  func_0x0001000285a8(0x112f64dc0,&UNK_10dbc1380);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar6);
  uVar12 = ((undefined8 *)(lVar9 + lVar1))[1];
  uVar10 = *(undefined8 *)(lVar9 + lVar1);
  func_0x000107c615f0(uVar10);
  uVar13 = ((undefined8 *)(lVar9 + lVar8))[1];
  uVar11 = *(undefined8 *)(lVar9 + lVar8);
  func_0x000107c615f0(uVar11);
  func_0x000107c6157c(uVar5);
  pcVar2 = FUN_1033fe66c;
  func_0x0001000bdd8c(FUN_1033fe66c,0);
  puVar3 = &UNK_1106505f8;
  func_0x000107c613fc(&UNK_1106505f8,0x50,7);
  *(code **)(puVar3 + 0x10) = pcVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x30) = uVar13;
  *(undefined8 *)(puVar3 + 0x28) = uVar11;
  *(undefined8 *)(puVar3 + 0x40) = uVar12;
  *(undefined8 *)(puVar3 + 0x38) = uVar10;
  *(undefined8 *)(puVar3 + 0x48) = uVar5;
  func_0x0001000285a8(0x112f64dc8,&UNK_10dbc1388);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar6);
  func_0x000107c615f0(uVar10);
  func_0x000107c615f0(uVar11);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar2);
  func_0x000107c61174(uVar7);
  pcVar4 = FUN_1033fe850;
  func_0x0001000bdd8c(FUN_1033fe850,puVar3);
  lVar1 = _DAT_11306fb60;
  func_0x000107c61428(lVar9 + _DAT_11306fb60,auStack_78,1,0);
  uVar7 = *(undefined8 *)(lVar9 + lVar1);
  *(code **)(lVar9 + lVar1) = pcVar4;
  func_0x000107c6157c(pcVar4);
  func_0x000107c61574(uVar7);
  lVar1 = _DAT_11306fb58;
  lVar8 = *(long *)(lVar9 + _DAT_11306fb58);
  func_0x000107c61428(lVar8 + 0x10,auStack_90,1,0);
  uVar7 = *(undefined8 *)(lVar8 + 0x10);
  uVar12 = *(undefined8 *)(lVar8 + 0x18);
  *(code **)(lVar8 + 0x10) = FUN_1033fed60;
  *(code **)(lVar8 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(lVar8);
  func_0x000100d47950(uVar7,uVar12);
  func_0x000107c61574(lVar8);
  lVar9 = *(long *)(lVar9 + lVar1);
  func_0x000107c61428(lVar9 + 0x20,auStack_a8,1,0);
  uVar7 = *(undefined8 *)(lVar9 + 0x20);
  uVar12 = *(undefined8 *)(lVar9 + 0x28);
  *(code **)(lVar9 + 0x20) = FUN_1033fed68;
  *(code **)(lVar9 + 0x28) = pcVar4;
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(lVar9);
  func_0x000100d47950(uVar7,uVar12);
  func_0x000107c61574(lVar9);
  uVar7 = 0;
  func_0x000104348d68(0);
  func_0x000107c610f8();
  func_0x000104348c6c(pcVar4,pcVar2,uVar7);
  func_0x000107c61574(uVar6);
  func_0x000107c615e8(uVar10);
  func_0x000107c615e8(uVar11);
  func_0x000107c61574(uVar5);
  return pcVar4;
}



/* Entry: 1033fe66c; end: 1033fe6b7;  */

void FUN_1033fe66c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000104348e14();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  func_0x000107c61614(lVar1 + 0x10,0);
  *(undefined1 *)(lVar1 + 0x20) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1033fe6b8; end: 1033fe84f;  */

void FUN_1033fe6b8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uStack_68;
  
  func_0x0001000d224c(&uStack_68);
  puVar1 = &UNK_110650620;
  func_0x000107c613fc(&UNK_110650620,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_8;
  *(undefined8 *)(puVar1 + 0x40) = param_9;
  uVar2 = 0x112f64dc8;
  func_0x0001000285a8(0x112f64dc8,&UNK_10dbc1388);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_7);
  func_0x000107c6157c(param_9);
  pcVar3 = FUN_1033feed0;
  func_0x0001000bdd8c(FUN_1033feed0,puVar1);
  puVar1 = &UNK_110650648;
  func_0x000107c613fc(&UNK_110650648,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = uStack_68;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c613fc(uVar2,0x18,7);
  func_0x000107c6157c(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_7);
  func_0x000107c6157c(uStack_68);
  uVar2 = 0x1033feee4;
  func_0x0001000bdd8c(0x1033feee4,puVar1);
  lVar4 = 0;
  func_0x0001033fa8cc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uStack_68;
  *(code **)(lVar4 + 0x18) = pcVar3;
  *(undefined8 *)(lVar4 + 0x20) = uVar2;
  *param_1 = lVar4;
  return;
}



/* Entry: 1033fe850; end: 1033fe863;  */

void FUN_1033fe850(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x0001000d224c(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10));
  puVar8 = &UNK_110650620;
  func_0x000107c613fc(&UNK_110650620,0x48,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar4;
  *(undefined8 *)(puVar8 + 0x18) = uVar1;
  *(undefined8 *)(puVar8 + 0x20) = uVar5;
  *(undefined8 *)(puVar8 + 0x28) = uVar2;
  *(undefined8 *)(puVar8 + 0x30) = uVar6;
  *(undefined8 *)(puVar8 + 0x38) = uVar3;
  *(undefined8 *)(puVar8 + 0x40) = uVar7;
  uVar9 = 0x112f64dc8;
  func_0x0001000285a8(0x112f64dc8,&UNK_10dbc1388);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c6157c(uVar1);
  func_0x000107c615f0(uVar5);
  func_0x000107c615f0(uVar6);
  func_0x000107c6157c(uVar7);
  pcVar10 = FUN_1033feed0;
  func_0x0001000bdd8c(FUN_1033feed0,puVar8);
  puVar8 = &UNK_110650648;
  func_0x000107c613fc(&UNK_110650648,0x40,7);
  *(undefined8 *)(puVar8 + 0x10) = uStack_68;
  *(undefined8 *)(puVar8 + 0x18) = uVar1;
  *(undefined8 *)(puVar8 + 0x20) = uVar6;
  *(undefined8 *)(puVar8 + 0x28) = uVar3;
  *(undefined8 *)(puVar8 + 0x30) = uVar5;
  *(undefined8 *)(puVar8 + 0x38) = uVar2;
  func_0x000107c613fc(uVar9,0x18,7);
  func_0x000107c6157c(uVar1);
  func_0x000107c615f0(uVar5);
  func_0x000107c615f0(uVar6);
  func_0x000107c6157c(uStack_68);
  uVar9 = 0x1033feee4;
  func_0x0001000bdd8c(0x1033feee4,puVar8);
  lVar11 = 0;
  func_0x0001033fa8cc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar11 + 0x10) = uStack_68;
  *(code **)(lVar11 + 0x18) = pcVar10;
  *(undefined8 *)(lVar11 + 0x20) = uVar9;
  *param_1 = lVar11;
  return;
}



/* Entry: 1033fe864; end: 1033fece7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fe864(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined1 *puVar9;
  long *plVar10;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar11;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 uStack_b9;
  undefined8 auStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  
  uStack_e8 = param_5;
  uStack_e0 = param_7;
  puStack_d8 = param_1;
  func_0x0001000d224c(&uStack_68);
  uVar2 = uStack_68;
  func_0x000107c4facc();
  uStack_f0._4_4_ = (undefined4)uVar2;
  func_0x000107c615e8(uStack_68);
  puVar3 = PTR_PTR_1126ad218;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = 0;
  func_0x000103409520();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined **)(lVar5 + 0x10) = puVar3;
  ppuStack_70 = &PTR_DAT_110651380;
  lVar6 = 0;
  alStack_90[0] = lVar5;
  lStack_78 = lVar4;
  FUN_1033f9da4();
  lVar7 = lVar6;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_90,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar11 = (undefined8 *)((long)&uStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar11);
  lVar1 = _DAT_112f64830;
  auStack_b8[0] = *puVar11;
  ppuStack_98 = &PTR_DAT_110651380;
  lStack_a0 = lVar4;
  func_0x000107c6157c(lVar5);
  pcVar8 = "PlayGamesSnapCapturingImpl";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar7 + lVar1) = pcVar8;
  *(undefined8 *)(lVar7 + _DAT_112f64838) = 0;
  lVar1 = _DAT_112f64840;
  uStack_b9 = 0;
  uVar2 = 0x112d382e0;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar9 = &uStack_b9;
  func_0x00010006c248();
  *(undefined1 **)(lVar7 + lVar1) = puVar9;
  *(undefined1 *)(lVar7 + _DAT_112f64848) = 0;
  *(undefined8 *)(lVar7 + _DAT_112f64850) = 0;
  *(undefined8 *)(lVar7 + _DAT_112f64858) = 0;
  lVar1 = _DAT_112f64860;
  uStack_b9 = 0;
  func_0x000107c613fc(uVar2,0x19,7);
  puVar9 = &uStack_b9;
  func_0x00010006c248();
  *(undefined1 **)(lVar7 + lVar1) = puVar9;
  lVar1 = lVar7 + _DAT_112f64868;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(lVar7 + _DAT_112f64800) = param_2;
  *(undefined8 *)(lVar7 + _DAT_112f64808) = param_3;
  puVar11 = (undefined8 *)(lVar7 + _DAT_112f64810);
  *puVar11 = param_4;
  puVar11[1] = uStack_e8;
  puVar11 = (undefined8 *)(lVar7 + _DAT_112f64818);
  *puVar11 = param_6;
  puVar11[1] = uStack_e0;
  *(char *)(lVar7 + _DAT_112f64820) = (char)uStack_f0._4_4_;
  FUN_1033feef4(auStack_b8,lVar7 + _DAT_112f64828);
  puVar3 = PTR_s_init_1125d9248;
  lStack_d0 = lVar7;
  lStack_c8 = lVar6;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_6);
  plVar10 = &lStack_d0;
  func_0x000107c61154(plVar10,puVar3);
  func_0x000107c61574(lVar5);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(alStack_90);
  *puStack_d8 = plVar10;
  return;
}



/* Entry: 1033fece8; end: 1033fed5f;  */

void FUN_1033fece8(long param_1)

{
  undefined8 uStack_28;
  
  if (param_1 == 0) {
    func_0x0001000d224c(&uStack_28);
    func_0x000107c3f5a8(uStack_28);
    func_0x000107c615e8(uStack_28);
  }
  else {
    func_0x000107c61174();
    func_0x0001000d224c(&uStack_28);
    func_0x000107c3f5b0(uStack_28);
    func_0x000107c615e8(uStack_28);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1033fed60; end: 1033fed67;  */

void FUN_1033fed60(long param_1)

{
  undefined8 uStack_28;
  
  if (param_1 == 0) {
    func_0x0001000d224c(&uStack_28);
    func_0x000107c3f5a8(uStack_28);
    func_0x000107c615e8(uStack_28);
  }
  else {
    func_0x000107c61174();
    func_0x0001000d224c(&uStack_28);
    func_0x000107c3f5b0(uStack_28);
    func_0x000107c615e8(uStack_28);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1033fed68; end: 1033feda3;  */

void FUN_1033fed68(void)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  func_0x000107c3f4fc(uStack_28);
  func_0x000107c615e8(uStack_28);
  return;
}



/* Entry: 1033feda4; end: 1033fedcf;  */

/* WARNING: Possible PIC construction at 0x0001033fedb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033fedc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033fedb4) */
/* WARNING: Removing unreachable block (ram,0x0001033fedc4) */

void FUN_1033feda4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1033fedd0; end: 1033fee2b;  */

void FUN_1033fedd0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033fee2c; end: 1033feeab;  */

void FUN_1033fee2c(undefined8 param_1)

{
  if (lRam0000000112f64df8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e762e38);
  return;
}



/* Entry: 1033feeac; end: 1033feecf;  */

void FUN_1033feeac(undefined8 *param_1,undefined8 param_2)

{
  FUN_1033fe3b8();
  *param_1 = param_2;
  return;
}



/* Entry: 1033feed0; end: 1033feef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033feed0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined1 *puVar13;
  long *plVar14;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar15;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 uStack_b9;
  undefined8 auStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x38);
  puStack_d8 = param_1;
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  func_0x000107c4facc();
  uStack_f0._4_4_ = (undefined4)uVar6;
  func_0x000107c615e8(uStack_68);
  puVar7 = PTR_PTR_1126ad218;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar8 = 0;
  func_0x000103409520();
  lVar9 = lVar8;
  func_0x000107c613fc();
  *(undefined **)(lVar9 + 0x10) = puVar7;
  ppuStack_70 = &PTR_DAT_110651380;
  lVar10 = 0;
  alStack_90[0] = lVar9;
  lStack_78 = lVar8;
  FUN_1033f9da4();
  lVar11 = lVar10;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_90,lVar8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar15 = (undefined8 *)((long)&uStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar15);
  lVar1 = _DAT_112f64830;
  auStack_b8[0] = *puVar15;
  ppuStack_98 = &PTR_DAT_110651380;
  lStack_a0 = lVar8;
  func_0x000107c6157c(lVar9);
  pcVar12 = "PlayGamesSnapCapturingImpl";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar11 + lVar1) = pcVar12;
  *(undefined8 *)(lVar11 + _DAT_112f64838) = 0;
  lVar1 = _DAT_112f64840;
  uStack_b9 = 0;
  uVar6 = 0x112d382e0;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar13 = &uStack_b9;
  func_0x00010006c248();
  *(undefined1 **)(lVar11 + lVar1) = puVar13;
  *(undefined1 *)(lVar11 + _DAT_112f64848) = 0;
  *(undefined8 *)(lVar11 + _DAT_112f64850) = 0;
  *(undefined8 *)(lVar11 + _DAT_112f64858) = 0;
  lVar1 = _DAT_112f64860;
  uStack_b9 = 0;
  func_0x000107c613fc(uVar6,0x19,7);
  puVar13 = &uStack_b9;
  func_0x00010006c248();
  *(undefined1 **)(lVar11 + lVar1) = puVar13;
  lVar1 = lVar11 + _DAT_112f64868;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(lVar11 + _DAT_112f64800) = uVar2;
  *(undefined8 *)(lVar11 + _DAT_112f64808) = uVar5;
  puVar15 = (undefined8 *)(lVar11 + _DAT_112f64810);
  *puVar15 = uVar3;
  puVar15[1] = uStack_e8;
  puVar15 = (undefined8 *)(lVar11 + _DAT_112f64818);
  *puVar15 = uVar4;
  puVar15[1] = uStack_e0;
  *(char *)(lVar11 + _DAT_112f64820) = (char)uStack_f0._4_4_;
  FUN_1033feef4(auStack_b8,lVar11 + _DAT_112f64828);
  puVar7 = PTR_s_init_1125d9248;
  lStack_d0 = lVar11;
  lStack_c8 = lVar10;
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c615f0(uVar3);
  func_0x000107c615f0(uVar4);
  plVar14 = &lStack_d0;
  func_0x000107c61154(plVar14,puVar7);
  func_0x000107c61574(lVar9);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(alStack_90);
  *puStack_d8 = plVar14;
  return;
}



/* Entry: 1033feef4; end: 1033fef37;  */

long FUN_1033feef4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101751efc; end: 101751fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101751efc(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112dc66e8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101751fd8);
    (*pcVar1)();
  }
  uVar3 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010efba5c0);
  uVar4 = uVar2;
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar3);
  if (uVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar4;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar4);
    uVar4 = uVar2;
    func_0x000107c49804();
    func_0x000107c61170(uVar2);
    uVar2 = uVar4 & 0xffffffff;
    if (2 < (int)uVar4 - 1U) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 101751fd8; end: 10175200b; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl musicCameraSnapEditorActionBar] */

undefined8 FUN_101751fd8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101751efc();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10175200c; end: 1017520af; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl disableFixForPreviewMusicSelectionOnCaptureCancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10175200c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_112dc66e8);
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar2 = 0xd000000000000039;
    func_0x000107c5fadc(0xd000000000000039,0x800000010efba580);
    lVar3 = lVar4;
    func_0x000107c3ebd4(lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar2);
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1017520b0);
  (*pcVar1)();
}



/* Entry: 1017520b0; end: 101752153; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl snapEditorDestroyValdiContextOnDismissEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1017520b0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_112dc66e8);
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar2 = 0xd000000000000034;
    func_0x000107c5fadc(0xd000000000000034,0x800000010efba540);
    lVar3 = lVar4;
    func_0x000107c3ebd4(lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar2);
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101752154);
  (*pcVar1)();
}



/* Entry: 101752154; end: 1017521f7; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl snapEditorSkipStalePresentEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101752154(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_112dc66e8);
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar2 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010efba510);
    lVar3 = lVar4;
    func_0x000107c3ebd4(lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar2);
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1017521f8);
  (*pcVar1)();
}



/* Entry: 1017521f8; end: 10175229b; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl snapEditorPrewarmUploadEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1017521f8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_112dc66e8);
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar2 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010efba4f0);
    lVar3 = lVar4;
    func_0x000107c3ebd4(lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar2);
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10175229c);
  (*pcVar1)();
}



/* Entry: 10175229c; end: 1017524cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10175229c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long alStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  puVar1 = PTR_PTR_1126a7ad0;
  func_0x000107c61168();
  func_0x000107c5b264();
  lVar5 = _DAT_112dc66f0;
  uVar7 = 0;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112dc66f0);
  func_0x000107c6157c(uVar9);
  func_0x0001000c74f0(alStack_80);
  func_0x000107c61574(uVar9);
  lVar2 = alStack_80[0];
  if (*(long *)(alStack_80[0] + 0x10) == 0) {
    func_0x000107c6142c(alStack_80[0]);
    if (puVar1 != (undefined *)0x0) goto LAB_101752348;
LAB_101752380:
    lVar2 = *(long *)(unaff_x20 + _DAT_112dc66e8);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1017524cc);
      (*pcVar4)();
    }
    uVar9 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efba4c0);
    lVar3 = lVar2;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar9);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar5);
    uStack_70 = 0xd000000000000028;
    uStack_68 = 0x800000010efba4c0;
    uStack_60 = (undefined1)lVar3;
    func_0x000107c6157c(uVar9);
    pcVar4 = (code *)0x101752f5c;
  }
  else {
    func_0x000107c61434(alStack_80[0]);
    uVar6 = uVar7;
    func_0x000100029284(0xd000000000000028);
    func_0x000107c61430(lVar2,2);
    if ((uVar6 & 1) != 0) goto LAB_10175243c;
    if (puVar1 == (undefined *)0x0) goto LAB_101752380;
LAB_101752348:
    if (puVar1 == (undefined *)0x1) {
      uVar9 = *(undefined8 *)(unaff_x20 + lVar5);
      uStack_70 = 0xd000000000000028;
      uStack_68 = 0x800000010efba4c0;
      func_0x000107c6157c(uVar9);
      pcVar4 = (code *)0x101752f48;
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x20 + lVar5);
      uStack_70 = 0xd000000000000028;
      uStack_68 = 0x800000010efba4c0;
      func_0x000107c6157c(uVar9);
      pcVar4 = FUN_101752f34;
    }
  }
  func_0x000100075034(pcVar4,alStack_80,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar9);
LAB_10175243c:
  uVar9 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c6157c(uVar9);
  func_0x0001000c74f0(alStack_80);
  func_0x000107c61574(uVar9);
  if (*(long *)(alStack_80[0] + 0x10) == 0) {
    uVar8 = 0;
  }
  else {
    func_0x000107c61434(alStack_80[0]);
    lVar5 = -0x2fffffffffffffd8;
    func_0x000100029284();
    if ((uVar7 & 1) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined1 *)(*(long *)(alStack_80[0] + 0x38) + lVar5);
    }
    func_0x000107c6142c(alStack_80[0]);
  }
  func_0x000107c6142c(alStack_80[0]);
  return uVar8;
}



/* Entry: 1017524cc; end: 1017524ff; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl snapEditorMemoriesCameraRollEnabled] */

uint FUN_1017524cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10175229c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101752500; end: 1017525cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101752500(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc66e8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0xd00000000000003a;
    func_0x000107c5fadc(0xd00000000000003a,0x800000010efba480);
    lVar4 = lVar2;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    if (lVar4 == 0) {
      lVar2 = 1;
    }
    else {
      lVar5 = lVar4;
      func_0x000107c5dc0c(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      lVar2 = lVar5;
      func_0x000107c3ebcc(lVar5);
      func_0x000107c61170(lVar5);
    }
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1017525d0);
  (*pcVar1)();
}



/* Entry: 1017525d0; end: 101752603; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl navigateToSpotlightAfterPostFromOpera] */

uint FUN_1017525d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101752500();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101752604; end: 1017526d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101752604(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc66e8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0xd00000000000003d;
    func_0x000107c5fadc(0xd00000000000003d,0x800000010efba440);
    lVar4 = lVar2;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    if (lVar4 == 0) {
      lVar2 = 1;
    }
    else {
      lVar5 = lVar4;
      func_0x000107c5dc0c(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      lVar2 = lVar5;
      func_0x000107c3ebcc(lVar5);
      func_0x000107c61170(lVar5);
    }
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1017526d4);
  (*pcVar1)();
}



/* Entry: 1017526d4; end: 101752707; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl navigateToSpotlightAfterPostFromMainCam] */

uint FUN_1017526d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101752604();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101752708; end: 10175277f; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl sendPreuploadEnabled] */

uint FUN_101752708(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126a7ad0;
  func_0x000107c61168(PTR_PTR_1126a7ad0);
  func_0x000107c61174(param_1);
  func_0x000107c5b290(puVar2);
  uVar1 = (uint)puVar2;
  FUN_1017505e4();
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101752780; end: 101752823; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl sendToChatSentToastEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101752780(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_112dc66e8);
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar2 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010efba3e0);
    lVar3 = lVar4;
    func_0x000107c3ebd4(lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar2);
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101752824);
  (*pcVar1)();
}



/* Entry: 101752824; end: 101752883; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl init] */

void FUN_101752824(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorTweakServiceProvider.SnapEditorTweaksImpl",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101752850);
  (*pcVar1)();
}



/* Entry: 101752884; end: 1017528bb; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101752884(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dc66e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc66f0));
  return;
}



/* Entry: 1017528bc; end: 1017528ff;  */

void FUN_1017528bc(undefined8 param_1)

{
  FUN_101752e4c(param_1,0);
  return;
}



/* Entry: 101752900; end: 101752bb7;  */

void FUN_101752900(byte param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1017529d4);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    FUN_101752bb8(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1017529a0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000101752a50();
    lVar6 = *unaff_x20;
    goto joined_r0x0001017529e8;
  }
  lVar6 = *unaff_x20;
joined_r0x0001017529e8:
  if ((uVar4 & 1) != 0) {
    *(byte *)(*(long *)(lVar6 + 0x38) + uVar3) = param_1 & 1;
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(byte *)(*(long *)(lVar6 + 0x38) + uVar3) = param_1 & 1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101752a50);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101752bb8; end: 101752e4b;  */

void FUN_101752bb8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *unaff_x20;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar16 = *unaff_x20;
  lVar1 = *(long *)(lVar16 + 0x18);
  if (*(long *)(lVar16 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar7 = 0x112d7e670;
  func_0x0001000285a8(0x112d7e670,&UNK_10d9e4e40);
  lVar8 = lVar16;
  func_0x000107c60490(lVar16,lVar1,param_2,uVar7);
  if (*(long *)(lVar16 + 0x10) == 0) {
LAB_101752e18:
    func_0x000107c61574(lVar16);
    *unaff_x20 = lVar8;
    return;
  }
  puVar18 = (ulong *)(lVar16 + 0x40);
  uVar13 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar8 + 0x40;
  lVar11 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101752e48);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
            if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar16 + 0x10) = 0;
          }
          goto LAB_101752e18;
        }
        uVar17 = puVar18[lVar19];
        lVar11 = lVar11 + 1;
      } while (uVar17 == 0);
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x30) + uVar10 * 0x10);
    uVar7 = *puVar2;
    uVar3 = puVar2[1];
    uVar4 = *(undefined1 *)(*(long *)(lVar16 + 0x38) + uVar10);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar8 + 0x28));
    puVar9 = auStack_a8;
    func_0x000107c5fb58(puVar9,uVar7,uVar3);
    func_0x000107c606a8();
    uVar15 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar14 = (ulong)puVar9 & (uVar15 ^ 0xffffffffffffffff);
    uVar12 = uVar14 >> 6;
    uVar10 = -1L << (uVar14 & 0x3f) & (*(ulong *)(lVar1 + uVar12 * 8) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar5 = false;
      uVar10 = 0x3f - uVar15 >> 6;
      do {
        uVar14 = uVar12 + 1;
        if ((uVar14 == uVar10) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101752e4c);
          (*pcVar6)();
        }
        uVar12 = 0;
        if (uVar14 != uVar10) {
          uVar12 = uVar14;
        }
        bVar5 = (bool)(uVar14 == uVar10 | bVar5);
        uVar14 = *(ulong *)(lVar1 + uVar12 * 8);
      } while (uVar14 == 0xffffffffffffffff);
      uVar14 = ~uVar14;
      uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar12);
    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar10 * 0x10);
    *puVar2 = uVar7;
    puVar2[1] = uVar3;
    *(undefined1 *)(*(long *)(lVar8 + 0x38) + uVar10) = uVar4;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar11 = lVar19;
  } while( true );
}



/* Entry: 101752e4c; end: 101752ebf;  */

void FUN_101752e4c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *param_1;
  func_0x000107c61558(uVar3);
  uVar4 = *param_1;
  FUN_101752900(param_2,uVar1,uVar2,uVar3);
  *param_1 = uVar4;
  return;
}



/* Entry: 101752ec0; end: 101752f33;  */

void FUN_101752ec0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar4 = *param_1;
  func_0x000107c61558(uVar4);
  uVar5 = *param_1;
  FUN_101752900(uVar3,uVar1,uVar2,uVar4);
  *param_1 = uVar5;
  return;
}



/* Entry: 101752f34; end: 101752fab;  */

void FUN_101752f34(void)

{
  FUN_1017528bc();
  return;
}



/* Entry: 101752fac; end: 10175302f;  */

void FUN_101752fac(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c50944();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126a7ad8;
    func_0x000107c610f8();
    func_0x000107c48234();
    func_0x000107c61170(lVar2);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101753030);
  (*pcVar1)();
}



/* Entry: 101753030; end: 101753047;  */

void FUN_101753030(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c50944();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126a7ad8;
    func_0x000107c610f8();
    func_0x000107c48234();
    func_0x000107c61170(lVar2);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101753030);
  (*pcVar1)();
}



/* Entry: 101753048; end: 1017530cb;  */

void FUN_101753048(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c50944();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126a7ae0;
    func_0x000107c610f8();
    func_0x000107c48234();
    func_0x000107c61170(lVar2);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1017530cc);
  (*pcVar1)();
}



/* Entry: 1017530cc; end: 1017530e3;  */

void FUN_1017530cc(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c50944();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126a7ae0;
    func_0x000107c610f8();
    func_0x000107c48234();
    func_0x000107c61170(lVar2);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1017530cc);
  (*pcVar1)();
}



/* Entry: 1017530e4; end: 101753157;  */

void FUN_1017530e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5b1d4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  FUN_10175627c(0);
  func_0x000107c610f8();
  func_0x000101754430();
  *param_1 = uVar1;
  return;
}



/* Entry: 101753158; end: 10175316f;  */

void FUN_101753158(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5b1d4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  FUN_10175627c(0);
  func_0x000107c610f8();
  func_0x000101754430();
  *param_1 = uVar1;
  return;
}



/* Entry: 101753170; end: 1017531cf;  */

void FUN_101753170(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a7ae8;
  func_0x000107c610f8();
  func_0x000107c45ac0();
  func_0x000107c61170(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1017531d0; end: 1017531e7;  */

void FUN_1017531d0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a7ae8;
  func_0x000107c610f8();
  func_0x000107c45ac0();
  func_0x000107c61170(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1017531e8; end: 10175328b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017531e8(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_113091ad8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_38);
  uVar3 = uVar2;
  func_0x000107c451e0(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar4 = PTR_PTR_1126a7af0;
  func_0x000107c610f8();
  func_0x000107c47fd4();
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c61170(uVar3);
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10175328c);
  (*pcVar1)();
}



/* Entry: 10175328c; end: 1017532d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175328c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_113091ad8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_38);
  uVar3 = uVar2;
  func_0x000107c451e0(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar4 = PTR_PTR_1126a7af0;
  func_0x000107c610f8();
  func_0x000107c47fd4();
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c61170(uVar3);
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10175328c);
  (*pcVar1)();
}



/* Entry: 1017532d4; end: 1017533db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017532d4(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  uVar2 = *(undefined8 *)(lStack_48 + _DAT_112fbabe0);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_48);
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c5dbd4(uStack_50);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000100083b20(&uStack_58);
  uVar4 = uStack_58;
  func_0x000107c3dae4(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  puVar5 = PTR_PTR_1126a7b00;
  func_0x000107c610f8();
  func_0x000107c45e90();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (puVar5 != (undefined *)0x0) {
    *param_1 = puVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1017533dc);
  (*pcVar1)();
}



/* Entry: 1017533dc; end: 101753417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017533dc(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  uVar2 = *(undefined8 *)(lStack_48 + _DAT_112fbabe0);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_48);
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c5dbd4(uStack_50);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000100083b20(&uStack_58);
  uVar4 = uStack_58;
  func_0x000107c3dae4(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  puVar5 = PTR_PTR_1126a7b00;
  func_0x000107c610f8();
  func_0x000107c45e90();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (puVar5 != (undefined *)0x0) {
    *param_1 = puVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1017533dc);
  (*pcVar1)();
}



/* Entry: 101753418; end: 10175398b;  */

void FUN_101753418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar2 = &UNK_110403498;
  func_0x000107c613fc(&UNK_110403498,0x38,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
  puVar3 = &UNK_1104034c0;
  func_0x000107c613fc(&UNK_1104034c0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x101757210;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  uStack_70 = 0x101757204;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10006eb60;
  puStack_78 = &UNK_1104034d8;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c61434(param_4);
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  func_0x00010006eaa4(uVar6,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  puVar5 = puVar3;
  func_0x000107c61544(puVar3,"",0x68,0x31,0x18,1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10175357c);
  (*pcVar1)();
}



/* Entry: 10175398c; end: 101753a9f;  */

void FUN_10175398c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x18,auStack_58,0,0);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if (*(long *)(lVar3 + 0x10) != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0x21,0);
    func_0x000107c61434(uVar1);
    FUN_101755c54(&uStack_68,uVar4,uVar1);
    func_0x000107c614a8(auStack_80);
    if (uStack_60 >> 0x3c < 0xf) {
      func_0x000107c61428(unaff_x20 + 0x18,auStack_80,0x21,0);
      if (*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101753aa0);
        (*pcVar2)();
      }
      uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x28);
      func_0x000107c61434(uVar4);
      func_0x000101755f94(0,1);
      func_0x000107c614a8(auStack_80);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(uVar4);
      func_0x0001000b44c0(uStack_68,uStack_60);
    }
    else {
      func_0x000107c6142c(uVar1);
    }
  }
  return;
}



/* Entry: 101753aa0; end: 101753de3;  */

void FUN_101753aa0(undefined8 *param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0x20,0);
  lVar13 = *(long *)(param_2 + 0x10);
  if (*(long *)(lVar13 + 0x10) != 0) {
    func_0x000107c61434(lVar13);
    uVar14 = param_3;
    uVar15 = param_4;
    func_0x000100029284();
    if ((uVar15 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar14 * 0x10);
      uVar12 = *puVar1;
      uVar10 = puVar1[1];
      func_0x00010006c00c();
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(lVar13);
      func_0x000107c61428(param_2 + 0x18,auStack_78,0x21,0);
      uVar14 = *(ulong *)(param_2 + 0x18);
      uVar15 = *(ulong *)(uVar14 + 0x10);
      if (uVar15 == 0) {
        uVar16 = 0;
        uVar11 = 0;
      }
      else {
        lVar13 = 0;
        uVar16 = 0;
        do {
          uVar11 = *(ulong *)(uVar14 + lVar13 + 0x20);
          uVar4 = *(ulong *)(uVar14 + lVar13 + 0x28);
          if ((uVar11 == param_3 && uVar4 == param_4) ||
             (func_0x000107c605b8(uVar11,uVar4,param_3,param_4,0), (uVar11 & 1) != 0)) {
            uVar11 = uVar16 + 1;
            uVar15 = *(ulong *)(uVar14 + 0x10);
            if (uVar15 - 1 != uVar16) {
              do {
                if (uVar15 <= uVar11) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x101753d98);
                  (*pcVar7)();
                }
                uVar4 = *(ulong *)(uVar14 + lVar13 + 0x30);
                uVar5 = *(ulong *)(uVar14 + lVar13 + 0x38);
                if ((uVar4 != param_3 || uVar5 != param_4) &&
                   (uVar8 = uVar4, func_0x000107c605b8(uVar4,uVar5,param_3,param_4,0),
                   (uVar8 & 1) == 0)) {
                  if (uVar11 != uVar16) {
                    if (uVar15 <= uVar16) {
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(1,0x101753de0);
                      (*pcVar7)();
                    }
                    puVar1 = (undefined8 *)(uVar14 + 0x20 + uVar16 * 0x10);
                    uVar3 = *puVar1;
                    uVar6 = puVar1[1];
                    func_0x000107c61434();
                    func_0x000107c61434(uVar5);
                    uVar15 = uVar14;
                    func_0x000107c61558();
                    *(ulong *)(param_2 + 0x18) = uVar14;
                    if ((uVar15 & 1) == 0) {
                      func_0x0001014c4f24();
                      *(ulong *)(param_2 + 0x18) = uVar14;
                    }
                    lVar2 = uVar14 + uVar16 * 0x10;
                    uVar9 = *(undefined8 *)(lVar2 + 0x28);
                    *(ulong *)(lVar2 + 0x20) = uVar4;
                    *(ulong *)(lVar2 + 0x28) = uVar5;
                    func_0x000107c6142c(uVar9);
                    *(ulong *)(param_2 + 0x18) = uVar14;
                    if (*(ulong *)(uVar14 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(1,0x101753de4);
                      (*pcVar7)();
                    }
                    lVar2 = uVar14 + lVar13;
                    uVar9 = *(undefined8 *)(lVar2 + 0x38);
                    *(undefined8 *)(lVar2 + 0x30) = uVar3;
                    *(undefined8 *)(lVar2 + 0x38) = uVar6;
                    func_0x000107c6142c(uVar9);
                    *(ulong *)(param_2 + 0x18) = uVar14;
                  }
                  uVar16 = uVar16 + 1;
                }
                uVar11 = uVar11 + 1;
                uVar15 = *(ulong *)(uVar14 + 0x10);
                lVar13 = lVar13 + 0x10;
              } while (uVar11 != uVar15);
            }
            goto LAB_101753c0c;
          }
          uVar16 = uVar16 + 1;
          lVar13 = lVar13 + 0x10;
        } while (uVar15 != uVar16);
        uVar11 = *(ulong *)(uVar14 + 0x10);
        uVar16 = uVar15;
LAB_101753c0c:
        if ((long)uVar11 < (long)uVar16) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101753c18);
          (*pcVar7)();
        }
      }
      func_0x000101755f94(uVar16,uVar11);
      uVar11 = *(ulong *)(param_2 + 0x18);
      func_0x000107c61434(param_4);
      uVar14 = uVar11;
      func_0x000107c61558();
      *(ulong *)(param_2 + 0x18) = uVar11;
      uVar15 = uVar11;
      if ((uVar14 & 1) == 0) {
        uVar15 = 0;
        func_0x0001000d182c(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
        *(ulong *)(param_2 + 0x18) = uVar15;
      }
      uVar14 = *(ulong *)(uVar15 + 0x10);
      uVar11 = uVar15;
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar14) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
        func_0x0001000d182c(uVar11,uVar14 + 1,1,uVar15);
      }
      *(ulong *)(uVar11 + 0x10) = uVar14 + 1;
      lVar13 = uVar11 + uVar14 * 0x10;
      *(ulong *)(lVar13 + 0x20) = param_3;
      *(ulong *)(lVar13 + 0x28) = param_4;
      *(ulong *)(param_2 + 0x18) = uVar11;
      func_0x000107c614a8(auStack_78);
      goto LAB_101753d6c;
    }
    func_0x000107c6142c(lVar13);
  }
  func_0x000107c614a8(auStack_78);
  func_0x000107c61428(param_2 + 0x20,auStack_78,0,0);
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61434(uVar12);
  func_0x0001000f66f0(param_3,param_4,uVar12);
  func_0x000107c6142c(uVar12);
  uVar12 = 0;
  uVar10 = 0xf000000000000000;
LAB_101753d6c:
  *param_1 = uVar12;
  param_1[1] = uVar10;
  return;
}



/* Entry: 101753de4; end: 101753f27;  */

void FUN_101753de4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar2 = &UNK_1104033d0;
  func_0x000107c613fc(&UNK_1104033d0,0x28,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar3 = &UNK_1104033f8;
  func_0x000107c613fc(&UNK_1104033f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x101757214;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  uStack_60 = 0x101757200;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10006eb60;
  puStack_68 = &UNK_110403410;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar5 = puStack_58;
  func_0x000107c6157c();
  func_0x000107c61434(param_2);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  func_0x00010006eaa4(uVar6,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  puVar5 = puVar3;
  func_0x000107c61544(puVar3,"",0x68,0x67,0x18,1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101753f28);
  (*pcVar1)();
}



/* Entry: 101753f28; end: 101754143;  */

void FUN_101753f28(long param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61428(param_1 + 0x10,auStack_88,0x21,0);
  FUN_101755c54(&uStack_70,param_2,param_3);
  func_0x000107c614a8(auStack_88);
  func_0x0001000b44c0(uStack_70,uStack_68);
  func_0x000107c61428(param_1 + 0x18,auStack_88,0x21,0);
  uVar10 = *(ulong *)(param_1 + 0x18);
  uVar13 = *(ulong *)(uVar10 + 0x10);
  if (uVar13 == 0) {
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    lVar14 = 0;
    uVar11 = 0;
    do {
      uVar12 = *(ulong *)(uVar10 + lVar14 + 0x20);
      lVar5 = *(long *)(uVar10 + lVar14 + 0x28);
      if ((uVar12 == param_2 && lVar5 == param_3) ||
         (func_0x000107c605b8(uVar12,lVar5,param_2,param_3,0), (uVar12 & 1) != 0)) {
        uVar12 = uVar11 + 1;
        uVar13 = *(ulong *)(uVar10 + 0x10);
        if (uVar13 - 1 != uVar11) {
          do {
            if (uVar13 <= uVar12) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10175413c);
              (*pcVar7)();
            }
            uVar3 = *(ulong *)(uVar10 + lVar14 + 0x30);
            lVar5 = *(long *)(uVar10 + lVar14 + 0x38);
            if ((uVar3 != param_2 || lVar5 != param_3) &&
               (uVar8 = uVar3, func_0x000107c605b8(uVar3,lVar5,param_2,param_3,0), (uVar8 & 1) == 0)
               ) {
              if (uVar12 != uVar11) {
                if (uVar13 <= uVar11) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x101754140);
                  (*pcVar7)();
                }
                puVar1 = (undefined8 *)(uVar10 + 0x20 + uVar11 * 0x10);
                uVar4 = *puVar1;
                uVar6 = puVar1[1];
                func_0x000107c61434(uVar6);
                func_0x000107c61434(lVar5);
                uVar13 = uVar10;
                func_0x000107c61558();
                *(ulong *)(param_1 + 0x18) = uVar10;
                if ((uVar13 & 1) == 0) {
                  func_0x0001014c4f24();
                  *(ulong *)(param_1 + 0x18) = uVar10;
                }
                lVar2 = uVar10 + uVar11 * 0x10;
                uVar9 = *(undefined8 *)(lVar2 + 0x28);
                *(ulong *)(lVar2 + 0x20) = uVar3;
                *(long *)(lVar2 + 0x28) = lVar5;
                func_0x000107c6142c(uVar9);
                *(ulong *)(param_1 + 0x18) = uVar10;
                if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x101754144);
                  (*pcVar7)();
                }
                lVar5 = uVar10 + lVar14;
                uVar9 = *(undefined8 *)(lVar5 + 0x38);
                *(undefined8 *)(lVar5 + 0x30) = uVar4;
                *(undefined8 *)(lVar5 + 0x38) = uVar6;
                func_0x000107c6142c(uVar9);
                *(ulong *)(param_1 + 0x18) = uVar10;
              }
              uVar11 = uVar11 + 1;
            }
            uVar12 = uVar12 + 1;
            uVar13 = *(ulong *)(uVar10 + 0x10);
            lVar14 = lVar14 + 0x10;
          } while (uVar12 != uVar13);
        }
        goto LAB_10175400c;
      }
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 0x10;
    } while (uVar13 != uVar11);
    uVar12 = *(ulong *)(uVar10 + 0x10);
    uVar11 = uVar13;
LAB_10175400c:
    if ((long)uVar12 < (long)uVar11) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x101754018);
      (*pcVar7)();
    }
  }
  func_0x000101755f94(uVar11,uVar12);
  func_0x000107c614a8(auStack_88);
  return;
}



/* Entry: 101754144; end: 1017541b7;  */

void FUN_101754144(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar1);
  func_0x000107c61428(param_1 + 0x18,auStack_50,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1017541b8; end: 1017541f3;  */

void FUN_1017541b8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1017541f4; end: 1017543ef;  */

void FUN_1017541f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000107c5ffd8();
  lStack_78 = *(long *)(lVar3 + -8);
  lStack_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  lVar9 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ffc4();
  puVar2 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar4 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010b11e8();
  *(undefined **)(unaff_x20 + 0x10) = puVar5;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  *(undefined **)(unaff_x20 + 0x20) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(unaff_x20 + 0x28) = 4;
  uVar6 = 0;
  FUN_101756fd8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  uStack_80 = uVar6;
  func_0x000107c5f80c(lVar4);
  puStack_68 = puVar1;
  uVar6 = 0x112d4ac68;
  FUN_1017570fc(0x112d4ac68,puVar2,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar7 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar8 = 0x112d4ac78;
  func_0x00010175713c(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar10,&puStack_68,uVar7,uVar8,lVar3,uVar6);
  (**(code **)(lStack_78 + 0x68))
            (lVar9,*(undefined4 *)
                    PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_70);
  uVar6 = 0xd00000000000001c;
  func_0x000107c5ffec(0xd00000000000001c,0x800000010efba840,lVar4,lVar10,lVar9,0);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar6;
  return;
}



/* Entry: 1017543f0; end: 10175445f;  */

undefined8 FUN_1017543f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_101756050(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101754460; end: 1017544b3; -[MassSnapPostSignalService init] */

undefined8 FUN_101754460(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c614f0();
  func_0x000107c610f8();
  uVar1 = 0;
  FUN_101756050(0);
  uVar2 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,uVar2,0x28,7);
  return uVar1;
}



/* Entry: 1017544b4; end: 10175457b; -[MassSnapPostSignalService storeLocalMedia:forKey:] */

/* WARNING: Possible PIC construction at 0x000101754510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101754528: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101754514) */
/* WARNING: Removing unreachable block (ram,0x00010175452c) */

void FUN_1017544b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10175457c; end: 10175464f; -[MassSnapPostSignalService localMediaForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175457c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  ulong uStack_38;
  
  func_0x000107c5faec();
  uStack_60 = *(undefined8 *)(param_1 + _DAT_112dc6768);
  uStack_58 = param_3;
  uStack_50 = param_2;
  func_0x000107c61174(param_1);
  uVar1 = 0x112d56fe0;
  func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
  func_0x000107c5ffe4(&uStack_40,0x101757194,auStack_70,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  uVar1 = 0;
  if (uStack_38 >> 0x3c < 0xf) {
    uVar1 = uStack_40;
    func_0x000107c5ee20(uStack_40,uStack_38);
    func_0x0001000b44c0(uStack_40,uStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101754650; end: 10175492b;  */

void FUN_101754650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 unaff_x20;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_d0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar13 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar15 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar14 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_101756fd8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar16 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3);
  lVar4 = lVar14;
  func_0x000107c5fff0(lVar14);
  (**(code **)(lVar16 + 8))(lVar14,lVar3);
  puVar5 = &UNK_1104031c8;
  func_0x000107c613fc(&UNK_1104031c8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,unaff_x20);
  puVar6 = &UNK_1104031f0;
  func_0x000107c613fc(&UNK_1104031f0,0x38,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  *(undefined8 *)(puVar6 + 0x20) = param_2;
  *(undefined8 *)(puVar6 + 0x28) = param_3;
  *(undefined8 *)(puVar6 + 0x30) = param_4;
  pcStack_70 = FUN_10175624c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_110403208;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c6157c(puVar5);
  func_0x000107c61434(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c5f808(lVar15);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0x112d4af88;
  FUN_1017570fc(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar9 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar10 = 0x112d4af98;
  func_0x00010175713c(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar13,&puStack_98,uVar9,uVar10,lVar1,uVar8);
  func_0x000107c5ffe8(0,lVar15,puVar13,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(lVar4);
  (**(code **)(lVar11 + 8))(puVar13,lVar1);
  (**(code **)(lVar12 + 8))(lVar15,lVar2);
  puVar6 = puStack_68;
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 10175492c; end: 101754acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175492c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  ppuVar4 = &puStack_b0;
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uStack_78 = 0;
    uStack_70 = 0xf000000000000000;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112dc6768);
    func_0x000107c6157c(uVar5);
    func_0x000107c61170(param_1);
    uVar1 = 0x112d56fe0;
    puStack_a0 = (undefined *)uVar5;
    puStack_98 = (undefined *)param_2;
    pcStack_90 = (code *)param_3;
    func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
    func_0x000107c5ffe4(&uStack_78,0x1017571a8,&puStack_b0,uVar1);
    func_0x000107c61574(uVar5);
  }
  pcVar2 = "localMedia(forKey:completion:)";
  func_0x0001000c10c0("localMedia(forKey:completion:)");
  func_0x000107c61180();
  puVar3 = &UNK_110403448;
  func_0x000107c613fc(&UNK_110403448,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = uStack_78;
  *(undefined8 *)(puVar3 + 0x28) = uStack_70;
  pcStack_90 = FUN_10175708c;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_110403460;
  puStack_88 = puVar3;
  func_0x000107c60bc4(&puStack_b0);
  puVar3 = puStack_88;
  func_0x000107c6157c(param_5);
  func_0x000100de78a0(uStack_78,uStack_70);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar2);
  func_0x0001000b44c0(uStack_78,uStack_70);
  return;
}



/* Entry: 101754acc; end: 101754b6b; -[MassSnapPostSignalService localMediaForKey:completion:] */

void FUN_101754acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_110403330;
  func_0x000107c613fc(&UNK_110403330,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_101754650(param_3,param_2,0x1017562cc,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101754b6c; end: 101754c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101754b6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uStack_60 = *(undefined8 *)(unaff_x20 + _DAT_112dc6768);
  uVar1 = 0x112d56fe0;
  uStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
  func_0x000107c5ffe4(&uStack_40,FUN_101757180,auStack_70,uVar1);
  puVar2 = (undefined *)0x0;
  if (uStack_38 >> 0x3c < 0xf) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    uVar1 = uStack_40;
    func_0x000107c5ee20(uStack_40,uStack_38);
    func_0x000107c4635c(puVar2);
    func_0x000107c61170(uVar1);
    func_0x0001000b44c0(uStack_40,uStack_38);
  }
  return puVar2;
}



/* Entry: 101754c3c; end: 101754ca3; -[MassSnapPostSignalService localImageForKey:] */

void FUN_101754c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101754b6c(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101754ca4; end: 101754d7b;  */

/* WARNING: Possible PIC construction at 0x000101754d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101754d50) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101754ca4(ulong param_1,ulong param_2,code *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  if (0xe < param_2 >> 0x3c) {
    (*param_3)(0);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000100de78a0(param_1,param_2);
  func_0x00010006c00c(param_1,param_2);
  uVar2 = param_1;
  func_0x000107c5ee20(param_1,param_2);
  func_0x000107c4635c(puVar1);
  func_0x000107c61170(uVar2);
  if (param_2 >> 0x3c < 0xf) {
    uVar3 = (uint)(param_2 >> 0x3e);
    if (uVar3 == 1) {
      param_1 = param_2 & 0x3fffffffffffffff;
    }
    else if (uVar3 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return;
  }
  return;
}



/* Entry: 101754d7c; end: 101754e4f; -[MassSnapPostSignalService localImageForKey:completion:] */

void FUN_101754d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_1104032e0;
  func_0x000107c613fc(&UNK_1104032e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_110403308;
  func_0x000107c613fc(&UNK_110403308,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1017562bc;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  FUN_101754650(param_3,param_2,0x1017571f4,puVar2);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101754e50; end: 101754eb3; -[MassSnapPostSignalService removeLocalMediaForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101754e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101753de4(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101754eb4; end: 101754fdf; -[MassSnapPostSignalService clearAllLocalMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101754eb4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar5 = *(long *)(param_1 + _DAT_112dc6768);
  uVar6 = *(undefined8 *)(lVar5 + 0x30);
  puVar2 = &UNK_110403290;
  func_0x000107c613fc(&UNK_110403290,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101757208;
  *(long *)(puVar2 + 0x18) = lVar5;
  uStack_50 = 0x1017571f8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10006eb60;
  puStack_58 = &UNK_1104032a8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(lVar5);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x00010006eaa4(uVar6,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x68,0x6e,0x18,1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(lVar5);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101754fe0);
  (*pcVar1)();
}



/* Entry: 101754fe0; end: 1017550bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101754fe0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dc6770);
  puVar1 = &UNK_1104031c8;
  func_0x000107c613fc(&UNK_1104031c8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110403240;
  func_0x000107c613fc(&UNK_110403240,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  uStack_40 = 0x101756274;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110403258;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1017550c0; end: 10175511b;  */

void FUN_1017550c0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10175511c(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10175511c; end: 10175526b;  */

/* WARNING: Possible PIC construction at 0x000101755240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101755244) */
/* WARNING: Removing unreachable block (ram,0x0001000b44c0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44d0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175511c(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  long unaff_x20;
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112dc6770));
  lVar5 = param_1;
  FUN_10175661c();
  lVar6 = param_1;
  uVar8 = param_2;
  FUN_1017552bc(param_1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_1130774c0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130774c0))[1];
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130774e0);
  uVar3 = ((undefined8 *)(param_1 + _DAT_1130774e0))[1];
  uVar4 = *(undefined1 *)(param_1 + _DAT_1130774e8);
  func_0x000104407094(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(lVar6,uVar8);
  func_0x000100de78a0(lVar5,param_2);
  func_0x000100de78a0(uVar1,uVar3);
  func_0x000104406d64(uVar7,uVar2,lVar6,uVar8,lVar5,param_2,uVar1,uVar3,uVar4);
  func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112dc6778));
  func_0x000107c61170(uVar7);
  uVar9 = (uint)(uVar8 >> 0x3e);
  if (uVar9 != 1) {
    if (uVar9 != 2) {
      return;
    }
    func_0x000107c61574(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar8 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10175526c; end: 1017552bb; -[MassSnapPostSignalService emitMassSnapPosted:] */

/* WARNING: Possible PIC construction at 0x0001017552a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017552a8) */

void FUN_10175526c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101754fe0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1017552bc; end: 1017557d7;  */

/* WARNING: Removing unreachable block (ram,0x000101755414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1017552bc(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  long *plVar19;
  undefined8 uVar20;
  char *pcVar21;
  long unaff_x20;
  long lVar22;
  long lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = *(char **)(unaff_x20 + _DAT_112dc6780);
  if (pcVar5 == (char *)0x0) {
LAB_10175545c:
    plVar19 = (long *)(param_1 + _DAT_1130774d0);
LAB_10175546c:
    lVar22 = *plVar19;
    pcVar16 = (char *)plVar19[1];
  }
  else {
    func_0x000107c61174();
    pcVar6 = pcVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (pcVar6 == (char *)0x0) {
      func_0x000107c61170(pcVar5);
      goto LAB_10175545c;
    }
    pcVar21 = (char *)((long *)(param_1 + _DAT_1130774e0))[1];
    if (0xe < (ulong)pcVar21 >> 0x3c) {
      func_0x000107c61170(pcVar5);
      func_0x000107c615e8(pcVar6);
      goto LAB_10175545c;
    }
    lVar23 = *(long *)(param_1 + _DAT_1130774e0);
    uVar3 = (uint)((ulong)pcVar21 >> 0x20);
    uVar17 = uVar3 >> 0x1e;
    if (1 < uVar3 >> 0x1e) {
      if (uVar17 == 2) {
        lVar22 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101755398);
          (*pcVar4)();
        }
        goto LAB_1017553a8;
      }
LAB_101755440:
      func_0x000107c615e8(pcVar6);
      func_0x000107c61170(pcVar5);
      func_0x0001000b44c0(lVar23,pcVar21);
      goto LAB_10175545c;
    }
    if (uVar17 == 0) {
      if (((ulong)pcVar21 >> 0x30 & 0xff) == 0) goto LAB_101755440;
    }
    else {
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1017557d0);
        (*pcVar4)();
      }
      lVar22 = (long)(iVar18 - (int)lVar23);
LAB_1017553a8:
      func_0x00010006c00c(lVar23,pcVar21);
      if (lVar22 < 1) goto LAB_101755440;
    }
    plVar19 = (long *)(param_1 + _DAT_1130774d0);
    lVar22 = *plVar19;
    lVar14 = plVar19[1];
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    func_0x00010006c00c(lVar22,lVar14);
    lVar7 = lVar22;
    func_0x0001010282b0(lVar22,lVar14);
    func_0x00010006c090(lVar22,lVar14);
    uVar15 = *(undefined8 *)(param_1 + _DAT_1130774c0);
    uVar1 = ((undefined8 *)(param_1 + _DAT_1130774c0))[1];
    puVar8 = PTR_PTR_1126b25b8;
    func_0x000107c610f8();
    uVar20 = uVar15;
    func_0x000107c5fadc(uVar15,uVar1);
    func_0x000107c46814();
    func_0x000107c61170(uVar20);
    bVar2 = *(byte *)(param_1 + _DAT_1130774e8);
    FUN_101756858(lVar7);
    lVar22 = lVar23;
    func_0x000107c5ee20(lVar23,pcVar21);
    puStack_a0 = (undefined *)0x0;
    pcVar9 = pcVar6;
    func_0x000107c3d760();
    func_0x000107c61180();
    func_0x000107c61170(lVar22);
    if (puStack_a0 != (undefined *)0x0) {
      puVar10 = puStack_a0;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c615e8(pcVar6);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(pcVar5);
      func_0x0001000b44c0(lVar23,pcVar21);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(pcVar9);
      goto LAB_10175546c;
    }
    pcVar16 = pcVar9;
    func_0x000101756e5c(lVar7,pcVar9);
    if ((bVar2 & 1) == 0) {
      lVar22 = *(long *)(unaff_x20 + _DAT_112dc6768);
      uVar20 = *(undefined8 *)(lVar22 + 0x30);
      puVar10 = &UNK_110403358;
      func_0x000107c613fc(&UNK_110403358,0x38,7);
      *(long *)(puVar10 + 0x10) = lVar22;
      *(undefined8 *)(puVar10 + 0x18) = uVar15;
      *(undefined8 *)(puVar10 + 0x20) = uVar1;
      *(long *)(puVar10 + 0x28) = lVar23;
      *(char **)(puVar10 + 0x30) = pcVar21;
      puVar11 = &UNK_110403380;
      func_0x000107c613fc(&UNK_110403380,0x20,7);
      *(undefined8 *)(puVar11 + 0x10) = 0x10175720c;
      *(undefined **)(puVar11 + 0x18) = puVar10;
      uStack_80 = 0x1017571fc;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_10006eb60;
      puStack_88 = &UNK_110403398;
      ppuVar12 = &puStack_a0;
      puStack_78 = puVar11;
      func_0x000107c60bc4(ppuVar12);
      puVar13 = puStack_78;
      func_0x000100de78a0(lVar23,pcVar21);
      func_0x000107c6157c(lVar22);
      func_0x000107c61434(uVar1);
      func_0x000107c6157c(puVar11);
      func_0x000107c61574(puVar13);
      func_0x00010006eaa4(uVar20,ppuVar12);
      func_0x000107c60bd0(ppuVar12);
      pcVar16 = "";
      puVar13 = puVar11;
      func_0x000107c61544(puVar11,"",0x68,0x31,0x18,1);
      func_0x000107c61574(puVar10);
      func_0x000107c61574(puVar11);
      if (((ulong)puVar13 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1017557d4);
        (*pcVar4)();
      }
    }
    lVar14 = lVar7;
    func_0x000107c41214();
    func_0x000107c61180();
    if (lVar14 != 0) {
      lVar22 = lVar14;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(pcVar9);
      func_0x000107c615e8(pcVar6);
      func_0x000107c61170(pcVar5);
      func_0x0001000b44c0(lVar23,pcVar21);
      func_0x000107c61170(lVar14);
      func_0x000107c61170();
      goto LAB_10175547c;
    }
    func_0x000107c61170(puVar8);
    func_0x000107c61170(pcVar9);
    func_0x000107c615e8(pcVar6);
    func_0x000107c61170(pcVar5);
    func_0x0001000b44c0(lVar23,pcVar21);
    func_0x000107c61170(lVar7);
    lVar22 = *plVar19;
    pcVar16 = (char *)plVar19[1];
  }
  lVar7 = lVar22;
  pcVar21 = pcVar16;
  func_0x00010006c00c(lVar22,pcVar16);
LAB_10175547c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    uVar15 = *(undefined8 *)(lVar7 + _DAT_112dc6778);
    func_0x000107c5cb24(uVar15);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    auVar25._8_8_ = pcVar21;
    auVar25._0_8_ = uVar15;
    return auVar25;
  }
  auVar24._8_8_ = pcVar16;
  auVar24._0_8_ = lVar22;
  return auVar24;
}



/* Entry: 1017557d8; end: 1017557ff; -[MassSnapPostSignalService observeMassSnapPosts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017557d8(long param_1)

{
  func_0x000107c5cb24(*(undefined8 *)(param_1 + _DAT_112dc6778));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101755800; end: 10175590b;  */

/* WARNING: Possible PIC construction at 0x0001017558b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017558b4) */
/* WARNING: Removing unreachable block (ram,0x0001017558f4) */

void FUN_101755800(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ed90();
  uStack_40 = 0;
  puVar3 = puVar1;
  func_0x000107c4ff50();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  if (((int)puVar3 != 0) && (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38)) {
    func_0x000107c60e78();
    pcStack_58 = FUN_10175590c;
    puVar1 = puVar2;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000107c614f0();
    puStack_70 = puVar2;
    puStack_68 = puVar1;
    func_0x000107c61154(&puStack_70,PTR_s_dealloc_112525b20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uStack_40);
  return;
}



/* Entry: 10175590c; end: 10175593f;  */

void FUN_10175590c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101755940; end: 101755997; -[MassSnapPostSignalService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101755940(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dc6778));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dc6780));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dc6770));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc6768));
  return;
}



/* Entry: 101755998; end: 101755c53;  */

ulong FUN_101755998(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101755a7c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101755a80);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101756fd8(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101755b54);
  (*pcVar2)();
}



/* Entry: 101755c54; end: 101755d27;  */

void FUN_101755c54(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0xf000000000000000;
    *param_1 = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar2 == 0) {
      func_0x0001010b9074();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_2 * 0x10);
    uVar4 = *puVar1;
    param_1[1] = puVar1[1];
    *param_1 = uVar4;
    FUN_101755d28(param_2,lVar3);
    *unaff_x20 = lVar3;
  }
  return;
}



/* Entry: 101755d28; end: 101755ed7;  */

void FUN_101755d28(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_101755e1c:
          if ((long)param_1 < (long)uVar8) goto LAB_101755da4;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 0x10);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2)) || (param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_101755e1c;
LAB_101755da4:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101755ed8);
  (*pcVar5)();
}



/* Entry: 101755ed8; end: 10175604f;  */

void FUN_101755ed8(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x101755f84);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  lVar1 = lVar7 + 0x20 + param_1 * 0x10;
  func_0x000107c61408(lVar1,lVar4,PTR___sSSN_11034da80);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x101755f88);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101755f8c);
      (*pcVar6)();
    }
    uVar2 = lVar1 + param_3 * 0x10;
    uVar3 = lVar7 + 0x20 + param_2 * 0x10;
    if (uVar2 != uVar3 || uVar3 + lVar4 * 0x10 <= uVar2) {
      func_0x000107c610b8(uVar2,uVar3,lVar4 * 0x10);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101755f90);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101755f94);
  (*pcVar6)();
}



/* Entry: 101756050; end: 1017561e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101756050(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = _DAT_112dc6768;
  uVar3 = 0;
  func_0x00010175629c();
  func_0x000107c613fc();
  FUN_1017541f4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112dc6780) = param_1;
  puVar4 = PTR_PTR_1126b7e38;
  func_0x000107c61168();
  func_0x000107c61174(param_1);
  func_0x000107c50198();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + _DAT_112dc6778) = puVar4;
  (**(code **)(lVar5 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2
            );
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efba810);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined **)(unaff_x20 + _DAT_112dc6770) = puVar4;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1017561e8; end: 1017561f3;  */

void FUN_1017561e8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long unaff_x20;
  ulong uVar19;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(ulong *)(unaff_x20 + 0x18);
  uVar4 = *(ulong *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar3 + 0x20,auStack_88,0x21,0);
  func_0x000107c61434(uVar4);
  func_0x000100403b00(&uStack_70,uVar8,uVar4);
  func_0x000107c614a8(auStack_88);
  func_0x000107c6142c(uStack_68);
  func_0x000107c61428(lVar3 + 0x10,auStack_88,0x20,0);
  lVar16 = *(long *)(lVar3 + 0x10);
  if (*(long *)(lVar16 + 0x10) == 0) {
code_r0x000101753670:
    func_0x000107c614a8(auStack_88);
    uVar13 = 0;
    uVar17 = 0xf000000000000000;
  }
  else {
    func_0x000107c61434(lVar16);
    uVar17 = uVar8;
    uVar14 = uVar4;
    func_0x000100029284();
    if ((uVar14 & 1) == 0) {
      func_0x000107c6142c(lVar16);
      goto code_r0x000101753670;
    }
    puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar17 * 0x10);
    uVar13 = *puVar1;
    uVar17 = puVar1[1];
    func_0x00010006c00c(uVar13,uVar17);
    func_0x000107c6142c(lVar16);
    func_0x000107c614a8(auStack_88);
    if (uVar17 >> 0x3c < 0xf) {
      func_0x0001000b44c0(uVar13,uVar17);
      func_0x0001000b44c0(0,0xf000000000000000);
      func_0x000107c61428(lVar3 + 0x18,auStack_88,0x21,0);
      uVar17 = *(ulong *)(lVar3 + 0x18);
      uVar14 = *(ulong *)(uVar17 + 0x10);
      if (uVar14 == 0) {
        uVar19 = 0;
        uVar18 = 0;
      }
      else {
        lVar16 = 0;
        uVar19 = 0;
        do {
          uVar18 = *(ulong *)(uVar17 + lVar16 + 0x20);
          uVar5 = *(ulong *)(uVar17 + lVar16 + 0x28);
          if ((uVar18 == uVar8 && uVar5 == uVar4) ||
             (func_0x000107c605b8(uVar18,uVar5,uVar8,uVar4,0), (uVar18 & 1) != 0)) {
            uVar18 = uVar19 + 1;
            uVar14 = *(ulong *)(uVar17 + 0x10);
            if (uVar14 - 1 != uVar19) {
              do {
                if (uVar14 <= uVar18) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x101753940);
                  (*pcVar10)();
                }
                uVar5 = *(ulong *)(uVar17 + lVar16 + 0x30);
                uVar6 = *(ulong *)(uVar17 + lVar16 + 0x38);
                if ((uVar5 != uVar8 || uVar6 != uVar4) &&
                   (uVar11 = uVar5, func_0x000107c605b8(uVar5,uVar6,uVar8,uVar4,0),
                   (uVar11 & 1) == 0)) {
                  if (uVar18 != uVar19) {
                    if (uVar14 <= uVar19) {
                    /* WARNING: Does not return */
                      pcVar10 = (code *)SoftwareBreakpoint(1,0x101753988);
                      (*pcVar10)();
                    }
                    puVar1 = (undefined8 *)(uVar17 + 0x20 + uVar19 * 0x10);
                    uVar13 = *puVar1;
                    uVar7 = puVar1[1];
                    func_0x000107c61434();
                    func_0x000107c61434(uVar6);
                    uVar14 = uVar17;
                    func_0x000107c61558();
                    *(ulong *)(lVar3 + 0x18) = uVar17;
                    if ((uVar14 & 1) == 0) {
                      func_0x0001014c4f24();
                      *(ulong *)(lVar3 + 0x18) = uVar17;
                    }
                    lVar2 = uVar17 + uVar19 * 0x10;
                    uVar12 = *(undefined8 *)(lVar2 + 0x28);
                    *(ulong *)(lVar2 + 0x20) = uVar5;
                    *(ulong *)(lVar2 + 0x28) = uVar6;
                    func_0x000107c6142c(uVar12);
                    *(ulong *)(lVar3 + 0x18) = uVar17;
                    if (*(ulong *)(uVar17 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
                      pcVar10 = (code *)SoftwareBreakpoint(1,0x10175398c);
                      (*pcVar10)();
                    }
                    lVar2 = uVar17 + lVar16;
                    uVar12 = *(undefined8 *)(lVar2 + 0x38);
                    *(undefined8 *)(lVar2 + 0x30) = uVar13;
                    *(undefined8 *)(lVar2 + 0x38) = uVar7;
                    func_0x000107c6142c(uVar12);
                    *(ulong *)(lVar3 + 0x18) = uVar17;
                  }
                  uVar19 = uVar19 + 1;
                }
                uVar18 = uVar18 + 1;
                uVar14 = *(ulong *)(uVar17 + 0x10);
                lVar16 = lVar16 + 0x10;
              } while (uVar18 != uVar14);
            }
            goto code_r0x00010175373c;
          }
          uVar19 = uVar19 + 1;
          lVar16 = lVar16 + 0x10;
        } while (uVar14 != uVar19);
        uVar18 = *(ulong *)(uVar17 + 0x10);
        uVar19 = uVar14;
code_r0x00010175373c:
        if ((long)uVar18 < (long)uVar19) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10175374c);
          (*pcVar10)();
        }
      }
      func_0x000101755f94(uVar19,uVar18);
      func_0x000107c614a8(auStack_88);
      goto code_r0x000101753850;
    }
  }
  func_0x0001000b44c0(uVar13,uVar17);
  if (3 < *(ulong *)(*(long *)(lVar3 + 0x10) + 0x10)) {
    FUN_10175398c();
  }
code_r0x000101753850:
  func_0x000107c61428(lVar3 + 0x10,auStack_88,0x21,0);
  func_0x000107c61434(uVar4);
  func_0x00010006c00c(uVar9,uVar15);
  uVar13 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c61558(uVar13);
  uStack_70 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(lVar3 + 0x10) = 0x8000000000000000;
  func_0x0001010b8f18(uVar9,uVar15,uVar8,uVar4,uVar13);
  func_0x000107c6142c(uVar4);
  *(undefined8 *)(lVar3 + 0x10) = uStack_70;
  func_0x000107c614a8(auStack_88);
  func_0x000107c61428(lVar3 + 0x18,auStack_88,0x21,0);
  uVar18 = *(ulong *)(lVar3 + 0x18);
  func_0x000107c61434(uVar4);
  uVar17 = uVar18;
  func_0x000107c61558();
  *(ulong *)(lVar3 + 0x18) = uVar18;
  uVar14 = uVar18;
  if ((uVar17 & 1) == 0) {
    uVar14 = 0;
    func_0x0001000d182c(0,*(long *)(uVar18 + 0x10) + 1,1,uVar18);
    *(ulong *)(lVar3 + 0x18) = uVar14;
  }
  uVar17 = *(ulong *)(uVar14 + 0x10);
  uVar18 = uVar14;
  if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar17) {
    uVar18 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
    func_0x0001000d182c(uVar18,uVar17 + 1,1,uVar14);
  }
  *(ulong *)(uVar18 + 0x10) = uVar17 + 1;
  lVar16 = uVar18 + uVar17 * 0x10;
  *(ulong *)(lVar16 + 0x20) = uVar8;
  *(ulong *)(lVar16 + 0x28) = uVar4;
  *(ulong *)(lVar3 + 0x18) = uVar18;
  func_0x000107c614a8(auStack_88);
  return;
}



/* Entry: 1017561f4; end: 101756213;  */

void FUN_1017561f4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101756214; end: 10175622f;  */

void FUN_101756214(long param_1,long param_2)

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



/* Entry: 101756230; end: 10175624b;  */

void FUN_101756230(void)

{
  long unaff_x20;
  
  FUN_101753aa0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10175624c; end: 10175627b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175624c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  ppuVar8 = &puStack_b0;
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    uStack_78 = 0;
    uStack_70 = 0xf000000000000000;
  }
  else {
    uVar10 = *(undefined8 *)(lVar4 + _DAT_112dc6768);
    func_0x000107c6157c(uVar10);
    func_0x000107c61170(lVar4);
    uVar5 = 0x112d56fe0;
    puStack_a0 = (undefined *)uVar10;
    puStack_98 = (undefined *)uVar2;
    pcStack_90 = (code *)uVar1;
    func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
    func_0x000107c5ffe4(&uStack_78,0x1017571a8,&puStack_b0,uVar5);
    func_0x000107c61574(uVar10);
  }
  pcVar6 = "localMedia(forKey:completion:)";
  func_0x0001000c10c0("localMedia(forKey:completion:)");
  func_0x000107c61180();
  puVar7 = &UNK_110403448;
  func_0x000107c613fc(&UNK_110403448,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar3;
  *(undefined8 *)(puVar7 + 0x18) = uVar9;
  *(undefined8 *)(puVar7 + 0x20) = uStack_78;
  *(undefined8 *)(puVar7 + 0x28) = uStack_70;
  pcStack_90 = FUN_10175708c;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_110403460;
  puStack_88 = puVar7;
  func_0x000107c60bc4(&puStack_b0);
  puVar7 = puStack_88;
  func_0x000107c6157c(uVar9);
  func_0x000100de78a0(uStack_78,uStack_70);
  func_0x000107c61574(puVar7);
  func_0x000107c4e524(pcVar6);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c615e8(pcVar6);
  func_0x0001000b44c0(uStack_78,uStack_70);
  return;
}



/* Entry: 10175627c; end: 1017562bb;  */

void FUN_10175627c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e8dd8);
  return;
}



/* Entry: 1017562bc; end: 1017562d3;  */

void FUN_1017562bc(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001017562c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1017562d4; end: 10175661b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1017562d4(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  ulong uVar13;
  int iVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  ulong uVar21;
  long *plVar22;
  long *unaff_x26;
  long lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  long alStack_100 [10];
  long alStack_b0 [3];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = 0x112dc6870;
  func_0x0001000285a8(0x112dc6870,&UNK_10d9869c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar8 = (long *)((long)alStack_b0 - extraout_x8);
  plVar5 = (long *)0x112dc6878;
  func_0x0001000285a8(0x112dc6878,&UNK_10d9869c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(plVar5[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar22 = (long *)((long)plVar8 - extraout_x8_00);
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar23 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  lVar17 = (long)plVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_101757218(plVar8,param_1,param_2);
  lVar19 = 0x112dc6880;
  func_0x0001000285a8(0x112dc6880,&UNK_10d9869d0);
  plVar12 = plVar8;
  (**(code **)(*(long *)(lVar19 + -8) + 0x30))(plVar8,1,lVar19);
  if ((int)plVar12 == 1) {
    func_0x000101757018(plVar8);
LAB_10175658c:
    plVar9 = (long *)0x0;
    plVar12 = (long *)0xf000000000000000;
    plVar7 = plVar8;
  }
  else {
    iVar14 = *(int *)(lVar19 + 0x30);
    lVar19 = plVar5[6];
    *plVar22 = *plVar8;
    pcVar4 = *(code **)(lVar23 + 0x20);
    (*pcVar4)((long)plVar22 + (long)(int)lVar19,(undefined *)((long)plVar8 + (long)iVar14),lVar6);
    lVar19 = *plVar22;
    plVar12 = (long *)((long)plVar22 + (long)(int)plVar5[6]);
    (*pcVar4)(lVar17,plVar12,lVar6);
    plVar5 = (long *)PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
    func_0x000107c610f8();
    func_0x000107c457a0();
    func_0x000107c52860();
    alStack_b0[2] = *(long *)PTR__kCMTimeZero_110348670;
    uStack_98 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_94 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
    uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    plStack_88 = (long *)0x0;
    plVar7 = plVar5;
    uStack_80 = alStack_b0[2];
    uStack_78 = uStack_98;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    func_0x000107c40798();
    plVar8 = plStack_88;
    if (plVar7 == (long *)0x0) {
      plVar12 = plStack_88;
      func_0x000107c61174(plStack_88);
      func_0x000107c5ed30();
      func_0x000107c61170(plVar12);
      func_0x000107c61654();
      func_0x000107c61170(plVar5);
      func_0x000107c614ac(plVar8);
      FUN_101755800(lVar17);
      func_0x000107c61170(lVar19);
      (**(code **)(lVar23 + 8))(lVar17,lVar6);
      param_1 = plVar8;
      goto LAB_10175658c;
    }
    unaff_x26 = (long *)PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c61174(plVar8);
    func_0x000107c45afc(0x3ff0000000000000);
    plVar8 = unaff_x26;
    func_0x000107c60bb4(0x3fe0000000000000);
    func_0x000107c61180();
    if (plVar8 == (long *)0x0) {
      func_0x000107c61170(plVar5);
      func_0x000107c61170(unaff_x26);
      func_0x000107c61170(plVar7);
      plVar9 = (long *)0x0;
      plVar12 = (long *)0xf000000000000000;
    }
    else {
      plVar9 = plVar8;
      func_0x000107c5ee30();
      func_0x000107c61170(plVar8);
      func_0x000107c61170(plVar5);
      func_0x000107c61170(unaff_x26);
      func_0x000107c61170(plVar7);
    }
    FUN_101755800(lVar17);
    func_0x000107c61170(lVar19);
    (**(code **)(lVar23 + 8))(lVar17,lVar6);
    param_1 = plVar9;
    plVar22 = plVar12;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar24._8_8_ = plVar12;
    auVar24._0_8_ = plVar9;
    return auVar24;
  }
  func_0x000107c60e78(plVar9,plVar12);
  *(long **)(lVar17 + -0x50) = unaff_x26;
  *(long **)(lVar17 + -0x48) = plVar22;
  *(long **)(lVar17 + -0x40) = param_1;
  *(long **)(lVar17 + -0x38) = plVar5;
  *(long *)(lVar17 + -0x30) = lVar19;
  *(long **)(lVar17 + -0x28) = plVar7;
  *(long *)(lVar17 + -0x20) = lVar17;
  *(long *)(lVar17 + -0x18) = lVar6;
  *(undefined1 **)(lVar17 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar17 + -8) = FUN_10175661c;
  puVar1 = *(undefined **)((long)plVar9 + _DAT_1130774d8);
  uVar2 = ((undefined8 *)((long)plVar9 + _DAT_1130774d8))[1];
  puVar20 = puVar1;
  uVar21 = uVar2;
  if (uVar2 >> 0x3c < 0xf) goto LAB_101756830;
  uVar16 = ((undefined8 *)((long)plVar9 + _DAT_1130774e0))[1];
  if (uVar16 >> 0x3c < 0xf) {
    puVar18 = *(undefined **)((long)plVar9 + _DAT_1130774e0);
    uVar3 = (uint)(uVar16 >> 0x20);
    uVar15 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar15 != 0) {
        iVar14 = (int)((ulong)puVar18 >> 0x20);
        if (SBORROW4(iVar14,(int)puVar18)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101756858);
          (*pcVar4)();
        }
        lVar19 = (long)(iVar14 - (int)puVar18);
        goto LAB_1017566dc;
      }
      if ((uVar16 >> 0x30 & 0xff) == 0) goto LAB_101756724;
LAB_1017566f4:
      uVar21 = uVar16;
      if (*(char *)((long)plVar9 + _DAT_1130774e8) == '\x01') {
        puVar20 = puVar18;
        FUN_1017562d4(puVar18);
LAB_1017567b8:
        puVar11 = puVar20;
        uVar13 = uVar21;
        if (0xe < uVar21 >> 0x3c) goto LAB_101756804;
        func_0x000100de78a0(puVar20,uVar21);
        func_0x0001000b44c0(puVar18,uVar16);
        func_0x0001000b44c0(puVar20,uVar21);
        puVar11 = (undefined *)0x0;
        uVar13 = 0xf000000000000000;
      }
      else {
        puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c610f8();
        puVar20 = puVar18;
        func_0x000107c5ee20(puVar18);
        func_0x000107c4635c();
        func_0x000107c61170(puVar20);
        if (puVar11 != (undefined *)0x0) {
          puVar10 = puVar11;
          func_0x000107c60bb4(0x3fe0000000000000);
          func_0x000107c61180();
          if (puVar10 != (undefined *)0x0) {
            puVar20 = puVar10;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar10);
            func_0x000107c61170(puVar11);
            goto LAB_1017567b8;
          }
          func_0x000107c61170(puVar11);
        }
        puVar11 = (undefined *)0x0;
        uVar13 = 0xf000000000000000;
LAB_101756804:
        func_0x000100de78a0(puVar11,uVar13);
        func_0x0001000b44c0(puVar18,uVar16);
        puVar20 = puVar11;
        uVar21 = uVar13;
      }
      func_0x0001000b44c0(puVar11,uVar13);
      goto LAB_101756830;
    }
    if (uVar15 == 2) {
      lVar19 = *(long *)(puVar18 + 0x18) - *(long *)(puVar18 + 0x10);
      if (SBORROW8(*(long *)(puVar18 + 0x18),*(long *)(puVar18 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1017566c8);
        (*pcVar4)();
      }
LAB_1017566dc:
      func_0x00010006c00c(puVar18,uVar16);
      if (0 < lVar19) goto LAB_1017566f4;
    }
LAB_101756724:
    func_0x0001000b44c0(puVar18,uVar16);
  }
  puVar20 = (undefined *)0x0;
  uVar21 = 0xf000000000000000;
LAB_101756830:
  func_0x000100de78a0(puVar1,uVar2);
  auVar25._8_8_ = uVar21;
  auVar25._0_8_ = puVar20;
  return auVar25;
}



/* Entry: 10175661c; end: 101756857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10175661c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  
  puVar1 = *(undefined **)(param_1 + _DAT_1130774d8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130774d8))[1];
  puVar13 = puVar1;
  uVar14 = uVar2;
  if (uVar2 >> 0x3c < 0xf) goto LAB_101756830;
  uVar10 = ((undefined8 *)(param_1 + _DAT_1130774e0))[1];
  if (uVar10 >> 0x3c < 0xf) {
    puVar11 = *(undefined **)(param_1 + _DAT_1130774e0);
    uVar3 = (uint)(uVar10 >> 0x20);
    uVar9 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar9 != 0) {
        iVar8 = (int)((ulong)puVar11 >> 0x20);
        if (SBORROW4(iVar8,(int)puVar11)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101756858);
          (*pcVar4)();
        }
        lVar12 = (long)(iVar8 - (int)puVar11);
        goto LAB_1017566dc;
      }
      if ((uVar10 >> 0x30 & 0xff) == 0) goto LAB_101756724;
LAB_1017566f4:
      uVar14 = uVar10;
      if (*(char *)(param_1 + _DAT_1130774e8) == '\x01') {
        puVar13 = puVar11;
        FUN_1017562d4(puVar11);
LAB_1017567b8:
        puVar6 = puVar13;
        uVar7 = uVar14;
        if (0xe < uVar14 >> 0x3c) goto LAB_101756804;
        func_0x000100de78a0(puVar13,uVar14);
        func_0x0001000b44c0(puVar11,uVar10);
        func_0x0001000b44c0(puVar13,uVar14);
        puVar6 = (undefined *)0x0;
        uVar7 = 0xf000000000000000;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c610f8();
        puVar13 = puVar11;
        func_0x000107c5ee20(puVar11);
        func_0x000107c4635c();
        func_0x000107c61170(puVar13);
        if (puVar6 != (undefined *)0x0) {
          puVar5 = puVar6;
          func_0x000107c60bb4(0x3fe0000000000000);
          func_0x000107c61180();
          if (puVar5 != (undefined *)0x0) {
            puVar13 = puVar5;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar6);
            goto LAB_1017567b8;
          }
          func_0x000107c61170(puVar6);
        }
        puVar6 = (undefined *)0x0;
        uVar7 = 0xf000000000000000;
LAB_101756804:
        func_0x000100de78a0(puVar6,uVar7);
        func_0x0001000b44c0(puVar11,uVar10);
        puVar13 = puVar6;
        uVar14 = uVar7;
      }
      func_0x0001000b44c0(puVar6,uVar7);
      goto LAB_101756830;
    }
    if (uVar9 == 2) {
      lVar12 = *(long *)(puVar11 + 0x18) - *(long *)(puVar11 + 0x10);
      if (SBORROW8(*(long *)(puVar11 + 0x18),*(long *)(puVar11 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1017566c8);
        (*pcVar4)();
      }
LAB_1017566dc:
      func_0x00010006c00c(puVar11,uVar10);
      if (0 < lVar12) goto LAB_1017566f4;
    }
LAB_101756724:
    func_0x0001000b44c0(puVar11,uVar10);
  }
  puVar13 = (undefined *)0x0;
  uVar14 = 0xf000000000000000;
LAB_101756830:
  func_0x000100de78a0(puVar1,uVar2);
  auVar15._8_8_ = uVar14;
  auVar15._0_8_ = puVar13;
  return auVar15;
}



/* Entry: 101756858; end: 101756fd7;  */

/* WARNING: Possible PIC construction at 0x00010175698c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001017569d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101756bb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017569d4) */
/* WARNING: Removing unreachable block (ram,0x000101756c34) */
/* WARNING: Removing unreachable block (ram,0x0001017569e8) */
/* WARNING: Removing unreachable block (ram,0x000101756a2c) */
/* WARNING: Removing unreachable block (ram,0x000101756a98) */
/* WARNING: Removing unreachable block (ram,0x000101756aac) */
/* WARNING: Removing unreachable block (ram,0x000101756ab4) */
/* WARNING: Removing unreachable block (ram,0x000101756a34) */
/* WARNING: Removing unreachable block (ram,0x000101756b88) */
/* WARNING: Removing unreachable block (ram,0x000101756a54) */
/* WARNING: Removing unreachable block (ram,0x000101756a5c) */
/* WARNING: Removing unreachable block (ram,0x000101756a0c) */
/* WARNING: Removing unreachable block (ram,0x000101756a60) */
/* WARNING: Removing unreachable block (ram,0x000101756b8c) */
/* WARNING: Removing unreachable block (ram,0x000101756a78) */
/* WARNING: Removing unreachable block (ram,0x000101756a10) */
/* WARNING: Removing unreachable block (ram,0x000101756a84) */
/* WARNING: Removing unreachable block (ram,0x000101756a8c) */
/* WARNING: Removing unreachable block (ram,0x000101756a94) */
/* WARNING: Removing unreachable block (ram,0x000101756ad8) */
/* WARNING: Removing unreachable block (ram,0x000101756b20) */
/* WARNING: Removing unreachable block (ram,0x000101756ae4) */
/* WARNING: Removing unreachable block (ram,0x000101756b40) */
/* WARNING: Removing unreachable block (ram,0x000101756afc) */
/* WARNING: Removing unreachable block (ram,0x000101756b1c) */
/* WARNING: Removing unreachable block (ram,0x000101756a28) */
/* WARNING: Removing unreachable block (ram,0x000101756900) */
/* WARNING: Removing unreachable block (ram,0x000101756990) */
/* WARNING: Removing unreachable block (ram,0x000101756c30) */
/* WARNING: Removing unreachable block (ram,0x0001017569a4) */
/* WARNING: Removing unreachable block (ram,0x000101756bb4) */
/* WARNING: Removing unreachable block (ram,0x000101756bbc) */
/* WARNING: Removing unreachable block (ram,0x000101756bc0) */
/* WARNING: Removing unreachable block (ram,0x000101756c24) */
/* WARNING: Removing unreachable block (ram,0x000101756bcc) */
/* WARNING: Removing unreachable block (ram,0x000101756c28) */
/* WARNING: Removing unreachable block (ram,0x000101756be4) */
/* WARNING: Removing unreachable block (ram,0x000101756c00) */
/* WARNING: Removing unreachable block (ram,0x000101756b80) */

void FUN_101756858(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ***pppuStack_68;
  
  func_0x000107c4ca10();
  func_0x000107c61180();
  if (param_1 != 0) {
    pppuStack_68 = (undefined8 ****)0x0;
    uVar2 = 0;
    FUN_101756fd8(0,0x112d512f8,&PTR_PTR_1126b25d8);
    ppppuVar6 = &pppuStack_68;
    func_0x000107c5fc50(param_1,ppppuVar6,uVar2);
    func_0x000107c61170(param_1);
    ppppuVar5 = (undefined8 ****)pppuStack_68;
    if ((undefined8 ****)pppuStack_68 != (undefined8 ****)0x0) {
      ppppuVar7 = (undefined8 ****)((ulong)pppuStack_68 & 0xffffffffffffff8);
      if ((ulong)pppuStack_68 >> 0x3e == 0) {
        ppppuVar8 = (undefined8 ****)ppppuVar7[2];
      }
      else {
        ppppuVar8 = (undefined8 ****)pppuStack_68;
        if (-1 < (long)pppuStack_68) {
          ppppuVar8 = ppppuVar7;
        }
        func_0x000107c60480();
      }
      if (ppppuVar8 != (undefined8 ****)0x0) {
        if (((ulong)ppppuVar5 & 0xc000000000000001) == 0) {
          if (ppppuVar7[2] == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101756b88);
            (*pcVar1)();
          }
          pppuVar3 = ppppuVar5[4];
          func_0x000107c61174();
          ppppuVar5 = ppppuVar6;
        }
        else {
          pppuVar3 = (undefined8 ***)0x0;
          func_0x000101755998(0,ppppuVar5,&PTR_PTR_1126b25d8,0x112d512f8);
        }
        func_0x000107c4b7ec();
        func_0x000107c61180();
        if (pppuVar3 == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101756c30);
          (*pcVar1)();
        }
        pppuVar4 = pppuVar3;
        func_0x000107c5faec();
        func_0x000107c61170(pppuVar3);
        func_0x000107c5fb5c(pppuVar4,ppppuVar5);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(ppppuVar5);
      return;
    }
  }
  return;
}



/* Entry: 101756fd8; end: 10175705f;  */

void FUN_101756fd8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101757060; end: 10175708b;  */

void FUN_101757060(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10175708c; end: 1017570b3;  */

void FUN_10175708c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1017570b4; end: 1017570e7;  */

void FUN_1017570b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1017570e8; end: 1017570fb;  */

void FUN_1017570e8(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001017570f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1017570fc; end: 10175717f;  */

void FUN_1017570fc(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101757180; end: 1017571bb;  */

void FUN_101757180(void)

{
  FUN_101756230();
  return;
}



/* Entry: 1017571bc; end: 101757217;  */

void FUN_1017571bc(long param_1,long param_2)

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



/* Entry: 101757218; end: 10175756f;  */

/* WARNING: Removing unreachable block (ram,0x0001017573a8) */
/* WARNING: Removing unreachable block (ram,0x0001017574a8) */
/* WARNING: Removing unreachable block (ram,0x000101757400) */
/* WARNING: Removing unreachable block (ram,0x0001017574e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101757218(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 auStack_e8 [2];
  long alStack_d8 [7];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  uStack_98 = param_2;
  uStack_90 = param_3;
  puStack_88 = param_1;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar11 - extraout_x12;
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5c7fc();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c5edb4(lVar12,puVar5);
  func_0x000107c61170();
  func_0x000107c5eec4(puVar8);
  func_0x000107c5eeac();
  (**(code **)(lVar9 + 8))(puVar8,lVar2);
  puStack_78 = puVar5;
  uStack_70 = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
  func_0x000107c6142c(param_3);
  uVar10 = uStack_70;
  func_0x000107c5ed9c(lVar11,puStack_78,uStack_70);
  func_0x000107c6142c(uVar10);
  func_0x000107c5ee40(lVar11,0,uStack_98,uStack_90);
  puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x000107c610f8();
  puVar5 = puVar4;
  func_0x000107c5ed90();
  func_0x000107c48fd4();
  func_0x000107c61170(puVar5);
  (**(code **)(lVar13 + 8))(lVar12,lVar3);
  lVar2 = 0x112dc6880;
  func_0x0001000285a8(0x112dc6880,&UNK_10d9869d0);
  puVar7 = puStack_88;
  iVar1 = *(int *)(lVar2 + 0x30);
  *puStack_88 = puVar4;
  (**(code **)(lVar13 + 0x20))((long)puStack_88 + (long)iVar1,lVar11,lVar3);
  puVar6 = puVar7;
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar7,0,1,lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    *(long *)(lVar12 + -0x30) = lVar3;
    *(undefined8 **)(lVar12 + -0x28) = puVar7;
    *(long *)(lVar12 + -0x20) = lVar2;
    *(undefined **)(lVar12 + -0x18) = puVar4;
    *(undefined1 **)(lVar12 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(lVar12 + -8) = FUN_101757570;
    func_0x000100083b20(lVar12 + -0x38);
    uVar10 = *(undefined8 *)(lVar12 + -0x38);
    FUN_101757964();
    puVar7 = puVar6;
    func_0x000107c610f8();
    *(undefined8 *)((long)puVar7 + _DAT_112dc6890) = uVar10;
    *(undefined8 **)(lVar12 + -0x48) = puVar7;
    *(undefined8 **)(lVar12 + -0x40) = puVar6;
    lVar12 = lVar12 + -0x48;
    func_0x000107c61154(lVar12,PTR_s_init_1125d9248);
    *extraout_x8_01 = lVar12;
    return;
  }
  return;
}



/* Entry: 101757570; end: 1017575db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101757570(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101757964();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112dc6890) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1017575dc; end: 101757647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017575dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc6890) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101757648; end: 1017576a7; -[_TtC38CameraBIPAScopedFactoryServiceProvider26SCCameraBIPAScopedServices init] */

void FUN_101757648(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraBIPAScopedFactoryServiceProvider.SCCameraBIPAScopedServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101757674);
  (*pcVar1)();
}



/* Entry: 1017576a8; end: 1017576b7; -[_TtC38CameraBIPAScopedFactoryServiceProvider26SCCameraBIPAScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017576a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc6890));
  return;
}



/* Entry: 1017576b8; end: 101757723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017576b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104036c8;
  func_0x000107c613fc(&UNK_1104036c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101757a40,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101757724; end: 1017577bf;  */

void FUN_101757724(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104035d8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104035d8;
  return;
}



/* Entry: 1017577c0; end: 1017577f7;  */

void FUN_1017577c0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1017577f8; end: 1017577ff;  */

undefined8 FUN_1017577f8(void)

{
  return 0x1b;
}



/* Entry: 101757800; end: 101757933;  */

void FUN_101757800(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104036f0;
  func_0x000107c613fc(&UNK_1104036f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101757a18;
  func_0x00010058fa64(FUN_101757a18,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101757934; end: 101757963;  */

undefined ** FUN_101757934(void)

{
  return &PTR_DAT_11300bec8;
}



/* Entry: 101757964; end: 101757983;  */

void FUN_101757964(void)

{
  func_0x000107c61168(&PTR_PTR_1127e8eb0);
  return;
}



/* Entry: 101757984; end: 1017579d3;  */

undefined1  [16] FUN_101757984(void)

{
  return ZEXT816(0x110403628);
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c94030; end: 102c94067; -[AdPlaybackTransitionWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c94030(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f08898));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f088a0));
  return;
}



/* Entry: 102c94068; end: 102c94093; -[AdPlaybackTransitionWorkflow init] */

void FUN_102c94068(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdPlaybackTransitionWorkflow",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c94094);
  (*pcVar1)();
}



/* Entry: 102c94094; end: 102c9409b; -[AdPlaybackTransitionWorkflow adTrackContext:forAdResponse:snapIndex:isExitingAd:] */

void FUN_102c94094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(param_3);
  return;
}



/* Entry: 102c9409c; end: 102c941e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c9409c(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_88 [80];
  long lStack_38;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112f08898);
  func_0x000107c5fadc();
  func_0x000107c3d364();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar7 != 0) {
    func_0x0001041f3970();
    func_0x000107c61170(lVar7);
    if (param_1 != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_113068f48);
      func_0x000107c61174();
      func_0x000107c61170(param_1);
      lVar7 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      puVar6 = auStack_88;
      func_0x000107c61534();
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      ppuVar2 = &PTR____CFConstantStringClassReference_110f0bfd8;
      func_0x000107c5faec();
      *(undefined8 *)(lVar7 + 0x20) = ppuVar2;
      *(undefined1 **)(lVar7 + 0x28) = puVar6;
      func_0x000107c61174();
      uVar3 = uVar1;
      FUN_102c9489c();
      func_0x000107c61170(uVar1);
      uVar4 = 0;
      func_0x000104447f90();
      *(undefined8 *)(lVar7 + 0x48) = uVar4;
      *(undefined8 *)(lVar7 + 0x30) = uVar3;
      lVar5 = lVar7;
      func_0x000100214a84();
      func_0x000107c61588(lVar7);
      func_0x000100f15a0c((undefined8 *)(lVar7 + 0x20));
      lStack_38 = lVar5;
      FUN_102c94ad0(uVar1,&lStack_38);
      func_0x000107c61170(uVar1);
      return lStack_38;
    }
  }
  return 0;
}



/* Entry: 102c941e4; end: 102c94287; -[AdPlaybackTransitionWorkflow pagePropertiesForItemId:] */

void FUN_102c941e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c5faec();
  func_0x000107c61174(param_1);
  FUN_102c9409c(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c5f9dc(param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 102c94288; end: 102c94307;  */

undefined * FUN_102c94288(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000102c5918c();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102c94308; end: 102c94527;  */

ulong FUN_102c94308(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c94430);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_102c94288(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c9442c);
      (*pcVar1)();
    }
    func_0x000102c94430(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102c94528; end: 102c94593;  */

undefined8 FUN_102c94528(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
      return 0;
    }
    puVar1 = (undefined8 *)(param_1 + 0x20);
    uVar4 = *puVar1;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = puVar1[lVar3 * 2 + -2];
    uVar7 = puVar1[lVar3 * 2 + -1];
    uVar2 = 0;
    func_0x000104447358(0);
    func_0x000107c610f8();
    func_0x0001044471c8(uVar4,uVar5,uVar6,uVar7);
  }
  return uVar2;
}



/* Entry: 102c94594; end: 102c9489b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c94594(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(param_1 + _DAT_11308f260);
  if (lVar9 != 0) {
    lVar8 = *(long *)(lVar9 + _DAT_113090af8);
    if (lVar8 != 0) {
      func_0x0001044486f8(0);
      func_0x000107c61174();
      uVar2 = 2;
      func_0x0001044484c0();
      uVar10 = *(undefined8 *)(lVar8 + _DAT_113090ab0);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(uVar10);
      uVar10 = *(undefined8 *)(lVar8 + _DAT_113090ab8);
      FUN_102c94528(uVar10);
      uVar3 = 0;
      func_0x000104447108(0);
      func_0x000107c610f8();
      func_0x000104446d64(puVar4,uVar10,uVar3);
      uVar10 = 0;
      func_0x000104447770(0);
      func_0x000107c610f8();
      func_0x000104447400(uVar2,puVar4,uVar10);
      if ((ulong)puVar6 >> 0x3e == 0) {
        puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar6) {
          puVar4 = puVar6;
        }
        func_0x000107c60480(puVar4);
      }
      puVar5 = (undefined *)0x0;
      FUN_102c94308(0,puVar4 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar7 = (ulong)puVar5 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar7 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_102c94308(puVar6,uVar1 + 1,1,puVar5);
        uVar7 = (ulong)puVar6 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
      *(undefined8 *)(uVar7 + uVar1 * 8 + 0x20) = uVar2;
      func_0x000107c61170(lVar8);
    }
    lVar9 = *(long *)(lVar9 + _DAT_113090af0);
    if (lVar9 != 0) {
      func_0x0001044486f8(0);
      func_0x000107c61174();
      uVar2 = 1;
      func_0x0001044483cc();
      uVar10 = *(undefined8 *)(lVar9 + _DAT_113090ab0);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(uVar10);
      uVar10 = *(undefined8 *)(lVar9 + _DAT_113090ab8);
      FUN_102c94528(uVar10);
      uVar3 = 0;
      func_0x000104447108(0);
      func_0x000107c610f8();
      func_0x000104446d64(puVar4,uVar10,uVar3);
      uVar10 = 0;
      func_0x000104447770(0);
      func_0x000107c610f8();
      func_0x000104447400(uVar2,puVar4,uVar10);
      puVar4 = puVar6;
      func_0x000107c61550();
      if ((((int)puVar4 == 0) || ((long)puVar6 < 0)) ||
         (puVar4 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar6 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            puVar5 = puVar6;
          }
          func_0x000107c60480(puVar5);
        }
        puVar4 = (undefined *)0x0;
        FUN_102c94308(0,puVar5 + 1,1,puVar6);
      }
      uVar7 = (ulong)puVar4 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar7 + 0x10);
      puVar6 = puVar4;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_102c94308(puVar6,uVar1 + 1,1,puVar4);
        uVar7 = (ulong)puVar6 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
      *(undefined8 *)(uVar7 + uVar1 * 8 + 0x20) = uVar2;
      func_0x000107c61170(lVar9);
    }
  }
  return puVar6;
}



/* Entry: 102c9489c; end: 102c94acf;  */

void FUN_102c9489c(long param_1)

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
  
  if (cRam0000000112f063d0 == '\x01') {
    func_0x000102c5918c();
    func_0x000107c613fc();
    *(undefined8 *)(param_1 + 0x18) = 5;
    *(undefined8 *)(param_1 + 0x10) = 2;
    func_0x0001044486f8(0);
    uVar4 = 1;
    func_0x0001044483cc();
    uVar5 = uVar4;
    func_0x000107c5fdd0(uRam0000000112f06390);
    uVar3 = uRam0000000112f061d0;
    uVar2 = uRam0000000112f06190;
    uVar1 = uRam0000000112f06150;
    uVar7 = uRam0000000112f06110;
    uVar9 = 0;
    if (cRam0000000112f06350 == '\x01') {
      uVar9 = 0;
      func_0x000104447358(0);
      func_0x000107c610f8();
      func_0x0001044471c8(uVar3,uVar2,uVar1,uVar7);
    }
    uVar6 = 0;
    func_0x000104447108(0);
    uVar7 = uVar6;
    func_0x000107c610f8();
    func_0x000104446d64(uVar5,uVar9,uVar7);
    uVar8 = 0;
    func_0x000104447770(0);
    uVar7 = uVar8;
    func_0x000107c610f8();
    func_0x000104447400(uVar4,uVar5,uVar7);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    uVar4 = 2;
    func_0x0001044484c0();
    uVar5 = uVar4;
    func_0x000107c5fdd0(uRam0000000112f06310);
    uVar3 = uRam0000000112f062d0;
    uVar2 = uRam0000000112f06290;
    uVar1 = uRam0000000112f06250;
    uVar7 = uRam0000000112f06210;
    uVar9 = 0;
    if (cRam0000000112f06350 == '\x01') {
      uVar9 = 0;
      func_0x000104447358(0);
      func_0x000107c610f8();
      func_0x0001044471c8(uVar3,uVar2,uVar1,uVar7);
    }
    func_0x000107c610f8(uVar6);
    func_0x000104446d64(uVar5,uVar9,uVar6);
    func_0x000107c610f8(uVar8);
    func_0x000104447400(uVar4,uVar5,uVar8);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
  }
  else {
    FUN_102c94594();
  }
  func_0x000104447f90(0);
  func_0x000107c610f8();
  func_0x00010444782c(param_1);
  return;
}



/* Entry: 102c94ad0; end: 102c94b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c94ad0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 auStack_50 [3];
  undefined *puStack_38;
  
  if (cRam0000000112f06450 == '\x01') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f0bff8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bff8);
    auStack_50[0] = uRam0000000112f06410;
  }
  else {
    if (*(long *)(param_2 + _DAT_11308f268) == 0) {
      return;
    }
    func_0x000107c4223c();
    ppuVar1 = &PTR____CFConstantStringClassReference_110f0bff8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bff8);
    auStack_50[0] = param_1;
  }
  puStack_38 = PTR___sSdN_11034dd90;
  func_0x000100102934(auStack_50,ppuVar1,param_3);
  return;
}



/* Entry: 102c94b94; end: 102c94bb3;  */

void FUN_102c94b94(void)

{
  func_0x000107c61168(&PTR_PTR_11289b728);
  return;
}



/* Entry: 102c94bb4; end: 102c94bbf; -[SCAdPlaybackComposerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c94bb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f088d0;
  func_0x000107c61428(param_1 + _DAT_112f088d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c94bc0; end: 102c94bcb; -[SCAdPlaybackComposerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c94bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f088d0;
  func_0x000107c61428(param_1 + _DAT_112f088d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c94bcc; end: 102c94bd7; -[SCAdPlaybackComposerEntryPoint pageEventStreamService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c94bcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f088d8;
  func_0x000107c61428(param_1 + _DAT_112f088d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c94bd8; end: 102c94c1b;  */

void FUN_102c94bd8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102c94c1c; end: 102c94c27; -[SCAdPlaybackComposerEntryPoint setPageEventStreamService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c94c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f088d8;
  func_0x000107c61428(param_1 + _DAT_112f088d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c94c28; end: 102c94c7b;  */

void FUN_102c94c28(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c94c7c; end: 102c94d7f;  */

/* WARNING: Possible PIC construction at 0x000102c94d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c94d24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c94d10) */
/* WARNING: Removing unreachable block (ram,0x000102c94d28) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_102c94c7c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c4e244();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    FUN_102c7f638(0);
    func_0x000107c613fc();
    func_0x000107c61174(lVar1);
    func_0x000107c61174(unaff_x20);
    FUN_102c7f558(lVar1,unaff_x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102c94d80; end: 102c94da7; -[SCAdPlaybackComposerEntryPoint begin] */

void FUN_102c94d80(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c94c7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c94da8; end: 102c94deb; -[SCAdPlaybackComposerEntryPoint end] */

void FUN_102c94da8(undefined8 param_1)

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



/* Entry: 102c94dec; end: 102c94f83;  */

void FUN_102c94dec(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0efaa00)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010f105600,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdPlaybackImplementation/SCAdPlaybackComposerEntryPoint.swift",0x3d,2,
                            0x2b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c94f84);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5719c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c94f84; end: 102c9502f; -[SCAdPlaybackComposerEntryPoint setValue:forIvarName:] */

void FUN_102c94f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c94dec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c95030; end: 102c950a3; -[SCAdPlaybackComposerEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95030(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f088d0,0);
  func_0x000107c61614(param_1 + _DAT_112f088d8,0);
  *(undefined8 *)(param_1 + _DAT_112f088e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c950a4; end: 102c950d7;  */

void FUN_102c950a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c950d8; end: 102c9511f; -[SCAdPlaybackComposerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c950d8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f088d0);
  func_0x000107c61610(param_1 + _DAT_112f088d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f088e0));
  return;
}



/* Entry: 102c95120; end: 102c9513f;  */

void FUN_102c95120(void)

{
  func_0x000107c61168(&PTR_PTR_11289b7f0);
  return;
}



/* Entry: 102c95140; end: 102c9514b; -[SCAdFavoriteEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95140(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08910;
  func_0x000107c61428(param_1 + _DAT_112f08910,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c9514c; end: 102c95157; -[SCAdFavoriteEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9514c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08910;
  func_0x000107c61428(param_1 + _DAT_112f08910,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c95158; end: 102c95163; -[SCAdFavoriteEntryPoint adConfigProviderService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95158(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08918;
  func_0x000107c61428(param_1 + _DAT_112f08918,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c95164; end: 102c9516f; -[SCAdFavoriteEntryPoint setAdConfigProviderService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95164(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08918;
  func_0x000107c61428(param_1 + _DAT_112f08918,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c95170; end: 102c9517b; -[SCAdFavoriteEntryPoint boostServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95170(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08920;
  func_0x000107c61428(param_1 + _DAT_112f08920,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c9517c; end: 102c95187; -[SCAdFavoriteEntryPoint setBoostServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9517c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08920;
  func_0x000107c61428(param_1 + _DAT_112f08920,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c95188; end: 102c95193; -[SCAdFavoriteEntryPoint pageFeatureRegistryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95188(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08928;
  func_0x000107c61428(param_1 + _DAT_112f08928,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c95194; end: 102c951d7;  */

void FUN_102c95194(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102c951d8; end: 102c951e3; -[SCAdFavoriteEntryPoint setPageFeatureRegistryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c951d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08928;
  func_0x000107c61428(param_1 + _DAT_112f08928,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c951e4; end: 102c95237;  */

void FUN_102c951e4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c95238; end: 102c9565b;  */

/* WARNING: Possible PIC construction at 0x000102c954f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c95500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c9560c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c9561c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c955c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c955b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c955c4) */
/* WARNING: Removing unreachable block (ram,0x000102c95620) */
/* WARNING: Removing unreachable block (ram,0x000102c95610) */
/* WARNING: Removing unreachable block (ram,0x000102c95504) */
/* WARNING: Removing unreachable block (ram,0x000102c955f0) */
/* WARNING: Removing unreachable block (ram,0x000102c95528) */
/* WARNING: Removing unreachable block (ram,0x000102c955f8) */
/* WARNING: Removing unreachable block (ram,0x000102c954f4) */
/* WARNING: Removing unreachable block (ram,0x000102c955b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95238(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c3d290();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c3ebf0();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c4e248();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar6 = 0;
        FUN_102c81978();
        func_0x000107c613fc();
        *(undefined8 *)(lVar6 + 0x10) = 0;
        lVar6 = lVar3 + _DAT_113068e98;
        uVar7 = *(undefined8 *)(lVar6 + 0x18);
        lVar12 = *(long *)(lVar6 + 0x20);
        FUN_102c9594c(lVar6,uVar7);
        pcVar15 = *(code **)(lVar12 + 8);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        (*pcVar15)(uVar7,lVar12);
        uVar14 = *(undefined8 *)(lVar3 + _DAT_113068e88);
        uVar1 = *(undefined8 *)(lVar3 + _DAT_113068e80);
        uVar2 = ((undefined8 *)(lVar3 + _DAT_113068e80))[1];
        uVar13 = *(undefined8 *)(lVar3 + _DAT_113068ea0);
        uVar11 = *(undefined8 *)(lVar6 + 0x18);
        lVar12 = *(long *)(lVar6 + 0x20);
        FUN_102c9594c(lVar6,uVar11);
        pcVar15 = *(code **)(lVar12 + 0x38);
        func_0x000107c615f0(uVar13);
        func_0x000107c615f0(uVar14);
        func_0x000107c61434(uVar2);
        (*pcVar15)();
        uVar8 = uVar11;
        func_0x000107c614f0();
        (**(code **)(lVar12 + 0x10))();
        func_0x000107c615e8(uVar11);
        func_0x000107c4ac30();
        func_0x000107c61180();
        lVar9 = 0;
        func_0x000102c827b4();
        lVar6 = lVar9;
        func_0x000107c613fc();
        func_0x000107c61174();
        pcVar10 = "AdFavoriteWorkflow";
        func_0x0001000c10c0();
        func_0x000107c61180();
        *(char **)(lVar6 + 0x50) = pcVar10;
        uVar11 = 0;
        func_0x0001005f60b4();
        func_0x000107c613fc();
        func_0x0001005f60d4();
        *(undefined8 *)(lVar6 + 0x10) = uVar7;
        *(undefined8 *)(lVar6 + 0x18) = uVar14;
        *(undefined8 *)(lVar6 + 0x20) = uVar13;
        *(undefined8 *)(lVar6 + 0x28) = uVar8;
        *(long *)(lVar6 + 0x30) = lVar12;
        *(long *)(lVar6 + 0x38) = lVar5;
        *(undefined8 *)(lVar6 + 0x40) = uVar1;
        *(undefined8 *)(lVar6 + 0x48) = uVar2;
        *(undefined8 *)(lVar6 + 0x58) = uVar11;
        *(long *)(lVar6 + 0x60) = lVar4;
        *(undefined1 *)(lVar6 + 0x68) = 0;
        lVar4 = unaff_x20 + _DAT_113068e50;
        uVar7 = *(undefined8 *)(lVar4 + 0x18);
        lVar5 = *(long *)(lVar4 + 0x20);
        FUN_102c9594c(lVar4,uVar7);
        ppuStack_70 = &PTR_DAT_1105baa60;
        ppuStack_68 = &PTR_DAT_1105baa38;
        pcVar15 = *(code **)(lVar5 + 0x10);
        alStack_90[0] = lVar6;
        lStack_78 = lVar9;
        func_0x000107c6157c(lVar6);
        (*pcVar15)(alStack_90,uVar7,lVar5);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102c9565c; end: 102c95663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9565c(long *param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x68) & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(lVar3 + _DAT_11308c0c8);
      func_0x000107c30b1c();
      if (iVar1 == 0x10) {
        FUN_102c82060();
      }
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 102c95664; end: 102c9568b; -[SCAdFavoriteEntryPoint begin] */

void FUN_102c95664(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c95238();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c9568c; end: 102c956cf; -[SCAdFavoriteEntryPoint end] */

void FUN_102c9568c(undefined8 param_1)

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



/* Entry: 102c956d0; end: 102c9594b;  */

void FUN_102c956d0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_102c9594c(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ecce0)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef13320,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == 0x72655374736f6f62) && (param_3 == -0x12ffff8c9a9c968a)) ||
           (func_0x000107c605b8(0x72655374736f6f62,0xed00007365636976,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          FUN_102c9594c(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52dec();
        }
        else {
          uVar2 = 0xd00000000000001b;
          if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef0efa9a0)) &&
             (func_0x000107c605b8(0xd00000000000001b,0x800000010f105660,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "AdPlaybackImplementation/SCAdFavoriteEntryPoint.swift",0x35,2,0x32,
                                0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102c9594c);
            (*pcVar1)();
          }
          FUN_102c9594c(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c571a4();
        }
        goto LAB_102c9575c;
      }
    }
    FUN_102c9594c(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c522ac();
  }
LAB_102c9575c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c9594c; end: 102c9596f;  */

long * FUN_102c9594c(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 102c95970; end: 102c95a1b; -[SCAdFavoriteEntryPoint setValue:forIvarName:] */

void FUN_102c95970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c956d0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_102c95b74(auStack_50);
  return;
}



/* Entry: 102c95a1c; end: 102c95ab7; -[SCAdFavoriteEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95a1c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f08910,0);
  func_0x000107c61614(param_1 + _DAT_112f08918,0);
  func_0x000107c61614(param_1 + _DAT_112f08920,0);
  func_0x000107c61614(param_1 + _DAT_112f08928,0);
  *(undefined8 *)(param_1 + _DAT_112f08930) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c95ab8; end: 102c95aeb;  */

void FUN_102c95ab8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c95aec; end: 102c95b53; -[SCAdFavoriteEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95aec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f08910);
  func_0x000107c61610(param_1 + _DAT_112f08918);
  func_0x000107c61610(param_1 + _DAT_112f08920);
  func_0x000107c61610(param_1 + _DAT_112f08928);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f08930));
  return;
}



/* Entry: 102c95b54; end: 102c95b73;  */

void FUN_102c95b54(void)

{
  func_0x000107c61168(&PTR_PTR_11289b8b8);
  return;
}



/* Entry: 102c95b74; end: 102c95b93;  */

void FUN_102c95b74(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102c95b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102c95b94; end: 102c95b9f; -[SCAdReminderDeepLinkEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95b94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08960;
  func_0x000107c61428(param_1 + _DAT_112f08960,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c95ba0; end: 102c95bab; -[SCAdReminderDeepLinkEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08960;
  func_0x000107c61428(param_1 + _DAT_112f08960,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c95bac; end: 102c95bb7; -[SCAdReminderDeepLinkEntryPoint userFeatureLaunchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95bac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08968;
  func_0x000107c61428(param_1 + _DAT_112f08968,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c95bb8; end: 102c95bc3; -[SCAdReminderDeepLinkEntryPoint setUserFeatureLaunchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08968;
  func_0x000107c61428(param_1 + _DAT_112f08968,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c95bc4; end: 102c95bcf; -[SCAdReminderDeepLinkEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95bc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08970;
  func_0x000107c61428(param_1 + _DAT_112f08970,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c95bd0; end: 102c95bdb; -[SCAdReminderDeepLinkEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08970;
  func_0x000107c61428(param_1 + _DAT_112f08970,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c95bdc; end: 102c95be7; -[SCAdReminderDeepLinkEntryPoint countdownServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95bdc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08978;
  func_0x000107c61428(param_1 + _DAT_112f08978,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c95be8; end: 102c95bf3; -[SCAdReminderDeepLinkEntryPoint setCountdownServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95be8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08978;
  func_0x000107c61428(param_1 + _DAT_112f08978,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c95bf4; end: 102c95bff; -[SCAdReminderDeepLinkEntryPoint snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95bf4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08980;
  func_0x000107c61428(param_1 + _DAT_112f08980,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c95c00; end: 102c95c0b; -[SCAdReminderDeepLinkEntryPoint setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08980;
  func_0x000107c61428(param_1 + _DAT_112f08980,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c95c0c; end: 102c95c17; -[SCAdReminderDeepLinkEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95c0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08988;
  func_0x000107c61428(param_1 + _DAT_112f08988,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c95c18; end: 102c95c5b;  */

void FUN_102c95c18(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102c95c5c; end: 102c95c67; -[SCAdReminderDeepLinkEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c95c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08988;
  func_0x000107c61428(param_1 + _DAT_112f08988,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c95c68; end: 102c95cbb;  */

void FUN_102c95c68(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c95cbc; end: 102c95ee7;  */

/* WARNING: Possible PIC construction at 0x000102c95de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c95df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c95e04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c95eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c95ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c95e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c95e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c95e7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c95ea0) */
/* WARNING: Removing unreachable block (ram,0x000102c95e90) */
/* WARNING: Removing unreachable block (ram,0x000102c95ec0) */
/* WARNING: Removing unreachable block (ram,0x000102c95eb0) */
/* WARNING: Removing unreachable block (ram,0x000102c95e08) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000102c95df8) */
/* WARNING: Removing unreachable block (ram,0x000102c95de8) */
/* WARNING: Removing unreachable block (ram,0x000102c95e80) */

void FUN_102c95cbc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5d964();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4d52c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c40838();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c5b490();
          func_0x000107c61180();
          if (lVar5 != 0) {
            func_0x000107c5d9b4();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar6 = 0;
              FUN_102c8c760();
              func_0x000107c613fc();
              *(long *)(lVar6 + 0x10) = lVar1;
              *(long *)(lVar6 + 0x18) = lVar2;
              *(long *)(lVar6 + 0x20) = lVar3;
              *(long *)(lVar6 + 0x28) = lVar4;
              *(long *)(lVar6 + 0x30) = lVar5;
              *(long *)(lVar6 + 0x38) = unaff_x20;
              func_0x000107c61174(lVar1);
              func_0x000107c61174(lVar2);
              func_0x000107c61174(lVar3);
              func_0x000107c61174(lVar4);
              func_0x000107c61174(lVar5);
              func_0x000107c61174(unaff_x20);
              FUN_102c8c534();
              lVar1 = unaff_x20;
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c95ee8; end: 102c95f0f; -[SCAdReminderDeepLinkEntryPoint begin] */

void FUN_102c95ee8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c95cbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c95f10; end: 102c95f53; -[SCAdReminderDeepLinkEntryPoint end] */

void FUN_102c95f10(undefined8 param_1)

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



/* Entry: 102c95f54; end: 102c96297;  */

void FUN_102c95f54(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0xd000000000000019;
    if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10d2d20)) ||
       (func_0x000107c605b8(0xd000000000000019,0x800000010ef2d2e0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a328();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10edf60)) ||
         (func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c569f0();
      }
      else {
        uVar2 = 0xd000000000000011;
        if (((param_2 == -0x2fffffffffffffef) && (param_3 == -0x7ffffffef0efa940)) ||
           (func_0x000107c605b8(0xd000000000000011,0x800000010f1056c0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53a08();
        }
        else {
          if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e3670)) {
            uVar2 = 0xd000000000000013;
            func_0x000107c605b8(0xd000000000000013,0x800000010ef1c990,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0;
              if (((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef5f0)) &&
                 (func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "AdPlaybackImplementation/SCAdReminderDeepLinkEntryPoint.swift",
                                    0x3d,2,0x3e,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102c96298);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5a368();
              goto LAB_102c95fe0;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c594bc();
        }
      }
    }
  }
LAB_102c95fe0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c96298; end: 102c96343; -[SCAdReminderDeepLinkEntryPoint setValue:forIvarName:] */

void FUN_102c96298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c95f54(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c96344; end: 102c96407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c96344(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f08960,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f08968,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f08970,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f08978,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f08980,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f08988,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f08990) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c96408; end: 102c96427; -[SCAdReminderDeepLinkEntryPoint init] */

void FUN_102c96408(void)

{
  FUN_102c96344();
  return;
}



/* Entry: 102c96428; end: 102c9645b;  */

void FUN_102c96428(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c9645c; end: 102c964e3; -[SCAdReminderDeepLinkEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9645c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f08960);
  func_0x000107c61610(param_1 + _DAT_112f08968);
  func_0x000107c61610(param_1 + _DAT_112f08970);
  func_0x000107c61610(param_1 + _DAT_112f08978);
  func_0x000107c61610(param_1 + _DAT_112f08980);
  func_0x000107c61610(param_1 + _DAT_112f08988);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f08990));
  return;
}



/* Entry: 102c964e4; end: 102c96503;  */

void FUN_102c964e4(void)

{
  func_0x000107c61168(&PTR_PTR_11289b990);
  return;
}



/* Entry: 102c96504; end: 102c9659b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c96504(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f089c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c9659c; end: 102c965fb; -[_TtC30ArExperienceAdPlaybackServices30ArExperienceAdPlaybackServices init] */

void FUN_102c9659c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ArExperienceAdPlaybackServices.ArExperienceAdPlaybackServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c965c8);
  (*pcVar1)();
}



/* Entry: 102c965fc; end: 102c9660b; -[_TtC30ArExperienceAdPlaybackServices30ArExperienceAdPlaybackServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c965fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f089c0));
  return;
}



/* Entry: 102c9660c; end: 102c9662b;  */

void FUN_102c9660c(void)

{
  func_0x000107c61168(&PTR_PTR_11289ba78);
  return;
}



/* Entry: 102c9662c; end: 102c966ef;  */

void FUN_102c9662c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f089f0;
  func_0x0001000285a8(0x112f089f0,&UNK_10db3b630);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102c966f0; end: 102c966f3;  */

void FUN_102c966f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f08a00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3b640;
  func_0x000107c61520(&UNK_10db3b640,&UNK_1105bb958);
  puRam0000000112f08a00 = puVar1;
  return;
}



/* Entry: 102c966f4; end: 102c9675f;  */

void FUN_102c966f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f08a00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3b640;
  func_0x000107c61520(&UNK_10db3b640,&UNK_1105bb958);
  puRam0000000112f08a00 = puVar1;
  return;
}



/* Entry: 102c96760; end: 102c96763;  */

void FUN_102c96760(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f08a18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3b6e8;
  func_0x000107c61520(&UNK_10db3b6e8,&UNK_1105bb9e8);
  puRam0000000112f08a18 = puVar1;
  return;
}



/* Entry: 102c96764; end: 102c967cf;  */

void FUN_102c96764(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f08a18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3b6e8;
  func_0x000107c61520(&UNK_10db3b6e8,&UNK_1105bb9e8);
  puRam0000000112f08a18 = puVar1;
  return;
}



/* Entry: 102c967d0; end: 102c96853;  */

void FUN_102c967d0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102c96854; end: 102c96857;  */

void FUN_102c96854(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f08a30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3b758;
  func_0x000107c61520(&UNK_10db3b758,&UNK_1105bb9e8);
  puRam0000000112f08a30 = puVar1;
  return;
}



/* Entry: 102c96858; end: 102c96897;  */

void FUN_102c96858(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f08a30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3b758;
  func_0x000107c61520(&UNK_10db3b758,&UNK_1105bb9e8);
  puRam0000000112f08a30 = puVar1;
  return;
}



/* Entry: 102c96898; end: 102c9689b;  */

void FUN_102c96898(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f08a38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3b710;
  func_0x000107c61520(&UNK_10db3b710,&UNK_1105bb9e8);
  puRam0000000112f08a38 = puVar1;
  return;
}



/* Entry: 102c9689c; end: 102c968db;  */

void FUN_102c9689c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f08a38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3b710;
  func_0x000107c61520(&UNK_10db3b710,&UNK_1105bb9e8);
  puRam0000000112f08a38 = puVar1;
  return;
}



/* Entry: 102c968dc; end: 102c96a83;  */

void FUN_102c968dc(void)

{
  return;
}



/* Entry: 102c96a84; end: 102c96acf;  */

void FUN_102c96a84(undefined8 param_1)

{
  func_0x0001000285a8(0x112f08ac8,&UNK_10db3b7e0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102c96b3c,param_1);
  return;
}



/* Entry: 102c96ad0; end: 102c96b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c96ad0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102c96eec();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f08ad0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102c96b3c; end: 102c96b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c96b3c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102c96eec();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f08ad0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102c96b44; end: 102c96b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c96b44(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f08ad0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c96b90; end: 102c96ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c96b90(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uStack_61;
  long lStack_60;
  long lStack_58;
  
  lVar7 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_61 = *(undefined1 *)(lVar7 + 0x112f08b00);
    func_0x00010008a7c8(&lStack_60,&uStack_61);
    lVar2 = lStack_60;
    if (lStack_60 != 0) {
      func_0x000100083b20(&lStack_58);
      func_0x000107c61574(lVar2);
      lVar2 = lStack_58;
      if (lStack_58 != 0) {
        puVar4 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          FUN_102c96db4(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_102c96db4(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  return puVar5;
}



/* Entry: 102c96cd0; end: 102c96d2f; -[_TtC31AdPlaybackFeaturePluginRegistry35AdPlaybackFeaturePluginSaberService buildSaberPlugins] */

void FUN_102c96cd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c96b90();
  func_0x000107c61170(param_1);
  uVar2 = 0x112f07820;
  func_0x0001000285a8(0x112f07820,&UNK_10db3ac20);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102c96d30; end: 102c96d8f; -[_TtC31AdPlaybackFeaturePluginRegistry35AdPlaybackFeaturePluginSaberService init] */

void FUN_102c96d30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackFeaturePluginRegistry.AdPlaybackFeaturePluginSaberService",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c96d5c);
  (*pcVar1)();
}



/* Entry: 102c96d90; end: 102c96db3; -[_TtC31AdPlaybackFeaturePluginRegistry35AdPlaybackFeaturePluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c96d90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f08ad0));
  return;
}



/* Entry: 102c96db4; end: 102c96edb;  */

ulong FUN_102c96db4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c96edc);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_102c96f0c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c96ed8);
      (*pcVar1)();
    }
    FUN_102c96f8c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102c96edc; end: 102c96eeb;  */

undefined1  [16] FUN_102c96edc(void)

{
  return ZEXT816(0x1105bba68);
}



/* Entry: 102c96eec; end: 102c96f0b;  */

void FUN_102c96eec(void)

{
  func_0x000107c61168(&PTR_PTR_11289bb38);
  return;
}



/* Entry: 102c96f0c; end: 102c96f8b;  */

undefined * FUN_102c96f0c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000102c96da0();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



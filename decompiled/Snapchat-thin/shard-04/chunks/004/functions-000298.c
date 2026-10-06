/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10349d9a0; end: 10349ddfb;  */

/* WARNING: Possible PIC construction at 0x00010349daac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349db14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349db30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349dbcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349dbe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349dca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349dd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349dd64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349dd74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010349dd68) */
/* WARNING: Removing unreachable block (ram,0x00010349dd28) */
/* WARNING: Removing unreachable block (ram,0x00010349dca4) */
/* WARNING: Removing unreachable block (ram,0x00010349ddf8) */
/* WARNING: Removing unreachable block (ram,0x00010349dcb0) */
/* WARNING: Removing unreachable block (ram,0x00010349dbec) */
/* WARNING: Removing unreachable block (ram,0x00010349dbd0) */
/* WARNING: Removing unreachable block (ram,0x00010349dbd4) */
/* WARNING: Removing unreachable block (ram,0x00010349db34) */
/* WARNING: Removing unreachable block (ram,0x00010349dd98) */
/* WARNING: Removing unreachable block (ram,0x00010349db58) */
/* WARNING: Removing unreachable block (ram,0x00010349db18) */
/* WARNING: Removing unreachable block (ram,0x00010349db6c) */
/* WARNING: Removing unreachable block (ram,0x00010349db1c) */
/* WARNING: Removing unreachable block (ram,0x00010349dab0) */
/* WARNING: Removing unreachable block (ram,0x00010349dd78) */

void FUN_10349d9a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_b0 [8];
  undefined8 auStack_a8 [3];
  undefined1 auStack_90 [32];
  long lStack_70;
  
  lVar1 = 0x112d3bc20;
  puVar5 = &UNK_10d904ef0;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar7 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (lVar7 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar5);
  }
  lVar2 = param_1;
  func_0x000107c4a4d8();
  if ((int)lVar2 != 0) {
    lVar2 = param_1;
    func_0x000107c44300();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x40);
      lVar6 = *(long *)(unaff_x20 + 0x48);
      func_0x0001000a8868(unaff_x20 + 0x28,lVar3);
      (**(code **)(lVar6 + 8))();
      if (lVar3 == 0) {
        func_0x000107c615e8(lVar2);
      }
      else {
        func_0x000107c3ec78();
        func_0x000107c61180();
        if (lVar2 == 0) {
          lStack_70 = 0;
          lVar7 = param_1;
          func_0x000107c5d2d8();
          func_0x000107c61180();
          if (lVar7 == 0) {
            func_0x000107c5d2d8();
            func_0x000107c61180();
            if (param_1 == 0) {
              uVar4 = 0;
              func_0x000103b48d70(0);
              func_0x000107c610f8();
              *(undefined8 *)((long)auStack_a8 + lVar1) = 0;
              *(undefined8 *)((long)auStack_a8 + lVar1 + 8) = 0;
              auStack_90[lVar1] = 0;
              *(undefined8 *)((long)auStack_a8 + lVar1 + 0x10) = 0;
              auStack_b0[lVar1] = 0;
              func_0x000103b4868c(uVar4,0,0xe000000000000000,0,lStack_70,0,0xe000000000000000,0x14,0
                                 );
              uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
              lVar7 = *(long *)(unaff_x20 + 0x50);
              puVar5 = PTR_PTR_1126c3ce8;
              func_0x000107c610f8(PTR_PTR_1126c3ce8);
              func_0x000107c615f0(uVar4);
              func_0x000107c61174(lVar7);
              func_0x000107c48e44(puVar5);
              func_0x000107c615e8(uVar4);
            }
            else {
              func_0x000107c3d470();
              func_0x000107c61180();
              lVar7 = param_1;
            }
          }
          else {
            func_0x000107c3d2dc();
            func_0x000107c61180();
          }
        }
        else {
          func_0x000107c5faec();
          lVar7 = lVar2;
          lStack_70 = lVar6;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 10349ddfc; end: 10349de4f; -[_TtC42SponsoredLensInfoActionSheetNavigationImpl48SponsoredLensInfoActionSheetPreviewNavigatorImpl showInfoActionSheetForLensId:] */

void FUN_10349ddfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_10349d7a0(param_3,param_2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10349de50; end: 10349ded3;  */

void FUN_10349de50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c61174(uVar2);
    func_0x000107c61574(param_1);
    uVar1 = uVar2;
    func_0x000107c4ffe8(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 10349ded4; end: 10349df57;  */

void FUN_10349ded4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10349df58; end: 10349df63;  */

void FUN_10349df58(void)

{
  return;
}



/* Entry: 10349df64; end: 10349dfa7;  */

void FUN_10349df64(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10349dfa8; end: 10349e01f;  */

long FUN_10349dfa8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5d180();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    lVar1 = lVar2;
    func_0x000107c4d070(lVar2,param_2,1);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  return lVar1;
}



/* Entry: 10349e020; end: 10349e187;  */

undefined * FUN_10349e020(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_b0;
  puVar3 = &UNK_11065c340;
  puVar2 = puVar3;
  func_0x000107c613fc(&UNK_11065c340,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  func_0x000107c613fc(&UNK_11065c340,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_10349e680;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100e1779c;
  puStack_68 = &UNK_11065c358;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(ppuVar5);
  uStack_90 = 0x10349e688;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100e17304;
  puStack_98 = &UNK_11065c380;
  puStack_88 = puVar3;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c47be0(puVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puStack_88);
  puVar1 = puStack_58;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar1);
  return puVar4;
}



/* Entry: 10349e188; end: 10349e1e3;  */

void FUN_10349e188(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10349e1e4(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10349e1e4; end: 10349e447;  */

void FUN_10349e1e4(undefined *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_68,0,0);
  uVar7 = *(ulong *)(unaff_x20 + 0x20);
  if (uVar7 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar2 = uVar7;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c4d06c();
    func_0x000107c61180();
    func_0x000107c61428(unaff_x20 + 0x20,auStack_80,0x21,0);
    func_0x000107c615f0(uVar6);
    func_0x000103328cc0();
    uVar2 = *(ulong *)(unaff_x20 + 0x20);
    uVar8 = uVar2 & 0xffffffffffffff8;
    uVar7 = *(ulong *)(uVar8 + 0x10);
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar7) {
      uVar2 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_1033318c8(uVar2,uVar7 + 1,1);
      uVar8 = uVar2 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + 1;
    *(undefined8 *)(uVar8 + uVar7 * 8 + 0x20) = uVar6;
    *(ulong *)(unaff_x20 + 0x20) = uVar2;
    func_0x000107c614a8(auStack_80);
    func_0x000107c3e2c0(uVar6);
    func_0x000107c4f090(param_1);
    func_0x000107c61180();
    func_0x000107c615e8(uVar6);
    func_0x000107c61604(unaff_x20 + 0x18,param_1);
  }
  else {
    lVar3 = unaff_x20 + 0x18;
    func_0x000107c61618();
    if (lVar3 == 0) {
      return;
    }
    func_0x000107c61174();
    lVar4 = lVar3;
    func_0x000107c4f078();
    func_0x000107c61180();
    lVar1 = lVar3;
    while (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c49aa0();
      if ((int)lVar5 != 0) {
        func_0x000107c61170(lVar4);
        break;
      }
      func_0x000107c61170(lVar1);
      lVar5 = lVar4;
      func_0x000107c4f078();
      func_0x000107c61180();
      lVar1 = lVar4;
      lVar4 = lVar5;
    }
    param_1 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    func_0x000107c61428(unaff_x20 + 0x20,auStack_80,0x21,0);
    func_0x000107c61174();
    func_0x000103328cc0();
    uVar2 = *(ulong *)(unaff_x20 + 0x20);
    uVar8 = uVar2 & 0xffffffffffffff8;
    uVar7 = *(ulong *)(uVar8 + 0x10);
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar7) {
      uVar2 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_1033318c8(uVar2,uVar7 + 1,1);
      uVar8 = uVar2 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + 1;
    *(undefined **)(uVar8 + uVar7 * 8 + 0x20) = param_1;
    *(ulong *)(unaff_x20 + 0x20) = uVar2;
    func_0x000107c614a8(auStack_80);
    func_0x000107c3e2c0(param_1);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10349e448; end: 10349e60b;  */

void FUN_10349e448(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    func_0x00010349e4b8(param_1,param_2);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 10349e60c; end: 10349e65f;  */

void FUN_10349e60c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61610(unaff_x20 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10349e660; end: 10349e67f;  */

void FUN_10349e660(void)

{
  FUN_10349e020();
  return;
}



/* Entry: 10349e680; end: 10349e6ab;  */

void FUN_10349e680(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10349e1e4(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10349e6ac; end: 10349e737;  */

undefined8 FUN_10349e6ac(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = *unaff_x20;
  uVar6 = uVar4;
  func_0x000107c61550();
  if ((((int)uVar6 == 0) || ((long)uVar4 < 0)) || ((uVar4 >> 0x3e & 1) != 0)) {
    func_0x00010349e798();
  }
  uVar6 = uVar4 & 0xffffffffffffff8;
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 8;
    puVar3 = (undefined8 *)(lVar1 + 0x20);
    uVar5 = *puVar3;
    func_0x000107c610b8(puVar3,lVar1 + 0x28,(lVar7 - param_1) * 8);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar4;
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10349e738);
  (*pcVar2)();
}



/* Entry: 10349e738; end: 10349e7e7;  */

undefined8 FUN_10349e738(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *unaff_x20;
  
  uVar5 = *unaff_x20;
  uVar3 = uVar5;
  func_0x000107c61550();
  if ((((int)uVar3 == 0) || ((long)uVar5 < 0)) || ((uVar5 >> 0x3e & 1) != 0)) {
    func_0x00010349e798();
  }
  uVar3 = uVar5 & 0xffffffffffffff8;
  if (*(long *)(uVar3 + 0x10) != 0) {
    lVar4 = *(long *)(uVar3 + 0x10) + -1;
    uVar2 = *(undefined8 *)(uVar3 + lVar4 * 8 + 0x20);
    *(long *)(uVar3 + 0x10) = lVar4;
    *unaff_x20 = uVar5;
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10349e798);
  (*pcVar1)();
}



/* Entry: 10349e7e8; end: 10349e7fb;  */

void FUN_10349e7e8(long param_1,long param_2)

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



/* Entry: 10349e7fc; end: 10349e833; +[SCAdReportBlizzardReasonConverter blizzardReasonForReasonId:] */

undefined8 FUN_10349e7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  FUN_10349e8a4();
  func_0x000107c6142c(param_2);
  return param_3;
}



/* Entry: 10349e834; end: 10349e86f; -[SCAdReportBlizzardReasonConverter init] */

void FUN_10349e834(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10349e870; end: 10349e8a3;  */

void FUN_10349e870(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10349e8a4; end: 10349edff;  */

undefined8 FUN_10349e8a4(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = param_1;
  func_0x000103b87034();
  plVar1 = (long *)*plVar2;
  if ((plVar1 == param_1 && plVar2[1] == param_2) ||
     (func_0x000107c605b8(plVar1,plVar2[1],param_1,param_2,0), ((ulong)plVar1 & 1) != 0)) {
    return 0;
  }
  func_0x000103b8706c();
  plVar2 = (long *)*plVar1;
  if ((plVar2 != param_1 || plVar1[1] != param_2) &&
     (func_0x000107c605b8(plVar2,plVar1[1],param_1,param_2,0), ((ulong)plVar2 & 1) == 0)) {
    func_0x000103b8756c();
    plVar1 = (long *)*plVar2;
    if (((plVar1 != param_1) || (plVar2[1] != param_2)) &&
       (func_0x000107c605b8(plVar1,plVar2[1],param_1,param_2,0), ((ulong)plVar1 & 1) == 0)) {
      func_0x000103b870a4();
      plVar2 = (long *)*plVar1;
      if (((plVar2 == param_1) && (plVar1[1] == param_2)) ||
         (func_0x000107c605b8(plVar2,plVar1[1],param_1,param_2,0), ((ulong)plVar2 & 1) != 0)) {
        return 2;
      }
      func_0x000103b870dc();
      plVar1 = (long *)*plVar2;
      if (((plVar1 == param_1) && (plVar2[1] == param_2)) ||
         (func_0x000107c605b8(plVar1,plVar2[1],param_1,param_2,0), ((ulong)plVar1 & 1) != 0)) {
        return 3;
      }
      func_0x000103b87114();
      plVar2 = (long *)*plVar1;
      if (((plVar2 == param_1) && (plVar1[1] == param_2)) ||
         (func_0x000107c605b8(plVar2,plVar1[1],param_1,param_2,0), ((ulong)plVar2 & 1) != 0)) {
        return 4;
      }
      func_0x000103b8714c();
      plVar1 = (long *)*plVar2;
      if (((plVar1 == param_1) && (plVar2[1] == param_2)) ||
         (func_0x000107c605b8(plVar1,plVar2[1],param_1,param_2,0), ((ulong)plVar1 & 1) != 0)) {
        return 6;
      }
      func_0x000103b87184();
      plVar2 = (long *)*plVar1;
      if (((plVar2 != param_1) || (plVar1[1] != param_2)) &&
         (func_0x000107c605b8(plVar2,plVar1[1],param_1,param_2,0), ((ulong)plVar2 & 1) == 0)) {
        func_0x000103b87264();
        plVar1 = (long *)*plVar2;
        if (((plVar1 != param_1) || (plVar2[1] != param_2)) &&
           (func_0x000107c605b8(plVar1,plVar2[1],param_1,param_2,0), ((ulong)plVar1 & 1) == 0)) {
          func_0x000103b8729c();
          plVar2 = (long *)*plVar1;
          if (((plVar2 != param_1) || (plVar1[1] != param_2)) &&
             (func_0x000107c605b8(plVar2,plVar1[1],param_1,param_2,0), ((ulong)plVar2 & 1) == 0)) {
            func_0x000103b871bc();
            plVar1 = (long *)*plVar2;
            if (((plVar1 == param_1) && (plVar2[1] == param_2)) ||
               (func_0x000107c605b8(plVar1,plVar2[1],param_1,param_2,0), ((ulong)plVar1 & 1) != 0))
            {
              return 9;
            }
            func_0x000103b871f4();
            plVar2 = (long *)*plVar1;
            if (((plVar2 == param_1) && (plVar1[1] == param_2)) ||
               (func_0x000107c605b8(plVar2,plVar1[1],param_1,param_2,0), ((ulong)plVar2 & 1) != 0))
            {
              return 10;
            }
            func_0x000103b8722c();
            plVar1 = (long *)*plVar2;
            if (((plVar1 == param_1) && (plVar2[1] == param_2)) ||
               (func_0x000107c605b8(plVar1,plVar2[1],param_1,param_2,0), ((ulong)plVar1 & 1) != 0))
            {
              return 0xb;
            }
            func_0x000103b872d4();
            plVar2 = (long *)*plVar1;
            if (((plVar2 != param_1) || (plVar1[1] != param_2)) &&
               (func_0x000107c605b8(plVar2,plVar1[1],param_1,param_2,0), ((ulong)plVar2 & 1) == 0))
            {
              func_0x000103b8730c();
              plVar1 = (long *)*plVar2;
              if (((plVar1 != param_1) || (plVar2[1] != param_2)) &&
                 (func_0x000107c605b8(plVar1,plVar2[1],param_1,param_2,0), ((ulong)plVar1 & 1) == 0)
                 ) {
                func_0x000103b87344();
                plVar2 = (long *)*plVar1;
                if (((plVar2 != param_1) || (plVar1[1] != param_2)) &&
                   (func_0x000107c605b8(plVar2,plVar1[1],param_1,param_2,0),
                   ((ulong)plVar2 & 1) == 0)) {
                  func_0x000103b8737c();
                  plVar1 = (long *)*plVar2;
                  if (((plVar1 == param_1) && (plVar2[1] == param_2)) ||
                     (func_0x000107c605b8(plVar1,plVar2[1],param_1,param_2,0),
                     ((ulong)plVar1 & 1) != 0)) {
                    return 0xe;
                  }
                  func_0x000103b873b4();
                  plVar2 = (long *)*plVar1;
                  if (((plVar2 == param_1) && (plVar1[1] == param_2)) ||
                     (func_0x000107c605b8(plVar2,plVar1[1],param_1,param_2,0),
                     ((ulong)plVar2 & 1) != 0)) {
                    return 0xf;
                  }
                  func_0x000103b873ec();
                  plVar1 = (long *)*plVar2;
                  if (((plVar1 != param_1) || (plVar2[1] != param_2)) &&
                     (func_0x000107c605b8(plVar1,plVar2[1],param_1,param_2,0),
                     ((ulong)plVar1 & 1) == 0)) {
                    func_0x000103b8745c();
                    plVar2 = (long *)*plVar1;
                    if (((plVar2 != param_1) || (plVar1[1] != param_2)) &&
                       (func_0x000107c605b8(plVar2,plVar1[1],param_1,param_2,0),
                       ((ulong)plVar2 & 1) == 0)) {
                      func_0x000103b87424();
                      plVar1 = (long *)*plVar2;
                      if (((plVar1 != param_1) || (plVar2[1] != param_2)) &&
                         (func_0x000107c605b8(plVar1,plVar2[1],param_1,param_2,0),
                         ((ulong)plVar1 & 1) == 0)) {
                        func_0x000103b87494();
                        plVar2 = (long *)*plVar1;
                        if (((plVar2 != param_1) || (plVar1[1] != param_2)) &&
                           (func_0x000107c605b8(plVar2,plVar1[1],param_1,param_2,0),
                           ((ulong)plVar2 & 1) == 0)) {
                          func_0x000103b874cc();
                          plVar1 = (long *)*plVar2;
                          if ((plVar1 == param_1) && (plVar2[1] == param_2)) {
                            return 0x13;
                          }
                          func_0x000107c605b8(plVar1,plVar2[1],param_1,param_2,0);
                          if (((ulong)plVar1 & 1) != 0) {
                            return 0x13;
                          }
                          return 0xffffffffffffffff;
                        }
                        return 0x12;
                      }
                      return 0x10;
                    }
                  }
                  return 0x11;
                }
              }
              return 0xd;
            }
            return 0xc;
          }
        }
      }
      return 8;
    }
  }
  return 1;
}



/* Entry: 10349ee00; end: 10349ee1f;  */

void FUN_10349ee00(void)

{
  func_0x000107c61168(&PTR_PTR_1128de578);
  return;
}



/* Entry: 10349ee20; end: 10349ee23;  */

undefined8 FUN_10349ee20(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = param_1;
  func_0x000103b87534();
  plVar1 = (long *)*plVar3;
  if ((plVar1 == param_1 && plVar3[1] == param_2) ||
     (func_0x000107c605b8(plVar1,plVar3[1],param_1,param_2,0), ((ulong)plVar1 & 1) != 0)) {
    uVar2 = 2;
  }
  else {
    func_0x000103b8756c();
    plVar3 = (long *)*plVar1;
    if ((plVar3 != param_1 || plVar1[1] != param_2) &&
       (func_0x000107c605b8(plVar3,plVar1[1],param_1,param_2,0), ((ulong)plVar3 & 1) == 0)) {
      func_0x000103b875a4();
      plVar1 = (long *)*plVar3;
      if (((plVar1 != param_1) || (plVar3[1] != param_2)) &&
         (func_0x000107c605b8(plVar1,plVar3[1],param_1,param_2,0), ((ulong)plVar1 & 1) == 0)) {
        func_0x000103b875dc();
        plVar3 = (long *)*plVar1;
        if (((plVar3 == param_1) && (plVar1[1] == param_2)) ||
           (func_0x000107c605b8(plVar3,plVar1[1],param_1,param_2,0), ((ulong)plVar3 & 1) != 0)) {
          return 3;
        }
        func_0x000103b87614();
        plVar1 = (long *)*plVar3;
        if (((plVar1 != param_1) || (plVar3[1] != param_2)) &&
           (func_0x000107c605b8(plVar1,plVar3[1],param_1,param_2,0), ((ulong)plVar1 & 1) == 0)) {
          func_0x000103b8764c();
          plVar3 = (long *)*plVar1;
          if ((plVar3 == param_1) && (plVar1[1] == param_2)) {
            return 5;
          }
          func_0x000107c605b8(plVar3,plVar1[1],param_1,param_2,0);
          if (((ulong)plVar3 & 1) != 0) {
            return 5;
          }
          return 0;
        }
        return 4;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10349ee24; end: 10349ee5b; +[SCAdReportHideAdReasonConverter adHidingReasonForReasonId:] */

undefined8 FUN_10349ee24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  FUN_10349eedc();
  func_0x000107c6142c(param_2);
  return param_3;
}



/* Entry: 10349ee5c; end: 10349ee6b; +[SCAdReportHideAdReasonConverter adHiddenReasonTypeFromReason:] */

long FUN_10349ee5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (4 < param_3 - 1U) {
    param_3 = 0;
  }
  return param_3;
}



/* Entry: 10349ee6c; end: 10349eea7; -[SCAdReportHideAdReasonConverter init] */

void FUN_10349ee6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10349eea8; end: 10349eedb;  */

void FUN_10349eea8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10349eedc; end: 10349f05b;  */

undefined8 FUN_10349eedc(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = param_1;
  func_0x000103b87534();
  plVar1 = (long *)*plVar3;
  if ((plVar1 == param_1 && plVar3[1] == param_2) ||
     (func_0x000107c605b8(plVar1,plVar3[1],param_1,param_2,0), ((ulong)plVar1 & 1) != 0)) {
    uVar2 = 2;
  }
  else {
    func_0x000103b8756c();
    plVar3 = (long *)*plVar1;
    if ((plVar3 != param_1 || plVar1[1] != param_2) &&
       (func_0x000107c605b8(plVar3,plVar1[1],param_1,param_2,0), ((ulong)plVar3 & 1) == 0)) {
      func_0x000103b875a4();
      plVar1 = (long *)*plVar3;
      if (((plVar1 != param_1) || (plVar3[1] != param_2)) &&
         (func_0x000107c605b8(plVar1,plVar3[1],param_1,param_2,0), ((ulong)plVar1 & 1) == 0)) {
        func_0x000103b875dc();
        plVar3 = (long *)*plVar1;
        if (((plVar3 == param_1) && (plVar1[1] == param_2)) ||
           (func_0x000107c605b8(plVar3,plVar1[1],param_1,param_2,0), ((ulong)plVar3 & 1) != 0)) {
          return 3;
        }
        func_0x000103b87614();
        plVar1 = (long *)*plVar3;
        if (((plVar1 != param_1) || (plVar3[1] != param_2)) &&
           (func_0x000107c605b8(plVar1,plVar3[1],param_1,param_2,0), ((ulong)plVar1 & 1) == 0)) {
          func_0x000103b8764c();
          plVar3 = (long *)*plVar1;
          if ((plVar3 == param_1) && (plVar1[1] == param_2)) {
            return 5;
          }
          func_0x000107c605b8(plVar3,plVar1[1],param_1,param_2,0);
          if (((ulong)plVar3 & 1) != 0) {
            return 5;
          }
          return 0;
        }
        return 4;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10349f05c; end: 10349f07b;  */

void FUN_10349f05c(void)

{
  func_0x000107c61168(&PTR_PTR_1128de628);
  return;
}



/* Entry: 10349f07c; end: 10349f423;  */

void FUN_10349f07c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar12;
  undefined1 *puVar13;
  undefined1 auStack_690 [8];
  long lStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 *puStack_670;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined1 auStack_610 [16];
  undefined8 uStack_600;
  
  lVar8 = 0x112dcbcf8;
  puStack_670 = param_1;
  func_0x0001000285a8(0x112dcbcf8,&UNK_10d98e3f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_690 + -extraout_x8;
  lVar8 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar13 - extraout_x8_00;
  lVar8 = 0x112dcbf08;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_678 = 0xc000000000000000;
  uStack_680 = 0;
  uStack_658 = 0xc000000000000000;
  uStack_660 = 0;
  uStack_648 = 0;
  lStack_650 = 0;
  uStack_638 = 0;
  uStack_640 = 0;
  uStack_628 = 0;
  uStack_630 = 0;
  uStack_620 = 0;
  lVar8 = param_3;
  FUN_1034b0fc0(param_2);
  puVar6 = puStack_670;
  if (unaff_x21 == 0) {
    lStack_688 = lVar12 - extraout_x8_01;
    func_0x00010349f458(0,0,0);
    lStack_650 = lVar8;
    uStack_648 = param_4;
    uStack_640 = param_5;
    func_0x000107c610b4(auStack_610,param_3 + 8,0x5a8);
    iVar7 = (int)auStack_610;
    func_0x00010189c838();
    uVar2 = 0;
    if (iVar7 != 1) {
      uVar2 = uStack_600;
    }
    func_0x000103bfc9d0(puVar13,uVar2);
    lVar8 = 0;
    func_0x0001046d90b0();
    puVar9 = puVar13;
    (**(code **)(*(long *)(lVar8 + -8) + 0x30))(puVar13,1,lVar8);
    if ((int)puVar9 == 1) {
      func_0x00010349f4cc(puVar13,0x112dcbcf8,&UNK_10d98e3f0);
    }
    else {
      func_0x00010349f484(puVar13 + *(int *)(lVar8 + 0x28),lVar12,0x112db3a00,&UNK_10d95dff0);
      func_0x00010349f50c(puVar13,&SUB_1046d90b0);
      lVar10 = 0;
      func_0x00010477ea9c();
      lVar11 = lVar12;
      (**(code **)(*(long *)(lVar10 + -8) + 0x30))(lVar12,1,lVar10);
      lVar8 = lStack_688;
      if ((int)lVar11 == 1) {
        func_0x00010349f4cc(lVar12,0x112db3a00,&UNK_10d95dff0);
      }
      else {
        func_0x00010349f484(lVar12 + *(int *)(lVar10 + 0x14),lStack_688,0x112dcbf08,&UNK_10d98e580);
        func_0x00010349f50c(lVar12,&SUB_10477ea9c);
        lVar11 = 0;
        func_0x000104760f24();
        lVar12 = lVar8;
        (**(code **)(*(long *)(lVar11 + -8) + 0x30))(lVar8,1,lVar11);
        if ((int)lVar12 == 1) {
          func_0x00010349f4cc(lVar8,0x112dcbf08,&UNK_10d98e580);
        }
        else {
          puVar1 = (ulong *)(lVar8 + *(int *)(lVar11 + 0x2c));
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          func_0x000107c61434(uVar5);
          func_0x00010349f50c(lVar8,&SUB_104760f24);
          if (uVar5 != 0) {
            uVar3 = uVar4 & 0xffffffffffff;
            if ((uVar5 & 0x2000000000000000) != 0) {
              uVar3 = uVar5 >> 0x38 & 0xf;
            }
            if (uVar3 == 0) {
              func_0x000107c6142c(uVar5);
            }
            else {
              func_0x000107c61434(uVar5);
              func_0x00010006c00c(0,0xc000000000000000);
              func_0x000107c6142c(uVar5);
              func_0x00010006c090(0,0xc000000000000000);
              func_0x000101597ae4(0,0,0,0);
              uStack_620 = uStack_678;
              uStack_628 = uStack_680;
              uStack_638 = uVar4;
              uStack_630 = uVar5;
            }
          }
        }
      }
    }
    puVar6[5] = uStack_638;
    puVar6[4] = uStack_640;
    puVar6[7] = uStack_628;
    puVar6[6] = uStack_630;
    puVar6[8] = uStack_620;
    puVar6[1] = uStack_658;
    *puVar6 = uStack_660;
    puVar6[3] = uStack_648;
    puVar6[2] = lStack_650;
  }
  else {
    FUN_10349f424(&uStack_660);
  }
  return;
}



/* Entry: 10349f424; end: 10349f547;  */

undefined8 FUN_10349f424(undefined8 param_1)

{
  (*(code *)(undefined *)0x103510af0)();
  return param_1;
}



/* Entry: 10349f548; end: 10349f85f;  */

undefined1  [16] FUN_10349f548(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 == 0) {
    auVar5._8_8_ = 1;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  uVar2 = 0;
  lVar3 = param_2;
  func_0x000107c5fb1c();
  func_0x000107c6142c(param_2);
  if ((((param_1 != 0x63617474615f6f6e) || (lVar3 != -0x12ffff8b919a9298)) &&
      (func_0x000107c605b8(0x63617474615f6f6e,0xed0000746e656d68,param_1,lVar3,0), (uVar2 & 1) == 0)
      ) && ((param_1 != 0x656e6f6e || (lVar3 != -0x1c00000000000000)))) {
    uVar2 = 0;
    func_0x000107c605b8(0x656e6f6e,0xe400000000000000,param_1,lVar3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_1 == 0x6d726f66676e6f6c) && (lVar3 == -0x11ff909a9b9689a1)) ||
         (func_0x000107c605b8(0x6d726f66676e6f6c,0xee006f656469765f,param_1,lVar3,0),
         (uVar2 & 1) != 0)) {
        func_0x000107c6142c(lVar3);
        uVar1 = 2;
      }
      else {
        uVar2 = 0x77656976626577;
        if (((((param_1 == 0x77656976626577) && (lVar3 == -0x1900000000000000)) ||
             (func_0x000107c605b8(0x77656976626577,0xe700000000000000,param_1,lVar3,0),
             (uVar2 & 1) != 0)) ||
            ((uVar2 = 0x776569765f626577, param_1 == 0x776569765f626577 &&
             (lVar3 == -0x1800000000000000)))) ||
           (((func_0x000107c605b8(0x776569765f626577,0xe800000000000000,param_1,lVar3,0),
             (uVar2 & 1) != 0 ||
             ((uVar2 = 0, param_1 == 0x775f65746f6d6572 && (lVar3 == -0x11ff889a96899d9b)))) ||
            (func_0x000107c605b8(0x775f65746f6d6572,0xee00776569766265,param_1,lVar3,0),
            (uVar2 & 1) != 0)))) {
          func_0x000107c6142c(lVar3);
          uVar1 = 3;
        }
        else {
          uVar2 = 0;
          if (((param_1 == 0x5f746c7561666564) && (lVar3 == -0x108d9a8c88908d9e)) ||
             (func_0x000107c605b8(0x5f746c7561666564,0xef726573776f7262,param_1,lVar3,0),
             (uVar2 & 1) != 0)) {
            func_0x000107c6142c(lVar3);
            uVar1 = 6;
          }
          else {
            uVar2 = 0x74736e695f707061;
            if (((param_1 == 0x74736e695f707061) && (lVar3 == -0x14ffffffff93939f)) ||
               (func_0x000107c605b8(0x74736e695f707061,0xeb000000006c6c61,param_1,lVar3,0),
               (uVar2 & 1) != 0)) {
              func_0x000107c6142c(lVar3);
              uVar1 = 4;
            }
            else {
              uVar2 = 0;
              if ((param_1 == 0x6e696c5f70656564) && (lVar3 == -0x16ffffffffffff95)) {
                func_0x000107c6142c(0xe90000000000006b);
                uVar1 = 5;
              }
              else {
                func_0x000107c605b8(0x6e696c5f70656564,0xe90000000000006b,param_1,lVar3,0);
                func_0x000107c6142c(lVar3);
                uVar1 = 5;
                if ((uVar2 & 1) == 0) {
                  uVar1 = 0;
                }
              }
            }
          }
        }
      }
      goto LAB_10349f60c;
    }
  }
  func_0x000107c6142c(lVar3);
  uVar1 = 1;
LAB_10349f60c:
  auVar4._8_8_ = 1;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Entry: 10349f860; end: 10349f877;  */

undefined1  [16] FUN_10349f860(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_1 + -1;
  if (9 < param_1 - 2U) {
    lVar1 = 0;
  }
  auVar2._8_8_ = 1;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 10349f878; end: 1034a024f;  */

void FUN_10349f878(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_6b0 [8];
  ulong uStack_6a8;
  long lStack_6a0;
  int iStack_694;
  double dStack_690;
  double dStack_688;
  undefined1 auStack_678 [184];
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  ulong uStack_5b0;
  double dStack_5a8;
  double dStack_5a0;
  ulong uStack_598;
  double dStack_590;
  double dStack_588;
  ulong uStack_580;
  double dStack_578;
  double dStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  ulong uStack_550;
  double dStack_548;
  double dStack_540;
  double dStack_538;
  double dStack_530;
  double dStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  ulong uStack_4f0;
  double dStack_4e8;
  double dStack_4e0;
  ulong uStack_4d8;
  double dStack_4d0;
  double dStack_4c8;
  ulong uStack_4c0;
  double dStack_4b8;
  double dStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  ulong uStack_490;
  double dStack_488;
  double dStack_480;
  double dStack_478;
  double dStack_470;
  double dStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_440;
  undefined8 uStack_438;
  ulong uStack_430;
  double dStack_428;
  double dStack_420;
  ulong uStack_418;
  double dStack_410;
  double dStack_408;
  ulong uStack_400;
  double dStack_3f8;
  double dStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  ulong uStack_3d0;
  double dStack_3c8;
  double dStack_3c0;
  double dStack_3b8;
  double dStack_3b0;
  double dStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  double dStack_368;
  double dStack_360;
  ulong uStack_358;
  double dStack_350;
  double dStack_348;
  ulong uStack_340;
  double dStack_338;
  double dStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  double dStack_308;
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 uStack_2cf;
  undefined1 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  ulong uStack_298;
  double dStack_290;
  double dStack_288;
  ulong uStack_280;
  double dStack_278;
  double dStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  undefined8 uStack_220;
  undefined8 uStack_20f;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  ulong uStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  ulong uStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  double dStack_128;
  double dStack_120;
  ulong uStack_118;
  double dStack_110;
  double dStack_108;
  ulong uStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = auStack_6b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)puVar9 - extraout_x8_00;
  FUN_1034a25bc(&uStack_140);
  dStack_178 = dStack_b8;
  dStack_180 = dStack_c0;
  dStack_168 = dStack_a8;
  dStack_170 = dStack_b0;
  uStack_158 = uStack_98;
  uStack_160 = uStack_a0;
  uStack_14f = (undefined7)uStack_8f;
  uStack_148 = (undefined1)((ulong)uStack_8f >> 0x38);
  uStack_157 = uStack_97;
  uStack_150 = uStack_90;
  dStack_1b8 = dStack_f8;
  uStack_1c0 = uStack_100;
  uStack_1a8 = uStack_e8;
  dStack_1b0 = dStack_f0;
  uStack_198 = uStack_d8;
  uStack_1a0 = uStack_e0;
  dStack_188 = dStack_c8;
  uStack_190 = uStack_d0;
  uStack_1f8 = uStack_138;
  uStack_200 = uStack_140;
  dStack_1e8 = dStack_128;
  uStack_1f0 = uStack_130;
  uStack_1d8 = uStack_118;
  dStack_1e0 = dStack_120;
  dStack_1c8 = dStack_108;
  dStack_1d0 = dStack_110;
  lVar8 = *(long *)(param_2 + 0x140);
  if (lVar8 == 0) {
    lVar5 = 0;
    lVar8 = -0x2000000000000000;
    dVar12 = dStack_120;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x138);
    func_0x000107c5fb1c();
    dVar12 = dStack_120;
  }
  lVar6 = 0;
  func_0x00010425412c();
  lStack_6a0 = lVar6;
  func_0x0001009f0578(param_2 + *(int *)(lVar6 + 0x98),lVar11);
  lVar6 = lVar11;
  (**(code **)(lVar10 + 0x30))(lVar11,1,lVar4);
  uStack_6a8 = 0;
  iStack_694 = (int)lVar6;
  if (iStack_694 != 1) {
    (**(code **)(lVar10 + 0x20))(puVar9,lVar11,lVar4);
    func_0x000107c5ee8c();
    (**(code **)(lVar10 + 8))(puVar9,lVar4);
    dVar12 = dVar12 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1034a0248);
      (*pcVar3)();
    }
    if (dVar12 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1034a024c);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar12) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1034a0250);
      (*pcVar3)();
    }
    uStack_6a8 = (ulong)dVar12;
  }
  uVar7 = 0x77656976626577;
  if (((((((lVar5 == 0x77656976626577) && (lVar8 == -0x1900000000000000)) ||
         (func_0x000107c605b8(0x77656976626577,0xe700000000000000,lVar5,lVar8,0), (uVar7 & 1) != 0))
        || ((uVar7 = 0x776569765f626577, lVar5 == 0x776569765f626577 &&
            (lVar8 == -0x1800000000000000)))) ||
       ((func_0x000107c605b8(0x776569765f626577,0xe800000000000000,lVar5,lVar8,0), (uVar7 & 1) != 0
        || ((uVar7 = 0, lVar5 == 0x775f65746f6d6572 && (lVar8 == -0x11ff889a96899d9b)))))) ||
      (func_0x000107c605b8(0x775f65746f6d6572,0xee00776569766265,lVar5,lVar8,0), (uVar7 & 1) != 0))
     || (((uVar7 = 0, lVar5 == 0x5f746c7561666564 && (lVar8 == -0x108d9a8c88908d9e)) ||
         (func_0x000107c605b8(0x5f746c7561666564,0xef726573776f7262,lVar5,lVar8,0), (uVar7 & 1) != 0
         )))) {
    func_0x000107c6142c(lVar8);
    dStack_688 = -2.0;
    dStack_690 = 0.0;
    uStack_438 = 0xc000000000000000;
    uStack_440 = 0;
    dStack_410 = 0.0;
    uStack_418 = 0;
    uStack_400 = 2;
    dStack_408 = -3.105036184601418e+231;
    dStack_3f0 = 0.0;
    dStack_3f8 = 0.0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    dStack_3c8 = 0.0;
    uStack_3d0 = 0;
    uStack_3e8 = 2;
    dStack_3c0 = -3.105036184601418e+231;
    uStack_390 = 0;
    uStack_3a0 = 0;
    uStack_398 = 0;
    if (iStack_694 != 1) {
      func_0x000100d5483c(0,0,0xf000000000000000);
      uStack_3d0 = uStack_6a8;
      dStack_3c0 = dStack_688;
      dStack_3c8 = dStack_690;
    }
    lVar8 = lStack_6a0;
    dVar13 = *(double *)(param_2 + *(int *)(lStack_6a0 + 0x9c));
    dStack_690 = dStack_3c8;
    func_0x000100d5483c(0,0,0xf000000000000000);
    dStack_420 = dStack_688;
    dStack_428 = dStack_690;
    dVar12 = (double)(ulong)*(byte *)(param_2 + *(int *)(lVar8 + 0xb0));
    uStack_430 = (ulong)(uint)(float)dVar13;
    func_0x000101556278(2,0,0);
    dStack_3a8 = dStack_688;
    dStack_3b0 = dStack_690;
    uStack_518 = uStack_398;
    uStack_520 = uStack_3a0;
    dStack_578 = dStack_3f8;
    uStack_580 = uStack_400;
    uStack_568 = uStack_3e8;
    dStack_570 = dStack_3f0;
    uStack_558 = uStack_3d8;
    uStack_560 = uStack_3e0;
    dStack_548 = dStack_3c8;
    uStack_550 = uStack_3d0;
    uStack_5b8 = uStack_438;
    uStack_5c0 = uStack_440;
    dStack_5a8 = dStack_428;
    uStack_5b0 = uStack_430;
    uStack_598 = uStack_418;
    dStack_5a0 = dStack_420;
    dStack_588 = dStack_408;
    dStack_590 = dStack_410;
    dStack_540 = dStack_3c0;
    dStack_528 = dStack_688;
    dStack_530 = dStack_690;
    dStack_480 = dStack_3c0;
    dStack_468 = dStack_688;
    dStack_470 = dStack_690;
    uStack_458 = uStack_398;
    uStack_460 = uStack_3a0;
    dStack_4b8 = dStack_3f8;
    uStack_4c0 = uStack_400;
    uStack_4a8 = uStack_3e8;
    dStack_4b0 = dStack_3f0;
    uStack_498 = uStack_3d8;
    uStack_4a0 = uStack_3e0;
    dStack_488 = dStack_3c8;
    uStack_490 = uStack_3d0;
    uStack_4f8 = uStack_438;
    uStack_500 = uStack_440;
    dStack_4e8 = dStack_428;
    uStack_4f0 = uStack_430;
    uStack_510 = uStack_390;
    uStack_450 = uStack_390;
    uStack_4d8 = uStack_418;
    dStack_4e0 = dStack_420;
    dStack_4c8 = dStack_408;
    dStack_4d0 = dStack_410;
    dStack_538 = dVar12;
    dStack_478 = dVar12;
    dStack_3b8 = dVar12;
    FUN_1034a2734(&uStack_500);
    dStack_2f8 = dStack_478;
    dStack_300 = dStack_480;
    dStack_2e8 = dStack_468;
    dStack_2f0 = dStack_470;
    uStack_2d8 = (undefined1)uStack_458;
    uStack_2d7 = (undefined7)((ulong)uStack_458 >> 8);
    uStack_2e0 = uStack_460;
    uStack_2d0 = (undefined1)uStack_450;
    uStack_2cf = (undefined7)((ulong)uStack_450 >> 8);
    dStack_338 = dStack_4b8;
    uStack_340 = uStack_4c0;
    uStack_328 = uStack_4a8;
    dStack_330 = dStack_4b0;
    uStack_318 = uStack_498;
    uStack_320 = uStack_4a0;
    dStack_308 = dStack_488;
    uStack_310 = uStack_490;
    uStack_378 = uStack_4f8;
    uStack_380 = uStack_500;
    dStack_368 = dStack_4e8;
    uStack_370 = uStack_4f0;
    uStack_358 = uStack_4d8;
    dStack_360 = dStack_4e0;
    dStack_348 = dStack_4c8;
    dStack_350 = dStack_4d0;
    func_0x0001034a25f8(&uStack_380);
    dStack_238 = dStack_178;
    dStack_240 = dStack_180;
    dStack_228 = dStack_168;
    dStack_230 = dStack_170;
    uStack_220 = uStack_160;
    uStack_20f = CONCAT17(uStack_148,uStack_14f);
    dStack_278 = dStack_1b8;
    uStack_280 = uStack_1c0;
    uStack_268 = uStack_1a8;
    dStack_270 = dStack_1b0;
    uStack_258 = uStack_198;
    uStack_260 = uStack_1a0;
    dStack_248 = dStack_188;
    uStack_250 = uStack_190;
    uStack_2b8 = uStack_1f8;
    uStack_2c0 = uStack_200;
    dStack_2a8 = dStack_1e8;
    uStack_2b0 = uStack_1f0;
    uStack_298 = uStack_1d8;
    dStack_2a0 = dStack_1e0;
    dStack_288 = dStack_1c8;
    dStack_290 = dStack_1d0;
    FUN_1034a2748(&uStack_5c0,auStack_678);
    func_0x0001034a263c(&uStack_2c0,0x112f730c0,&UNK_10dbce2d0);
    dStack_178 = dStack_2f8;
    dStack_180 = dStack_300;
    dStack_168 = dStack_2e8;
    dStack_170 = dStack_2f0;
    uStack_158 = uStack_2d8;
    uStack_160 = uStack_2e0;
    uStack_14f = uStack_2cf;
    uStack_148 = uStack_2c8;
    uStack_157 = uStack_2d7;
    uStack_150 = uStack_2d0;
    dStack_1b8 = dStack_338;
    uStack_1c0 = uStack_340;
    uStack_1a8 = uStack_328;
    dStack_1b0 = dStack_330;
    uStack_198 = uStack_318;
    uStack_1a0 = uStack_320;
    dStack_188 = dStack_308;
    uStack_190 = uStack_310;
    uStack_1f8 = uStack_378;
    uStack_200 = uStack_380;
    dStack_1e8 = dStack_368;
    uStack_1f0 = uStack_370;
    uStack_1d8 = uStack_358;
    dStack_1e0 = dStack_360;
    dStack_1c8 = dStack_348;
    dStack_1d0 = dStack_350;
    func_0x0001034a2784(&uStack_440);
  }
  else {
    uVar7 = 0x74736e695f707061;
    if (((lVar5 == 0x74736e695f707061) && (lVar8 == -0x14ffffffff93939f)) ||
       (func_0x000107c605b8(0x74736e695f707061,0xeb000000006c6c61,lVar5,lVar8,0), (uVar7 & 1) != 0))
    {
      func_0x000107c6142c(lVar8);
      uStack_4f8 = 0xc000000000000000;
      uStack_500 = 0;
      uStack_4f0 = 0;
      dStack_4e8 = 0.0;
      dStack_4e0 = -3.105036184601418e+231;
      uStack_4d8 = 0;
      uStack_4c0 = 2;
      dStack_4c8 = -3.105036184601418e+231;
      dStack_4d0 = 0.0;
      dStack_4b8 = 0.0;
      dStack_4b0 = 0.0;
      uStack_4a8 = 2;
      uStack_498 = 0;
      uStack_4a0 = 0;
      dStack_488 = 0.0;
      uStack_490 = 0;
      dStack_480 = -3.105036184601418e+231;
      if (iStack_694 != 1) {
        dStack_688 = -2.0;
        dStack_690 = 0.0;
        func_0x000100d5483c(0,0,0xf000000000000000);
        uStack_4d8 = uStack_6a8;
        dStack_4c8 = dStack_688;
        dStack_4d0 = dStack_690;
      }
      uStack_558 = uStack_498;
      uStack_560 = uStack_4a0;
      dStack_548 = dStack_488;
      uStack_550 = uStack_490;
      uStack_598 = uStack_4d8;
      dStack_5a0 = dStack_4e0;
      dStack_588 = dStack_4c8;
      dStack_590 = dStack_4d0;
      dStack_578 = dStack_4b8;
      uStack_580 = uStack_4c0;
      uStack_568 = uStack_4a8;
      dStack_570 = dStack_4b0;
      uStack_5b8 = uStack_4f8;
      uStack_5c0 = uStack_500;
      dStack_5a8 = dStack_4e8;
      uStack_5b0 = uStack_4f0;
      uStack_3d8 = uStack_498;
      uStack_3e0 = uStack_4a0;
      dStack_3c8 = dStack_488;
      uStack_3d0 = uStack_490;
      uStack_418 = uStack_4d8;
      dStack_420 = dStack_4e0;
      dStack_408 = dStack_4c8;
      dStack_410 = dStack_4d0;
      dStack_3f8 = dStack_4b8;
      uStack_400 = uStack_4c0;
      uStack_3e8 = uStack_4a8;
      dStack_3f0 = dStack_4b0;
      dStack_540 = dStack_480;
      dStack_3c0 = dStack_480;
      uStack_438 = uStack_4f8;
      uStack_440 = uStack_500;
      dStack_428 = dStack_4e8;
      uStack_430 = uStack_4f0;
      FUN_1034a26b0(&uStack_440);
      dStack_2f8 = dStack_3b8;
      dStack_300 = dStack_3c0;
      dStack_2e8 = dStack_3a8;
      dStack_2f0 = dStack_3b0;
      uStack_2d8 = (undefined1)uStack_398;
      uStack_2d7 = (undefined7)((ulong)uStack_398 >> 8);
      uStack_2e0 = uStack_3a0;
      uStack_2d0 = (undefined1)uStack_390;
      uStack_2cf = (undefined7)((ulong)uStack_390 >> 8);
      dStack_338 = dStack_3f8;
      uStack_340 = uStack_400;
      uStack_328 = uStack_3e8;
      dStack_330 = dStack_3f0;
      uStack_318 = uStack_3d8;
      uStack_320 = uStack_3e0;
      dStack_308 = dStack_3c8;
      uStack_310 = uStack_3d0;
      uStack_378 = uStack_438;
      uStack_380 = uStack_440;
      dStack_368 = dStack_428;
      uStack_370 = uStack_430;
      uStack_358 = uStack_418;
      dStack_360 = dStack_420;
      dStack_348 = dStack_408;
      dStack_350 = dStack_410;
      func_0x0001034a25f8(&uStack_380);
      dStack_238 = dStack_178;
      dStack_240 = dStack_180;
      dStack_228 = dStack_168;
      dStack_230 = dStack_170;
      uStack_220 = uStack_160;
      uStack_20f = CONCAT17(uStack_148,uStack_14f);
      dStack_278 = dStack_1b8;
      uStack_280 = uStack_1c0;
      uStack_268 = uStack_1a8;
      dStack_270 = dStack_1b0;
      uStack_258 = uStack_198;
      uStack_260 = uStack_1a0;
      dStack_248 = dStack_188;
      uStack_250 = uStack_190;
      uStack_2b8 = uStack_1f8;
      uStack_2c0 = uStack_200;
      dStack_2a8 = dStack_1e8;
      uStack_2b0 = uStack_1f0;
      uStack_298 = uStack_1d8;
      dStack_2a0 = dStack_1e0;
      dStack_288 = dStack_1c8;
      dStack_290 = dStack_1d0;
      FUN_1034a26c4(&uStack_5c0,auStack_678);
      func_0x0001034a263c(&uStack_2c0,0x112f730c0,&UNK_10dbce2d0);
      dStack_178 = dStack_2f8;
      dStack_180 = dStack_300;
      dStack_168 = dStack_2e8;
      dStack_170 = dStack_2f0;
      uStack_158 = uStack_2d8;
      uStack_160 = uStack_2e0;
      uStack_14f = uStack_2cf;
      uStack_148 = uStack_2c8;
      uStack_157 = uStack_2d7;
      uStack_150 = uStack_2d0;
      dStack_1b8 = dStack_338;
      uStack_1c0 = uStack_340;
      uStack_1a8 = uStack_328;
      dStack_1b0 = dStack_330;
      uStack_198 = uStack_318;
      uStack_1a0 = uStack_320;
      dStack_188 = dStack_308;
      uStack_190 = uStack_310;
      uStack_1f8 = uStack_378;
      uStack_200 = uStack_380;
      dStack_1e8 = dStack_368;
      uStack_1f0 = uStack_370;
      uStack_1d8 = uStack_358;
      dStack_1e0 = dStack_360;
      dStack_1c8 = dStack_348;
      dStack_1d0 = dStack_350;
      func_0x0001034a2700(&uStack_500);
    }
    else {
      uVar7 = 0;
      if ((lVar5 == 0x6e696c5f70656564) && (lVar8 == -0x16ffffffffffff95)) {
        func_0x000107c6142c(0xe90000000000006b);
      }
      else {
        func_0x000107c605b8(0x6e696c5f70656564,0xe90000000000006b,lVar5,lVar8,0);
        func_0x000107c6142c(lVar8);
        if ((uVar7 & 1) == 0) goto LAB_10349fd90;
      }
      dStack_688 = -2.0;
      dStack_690 = 0.0;
      uStack_4f8 = 0xc000000000000000;
      uStack_500 = 0;
      uStack_4f0 = 0;
      dStack_4e8 = 0.0;
      dStack_4e0 = -3.105036184601418e+231;
      uStack_4a0 = 0;
      uStack_4a8 = 0;
      uStack_490 = 0;
      uStack_498 = 0;
      if (iStack_694 != 1) {
        func_0x000100d5483c(0,0,0xf000000000000000);
        uStack_4f0 = uStack_6a8;
        dStack_4e0 = dStack_688;
        dStack_4e8 = dStack_690;
      }
      lVar8 = lStack_6a0;
      bVar1 = *(byte *)(param_2 + *(int *)(lStack_6a0 + 0xa4));
      dStack_690 = dStack_4e8;
      func_0x000101556278(2,0,0);
      dStack_4c8 = dStack_688;
      dStack_4d0 = dStack_690;
      bVar2 = *(byte *)(param_2 + *(int *)(lVar8 + 0xa8));
      uStack_4d8 = (ulong)bVar1;
      func_0x000101556278(2,0,0);
      dStack_4b0 = dStack_688;
      dStack_4b8 = dStack_690;
      dVar12 = (double)(ulong)*(byte *)(param_2 + *(int *)(lVar8 + 0xac));
      uStack_4c0 = (ulong)bVar2;
      func_0x000101556278(2,0,0);
      dStack_478 = dStack_688;
      dStack_480 = dStack_690;
      uStack_598 = uStack_4d8;
      dStack_5a0 = dStack_4e0;
      dStack_588 = dStack_4c8;
      dStack_590 = dStack_4d0;
      dStack_578 = dStack_4b8;
      uStack_580 = uStack_4c0;
      uStack_568 = uStack_4a8;
      dStack_570 = dStack_4b0;
      uStack_5b8 = uStack_4f8;
      uStack_5c0 = uStack_500;
      dStack_5a8 = dStack_4e8;
      uStack_5b0 = uStack_4f0;
      uStack_558 = uStack_498;
      uStack_560 = uStack_4a0;
      uStack_550 = uStack_490;
      dStack_538 = dStack_688;
      dStack_540 = dStack_690;
      uStack_3d8 = uStack_498;
      uStack_3e0 = uStack_4a0;
      uStack_3d0 = uStack_490;
      dStack_3b8 = dStack_688;
      dStack_3c0 = dStack_690;
      uStack_418 = uStack_4d8;
      dStack_420 = dStack_4e0;
      dStack_408 = dStack_4c8;
      dStack_410 = dStack_4d0;
      dStack_3f8 = dStack_4b8;
      uStack_400 = uStack_4c0;
      uStack_3e8 = uStack_4a8;
      dStack_3f0 = dStack_4b0;
      uStack_438 = uStack_4f8;
      uStack_440 = uStack_500;
      dStack_428 = dStack_4e8;
      uStack_430 = uStack_4f0;
      dStack_548 = dVar12;
      dStack_488 = dVar12;
      dStack_3c8 = dVar12;
      func_0x0001034a25e8(&uStack_440);
      dStack_2f8 = dStack_3b8;
      dStack_300 = dStack_3c0;
      dStack_2e8 = dStack_3a8;
      dStack_2f0 = dStack_3b0;
      uStack_2d8 = (undefined1)uStack_398;
      uStack_2d7 = (undefined7)((ulong)uStack_398 >> 8);
      uStack_2e0 = uStack_3a0;
      uStack_2d0 = (undefined1)uStack_390;
      uStack_2cf = (undefined7)((ulong)uStack_390 >> 8);
      dStack_338 = dStack_3f8;
      uStack_340 = uStack_400;
      uStack_328 = uStack_3e8;
      dStack_330 = dStack_3f0;
      uStack_318 = uStack_3d8;
      uStack_320 = uStack_3e0;
      dStack_308 = dStack_3c8;
      uStack_310 = uStack_3d0;
      uStack_378 = uStack_438;
      uStack_380 = uStack_440;
      dStack_368 = dStack_428;
      uStack_370 = uStack_430;
      uStack_358 = uStack_418;
      dStack_360 = dStack_420;
      dStack_348 = dStack_408;
      dStack_350 = dStack_410;
      func_0x0001034a25f8(&uStack_380);
      dStack_238 = dStack_178;
      dStack_240 = dStack_180;
      dStack_228 = dStack_168;
      dStack_230 = dStack_170;
      uStack_220 = uStack_160;
      uStack_20f = CONCAT17(uStack_148,uStack_14f);
      dStack_278 = dStack_1b8;
      uStack_280 = uStack_1c0;
      uStack_268 = uStack_1a8;
      dStack_270 = dStack_1b0;
      uStack_258 = uStack_198;
      uStack_260 = uStack_1a0;
      dStack_248 = dStack_188;
      uStack_250 = uStack_190;
      uStack_2b8 = uStack_1f8;
      uStack_2c0 = uStack_200;
      dStack_2a8 = dStack_1e8;
      uStack_2b0 = uStack_1f0;
      uStack_298 = uStack_1d8;
      dStack_2a0 = dStack_1e0;
      dStack_288 = dStack_1c8;
      dStack_290 = dStack_1d0;
      func_0x0001034a2600(&uStack_5c0,auStack_678);
      func_0x0001034a263c(&uStack_2c0,0x112f730c0,&UNK_10dbce2d0);
      dStack_178 = dStack_2f8;
      dStack_180 = dStack_300;
      dStack_168 = dStack_2e8;
      dStack_170 = dStack_2f0;
      uStack_158 = uStack_2d8;
      uStack_160 = uStack_2e0;
      uStack_14f = uStack_2cf;
      uStack_148 = uStack_2c8;
      uStack_157 = uStack_2d7;
      uStack_150 = uStack_2d0;
      dStack_1b8 = dStack_338;
      uStack_1c0 = uStack_340;
      uStack_1a8 = uStack_328;
      dStack_1b0 = dStack_330;
      uStack_198 = uStack_318;
      uStack_1a0 = uStack_320;
      dStack_188 = dStack_308;
      uStack_190 = uStack_310;
      uStack_1f8 = uStack_378;
      uStack_200 = uStack_380;
      dStack_1e8 = dStack_368;
      uStack_1f0 = uStack_370;
      uStack_1d8 = uStack_358;
      dStack_1e0 = dStack_360;
      dStack_1c8 = dStack_348;
      dStack_1d0 = dStack_350;
      func_0x0001034a267c(&uStack_500);
    }
  }
LAB_10349fd90:
  param_1[0x11] = dStack_178;
  param_1[0x10] = dStack_180;
  param_1[0x13] = dStack_168;
  param_1[0x12] = dStack_170;
  param_1[0x15] = CONCAT71(uStack_157,uStack_158);
  param_1[0x14] = uStack_160;
  param_1[0x17] = CONCAT71(uStack_147,uStack_148);
  param_1[0x16] = CONCAT71(uStack_14f,uStack_150);
  param_1[9] = dStack_1b8;
  param_1[8] = uStack_1c0;
  param_1[0xb] = uStack_1a8;
  param_1[10] = dStack_1b0;
  param_1[0xd] = uStack_198;
  param_1[0xc] = uStack_1a0;
  param_1[0xf] = dStack_188;
  param_1[0xe] = uStack_190;
  param_1[1] = uStack_1f8;
  *param_1 = uStack_200;
  param_1[3] = dStack_1e8;
  param_1[2] = uStack_1f0;
  param_1[5] = uStack_1d8;
  param_1[4] = dStack_1e0;
  param_1[7] = dStack_1c8;
  param_1[6] = dStack_1d0;
  param_1[0x19] = 0xc000000000000000;
  param_1[0x18] = 0;
  return;
}



/* Entry: 1034a0250; end: 1034a137f;  */

undefined1  [16] FUN_1034a0250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  double dVar19;
  undefined1 auVar20 [16];
  long alStack_1e0 [6];
  undefined8 *apuStack_1b0 [3];
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 auStack_130 [192];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0x112d3bc20;
  puVar9 = &UNK_10d904ef0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar18 = (undefined8 *)((long)apuStack_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  apuStack_1b0[2] = puVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar18 = (undefined8 *)((long)puVar18 - extraout_x12);
  lVar3 = 0;
  func_0x000107c5eec8();
  lStack_198 = *(long *)(lVar3 + -8);
  lStack_190 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_198 + 0x40));
  puVar13 = (undefined8 *)((long)puVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (undefined8 *)((long)puVar13 - extraout_x12_00);
  lVar3 = 0;
  func_0x000107c5eb9c();
  lStack_188 = *(long *)(lVar3 + -8);
  lStack_180 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_188 + 0x40));
  puVar16 = (undefined8 *)((long)puVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_10355e938();
  uVar14 = *(ulong *)(param_1 + 0x80);
  lStack_158 = lVar3;
  puStack_150 = puVar9;
  uStack_148 = param_3;
  if (uVar14 != 0) {
    uVar15 = *(ulong *)(param_1 + 0x78);
    uVar8 = uVar15 & 0xffffffffffff;
    if ((uVar14 & 0x2000000000000000) != 0) {
      uVar8 = uVar14 >> 0x38 & 0xf;
    }
    if (uVar8 != 0) {
      func_0x000107c61438(uVar14,2);
      func_0x00010006c00c(0,0xc000000000000000);
      func_0x000107c6142c(uVar14);
      func_0x00010006c090(0,0xc000000000000000);
      FUN_10355c604(uVar15,uVar14,0,0xc000000000000000);
    }
  }
  func_0x00010355caac(*(undefined1 *)(param_1 + 8),0,0xc000000000000000);
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a130c);
    (*pcVar2)();
  }
  func_0x00010355d210(lVar3,0,0xc000000000000000);
  func_0x00010355c764(lVar3 != 0,0,0xc000000000000000);
  lVar3 = *(long *)(param_1 + 0x98);
  if (lVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1310);
    (*pcVar2)();
  }
  func_0x00010355d2bc(lVar3,0,0xc000000000000000);
  func_0x00010355c80c(lVar3 != 0,0,0xc000000000000000);
  lVar3 = *(long *)(param_1 + 0xa0);
  if (lVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1314);
    (*pcVar2)();
  }
  func_0x00010355d368(lVar3,0,0xc000000000000000);
  func_0x00010355c8b4(lVar3 != 0,0,0xc000000000000000);
  if (*(long *)(param_1 + 0xa8) < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1318);
    (*pcVar2)();
  }
  func_0x00010355d164(*(long *)(param_1 + 0xa8),0,0xc000000000000000);
  dVar19 = *(double *)(param_1 + 0xb0) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a131c);
    (*pcVar2)();
  }
  if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1320);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1324);
    (*pcVar2)();
  }
  func_0x00010355c61c((long)dVar19,0,0xc000000000000000);
  if (*(long *)(param_1 + 0xb8) < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1328);
    (*pcVar2)();
  }
  func_0x00010355c6c0(*(long *)(param_1 + 0xb8),0,0xc000000000000000);
  dVar19 = *(double *)(param_1 + 0xc0) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a132c);
    (*pcVar2)();
  }
  if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1330);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1334);
    (*pcVar2)();
  }
  func_0x00010355d56c((long)dVar19,0,0xc000000000000000);
  dVar19 = *(double *)(param_1 + 200) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1338);
    (*pcVar2)();
  }
  if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a133c);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1340);
    (*pcVar2)();
  }
  func_0x00010355d414((long)dVar19,0,0xc000000000000000);
  dVar19 = *(double *)(param_1 + 0xd0) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1344);
    (*pcVar2)();
  }
  if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1348);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a134c);
    (*pcVar2)();
  }
  func_0x00010355d4c0((long)dVar19,0,0xc000000000000000);
  dVar19 = *(double *)(param_1 + 0xd8) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1350);
    (*pcVar2)();
  }
  if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1354);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1358);
    (*pcVar2)();
  }
  func_0x00010355d6c4((long)dVar19,0,0xc000000000000000);
  dVar19 = *(double *)(param_1 + 0xe0) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a135c);
    (*pcVar2)();
  }
  if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1360);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1364);
    (*pcVar2)();
  }
  apuStack_1b0[1] = puVar13;
  func_0x00010355d618((long)dVar19,0,0xc000000000000000);
  func_0x00010355ca04(*(undefined1 *)(param_1 + 9),0,0xc000000000000000);
  func_0x00010355c95c(*(undefined1 *)(param_1 + 10),0,0xc000000000000000);
  puVar13 = *(undefined8 **)(param_1 + 0xe8);
  func_0x00010355cb54(puVar13,0,0xc000000000000000);
  uVar14 = *(ulong *)(param_1 + 0xf8);
  if (uVar14 != 0) {
    uVar8 = (ulong)*(undefined8 **)(param_1 + 0xf0) & 0xffffffffffff;
    if ((uVar14 & 0x2000000000000000) != 0) {
      uVar8 = uVar14 >> 0x38 & 0xf;
    }
    if (uVar8 != 0) {
      uStack_168 = 0x2d;
      uStack_160 = 0xe100000000000000;
      uStack_178 = 0x2b;
      uStack_170 = 0xe100000000000000;
      puStack_140 = *(undefined8 **)(param_1 + 0xf0);
      puStack_138 = (undefined8 *)uVar14;
      func_0x000100e8b654();
      puVar9 = PTR___sSSN_11034da80;
      puVar16[-2] = puVar13;
      puVar16[-1] = puVar13;
      puVar16[-4] = PTR___sSSN_11034da80;
      puVar16[-3] = puVar13;
      puVar6 = &uStack_168;
      puVar5 = &uStack_178;
      func_0x000107c601fc(puVar6,puVar5,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
      uStack_168 = 0x5f;
      uStack_160 = 0xe100000000000000;
      uStack_178 = 0x2f;
      uStack_170 = 0xe100000000000000;
      puStack_140 = puVar6;
      puStack_138 = puVar5;
      puVar16[-2] = puVar13;
      puVar16[-1] = puVar13;
      puVar6 = &uStack_168;
      puVar10 = &uStack_178;
      puVar16[-4] = puVar9;
      puVar16[-3] = puVar13;
      func_0x000107c601fc(puVar6,puVar10,0,0,0,1,puVar9,puVar9);
      func_0x000107c6142c(puVar5);
      puStack_140 = puVar6;
      puStack_138 = puVar10;
      func_0x000107c5eb88(puVar16);
      puVar6 = puVar16;
      func_0x000107c601d8(puVar16,puVar9,puVar13);
      (**(code **)(lStack_188 + 8))(puVar16,lStack_180);
      func_0x000107c6142c(puVar10);
      uVar11 = 0x112d38270;
      puStack_140 = puVar6;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar4 = uVar11;
      func_0x00010011d734();
      puVar5 = (undefined8 *)0x0;
      puVar13 = (undefined8 *)0xe000000000000000;
      func_0x000107c5fa80(0,0xe000000000000000,uVar11,uVar4);
      func_0x000107c6142c(puVar6);
      puStack_140 = puVar5;
      puStack_138 = puVar13;
      func_0x000107c61434(puVar13);
      puVar6 = puVar5;
      func_0x000107c5fb5c(puVar5,puVar13);
      func_0x000107c6142c(puVar13);
      uVar14 = (ulong)puVar6 & 3;
      if (-1 < -(long)puVar6) {
        uVar14 = -(-(long)puVar6 & 3U);
      }
      if (0 < (long)uVar14) {
        uVar11 = 0xe100000000000000;
        func_0x000107c5fbc0(0x3d,0xe100000000000000,4 - uVar14);
        func_0x000107c5fb78();
        func_0x000107c6142c(uVar11);
        puVar5 = puStack_140;
        puVar13 = puStack_138;
      }
      puVar6 = puVar13;
      func_0x000107c5ee08(puVar5,puVar13,1);
      func_0x000107c6142c();
      if ((ulong)puVar6 >> 0x3c < 0xf) {
        FUN_10355cbf8(puVar5,puVar6);
        puVar13 = puVar5;
      }
    }
  }
  uVar14 = *(ulong *)(param_1 + 0x108);
  if (uVar14 != 0) {
    uVar8 = (ulong)*(undefined8 **)(param_1 + 0x100) & 0xffffffffffff;
    if ((uVar14 & 0x2000000000000000) != 0) {
      uVar8 = uVar14 >> 0x38 & 0xf;
    }
    if (uVar8 != 0) {
      uStack_168 = 0x2d;
      uStack_160 = 0xe100000000000000;
      uStack_178 = 0x2b;
      uStack_170 = 0xe100000000000000;
      puStack_140 = *(undefined8 **)(param_1 + 0x100);
      puStack_138 = (undefined8 *)uVar14;
      func_0x000100e8b654();
      puVar9 = PTR___sSSN_11034da80;
      puVar16[-2] = puVar13;
      puVar16[-1] = puVar13;
      puVar16[-4] = PTR___sSSN_11034da80;
      puVar16[-3] = puVar13;
      puVar6 = &uStack_168;
      puVar5 = &uStack_178;
      func_0x000107c601fc(puVar6,puVar5,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
      uStack_168 = 0x5f;
      uStack_160 = 0xe100000000000000;
      uStack_178 = 0x2f;
      uStack_170 = 0xe100000000000000;
      puStack_140 = puVar6;
      puStack_138 = puVar5;
      puVar16[-2] = puVar13;
      puVar16[-1] = puVar13;
      puVar6 = &uStack_168;
      puVar10 = &uStack_178;
      puVar16[-4] = puVar9;
      puVar16[-3] = puVar13;
      func_0x000107c601fc(puVar6,puVar10,0,0,0,1,puVar9,puVar9);
      func_0x000107c6142c(puVar5);
      puStack_140 = puVar6;
      puStack_138 = puVar10;
      func_0x000107c5eb88(puVar16);
      puVar6 = puVar16;
      func_0x000107c601d8(puVar16,puVar9,puVar13);
      (**(code **)(lStack_188 + 8))(puVar16,lStack_180);
      func_0x000107c6142c(puVar10);
      uVar11 = 0x112d38270;
      puStack_140 = puVar6;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar4 = uVar11;
      func_0x00010011d734();
      puVar5 = (undefined8 *)0x0;
      puVar13 = (undefined8 *)0xe000000000000000;
      func_0x000107c5fa80(0,0xe000000000000000,uVar11,uVar4);
      func_0x000107c6142c(puVar6);
      puStack_140 = puVar5;
      puStack_138 = puVar13;
      func_0x000107c61434(puVar13);
      puVar6 = puVar5;
      func_0x000107c5fb5c(puVar5,puVar13);
      func_0x000107c6142c(puVar13);
      uVar14 = (ulong)puVar6 & 3;
      if (-1 < -(long)puVar6) {
        uVar14 = -(-(long)puVar6 & 3U);
      }
      if (0 < (long)uVar14) {
        uVar11 = 0xe100000000000000;
        func_0x000107c5fbc0(0x3d,0xe100000000000000,4 - uVar14);
        func_0x000107c5fb78();
        func_0x000107c6142c(uVar11);
        puVar5 = puStack_140;
        puVar13 = puStack_138;
      }
      puVar6 = puVar13;
      func_0x000107c5ee08(puVar5,puVar13,1);
      func_0x000107c6142c();
      if ((ulong)puVar6 >> 0x3c < 0xf) {
        func_0x00010355cc88(puVar5,puVar6);
        puVar13 = puVar5;
      }
    }
  }
  uVar14 = *(ulong *)(param_1 + 0x118);
  if (uVar14 == 0) {
LAB_1034a0bc4:
    uVar14 = *(ulong *)(param_1 + 0x128);
    puVar17 = puVar13;
    puVar18 = puStack_140;
    puVar13 = puStack_138;
  }
  else {
    uVar8 = (ulong)*(undefined8 **)(param_1 + 0x110) & 0xffffffffffff;
    if ((uVar14 & 0x2000000000000000) != 0) {
      uVar8 = uVar14 >> 0x38 & 0xf;
    }
    puVar13 = *(undefined8 **)(param_1 + 0x110);
    if (uVar8 == 0) goto LAB_1034a0bc4;
    func_0x000107c5eea8(puVar18);
    lVar7 = lStack_190;
    lVar3 = lStack_198;
    puVar13 = puVar18;
    (**(code **)(lStack_198 + 0x30))(puVar18,1,lStack_190);
    if ((int)puVar13 == 1) {
      func_0x0001034a263c(puVar18,0x112d3bc20,&UNK_10d904ef0);
      puVar13 = puVar18;
      goto LAB_1034a0bc4;
    }
    puVar13 = puVar17;
    (**(code **)(lVar3 + 0x20))(puVar17,puVar18,lVar7);
    func_0x000107c5eec0();
    puStack_140 = puVar13;
    puStack_138 = puVar18;
    func_0x000107c5eec0();
    func_0x000100e37074(&puStack_140,auStack_130);
    func_0x00010355cd18();
    (**(code **)(lVar3 + 8))(puVar17,lVar7);
    uVar14 = *(ulong *)(param_1 + 0x128);
    puVar18 = puStack_140;
    puVar13 = puStack_138;
  }
  puStack_138 = (undefined8 *)uVar14;
  if (puStack_138 != (undefined8 *)0x0) {
    puStack_140 = *(undefined8 **)(param_1 + 0x120);
    uVar14 = (ulong)puStack_140 & 0xffffffffffff;
    if (((ulong)puStack_138 & 0x2000000000000000) != 0) {
      uVar14 = (ulong)puStack_138 >> 0x38 & 0xf;
    }
    if (uVar14 != 0) {
      uStack_168 = 0x2d;
      uStack_160 = 0xe100000000000000;
      uStack_178 = 0x2b;
      uStack_170 = 0xe100000000000000;
      func_0x000100e8b654();
      puVar9 = PTR___sSSN_11034da80;
      puVar16[-2] = puVar17;
      puVar16[-1] = puVar17;
      puVar16[-4] = PTR___sSSN_11034da80;
      puVar16[-3] = puVar17;
      puVar18 = &uStack_168;
      puVar13 = &uStack_178;
      func_0x000107c601fc(puVar18,puVar13,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
      uStack_168 = 0x5f;
      uStack_160 = 0xe100000000000000;
      uStack_178 = 0x2f;
      uStack_170 = 0xe100000000000000;
      puStack_140 = puVar18;
      puStack_138 = puVar13;
      puVar16[-2] = puVar17;
      puVar16[-1] = puVar17;
      puVar18 = &uStack_168;
      puVar6 = &uStack_178;
      puVar16[-4] = puVar9;
      puVar16[-3] = puVar17;
      func_0x000107c601fc(puVar18,puVar6,0,0,0,1,puVar9,puVar9);
      func_0x000107c6142c(puVar13);
      puStack_140 = puVar18;
      puStack_138 = puVar6;
      func_0x000107c5eb88(puVar16);
      puVar18 = puVar16;
      func_0x000107c601d8(puVar16,puVar9,puVar17);
      (**(code **)(lStack_188 + 8))(puVar16,lStack_180);
      func_0x000107c6142c(puVar6);
      uVar11 = 0x112d38270;
      puStack_140 = puVar18;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar4 = uVar11;
      func_0x00010011d734();
      puVar6 = (undefined8 *)0x0;
      puVar17 = (undefined8 *)0xe000000000000000;
      func_0x000107c5fa80(0,0xe000000000000000,uVar11,uVar4);
      func_0x000107c6142c(puVar18);
      puStack_140 = puVar6;
      puStack_138 = puVar17;
      func_0x000107c61434(puVar17);
      puVar18 = puVar6;
      func_0x000107c5fb5c(puVar6,puVar17);
      func_0x000107c6142c(puVar17);
      uVar14 = (ulong)puVar18 & 3;
      if (-1 < -(long)puVar18) {
        uVar14 = -(-(long)puVar18 & 3U);
      }
      if (0 < (long)uVar14) {
        uVar11 = 0xe100000000000000;
        func_0x000107c5fbc0(0x3d,0xe100000000000000,4 - uVar14);
        func_0x000107c5fb78();
        func_0x000107c6142c(uVar11);
        puVar6 = puStack_140;
        puVar17 = puStack_138;
      }
      puVar5 = puVar17;
      func_0x000107c5ee08(puVar6,puVar17,1);
      func_0x000107c6142c();
      puVar18 = puStack_140;
      puVar13 = puStack_138;
      if ((ulong)puVar5 >> 0x3c < 0xf) {
        func_0x00010355cda8(puVar6,puVar5);
        puVar17 = puVar6;
        puVar18 = puStack_140;
        puVar13 = puStack_138;
      }
    }
  }
  puStack_138 = puVar13;
  puStack_140 = puVar18;
  uVar14 = *(ulong *)(param_1 + 0x28);
  if (uVar14 != 0) {
    uVar8 = (ulong)*(undefined8 **)(param_1 + 0x20) & 0xffffffffffff;
    if ((uVar14 & 0x2000000000000000) != 0) {
      uVar8 = uVar14 >> 0x38 & 0xf;
    }
    if (uVar8 != 0) {
      uStack_168 = 0x2d;
      uStack_160 = 0xe100000000000000;
      uStack_178 = 0x2b;
      uStack_170 = 0xe100000000000000;
      puStack_140 = *(undefined8 **)(param_1 + 0x20);
      puStack_138 = (undefined8 *)uVar14;
      func_0x000100e8b654();
      puVar9 = PTR___sSSN_11034da80;
      puVar16[-2] = puVar17;
      puVar16[-1] = puVar17;
      puVar16[-4] = PTR___sSSN_11034da80;
      puVar16[-3] = puVar17;
      puVar18 = &uStack_168;
      puVar13 = &uStack_178;
      func_0x000107c601fc(puVar18,puVar13,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
      uStack_168 = 0x5f;
      uStack_160 = 0xe100000000000000;
      uStack_178 = 0x2f;
      uStack_170 = 0xe100000000000000;
      puStack_140 = puVar18;
      puStack_138 = puVar13;
      puVar16[-2] = puVar17;
      puVar16[-1] = puVar17;
      puVar18 = &uStack_168;
      puVar6 = &uStack_178;
      puVar16[-4] = puVar9;
      puVar16[-3] = puVar17;
      func_0x000107c601fc(puVar18,puVar6,0,0,0,1,puVar9,puVar9);
      func_0x000107c6142c(puVar13);
      puStack_140 = puVar18;
      puStack_138 = puVar6;
      func_0x000107c5eb88(puVar16);
      puVar18 = puVar16;
      func_0x000107c601d8(puVar16,puVar9,puVar17);
      (**(code **)(lStack_188 + 8))(puVar16,lStack_180);
      func_0x000107c6142c(puVar6);
      uVar11 = 0x112d38270;
      puStack_140 = puVar18;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar4 = uVar11;
      func_0x00010011d734();
      puVar13 = (undefined8 *)0x0;
      puVar6 = (undefined8 *)0xe000000000000000;
      func_0x000107c5fa80(0,0xe000000000000000,uVar11,uVar4);
      func_0x000107c6142c(puVar18);
      puStack_140 = puVar13;
      puStack_138 = puVar6;
      func_0x000107c61434(puVar6);
      puVar17 = puVar13;
      func_0x000107c5fb5c(puVar13,puVar6);
      func_0x000107c6142c(puVar6);
      uVar14 = (ulong)puVar17 & 3;
      if (-1 < -(long)puVar17) {
        uVar14 = -(-(long)puVar17 & 3U);
      }
      if (0 < (long)uVar14) {
        uVar11 = 0xe100000000000000;
        func_0x000107c5fbc0(0x3d,0xe100000000000000,4 - uVar14);
        func_0x000107c5fb78();
        func_0x000107c6142c(uVar11);
        puVar13 = puStack_140;
        puVar6 = puStack_138;
      }
      puVar17 = puVar6;
      func_0x000107c5ee08(puVar13,puVar6,1);
      func_0x000107c6142c(puVar6);
      if ((ulong)puVar17 >> 0x3c < 0xf) {
        FUN_10355cf90(puVar13,puVar17);
      }
    }
  }
  FUN_10355d028(*(undefined1 *)(param_1 + 0x131),0,0xc000000000000000);
  uVar11 = *(undefined8 *)(param_1 + 0x138);
  lVar3 = *(long *)(param_1 + 0x140);
  func_0x000107c61434(lVar3);
  FUN_10349f548(uVar11,lVar3);
  FUN_10355d0d8();
  func_0x00010355dde4(*(undefined1 *)(param_1 + 0x48),0,0xc000000000000000);
  uVar14 = *(ulong *)(param_1 + 0x58);
  if (uVar14 != 0) {
    uVar15 = *(ulong *)(param_1 + 0x50);
    uVar8 = uVar15 & 0xffffffffffff;
    if ((uVar14 & 0x2000000000000000) != 0) {
      uVar8 = uVar14 >> 0x38 & 0xf;
    }
    if (uVar8 != 0) {
      func_0x000107c61438(uVar14,2);
      func_0x00010006c00c(0,0xc000000000000000);
      func_0x000107c6142c(uVar14);
      func_0x00010006c090(0,0xc000000000000000);
      FUN_10355df2c(uVar15,uVar14,0,0xc000000000000000);
    }
  }
  FUN_10349f860(*(undefined8 *)(param_1 + 0x70));
  FUN_10355dfe4();
  puVar17 = apuStack_1b0[2];
  uVar14 = *(ulong *)(param_1 + 0x68);
  if (uVar14 != 0) {
    uVar8 = *(ulong *)(param_1 + 0x60) & 0xffffffffffff;
    if ((uVar14 & 0x2000000000000000) != 0) {
      uVar8 = uVar14 >> 0x38 & 0xf;
    }
    if (uVar8 != 0) {
      func_0x000107c5eea8(apuStack_1b0[2]);
      lVar3 = lStack_190;
      lVar7 = lStack_198;
      puVar13 = puVar17;
      (**(code **)(lStack_198 + 0x30))(puVar17,1,lStack_190);
      puVar18 = apuStack_1b0[1];
      if ((int)puVar13 == 1) {
        func_0x0001034a263c(puVar17,0x112d3bc20,&UNK_10d904ef0);
      }
      else {
        puVar13 = apuStack_1b0[1];
        (**(code **)(lVar7 + 0x20))(apuStack_1b0[1],puVar17,lVar3);
        func_0x000107c5eec0();
        puStack_140 = puVar13;
        puStack_138 = puVar17;
        func_0x000107c5eec0();
        func_0x000100e37074(&puStack_140,auStack_130);
        FUN_10355de94();
        (**(code **)(lVar7 + 8))(puVar18,lVar3);
      }
    }
  }
  if (*(char *)(param_1 + 0x130) == '\x01') {
    FUN_10349f878(&puStack_140,param_1);
    FUN_10355ce38(&puStack_140);
  }
  uVar11 = 2;
  if (*(long *)(param_1 + 0x30) != 1) {
    uVar11 = 0;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar11 = 1;
  }
  FUN_10355d770(uVar11,1);
  if (0.0 <= *(double *)(param_1 + 0x40)) {
    dVar19 = *(double *)(param_1 + 0x40) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1368);
      (*pcVar2)();
    }
    if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a136c);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1374);
      (*pcVar2)();
    }
    func_0x00010355d8a8((long)dVar19,0,0xc000000000000000);
  }
  if (0.0 <= *(double *)(param_1 + 0x38)) {
    dVar19 = *(double *)(param_1 + 0x38) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1370);
      (*pcVar2)();
    }
    if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a1378);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a137c);
      (*pcVar2)();
    }
    func_0x00010355d7fc((long)dVar19,0,0xc000000000000000);
  }
  auVar1._8_8_ = puStack_150;
  auVar1._0_8_ = lStack_158;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return auVar1;
  }
  lVar7 = lStack_158;
  puVar9 = puStack_150;
  func_0x000107c60e78(lStack_158,puStack_150,uStack_148);
  puVar16[-6] = lVar3;
  puVar16[-5] = param_1;
  puVar16[-4] = &lStack_158;
  puVar16[-3] = apuStack_1b0;
  puVar16[-2] = &stack0xfffffffffffffff0;
  puVar16[-1] = FUN_1034a1380;
  uVar14 = 0x4547414d49;
  puVar12 = puVar9;
  func_0x000107c5fb24();
  func_0x000107c6142c(puVar9);
  if (((lVar7 == 0x4547414d49) && (puVar12 == (undefined *)0xe500000000000000)) ||
     (func_0x000107c605b8(0x4547414d49,0xe500000000000000,lVar7,puVar12,0), (uVar14 & 1) != 0)) {
    func_0x000107c6142c(puVar12);
    uVar11 = 0x11;
  }
  else {
    uVar14 = 0;
    if (((lVar7 == 0x4f45444956) && (puVar12 == (undefined *)0xe500000000000000)) ||
       (func_0x000107c605b8(0x4f45444956,0xe500000000000000,lVar7,puVar12,0), (uVar14 & 1) != 0)) {
      func_0x000107c6142c(puVar12);
      uVar11 = 1;
    }
    else {
      uVar14 = 0;
      if (((lVar7 == 0x4f4e5f4f45444956) && (puVar12 == (undefined *)0xee00444e554f535f)) ||
         ((uVar8 = uVar14,
          func_0x000107c605b8(0x4f4e5f4f45444956,0xee00444e554f535f,lVar7,puVar12,0),
          (uVar8 & 1) != 0 ||
          (((lVar7 == 0x4f4e5f4f45444956 && (puVar12 == (undefined *)0xee004f494455415f)) ||
           (func_0x000107c605b8(0x4f4e5f4f45444956,0xee004f494455415f,lVar7,puVar12,0),
           (uVar14 & 1) != 0)))))) {
        func_0x000107c6142c(puVar12);
        uVar11 = 2;
      }
      else {
        if ((lVar7 != 0x464947) || (puVar12 != (undefined *)0xe300000000000000)) {
          uVar14 = 0x464947;
          func_0x000107c605b8(0x464947,0xe300000000000000,lVar7,puVar12,0);
          if ((uVar14 & 1) == 0) {
            if ((lVar7 != -0x2fffffffffffffee) || (puVar12 != (undefined *)0x800000010f1540d0)) {
              uVar14 = 0;
              func_0x000107c605b8(0xd000000000000012,0x800000010f1540d0,lVar7,puVar12,0);
              if ((uVar14 & 1) == 0) {
                uVar14 = 0xd000000000000015;
                if (((lVar7 == -0x2fffffffffffffeb) && (puVar12 == (undefined *)0x800000010f1540f0))
                   || (func_0x000107c605b8(0xd000000000000015,0x800000010f1540f0,lVar7,puVar12,0),
                      (uVar14 & 1) != 0)) {
                  func_0x000107c6142c(puVar12);
                  uVar11 = 4;
                }
                else {
                  uVar14 = 0x54535f4f49445541;
                  if (((lVar7 == 0x54535f4f49445541) && (puVar12 == (undefined *)0xec00000048435449)
                      ) || (func_0x000107c605b8(0x54535f4f49445541,0xec00000048435449,lVar7,puVar12,
                                                0), (uVar14 & 1) != 0)) {
                    func_0x000107c6142c(puVar12);
                    uVar11 = 0xd;
                  }
                  else {
                    uVar14 = 0;
                    if (((lVar7 == 0x414d4f4843595350) &&
                        (puVar12 == (undefined *)0xec0000005349544e)) ||
                       (func_0x000107c605b8(0x414d4f4843595350,0xec0000005349544e,lVar7,puVar12,0),
                       (uVar14 & 1) != 0)) {
                      func_0x000107c6142c(puVar12);
                      uVar11 = 0xe;
                    }
                    else {
                      uVar14 = 0x4e494d4145524353;
                      if (((lVar7 == 0x4e494d4145524353) &&
                          (puVar12 == (undefined *)0xef5349544e414d47)) ||
                         (func_0x000107c605b8(0x4e494d4145524353,0xef5349544e414d47,lVar7,puVar12,0)
                         , (uVar14 & 1) != 0)) {
                        func_0x000107c6142c(puVar12);
                        uVar11 = 0xf;
                      }
                      else {
                        uVar14 = 0x535f5542494c414d;
                        if (((lVar7 == 0x535f5542494c414d) &&
                            (puVar12 == (undefined *)0xec000000444e554f)) ||
                           (func_0x000107c605b8(0x535f5542494c414d,0xec000000444e554f,lVar7,puVar12,
                                                0), (uVar14 & 1) != 0)) {
                          func_0x000107c6142c(puVar12);
                          uVar11 = 7;
                        }
                        else {
                          uVar14 = 0x4e5f5542494c414d;
                          if (((lVar7 == 0x4e5f5542494c414d) &&
                              (puVar12 == (undefined *)0xef444e554f535f4f)) ||
                             (func_0x000107c605b8(0x4e5f5542494c414d,0xef444e554f535f4f,lVar7,
                                                  puVar12,0), (uVar14 & 1) != 0)) {
                            func_0x000107c6142c(puVar12);
                            uVar11 = 8;
                          }
                          else {
                            uVar14 = 0;
                            if (((lVar7 == 0x4448414e5547414c) &&
                                (puVar12 == (undefined *)0xee00444e554f535f)) ||
                               (func_0x000107c605b8(0x4448414e5547414c,0xee00444e554f535f,lVar7,
                                                    puVar12,0), (uVar14 & 1) != 0)) {
                              func_0x000107c6142c(puVar12);
                              uVar11 = 5;
                            }
                            else {
                              uVar14 = 0xd000000000000011;
                              if (((lVar7 == -0x2fffffffffffffef) &&
                                  (puVar12 == (undefined *)0x800000010f154110)) ||
                                 (func_0x000107c605b8(0xd000000000000011,0x800000010f154110,lVar7,
                                                      puVar12,0), (uVar14 & 1) != 0)) {
                                func_0x000107c6142c(puVar12);
                                uVar11 = 6;
                              }
                              else {
                                uVar14 = 0x4e414d54534f4847;
                                if (((lVar7 == 0x4e414d54534f4847) &&
                                    (puVar12 == (undefined *)0xeb00000000534954)) ||
                                   (func_0x000107c605b8(0x4e414d54534f4847,0xeb00000000534954,lVar7,
                                                        puVar12,0), (uVar14 & 1) != 0)) {
                                  func_0x000107c6142c(puVar12);
                                  uVar11 = 0x10;
                                }
                                else {
                                  uVar14 = 0;
                                  if (((lVar7 == 0x5f54524f5057454e) &&
                                      (puVar12 == (undefined *)0xed0000444e554f53)) ||
                                     (func_0x000107c605b8(0x5f54524f5057454e,0xed0000444e554f53,
                                                          lVar7,puVar12,0), (uVar14 & 1) != 0)) {
                                    func_0x000107c6142c(puVar12);
                                    uVar11 = 9;
                                  }
                                  else if ((lVar7 == -0x2ffffffffffffff0) &&
                                          (puVar12 == (undefined *)0x800000010f154130)) {
                                    func_0x000107c6142c(0x800000010f154130);
                                    uVar11 = 10;
                                  }
                                  else {
                                    uVar14 = 0;
                                    func_0x000107c605b8(0xd000000000000010,0x800000010f154130,lVar7,
                                                        puVar12,0);
                                    func_0x000107c6142c(puVar12);
                                    uVar11 = 10;
                                    if ((uVar14 & 1) == 0) {
                                      uVar11 = 0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_1034a13f0;
              }
            }
            func_0x000107c6142c(puVar12);
            uVar11 = 3;
            goto LAB_1034a13f0;
          }
        }
        func_0x000107c6142c(puVar12);
        uVar11 = 0xb;
      }
    }
  }
LAB_1034a13f0:
  auVar20._8_8_ = 1;
  auVar20._0_8_ = uVar11;
  return auVar20;
}



/* Entry: 1034a1380; end: 1034a1a1f;  */

undefined1  [16] FUN_1034a1380(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = 0x4547414d49;
  lVar3 = param_2;
  func_0x000107c5fb24();
  func_0x000107c6142c(param_2);
  if (((param_1 == 0x4547414d49) && (lVar3 == -0x1b00000000000000)) ||
     (func_0x000107c605b8(0x4547414d49,0xe500000000000000,param_1,lVar3,0), (uVar4 & 1) != 0)) {
    func_0x000107c6142c(lVar3);
    uVar1 = 0x11;
  }
  else {
    uVar4 = 0;
    if (((param_1 == 0x4f45444956) && (lVar3 == -0x1b00000000000000)) ||
       (func_0x000107c605b8(0x4f45444956,0xe500000000000000,param_1,lVar3,0), (uVar4 & 1) != 0)) {
      func_0x000107c6142c(lVar3);
      uVar1 = 1;
    }
    else {
      uVar4 = 0;
      if (((param_1 == 0x4f4e5f4f45444956) && (lVar3 == -0x11ffbbb1aab0aca1)) ||
         ((uVar2 = uVar4, func_0x000107c605b8(0x4f4e5f4f45444956,0xee00444e554f535f,param_1,lVar3,0)
          , (uVar2 & 1) != 0 ||
          (((param_1 == 0x4f4e5f4f45444956 && (lVar3 == -0x11ffb0b6bbaabea1)) ||
           (func_0x000107c605b8(0x4f4e5f4f45444956,0xee004f494455415f,param_1,lVar3,0),
           (uVar4 & 1) != 0)))))) {
        func_0x000107c6142c(lVar3);
        uVar1 = 2;
      }
      else {
        if ((param_1 != 0x464947) || (lVar3 != -0x1d00000000000000)) {
          uVar4 = 0x464947;
          func_0x000107c605b8(0x464947,0xe300000000000000,param_1,lVar3,0);
          if ((uVar4 & 1) == 0) {
            if ((param_1 != -0x2fffffffffffffee) || (lVar3 != -0x7ffffffef0eabf30)) {
              uVar4 = 0;
              func_0x000107c605b8(0xd000000000000012,0x800000010f1540d0,param_1,lVar3,0);
              if ((uVar4 & 1) == 0) {
                uVar4 = 0xd000000000000015;
                if (((param_1 == -0x2fffffffffffffeb) && (lVar3 == -0x7ffffffef0eabf10)) ||
                   (func_0x000107c605b8(0xd000000000000015,0x800000010f1540f0,param_1,lVar3,0),
                   (uVar4 & 1) != 0)) {
                  func_0x000107c6142c(lVar3);
                  uVar1 = 4;
                }
                else {
                  uVar4 = 0x54535f4f49445541;
                  if (((param_1 == 0x54535f4f49445541) && (lVar3 == -0x13ffffffb7bcabb7)) ||
                     (func_0x000107c605b8(0x54535f4f49445541,0xec00000048435449,param_1,lVar3,0),
                     (uVar4 & 1) != 0)) {
                    func_0x000107c6142c(lVar3);
                    uVar1 = 0xd;
                  }
                  else {
                    uVar4 = 0;
                    if (((param_1 == 0x414d4f4843595350) && (lVar3 == -0x13ffffffacb6abb2)) ||
                       (func_0x000107c605b8(0x414d4f4843595350,0xec0000005349544e,param_1,lVar3,0),
                       (uVar4 & 1) != 0)) {
                      func_0x000107c6142c(lVar3);
                      uVar1 = 0xe;
                    }
                    else {
                      uVar4 = 0x4e494d4145524353;
                      if (((param_1 == 0x4e494d4145524353) && (lVar3 == -0x10acb6abb1beb2b9)) ||
                         (func_0x000107c605b8(0x4e494d4145524353,0xef5349544e414d47,param_1,lVar3,0)
                         , (uVar4 & 1) != 0)) {
                        func_0x000107c6142c(lVar3);
                        uVar1 = 0xf;
                      }
                      else {
                        uVar4 = 0x535f5542494c414d;
                        if (((param_1 == 0x535f5542494c414d) && (lVar3 == -0x13ffffffbbb1aab1)) ||
                           (func_0x000107c605b8(0x535f5542494c414d,0xec000000444e554f,param_1,lVar3,
                                                0), (uVar4 & 1) != 0)) {
                          func_0x000107c6142c(lVar3);
                          uVar1 = 7;
                        }
                        else {
                          uVar4 = 0x4e5f5542494c414d;
                          if (((param_1 == 0x4e5f5542494c414d) && (lVar3 == -0x10bbb1aab0aca0b1)) ||
                             (func_0x000107c605b8(0x4e5f5542494c414d,0xef444e554f535f4f,param_1,
                                                  lVar3,0), (uVar4 & 1) != 0)) {
                            func_0x000107c6142c(lVar3);
                            uVar1 = 8;
                          }
                          else {
                            uVar4 = 0;
                            if (((param_1 == 0x4448414e5547414c) && (lVar3 == -0x11ffbbb1aab0aca1))
                               || (func_0x000107c605b8(0x4448414e5547414c,0xee00444e554f535f,param_1
                                                       ,lVar3,0), (uVar4 & 1) != 0)) {
                              func_0x000107c6142c(lVar3);
                              uVar1 = 5;
                            }
                            else {
                              uVar4 = 0xd000000000000011;
                              if (((param_1 == -0x2fffffffffffffef) &&
                                  (lVar3 == -0x7ffffffef0eabef0)) ||
                                 (func_0x000107c605b8(0xd000000000000011,0x800000010f154110,param_1,
                                                      lVar3,0), (uVar4 & 1) != 0)) {
                                func_0x000107c6142c(lVar3);
                                uVar1 = 6;
                              }
                              else {
                                uVar4 = 0x4e414d54534f4847;
                                if (((param_1 == 0x4e414d54534f4847) &&
                                    (lVar3 == -0x14ffffffffacb6ac)) ||
                                   (func_0x000107c605b8(0x4e414d54534f4847,0xeb00000000534954,
                                                        param_1,lVar3,0), (uVar4 & 1) != 0)) {
                                  func_0x000107c6142c(lVar3);
                                  uVar1 = 0x10;
                                }
                                else {
                                  uVar4 = 0;
                                  if (((param_1 == 0x5f54524f5057454e) &&
                                      (lVar3 == -0x12ffffbbb1aab0ad)) ||
                                     (func_0x000107c605b8(0x5f54524f5057454e,0xed0000444e554f53,
                                                          param_1,lVar3,0), (uVar4 & 1) != 0)) {
                                    func_0x000107c6142c(lVar3);
                                    uVar1 = 9;
                                  }
                                  else if ((param_1 == -0x2ffffffffffffff0) &&
                                          (lVar3 == -0x7ffffffef0eabed0)) {
                                    func_0x000107c6142c(0x800000010f154130);
                                    uVar1 = 10;
                                  }
                                  else {
                                    uVar4 = 0;
                                    func_0x000107c605b8(0xd000000000000010,0x800000010f154130,
                                                        param_1,lVar3,0);
                                    func_0x000107c6142c(lVar3);
                                    uVar1 = 10;
                                    if ((uVar4 & 1) == 0) {
                                      uVar1 = 0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_1034a13f0;
              }
            }
            func_0x000107c6142c(lVar3);
            uVar1 = 3;
            goto LAB_1034a13f0;
          }
        }
        func_0x000107c6142c(lVar3);
        uVar1 = 0xb;
      }
    }
  }
LAB_1034a13f0:
  auVar5._8_8_ = 1;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 1034a1a20; end: 1034a23d3;  */

undefined * FUN_1034a1a20(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long extraout_x8;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  long *plStack_ae0;
  long lStack_ad8;
  long lStack_ad0;
  undefined4 uStack_ac4;
  undefined *puStack_ac0;
  undefined8 uStack_ab8;
  long lStack_ab0;
  ulong uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  long lStack_a90;
  long lStack_a88;
  long lStack_a80;
  long lStack_a78;
  long lStack_a70;
  long lStack_a68;
  long lStack_a60;
  ulong uStack_a58;
  undefined *puStack_a50;
  long lStack_a48;
  long lStack_a40;
  long lStack_a38;
  long lStack_a28;
  undefined1 auStack_a20 [416];
  undefined1 auStack_880 [416];
  undefined *puStack_6e0;
  undefined1 uStack_6d8;
  undefined7 uStack_6d7;
  ulong uStack_6d0;
  undefined1 uStack_6c8;
  undefined7 uStack_6c7;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  ulong uStack_698;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  long lStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  long lStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long lStack_540;
  long lStack_538;
  undefined *puStack_530;
  long lStack_528;
  long lStack_520;
  ulong uStack_518;
  long lStack_510;
  long lStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  undefined *puStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  ulong uStack_498;
  long lStack_490;
  long lStack_488;
  undefined *puStack_480;
  long lStack_478;
  undefined1 uStack_470;
  undefined *puStack_448;
  undefined8 uStack_440;
  ulong uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  ulong uStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  long lStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  undefined *puStack_330;
  long lStack_328;
  long lStack_320;
  ulong uStack_318;
  long lStack_310;
  long lStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  ulong uStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  ulong uStack_240;
  long lStack_238;
  ulong uStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 auStack_210 [52];
  undefined8 auStack_70 [2];
  
  lVar8 = 0;
  func_0x00010425412c();
  lStack_ad8 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_ad8 + 0x40));
  lStack_a28 = (long)&plStack_ae0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar16 = *(ulong *)(param_1 + 0x938);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((1 < uVar16) && (lStack_a88 = *(long *)(uVar16 + 0x10), lStack_a88 != 0)) {
    lVar8 = 0;
    lStack_a90 = uVar16 + 0x20;
    plStack_ae0 = &lStack_378;
    lStack_a38 = -0x4000000000000000;
    lStack_a40 = 0;
    uStack_a98 = 0xf000000000000000;
    uStack_aa0 = 0;
    puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      plVar17 = (long *)(lStack_a90 + lVar8 * 200);
      uStack_2d8 = plVar17[1];
      lStack_2e0 = *plVar17;
      uStack_2c8 = plVar17[3];
      uStack_2d0 = plVar17[2];
      lStack_2b8 = plVar17[5];
      uStack_2c0 = plVar17[4];
      uStack_2a8 = plVar17[7];
      lStack_2b0 = plVar17[6];
      lStack_298 = plVar17[9];
      puStack_2a0 = (undefined *)plVar17[8];
      lStack_288 = plVar17[0xb];
      lStack_290 = plVar17[10];
      lStack_278 = plVar17[0xd];
      lStack_280 = plVar17[0xc];
      lStack_268 = plVar17[0xf];
      lStack_270 = plVar17[0xe];
      lStack_258 = plVar17[0x11];
      lStack_260 = plVar17[0x10];
      lStack_248 = plVar17[0x13];
      lStack_250 = plVar17[0x12];
      lStack_238 = plVar17[0x15];
      uStack_240 = plVar17[0x14];
      lStack_228 = plVar17[0x17];
      uStack_230 = plVar17[0x16];
      lStack_220 = plVar17[0x18];
      FUN_1034a23e8(&lStack_2e0,&puStack_6e0);
      FUN_10355c530(auStack_210);
      func_0x000107c610b4(&puStack_480,auStack_210,0x1a0);
      lVar10 = lStack_2e0;
      if (lStack_2e0 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1034a23c4);
        (*pcVar7)();
      }
      func_0x000100d5483c(lStack_368,lStack_360,lStack_358);
      uVar2 = uStack_2d0;
      uVar16 = uStack_2d8;
      lStack_368 = lVar10;
      lStack_358 = lStack_a38;
      lStack_360 = lStack_a40;
      if (uStack_2d0 != 0) {
        uVar1 = uStack_2d8 & 0xffffffffffff;
        if ((uStack_2d0 & 0x2000000000000000) != 0) {
          uVar1 = uStack_2d0 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          func_0x000107c61438(uStack_2d0,2);
          func_0x00010006c00c(0,0xc000000000000000);
          func_0x000107c6142c(uVar2);
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000101597ae4(uStack_388,uStack_380,lStack_378,uStack_370);
          uStack_388 = uVar16;
          uStack_380 = uVar2;
          plStack_ae0[1] = lStack_a38;
          *plStack_ae0 = lStack_a40;
        }
      }
      uVar2 = uStack_2c0;
      uVar16 = uStack_2c8;
      if (uStack_2c0 != 0) {
        uVar1 = uStack_2c8 & 0xffffffffffff;
        if ((uStack_2c0 & 0x2000000000000000) != 0) {
          uVar1 = uStack_2c0 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          func_0x000107c61438(uStack_2c0,2);
          func_0x00010006c00c(0,0xc000000000000000);
          func_0x000107c6142c(uVar2);
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000101597ae4(uStack_300,uStack_2f8,lStack_2f0,lStack_2e8);
          uStack_300 = uVar16;
          uStack_2f8 = uVar2;
          lStack_2e8 = lStack_a38;
          lStack_2f0 = lStack_a40;
        }
      }
      lVar10 = lStack_2b8;
      if (lStack_2b8 != 0) {
        auStack_70[0] = auStack_210[0];
        lVar20 = *(long *)(lStack_2b8 + 0x10);
        if (lVar20 == 0) {
          func_0x0001034a263c(auStack_70,0x112f730b8,&UNK_10dbce2c8);
          puStack_480 = puVar23;
        }
        else {
          uVar15 = 0;
          lStack_a60 = lVar8;
          puStack_a50 = puVar12;
          puStack_6e0 = puVar23;
          func_0x0001034d919c(0,lVar20);
          lVar10 = lVar10 + ((ulong)*(byte *)(lStack_ad8 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lStack_ad8 + 0x50) ^ 0xffffffffffffffff));
          lVar8 = *(long *)(lStack_ad8 + 0x48);
          do {
            puVar12 = puStack_6e0;
            lVar14 = lStack_a28;
            lVar13 = lStack_a28;
            FUN_1034a253c(lVar10);
            lVar9 = lVar14;
            FUN_1034a0250();
            uVar21 = uVar15;
            func_0x0001034a2580(lVar14);
            uVar16 = *(ulong *)(puVar12 + 0x10);
            puStack_6e0 = puVar12;
            if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar16) {
              uVar21 = 1;
              func_0x0001034d919c(1 < *(ulong *)(puVar12 + 0x18),uVar16 + 1);
            }
            puVar19 = puStack_6e0;
            *(ulong *)(puStack_6e0 + 0x10) = uVar16 + 1;
            *(long *)(puStack_6e0 + uVar16 * 0x18 + 0x20) = lVar9;
            *(long *)(puStack_6e0 + uVar16 * 0x18 + 0x28) = lVar13;
            *(undefined8 *)(puStack_6e0 + uVar16 * 0x18 + 0x30) = uVar15;
            lVar10 = lVar10 + lVar8;
            lVar20 = lVar20 + -1;
            uVar15 = uVar21;
          } while (lVar20 != 0);
          func_0x0001034a263c(auStack_70,0x112f730b8,&UNK_10dbce2c8);
          puVar12 = puStack_a50;
          lVar8 = lStack_a60;
          puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puStack_480 = puVar19;
        }
      }
      lVar14 = lStack_248;
      lVar20 = lStack_260;
      lVar10 = lStack_298;
      puVar19 = puStack_2a0;
      if (lStack_298 != 1) {
        uStack_aa8 = uStack_2a8 >> 8 & 0xff;
        lStack_a70 = lStack_290;
        cVar3 = (char)lStack_288;
        lStack_a80 = lStack_280;
        cVar4 = (char)lStack_278;
        lStack_a60 = lStack_270;
        cVar5 = (char)lStack_268;
        cVar6 = (char)lStack_258;
        lStack_ad0 = lStack_250;
        puStack_a50 = puVar12;
        if ((char)uStack_2a8 == '\x01') {
          lStack_ab0 = 0;
          uStack_ab8 = 0xf000000000000000;
        }
        else {
          lStack_ab0 = lStack_2b0;
          func_0x000100d5483c(0,0,0xf000000000000000);
          uStack_ab8 = 0xc000000000000000;
        }
        func_0x000101556278(2,0,0);
        if (lVar10 == 0) {
          puStack_ac0 = (undefined *)0x0;
          uStack_ac4 = 1;
          if (cVar5 == '\x01') goto LAB_1034a1e5c;
LAB_1034a1f34:
          func_0x000100d5483c(0,0,0xf000000000000000);
          uVar15 = 0xc000000000000000;
          if (cVar3 != '\x01') goto LAB_1034a1e6c;
LAB_1034a1f50:
          lStack_a70 = 0;
          uVar21 = 0xf000000000000000;
          if (cVar4 != '\x01') goto LAB_1034a1e88;
LAB_1034a1f60:
          lStack_a80 = 0;
          uVar22 = 0xf000000000000000;
          if (cVar6 != '\x01') goto LAB_1034a1ea4;
LAB_1034a1f70:
          lVar20 = 0;
          uVar18 = 0xf000000000000000;
          if (lVar14 != 0) goto LAB_1034a1ec0;
LAB_1034a1f80:
          uStack_6d0 = 0;
        }
        else {
          func_0x000107c61434(lVar10);
          FUN_1034a1380();
          uStack_ac4 = (undefined4)lVar10;
          puStack_ac0 = puVar19;
          if (cVar5 != '\x01') goto LAB_1034a1f34;
LAB_1034a1e5c:
          lStack_a60 = 0;
          uVar15 = 0xf000000000000000;
          if (cVar3 == '\x01') goto LAB_1034a1f50;
LAB_1034a1e6c:
          func_0x000100d5483c(0,0,0xf000000000000000);
          uVar21 = 0xc000000000000000;
          if (cVar4 == '\x01') goto LAB_1034a1f60;
LAB_1034a1e88:
          func_0x000100d5483c(0,0,0xf000000000000000);
          uVar22 = 0xc000000000000000;
          if (cVar6 == '\x01') goto LAB_1034a1f70;
LAB_1034a1ea4:
          func_0x000100d5483c(0,0,0xf000000000000000);
          uVar18 = 0xc000000000000000;
          if (lVar14 == 0) goto LAB_1034a1f80;
LAB_1034a1ec0:
          lVar10 = lStack_ad0;
          func_0x000107c5fb1c();
          if ((lVar10 == 0x7466656c) && (lVar14 == -0x1c00000000000000)) {
LAB_1034a1f10:
            func_0x000107c6142c(lVar14);
            uStack_6d0 = 2;
          }
          else {
            uVar16 = 0;
            func_0x000107c605b8(0x7466656c,0xe400000000000000,lVar10,lVar14,0);
            if ((uVar16 & 1) != 0) goto LAB_1034a1f10;
            if ((lVar10 == 0x7468676972) && (lVar14 == -0x1b00000000000000)) {
LAB_1034a1fcc:
              func_0x000107c6142c(lVar14);
              uStack_6d0 = 3;
            }
            else {
              uVar16 = 0;
              func_0x000107c605b8(0x7468676972,0xe500000000000000,lVar10,lVar14,0);
              if ((uVar16 & 1) != 0) goto LAB_1034a1fcc;
              if ((lVar10 == 0x656e6f6e) && (lVar14 == -0x1c00000000000000)) {
                func_0x000107c6142c(0xe400000000000000);
                uStack_6d0 = 1;
              }
              else {
                uVar16 = 0;
                func_0x000107c605b8(0x656e6f6e,0xe400000000000000,lVar10,lVar14,0);
                func_0x000107c6142c(lVar14);
                uStack_6d0 = uVar16 & 1;
              }
            }
          }
        }
        uStack_698 = uStack_aa8 & 1;
        puStack_6e0 = puStack_ac0;
        uStack_6d8 = (undefined1)uStack_ac4;
        uStack_6c8 = 1;
        lStack_6b8 = lStack_a38;
        lStack_6c0 = lStack_a40;
        lStack_6b0 = lStack_ab0;
        uStack_6a8 = 0;
        uStack_6a0 = uStack_ab8;
        lStack_688 = lStack_a38;
        lStack_690 = lStack_a40;
        lStack_680 = lStack_a80;
        uStack_678 = 0;
        lStack_668 = lStack_a70;
        uStack_660 = 0;
        uStack_648 = 0;
        lStack_638 = lStack_a60;
        uStack_630 = 0;
        uStack_670 = uVar22;
        uStack_658 = uVar21;
        lStack_650 = lVar20;
        uStack_640 = uVar18;
        uStack_628 = uVar15;
        FUN_1034a2538(&puStack_6e0);
        func_0x0001034a263c(&puStack_448,0x112f730b0,&UNK_10dbce2c0);
        uStack_3c0 = uStack_658;
        uStack_3c8 = uStack_660;
        uStack_3b0 = uStack_648;
        lStack_3b8 = lStack_650;
        lStack_3a0 = lStack_638;
        uStack_3a8 = uStack_640;
        uStack_390 = uStack_628;
        uStack_398 = uStack_630;
        uStack_400 = uStack_698;
        uStack_408 = uStack_6a0;
        lStack_3f0 = lStack_688;
        lStack_3f8 = lStack_690;
        uStack_3e0 = uStack_678;
        lStack_3e8 = lStack_680;
        lStack_3d0 = lStack_668;
        uStack_3d8 = uStack_670;
        uStack_440 = CONCAT71(uStack_6d7,uStack_6d8);
        uStack_430 = CONCAT71(uStack_6c7,uStack_6c8);
        puStack_448 = puStack_6e0;
        uStack_438 = uStack_6d0;
        lStack_420 = lStack_6b8;
        lStack_428 = lStack_6c0;
        uStack_410 = uStack_6a8;
        lStack_418 = lStack_6b0;
        puVar12 = puStack_a50;
        puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      uVar16 = uStack_230;
      cVar3 = (char)lStack_228;
      lStack_4b8 = lStack_a38;
      lStack_4c0 = lStack_a40;
      puStack_4b0 = (undefined *)0x0;
      lStack_4a8 = 0;
      uStack_498 = 0;
      lStack_490 = 0;
      lStack_4a0 = -0x1000000000000000;
      lStack_488 = -0x1000000000000000;
      if ((char)lStack_238 != '\x01') {
        if ((long)uStack_240 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1034a23c8);
          (*pcVar7)();
        }
        if (0x7fffffff < (long)uStack_240) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1034a23d0);
          (*pcVar7)();
        }
        puVar19 = (undefined *)(uStack_240 & 0xffffffff);
        func_0x000100d5483c(0,0,0xf000000000000000);
        lStack_4a0 = lStack_a38;
        lStack_4a8 = lStack_a40;
        puStack_4b0 = puVar19;
      }
      if (cVar3 != '\x01') {
        if ((long)uVar16 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1034a23cc);
          (*pcVar7)();
        }
        if (0x7fffffff < (long)uVar16) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1034a23d4);
          (*pcVar7)();
        }
        func_0x000100d5483c(uStack_498,lStack_490,lStack_488);
        lStack_488 = lStack_a38;
        lStack_490 = lStack_a40;
        uStack_498 = uVar16 & 0xffffffff;
      }
      lStack_508 = lStack_488;
      lStack_510 = lStack_490;
      uStack_518 = uStack_498;
      lStack_520 = lStack_4a0;
      lStack_528 = lStack_4a8;
      puStack_530 = puStack_4b0;
      lStack_538 = lStack_4b8;
      lStack_540 = lStack_4c0;
      uStack_4f8 = uStack_a98;
      uStack_500 = uStack_aa0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      lStack_a48 = lStack_4a8;
      puStack_a50 = puStack_4b0;
      lStack_a68 = lStack_4b8;
      lStack_a70 = lStack_4c0;
      uStack_a58 = uStack_498;
      lStack_a60 = lStack_4a0;
      lStack_a78 = lStack_488;
      lStack_a80 = lStack_490;
      func_0x0001034a2424(&lStack_540,&puStack_6e0);
      func_0x0001034a263c(&uStack_500,0x112f730a0,&UNK_10dbe2af0);
      func_0x0001034a2460(&lStack_4c0);
      func_0x0001034a263c(&lStack_350,0x112f730a8,&UNK_10dbd1870);
      func_0x0001034a2494(&lStack_2e0);
      lStack_348 = lStack_a38;
      lStack_350 = lStack_a40;
      lStack_338 = lStack_a68;
      lStack_340 = lStack_a70;
      lStack_308 = lStack_a78;
      lStack_310 = lStack_a80;
      lStack_328 = lStack_a48;
      puStack_330 = puStack_a50;
      uStack_318 = uStack_a58;
      lStack_320 = lStack_a60;
      lStack_478 = lStack_220;
      if (0xc < lStack_220 - 1U) {
        lStack_478 = 0;
      }
      uStack_470 = 1;
      func_0x000107c610b4(auStack_880,&puStack_480,0x1a0);
      func_0x000107c610b4(&puStack_6e0,&puStack_480,0x1a0);
      func_0x0001034a24c8(auStack_880,auStack_a20);
      func_0x0001034a2504(&puStack_6e0);
      puVar19 = puVar12;
      func_0x000107c61558();
      puVar11 = puVar12;
      if (((ulong)puVar19 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        func_0x0001034d8860(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar16 = *(ulong *)(puVar11 + 0x10);
      puVar12 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar16) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        func_0x0001034d8860(puVar12,uVar16 + 1,1,puVar11);
      }
      lVar8 = lVar8 + 1;
      *(ulong *)(puVar12 + 0x10) = uVar16 + 1;
      func_0x000107c610b4(puVar12 + uVar16 * 0x1a0 + 0x20,auStack_880,0x1a0);
    } while (lVar8 != lStack_a88);
  }
  return puVar12;
}



/* Entry: 1034a23d4; end: 1034a23e7;  */

undefined1  [16] FUN_1034a23d4(long param_1)

{
  undefined1 auVar1 [16];
  
  if (0xc < param_1 - 1U) {
    param_1 = 0;
  }
  auVar1._8_8_ = 1;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1034a23e8; end: 1034a2537;  */

undefined8 FUN_1034a23e8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1042141a4)(param_2,param_1);
  return param_2;
}



/* Entry: 1034a2538; end: 1034a253b;  */

void FUN_1034a2538(void)

{
  return;
}



/* Entry: 1034a253c; end: 1034a25bb;  */

undefined8 FUN_1034a253c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010425412c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1034a25bc; end: 1034a25ff;  */

void FUN_1034a25bc(undefined8 *param_1)

{
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  return;
}



/* Entry: 1034a2600; end: 1034a26af;  */

undefined8 FUN_1034a2600(undefined8 param_1,undefined8 param_2)

{
  FUN_1035c3db8(param_2,param_1);
  return param_2;
}



/* Entry: 1034a26b0; end: 1034a26c3;  */

void FUN_1034a26b0(long param_1)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0xcfffffffffffffff | 0x2000000000000000;
  return;
}



/* Entry: 1034a26c4; end: 1034a2733;  */

undefined8 FUN_1034a26c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1035c35b0(param_2,param_1);
  return param_2;
}



/* Entry: 1034a2734; end: 1034a2747;  */

void FUN_1034a2734(long param_1)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0xcfffffffffffffff | 0x1000000000000000;
  return;
}



/* Entry: 1034a2748; end: 1034a27b7;  */

undefined8 FUN_1034a2748(undefined8 param_1,undefined8 param_2)

{
  FUN_1035c2b0c(param_2,param_1);
  return param_2;
}



/* Entry: 1034a27b8; end: 1034a378b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034a27b8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_2008;
  byte bStack_1ffc;
  undefined8 uStack_1ff8;
  undefined8 uStack_1ff0;
  undefined1 uStack_1fd8;
  undefined7 uStack_1fd7;
  undefined8 uStack_1fd0;
  undefined8 uStack_1fc8;
  undefined8 uStack_1fc0;
  undefined8 uStack_1fb8;
  undefined8 uStack_1fb0;
  undefined8 uStack_1fa8;
  undefined8 uStack_1fa0;
  undefined8 uStack_1f98;
  undefined8 uStack_1f90;
  undefined8 uStack_1f88;
  undefined8 uStack_1f80;
  undefined8 uStack_1f78;
  undefined8 uStack_1f70;
  undefined8 uStack_1f68;
  undefined8 uStack_1f60;
  undefined1 uStack_1f58;
  undefined8 uStack_1a30;
  undefined8 uStack_1a28;
  undefined8 uStack_1a20;
  undefined8 uStack_1a18;
  undefined8 uStack_1a10;
  undefined8 uStack_1a08;
  undefined8 uStack_1a00;
  undefined8 uStack_19f8;
  undefined8 uStack_19f0;
  undefined8 uStack_19e8;
  undefined8 uStack_19e0;
  undefined8 uStack_19d8;
  undefined8 uStack_19d0;
  undefined8 uStack_19c8;
  undefined8 uStack_19c0;
  undefined8 uStack_19b0;
  undefined8 uStack_19a8;
  undefined8 uStack_19a0;
  undefined8 uStack_1998;
  undefined8 uStack_1990;
  undefined8 uStack_1988;
  undefined8 uStack_1980;
  undefined8 uStack_1978;
  undefined8 uStack_1970;
  undefined8 uStack_1968;
  undefined8 uStack_1960;
  undefined8 uStack_1958;
  undefined8 uStack_1950;
  undefined8 uStack_1948;
  undefined8 uStack_1940;
  undefined8 uStack_1938;
  undefined8 uStack_1930;
  undefined8 uStack_18f8;
  undefined8 uStack_18f0;
  undefined8 uStack_18e8;
  undefined8 uStack_18e0;
  undefined8 uStack_18d8;
  undefined8 uStack_18d0;
  undefined8 uStack_18c8;
  undefined8 uStack_18c0;
  undefined8 uStack_18b8;
  undefined8 uStack_18b0;
  undefined8 uStack_18a8;
  undefined8 uStack_18a0;
  undefined8 uStack_1898;
  undefined8 uStack_1890;
  undefined8 uStack_1888;
  undefined8 uStack_1880;
  undefined1 uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined8 uStack_1838;
  undefined8 uStack_1830;
  undefined8 uStack_1828;
  undefined8 uStack_1820;
  undefined8 uStack_1818;
  undefined8 uStack_1810;
  undefined8 uStack_17ff;
  undefined8 uStack_17f0;
  undefined8 uStack_17e8;
  undefined8 uStack_17e0;
  undefined8 uStack_17d8;
  undefined8 uStack_17d0;
  undefined8 uStack_17c8;
  undefined8 uStack_17c0;
  undefined8 uStack_17b8;
  undefined8 uStack_17b0;
  undefined8 uStack_17a8;
  undefined8 uStack_17a0;
  undefined8 uStack_1798;
  undefined8 uStack_1790;
  undefined8 uStack_177e;
  byte bStack_1738;
  byte bStack_1737;
  byte bStack_1700;
  undefined8 uStack_1690;
  undefined8 uStack_1688;
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  undefined8 uStack_1670;
  undefined8 uStack_1668;
  undefined8 uStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined8 uStack_1610;
  undefined8 uStack_1608;
  undefined8 uStack_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  undefined8 uStack_15e8;
  undefined8 uStack_15e0;
  undefined8 uStack_15d8;
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined2 uStack_1570;
  byte bStack_156e;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  undefined2 uStack_1520;
  undefined8 uStack_1518;
  undefined8 uStack_1490;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_140f;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_138e;
  undefined1 auStack_1380 [48];
  double dStack_1350;
  double dStack_1348;
  long lStack_1328;
  double dStack_1320;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined1 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_114f;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10ce;
  byte bStack_1088;
  byte bStack_1087;
  byte bStack_1050;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined2 uStack_ec0;
  byte bStack_ebe;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined2 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_de0;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d50;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined1 uStack_cc0;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c3f;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bbe;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined2 uStack_a60;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined2 uStack_a10;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined1 uStack_8c0;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_83f;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7be;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined2 uStack_690;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined2 uStack_640;
  undefined1 auStack_630 [48];
  double dStack_600;
  double dStack_5f8;
  long lStack_5d8;
  double dStack_5d0;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 uStack_528;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_3ff;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_37e;
  undefined1 uStack_360;
  undefined1 uStack_35f;
  undefined1 uStack_348;
  byte bStack_338;
  byte bStack_337;
  byte bStack_300;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
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
  undefined2 uStack_170;
  byte bStack_16e;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_90;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c610b4(auStack_630,param_2 + 8,0x5a8);
  iVar3 = (int)auStack_630;
  func_0x00010189c838();
  if (iVar3 == 1) {
    func_0x000101895cec(&uStack_1a30);
    uStack_d78 = uStack_19d8;
    uStack_d80 = uStack_19e0;
    uStack_d68 = uStack_19c8;
    uStack_d70 = uStack_19d0;
    uStack_d60 = uStack_19c0;
    uStack_db8 = uStack_1a18;
    uStack_dc0 = uStack_1a20;
    uStack_da8 = uStack_1a08;
    uStack_db0 = uStack_1a10;
    uStack_d98 = uStack_19f8;
    uStack_da0 = uStack_1a00;
    uStack_d88 = uStack_19e8;
    uStack_d90 = uStack_19f0;
    uStack_d50 = uStack_19b0;
    uStack_dc8 = uStack_1a28;
    uStack_dd0 = uStack_1a30;
    func_0x000101895d08(&uStack_1fd8);
    uStack_ce8 = uStack_1f80;
    uStack_cf0 = uStack_1f88;
    uStack_cd8 = uStack_1f70;
    uStack_ce0 = uStack_1f78;
    uStack_cc8 = uStack_1f60;
    uStack_cd0 = uStack_1f68;
    uStack_d40 = CONCAT71(uStack_1fd7,uStack_1fd8);
    uStack_d28 = uStack_1fc0;
    uStack_d30 = uStack_1fc8;
    uStack_d18 = uStack_1fb0;
    uStack_d20 = uStack_1fb8;
    uStack_d08 = uStack_1fa0;
    uStack_d10 = uStack_1fa8;
    uStack_cf8 = uStack_1f90;
    uStack_d00 = uStack_1f98;
    uStack_cc0 = uStack_1f58;
    uStack_d38 = uStack_1fd0;
    func_0x0001018797b4(&uStack_1480);
    uStack_c68 = uStack_1438;
    uStack_c70 = uStack_1440;
    uStack_c58 = uStack_1428;
    uStack_c60 = uStack_1430;
    uStack_c50 = uStack_1420;
    uStack_c3f = uStack_140f;
    uStack_ca8 = uStack_1478;
    uStack_cb0 = uStack_1480;
    uStack_c98 = uStack_1468;
    uStack_ca0 = uStack_1470;
    uStack_c88 = uStack_1458;
    uStack_c90 = uStack_1460;
    uStack_c78 = uStack_1448;
    uStack_c80 = uStack_1450;
    func_0x000101895d28(&uStack_1400);
    uStack_be8 = uStack_13b8;
    uStack_bf0 = uStack_13c0;
    uStack_bd8 = uStack_13a8;
    uStack_be0 = uStack_13b0;
    uStack_bd0 = uStack_13a0;
    uStack_bbe = uStack_138e;
    uStack_c28 = uStack_13f8;
    uStack_c30 = uStack_1400;
    uStack_c18 = uStack_13e8;
    uStack_c20 = uStack_13f0;
    uStack_c08 = uStack_13d8;
    uStack_c10 = uStack_13e0;
    uStack_bf8 = uStack_13c8;
    uStack_c00 = uStack_13d0;
    uStack_ba0 = 0;
    uStack_ba8 = 0;
    uStack_bb0 = 0;
    uStack_b98 = 1;
    uStack_b88 = 0;
    uStack_b90 = 0;
    uStack_b78 = 0;
    uStack_b80 = 0;
    uStack_b70 = 0;
    uStack_b68 = 2;
    uStack_b58 = 0;
    uStack_b60 = 0;
    uStack_b48 = 0;
    uStack_b50 = 0;
    uStack_b38 = 0;
    uStack_b40 = 0;
    uStack_b28 = 0;
    uStack_b30 = 0;
    uStack_b18 = 0;
    uStack_b20 = 0;
    uStack_b08 = 0;
    uStack_b10 = 0;
    uStack_af8 = 0;
    uStack_b00 = 0;
    uStack_ae8 = 0;
    uStack_af0 = 0;
    uStack_ad8 = 0;
    uStack_ae0 = 0;
    uStack_ac8 = 0;
    uStack_ad0 = 0;
    uStack_ab8 = 0;
    uStack_ac0 = 0;
    uStack_aa8 = 0;
    uStack_ab0 = 0;
    uStack_a98 = 0;
    uStack_aa0 = 0;
    uStack_a88 = 0;
    uStack_a90 = 0;
    uStack_a78 = 0;
    uStack_a80 = 0;
    uStack_a68 = 0;
    uStack_a70 = 1;
    uStack_a60 = 0;
    uStack_a48 = 0;
    uStack_a50 = 0;
    uStack_a38 = 0;
    uStack_a40 = 0;
    uStack_a28 = 0;
    uStack_a30 = 0;
    uStack_a18 = 0;
    uStack_a20 = 0;
    uStack_a10 = 0x100;
    uStack_9f8 = 0;
    uStack_a00 = 0;
    uStack_9e8 = 0;
    uStack_9f0 = 0;
    uStack_9e0 = 0;
    func_0x000104218d60(auStack_1380,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    uStack_2008 = uStack_de0;
    uStack_658 = uStack_e88;
    uStack_660 = uStack_e90;
    uStack_648 = uStack_e78;
    uStack_650 = uStack_e80;
    uStack_640 = uStack_e70;
    uStack_678 = uStack_ea8;
    uStack_680 = uStack_eb0;
    uStack_668 = uStack_e98;
    uStack_670 = uStack_ea0;
    uStack_1ff8 = uStack_eb8;
    uStack_1ff0 = uStack_e68;
    bStack_1ffc = bStack_ebe;
    uStack_6a8 = uStack_ed8;
    uStack_6b0 = uStack_ee0;
    uStack_698 = uStack_ec8;
    uStack_6a0 = uStack_ed0;
    uStack_690 = uStack_ec0;
    uStack_6e8 = uStack_f18;
    uStack_6f0 = uStack_f20;
    uStack_6d8 = uStack_f08;
    uStack_6e0 = uStack_f10;
    uStack_6c8 = uStack_ef8;
    uStack_6d0 = uStack_f00;
    uStack_6b8 = uStack_ee8;
    uStack_6c0 = uStack_ef0;
    uStack_708 = uStack_f38;
    uStack_710 = uStack_f40;
    uStack_6f8 = uStack_f28;
    uStack_700 = uStack_f30;
    uStack_728 = uStack_f58;
    uStack_730 = uStack_f60;
    uStack_718 = uStack_f48;
    uStack_720 = uStack_f50;
    uStack_748 = uStack_f78;
    uStack_750 = uStack_f80;
    uStack_738 = uStack_f68;
    uStack_740 = uStack_f70;
    uStack_7a8 = uStack_fd8;
    uStack_7b0 = uStack_fe0;
    uStack_798 = uStack_fc8;
    uStack_7a0 = uStack_fd0;
    uStack_768 = uStack_f98;
    uStack_770 = uStack_fa0;
    uStack_758 = uStack_f88;
    uStack_760 = uStack_f90;
    uStack_788 = uStack_fb8;
    uStack_790 = uStack_fc0;
    uStack_778 = uStack_fa8;
    uStack_780 = uStack_fb0;
    uStack_7e8 = uStack_10f8;
    uStack_7f0 = uStack_1100;
    uStack_7d8 = uStack_10e8;
    uStack_7e0 = uStack_10f0;
    uStack_7d0 = uStack_10e0;
    uStack_7be = uStack_10ce;
    uStack_828 = uStack_1138;
    uStack_830 = uStack_1140;
    uStack_818 = uStack_1128;
    uStack_820 = uStack_1130;
    uStack_808 = uStack_1118;
    uStack_810 = uStack_1120;
    uStack_7f8 = uStack_1108;
    uStack_800 = uStack_1110;
    uStack_888 = uStack_1198;
    uStack_890 = uStack_11a0;
    uStack_878 = uStack_1188;
    uStack_880 = uStack_1190;
    uStack_8a8 = uStack_11b8;
    uStack_8b0 = uStack_11c0;
    uStack_898 = uStack_11a8;
    uStack_8a0 = uStack_11b0;
    uStack_83f = uStack_114f;
    uStack_858 = uStack_1168;
    uStack_860 = uStack_1170;
    uStack_850 = uStack_1160;
    uStack_868 = uStack_1178;
    uStack_870 = uStack_1180;
    uStack_918 = uStack_1220;
    uStack_920 = uStack_1228;
    uStack_908 = uStack_1210;
    uStack_910 = uStack_1218;
    uStack_938 = uStack_1240;
    uStack_940 = uStack_1248;
    uStack_928 = uStack_1230;
    uStack_930 = uStack_1238;
    uStack_8c0 = uStack_11c8;
    uStack_8d8 = uStack_11e0;
    uStack_8e0 = uStack_11e8;
    uStack_8c8 = uStack_11d0;
    uStack_8d0 = uStack_11d8;
    uStack_8f8 = uStack_1200;
    uStack_900 = uStack_1208;
    uStack_8e8 = uStack_11f0;
    uStack_8f0 = uStack_11f8;
    uStack_950 = uStack_1280;
    uStack_968 = uStack_1298;
    uStack_970 = uStack_12a0;
    uStack_958 = uStack_1288;
    uStack_960 = uStack_1290;
    uStack_9a8 = uStack_12d8;
    uStack_9b0 = uStack_12e0;
    uStack_998 = uStack_12c8;
    uStack_9a0 = uStack_12d0;
    uStack_988 = uStack_12b8;
    uStack_990 = uStack_12c0;
    uStack_978 = uStack_12a8;
    uStack_980 = uStack_12b0;
    uStack_9c8 = uStack_12f8;
    uStack_9d0 = uStack_1300;
    uStack_9b8 = uStack_12e8;
    uStack_9c0 = uStack_12f0;
    lStack_5d8 = lStack_1328;
    dVar5 = dStack_1320;
    dVar6 = dStack_1350;
    dVar7 = dStack_1348;
  }
  else {
    uStack_1fd8 = uStack_528;
    uStack_918 = uStack_4d0;
    uStack_920 = uStack_4d8;
    uStack_908 = uStack_4c0;
    uStack_910 = uStack_4c8;
    uStack_938 = uStack_4f0;
    uStack_940 = uStack_4f8;
    uStack_928 = uStack_4e0;
    uStack_930 = uStack_4e8;
    uStack_8c0 = uStack_478;
    uStack_8d8 = uStack_490;
    uStack_8e0 = uStack_498;
    uStack_8c8 = uStack_480;
    uStack_8d0 = uStack_488;
    uStack_8f8 = uStack_4b0;
    uStack_900 = uStack_4b8;
    uStack_8e8 = uStack_4a0;
    uStack_8f0 = uStack_4a8;
    uStack_dd0 = CONCAT71(uStack_dd0._1_7_,uStack_360);
    uStack_d40 = CONCAT71(uStack_d40._1_7_,uStack_35f);
    uStack_c30 = CONCAT71(uStack_c30._1_7_,uStack_348);
    uStack_788 = uStack_268;
    uStack_790 = uStack_270;
    uStack_778 = uStack_258;
    uStack_780 = uStack_260;
    uStack_768 = uStack_248;
    uStack_770 = uStack_250;
    uStack_758 = uStack_238;
    uStack_760 = uStack_240;
    uStack_7a8 = uStack_288;
    uStack_7b0 = uStack_290;
    uStack_798 = uStack_278;
    uStack_7a0 = uStack_280;
    uStack_728 = uStack_208;
    uStack_730 = uStack_210;
    uStack_718 = uStack_1f8;
    uStack_720 = uStack_200;
    uStack_748 = uStack_228;
    uStack_750 = uStack_230;
    uStack_738 = uStack_218;
    uStack_740 = uStack_220;
    uStack_6a8 = uStack_188;
    uStack_6b0 = uStack_190;
    uStack_698 = uStack_178;
    uStack_6a0 = uStack_180;
    uStack_690 = uStack_170;
    uStack_708 = uStack_1e8;
    uStack_710 = uStack_1f0;
    uStack_6f8 = uStack_1d8;
    uStack_700 = uStack_1e0;
    uStack_6e8 = uStack_1c8;
    uStack_6f0 = uStack_1d0;
    uStack_6d8 = uStack_1b8;
    uStack_6e0 = uStack_1c0;
    uStack_6c8 = uStack_1a8;
    uStack_6d0 = uStack_1b0;
    uStack_6b8 = uStack_198;
    uStack_6c0 = uStack_1a0;
    bStack_1ffc = bStack_16e;
    uStack_640 = uStack_120;
    uStack_658 = uStack_138;
    uStack_660 = uStack_140;
    uStack_648 = uStack_128;
    uStack_650 = uStack_130;
    uStack_678 = uStack_158;
    uStack_680 = uStack_160;
    uStack_668 = uStack_148;
    uStack_670 = uStack_150;
    uStack_1ff8 = uStack_168;
    uStack_1ff0 = uStack_118;
    uStack_950 = uStack_530;
    uStack_2008 = uStack_90;
    uStack_968 = uStack_548;
    uStack_970 = uStack_550;
    uStack_958 = uStack_538;
    uStack_960 = uStack_540;
    uStack_9a8 = uStack_588;
    uStack_9b0 = uStack_590;
    uStack_998 = uStack_578;
    uStack_9a0 = uStack_580;
    uStack_988 = uStack_568;
    uStack_990 = uStack_570;
    uStack_978 = uStack_558;
    uStack_980 = uStack_560;
    uStack_9c8 = uStack_5a8;
    uStack_9d0 = uStack_5b0;
    uStack_9b8 = uStack_598;
    uStack_9c0 = uStack_5a0;
    uStack_868 = uStack_428;
    uStack_870 = uStack_430;
    uStack_858 = uStack_418;
    uStack_860 = uStack_420;
    uStack_850 = uStack_410;
    uStack_83f = uStack_3ff;
    uStack_8a8 = uStack_468;
    uStack_8b0 = uStack_470;
    uStack_898 = uStack_458;
    uStack_8a0 = uStack_460;
    uStack_888 = uStack_448;
    uStack_890 = uStack_450;
    uStack_878 = uStack_438;
    uStack_880 = uStack_440;
    uStack_808 = uStack_3c8;
    uStack_810 = uStack_3d0;
    uStack_800 = uStack_3c0;
    uStack_7f8 = uStack_3b8;
    uStack_828 = uStack_3e8;
    uStack_830 = uStack_3f0;
    uStack_818 = uStack_3d8;
    uStack_820 = uStack_3e0;
    uStack_7be = uStack_37e;
    uStack_7d8 = uStack_398;
    uStack_7e0 = uStack_3a0;
    uStack_7d0 = uStack_390;
    uStack_7e8 = uStack_3a8;
    uStack_7f0 = uStack_3b0;
    dVar5 = dStack_5d0;
    dVar6 = dStack_600;
    dVar7 = dStack_5f8;
    bStack_1050 = bStack_300;
    bStack_1087 = bStack_337;
    bStack_1088 = bStack_338;
  }
  uStack_1930 = uStack_950;
  uStack_1948 = uStack_968;
  uStack_1950 = uStack_970;
  uStack_1938 = uStack_958;
  uStack_1940 = uStack_960;
  uStack_1988 = uStack_9a8;
  uStack_1990 = uStack_9b0;
  uStack_1978 = uStack_998;
  uStack_1980 = uStack_9a0;
  uStack_1968 = uStack_988;
  uStack_1970 = uStack_990;
  uStack_1958 = uStack_978;
  uStack_1960 = uStack_980;
  uStack_19a8 = uStack_9c8;
  uStack_19b0 = uStack_9d0;
  uStack_1998 = uStack_9b8;
  uStack_19a0 = uStack_9c0;
  uStack_1890 = uStack_8d8;
  uStack_1898 = uStack_8e0;
  uStack_1880 = uStack_8c8;
  uStack_1888 = uStack_8d0;
  uStack_18d0 = uStack_918;
  uStack_18d8 = uStack_920;
  uStack_18c0 = uStack_908;
  uStack_18c8 = uStack_910;
  uStack_18b0 = uStack_8f8;
  uStack_18b8 = uStack_900;
  uStack_18a0 = uStack_8e8;
  uStack_18a8 = uStack_8f0;
  uStack_18f0 = uStack_938;
  uStack_18f8 = uStack_940;
  uStack_18e0 = uStack_928;
  uStack_18e8 = uStack_930;
  uStack_1878 = uStack_8c0;
  uStack_17ff = uStack_83f;
  uStack_1828 = uStack_868;
  uStack_1830 = uStack_870;
  uStack_1818 = uStack_858;
  uStack_1820 = uStack_860;
  uStack_1810 = uStack_850;
  uStack_1868 = uStack_8a8;
  uStack_1870 = uStack_8b0;
  uStack_1858 = uStack_898;
  uStack_1860 = uStack_8a0;
  uStack_1848 = uStack_888;
  uStack_1850 = uStack_890;
  uStack_1838 = uStack_878;
  uStack_1840 = uStack_880;
  uStack_177e = uStack_7be;
  uStack_17c8 = uStack_808;
  uStack_17d0 = uStack_810;
  uStack_17b8 = uStack_7f8;
  uStack_17c0 = uStack_800;
  uStack_17e8 = uStack_828;
  uStack_17f0 = uStack_830;
  uStack_17d8 = uStack_818;
  uStack_17e0 = uStack_820;
  uStack_1798 = uStack_7d8;
  uStack_17a0 = uStack_7e0;
  uStack_1790 = uStack_7d0;
  uStack_17a8 = uStack_7e8;
  uStack_17b0 = uStack_7f0;
  bStack_1738 = bStack_1088 & 1;
  bStack_1737 = bStack_1087 & 1;
  bStack_1700 = bStack_1050 & 1;
  uStack_1658 = uStack_778;
  uStack_1660 = uStack_780;
  uStack_1648 = uStack_768;
  uStack_1650 = uStack_770;
  uStack_1688 = uStack_7a8;
  uStack_1690 = uStack_7b0;
  uStack_1678 = uStack_798;
  uStack_1680 = uStack_7a0;
  uStack_1668 = uStack_788;
  uStack_1670 = uStack_790;
  uStack_15e8 = uStack_708;
  uStack_15f0 = uStack_710;
  uStack_15f8 = uStack_718;
  uStack_1600 = uStack_720;
  uStack_1608 = uStack_728;
  uStack_1610 = uStack_730;
  uStack_1618 = uStack_738;
  uStack_1620 = uStack_740;
  uStack_1638 = uStack_758;
  uStack_1640 = uStack_760;
  uStack_1628 = uStack_748;
  uStack_1630 = uStack_750;
  uStack_15a8 = uStack_6c8;
  uStack_15b0 = uStack_6d0;
  uStack_15b8 = uStack_6d8;
  uStack_15c0 = uStack_6e0;
  uStack_15c8 = uStack_6e8;
  uStack_15d0 = uStack_6f0;
  uStack_15d8 = uStack_6f8;
  uStack_15e0 = uStack_700;
  uStack_1570 = uStack_690;
  uStack_1578 = uStack_698;
  uStack_1580 = uStack_6a0;
  uStack_1588 = uStack_6a8;
  uStack_1590 = uStack_6b0;
  uStack_1598 = uStack_6b8;
  uStack_15a0 = uStack_6c0;
  bStack_156e = bStack_1ffc & 1;
  uStack_1568 = uStack_1ff8;
  uStack_1558 = uStack_678;
  uStack_1560 = uStack_680;
  uStack_1520 = uStack_640;
  uStack_1528 = uStack_648;
  uStack_1530 = uStack_650;
  uStack_1538 = uStack_658;
  uStack_1540 = uStack_660;
  uStack_1548 = uStack_668;
  uStack_1550 = uStack_670;
  uStack_1518 = uStack_1ff0;
  uStack_1490 = uStack_2008;
  func_0x0001034a3db4(auStack_630,&uStack_1fd8,0x112dcbd00,&UNK_10d98e550);
  FUN_1035cb6dc(0 < lStack_5d8,0,0xc000000000000000);
  if (-0x80000001 < lStack_5d8) {
    if (lStack_5d8 < 0x80000000) {
      FUN_1035cb924(lStack_5d8,0,0xc000000000000000);
      func_0x0001035cb538((float)(dVar5 / 1000.0),0,0xc000000000000000);
      func_0x0001000d224c(&uStack_1fd8);
      uVar1 = CONCAT71(uStack_1fd7,uStack_1fd8);
      uVar4 = uVar1;
      func_0x000107c42568();
      func_0x000107c615e8(uVar1);
      if ((uVar4 & 1) != 0) {
        FUN_1035cd5ec((float)(dVar6 / 1000.0),0,0xc000000000000000);
        func_0x0001035cd69c((float)(dVar7 / 1000.0),0,0xc000000000000000);
      }
      FUN_1035ccec0(0,0,0xc000000000000000);
      func_0x00010178e3b8(&uStack_1a30);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a32e4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034a32e0);
  (*pcVar2)();
}



/* Entry: 1034a378c; end: 1034a3d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034a378c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  long unaff_x21;
  double dVar13;
  ulong auStack_c40 [24];
  byte bStack_b80;
  byte bStack_b7f;
  undefined6 uStack_b7e;
  double dStack_b78;
  byte bStack_b70;
  undefined7 uStack_b6f;
  ulong uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined1 uStack_af8;
  undefined7 uStack_af7;
  double dStack_af0;
  char cStack_ae8;
  undefined7 uStack_ae7;
  double dStack_ae0;
  char cStack_ad8;
  undefined1 uStack_ad0;
  undefined7 uStack_acf;
  char cStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined1 uStack_a60;
  undefined8 uStack_a50;
  double dStack_a48;
  undefined8 uStack_a40;
  ulong uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  double dStack_9c0;
  undefined8 uStack_9b8;
  double dStack_9b0;
  char cStack_9a8;
  undefined7 uStack_9a7;
  undefined1 uStack_9a0;
  undefined7 uStack_99f;
  char cStack_998;
  long lStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  long lStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  byte bStack_958;
  byte bStack_957;
  double dStack_950;
  byte bStack_948;
  ulong uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined1 uStack_8d0;
  double dStack_8c8;
  char cStack_8c0;
  double dStack_8b8;
  char cStack_8b0;
  double dStack_8a8;
  char cStack_8a0;
  undefined1 auStack_898 [320];
  undefined1 auStack_758 [1448];
  ulong uStack_1b0;
  double dStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
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
  double dStack_120;
  undefined8 uStack_118;
  double dStack_110;
  char cStack_108;
  undefined1 uStack_100;
  undefined8 uStack_ff;
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
  undefined1 uStack_90;
  char cVar2;
  char cVar3;
  
  lVar6 = param_2;
  uVar9 = param_3;
  FUN_1035967c0();
  lVar7 = param_2;
  uVar10 = param_4;
  lStack_970 = lVar6;
  uStack_968 = uVar9;
  uStack_960 = param_4;
  FUN_1034b0fc0(param_1);
  if (unaff_x21 == 0) {
    lStack_988 = lVar7;
    uStack_980 = param_3;
    uStack_978 = uVar10;
    FUN_1034a27b8(&lStack_988,param_2);
    uVar10 = uStack_978;
    uVar9 = uStack_980;
    lVar6 = lStack_988;
    func_0x00010006c00c(lStack_988,uStack_980);
    func_0x000107c6157c(uVar10);
    func_0x000103595f34(lVar6,uVar9,uVar10);
    uStack_9c8 = *(undefined8 *)(param_2 + 0xa38);
    uStack_9d0 = *(undefined8 *)(param_2 + 0xa30);
    uStack_9b8 = *(undefined8 *)(param_2 + 0xa48);
    dStack_9c0 = *(double *)(param_2 + 0xa40);
    dStack_9b0 = *(double *)(param_2 + 0xa50);
    cStack_9a8 = (char)*(undefined8 *)(param_2 + 0xa58);
    uStack_99f = (undefined7)*(undefined8 *)(param_2 + 0xa61);
    cStack_998 = (char)((ulong)*(undefined8 *)(param_2 + 0xa61) >> 0x38);
    uStack_9a7 = (undefined7)*(undefined8 *)(param_2 + 0xa59);
    uStack_9a0 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xa59) >> 0x38);
    uStack_a08 = *(undefined8 *)(param_2 + 0x9f8);
    uStack_a10 = *(undefined8 *)(param_2 + 0x9f0);
    uStack_9f8 = *(undefined8 *)(param_2 + 0xa08);
    uStack_a00 = *(undefined8 *)(param_2 + 0xa00);
    uStack_9e8 = *(undefined8 *)(param_2 + 0xa18);
    uStack_9f0 = *(undefined8 *)(param_2 + 0xa10);
    uStack_9d8 = *(undefined8 *)(param_2 + 0xa28);
    uStack_9e0 = *(undefined8 *)(param_2 + 0xa20);
    dStack_a48 = *(double *)(param_2 + 0x9b8);
    uStack_a50 = *(undefined8 *)(param_2 + 0x9b0);
    uStack_a38 = *(ulong *)(param_2 + 0x9c8);
    uStack_a40 = *(undefined8 *)(param_2 + 0x9c0);
    uStack_a28 = *(undefined8 *)(param_2 + 0x9d8);
    uStack_a30 = *(undefined8 *)(param_2 + 0x9d0);
    uStack_a18 = *(undefined8 *)(param_2 + 0x9e8);
    uStack_a20 = *(undefined8 *)(param_2 + 0x9e0);
    iVar5 = (int)&uStack_a50;
    func_0x00010178e278();
    if (iVar5 == 1) {
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_b0 = 1;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      func_0x00010420e300(&bStack_958,0,0,0,0,0,0,&uStack_f0,0,1,0,1);
      uStack_a78 = uStack_8e8;
      uStack_a80 = uStack_8f0;
      uStack_a68 = uStack_8d8;
      uStack_a70 = uStack_8e0;
      uStack_a60 = uStack_8d0;
      uStack_ab8 = uStack_928;
      uStack_ac0 = uStack_930;
      uStack_aa8 = uStack_918;
      uStack_ab0 = uStack_920;
      uStack_a98 = uStack_908;
      uStack_aa0 = uStack_910;
      uStack_a88 = uStack_8f8;
      uStack_a90 = uStack_900;
      dVar11 = dStack_8b8;
      dVar12 = dStack_8c8;
      dVar13 = dStack_8a8;
      cVar1 = cStack_8a0;
      cVar2 = cStack_8b0;
      cVar3 = cStack_8c0;
    }
    else {
      uStack_a78 = uStack_9e0;
      uStack_a80 = uStack_9e8;
      uStack_a68 = uStack_9d0;
      uStack_a70 = uStack_9d8;
      uStack_a60 = (undefined1)uStack_9c8;
      uStack_ab8 = uStack_a20;
      uStack_ac0 = uStack_a28;
      uStack_aa8 = uStack_a10;
      uStack_ab0 = uStack_a18;
      uStack_a98 = uStack_a00;
      uStack_aa0 = uStack_a08;
      uStack_a88 = uStack_9f0;
      uStack_a90 = uStack_9f8;
      dVar13 = (double)CONCAT71(uStack_99f,uStack_9a0);
      dVar11 = dStack_9b0;
      dVar12 = dStack_9c0;
      uStack_940 = uStack_a38;
      uStack_938 = uStack_a30;
      dStack_950 = dStack_a48;
      bStack_948 = (byte)uStack_a40;
      bStack_957 = uStack_a50._1_1_;
      bStack_958 = (byte)uStack_a50;
      cVar1 = cStack_998;
      cVar2 = cStack_9a8;
      cVar3 = (char)uStack_9b8;
    }
    uStack_b20 = uStack_a88;
    uStack_b28 = uStack_a90;
    uStack_b10 = uStack_a78;
    uStack_b18 = uStack_a80;
    uStack_b00 = uStack_a68;
    uStack_b08 = uStack_a70;
    uStack_b50 = uStack_ab8;
    uStack_b58 = uStack_ac0;
    uStack_af8 = uStack_a60;
    uStack_b40 = uStack_aa8;
    uStack_b48 = uStack_ab0;
    uStack_b30 = uStack_a98;
    uStack_b38 = uStack_aa0;
    uStack_ad0 = SUB81(dVar13,0);
    uStack_acf = (undefined7)((ulong)dVar13 >> 8);
    uStack_168 = uStack_aa0;
    uStack_170 = uStack_aa8;
    uStack_158 = uStack_a90;
    uStack_160 = uStack_a98;
    uStack_148 = uStack_a80;
    uStack_150 = uStack_a88;
    uStack_138 = uStack_a70;
    uStack_140 = uStack_a78;
    uStack_1b0 = CONCAT62(uStack_b7e,CONCAT11(bStack_957,bStack_958)) & 0xffffffffffff0101;
    uStack_1a0 = CONCAT71(uStack_b6f,bStack_948) & 0xffffffffffffff01;
    uStack_188 = uStack_ac0;
    uStack_178 = uStack_ab0;
    uStack_180 = uStack_ab8;
    uStack_128 = CONCAT71(uStack_af7,uStack_a60);
    uStack_118 = CONCAT71(uStack_ae7,cVar3);
    uStack_130 = uStack_a68;
    uStack_ff = CONCAT17(cVar1,uStack_acf);
    uStack_100 = uStack_ad0;
    bStack_b80 = bStack_958 & 1;
    bStack_b7f = bStack_957 & 1;
    dStack_b78 = dStack_950;
    bStack_b70 = bStack_948 & 1;
    uStack_b68 = uStack_940;
    uStack_b60 = uStack_938;
    dStack_af0 = dVar12;
    cStack_ae8 = cVar3;
    dStack_ae0 = dVar11;
    cStack_ad8 = cVar2;
    cStack_ac8 = cVar1;
    dStack_1a8 = dStack_950;
    uStack_198 = uStack_940;
    uStack_190 = uStack_938;
    dStack_120 = dVar12;
    dStack_110 = dVar11;
    cStack_108 = cVar2;
    func_0x0001034a3db4(&uStack_a50,auStack_c40,0x112dcbc58,&UNK_10d98e2f0);
    FUN_103596124(bStack_958 & 1,0,0xc000000000000000);
    func_0x0001035961cc(bStack_957 & 1,0,0xc000000000000000);
    FUN_103596274((float)(dStack_950 * 1000.0),0,0xc000000000000000);
    FUN_10359631c(bStack_948 & 1,0,0xc000000000000000);
    if (2 < uStack_940) {
      auStack_c40[0] = uStack_940;
      func_0x000107c60614(&UNK_1107969f0,auStack_c40,&UNK_1107969f0,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1034a3d30);
      (*pcVar4)();
    }
    FUN_1035963c4(uStack_940,1);
    func_0x0001034a32e4(&uStack_1b0);
    FUN_103596450();
    if (cVar3 != '\x01') {
      if ((((ulong)dVar12 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1034a3cf8);
        (*pcVar4)();
      }
      if (dVar12 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1034a3cfc);
        (*pcVar4)();
      }
      if (9.223372036854776e+18 <= dVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1034a3d04);
        (*pcVar4)();
      }
      func_0x0001035964f4((long)dVar12,0,0xc000000000000000);
    }
    if (cVar2 != '\x01') {
      if ((((ulong)dVar11 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1034a3d00);
        (*pcVar4)();
      }
      if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1034a3d08);
        (*pcVar4)();
      }
      if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1034a3d0c);
        (*pcVar4)();
      }
      func_0x000103596598((long)dVar11,0,0xc000000000000000);
    }
    if (cVar1 != '\x01') {
      FUN_103596710((float)dVar13,0,0xc000000000000000);
    }
    func_0x0001000d224c(auStack_c40);
    uVar8 = auStack_c40[0];
    func_0x000107c4258c();
    func_0x000107c615e8(auStack_c40[0]);
    if ((uVar8 & 1) == 0) {
      func_0x00010006c090(lVar6,uVar9);
      func_0x000107c61574(uVar10);
      func_0x00010178e2d8(&bStack_b80);
    }
    else {
      func_0x000107c610b4(auStack_758,param_2 + 8,0x5a8);
      FUN_1034b0e1c(auStack_898,auStack_758);
      FUN_10359663c(auStack_898);
      func_0x00010178e2d8(&bStack_b80);
      func_0x00010006c090(lVar6,uVar9);
      func_0x000107c61574(uVar10);
    }
  }
  else {
    func_0x00010006c090(lVar6,uVar9);
    func_0x000107c61574(param_4);
  }
  return;
}



/* Entry: 1034a3d30; end: 1034a3dfb;  */

undefined8 FUN_1034a3d30(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112dcde38;
  func_0x0001000285a8(0x112dcde38,&UNK_10dce36f0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1034a3dfc; end: 1034a5633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034a3dfc(undefined8 param_1,long param_2,double param_3,undefined1 *param_4)

{
  ulong *puVar1;
  undefined1 uVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  double dVar17;
  undefined8 uVar18;
  long **pplVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 uVar22;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int *piVar23;
  long extraout_x8_02;
  undefined4 *puVar24;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 uVar25;
  ulong uVar26;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  byte bVar27;
  long unaff_x20;
  ulong uVar28;
  ulong uVar29;
  long unaff_x21;
  int *piVar30;
  undefined8 uVar31;
  long *plVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined4 *puStack_2f50;
  int iStack_2f44;
  long *plStack_2f40;
  undefined8 uStack_2f38;
  long lStack_2f30;
  undefined4 *puStack_2f20;
  undefined8 uStack_2f18;
  undefined4 *puStack_2f10;
  int *piStack_2f08;
  code *pcStack_2f00;
  int *piStack_2ef8;
  long lStack_2ef0;
  long lStack_2ee8;
  long lStack_2ee0;
  ulong uStack_2ed8;
  long *plStack_2ed0;
  long lStack_2ec8;
  long *plStack_2ec0;
  double dStack_2eb8;
  long lStack_2eb0;
  undefined4 *puStack_2ea8;
  int *piStack_2ea0;
  long lStack_2e98;
  undefined8 uStack_2e80;
  undefined8 uStack_2e78;
  undefined8 uStack_2e70;
  undefined8 uStack_2b78;
  undefined8 uStack_2b70;
  undefined8 uStack_2b68;
  long *plStack_2b60;
  double dStack_2b58;
  long lStack_2b50;
  int *piStack_2b48;
  long lStack_2b40;
  double dStack_2b38;
  long lStack_2b30;
  long lStack_2b28;
  long lStack_2b20;
  ulong uStack_2b18;
  long lStack_2b10;
  long lStack_2b08;
  undefined8 uStack_2b00;
  undefined8 uStack_2af8;
  undefined8 uStack_2af0;
  undefined8 uStack_2ae8;
  undefined8 uStack_2ae0;
  undefined8 uStack_2ad8;
  undefined8 uStack_2ad0;
  undefined8 uStack_2ac8;
  undefined8 uStack_2ac0;
  undefined8 uStack_2ab8;
  undefined8 uStack_2ab0;
  undefined8 uStack_2aa8;
  long *plStack_2850;
  double dStack_2848;
  long lStack_2840;
  int *piStack_2838;
  long lStack_2830;
  double dStack_2828;
  long lStack_2820;
  long lStack_2818;
  long lStack_2810;
  ulong uStack_2808;
  long lStack_2800;
  long lStack_27f8;
  undefined8 uStack_27f0;
  undefined8 uStack_27e8;
  undefined8 uStack_27e0;
  undefined8 uStack_27d8;
  undefined8 uStack_27d0;
  undefined8 uStack_27c8;
  undefined8 uStack_27c0;
  undefined8 uStack_27b8;
  undefined8 uStack_27b0;
  undefined8 uStack_27a8;
  undefined8 uStack_27a0;
  undefined8 uStack_2798;
  undefined1 uStack_2790;
  int *piStack_2548;
  long lStack_2540;
  undefined8 uStack_2538;
  long *plStack_2530;
  double dStack_2528;
  undefined8 uStack_2520;
  undefined8 uStack_2510;
  undefined1 uStack_2508;
  long *plStack_2500;
  double dStack_24f8;
  undefined8 uStack_24f0;
  int *piStack_24e8;
  undefined8 uStack_24e0;
  undefined8 uStack_24d8;
  undefined8 uStack_24d0;
  undefined8 uStack_24c8;
  undefined8 uStack_24c0;
  undefined8 uStack_24b8;
  undefined8 uStack_24b0;
  undefined8 uStack_24a8;
  undefined8 uStack_24a0;
  undefined8 uStack_2498;
  undefined8 uStack_2490;
  undefined8 uStack_2488;
  undefined8 uStack_2480;
  undefined8 uStack_2478;
  undefined8 uStack_2470;
  undefined8 uStack_2468;
  undefined8 uStack_2460;
  undefined8 uStack_2458;
  undefined8 uStack_2450;
  undefined8 uStack_2448;
  undefined1 uStack_2440;
  undefined8 uStack_2438;
  undefined1 uStack_2430;
  undefined8 uStack_2428;
  undefined8 uStack_2420;
  int aiStack_2418 [8];
  ulong uStack_23f8;
  undefined8 uStack_23f0;
  undefined8 uStack_23e8;
  long *plStack_23e0;
  double dStack_23d8;
  undefined8 uStack_23d0;
  int *piStack_23c8;
  undefined8 uStack_23c0;
  undefined8 uStack_23b8;
  undefined8 uStack_23b0;
  undefined8 uStack_23a8;
  undefined8 uStack_23a0;
  undefined8 uStack_2398;
  undefined8 uStack_2390;
  undefined8 uStack_2388;
  undefined8 uStack_2380;
  undefined8 uStack_2378;
  undefined8 uStack_2370;
  undefined8 uStack_2368;
  undefined8 uStack_2360;
  undefined8 uStack_2358;
  undefined8 uStack_2350;
  undefined8 uStack_2348;
  undefined8 uStack_2340;
  undefined8 uStack_2338;
  undefined8 uStack_2330;
  undefined8 uStack_2328;
  undefined1 uStack_2320;
  long *plStack_2318;
  long *plStack_2310;
  long lStack_2308;
  long lStack_2300;
  long lStack_22f8;
  long lStack_22f0;
  double dStack_22e8;
  long lStack_22e0;
  long lStack_22d8;
  long lStack_22d0;
  ulong uStack_22c8;
  long lStack_22c0;
  long lStack_22b8;
  long *plStack_22a8;
  long lStack_22a0;
  long lStack_2298;
  long lStack_2290;
  undefined8 uStack_2288;
  undefined8 uStack_2280;
  undefined8 uStack_2278;
  long lStack_2270;
  long lStack_2268;
  ulong uStack_2260;
  long lStack_2258;
  long lStack_2250;
  undefined1 auStack_2248 [608];
  undefined1 auStack_1fe8 [480];
  byte bStack_1e08;
  undefined1 auStack_1d88 [1448];
  long lStack_17e0;
  ulong uStack_17d8;
  double dStack_17d0;
  byte bStack_14c7;
  byte bStack_14c6;
  byte bStack_14c5;
  byte bStack_14c4;
  int *piStack_14c0;
  long lStack_14b8;
  byte bStack_14a8;
  byte bStack_14a7;
  double dStack_14a0;
  byte bStack_1498;
  byte bStack_1497;
  double dStack_1490;
  byte bStack_1488;
  undefined3 uStack_1487;
  undefined1 uStack_1484;
  undefined3 uStack_1483;
  int *piStack_1480;
  char cStack_1478;
  undefined1 auStack_1477 [743];
  undefined1 auStack_1190 [96];
  double dStack_1130;
  undefined1 auStack_be8 [16];
  undefined8 uStack_bd8;
  undefined8 uStack_640;
  double dStack_638;
  undefined8 uStack_630;
  int *piStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined1 uStack_580;
  double dStack_2c0;
  char cStack_2b8;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = 0;
  plStack_2ed0 = extraout_x8;
  lStack_2eb0 = param_2;
  func_0x0001046d90b0();
  plStack_2ec0 = *(long **)(lVar8 + -8);
  lStack_2ec8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(plStack_2ec0[8]);
  lVar10 = (long)&puStack_2f50 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3ee8;
  lStack_2ef0 = lVar10;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  piVar23 = (int *)(lVar10 - extraout_x8_01);
  lVar8 = 0x112db3a00;
  piStack_2f08 = piVar23;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  piVar23 = (int *)((long)piVar23 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  piStack_2ef8 = piVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar24 = (undefined4 *)((long)piVar23 - extraout_x12);
  lVar8 = 0x112dcbf08;
  puStack_2ea8 = puVar24;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar24 = (undefined4 *)((long)puVar24 - extraout_x8_03);
  lVar8 = 0x112db3cd0;
  puStack_2f10 = puVar24;
  func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar24 = (undefined4 *)((long)puVar24 - extraout_x8_04);
  lVar8 = 0x112dcbcf8;
  puStack_2f20 = puVar24;
  func_0x0001000285a8(0x112dcbcf8,&UNK_10d98e3f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = (long)puVar24 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lStack_2ee0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  piVar23 = (int *)(lVar8 - extraout_x12_00);
  piStack_2ea0 = piVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar26 = (long)piVar23 - extraout_x12_01;
  uStack_2ed8 = uVar26;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_2ee8 = uVar26 - extraout_x12_02;
  uVar2 = *param_4;
  uVar33 = *(undefined8 *)(param_4 + 8);
  uVar25 = *(undefined8 *)(param_4 + 0x18);
  lStack_2e98 = CONCAT44(lStack_2e98._4_4_,(uint)(byte)param_4[0x20]);
  pcVar9 = (code *)0x0;
  func_0x000100b91d00();
  lVar8 = (long)param_3 + (long)*(int *)(pcVar9 + 0x88);
  uVar31 = *(undefined8 *)(lVar8 + 0x90);
  uVar34 = *(undefined8 *)(lVar8 + 0x98);
  pcStack_2f00 = pcVar9;
  dStack_2eb8 = param_3;
  func_0x000101682c20();
  uVar18 = 0;
  uVar22 = 0;
  if ((int)lVar8 != 1) {
    func_0x000107c61434(uVar34);
    uVar18 = uVar31;
    uVar22 = uVar34;
  }
  uVar35 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
  uVar34 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
  uVar31 = *(undefined8 *)(unaff_x20 + _DAT_112f73260);
  lVar10 = 0;
  func_0x0001034b716c();
  lVar20 = 7;
  func_0x000107c613fc();
  *(undefined8 *)(lVar10 + 0x10) = uVar18;
  *(undefined8 *)(lVar10 + 0x18) = uVar22;
  *(undefined1 *)(lVar10 + 0x20) = uVar2;
  *(undefined8 *)(lVar10 + 0x28) = uVar33;
  *(undefined1 *)(lVar10 + 0x30) = 0;
  *(undefined8 *)(lVar10 + 0x38) = uVar25;
  *(char *)(lVar10 + 0x40) = (char)lStack_2e98;
  *(undefined8 *)(lVar10 + 0x48) = uVar35;
  *(undefined8 *)(lVar10 + 0x50) = uVar34;
  *(undefined8 *)(lVar10 + 0x58) = uVar31;
  func_0x000107c6157c(uVar35);
  func_0x000107c6157c(uVar34);
  func_0x000107c6157c(uVar31);
  func_0x00010351c210(&plStack_22a8);
  dStack_22e8 = (double)uStack_2280;
  lStack_22f0 = uStack_2288;
  lStack_22d8 = lStack_2270;
  lStack_22e0 = uStack_2278;
  uStack_22c8 = uStack_2260;
  lStack_22d0 = lStack_2268;
  lStack_22b8 = lStack_2250;
  lStack_22c0 = lStack_2258;
  lStack_2308 = lStack_22a0;
  plStack_2310 = plStack_22a8;
  lStack_22f8 = lStack_2290;
  lStack_2300 = lStack_2298;
  lVar8 = lStack_2eb0;
  dVar17 = dStack_2eb8;
  FUN_1034b0fc0(param_1);
  if (unaff_x21 != 0) {
    func_0x000107c61574(uVar34);
    func_0x000107c61574(uVar35);
    func_0x000107c6142c(uVar22);
    func_0x000107c61588(lVar10);
    func_0x000107c61574(uVar31);
    func_0x000107c6145c(lVar10,0x60,7);
    FUN_1034a5634(&plStack_2310);
    return;
  }
  uStack_2f38 = uVar35;
  lStack_2f30 = lVar10;
  func_0x00010349f458(lStack_22f0,dStack_22e8,lStack_22e0);
  lVar10 = lStack_2eb0;
  uVar26 = *(ulong *)(lStack_2eb0 + 0x928);
  lStack_22f0 = lVar8;
  dStack_22e8 = dVar17;
  lStack_22e0 = lVar20;
  if ((uVar26 < 2) || (lVar8 = *(long *)(uVar26 + 0x10), lVar8 == 0)) {
LAB_1034a541c:
    func_0x0001000d224c(&uStack_640);
    plVar32 = uStack_640;
    plVar15 = uStack_640;
    func_0x000107c4258c();
    func_0x000107c615e8(plVar32);
    func_0x000107c61574(lStack_2f30);
    if ((int)plVar15 != 0) {
      func_0x000107c610b4(&uStack_640,lStack_2eb0 + 8,0x5a8);
      iVar7 = (int)&uStack_640;
      func_0x00010189c838();
      uVar26 = 0;
      lVar8 = -0x1000000000000000;
      if ((iVar7 != 1) && (cStack_2b8 != '\x01')) {
        uVar26 = (ulong)(uint)(float)dStack_2c0;
        func_0x000100d54858(0,0,0xf000000000000000);
        lVar8 = -0x4000000000000000;
      }
      func_0x000101618334(lStack_22d8,lStack_22d0,uStack_22c8,lStack_22c0,lStack_22b8);
      lStack_22d0 = -0x4000000000000000;
      lStack_22d8 = 0;
      lStack_22c0 = 0;
      uStack_22c8 = uVar26;
      lStack_22b8 = lVar8;
    }
    dStack_2b38 = dStack_22e8;
    lStack_2b40 = lStack_22f0;
    lStack_2b28 = lStack_22d8;
    lStack_2b30 = lStack_22e0;
    uStack_2b18 = uStack_22c8;
    lStack_2b20 = lStack_22d0;
    lStack_2b08 = lStack_22b8;
    lStack_2b10 = lStack_22c0;
    dStack_2b58 = (double)lStack_2308;
    plStack_2b60 = plStack_2310;
    piStack_2b48 = (int *)lStack_22f8;
    lStack_2b50 = lStack_2300;
    dStack_2828 = dStack_22e8;
    lStack_2830 = lStack_22f0;
    lStack_2818 = lStack_22d8;
    lStack_2820 = lStack_22e0;
    uStack_2808 = uStack_22c8;
    lStack_2810 = lStack_22d0;
    lStack_27f8 = lStack_22b8;
    lStack_2800 = lStack_22c0;
    dStack_2848 = (double)lStack_2308;
    plStack_2850 = plStack_2310;
    piStack_2838 = (int *)lStack_22f8;
    lStack_2840 = lStack_2300;
    func_0x0001034a5668(&plStack_2b60,&uStack_2e80);
    FUN_1034a5634(&plStack_2850);
    plStack_2ed0[5] = (long)dStack_2b38;
    plStack_2ed0[4] = lStack_2b40;
    plStack_2ed0[7] = lStack_2b28;
    plStack_2ed0[6] = lStack_2b30;
    plStack_2ed0[9] = uStack_2b18;
    plStack_2ed0[8] = lStack_2b20;
    plStack_2ed0[0xb] = lStack_2b08;
    plStack_2ed0[10] = lStack_2b10;
    plStack_2ed0[1] = (long)dStack_2b58;
    *plStack_2ed0 = (long)plStack_2b60;
    plStack_2ed0[3] = (long)piStack_2b48;
    plStack_2ed0[2] = lStack_2b50;
    return;
  }
  plStack_2f40 = *(long **)(lStack_2eb0 + 0x930);
  func_0x0001000d224c(&uStack_640);
  plVar32 = uStack_640;
  uVar31 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f154150);
  plVar15 = plVar32;
  func_0x000107c3ebdc();
  func_0x000107c615e8(plVar32);
  func_0x000107c61170(uVar31);
  func_0x000107c610b4(auStack_1d88,lVar10 + 8,0x5a8);
  func_0x000107c610b4(auStack_be8,lVar10 + 8,0x5a8);
  iVar7 = (int)auStack_be8;
  func_0x00010189c838();
  piVar23 = piStack_2ea0;
  puVar24 = puStack_2ea8;
  plVar32 = plStack_2ec0;
  lVar20 = lStack_2ec8;
  lVar10 = lStack_2ee8;
  uStack_2f18 = 0;
  if (iVar7 != 1) {
    uStack_2f18 = uStack_bd8;
  }
  iStack_2f44 = (int)plVar15;
  if (iStack_2f44 == 0) {
    lVar11 = *(long *)((long)dStack_2eb8 + (long)*(int *)(pcStack_2f00 + 0x4c));
    if ((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) {
      pcVar9 = (code *)plStack_2ec0[7];
      uVar31 = 1;
    }
    else {
      func_0x000101541068(lVar11 + ((ulong)*(byte *)(plStack_2ec0 + 10) + 0x20 &
                                   ((ulong)*(byte *)(plStack_2ec0 + 10) ^ 0xffffffffffffffff)),
                          lStack_2ee8);
      pcVar9 = (code *)plVar32[7];
      uVar31 = 0;
    }
    (*pcVar9)(lVar10,uVar31,1,lVar20);
  }
  else {
    func_0x000103bfc9d0(lStack_2ee8);
    lVar20 = lStack_2ec8;
    piVar23 = piStack_2ea0;
    puVar24 = puStack_2ea8;
    plVar32 = plStack_2ec0;
  }
  uVar28 = uStack_2ed8;
  FUN_1034a67a4(lVar10,uStack_2ed8,0x112dcbcf8,&UNK_10d98e3f0);
  pcStack_2f00 = (code *)plVar32[6];
  uVar29 = uVar28;
  (*pcStack_2f00)(uVar28,1,lVar20);
  if ((int)uVar29 == 1) {
    FUN_1034a6918(uVar28,0x112dcbcf8,&UNK_10d98e3f0);
    uStack_2ed8 = 0;
  }
  else {
    FUN_1034a67a4(uVar28 + (long)*(int *)(lVar20 + 0x28),puVar24,0x112db3a00,&UNK_10d95dff0);
    func_0x0001034a67ec(uVar28,&SUB_1046d90b0);
    lVar11 = 0;
    func_0x00010477ea9c();
    puVar12 = puVar24;
    (**(code **)(*(long *)(lVar11 + -8) + 0x30))(puVar24,1,lVar11);
    puVar13 = puStack_2f10;
    if ((int)puVar12 == 1) {
      uVar31 = 0x112db3a00;
      puVar21 = &UNK_10d95dff0;
    }
    else {
      FUN_1034a67a4((long)puVar24 + (long)*(int *)(lVar11 + 0x14),puStack_2f10,0x112dcbf08,
                    &UNK_10d98e580);
      func_0x0001034a67ec(puVar24,&SUB_10477ea9c);
      lVar11 = 0;
      func_0x000104760f24();
      puVar12 = puVar13;
      (**(code **)(*(long *)(lVar11 + -8) + 0x30))(puVar13,1,lVar11);
      puVar24 = puStack_2f20;
      if ((int)puVar12 == 1) {
        uVar31 = 0x112dcbf08;
        puVar21 = &UNK_10d98e580;
        puVar24 = puVar13;
      }
      else {
        FUN_1034a67a4((long)puVar13 + (long)*(int *)(lVar11 + 0x20),puStack_2f20,0x112db3cd0,
                      &UNK_10d95e230);
        func_0x0001034a67ec(puVar13,&SUB_104760f24);
        lVar11 = 0;
        func_0x00010471853c();
        puVar13 = puVar24;
        (**(code **)(*(long *)(lVar11 + -8) + 0x30))(puVar24,1,lVar11);
        if ((int)puVar13 != 1) {
          puVar1 = (ulong *)((long)puVar24 + (long)*(int *)(lVar11 + 0x1c));
          uVar29 = *puVar1;
          uVar28 = puVar1[1];
          func_0x0001034a67ec(puVar24,&SUB_10471853c);
          lVar10 = lStack_2ee8;
          uStack_2ed8 = 0;
          if ((char)uVar28 != '\x01') {
            uStack_2ed8 = uVar29;
          }
          goto LAB_1034a4534;
        }
        uVar31 = 0x112db3cd0;
        puVar21 = &UNK_10d95e230;
      }
    }
    FUN_1034a6918(puVar24,uVar31,puVar21);
    uStack_2ed8 = 0;
  }
LAB_1034a4534:
  FUN_1034a67a4(lVar10,piVar23,0x112dcbcf8,&UNK_10d98e3f0);
  piVar14 = piVar23;
  (*pcStack_2f00)(piVar23,1,lVar20);
  piVar30 = piStack_2ef8;
  if ((int)piVar14 == 1) {
    uVar31 = 0x112dcbcf8;
    puVar21 = &UNK_10d98e3f0;
  }
  else {
    FUN_1034a67a4((long)piVar23 + (long)*(int *)(lVar20 + 0x28),piStack_2ef8,0x112db3a00,
                  &UNK_10d95dff0);
    func_0x0001034a67ec(piVar23,&SUB_1046d90b0);
    lVar10 = 0;
    func_0x00010477ea9c();
    piVar14 = piVar30;
    (**(code **)(*(long *)(lVar10 + -8) + 0x30))(piVar30,1,lVar10);
    piVar23 = piStack_2f08;
    if ((int)piVar14 == 1) {
      uVar31 = 0x112db3a00;
      puVar21 = &UNK_10d95dff0;
      piVar23 = piVar30;
    }
    else {
      FUN_1034a67a4(piVar30,piStack_2f08,0x112db3ee8,&UNK_10d95e470);
      func_0x0001034a67ec(piVar30,&SUB_10477ea9c);
      lVar10 = 0;
      func_0x00010474425c();
      piVar30 = piVar23;
      (**(code **)(*(long *)(lVar10 + -8) + 0x30))(piVar23,1,lVar10);
      if ((int)piVar30 != 1) {
        iVar7 = *piVar23;
        func_0x0001034a67ec(piVar23,&SUB_10474425c);
        puStack_2ea8 = (undefined4 *)CONCAT44(puStack_2ea8._4_4_,(uint)(iVar7 == 3));
        goto LAB_1034a466c;
      }
      uVar31 = 0x112db3ee8;
      puVar21 = &UNK_10d95e470;
    }
  }
  FUN_1034a6918(piVar23,uVar31,puVar21);
  puStack_2ea8 = (undefined4 *)((ulong)puStack_2ea8 & 0xffffffff00000000);
LAB_1034a466c:
  plStack_2318 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001034d91d8(0,lVar8,0);
  plVar32 = plStack_2318;
  FUN_1034a56a4(&plStack_23e0);
  lVar10 = uVar26 + 0x20;
  piStack_2ea0 = aiStack_2418;
  puStack_2f10 = (undefined4 *)((ulong)&bStack_1498 | 2);
  puStack_2f20 = (undefined4 *)(lStack_2eb0 + 0x622);
  puStack_2f50 = (undefined4 *)(lStack_2eb0 + 0x631);
  uVar31 = 0;
  do {
    lVar8 = lVar8 + -1;
    func_0x000107c610b4(&lStack_17e0,lVar10,0x348);
    uStack_2510 = 0;
    uStack_2508 = 1;
    uStack_2458 = uStack_2338;
    uStack_2460 = uStack_2340;
    uStack_2448 = uStack_2328;
    uStack_2450 = uStack_2330;
    uStack_2440 = uStack_2320;
    uStack_2498 = uStack_2378;
    uStack_24a0 = uStack_2380;
    uStack_2488 = uStack_2368;
    uStack_2490 = uStack_2370;
    uStack_2478 = uStack_2358;
    uStack_2480 = uStack_2360;
    uStack_2468 = uStack_2348;
    uStack_2470 = uStack_2350;
    uStack_24d8 = uStack_23b8;
    uStack_24e0 = uStack_23c0;
    uStack_24c8 = uStack_23a8;
    uStack_24d0 = uStack_23b0;
    uStack_24b8 = uStack_2398;
    uStack_24c0 = uStack_23a0;
    uStack_24a8 = uStack_2388;
    uStack_24b0 = uStack_2390;
    dStack_24f8 = dStack_23d8;
    plStack_2500 = plStack_23e0;
    piStack_24e8 = piStack_23c8;
    uStack_24f0 = uStack_23d0;
    uStack_2438 = 0;
    uStack_2430 = 1;
    uStack_2420 = 0xc000000000000000;
    piStack_2ea0[2] = 0;
    piStack_2ea0[3] = 0;
    piStack_2ea0[0] = 0;
    piStack_2ea0[1] = 0;
    piStack_2ea0[6] = 0;
    piStack_2ea0[7] = 0;
    piStack_2ea0[4] = 0;
    piStack_2ea0[5] = 0;
    piStack_2ea0[10] = 0;
    piStack_2ea0[0xb] = 0;
    piStack_2ea0[8] = 0;
    uVar26 = uStack_17d8;
    piStack_2ea0[9] = 0;
    uStack_23e8 = 0xf000000000000000;
    uStack_2428 = uVar31;
    if ((long)uStack_17d8 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1034a55e4);
      (*pcVar9)();
    }
    if (0x7fffffff < (long)uStack_17d8) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1034a55e8);
      (*pcVar9)();
    }
    uVar28 = uStack_17d8 & 0xffffffff;
    func_0x00010178e544(&lStack_17e0,&uStack_640);
    plVar15 = (long *)0x0;
    dVar17 = 0.0;
    uVar34 = 0xf000000000000000;
    func_0x000100d54858();
    uStack_23e8 = 0xc000000000000000;
    if ((int)puStack_2ea8 != 0) {
      uStack_2438 = 1;
      uStack_2430 = 1;
    }
    lStack_2e98 = lVar10;
    uStack_23f8 = uVar28;
    uStack_23f0 = uVar31;
    if (lStack_17e0 < 5) {
      if (lStack_17e0 == 3) {
        uStack_2510 = 4;
        uStack_2508 = 1;
        plVar15 = &lStack_17e0;
        dVar17 = dStack_2eb8;
        uVar34 = uStack_2f18;
        FUN_1034a56cc();
        func_0x00010178e510(&lStack_17e0);
        plStack_2850 = plVar15;
        dStack_2848 = dVar17;
        lStack_2840 = uVar34;
        func_0x0001034a6794(&plStack_2850);
LAB_1034a4dec:
        uStack_5b8 = uStack_27c8;
        uStack_5c0 = uStack_27d0;
        uStack_5a8 = uStack_27b8;
        uStack_5b0 = uStack_27c0;
        uStack_598 = uStack_27a8;
        uStack_5a0 = uStack_27b0;
        uStack_588 = uStack_2798;
        uStack_590 = uStack_27a0;
        uStack_5f8 = uStack_2808;
        uStack_600 = lStack_2810;
        uStack_5e8 = lStack_27f8;
        uStack_5f0 = lStack_2800;
        uStack_5d8 = uStack_27e8;
        uStack_5e0 = uStack_27f0;
        uStack_5c8 = uStack_27d8;
        uStack_5d0 = uStack_27e0;
        dStack_638 = dStack_2848;
        uStack_640 = plStack_2850;
        piStack_628 = piStack_2838;
        uStack_630 = lStack_2840;
        uStack_618 = dStack_2828;
        uStack_620 = lStack_2830;
        uStack_608 = lStack_2818;
        uStack_610 = lStack_2820;
        func_0x0001034a6768(&uStack_640);
        FUN_1034a6918(&plStack_2500,0x112f730d0,&UNK_10dbce2e0);
        goto LAB_1034a4e88;
      }
      if (lStack_17e0 == 4) {
        uStack_2510 = 3;
        uStack_2508 = 1;
        plStack_2ec0 = plVar32;
        FUN_1035967c0();
        plStack_2b60 = plVar15;
        dStack_2b58 = dVar17;
        lStack_2b50 = uVar34;
        FUN_103596124(bStack_14a8 & 1,0,0xc000000000000000);
        uVar22 = 0xc000000000000000;
        func_0x0001035961cc(bStack_14a7 & 1,0);
        uVar34 = 0;
        uVar18 = 0xc000000000000000;
        FUN_103596274((float)(dStack_14a0 * 1000.0));
        FUN_1035ced54();
        uStack_2e80 = uVar34;
        uStack_2e78 = uVar18;
        uStack_2e70 = uVar22;
        FUN_1035ccec0(0,0,0xc000000000000000);
        func_0x0001035cb538((float)(dStack_17d0 / 1000.0),0,0xc000000000000000);
        uVar22 = uStack_2e70;
        uVar18 = uStack_2e78;
        uVar34 = uStack_2e80;
        func_0x00010006c00c(uStack_2e80,uStack_2e78);
        func_0x000107c6157c(uVar22);
        func_0x000103595f34(uVar34,uVar18,uVar22);
        if (uVar26 == uStack_2ed8) {
          if ((long *)0x2 < plStack_2f40) {
            uStack_640 = plStack_2f40;
            pplVar19 = (long **)&uStack_640;
            goto LAB_1034a5628;
          }
          FUN_1035963c4(plStack_2f40,1);
        }
        func_0x00010178e510(&lStack_17e0);
        func_0x00010006c090(uVar34,uVar18);
        func_0x000107c61574(uVar22);
        dStack_2848 = dStack_2b58;
        plStack_2850 = plStack_2b60;
        lStack_2840 = lStack_2b50;
        func_0x0001034a6770(&plStack_2850);
        uStack_5b8 = uStack_27c8;
        uStack_5c0 = uStack_27d0;
        uStack_5a8 = uStack_27b8;
        uStack_5b0 = uStack_27c0;
        uStack_598 = uStack_27a8;
        uStack_5a0 = uStack_27b0;
        uStack_588 = uStack_2798;
        uStack_590 = uStack_27a0;
        uStack_5f8 = uStack_2808;
        uStack_600 = lStack_2810;
        uStack_5e8 = lStack_27f8;
        uStack_5f0 = lStack_2800;
        uStack_5d8 = uStack_27e8;
        uStack_5e0 = uStack_27f0;
        uStack_5c8 = uStack_27d8;
        uStack_5d0 = uStack_27e0;
        dStack_638 = dStack_2848;
        uStack_640 = plStack_2850;
        piStack_628 = piStack_2838;
        uStack_630 = lStack_2840;
        uStack_618 = dStack_2828;
        uStack_620 = lStack_2830;
        uStack_608 = lStack_2818;
        uStack_610 = lStack_2820;
        func_0x0001034a6768(&uStack_640);
        FUN_1034a6918(&plStack_2500,0x112f730d0,&UNK_10dbce2e0);
        uStack_2458 = uStack_598;
        uStack_2460 = uStack_5a0;
        uStack_2448 = uStack_588;
        uStack_2450 = uStack_590;
        uStack_2440 = uStack_580;
        uStack_2498 = uStack_5d8;
        uStack_24a0 = uStack_5e0;
        uStack_2488 = uStack_5c8;
        uStack_2490 = uStack_5d0;
        uStack_2478 = uStack_5b8;
        uStack_2480 = uStack_5c0;
        uStack_2468 = uStack_5a8;
        uStack_2470 = uStack_5b0;
        uStack_24d8 = uStack_618;
        uStack_24e0 = uStack_620;
        uStack_24c8 = uStack_608;
        uStack_24d0 = uStack_610;
        uStack_24b8 = uStack_5f8;
        uStack_24c0 = uStack_600;
        uStack_24a8 = uStack_5e8;
        uStack_24b0 = uStack_5f0;
        plVar32 = plStack_2ec0;
        plStack_2500 = uStack_640;
        dStack_24f8 = dStack_638;
        uStack_24f0 = uStack_630;
        piStack_24e8 = piStack_628;
      }
      else {
LAB_1034a4ecc:
        func_0x00010178e510(&lStack_17e0);
      }
    }
    else if (lStack_17e0 == 5) {
      uStack_2510 = 10;
      uStack_2508 = 1;
      plStack_2ec0 = plVar32;
      FUN_10357f588();
      bVar27 = bStack_14c5;
      plStack_2530 = plVar15;
      dStack_2528 = dVar17;
      uStack_2520 = uVar34;
      FUN_10357eb38(bStack_14c5 & 1,0,0xc000000000000000);
      func_0x00010357ebe0(bStack_14c6 & 1,0,0xc000000000000000);
      func_0x00010357ec88(bStack_14c7 & 1,0,0xc000000000000000);
      bVar4 = bStack_14c4;
      piVar30 = (int *)(ulong)bStack_14c4;
      lVar20 = 0;
      uVar34 = 0xc000000000000000;
      func_0x00010357ee68();
      lVar10 = lStack_14b8;
      piVar23 = piStack_14c0;
      if (lStack_14b8 != 0) {
        func_0x000107c61434(lStack_14b8);
        FUN_10357ed30();
        piVar30 = piVar23;
        lVar20 = lVar10;
      }
      FUN_1035ced54();
      piStack_2548 = piVar30;
      lStack_2540 = lVar20;
      uStack_2538 = uVar34;
      func_0x0001035cb538((float)(dStack_17d0 / 1000.0),0,0xc000000000000000);
      FUN_1035ccec0((bVar27 | bVar4) & 1,0,0xc000000000000000);
      lVar10 = lStack_2eb0;
      func_0x000107c610b4(&uStack_640,lStack_2eb0 + 0x620,0x301);
      piVar23 = piStack_628;
      dVar17 = dStack_638;
      bVar27 = (byte)uStack_640;
      bVar4 = uStack_640._1_1_;
      bVar5 = (byte)uStack_630;
      cVar6 = (char)uStack_620;
      iVar7 = (int)&uStack_640;
      func_0x00010178e1e4();
      piVar30 = piStack_2548;
      uVar34 = uStack_2538;
      lVar20 = lStack_2540;
      if (iVar7 != 1) {
        bStack_1498 = bVar27;
        bStack_1497 = bVar4;
        *puStack_2f10 = *puStack_2f20;
        *(undefined2 *)(puStack_2f10 + 1) = *(undefined2 *)(puStack_2f20 + 1);
        dStack_1490 = dVar17;
        bStack_1488 = bVar5;
        uStack_1487 = (undefined3)*puStack_2f50;
        uStack_1484 = (undefined1)*(undefined4 *)((long)puStack_2f50 + 3);
        uStack_1483 = (undefined3)((uint)*(undefined4 *)((long)puStack_2f50 + 3) >> 8);
        piStack_2f08 = piVar23;
        piStack_1480 = piVar23;
        cStack_1478 = cVar6;
        func_0x000107c610b4(auStack_1477,lVar10 + 0x641,0x2e0);
        func_0x000107c610b4(auStack_1190,auStack_1d88,0x5a8);
        iVar7 = (int)auStack_1190;
        func_0x00010189c838();
        fVar3 = 0.0;
        if (iVar7 != 1) {
          fVar3 = (float)(dStack_1130 / 1000.0);
        }
        uVar22 = 0x301;
        func_0x000107c610b4(&plStack_2850,&uStack_640);
        func_0x00010178e208(&plStack_2850,&plStack_2b60);
        uVar34 = 0;
        uVar18 = 0xc000000000000000;
        func_0x0001035cb538(fVar3);
        FUN_1035c72ac();
        uStack_2b78 = uVar34;
        uStack_2b70 = uVar18;
        uStack_2b68 = uVar22;
        FUN_1035c6ab4(bVar27 & 1,0,0xc000000000000000);
        func_0x0001035c6b5c(bVar4 & 1,0,0xc000000000000000);
        if (iStack_2f44 == 0) {
          dVar17 = dVar17 * 1000.0;
        }
        FUN_1035c6c04((float)dVar17,0,0xc000000000000000);
        uVar34 = uStack_2538;
        lVar20 = lStack_2540;
        piVar23 = piStack_2548;
        func_0x00010006c00c(piStack_2548,lStack_2540);
        func_0x000107c6157c(uVar34);
        piStack_2ef8 = piVar23;
        func_0x0001035c6970(piVar23,lVar20,uVar34);
        FUN_1035c6cac(bVar5 & 1,0,0xc000000000000000);
        if (cVar6 != '\x01') {
          if ((long)piStack_2f08 < -0x80000000) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1034a55ec);
            (*pcVar9)();
          }
          if (0x7fffffff < (long)piStack_2f08) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1034a55f0);
            (*pcVar9)();
          }
          func_0x0001035c6d54(piStack_2f08,0,0xc000000000000000);
        }
        func_0x000107c610b4(&plStack_2b60,&uStack_640,0x301);
        func_0x00010178e208(&plStack_2b60,&uStack_2e80);
        lVar11 = lStack_2ee0;
        func_0x000103bfc9d0(lStack_2ee0,uStack_2f18);
        lVar16 = lVar11;
        (*pcStack_2f00)(lVar11,1,lStack_2ec8);
        lVar10 = lStack_2ef0;
        if ((int)lVar16 == 1) {
          FUN_1034a6918(lVar11,0x112dcbcf8,&UNK_10d98e3f0);
          bVar27 = 0;
        }
        else {
          func_0x0001018a91ac(lVar11,lStack_2ef0);
          FUN_1034acaa4(auStack_2248,lVar10,uVar26);
          func_0x0001034a67ec(lVar10,&SUB_1046d90b0);
          func_0x000107c610b4(auStack_1fe8,auStack_2248,0x260);
          iVar7 = (int)auStack_1fe8;
          func_0x0001015538ec();
          bVar27 = bStack_1e08;
          if (iVar7 == 1) {
            bVar27 = 0;
          }
          else {
            FUN_1034a6918(auStack_2248,0x112db3ce8,&UNK_10d98ff60);
          }
        }
        func_0x0001034cda38(&bStack_1498,bVar27 & 1);
        func_0x0001035c6e8c();
        uVar25 = uStack_2b68;
        uVar22 = uStack_2b70;
        uVar18 = uStack_2b78;
        func_0x00010006c00c(uStack_2b78,uStack_2b70);
        func_0x000107c6157c(uVar25);
        func_0x00010357ef10(uVar18,uVar22,uVar25);
        FUN_1034a6918(&uStack_640,0x112dcbc48,&UNK_10d98e2c0);
        func_0x00010006c090(uVar18,uVar22);
        func_0x000107c61574(uVar25);
        piVar30 = piStack_2ef8;
      }
      func_0x00010006c00c(piVar30,lVar20);
      func_0x000107c6157c(uVar34);
      func_0x00010357e9d4(piVar30,lVar20,uVar34);
      if (uVar26 == uStack_2ed8) {
        if ((long *)0x2 < plStack_2f40) {
          plStack_2850 = plStack_2f40;
          pplVar19 = &plStack_2850;
LAB_1034a5628:
          func_0x000107c60614(&UNK_1107969f0,pplVar19,&UNK_1107969f0,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1034a5634);
          (*pcVar9)();
        }
        FUN_10357efb4(plStack_2f40,1);
      }
      func_0x00010178e510(&lStack_17e0);
      func_0x00010006c090(piVar30,lVar20);
      func_0x000107c61574(uVar34);
      dStack_2b58 = dStack_2528;
      plStack_2b60 = plStack_2530;
      lStack_2b50 = uStack_2520;
      func_0x0001034a6780(&plStack_2b60);
      uStack_27c8 = uStack_2ad8;
      uStack_27d0 = uStack_2ae0;
      uStack_27b8 = uStack_2ac8;
      uStack_27c0 = uStack_2ad0;
      uStack_27a8 = uStack_2ab8;
      uStack_27b0 = uStack_2ac0;
      uStack_2798 = uStack_2aa8;
      uStack_27a0 = uStack_2ab0;
      uStack_2808 = uStack_2b18;
      lStack_2810 = lStack_2b20;
      lStack_27f8 = lStack_2b08;
      lStack_2800 = lStack_2b10;
      uStack_27e8 = uStack_2af8;
      uStack_27f0 = uStack_2b00;
      uStack_27d8 = uStack_2ae8;
      uStack_27e0 = uStack_2af0;
      dStack_2848 = dStack_2b58;
      plStack_2850 = plStack_2b60;
      piStack_2838 = piStack_2b48;
      lStack_2840 = lStack_2b50;
      dStack_2828 = dStack_2b38;
      lStack_2830 = lStack_2b40;
      lStack_2818 = lStack_2b28;
      lStack_2820 = lStack_2b30;
      func_0x0001034a6768(&plStack_2850);
      FUN_1034a6918(&plStack_2500,0x112f730d0,&UNK_10dbce2e0);
      uStack_2458 = uStack_27a8;
      uStack_2460 = uStack_27b0;
      uStack_2448 = uStack_2798;
      uStack_2450 = uStack_27a0;
      uStack_2440 = uStack_2790;
      uStack_2498 = uStack_27e8;
      uStack_24a0 = uStack_27f0;
      uStack_2488 = uStack_27d8;
      uStack_2490 = uStack_27e0;
      uStack_2478 = uStack_27c8;
      uStack_2480 = uStack_27d0;
      uStack_2468 = uStack_27b8;
      uStack_2470 = uStack_27c0;
      uStack_24d8 = dStack_2828;
      uStack_24e0 = lStack_2830;
      uStack_24c8 = lStack_2818;
      uStack_24d0 = lStack_2820;
      uStack_24b8 = uStack_2808;
      uStack_24c0 = lStack_2810;
      uStack_24a8 = lStack_27f8;
      uStack_24b0 = lStack_2800;
      plVar32 = plStack_2ec0;
      plStack_2500 = plStack_2850;
      dStack_24f8 = dStack_2848;
      uStack_24f0 = lStack_2840;
      piStack_24e8 = piStack_2838;
    }
    else {
      if (lStack_17e0 == 0xc) {
        uStack_2510 = 0x16;
        uStack_2508 = 1;
        FUN_1034a6104(&plStack_2b60,&lStack_17e0);
        func_0x00010178e510(&lStack_17e0);
        uStack_27c8 = uStack_2ad8;
        uStack_27d0 = uStack_2ae0;
        uStack_27b8 = uStack_2ac8;
        uStack_27c0 = uStack_2ad0;
        uStack_27a8 = uStack_2ab8;
        uStack_27b0 = uStack_2ac0;
        uStack_2798 = uStack_2aa8;
        uStack_27a0 = uStack_2ab0;
        uStack_2808 = uStack_2b18;
        lStack_2810 = lStack_2b20;
        lStack_27f8 = lStack_2b08;
        lStack_2800 = lStack_2b10;
        uStack_27e8 = uStack_2af8;
        uStack_27f0 = uStack_2b00;
        uStack_27d8 = uStack_2ae8;
        uStack_27e0 = uStack_2af0;
        dStack_2848 = dStack_2b58;
        plStack_2850 = plStack_2b60;
        piStack_2838 = piStack_2b48;
        lStack_2840 = lStack_2b50;
        dStack_2828 = dStack_2b38;
        lStack_2830 = lStack_2b40;
        lStack_2818 = lStack_2b28;
        lStack_2820 = lStack_2b30;
        func_0x0001034a6754(&plStack_2850);
        goto LAB_1034a4dec;
      }
      if (lStack_17e0 != 0xe) goto LAB_1034a4ecc;
      uStack_2510 = 4;
      uStack_2508 = 1;
      FUN_1035c72ac();
      uStack_640 = plVar15;
      dStack_638 = dVar17;
      uStack_630 = uVar34;
      FUN_1035ced54();
      plStack_2850 = plVar15;
      dStack_2848 = dVar17;
      lStack_2840 = uVar34;
      func_0x0001035cb538((float)(dStack_17d0 / 1000.0),0,0xc000000000000000);
      lVar10 = lStack_2840;
      dVar17 = dStack_2848;
      plVar15 = plStack_2850;
      func_0x00010006c00c(plStack_2850,dStack_2848);
      func_0x000107c6157c(lVar10);
      func_0x0001035c6970(plVar15,dVar17,lVar10);
      func_0x00010178e510(&lStack_17e0);
      func_0x00010006c090(plVar15,dVar17);
      func_0x000107c61574(lVar10);
      dStack_2848 = dStack_638;
      plStack_2850 = uStack_640;
      lStack_2840 = uStack_630;
      func_0x0001034a6794(&plStack_2850);
      uStack_5b8 = uStack_27c8;
      uStack_5c0 = uStack_27d0;
      uStack_5a8 = uStack_27b8;
      uStack_5b0 = uStack_27c0;
      uStack_598 = uStack_27a8;
      uStack_5a0 = uStack_27b0;
      uStack_588 = uStack_2798;
      uStack_590 = uStack_27a0;
      uStack_5f8 = uStack_2808;
      uStack_600 = lStack_2810;
      uStack_5e8 = lStack_27f8;
      uStack_5f0 = lStack_2800;
      uStack_5d8 = uStack_27e8;
      uStack_5e0 = uStack_27f0;
      uStack_5c8 = uStack_27d8;
      uStack_5d0 = uStack_27e0;
      dStack_638 = dStack_2848;
      uStack_640 = plStack_2850;
      piStack_628 = piStack_2838;
      uStack_630 = lStack_2840;
      uStack_618 = dStack_2828;
      uStack_620 = lStack_2830;
      uStack_608 = lStack_2818;
      uStack_610 = lStack_2820;
      func_0x0001034a6768(&uStack_640);
      FUN_1034a6918(&plStack_2500,0x112f730d0,&UNK_10dbce2e0);
LAB_1034a4e88:
      uStack_2440 = uStack_580;
      uStack_2498 = uStack_5d8;
      uStack_24a0 = uStack_5e0;
      uStack_2488 = uStack_5c8;
      uStack_2490 = uStack_5d0;
      uStack_2478 = uStack_5b8;
      uStack_2480 = uStack_5c0;
      uStack_2468 = uStack_5a8;
      uStack_2470 = uStack_5b0;
      uStack_24d8 = uStack_618;
      uStack_24e0 = uStack_620;
      uStack_24c8 = uStack_608;
      uStack_24d0 = uStack_610;
      uStack_24b8 = uStack_5f8;
      uStack_24c0 = uStack_600;
      uStack_24a8 = uStack_5e8;
      uStack_24b0 = uStack_5f0;
      dStack_24f8 = dStack_638;
      plStack_2500 = uStack_640;
      piStack_24e8 = piStack_628;
      uStack_24f0 = uStack_630;
      uStack_2460 = uStack_5a0;
      uStack_2458 = uStack_598;
      uStack_2450 = uStack_590;
      uStack_2448 = uStack_588;
    }
    func_0x000107c610b4(&uStack_640,&uStack_2510,0x130);
    uVar26 = plVar32[2];
    plStack_2318 = plVar32;
    if ((ulong)plVar32[3] >> 1 <= uVar26) {
      func_0x0001034d91d8(1 < (ulong)plVar32[3],uVar26 + 1,1);
    }
    plVar32 = plStack_2318;
    plStack_2318[2] = uVar26 + 1;
    func_0x000107c610b4(plStack_2318 + uVar26 * 0x26 + 4,&uStack_640,0x130);
    if (lVar8 == 0) {
      plStack_2530 = plStack_22a8;
      FUN_1034a6918(lStack_2ee8,0x112dcbcf8,&UNK_10d98e3f0);
      FUN_1034a6918(&plStack_2530,0x112f730c8,&UNK_10dbce2d8);
      plStack_2310 = plVar32;
      goto LAB_1034a541c;
    }
    lVar10 = lStack_2e98 + 0x348;
  } while( true );
}



/* Entry: 1034a5634; end: 1034a56a3;  */

undefined8 FUN_1034a5634(undefined8 param_1)

{
  FUN_10351ffc8();
  return param_1;
}



/* Entry: 1034a56a4; end: 1034a56cb;  */

void FUN_1034a56a4(undefined8 *param_1)

{
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1034a56cc; end: 1034a6103;  */

long FUN_1034a56cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  byte bVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined1 auStack_1c80 [8];
  undefined8 uStack_1c78;
  undefined8 uStack_1c70;
  uint uStack_1c64;
  undefined8 uStack_1c60;
  undefined8 uStack_1c58;
  uint uStack_1c4c;
  code *pcStack_1c48;
  undefined1 *puStack_1c40;
  long lStack_1c38;
  long lStack_1c30;
  long lStack_1c28;
  long lStack_1c20;
  undefined8 uStack_1c18;
  long lStack_1c10;
  undefined1 auStack_1c08 [776];
  undefined1 auStack_1900 [776];
  undefined1 auStack_15f8 [776];
  byte *pbStack_12f0;
  long lStack_12e8;
  undefined *puStack_12e0;
  long lStack_12d8;
  undefined *puStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  long lStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined1 auStack_11f0 [8];
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined1 auStack_ef8 [608];
  undefined1 auStack_c98 [480];
  byte bStack_ab8;
  undefined1 auStack_a38 [776];
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long lStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  byte bStack_388;
  byte bStack_387;
  double dStack_380;
  long lStack_370;
  char cStack_368;
  int iStack_1f0;
  undefined8 uStack_d0;
  char cStack_c8;
  undefined8 uStack_c0;
  byte bStack_b8;
  undefined8 uStack_b0;
  byte bStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  char cStack_88;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = 0;
  uVar12 = param_3;
  func_0x0001046d90b0();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar5 = 0x112dcbcf8;
  puVar7 = &UNK_10d98e3f0;
  puStack_1c40 = auStack_1c80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar10 = (long)(auStack_1c80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_1c30 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar10 - extraout_x12_00;
  FUN_1035c72ac();
  lVar8 = param_1 + 0x18;
  puVar9 = (undefined *)0x301;
  lStack_12d8 = lVar5;
  puStack_12d0 = puVar7;
  uStack_12c8 = uVar12;
  func_0x000107c610b4(&bStack_388);
  uStack_1c18 = CONCAT44(uStack_1c18._4_4_,(uint)bStack_387);
  lStack_1c20 = lStack_370;
  pbVar6 = &bStack_388;
  func_0x00010178e1e4();
  if ((int)pbVar6 != 1) {
    func_0x000107c610b4(auStack_a38,&bStack_388,0x301);
    func_0x00010178e208(auStack_a38,auStack_15f8);
    func_0x00010178e208(auStack_a38,auStack_15f8);
    func_0x00010178e208(auStack_a38,auStack_15f8);
    FUN_1035c6ab4(bStack_388 & 1,0,0xc000000000000000);
    func_0x0001035c6b5c((uint)uStack_1c18 & 1,0,0xc000000000000000);
    FUN_1035c6c04((float)dStack_380,0,0xc000000000000000);
    if (cStack_368 != '\x01') {
      if (lStack_1c20 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1034a6100);
        (*pcVar15)();
      }
      if (0x7fffffff < lStack_1c20) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1034a6104);
        (*pcVar15)();
      }
      func_0x0001035c6d54(lStack_1c20,0,0xc000000000000000);
    }
    lVar8 = 0x112dcbc48;
    puVar9 = &UNK_10d98e2c0;
    pbVar6 = &bStack_388;
    FUN_1034a6918();
  }
  FUN_1035ced54();
  lStack_1c28 = param_1;
  pbStack_12f0 = pbVar6;
  lStack_12e8 = lVar8;
  puStack_12e0 = puVar9;
  func_0x0001035cb538((float)(*(double *)(param_1 + 0x10) / 1000.0),0,0xc000000000000000);
  iVar3 = (int)&bStack_388;
  func_0x00010178e1e4();
  FUN_1035ccec0(iVar3 != 1 && iStack_1f0 == 3,0,0xc000000000000000);
  lStack_1c20 = param_3;
  uStack_1c18 = param_2;
  func_0x000103bfc9d0(lVar14,param_3);
  FUN_1034a67a4(lVar14,lVar10,0x112dcbcf8,&UNK_10d98e3f0);
  pcVar15 = *(code **)(lVar13 + 0x30);
  lVar5 = lVar10;
  (*pcVar15)(lVar10,1,lVar4);
  lStack_1c38 = lVar4;
  lStack_1c10 = lVar14;
  if ((int)lVar5 == 1) {
    FUN_1034a6918(lVar10,0x112dcbcf8,&UNK_10d98e3f0);
    uStack_1290 = 0;
    uStack_12a8 = 0;
    uStack_1298 = 0;
    uStack_12a0 = 0;
    uStack_12b0 = 0;
    uStack_12c0 = 0;
  }
  else {
    pcStack_1c48 = pcVar15;
    func_0x000103bfccb4(&uStack_12c0);
    func_0x0001034a67ec(lVar10,&SUB_1046d90b0);
    pcVar15 = pcStack_1c48;
    if (lStack_12b8 != 0) {
      func_0x0001034a6828(uStack_12c0,lStack_12b8,uStack_12b0,uStack_12a8,uStack_12a0,uStack_1298,
                          uStack_1290);
      func_0x0001034a6828(0,0,0,0,0,0,0);
      uStack_1c4c = (uint)bStack_a8;
      uStack_1c60 = uStack_90;
      uStack_1c58 = uStack_b0;
      iVar3 = (int)&bStack_388;
      func_0x00010178e1e4();
      pcVar15 = pcStack_1c48;
      if (iVar3 != 1) {
        uStack_1c78 = uStack_c0;
        uStack_1c70 = uStack_a0;
        uStack_1c64 = (uint)bStack_b8;
        FUN_1035cea48(&uStack_1288,pbStack_12f0,lStack_12e8,puStack_12e0);
        uStack_3d8 = uStack_1240;
        uStack_3e0 = uStack_1248;
        uStack_3c8 = uStack_1230;
        uStack_3d0 = uStack_1238;
        uStack_3b8 = uStack_1220;
        uStack_3c0 = uStack_1228;
        uStack_3a8 = uStack_1210;
        uStack_3b0 = uStack_1218;
        uStack_418 = uStack_1280;
        uStack_420 = uStack_1288;
        uStack_408 = uStack_1270;
        uStack_410 = uStack_1278;
        uStack_3f8 = uStack_1260;
        uStack_400 = uStack_1268;
        uStack_3e8 = uStack_1250;
        uStack_3f0 = uStack_1258;
        func_0x000101556278(uStack_1208,uStack_1200,uStack_11f8);
        uStack_398 = 0;
        uStack_3a0 = 1;
        uStack_390 = 0xc000000000000000;
        FUN_1035ceb8c(&uStack_420);
        uStack_4b8 = 0;
        if (cStack_c8 != '\x01') {
          uStack_4b8 = uStack_d0;
        }
        FUN_1035cea48(auStack_11f0,pbStack_12f0,lStack_12e8,puStack_12e0);
        uStack_458 = uStack_1190;
        uStack_460 = uStack_1198;
        uStack_448 = uStack_1180;
        uStack_450 = uStack_1188;
        uStack_438 = uStack_1170;
        uStack_440 = uStack_1178;
        uStack_428 = uStack_1160;
        uStack_430 = uStack_1168;
        uStack_498 = uStack_11d0;
        uStack_4a0 = uStack_11d8;
        uStack_488 = uStack_11c0;
        uStack_490 = uStack_11c8;
        uStack_478 = uStack_11b0;
        uStack_480 = uStack_11b8;
        uStack_468 = uStack_11a0;
        uStack_470 = uStack_11a8;
        uStack_4a8 = uStack_11e0;
        uStack_4b0 = uStack_11e8;
        FUN_1035ceb8c(&uStack_4b8);
        if (cStack_88 != '\x01') {
          FUN_1035cea48(&uStack_1158,pbStack_12f0,lStack_12e8,puStack_12e0);
          uStack_548 = uStack_1150;
          uStack_550 = uStack_1158;
          uStack_4d8 = uStack_10e0;
          uStack_4e0 = uStack_10e8;
          uStack_4c8 = uStack_10d0;
          uStack_4d0 = uStack_10d8;
          uStack_540 = uStack_1148;
          uStack_4c0 = uStack_10c8;
          uStack_518 = uStack_1120;
          uStack_520 = uStack_1128;
          uStack_508 = uStack_1110;
          uStack_510 = uStack_1118;
          uStack_4f8 = uStack_1100;
          uStack_500 = uStack_1108;
          uStack_4e8 = uStack_10f0;
          uStack_4f0 = uStack_10f8;
          func_0x000100d54858(uStack_1140,uStack_1138,uStack_1130);
          uStack_538 = uStack_1c60;
          uStack_528 = 0xc000000000000000;
          uStack_530 = 0;
          FUN_1035ceb8c(&uStack_550);
        }
        if (uStack_1c4c != 1) {
          FUN_1035cea48(&uStack_10c0,pbStack_12f0,lStack_12e8,puStack_12e0);
          uStack_5e8 = uStack_10b8;
          uStack_5f0 = uStack_10c0;
          uStack_5d8 = uStack_10a8;
          uStack_5e0 = uStack_10b0;
          uStack_5c8 = uStack_1098;
          uStack_5d0 = uStack_10a0;
          uStack_590 = uStack_1060;
          uStack_598 = uStack_1068;
          uStack_580 = uStack_1050;
          uStack_588 = uStack_1058;
          uStack_570 = uStack_1040;
          uStack_578 = uStack_1048;
          uStack_560 = uStack_1030;
          uStack_568 = uStack_1038;
          uStack_5a0 = uStack_1070;
          uStack_5a8 = uStack_1078;
          func_0x000100d54858(uStack_1090,uStack_1088,uStack_1080);
          uStack_5c0 = uStack_1c58;
          uStack_5b0 = 0xc000000000000000;
          uStack_5b8 = 0;
          FUN_1035ceb8c(&uStack_5f0);
        }
        uVar1 = uStack_1c64;
        if (lStack_98 != 0) {
          func_0x000107c61438(lStack_98,2);
          func_0x00010006c00c(0,0xc000000000000000);
          func_0x000107c6142c(lStack_98);
          func_0x00010006c090(0,0xc000000000000000);
          FUN_1035cea48(&uStack_1028,pbStack_12f0,lStack_12e8,puStack_12e0);
          uStack_678 = uStack_1010;
          uStack_680 = uStack_1018;
          uStack_668 = uStack_1000;
          uStack_670 = uStack_1008;
          uStack_658 = uStack_ff0;
          uStack_660 = uStack_ff8;
          uStack_650 = uStack_fe8;
          uStack_688 = uStack_1020;
          uStack_690 = uStack_1028;
          uStack_620 = uStack_fb8;
          uStack_628 = uStack_fc0;
          uStack_610 = uStack_fa8;
          uStack_618 = uStack_fb0;
          uStack_600 = uStack_f98;
          uStack_608 = uStack_fa0;
          func_0x000101597ae4(uStack_fe0,uStack_fd8,uStack_fd0,uStack_fc8);
          uStack_648 = uStack_1c70;
          lStack_640 = lStack_98;
          uStack_630 = 0xc000000000000000;
          uStack_638 = 0;
          FUN_1035ceb8c(&uStack_690);
        }
        pcVar15 = pcStack_1c48;
        if (uVar1 != 1) {
          FUN_1035cea48(&uStack_f90,pbStack_12f0,lStack_12e8,puStack_12e0);
          uStack_6f8 = uStack_f58;
          uStack_700 = uStack_f60;
          uStack_6e8 = uStack_f48;
          uStack_6f0 = uStack_f50;
          uStack_6d8 = uStack_f38;
          uStack_6e0 = uStack_f40;
          uStack_728 = uStack_f88;
          uStack_730 = uStack_f90;
          uStack_718 = uStack_f78;
          uStack_720 = uStack_f80;
          uStack_708 = uStack_f68;
          uStack_710 = uStack_f70;
          uStack_6d0 = uStack_f30;
          uStack_6a0 = uStack_f00;
          uStack_6a8 = uStack_f08;
          uStack_6b0 = uStack_f10;
          func_0x000100d54858(uStack_f28,uStack_f20,uStack_f18);
          uStack_6c8 = uStack_1c78;
          uStack_6b8 = 0xc000000000000000;
          uStack_6c0 = 0;
          FUN_1035ceb8c(&uStack_730);
        }
        FUN_1034a6918(&bStack_388,0x112dcbc48,&UNK_10d98e2c0);
      }
      goto LAB_1034a5f04;
    }
  }
  FUN_1034a6918(&bStack_388,0x112dcbc48,&UNK_10d98e2c0);
  func_0x0001034a6828(uStack_12c0,0,uStack_12b0,uStack_12a8,uStack_12a0,uStack_1298,uStack_1290);
LAB_1034a5f04:
  puVar7 = puStack_12e0;
  lVar4 = lStack_12e8;
  pbVar6 = pbStack_12f0;
  func_0x00010006c00c(pbStack_12f0,lStack_12e8);
  func_0x000107c6157c(puVar7);
  func_0x0001035c6970(pbVar6,lVar4,puVar7);
  func_0x000107c610b4(auStack_15f8,&bStack_388,0x301);
  iVar3 = (int)&bStack_388;
  func_0x00010178e1e4();
  lVar8 = lStack_1c20;
  lVar5 = lStack_1c28;
  if (iVar3 != 1) {
    func_0x000107c610b4(auStack_a38,auStack_15f8,0x301);
    lVar10 = lStack_1c30;
    uVar12 = *(undefined8 *)(lVar5 + 8);
    func_0x000103bfc9d0(lStack_1c30,lVar8);
    lVar5 = lVar10;
    (*pcVar15)(lVar10,1,lStack_1c38);
    puVar2 = puStack_1c40;
    if ((int)lVar5 == 1) {
      FUN_1034a6918(lVar10,0x112dcbcf8,&UNK_10d98e3f0);
      bVar11 = 0;
    }
    else {
      func_0x0001018a91ac(lVar10,puStack_1c40);
      FUN_1034acaa4(auStack_ef8,puVar2,uVar12);
      func_0x0001034a67ec(puVar2,&SUB_1046d90b0);
      func_0x000107c610b4(auStack_c98,auStack_ef8,0x260);
      iVar3 = (int)auStack_c98;
      func_0x0001015538ec();
      if (iVar3 == 1) {
        bVar11 = 0;
      }
      else {
        FUN_1034a6918(auStack_ef8,0x112db3ce8,&UNK_10d98ff60);
        bVar11 = bStack_ab8;
      }
    }
    func_0x000107c610b4(auStack_1900,&bStack_388,0x301);
    func_0x00010178e208(auStack_1900,auStack_1c08);
    func_0x0001034cda38(auStack_a38,bVar11 & 1);
    func_0x0001035c6e8c();
    FUN_1034a6918(&bStack_388,0x112dcbc48,&UNK_10d98e2c0);
  }
  FUN_1034a6918(lStack_1c10,0x112dcbcf8,&UNK_10d98e3f0);
  lVar5 = lStack_12d8;
  func_0x00010006c090(pbVar6,lVar4);
  func_0x000107c61574(puVar7);
  return lVar5;
}



/* Entry: 1034a6104; end: 1034a6753;  */

void FUN_1034a6104(undefined8 *param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  bool bVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined ****ppppuVar6;
  undefined8 uVar7;
  undefined ****ppppuVar8;
  undefined ****ppppuVar9;
  undefined ****ppppuVar10;
  undefined ****ppppuVar11;
  undefined8 **ppuVar12;
  undefined *puVar13;
  undefined ****ppppuVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  ulong uVar17;
  undefined ****ppppuVar18;
  undefined8 uVar19;
  undefined ****ppppuVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  undefined ***pppuStack_408;
  undefined8 uStack_400;
  ulong uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3d8;
  undefined1 auStack_3d0 [192];
  undefined ***pppuStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 ***pppuStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  double dStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 ***pppuStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 ***pppuStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  double dStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined ***pppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined ***apppuStack_98 [3];
  
  FUN_1035a41d0(&pppuStack_158);
  uStack_168 = uStack_148;
  uStack_170 = uStack_150;
  pppuStack_408 = pppuStack_158;
  uStack_188 = uStack_a8;
  dStack_190 = dStack_b0;
  uStack_180 = uStack_a0;
  ppppuVar6 = *(undefined *****)(param_2 + 0x330);
  uStack_400 = uStack_f0;
  uStack_3f8 = uStack_128;
  uStack_3d8 = uStack_120;
  uStack_3f0 = uStack_118;
  if (ppppuVar6 == (undefined ****)0x0) {
    uStack_440 = uStack_c8;
    uStack_438 = uStack_110;
    uStack_450 = uStack_108;
    uStack_448 = uStack_f8;
    uStack_460 = uStack_c0;
    uStack_458 = uStack_d8;
    uVar17 = uStack_e0;
    uVar7 = uStack_100;
    puVar13 = puStack_e8;
    uVar19 = uStack_d0;
    uVar21 = uStack_b8;
  }
  else {
    func_0x000107c61174();
    func_0x000107c5cd18();
    bVar1 = 0.0 < dStack_b0;
    func_0x000101556278(uStack_e0,uStack_d8,uStack_d0);
    dVar22 = dStack_b0;
    func_0x000107c5cd18(ppppuVar6);
    dVar23 = dVar22;
    func_0x000100d54858(uStack_c8,uStack_c0,uStack_b8);
    func_0x000107c5cd10(ppppuVar6);
    dVar24 = dVar23;
    func_0x000100d54858(uStack_110,uStack_108,uStack_100);
    func_0x000107c5ccac(ppppuVar6);
    func_0x000100d54858(uStack_128,uStack_120,uStack_118);
    ppppuVar14 = ppppuVar6;
    func_0x000107c4f344();
    if ((long)ppppuVar14 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034a6734);
      (*pcVar5)();
    }
    if (0x7fffffff < (long)ppppuVar14) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034a6738);
      (*pcVar5)();
    }
    uStack_440 = (ulong)(uint)(float)(dVar22 * 1000.0);
    uStack_438 = (ulong)(uint)(float)(dVar23 * 1000.0);
    uStack_3f8 = (ulong)(uint)(float)(dVar24 * 1000.0);
    uStack_448 = (ulong)ppppuVar14 & 0xffffffff;
    func_0x000100d54858(uStack_f8);
    ppppuVar14 = ppppuVar6;
    func_0x000107c4f324();
    func_0x000107c61180();
    if (ppppuVar14 == (undefined ****)0x0) {
      func_0x000107c61170();
    }
    else {
      uVar7 = 0;
      FUN_1034a68d4(0);
      ppppuVar8 = ppppuVar14;
      func_0x000107c5fc54(ppppuVar14,uVar7);
      func_0x000107c61170(ppppuVar14);
      if ((ulong)ppppuVar8 >> 0x3e == 0) {
        ppppuVar14 = *(undefined *****)(((ulong)ppppuVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        ppppuVar14 = (undefined ****)((ulong)ppppuVar8 & 0xffffffffffffff8);
        if ((undefined ****)0x7fffffffffffffff < ppppuVar8) {
          ppppuVar14 = ppppuVar8;
        }
        func_0x000107c60480();
      }
      apppuStack_98[0] = pppuStack_158;
      if (ppppuVar14 == (undefined ****)0x0) {
        func_0x000107c6142c(ppppuVar8);
        func_0x000107c61170(ppppuVar6);
        uVar7 = 0x112f730e0;
        puVar13 = &UNK_10dbce2e8;
        ppppuVar6 = apppuStack_98;
        FUN_1034a6918();
        pppuStack_408 = (undefined ***)PTR___swiftEmptyArrayStorage_11034f1c8;
        uStack_f0 = uVar7;
        puStack_e8 = puVar13;
      }
      else {
        pppuStack_250 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001034d9210(0,(ulong)ppppuVar14 & ((long)ppppuVar14 >> 0x3f ^ 0xffffffffffffffffU),0
                           );
        if ((long)ppppuVar14 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1034a6754);
          (*pcVar5)();
        }
        ppppuVar18 = (undefined ****)0x0;
        do {
          pppuVar2 = pppuStack_250;
          if (((ulong)ppppuVar8 & 0xc000000000000001) == 0) {
            ppppuVar9 = (undefined ****)ppppuVar8[(long)ppppuVar18 + 4];
            func_0x000107c61174();
          }
          else {
            ppppuVar9 = ppppuVar18;
            FUN_1034d66a4(ppppuVar18,ppppuVar8);
          }
          ppppuVar10 = ppppuVar9;
          func_0x000107c45330();
          if ((long)ppppuVar10 < -0x80000000) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1034a672c);
            (*pcVar5)();
          }
          if (0x7fffffff < (long)ppppuVar10) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1034a6730);
            (*pcVar5)();
          }
          ppuVar12 = (undefined8 **)0x0;
          func_0x000100d54858(0,0,0xf000000000000000);
          ppppuVar11 = ppppuVar9;
          func_0x000107c4f31c();
          func_0x000107c61180();
          if (ppppuVar11 == (undefined ****)0x0) {
            func_0x000107c61170(ppppuVar9);
LAB_1034a644c:
            ppuVar15 = (undefined8 **)0x0;
            ppuVar12 = (undefined8 **)0x0;
            ppppuVar20 = (undefined ****)0x0;
          }
          else {
            ppppuVar20 = ppppuVar11;
            func_0x000107c5faec();
            func_0x000107c61170(ppppuVar11);
            func_0x000107c61170(ppppuVar9);
            uVar17 = (ulong)ppppuVar20 & 0xffffffffffff;
            if (((ulong)ppuVar12 & 0x2000000000000000) != 0) {
              uVar17 = (ulong)ppuVar12 >> 0x38 & 0xf;
            }
            if (uVar17 == 0) {
              func_0x000107c6142c(ppuVar12);
              goto LAB_1034a644c;
            }
            func_0x000107c61434(ppuVar12);
            ppuVar15 = (undefined8 **)0xc000000000000000;
            func_0x00010006c00c(0,0xc000000000000000);
            func_0x000107c6142c(ppuVar12);
            func_0x00010006c090(0,0xc000000000000000);
            func_0x000101597ae4(0,0,0,0);
          }
          ppuVar16 = pppuVar2[2];
          pppuStack_250 = pppuVar2;
          if ((undefined8 **)((ulong)pppuVar2[3] >> 1) <= ppuVar16) {
            func_0x0001034d9210((undefined8 **)0x1 < pppuVar2[3],
                                (undefined8 **)((long)ppuVar16 + 1U),1);
          }
          pppuStack_408 = (undefined ***)pppuStack_250;
          pppuStack_250[2] = (undefined8 **)((long)ppuVar16 + 1U);
          pppuStack_250[(long)ppuVar16 * 9 + 5] = (undefined8 **)0xc000000000000000;
          pppuStack_250[(long)ppuVar16 * 9 + 4] = (undefined8 **)0x0;
          ppppuVar18 = (undefined ****)((long)ppppuVar18 + 1);
          pppuStack_250[(long)ppuVar16 * 9 + 6] = (undefined8 **)((ulong)ppppuVar10 & 0xffffffff);
          pppuStack_250[(long)ppuVar16 * 9 + 8] = (undefined8 **)0xc000000000000000;
          pppuStack_250[(long)ppuVar16 * 9 + 7] = (undefined8 **)0x0;
          pppuStack_250[(long)ppuVar16 * 9 + 9] = ppppuVar20;
          pppuStack_250[(long)ppuVar16 * 9 + 10] = ppuVar12;
          pppuStack_250[(long)ppuVar16 * 9 + 0xb] = (undefined8 **)0x0;
          pppuStack_250[(long)ppuVar16 * 9 + 0xc] = ppuVar15;
        } while (ppppuVar14 != ppppuVar18);
        func_0x000107c6142c(ppppuVar8);
        func_0x000107c61170(ppppuVar6);
        uVar7 = 0x112f730e0;
        puVar13 = &UNK_10dbce2e8;
        ppppuVar6 = apppuStack_98;
        FUN_1034a6918();
        uStack_f0 = uVar7;
        puStack_e8 = puVar13;
      }
    }
    uStack_3d8 = 0;
    uStack_3f0 = 0xc000000000000000;
    uStack_400 = 0;
    uStack_450 = 0;
    uStack_458 = 0;
    uStack_460 = 0;
    param_3 = uStack_f0;
    param_4 = puStack_e8;
    uVar17 = (ulong)bVar1;
    uVar7 = 0xc000000000000000;
    puVar13 = (undefined *)0xc000000000000000;
    uVar19 = 0xc000000000000000;
    uVar21 = 0xc000000000000000;
  }
  FUN_1035ced54();
  pppuStack_250 = ppppuVar6;
  uStack_248 = param_3;
  puStack_240 = param_4;
  func_0x0001035cb538((float)(*(double *)(param_2 + 0x10) / 1000.0),0,0xc000000000000000);
  puVar4 = puStack_240;
  uVar3 = uStack_248;
  pppuVar2 = pppuStack_250;
  func_0x00010349f458(uStack_140,uStack_138,uStack_130);
  uStack_300 = uStack_168;
  uStack_308 = uStack_170;
  uStack_260 = uStack_188;
  dStack_268 = dStack_190;
  puStack_240 = (undefined *)uStack_168;
  uStack_248 = uStack_170;
  pppuStack_310 = pppuStack_408;
  pppuStack_2f8 = pppuVar2;
  uStack_2f0 = uVar3;
  puStack_2e8 = puVar4;
  uStack_2e0 = uStack_3f8;
  uStack_2d8 = uStack_3d8;
  uStack_2d0 = uStack_3f0;
  uStack_2c8 = uStack_438;
  uStack_2c0 = uStack_450;
  uStack_2b0 = uStack_448;
  uStack_2a8 = uStack_400;
  uStack_290 = uStack_458;
  uStack_280 = uStack_440;
  uStack_278 = uStack_460;
  uStack_258 = uStack_180;
  pppuStack_250 = (undefined8 ***)pppuStack_408;
  pppuStack_238 = pppuVar2;
  uStack_230 = uVar3;
  puStack_228 = puVar4;
  uStack_220 = uStack_3f8;
  uStack_218 = uStack_3d8;
  uStack_210 = uStack_3f0;
  uStack_208 = uStack_438;
  uStack_200 = uStack_450;
  uStack_1f0 = uStack_448;
  uStack_1e8 = uStack_400;
  uStack_1d0 = uStack_458;
  uStack_1c0 = uStack_440;
  uStack_1b8 = uStack_460;
  uStack_198 = uStack_180;
  uStack_1a0 = uStack_188;
  dStack_1a8 = dStack_190;
  uStack_2b8 = uVar7;
  puStack_2a0 = puVar13;
  uStack_298 = uVar17;
  uStack_288 = uVar19;
  uStack_270 = uVar21;
  uStack_1f8 = uVar7;
  puStack_1e0 = puVar13;
  uStack_1d8 = uVar17;
  uStack_1c8 = uVar19;
  uStack_1b0 = uVar21;
  func_0x0001034a6864(&pppuStack_310,auStack_3d0);
  func_0x0001034a68a0(&pppuStack_250);
  param_1[0x11] = uStack_288;
  param_1[0x10] = uStack_290;
  param_1[0x13] = uStack_278;
  param_1[0x12] = uStack_280;
  param_1[0x15] = dStack_268;
  param_1[0x14] = uStack_270;
  param_1[0x17] = uStack_258;
  param_1[0x16] = uStack_260;
  param_1[9] = uStack_2c8;
  param_1[8] = uStack_2d0;
  param_1[0xb] = uStack_2b8;
  param_1[10] = uStack_2c0;
  param_1[0xd] = uStack_2a8;
  param_1[0xc] = uStack_2b0;
  param_1[0xf] = uStack_298;
  param_1[0xe] = puStack_2a0;
  param_1[1] = uStack_308;
  *param_1 = pppuStack_310;
  param_1[3] = pppuStack_2f8;
  param_1[2] = uStack_300;
  param_1[5] = puStack_2e8;
  param_1[4] = uStack_2f0;
  param_1[7] = uStack_2d8;
  param_1[6] = uStack_2e0;
  return;
}



/* Entry: 1034a6754; end: 1034a67a3;  */

void FUN_1034a6754(long param_1)

{
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) & 0xcfffffffffffffff | 0x2000000000000000;
  return;
}



/* Entry: 1034a67a4; end: 1034a68d3;  */

undefined8 FUN_1034a67a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1034a68d4; end: 1034a6917;  */

void FUN_1034a68d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f730d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d2620;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f730d8 = puVar1;
  return;
}



/* Entry: 1034a6918; end: 1034a6957;  */

undefined8 FUN_1034a6918(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1034a6958; end: 1034a8027;  */

void FUN_1034a6958(undefined8 param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  double dVar3;
  undefined8 uStack_2008;
  byte bStack_1ffc;
  undefined8 uStack_1ff8;
  undefined8 uStack_1ff0;
  undefined1 uStack_1fd8;
  undefined7 uStack_1fd7;
  undefined8 uStack_1fd0;
  undefined8 uStack_1fc8;
  undefined8 uStack_1fc0;
  undefined8 uStack_1fb8;
  undefined8 uStack_1fb0;
  undefined8 uStack_1fa8;
  undefined8 uStack_1fa0;
  undefined8 uStack_1f98;
  undefined8 uStack_1f90;
  undefined8 uStack_1f88;
  undefined8 uStack_1f80;
  undefined8 uStack_1f78;
  undefined8 uStack_1f70;
  undefined8 uStack_1f68;
  undefined8 uStack_1f60;
  undefined1 uStack_1f58;
  undefined8 uStack_1a30;
  undefined8 uStack_1a28;
  undefined8 uStack_1a20;
  undefined8 uStack_1a18;
  undefined8 uStack_1a10;
  undefined8 uStack_1a08;
  undefined8 uStack_1a00;
  undefined8 uStack_19f8;
  undefined8 uStack_19f0;
  undefined8 uStack_19e8;
  undefined8 uStack_19e0;
  undefined8 uStack_19d8;
  undefined8 uStack_19d0;
  undefined8 uStack_19c8;
  undefined8 uStack_19c0;
  undefined8 uStack_19b0;
  undefined8 uStack_19a8;
  undefined8 uStack_19a0;
  undefined8 uStack_1998;
  undefined8 uStack_1990;
  undefined8 uStack_1988;
  undefined8 uStack_1980;
  undefined8 uStack_1978;
  undefined8 uStack_1970;
  undefined8 uStack_1968;
  undefined8 uStack_1960;
  undefined8 uStack_1958;
  undefined8 uStack_1950;
  undefined8 uStack_1948;
  undefined8 uStack_1940;
  undefined8 uStack_1938;
  undefined8 uStack_1930;
  undefined8 uStack_18f8;
  undefined8 uStack_18f0;
  undefined8 uStack_18e8;
  undefined8 uStack_18e0;
  undefined8 uStack_18d8;
  undefined8 uStack_18d0;
  undefined8 uStack_18c8;
  undefined8 uStack_18c0;
  undefined8 uStack_18b8;
  undefined8 uStack_18b0;
  undefined8 uStack_18a8;
  undefined8 uStack_18a0;
  undefined8 uStack_1898;
  undefined8 uStack_1890;
  undefined8 uStack_1888;
  undefined8 uStack_1880;
  undefined1 uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined8 uStack_1838;
  undefined8 uStack_1830;
  undefined8 uStack_1828;
  undefined8 uStack_1820;
  undefined8 uStack_1818;
  undefined8 uStack_1810;
  undefined8 uStack_17ff;
  undefined8 uStack_17f0;
  undefined8 uStack_17e8;
  undefined8 uStack_17e0;
  undefined8 uStack_17d8;
  undefined8 uStack_17d0;
  undefined8 uStack_17c8;
  undefined8 uStack_17c0;
  undefined8 uStack_17b8;
  undefined8 uStack_17b0;
  undefined8 uStack_17a8;
  undefined8 uStack_17a0;
  undefined8 uStack_1798;
  undefined8 uStack_1790;
  undefined8 uStack_177e;
  byte bStack_1738;
  byte bStack_1737;
  byte bStack_1700;
  undefined8 uStack_1690;
  undefined8 uStack_1688;
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  undefined8 uStack_1670;
  undefined8 uStack_1668;
  undefined8 uStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined8 uStack_1610;
  undefined8 uStack_1608;
  undefined8 uStack_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  undefined8 uStack_15e8;
  undefined8 uStack_15e0;
  undefined8 uStack_15d8;
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined2 uStack_1570;
  byte bStack_156e;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  undefined2 uStack_1520;
  undefined8 uStack_1518;
  undefined8 uStack_1490;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_140f;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_138e;
  undefined1 auStack_1380 [88];
  long lStack_1328;
  double dStack_1320;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined1 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_114f;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10ce;
  byte bStack_1088;
  byte bStack_1087;
  byte bStack_1050;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined2 uStack_ec0;
  byte bStack_ebe;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined2 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_de0;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d50;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined1 uStack_cc0;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c3f;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bbe;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined2 uStack_a60;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined2 uStack_a10;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined1 uStack_8c0;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_83f;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7be;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined2 uStack_690;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined2 uStack_640;
  undefined1 auStack_630 [88];
  long lStack_5d8;
  double dStack_5d0;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 uStack_528;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_3ff;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_37e;
  undefined1 uStack_360;
  undefined1 uStack_35f;
  undefined1 uStack_348;
  byte bStack_338;
  byte bStack_337;
  byte bStack_300;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
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
  undefined2 uStack_170;
  byte bStack_16e;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_90;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c610b4(auStack_630,param_2 + 8,0x5a8);
  iVar2 = (int)auStack_630;
  func_0x00010189c838();
  if (iVar2 == 1) {
    func_0x000101895cec(&uStack_1a30);
    uStack_d78 = uStack_19d8;
    uStack_d80 = uStack_19e0;
    uStack_d68 = uStack_19c8;
    uStack_d70 = uStack_19d0;
    uStack_d60 = uStack_19c0;
    uStack_db8 = uStack_1a18;
    uStack_dc0 = uStack_1a20;
    uStack_da8 = uStack_1a08;
    uStack_db0 = uStack_1a10;
    uStack_d98 = uStack_19f8;
    uStack_da0 = uStack_1a00;
    uStack_d88 = uStack_19e8;
    uStack_d90 = uStack_19f0;
    uStack_d50 = uStack_19b0;
    uStack_dc8 = uStack_1a28;
    uStack_dd0 = uStack_1a30;
    func_0x000101895d08(&uStack_1fd8);
    uStack_ce8 = uStack_1f80;
    uStack_cf0 = uStack_1f88;
    uStack_cd8 = uStack_1f70;
    uStack_ce0 = uStack_1f78;
    uStack_cc8 = uStack_1f60;
    uStack_cd0 = uStack_1f68;
    uStack_d40 = CONCAT71(uStack_1fd7,uStack_1fd8);
    uStack_d28 = uStack_1fc0;
    uStack_d30 = uStack_1fc8;
    uStack_d18 = uStack_1fb0;
    uStack_d20 = uStack_1fb8;
    uStack_d08 = uStack_1fa0;
    uStack_d10 = uStack_1fa8;
    uStack_cf8 = uStack_1f90;
    uStack_d00 = uStack_1f98;
    uStack_cc0 = uStack_1f58;
    uStack_d38 = uStack_1fd0;
    func_0x0001018797b4(&uStack_1480);
    uStack_c68 = uStack_1438;
    uStack_c70 = uStack_1440;
    uStack_c58 = uStack_1428;
    uStack_c60 = uStack_1430;
    uStack_c50 = uStack_1420;
    uStack_c3f = uStack_140f;
    uStack_ca8 = uStack_1478;
    uStack_cb0 = uStack_1480;
    uStack_c98 = uStack_1468;
    uStack_ca0 = uStack_1470;
    uStack_c88 = uStack_1458;
    uStack_c90 = uStack_1460;
    uStack_c78 = uStack_1448;
    uStack_c80 = uStack_1450;
    func_0x000101895d28(&uStack_1400);
    uStack_be8 = uStack_13b8;
    uStack_bf0 = uStack_13c0;
    uStack_bd8 = uStack_13a8;
    uStack_be0 = uStack_13b0;
    uStack_bd0 = uStack_13a0;
    uStack_bbe = uStack_138e;
    uStack_c28 = uStack_13f8;
    uStack_c30 = uStack_1400;
    uStack_c18 = uStack_13e8;
    uStack_c20 = uStack_13f0;
    uStack_c08 = uStack_13d8;
    uStack_c10 = uStack_13e0;
    uStack_bf8 = uStack_13c8;
    uStack_c00 = uStack_13d0;
    uStack_ba0 = 0;
    uStack_ba8 = 0;
    uStack_bb0 = 0;
    uStack_b98 = 1;
    uStack_b88 = 0;
    uStack_b90 = 0;
    uStack_b78 = 0;
    uStack_b80 = 0;
    uStack_b70 = 0;
    uStack_b68 = 2;
    uStack_b58 = 0;
    uStack_b60 = 0;
    uStack_b48 = 0;
    uStack_b50 = 0;
    uStack_b38 = 0;
    uStack_b40 = 0;
    uStack_b28 = 0;
    uStack_b30 = 0;
    uStack_b18 = 0;
    uStack_b20 = 0;
    uStack_b08 = 0;
    uStack_b10 = 0;
    uStack_af8 = 0;
    uStack_b00 = 0;
    uStack_ae8 = 0;
    uStack_af0 = 0;
    uStack_ad8 = 0;
    uStack_ae0 = 0;
    uStack_ac8 = 0;
    uStack_ad0 = 0;
    uStack_ab8 = 0;
    uStack_ac0 = 0;
    uStack_aa8 = 0;
    uStack_ab0 = 0;
    uStack_a98 = 0;
    uStack_aa0 = 0;
    uStack_a88 = 0;
    uStack_a90 = 0;
    uStack_a78 = 0;
    uStack_a80 = 0;
    uStack_a68 = 0;
    uStack_a70 = 1;
    uStack_a60 = 0;
    uStack_a48 = 0;
    uStack_a50 = 0;
    uStack_a38 = 0;
    uStack_a40 = 0;
    uStack_a28 = 0;
    uStack_a30 = 0;
    uStack_a18 = 0;
    uStack_a20 = 0;
    uStack_a10 = 0x100;
    uStack_9f8 = 0;
    uStack_a00 = 0;
    uStack_9e8 = 0;
    uStack_9f0 = 0;
    uStack_9e0 = 0;
    func_0x000104218d60(auStack_1380,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    uStack_2008 = uStack_de0;
    uStack_658 = uStack_e88;
    uStack_660 = uStack_e90;
    uStack_648 = uStack_e78;
    uStack_650 = uStack_e80;
    uStack_640 = uStack_e70;
    uStack_678 = uStack_ea8;
    uStack_680 = uStack_eb0;
    uStack_668 = uStack_e98;
    uStack_670 = uStack_ea0;
    uStack_1ff8 = uStack_eb8;
    uStack_1ff0 = uStack_e68;
    bStack_1ffc = bStack_ebe;
    uStack_6a8 = uStack_ed8;
    uStack_6b0 = uStack_ee0;
    uStack_698 = uStack_ec8;
    uStack_6a0 = uStack_ed0;
    uStack_690 = uStack_ec0;
    uStack_6e8 = uStack_f18;
    uStack_6f0 = uStack_f20;
    uStack_6d8 = uStack_f08;
    uStack_6e0 = uStack_f10;
    uStack_6c8 = uStack_ef8;
    uStack_6d0 = uStack_f00;
    uStack_6b8 = uStack_ee8;
    uStack_6c0 = uStack_ef0;
    uStack_708 = uStack_f38;
    uStack_710 = uStack_f40;
    uStack_6f8 = uStack_f28;
    uStack_700 = uStack_f30;
    uStack_728 = uStack_f58;
    uStack_730 = uStack_f60;
    uStack_718 = uStack_f48;
    uStack_720 = uStack_f50;
    uStack_748 = uStack_f78;
    uStack_750 = uStack_f80;
    uStack_738 = uStack_f68;
    uStack_740 = uStack_f70;
    uStack_7a8 = uStack_fd8;
    uStack_7b0 = uStack_fe0;
    uStack_798 = uStack_fc8;
    uStack_7a0 = uStack_fd0;
    uStack_768 = uStack_f98;
    uStack_770 = uStack_fa0;
    uStack_758 = uStack_f88;
    uStack_760 = uStack_f90;
    uStack_788 = uStack_fb8;
    uStack_790 = uStack_fc0;
    uStack_778 = uStack_fa8;
    uStack_780 = uStack_fb0;
    uStack_7e8 = uStack_10f8;
    uStack_7f0 = uStack_1100;
    uStack_7d8 = uStack_10e8;
    uStack_7e0 = uStack_10f0;
    uStack_7d0 = uStack_10e0;
    uStack_7be = uStack_10ce;
    uStack_828 = uStack_1138;
    uStack_830 = uStack_1140;
    uStack_818 = uStack_1128;
    uStack_820 = uStack_1130;
    uStack_808 = uStack_1118;
    uStack_810 = uStack_1120;
    uStack_7f8 = uStack_1108;
    uStack_800 = uStack_1110;
    uStack_888 = uStack_1198;
    uStack_890 = uStack_11a0;
    uStack_878 = uStack_1188;
    uStack_880 = uStack_1190;
    uStack_8a8 = uStack_11b8;
    uStack_8b0 = uStack_11c0;
    uStack_898 = uStack_11a8;
    uStack_8a0 = uStack_11b0;
    uStack_83f = uStack_114f;
    uStack_858 = uStack_1168;
    uStack_860 = uStack_1170;
    uStack_850 = uStack_1160;
    uStack_868 = uStack_1178;
    uStack_870 = uStack_1180;
    uStack_918 = uStack_1220;
    uStack_920 = uStack_1228;
    uStack_908 = uStack_1210;
    uStack_910 = uStack_1218;
    uStack_938 = uStack_1240;
    uStack_940 = uStack_1248;
    uStack_928 = uStack_1230;
    uStack_930 = uStack_1238;
    uStack_8c0 = uStack_11c8;
    uStack_8d8 = uStack_11e0;
    uStack_8e0 = uStack_11e8;
    uStack_8c8 = uStack_11d0;
    uStack_8d0 = uStack_11d8;
    uStack_8f8 = uStack_1200;
    uStack_900 = uStack_1208;
    uStack_8e8 = uStack_11f0;
    uStack_8f0 = uStack_11f8;
    uStack_950 = uStack_1280;
    uStack_968 = uStack_1298;
    uStack_970 = uStack_12a0;
    uStack_958 = uStack_1288;
    uStack_960 = uStack_1290;
    uStack_9a8 = uStack_12d8;
    uStack_9b0 = uStack_12e0;
    uStack_998 = uStack_12c8;
    uStack_9a0 = uStack_12d0;
    uStack_988 = uStack_12b8;
    uStack_990 = uStack_12c0;
    uStack_978 = uStack_12a8;
    uStack_980 = uStack_12b0;
    uStack_9c8 = uStack_12f8;
    uStack_9d0 = uStack_1300;
    uStack_9b8 = uStack_12e8;
    uStack_9c0 = uStack_12f0;
    lStack_5d8 = lStack_1328;
    dVar3 = dStack_1320;
  }
  else {
    uStack_1fd8 = uStack_528;
    uStack_918 = uStack_4d0;
    uStack_920 = uStack_4d8;
    uStack_908 = uStack_4c0;
    uStack_910 = uStack_4c8;
    uStack_938 = uStack_4f0;
    uStack_940 = uStack_4f8;
    uStack_928 = uStack_4e0;
    uStack_930 = uStack_4e8;
    uStack_8c0 = uStack_478;
    uStack_8d8 = uStack_490;
    uStack_8e0 = uStack_498;
    uStack_8c8 = uStack_480;
    uStack_8d0 = uStack_488;
    uStack_8f8 = uStack_4b0;
    uStack_900 = uStack_4b8;
    uStack_8e8 = uStack_4a0;
    uStack_8f0 = uStack_4a8;
    uStack_dd0 = CONCAT71(uStack_dd0._1_7_,uStack_360);
    uStack_d40 = CONCAT71(uStack_d40._1_7_,uStack_35f);
    uStack_c30 = CONCAT71(uStack_c30._1_7_,uStack_348);
    uStack_788 = uStack_268;
    uStack_790 = uStack_270;
    uStack_778 = uStack_258;
    uStack_780 = uStack_260;
    uStack_768 = uStack_248;
    uStack_770 = uStack_250;
    uStack_758 = uStack_238;
    uStack_760 = uStack_240;
    uStack_7a8 = uStack_288;
    uStack_7b0 = uStack_290;
    uStack_798 = uStack_278;
    uStack_7a0 = uStack_280;
    uStack_728 = uStack_208;
    uStack_730 = uStack_210;
    uStack_718 = uStack_1f8;
    uStack_720 = uStack_200;
    uStack_748 = uStack_228;
    uStack_750 = uStack_230;
    uStack_738 = uStack_218;
    uStack_740 = uStack_220;
    uStack_6a8 = uStack_188;
    uStack_6b0 = uStack_190;
    uStack_698 = uStack_178;
    uStack_6a0 = uStack_180;
    uStack_690 = uStack_170;
    uStack_708 = uStack_1e8;
    uStack_710 = uStack_1f0;
    uStack_6f8 = uStack_1d8;
    uStack_700 = uStack_1e0;
    uStack_6e8 = uStack_1c8;
    uStack_6f0 = uStack_1d0;
    uStack_6d8 = uStack_1b8;
    uStack_6e0 = uStack_1c0;
    uStack_6c8 = uStack_1a8;
    uStack_6d0 = uStack_1b0;
    uStack_6b8 = uStack_198;
    uStack_6c0 = uStack_1a0;
    bStack_1ffc = bStack_16e;
    uStack_640 = uStack_120;
    uStack_658 = uStack_138;
    uStack_660 = uStack_140;
    uStack_648 = uStack_128;
    uStack_650 = uStack_130;
    uStack_678 = uStack_158;
    uStack_680 = uStack_160;
    uStack_668 = uStack_148;
    uStack_670 = uStack_150;
    uStack_1ff8 = uStack_168;
    uStack_1ff0 = uStack_118;
    uStack_950 = uStack_530;
    uStack_2008 = uStack_90;
    uStack_968 = uStack_548;
    uStack_970 = uStack_550;
    uStack_960 = uStack_540;
    uStack_958 = uStack_538;
    uStack_9a8 = uStack_588;
    uStack_9b0 = uStack_590;
    uStack_9a0 = uStack_580;
    uStack_998 = uStack_578;
    uStack_990 = uStack_570;
    uStack_988 = uStack_568;
    uStack_978 = uStack_558;
    uStack_980 = uStack_560;
    uStack_9d0 = uStack_5b0;
    uStack_9c8 = uStack_5a8;
    uStack_9b8 = uStack_598;
    uStack_9c0 = uStack_5a0;
    uStack_868 = uStack_428;
    uStack_870 = uStack_430;
    uStack_860 = uStack_420;
    uStack_858 = uStack_418;
    uStack_850 = uStack_410;
    uStack_83f = uStack_3ff;
    uStack_8a8 = uStack_468;
    uStack_8b0 = uStack_470;
    uStack_898 = uStack_458;
    uStack_8a0 = uStack_460;
    uStack_888 = uStack_448;
    uStack_890 = uStack_450;
    uStack_878 = uStack_438;
    uStack_880 = uStack_440;
    uStack_810 = uStack_3d0;
    uStack_808 = uStack_3c8;
    uStack_7f8 = uStack_3b8;
    uStack_800 = uStack_3c0;
    uStack_828 = uStack_3e8;
    uStack_830 = uStack_3f0;
    uStack_818 = uStack_3d8;
    uStack_820 = uStack_3e0;
    uStack_7be = uStack_37e;
    uStack_7d8 = uStack_398;
    uStack_7e0 = uStack_3a0;
    uStack_7d0 = uStack_390;
    uStack_7e8 = uStack_3a8;
    uStack_7f0 = uStack_3b0;
    dVar3 = dStack_5d0;
    bStack_1050 = bStack_300;
    bStack_1087 = bStack_337;
    bStack_1088 = bStack_338;
  }
  uStack_1930 = uStack_950;
  uStack_1948 = uStack_968;
  uStack_1950 = uStack_970;
  uStack_1938 = uStack_958;
  uStack_1940 = uStack_960;
  uStack_1988 = uStack_9a8;
  uStack_1990 = uStack_9b0;
  uStack_1978 = uStack_998;
  uStack_1980 = uStack_9a0;
  uStack_1968 = uStack_988;
  uStack_1970 = uStack_990;
  uStack_1958 = uStack_978;
  uStack_1960 = uStack_980;
  uStack_19a8 = uStack_9c8;
  uStack_19b0 = uStack_9d0;
  uStack_1998 = uStack_9b8;
  uStack_19a0 = uStack_9c0;
  uStack_1890 = uStack_8d8;
  uStack_1898 = uStack_8e0;
  uStack_1880 = uStack_8c8;
  uStack_1888 = uStack_8d0;
  uStack_18d0 = uStack_918;
  uStack_18d8 = uStack_920;
  uStack_18c0 = uStack_908;
  uStack_18c8 = uStack_910;
  uStack_18b0 = uStack_8f8;
  uStack_18b8 = uStack_900;
  uStack_18a0 = uStack_8e8;
  uStack_18a8 = uStack_8f0;
  uStack_18f0 = uStack_938;
  uStack_18f8 = uStack_940;
  uStack_18e0 = uStack_928;
  uStack_18e8 = uStack_930;
  uStack_1878 = uStack_8c0;
  uStack_17ff = uStack_83f;
  uStack_1828 = uStack_868;
  uStack_1830 = uStack_870;
  uStack_1818 = uStack_858;
  uStack_1820 = uStack_860;
  uStack_1810 = uStack_850;
  uStack_1868 = uStack_8a8;
  uStack_1870 = uStack_8b0;
  uStack_1858 = uStack_898;
  uStack_1860 = uStack_8a0;
  uStack_1848 = uStack_888;
  uStack_1850 = uStack_890;
  uStack_1838 = uStack_878;
  uStack_1840 = uStack_880;
  uStack_177e = uStack_7be;
  uStack_17c8 = uStack_808;
  uStack_17d0 = uStack_810;
  uStack_17b8 = uStack_7f8;
  uStack_17c0 = uStack_800;
  uStack_17e8 = uStack_828;
  uStack_17f0 = uStack_830;
  uStack_17d8 = uStack_818;
  uStack_17e0 = uStack_820;
  uStack_1798 = uStack_7d8;
  uStack_17a0 = uStack_7e0;
  uStack_1790 = uStack_7d0;
  uStack_17a8 = uStack_7e8;
  uStack_17b0 = uStack_7f0;
  bStack_1738 = bStack_1088 & 1;
  bStack_1737 = bStack_1087 & 1;
  bStack_1700 = bStack_1050 & 1;
  uStack_1658 = uStack_778;
  uStack_1660 = uStack_780;
  uStack_1648 = uStack_768;
  uStack_1650 = uStack_770;
  uStack_1688 = uStack_7a8;
  uStack_1690 = uStack_7b0;
  uStack_1678 = uStack_798;
  uStack_1680 = uStack_7a0;
  uStack_1668 = uStack_788;
  uStack_1670 = uStack_790;
  uStack_15e8 = uStack_708;
  uStack_15f0 = uStack_710;
  uStack_15f8 = uStack_718;
  uStack_1600 = uStack_720;
  uStack_1608 = uStack_728;
  uStack_1610 = uStack_730;
  uStack_1618 = uStack_738;
  uStack_1620 = uStack_740;
  uStack_1638 = uStack_758;
  uStack_1640 = uStack_760;
  uStack_1628 = uStack_748;
  uStack_1630 = uStack_750;
  uStack_15a8 = uStack_6c8;
  uStack_15b0 = uStack_6d0;
  uStack_15b8 = uStack_6d8;
  uStack_15c0 = uStack_6e0;
  uStack_15c8 = uStack_6e8;
  uStack_15d0 = uStack_6f0;
  uStack_15d8 = uStack_6f8;
  uStack_15e0 = uStack_700;
  uStack_1570 = uStack_690;
  uStack_1578 = uStack_698;
  uStack_1580 = uStack_6a0;
  uStack_1588 = uStack_6a8;
  uStack_1590 = uStack_6b0;
  uStack_1598 = uStack_6b8;
  uStack_15a0 = uStack_6c0;
  bStack_156e = bStack_1ffc & 1;
  uStack_1568 = uStack_1ff8;
  uStack_1558 = uStack_678;
  uStack_1560 = uStack_680;
  uStack_1520 = uStack_640;
  uStack_1528 = uStack_648;
  uStack_1530 = uStack_650;
  uStack_1538 = uStack_658;
  uStack_1540 = uStack_660;
  uStack_1548 = uStack_668;
  uStack_1550 = uStack_670;
  uStack_1518 = uStack_1ff0;
  uStack_1490 = uStack_2008;
  func_0x0001018aada0(auStack_630,&uStack_1fd8);
  FUN_1035cb6dc(0 < lStack_5d8,0,0xc000000000000000);
  if (-0x80000001 < lStack_5d8) {
    if (lStack_5d8 < 0x80000000) {
      FUN_1035cb924(lStack_5d8,0,0xc000000000000000);
      func_0x0001035cb538((float)(dVar3 / 1000.0),0,0xc000000000000000);
      func_0x00010178e3b8(&uStack_1a30);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034a73d0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034a73cc);
  (*pcVar1)();
}



/* Entry: 1034a8028; end: 1034a81cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_1034a8028(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined8 auStack_370 [97];
  byte *pbStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pbVar2 = param_1;
  uVar4 = param_2;
  uVar3 = param_3;
  FUN_1035c72ac();
  pbStack_68 = pbVar2;
  uStack_60 = uVar4;
  uStack_58 = uVar3;
  FUN_1035c6ab4(*param_1 & 1,0,0xc000000000000000);
  func_0x0001035c6b5c(param_1[1] & 1,0,0xc000000000000000);
  func_0x0001000d224c(auStack_370);
  uVar3 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f154150);
  uVar4 = auStack_370[0];
  func_0x000107c3ebdc();
  func_0x000107c615e8(auStack_370[0]);
  func_0x000107c61170(uVar3);
  dVar6 = *(double *)(param_1 + 8);
  if ((int)uVar4 == 0) {
    dVar6 = *(double *)(param_1 + 8) * 1000.0;
  }
  FUN_1035c6c04((float)dVar6,0,0xc000000000000000);
  func_0x00010006c00c(param_2,param_3);
  func_0x000107c6157c(param_4);
  func_0x0001035c6970(param_2,param_3,param_4);
  FUN_1035c6cac(param_1[0x10] & 1,0,0xc000000000000000);
  if (param_1[0x20] != 1) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034a81cc);
      (*pcVar1)();
    }
    if (0x7fffffff < lVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034a81d0);
      (*pcVar1)();
    }
    func_0x0001035c6d54(lVar5,0,0xc000000000000000);
  }
  func_0x00010178e208(param_1,auStack_370);
  func_0x0001034cda38(param_1,0);
  func_0x0001035c6e8c();
  return pbStack_68;
}



/* Entry: 1034a81d0; end: 1034a9053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034a81d0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long *plVar17;
  undefined8 uVar18;
  long unaff_x21;
  undefined8 *puVar19;
  undefined8 uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  code *pcVar24;
  undefined1 auStack_1f50 [8];
  undefined8 uStack_1f48;
  undefined1 auStack_1f40 [8];
  undefined8 uStack_1f38;
  undefined1 auStack_1f30 [8];
  undefined8 uStack_1f28;
  undefined1 auStack_1f20 [16];
  undefined8 uStack_1f10;
  uint uStack_1f04;
  long lStack_1f00;
  undefined8 *puStack_1ef8;
  ulong uStack_1ef0;
  undefined8 uStack_1ee8;
  undefined8 uStack_1ee0;
  long lStack_1ed8;
  long lStack_1ed0;
  long lStack_1ec8;
  long lStack_1ec0;
  long lStack_1eb8;
  long lStack_1eb0;
  undefined8 uStack_1ea8;
  long lStack_1ea0;
  undefined8 uStack_1e78;
  undefined8 uStack_1e70;
  undefined8 uStack_1e68;
  undefined8 uStack_1e60;
  undefined8 uStack_1e58;
  undefined8 uStack_1e50;
  undefined8 uStack_1e48;
  undefined8 uStack_1e40;
  undefined8 uStack_1e38;
  undefined8 uStack_1e30;
  undefined8 uStack_1e28;
  undefined8 uStack_1e20;
  undefined8 uStack_1e18;
  undefined8 uStack_1e10;
  undefined8 uStack_1e08;
  undefined8 uStack_1e00;
  undefined8 uStack_1df8;
  undefined8 uStack_1df0;
  undefined8 uStack_1de8;
  undefined8 uStack_1de0;
  undefined8 uStack_1dd8;
  undefined8 uStack_1dc7;
  ulong uStack_1b70;
  undefined8 uStack_1b68;
  undefined8 uStack_1b60;
  undefined8 uStack_1b58;
  undefined8 uStack_1b50;
  undefined8 uStack_1b48;
  undefined8 uStack_1b40;
  undefined8 uStack_1b38;
  undefined8 uStack_1b30;
  undefined8 uStack_1b28;
  undefined8 uStack_1b20;
  undefined8 uStack_1b18;
  undefined8 uStack_1b10;
  undefined8 uStack_1b08;
  undefined8 uStack_1b00;
  undefined8 uStack_1af8;
  undefined8 uStack_1af0;
  undefined8 uStack_1ae8;
  undefined8 uStack_1ae0;
  undefined8 uStack_1ad8;
  undefined8 uStack_1ad0;
  undefined1 uStack_1ac8;
  undefined7 uStack_1ac7;
  undefined1 uStack_1ac0;
  undefined8 uStack_1abf;
  ulong uStack_1860;
  undefined8 uStack_1858;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined8 uStack_1838;
  undefined8 uStack_1830;
  undefined8 uStack_1828;
  undefined8 uStack_1820;
  undefined8 uStack_1818;
  undefined8 uStack_1810;
  undefined8 uStack_1808;
  undefined8 uStack_1800;
  undefined8 uStack_17f8;
  undefined8 uStack_17f0;
  undefined8 uStack_17e8;
  undefined8 uStack_17e0;
  undefined8 uStack_17d8;
  undefined8 uStack_17d0;
  undefined8 uStack_17c8;
  undefined8 uStack_17c0;
  undefined1 uStack_17b8;
  undefined7 uStack_17b7;
  undefined1 uStack_17b0;
  undefined8 uStack_17af;
  undefined8 uStack_17a0;
  undefined8 uStack_1798;
  undefined8 uStack_1790;
  undefined8 uStack_1788;
  undefined8 uStack_1780;
  undefined8 uStack_1778;
  undefined8 uStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined8 uStack_1738;
  undefined8 uStack_1730;
  undefined8 uStack_1728;
  undefined8 uStack_1720;
  undefined8 uStack_1718;
  undefined8 uStack_1710;
  undefined8 uStack_1708;
  undefined8 uStack_1700;
  undefined8 uStack_16ef;
  undefined1 auStack_1550 [192];
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13df;
  long lStack_13d0;
  long lStack_13c8;
  undefined8 uStack_13c0;
  ulong uStack_13b8;
  ulong uStack_13b0;
  ulong uStack_13a8;
  ulong uStack_13a0;
  long lStack_1398;
  double dStack_1390;
  long lStack_1388;
  double dStack_1380;
  char cStack_1378;
  undefined7 uStack_1377;
  undefined1 uStack_1370;
  undefined7 uStack_136f;
  char cStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  long lStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined1 uStack_1308;
  undefined7 uStack_1307;
  undefined1 uStack_1300;
  undefined8 uStack_12ff;
  ulong uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  long lStack_12d8;
  undefined *puStack_12d0;
  undefined8 uStack_12c8;
  long alStack_12c0 [14];
  undefined1 auStack_1250 [320];
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined1 uStack_1068;
  undefined7 uStack_1067;
  undefined1 uStack_1060;
  undefined8 uStack_105f;
  undefined1 auStack_1048 [1448];
  ulong uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined1 uStack_9f8;
  undefined7 uStack_9f7;
  undefined1 uStack_9f0;
  undefined8 uStack_9ef;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_92f;
  undefined1 auStack_920 [776];
  undefined1 auStack_618 [16];
  undefined8 uStack_608;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = 0;
  uVar20 = param_4;
  func_0x000104739264();
  lStack_1eb0 = *(long *)(lVar5 + -8);
  lStack_1ea0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1eb0 + 0x40));
  lVar16 = (long)&uStack_1f10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112dcbcf8;
  lStack_1ec8 = lVar16;
  func_0x0001000285a8(0x112dcbcf8,&UNK_10d98e3f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_00;
  lVar5 = 0x112db3a00;
  lStack_1eb8 = lVar16;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_01;
  lVar5 = 0x112dcbf08;
  lStack_1ec0 = lVar16;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_02;
  lVar5 = 0x112db3ce0;
  puVar14 = &UNK_10d95e240;
  lStack_1ed0 = lVar16;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar16 = lVar16 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar19 = (undefined8 *)(lVar16 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = (long)puVar19 - extraout_x12_00;
  FUN_10357f588();
  uVar22 = param_2;
  uVar18 = uVar20;
  uStack_1ea8 = param_3;
  lStack_12d8 = lVar5;
  puStack_12d0 = puVar14;
  uStack_12c8 = uVar20;
  FUN_1034b0fc0(param_1);
  if (unaff_x21 == 0) {
    lStack_1f00 = lVar16;
    puStack_1ef8 = puVar19;
    lStack_1ed8 = unaff_x21;
    uStack_12f0 = uVar22;
    uStack_12e8 = param_3;
    uStack_12e0 = uVar18;
    func_0x0001034a73d0(&uStack_12f0,param_2);
    uVar18 = uStack_12e0;
    uVar20 = uStack_12e8;
    uVar22 = uStack_12f0;
    func_0x00010006c00c(uStack_12f0,uStack_12e8);
    func_0x000107c6157c(uVar18);
    uStack_1ef0 = uVar22;
    uStack_1ee8 = uVar20;
    uStack_1ee0 = uVar18;
    func_0x00010357e9d4(uVar22,uVar20,uVar18);
    plVar17 = (long *)(param_2 + 0x5b0);
    uStack_1338 = *(undefined8 *)(param_2 + 0x5d8);
    lStack_1340 = *(long *)(param_2 + 0x5d0);
    uStack_1328 = *(undefined8 *)(param_2 + 0x5e8);
    uStack_1330 = *(undefined8 *)(param_2 + 0x5e0);
    uStack_1318 = *(undefined8 *)(param_2 + 0x5f8);
    uStack_1320 = *(undefined8 *)(param_2 + 0x5f0);
    uStack_1310 = *(undefined8 *)(param_2 + 0x600);
    uStack_1308 = (undefined1)*(undefined8 *)(param_2 + 0x608);
    uStack_12ff = *(undefined8 *)(param_2 + 0x611);
    uStack_1307 = (undefined7)*(undefined8 *)(param_2 + 0x609);
    uStack_1300 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x609) >> 0x38);
    uStack_1358 = *(undefined8 *)(param_2 + 0x5b8);
    uStack_1360 = *(undefined8 *)(param_2 + 0x5b0);
    uStack_1348 = *(undefined8 *)(param_2 + 0x5c8);
    uStack_1350 = *(undefined8 *)(param_2 + 0x5c0);
    if (lStack_1340 == 1) {
      *(undefined1 *)(lVar23 + -0x10) = 1;
      *(undefined8 *)(lVar23 + -0x18) = 0;
      *(undefined1 *)(lVar23 + -0x20) = 1;
      *(undefined8 *)(lVar23 + -0x28) = 0;
      plVar17 = alStack_12c0;
      *(undefined1 *)(lVar23 + -0x30) = 1;
      *(undefined8 *)(lVar23 + -0x38) = 0;
      *(undefined1 *)(lVar23 + -0x40) = 0;
      func_0x00010420fe14(alStack_12c0,0,0,0,0,0,0,0,0);
    }
    lStack_13c8 = plVar17[1];
    lVar5 = *plVar17;
    uStack_13b8 = plVar17[3];
    uStack_13c0 = plVar17[2];
    lStack_1388 = plVar17[9];
    dStack_1390 = (double)plVar17[8];
    dStack_1380 = (double)plVar17[10];
    uStack_13a8 = plVar17[5];
    uStack_13b0 = plVar17[4];
    lStack_1398 = plVar17[7];
    uStack_13a0 = plVar17[6];
    cStack_1378 = (char)plVar17[0xb];
    uStack_136f = (undefined7)*(undefined8 *)((long)plVar17 + 0x61);
    cStack_1368 = (char)((ulong)*(undefined8 *)((long)plVar17 + 0x61) >> 0x38);
    uStack_1377 = (undefined7)*(undefined8 *)((long)plVar17 + 0x59);
    uStack_1370 = (undefined1)((ulong)*(undefined8 *)((long)plVar17 + 0x59) >> 0x38);
    lStack_13d0 = lVar5;
    if (lVar5 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x1034a8ff4);
      (*pcVar24)();
    }
    if (0x7fffffff < lVar5) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x1034a8ff8);
      (*pcVar24)();
    }
    func_0x0001034a9114(&uStack_1360,&uStack_1860,0x112dcbca8,&UNK_10d98e380);
    FUN_10357eb38(lVar5,0,0xc000000000000000);
    lVar5 = lStack_13c8;
    if (lStack_13c8 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x1034a8ffc);
      (*pcVar24)();
    }
    if (0x7fffffff < lStack_13c8) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x1034a9000);
      (*pcVar24)();
    }
    func_0x00010357ebe0(lStack_13c8,0,0xc000000000000000);
    bVar2 = (byte)uStack_13c0;
    uVar22 = uStack_13c0 & 0xff;
    func_0x00010357ec88(uVar22,0,0xc000000000000000);
    func_0x00010357ee68(uStack_13c0._1_1_,0,0xc000000000000000);
    func_0x000107c610b4(auStack_1048,param_2 + 8,0x5a8);
    func_0x000107c610b4(auStack_618,param_2 + 8,0x5a8);
    iVar3 = (int)auStack_618;
    func_0x00010189c838();
    lVar16 = lStack_1eb8;
    uVar20 = 0;
    if (iVar3 != 1) {
      uVar20 = uStack_608;
    }
    func_0x000103bfc9d0(lStack_1eb8,uVar20);
    lVar6 = 0;
    func_0x0001046d90b0();
    lVar7 = lVar16;
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar16,1,lVar6);
    lVar10 = lStack_1ec0;
    if ((int)lVar7 == 1) {
      func_0x0001034a9098(lVar16,0x112dcbcf8,&UNK_10d98e3f0);
      lVar6 = lStack_1ea0;
      lVar7 = lStack_1eb0;
      puVar19 = puStack_1ef8;
      uVar21 = (uint)uVar22;
LAB_1034a876c:
      (**(code **)(lVar7 + 0x38))(lVar23,1,1,lVar6);
    }
    else {
      uStack_1f04 = (uint)bVar2;
      func_0x0001034a9114(lVar16 + *(int *)(lVar6 + 0x28),lStack_1ec0,0x112db3a00,&UNK_10d95dff0);
      func_0x0001034a90d8(lVar16,&SUB_1046d90b0);
      lVar8 = 0;
      func_0x00010477ea9c();
      lVar9 = lVar10;
      (**(code **)(*(long *)(lVar8 + -8) + 0x30))(lVar10,1,lVar8);
      lVar6 = lStack_1ea0;
      lVar7 = lStack_1eb0;
      lVar16 = lStack_1ed0;
      puVar19 = puStack_1ef8;
      if ((int)lVar9 == 1) {
        uVar20 = 0x112db3a00;
        puVar14 = &UNK_10d95dff0;
        lVar16 = lVar10;
LAB_1034a8760:
        func_0x0001034a9098(lVar16,uVar20,puVar14);
        uVar21 = uStack_1f04;
        goto LAB_1034a876c;
      }
      func_0x0001034a9114(lVar10 + *(int *)(lVar8 + 0x14),lStack_1ed0,0x112dcbf08,&UNK_10d98e580);
      func_0x0001034a90d8(lVar10,&SUB_10477ea9c);
      lVar9 = 0;
      func_0x000104760f24();
      lVar10 = lVar16;
      (**(code **)(*(long *)(lVar9 + -8) + 0x30))(lVar16,1,lVar9);
      if ((int)lVar10 == 1) {
        uVar20 = 0x112dcbf08;
        puVar14 = &UNK_10d98e580;
        goto LAB_1034a8760;
      }
      func_0x0001034a9114(lVar16 + *(int *)(lVar9 + 0x14),lVar23,0x112db3ce0,&UNK_10d95e240);
      func_0x0001034a90d8(lVar16,&SUB_104760f24);
      uVar21 = uStack_1f04;
    }
    func_0x0001034a9114(lVar23,puVar19,0x112db3ce0,&UNK_10d95e240);
    pcVar24 = *(code **)(lVar7 + 0x30);
    puVar11 = puVar19;
    (*pcVar24)(puVar19,1,lVar6);
    if ((int)puVar11 == 1) {
      func_0x0001034a9098(puVar19,0x112db3ce0,&UNK_10d95e240);
      uVar20 = 0;
      uVar18 = 0;
    }
    else {
      uVar20 = *puVar19;
      uVar18 = puVar19[1];
      func_0x000107c61434(uVar18);
      func_0x0001034a90d8(puVar19,&SUB_104739264);
    }
    func_0x0001047390cc(uVar20,uVar18);
    func_0x000107c6142c(uVar18);
    FUN_10357f2d0((uint)uVar20 & 1,0,0xc000000000000000);
    uVar13 = uStack_13b0;
    uVar22 = uStack_13b8;
    if (uStack_13b0 != 0) {
      uVar1 = uStack_13b8 & 0xffffffffffff;
      if ((uStack_13b0 & 0x2000000000000000) != 0) {
        uVar1 = uStack_13b0 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x00010178e30c(&lStack_13d0,&uStack_1860);
        FUN_10357ed30(uVar22,uVar13);
      }
    }
    func_0x00010357edc0(uStack_13a8 & 0xff,0,0xc000000000000000);
    if (uVar21 != 0) {
      func_0x000107c610b4(&uStack_1860,param_2 + 0x620,0x301);
      iVar3 = (int)&uStack_1860;
      func_0x00010178e1e4();
      if (iVar3 != 1) {
        func_0x000107c610b4(auStack_920,param_2 + 0x620,0x301);
        func_0x000107c610b4(&uStack_1b70,&uStack_1860,0x301);
        func_0x00010178e208(&uStack_1b70,&uStack_1e78);
        FUN_1034a8028(auStack_920,uStack_1ef0,uStack_1ee8,uStack_1ee0,uStack_1ea8);
        func_0x00010357ef10();
        func_0x0001034a9098(&uStack_1860,0x112dcbc48,&UNK_10d98e2c0);
      }
    }
    if (2 < uStack_13a0) {
      uStack_1860 = uStack_13a0;
      puVar14 = &UNK_1107969f0;
      puVar15 = PTR___sSuN_11034e220;
      goto LAB_1034a9044;
    }
    FUN_10357efb4(uStack_13a0,1);
    if ((char)lStack_1388 != '\x01') {
      if ((((ulong)dStack_1390 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1034a9004);
        (*pcVar24)();
      }
      if (dStack_1390 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1034a9008);
        (*pcVar24)();
      }
      if (9.223372036854776e+18 <= dStack_1390) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1034a9010);
        (*pcVar24)();
      }
      func_0x00010357f380((long)dStack_1390,0,0xc000000000000000);
    }
    if (cStack_1378 != '\x01') {
      if ((((ulong)dStack_1380 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1034a900c);
        (*pcVar24)();
      }
      if (dStack_1380 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1034a9014);
        (*pcVar24)();
      }
      if (9.223372036854776e+18 <= dStack_1380) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1034a9018);
        (*pcVar24)();
      }
      func_0x00010357f42c((long)dStack_1380,0,0xc000000000000000);
    }
    if (cStack_1368 != '\x01') {
      FUN_10357f4d8((float)(double)CONCAT71(uStack_136f,uStack_1370),0,0xc000000000000000);
    }
    func_0x00010178e348(&lStack_13d0);
    lVar16 = lStack_1f00;
    if (0 < lVar5) {
      uStack_1088 = *(undefined8 *)(param_2 + 0xa38);
      uStack_1090 = *(undefined8 *)(param_2 + 0xa30);
      uStack_1078 = *(undefined8 *)(param_2 + 0xa48);
      uStack_1080 = *(undefined8 *)(param_2 + 0xa40);
      uStack_1070 = *(undefined8 *)(param_2 + 0xa50);
      uStack_1068 = (undefined1)*(undefined8 *)(param_2 + 0xa58);
      uStack_10c8 = *(undefined8 *)(param_2 + 0x9f8);
      uStack_10d0 = *(undefined8 *)(param_2 + 0x9f0);
      uStack_10b8 = *(undefined8 *)(param_2 + 0xa08);
      uStack_10c0 = *(undefined8 *)(param_2 + 0xa00);
      uStack_10a8 = *(undefined8 *)(param_2 + 0xa18);
      uStack_10b0 = *(undefined8 *)(param_2 + 0xa10);
      uStack_1098 = *(undefined8 *)(param_2 + 0xa28);
      uStack_10a0 = *(undefined8 *)(param_2 + 0xa20);
      uStack_1108 = *(undefined8 *)(param_2 + 0x9b8);
      uStack_1110 = *(undefined8 *)(param_2 + 0x9b0);
      uStack_10f8 = *(undefined8 *)(param_2 + 0x9c8);
      uStack_1100 = *(undefined8 *)(param_2 + 0x9c0);
      uStack_10e8 = *(undefined8 *)(param_2 + 0x9d8);
      uStack_10f0 = *(undefined8 *)(param_2 + 0x9d0);
      uStack_10d8 = *(undefined8 *)(param_2 + 0x9e8);
      uStack_10e0 = *(undefined8 *)(param_2 + 0x9e0);
      uStack_105f = *(undefined8 *)(param_2 + 0xa61);
      uStack_1067 = (undefined7)*(undefined8 *)(param_2 + 0xa59);
      uStack_1060 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xa59) >> 0x38);
      func_0x00010178e4d4(&uStack_1e78);
      uStack_17d8 = *(undefined8 *)(param_2 + 0xa38);
      uStack_17e0 = *(undefined8 *)(param_2 + 0xa30);
      iVar3 = (int)&uStack_17a0;
      uStack_17c8 = *(undefined8 *)(param_2 + 0xa48);
      uStack_17d0 = *(undefined8 *)(param_2 + 0xa40);
      uStack_17c0 = *(undefined8 *)(param_2 + 0xa50);
      uStack_17b8 = (undefined1)*(undefined8 *)(param_2 + 0xa58);
      uStack_17af = *(undefined8 *)(param_2 + 0xa61);
      uStack_17b7 = (undefined7)*(undefined8 *)(param_2 + 0xa59);
      uStack_17b0 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xa59) >> 0x38);
      uStack_1818 = *(undefined8 *)(param_2 + 0x9f8);
      uStack_1820 = *(undefined8 *)(param_2 + 0x9f0);
      uStack_1808 = *(undefined8 *)(param_2 + 0xa08);
      uStack_1810 = *(undefined8 *)(param_2 + 0xa00);
      uStack_17f8 = *(undefined8 *)(param_2 + 0xa18);
      uStack_1800 = *(undefined8 *)(param_2 + 0xa10);
      uStack_17e8 = *(undefined8 *)(param_2 + 0xa28);
      uStack_17f0 = *(undefined8 *)(param_2 + 0xa20);
      uStack_1858 = *(undefined8 *)(param_2 + 0x9b8);
      uStack_1860 = *(ulong *)(param_2 + 0x9b0);
      uStack_1848 = *(undefined8 *)(param_2 + 0x9c8);
      uStack_1850 = *(undefined8 *)(param_2 + 0x9c0);
      uStack_1838 = *(undefined8 *)(param_2 + 0x9d8);
      uStack_1840 = *(undefined8 *)(param_2 + 0x9d0);
      uStack_1828 = *(undefined8 *)(param_2 + 0x9e8);
      uStack_1830 = *(undefined8 *)(param_2 + 0x9e0);
      uStack_16ef = uStack_1dc7;
      uStack_1718 = uStack_1df0;
      uStack_1720 = uStack_1df8;
      uStack_1708 = uStack_1de0;
      uStack_1710 = uStack_1de8;
      uStack_1700 = uStack_1dd8;
      uStack_1758 = uStack_1e30;
      uStack_1760 = uStack_1e38;
      uStack_1748 = uStack_1e20;
      uStack_1750 = uStack_1e28;
      uStack_1738 = uStack_1e10;
      uStack_1740 = uStack_1e18;
      uStack_1728 = uStack_1e00;
      uStack_1730 = uStack_1e08;
      uStack_1798 = uStack_1e70;
      uStack_17a0 = uStack_1e78;
      uStack_1788 = uStack_1e60;
      uStack_1790 = uStack_1e68;
      uStack_1778 = uStack_1e50;
      uStack_1780 = uStack_1e58;
      uStack_1768 = uStack_1e40;
      uStack_1770 = uStack_1e48;
      iVar4 = (int)&uStack_1860;
      func_0x00010178e278();
      if (iVar4 == 1) {
        func_0x00010178e278();
        lVar16 = lStack_1f00;
        if (iVar3 == 1) {
          uStack_1ae8 = uStack_17d8;
          uStack_1af0 = uStack_17e0;
          uStack_1ad8 = uStack_17c8;
          uStack_1ae0 = uStack_17d0;
          uStack_1ac8 = uStack_17b8;
          uStack_1ad0 = uStack_17c0;
          uStack_1abf = uStack_17af;
          uStack_1ac7 = uStack_17b7;
          uStack_1ac0 = uStack_17b0;
          uStack_1b28 = uStack_1818;
          uStack_1b30 = uStack_1820;
          uStack_1b18 = uStack_1808;
          uStack_1b20 = uStack_1810;
          uStack_1b08 = uStack_17f8;
          uStack_1b10 = uStack_1800;
          uStack_1af8 = uStack_17e8;
          uStack_1b00 = uStack_17f0;
          uStack_1b68 = uStack_1858;
          uStack_1b70 = uStack_1860;
          uStack_1b58 = uStack_1848;
          uStack_1b60 = uStack_1850;
          uStack_1b48 = uStack_1838;
          uStack_1b50 = uStack_1840;
          uStack_1b38 = uStack_1828;
          uStack_1b40 = uStack_1830;
          func_0x0001034a9114(&uStack_1110,&uStack_1490,0x112dcbc58,&UNK_10d98e2f0);
          func_0x0001034a9098(&uStack_1b70,0x112dcbc58,&UNK_10d98e2f0);
          goto LAB_1034a8e6c;
        }
LAB_1034a8c30:
        lVar16 = lStack_1f00;
        func_0x000107c610b4(&uStack_1b70,&uStack_1860,0x179);
        func_0x0001034a9114(&uStack_1110,&uStack_1490,0x112dcbc58,&UNK_10d98e2f0);
        func_0x0001034a9098(&uStack_1b70,0x112dcbca0,&UNK_10d9902c0);
      }
      else {
        uStack_1ae8 = uStack_17d8;
        uStack_1af0 = uStack_17e0;
        uStack_1ad8 = uStack_17c8;
        uStack_1ae0 = uStack_17d0;
        uStack_1ac8 = uStack_17b8;
        uStack_1ad0 = uStack_17c0;
        uStack_1abf = uStack_17af;
        uStack_1ac7 = uStack_17b7;
        uStack_1ac0 = uStack_17b0;
        uStack_1b28 = uStack_1818;
        uStack_1b30 = uStack_1820;
        uStack_1b18 = uStack_1808;
        uStack_1b20 = uStack_1810;
        uStack_1b08 = uStack_17f8;
        uStack_1b10 = uStack_1800;
        uStack_1af8 = uStack_17e8;
        uStack_1b00 = uStack_17f0;
        uStack_1b68 = uStack_1858;
        uStack_1b70 = uStack_1860;
        uStack_1b58 = uStack_1848;
        uStack_1b60 = uStack_1850;
        uStack_1b48 = uStack_1838;
        uStack_1b50 = uStack_1840;
        uStack_1b38 = uStack_1828;
        uStack_1b40 = uStack_1830;
        func_0x00010178e278();
        if (iVar3 == 1) goto LAB_1034a8c30;
        uStack_1408 = uStack_1718;
        uStack_1410 = uStack_1720;
        uStack_13f8 = uStack_1708;
        uStack_1400 = uStack_1710;
        uStack_13f0 = uStack_1700;
        uStack_13df = uStack_16ef;
        uStack_1448 = uStack_1758;
        uStack_1450 = uStack_1760;
        uStack_1438 = uStack_1748;
        uStack_1440 = uStack_1750;
        uStack_1428 = uStack_1738;
        uStack_1430 = uStack_1740;
        uStack_1418 = uStack_1728;
        uStack_1420 = uStack_1730;
        uStack_1488 = uStack_1798;
        uStack_1490 = uStack_17a0;
        uStack_1478 = uStack_1788;
        uStack_1480 = uStack_1790;
        uStack_1468 = uStack_1778;
        uStack_1470 = uStack_1780;
        uStack_1458 = uStack_1768;
        uStack_1460 = uStack_1770;
        uStack_958 = uStack_1718;
        uStack_960 = uStack_1720;
        uStack_948 = uStack_1708;
        uStack_950 = uStack_1710;
        uStack_940 = uStack_1700;
        uStack_92f = uStack_16ef;
        uStack_998 = uStack_1758;
        uStack_9a0 = uStack_1760;
        uStack_988 = uStack_1748;
        uStack_990 = uStack_1750;
        uStack_978 = uStack_1738;
        uStack_980 = uStack_1740;
        uStack_968 = uStack_1728;
        uStack_970 = uStack_1730;
        uStack_9d8 = uStack_1798;
        uStack_9e0 = uStack_17a0;
        uStack_9c8 = uStack_1788;
        uStack_9d0 = uStack_1790;
        uStack_9b8 = uStack_1778;
        uStack_9c0 = uStack_1780;
        uStack_9a8 = uStack_1768;
        uStack_9b0 = uStack_1770;
        uStack_a18 = uStack_1ae8;
        uStack_a20 = uStack_1af0;
        uStack_a08 = uStack_1ad8;
        uStack_a10 = uStack_1ae0;
        uStack_9f8 = uStack_1ac8;
        uStack_a00 = uStack_1ad0;
        uStack_9ef = uStack_1abf;
        uStack_9f7 = uStack_1ac7;
        uStack_9f0 = uStack_1ac0;
        uStack_a58 = uStack_1b28;
        uStack_a60 = uStack_1b30;
        uStack_a48 = uStack_1b18;
        uStack_a50 = uStack_1b20;
        uStack_a38 = uStack_1b08;
        uStack_a40 = uStack_1b10;
        uStack_a28 = uStack_1af8;
        uStack_a30 = uStack_1b00;
        uStack_a98 = uStack_1b68;
        uStack_aa0 = uStack_1b70;
        uStack_a88 = uStack_1b58;
        uStack_a90 = uStack_1b60;
        uStack_a78 = uStack_1b48;
        uStack_a80 = uStack_1b50;
        uStack_a68 = uStack_1b38;
        uStack_a70 = uStack_1b40;
        func_0x0001034a9114(&uStack_1110,auStack_1550,0x112dcbc58,&UNK_10d98e2f0);
        puVar12 = &uStack_aa0;
        func_0x00010420e480(puVar12,&uStack_9e0);
        func_0x0001034a9098(&uStack_1490,0x112dcbc58,&UNK_10d98e2f0);
        func_0x0001034a9098(&uStack_1860,0x112dcbc58,&UNK_10d98e2f0);
        lVar16 = lStack_1f00;
        if (((ulong)puVar12 & 1) != 0) goto LAB_1034a8e6c;
      }
      uVar20 = uStack_1ea8;
      FUN_1034a378c(param_1);
      if (lStack_1ed8 != 0) {
        func_0x0001034a9098(lVar23,0x112db3ce0,&UNK_10d95e240);
        uVar20 = uStack_12c8;
        func_0x00010006c090(lStack_12d8,puStack_12d0);
        func_0x000107c61574(uVar20);
        func_0x00010006c090(uStack_1ef0,uStack_1ee8);
        uVar20 = uStack_1ee0;
        goto LAB_1034a83ec;
      }
      uStack_1860 = param_2;
      uStack_1858 = uVar20;
      uStack_1850 = param_4;
      func_0x000103596098();
      uVar18 = uStack_1850;
      uVar20 = uStack_1858;
      uVar22 = uStack_1860;
      func_0x00010006c00c(uStack_1860,uStack_1858);
      func_0x000107c6157c(uVar18);
      FUN_10357f040(uVar22,uVar20,uVar18);
      func_0x00010006c090(uVar22,uVar20);
      func_0x000107c61574(uVar18);
    }
LAB_1034a8e6c:
    func_0x0001034a9114(lVar23,lVar16,0x112db3ce0,&UNK_10d95e240);
    lVar10 = lVar16;
    (*pcVar24)(lVar16,1,lStack_1ea0);
    lVar5 = lStack_1ec8;
    if ((int)lVar10 == 1) {
      func_0x0001034a9098(lVar16,0x112db3ce0,&UNK_10d95e240);
    }
    else {
      func_0x0001034a9054(lVar16,lStack_1ec8);
      lVar16 = *(long *)(lVar5 + 0x40);
      if (2 < lVar16 - 1U) {
        lVar16 = 0;
      }
      FUN_10357f244(lVar16,1);
      uVar22 = *(ulong *)(lVar5 + 0x90);
      if (1 < uVar22) {
        puVar14 = &UNK_1107974f0;
        puVar15 = PTR___sSiN_11034deb0;
        uStack_1860 = uVar22;
LAB_1034a9044:
        func_0x000107c60614(puVar14,&uStack_1860,puVar14,puVar15);
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1034a9054);
        (*pcVar24)();
      }
      FUN_10357f0e4(uVar22,1);
      func_0x0001034a90d8(lVar5,&SUB_104739264);
    }
    func_0x0001000d224c(&uStack_1860);
    uVar22 = uStack_1860;
    uVar13 = uStack_1860;
    func_0x000107c4258c();
    func_0x000107c615e8(uVar22);
    if ((int)uVar13 != 0) {
      FUN_1034b0e1c(auStack_1250,auStack_1048);
      FUN_10357f170(auStack_1250);
    }
    func_0x0001034a9098(lVar23,0x112db3ce0,&UNK_10d95e240);
    func_0x00010006c090(uStack_1ef0,uStack_1ee8);
    func_0x000107c61574(uStack_1ee0);
  }
  else {
    func_0x00010006c090(lVar5,puVar14);
LAB_1034a83ec:
    func_0x000107c61574(uVar20);
  }
  return;
}



/* Entry: 1034a9054; end: 1034a915b;  */

undefined8 FUN_1034a9054(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000104739264();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1034a915c; end: 1034a9503;  */

void FUN_1034a915c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x21;
  double dVar5;
  undefined8 uVar6;
  undefined1 auStack_4a0 [208];
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  ulong uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  ulong uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  ulong uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulong uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
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
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  func_0x000103515720(&uStack_158);
  uStack_188 = uStack_b0;
  uStack_190 = uStack_b8;
  uStack_178 = uStack_a0;
  uStack_180 = uStack_a8;
  uStack_168 = uStack_90;
  uStack_170 = uStack_98;
  uStack_1c8 = uStack_f0;
  uStack_1d0 = uStack_f8;
  uStack_1b8 = uStack_e0;
  uStack_1c0 = uStack_e8;
  uStack_1a8 = uStack_d0;
  uStack_1b0 = uStack_d8;
  uStack_198 = uStack_c0;
  uStack_1a0 = uStack_c8;
  uStack_208 = uStack_130;
  uStack_210 = uStack_138;
  uStack_1f8 = uStack_120;
  uStack_200 = uStack_128;
  uStack_1e8 = uStack_110;
  uStack_1f0 = uStack_118;
  uStack_1d8 = uStack_100;
  uStack_1e0 = uStack_108;
  uStack_228 = uStack_150;
  uStack_230 = uStack_158;
  uStack_218 = uStack_140;
  lStack_220 = lStack_148;
  dVar5 = *(double *)(param_2 + 0x58);
  func_0x000100d54874(uStack_130,uStack_128,uStack_120);
  uStack_1f8 = 0xc000000000000000;
  uStack_200 = 0;
  uVar4 = (ulong)(uint)(float)((double)*(long *)(param_2 + 0x48) / 1000.0);
  uStack_208 = (ulong)(uint)(float)(dVar5 / 1000.0);
  func_0x000100d54874(uStack_1f0,uStack_1e8,uStack_1e0);
  uStack_1e0 = 0xc000000000000000;
  uStack_1e8 = 0;
  uVar3 = *(ulong *)(param_2 + 0x10);
  uStack_1f0 = uVar4;
  if ((long)uVar3 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034a94e8);
    (*pcVar1)();
  }
  if (0x7fffffff < (long)uVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034a94ec);
    (*pcVar1)();
  }
  uVar3 = uVar3 & 0xffffffff;
  func_0x000100d54874(uStack_1d8,uStack_1d0,uStack_1c8);
  uStack_1c8 = 0xc000000000000000;
  uStack_1d0 = 0;
  uVar4 = *(ulong *)(param_2 + 0x40);
  uStack_1d8 = uVar3;
  if ((long)uVar4 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034a94f0);
    (*pcVar1)();
  }
  if ((long)uVar4 < 0x80000000) {
    func_0x000100d54874(uStack_1c0,uStack_1b8,uStack_1b0);
    uStack_1b0 = 0xc000000000000000;
    uStack_1b8 = 0;
    lVar2 = *(long *)(param_2 + 0x28);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uStack_1c0 = uVar4 & 0xffffffff;
    uStack_80 = uVar6;
    lStack_78 = lVar2;
    if (lVar2 != 0) {
      func_0x0001034aa288(&uStack_80,&uStack_300,0x112d35ff8,&UNK_10d900cd0);
      FUN_1034cc324();
      uStack_228 = CONCAT71(uStack_228._1_7_,(char)lVar2);
      uStack_230 = uVar6;
    }
    uVar3 = *(ulong *)(param_2 + 0x38);
    if ((long)uVar3 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034a94f8);
      (*pcVar1)();
    }
    if (0x7fffffff < (long)uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034a94fc);
      (*pcVar1)();
    }
    uVar3 = uVar3 & 0xffffffff;
    func_0x000100d54874(uStack_1a8,uStack_1a0,uStack_198);
    uStack_198 = 0xc000000000000000;
    uStack_1a0 = 0;
    uVar4 = *(ulong *)(param_2 + 0x30);
    uStack_1a8 = uVar3;
    if (-0x80000001 < (long)uVar4) {
      if (0x7fffffff < (long)uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1034a9504);
        (*pcVar1)();
      }
      func_0x000100d54874(uStack_190,uStack_188,uStack_180);
      uStack_180 = 0xc000000000000000;
      uStack_188 = 0;
      uVar3 = (ulong)*(byte *)(param_2 + 0x18) & 1;
      uStack_190 = uVar4 & 0xffffffff;
      func_0x000101556278(uStack_178,uStack_170,uStack_168);
      uStack_168 = 0xc000000000000000;
      uStack_170 = 0;
      lVar2 = *(long *)(param_2 + 0x60);
      uStack_178 = uVar3;
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
        FUN_1034a9574(lVar2,param_3,param_4);
        if (unaff_x21 != 0) {
          func_0x0001034a9540(&uStack_230);
          return;
        }
        lStack_88 = lStack_148;
        func_0x0001034aa2d0(&lStack_88,0x112f730e8,&UNK_10dbce2f0);
        lStack_220 = lVar2;
      }
      uStack_328 = uStack_188;
      uStack_330 = uStack_190;
      uStack_318 = uStack_178;
      uStack_320 = uStack_180;
      uStack_308 = uStack_168;
      uStack_310 = uStack_170;
      uStack_368 = uStack_1c8;
      uStack_370 = uStack_1d0;
      uStack_358 = uStack_1b8;
      uStack_360 = uStack_1c0;
      uStack_348 = uStack_1a8;
      uStack_350 = uStack_1b0;
      uStack_338 = uStack_198;
      uStack_340 = uStack_1a0;
      uStack_3a8 = uStack_208;
      uStack_3b0 = uStack_210;
      uStack_398 = uStack_1f8;
      uStack_3a0 = uStack_200;
      uStack_388 = uStack_1e8;
      uStack_390 = uStack_1f0;
      uStack_378 = uStack_1d8;
      uStack_380 = uStack_1e0;
      uStack_3c8 = uStack_228;
      uStack_3d0 = uStack_230;
      uStack_3b8 = uStack_218;
      lStack_3c0 = lStack_220;
      uStack_258 = uStack_188;
      uStack_260 = uStack_190;
      uStack_248 = uStack_178;
      uStack_250 = uStack_180;
      uStack_238 = uStack_168;
      uStack_240 = uStack_170;
      uStack_298 = uStack_1c8;
      uStack_2a0 = uStack_1d0;
      uStack_288 = uStack_1b8;
      uStack_290 = uStack_1c0;
      uStack_278 = uStack_1a8;
      uStack_280 = uStack_1b0;
      uStack_268 = uStack_198;
      uStack_270 = uStack_1a0;
      uStack_2d8 = uStack_208;
      uStack_2e0 = uStack_210;
      uStack_2c8 = uStack_1f8;
      uStack_2d0 = uStack_200;
      uStack_2b8 = uStack_1e8;
      uStack_2c0 = uStack_1f0;
      uStack_2a8 = uStack_1d8;
      uStack_2b0 = uStack_1e0;
      uStack_2f8 = uStack_228;
      uStack_300 = uStack_230;
      uStack_2e8 = uStack_218;
      lStack_2f0 = lStack_220;
      func_0x0001034a9504(&uStack_3d0,auStack_4a0);
      func_0x0001034a9540(&uStack_300);
      param_1[0x15] = uStack_328;
      param_1[0x14] = uStack_330;
      param_1[0x17] = uStack_318;
      param_1[0x16] = uStack_320;
      param_1[0x19] = uStack_308;
      param_1[0x18] = uStack_310;
      param_1[0xd] = uStack_368;
      param_1[0xc] = uStack_370;
      param_1[0xf] = uStack_358;
      param_1[0xe] = uStack_360;
      param_1[0x11] = uStack_348;
      param_1[0x10] = uStack_350;
      param_1[0x13] = uStack_338;
      param_1[0x12] = uStack_340;
      param_1[5] = uStack_3a8;
      param_1[4] = uStack_3b0;
      param_1[7] = uStack_398;
      param_1[6] = uStack_3a0;
      param_1[9] = uStack_388;
      param_1[8] = uStack_390;
      param_1[0xb] = uStack_378;
      param_1[10] = uStack_380;
      param_1[1] = uStack_3c8;
      *param_1 = uStack_3d0;
      param_1[3] = uStack_3b8;
      param_1[2] = lStack_3c0;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034a9500);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034a94f4);
  (*pcVar1)();
}



/* Entry: 1034a9504; end: 1034a9573;  */

undefined8 FUN_1034a9504(undefined8 param_1,undefined8 param_2)

{
  FUN_103519fd8(param_2,param_1);
  return param_2;
}



/* Entry: 1034a9574; end: 1034aa123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1034a9574(long param_1,long param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long lVar14;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar15;
  ulong uVar16;
  long unaff_x21;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lStack_3160;
  undefined8 *puStack_3158;
  ulong *puStack_3150;
  long lStack_3148;
  ulong uStack_3138;
  ulong uStack_3130;
  ulong uStack_3128;
  long lStack_3120;
  undefined1 auStack_30d0 [16];
  ulong *puStack_30c0;
  ulong *puStack_2fe0;
  long lStack_2fd8;
  long lStack_2fd0;
  ulong uStack_2fc8;
  undefined8 uStack_2fc0;
  undefined8 uStack_2fb8;
  undefined8 uStack_2fb0;
  undefined8 uStack_2fa8;
  undefined8 uStack_2fa0;
  undefined8 uStack_2f98;
  undefined8 uStack_2f90;
  undefined8 uStack_2f88;
  undefined8 uStack_2f80;
  undefined8 uStack_2f78;
  undefined8 uStack_2f70;
  ulong *puStack_2f60;
  long lStack_2f58;
  long lStack_2f50;
  ulong uStack_2f48;
  undefined8 uStack_2f40;
  undefined8 uStack_2f38;
  undefined8 uStack_2f30;
  undefined8 uStack_2f28;
  undefined8 uStack_2f20;
  undefined8 uStack_2f18;
  undefined8 uStack_2f10;
  undefined8 uStack_2f08;
  undefined8 uStack_2f00;
  undefined8 uStack_2ef8;
  undefined8 uStack_2ef0;
  undefined8 uStack_2ee0;
  undefined8 uStack_2ed8;
  undefined8 uStack_2ed0;
  undefined8 uStack_2ec8;
  undefined8 uStack_2ec0;
  undefined8 uStack_2eb8;
  undefined8 uStack_2eb0;
  undefined8 uStack_2ea8;
  undefined8 uStack_2ea0;
  undefined8 uStack_2e98;
  undefined8 uStack_2e90;
  undefined8 uStack_2e88;
  undefined8 uStack_2e80;
  undefined8 uStack_2e78;
  undefined8 uStack_2e70;
  ulong uStack_2e60;
  undefined8 uStack_2e58;
  undefined8 uStack_2e50;
  undefined *puStack_2e48;
  undefined **ppuStack_2e40;
  undefined8 uStack_2e38;
  ulong uStack_2e30;
  undefined8 uStack_2e28;
  undefined8 uStack_2e20;
  ulong uStack_2e18;
  undefined8 uStack_2e10;
  undefined8 uStack_2e08;
  ulong uStack_2e00;
  undefined8 uStack_2df8;
  undefined8 uStack_2df0;
  ulong *puStack_2de8;
  long lStack_2de0;
  long lStack_2dd8;
  ulong uStack_2dd0;
  undefined8 uStack_2dc8;
  undefined8 uStack_2dc0;
  undefined8 uStack_2db8;
  undefined8 uStack_2db0;
  undefined8 uStack_2da8;
  undefined8 uStack_2da0;
  undefined8 uStack_2d98;
  undefined8 uStack_2d90;
  undefined8 uStack_2d88;
  undefined8 uStack_2d80;
  undefined8 uStack_2d78;
  ulong *puStack_2d70;
  long lStack_2d68;
  long lStack_2d60;
  ulong uStack_2d58;
  undefined8 uStack_2d50;
  undefined8 uStack_2d48;
  undefined8 uStack_2d40;
  undefined8 uStack_2d38;
  undefined8 uStack_2d30;
  undefined8 uStack_2d28;
  undefined8 uStack_2d20;
  undefined8 uStack_2d18;
  undefined1 uStack_2d10;
  undefined7 uStack_2d0f;
  undefined8 uStack_2d08;
  undefined8 uStack_2d00;
  ulong uStack_2cf0;
  undefined1 uStack_2ce8;
  undefined7 uStack_2ce7;
  undefined8 uStack_2ce0;
  undefined1 uStack_2cd8;
  undefined7 uStack_2cd7;
  undefined **ppuStack_2cd0;
  undefined8 uStack_2cc8;
  ulong uStack_2cc0;
  undefined8 uStack_2cb8;
  undefined8 uStack_2cb0;
  ulong uStack_2ca8;
  undefined8 uStack_2ca0;
  undefined8 uStack_2c98;
  ulong uStack_2c90;
  undefined8 uStack_2c88;
  undefined8 uStack_2c80;
  ulong *puStack_2c78;
  long lStack_2c70;
  long lStack_2c68;
  ulong uStack_2c60;
  undefined8 uStack_2c58;
  undefined8 uStack_2c50;
  undefined8 uStack_2c48;
  undefined8 uStack_2c40;
  undefined8 uStack_2c38;
  undefined8 uStack_2c30;
  undefined8 uStack_2c28;
  undefined8 uStack_2c20;
  undefined8 uStack_2c18;
  undefined8 uStack_2c10;
  undefined8 uStack_2c08;
  ulong *puStack_2238;
  long lStack_2230;
  long lStack_2228;
  ulong uStack_2220;
  undefined8 uStack_2218;
  undefined8 uStack_2210;
  undefined8 uStack_2208;
  undefined8 uStack_2200;
  undefined8 uStack_21f8;
  undefined8 uStack_21f0;
  undefined8 uStack_21e8;
  undefined8 uStack_21e0;
  ulong auStack_21d8 [343];
  undefined1 auStack_1720 [1448];
  undefined1 auStack_1178 [104];
  ulong uStack_1110;
  long lStack_1108;
  undefined1 auStack_bd0 [88];
  ulong uStack_b78;
  undefined1 auStack_628 [16];
  ulong uStack_618;
  ulong uStack_80;
  long lStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0x112db3a00;
  puStack_3158 = param_3;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112dcbf08;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = ((long)&lStack_3160 - extraout_x8) - extraout_x8_00;
  lVar3 = 0x112dcbcf8;
  lStack_3160 = lVar13;
  func_0x0001000285a8(0x112dcbcf8,&UNK_10d98e3f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  lVar3 = 0;
  func_0x000100b91d00();
  lVar3 = param_2 + *(int *)(lVar3 + 0x88);
  uVar15 = *(undefined8 *)(lVar3 + 0x90);
  uVar17 = *(undefined8 *)(lVar3 + 0x98);
  func_0x000101682c20();
  uVar20 = 0;
  uVar21 = 0;
  if ((int)lVar3 != 1) {
    func_0x000107c61434(uVar17);
    uVar20 = uVar15;
    uVar21 = uVar17;
  }
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f73260);
  lVar4 = 0;
  func_0x0001034b716c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar20;
  *(undefined8 *)(lVar4 + 0x18) = uVar21;
  uVar20 = *puStack_3158;
  uVar22 = puStack_3158[3];
  uVar21 = puStack_3158[2];
  *(undefined8 *)(lVar4 + 0x28) = puStack_3158[1];
  *(undefined8 *)(lVar4 + 0x20) = uVar20;
  *(undefined8 *)(lVar4 + 0x38) = uVar22;
  *(undefined8 *)(lVar4 + 0x30) = uVar21;
  *(undefined1 *)(lVar4 + 0x40) = *(undefined1 *)(puStack_3158 + 4);
  *(undefined8 *)(lVar4 + 0x48) = uVar15;
  *(undefined8 *)(lVar4 + 0x50) = uVar18;
  *(undefined8 *)(lVar4 + 0x58) = uVar17;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    func_0x000107c6157c(uVar15);
    func_0x000107c6157c(uVar18);
    func_0x000107c6157c(uVar17);
    func_0x000107c61574(lVar4);
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  lStack_3120 = (long)&lStack_3160 - extraout_x8;
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar18);
  func_0x000107c6157c(uVar17);
  param_1 = param_1 + 0x28;
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    lVar3 = lVar3 + -1;
    func_0x000107c610b4(auStack_21d8,param_1 + -8,0xab2);
    func_0x000107c610b4(auStack_1720,param_1,0x5a8);
    func_0x000107c610b4(auStack_628,param_1,0x5a8);
    iVar2 = (int)auStack_628;
    func_0x00010189c838();
    uVar19 = 0;
    if (iVar2 != 1) {
      uVar19 = uStack_618;
    }
    func_0x000101795250(auStack_21d8,&uStack_2cf0);
    func_0x000103bfc9d0(lVar14,uVar19);
    uStack_2cf0 = 0;
    uStack_2ce8 = 1;
    uStack_2cc8 = 0xc000000000000000;
    ppuStack_2cd0 = (undefined **)0x0;
    uStack_2cc0 = 0;
    uStack_2cb8 = 0;
    uStack_2ca8 = 0;
    uStack_2ca0 = 0;
    uStack_2cb0 = 0xf000000000000000;
    uStack_2c98 = 0xf000000000000000;
    uStack_2c90 = 0;
    uStack_2c88 = 0;
    lStack_2c70 = 0;
    puStack_2c78 = (ulong *)0x0;
    uStack_2c60 = 0;
    lStack_2c68 = 0;
    uStack_2c50 = 0;
    uStack_2c58 = 0;
    uStack_2c40 = 0;
    uStack_2c48 = 0;
    uStack_2c30 = 0;
    uStack_2c38 = 0;
    uStack_2c20 = 0;
    uStack_2c28 = 0;
    uStack_2c10 = 0;
    uStack_2c18 = 0;
    uStack_2c80 = 0xf000000000000000;
    uStack_2c08 = 0xf000000000000000;
    if ((long)uVar19 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034aa0ec);
      (*pcVar1)();
    }
    if (0x7fffffff < (long)uVar19) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034aa0f0);
      (*pcVar1)();
    }
    func_0x000100d54874(0,0,0xf000000000000000);
    uStack_2cb0 = 0xc000000000000000;
    uStack_2cb8 = 0;
    uStack_2cc0 = uVar19 & 0xffffffff;
    func_0x000107c610b4(auStack_bd0,auStack_1720,0x5a8);
    iVar2 = (int)auStack_bd0;
    func_0x00010189c838();
    uVar19 = 0;
    if (iVar2 != 1) {
      uVar19 = uStack_b78;
    }
    if ((long)uVar19 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034aa0f4);
      (*pcVar1)();
    }
    if (0x7fffffff < (long)uVar19) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034aa0f8);
      (*pcVar1)();
    }
    func_0x000100d54874(uStack_2ca8,uStack_2ca0,uStack_2c98);
    uStack_2c98 = 0xc000000000000000;
    uStack_2ca0 = 0;
    uStack_2ca8 = uVar19 & 0xffffffff;
    func_0x000107c610b4(auStack_1178,auStack_1720,0x5a8);
    iVar2 = (int)auStack_1178;
    func_0x00010189c838();
    lVar8 = lStack_1108;
    uVar19 = uStack_1110;
    if (iVar2 != 1) {
      lStack_78 = lStack_1108;
      uStack_80 = uStack_1110;
      if (lStack_1108 != 0) {
        func_0x0001034aa288(&uStack_80,&uStack_2e60,0x112d35ff8,&UNK_10d900cd0);
        FUN_1034cc324();
        uStack_2ce8 = (undefined1)lVar8;
        uStack_2cf0 = uVar19;
      }
    }
    uVar19 = auStack_21d8[0];
    if (0x17 < auStack_21d8[0]) {
      uStack_2e60 = auStack_21d8[0];
      func_0x000107c60614(&UNK_110798820,&uStack_2e60,&UNK_110798820,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034aa124);
      (*pcVar1)();
    }
    uStack_2ce0 = *(undefined8 *)(&UNK_10dbce308 + auStack_21d8[0] * 8);
    uStack_2cd8 = 1;
    func_0x0001034aa288(lVar14,lVar13,0x112dcbcf8,&UNK_10d98e3f0);
    lVar5 = 0;
    func_0x0001046d90b0();
    lVar6 = lVar13;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar13,1,lVar5);
    lVar8 = lStack_3120;
    if ((int)lVar6 == 1) {
      func_0x0001034aa2d0(lVar13,0x112dcbcf8,&UNK_10d98e3f0);
      uVar16 = 0;
    }
    else {
      func_0x0001034aa288(lVar13 + *(int *)(lVar5 + 0x28),lStack_3120,0x112db3a00,&UNK_10d95dff0);
      func_0x0001034aa310(lVar13,&SUB_1046d90b0);
      lVar7 = 0;
      func_0x00010477ea9c();
      lVar5 = lVar8;
      (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar8,1,lVar7);
      lVar6 = lStack_3160;
      if ((int)lVar5 == 1) {
        func_0x0001034aa2d0(lVar8,0x112db3a00,&UNK_10d95dff0);
        uVar16 = 0;
      }
      else {
        func_0x0001034aa288(lVar8 + *(int *)(lVar7 + 0x14),lStack_3160,0x112dcbf08,&UNK_10d98e580);
        func_0x0001034aa310(lVar8,&SUB_10477ea9c);
        lVar5 = 0;
        func_0x000104760f24();
        lVar8 = lVar6;
        (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar6,1,lVar5);
        if ((int)lVar8 == 1) {
          func_0x0001034aa2d0(lVar6,0x112dcbf08,&UNK_10d98e580);
          uVar16 = 0;
        }
        else {
          uVar16 = *(ulong *)(lVar6 + *(int *)(lVar5 + 0x48));
          func_0x0001034aa310(lVar6,&SUB_104760f24);
          if ((long)uVar16 < -0x80000000) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1034aa0fc);
            (*pcVar1)();
          }
          if (0x7fffffff < (long)uVar16) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1034aa100);
            (*pcVar1)();
          }
        }
      }
    }
    uVar16 = uVar16 & 0xffffffff;
    func_0x000100d54874(uStack_2c90,uStack_2c88,uStack_2c80);
    uStack_2c80 = 0xc000000000000000;
    uStack_2c88 = 0;
    uStack_2d18 = 0;
    uStack_2d20 = 0;
    uStack_2d28 = 0;
    uStack_2d30 = 0;
    uStack_2d38 = 0;
    uStack_2d40 = 0;
    uStack_2d48 = 0;
    uStack_2d50 = 0;
    lStack_2d68 = 0;
    puStack_2d70 = (ulong *)0x0;
    uStack_2d58 = 0;
    lStack_2d60 = 0;
    uStack_2d10 = 1;
    uStack_2d00 = 0xc000000000000000;
    uStack_2d08 = 0;
    uStack_2c90 = uVar16;
    if ((long)uVar19 < 6) {
      if (uVar19 == 1) {
        puVar9 = auStack_21d8;
        lVar8 = param_2;
        lVar6 = lVar4;
        FUN_1034a378c(0);
        if (unaff_x21 != 0) {
LAB_1034aa080:
          func_0x000107c61574(lVar4);
          func_0x00010179528c(auStack_21d8);
          func_0x0001034aa2d0(lVar14,0x112dcbcf8,&UNK_10d98e3f0);
          func_0x0001034aa220(&puStack_2d70);
          func_0x0001034aa254(&uStack_2cf0);
          func_0x000107c6142c(puVar12);
          return puVar12;
        }
        uVar19 = uStack_3128 & 0xcfffffffffffffff | 0x1000000000000000;
        func_0x0001034aa2d0(&puStack_2d70,0x112f730f8,&UNK_10dbce300);
        uStack_3128 = uVar19;
        puStack_2d70 = puVar9;
        lStack_2d68 = lVar8;
        lStack_2d60 = lVar6;
      }
      else {
        if (uVar19 != 3) {
LAB_1034a9cd4:
          puStack_2e48 = &UNK_11065d188;
          ppuStack_2e40 = &PTR_DAT_11065d0f0;
          uStack_2e60 = CONCAT71(uStack_2e60._1_7_,10);
          puStack_30c0 = auStack_21d8;
          func_0x0001034e2644(&uStack_2e60,FUN_1034aa1a0,auStack_30d0,
                              *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),0);
          func_0x0001000834e4(&uStack_2e60);
          goto LAB_1034a9df8;
        }
        puVar9 = auStack_21d8;
        lVar8 = param_2;
        lVar6 = lVar4;
        FUN_1034ad694(0);
        if (unaff_x21 != 0) goto LAB_1034aa080;
        uVar19 = uStack_3138 & 0xcfffffffffffffff | 0x2000000000000000;
        func_0x0001034aa2d0(&puStack_2d70,0x112f730f8,&UNK_10dbce300);
        uStack_3138 = uVar19;
        puStack_2d70 = puVar9;
        lStack_2d68 = lVar8;
        lStack_2d60 = lVar6;
      }
LAB_1034a9de8:
      uStack_2d10 = 0;
      uStack_2d58 = uVar19;
    }
    else {
      if (uVar19 == 6) {
        puVar9 = auStack_21d8;
        lVar8 = param_2;
        lVar6 = lVar4;
        FUN_1034a81d0(0);
        if (unaff_x21 != 0) goto LAB_1034aa080;
        uVar19 = uStack_3130 | 0x3000000000000000;
        func_0x0001034aa2d0(&puStack_2d70,0x112f730f8,&UNK_10dbce300);
        uStack_3130 = uVar19;
        puStack_2d70 = puVar9;
        lStack_2d68 = lVar8;
        lStack_2d60 = lVar6;
        goto LAB_1034a9de8;
      }
      if (uVar19 != 10) goto LAB_1034a9cd4;
      FUN_1034a3dfc(&puStack_2238,0,auStack_21d8,param_2,puStack_3158);
      lVar8 = lStack_2228;
      if (unaff_x21 != 0) goto LAB_1034aa080;
      lStack_3148 = lStack_2230;
      puStack_3150 = puStack_2238;
      uVar19 = uStack_2220 & 0xcfffffffffffffff;
      func_0x0001034aa2d0(&puStack_2d70,0x112f730f8,&UNK_10dbce300);
      lStack_2d68 = lStack_3148;
      puStack_2d70 = puStack_3150;
      lStack_2d60 = lVar8;
      uStack_2d38 = uStack_2200;
      uStack_2d40 = uStack_2208;
      uStack_2d48 = uStack_2210;
      uStack_2d50 = uStack_2218;
      uStack_2d18 = uStack_21e0;
      uStack_2d20 = uStack_21e8;
      uStack_2d28 = uStack_21f0;
      uStack_2d30 = uStack_21f8;
      uStack_2d10 = 0;
      uStack_2d58 = uVar19;
    }
LAB_1034a9df8:
    uStack_2f98 = uStack_2d28;
    uStack_2fa0 = uStack_2d30;
    uStack_2f88 = uStack_2d18;
    uStack_2f90 = uStack_2d20;
    uStack_2f80 = CONCAT71(uStack_2d0f,uStack_2d10);
    uStack_2f00 = CONCAT71(uStack_2d0f,uStack_2d10);
    uStack_2f78 = uStack_2d08;
    lStack_2fd8 = lStack_2d68;
    puStack_2fe0 = puStack_2d70;
    uStack_2fc8 = uStack_2d58;
    lStack_2fd0 = lStack_2d60;
    uStack_2fb8 = uStack_2d48;
    uStack_2fc0 = uStack_2d50;
    uStack_2fa8 = uStack_2d38;
    uStack_2fb0 = uStack_2d40;
    uStack_2f38 = uStack_2d48;
    uStack_2f40 = uStack_2d50;
    uStack_2f28 = uStack_2d38;
    uStack_2f30 = uStack_2d40;
    uStack_2f70 = uStack_2d00;
    lStack_2f58 = lStack_2d68;
    puStack_2f60 = puStack_2d70;
    uStack_2f48 = uStack_2d58;
    lStack_2f50 = lStack_2d60;
    uStack_2ef0 = uStack_2d00;
    uStack_2f08 = uStack_2d18;
    uStack_2f10 = uStack_2d20;
    uStack_2ef8 = uStack_2d08;
    uStack_2f18 = uStack_2d28;
    uStack_2f20 = uStack_2d30;
    uStack_2eb8 = uStack_2c50;
    uStack_2ec0 = uStack_2c58;
    uStack_2ea8 = uStack_2c40;
    uStack_2eb0 = uStack_2c48;
    uStack_2ed8 = lStack_2c70;
    uStack_2ee0 = puStack_2c78;
    uStack_2ec8 = uStack_2c60;
    uStack_2ed0 = lStack_2c68;
    uStack_2e70 = uStack_2c08;
    uStack_2e88 = uStack_2c20;
    uStack_2e90 = uStack_2c28;
    uStack_2e78 = uStack_2c10;
    uStack_2e80 = uStack_2c18;
    uStack_2e98 = uStack_2c30;
    uStack_2ea0 = uStack_2c38;
    func_0x0001034aa1a8(&puStack_2fe0,auStack_30d0);
    func_0x0001034aa2d0(&uStack_2ee0,0x112f730f0,&UNK_10dbce2f8);
    uStack_2c40 = uStack_2f28;
    uStack_2c48 = uStack_2f30;
    uStack_2c50 = uStack_2f38;
    uStack_2c58 = uStack_2f40;
    uStack_2c60 = uStack_2f48;
    lStack_2c68 = lStack_2f50;
    lStack_2c70 = lStack_2f58;
    puStack_2c78 = puStack_2f60;
    uStack_2c10 = uStack_2ef8;
    uStack_2c18 = uStack_2f00;
    uStack_2c20 = uStack_2f08;
    uStack_2c28 = uStack_2f10;
    uStack_2c30 = uStack_2f18;
    uStack_2c38 = uStack_2f20;
    uStack_2c08 = uStack_2ef0;
    uStack_2e58 = CONCAT71(uStack_2ce7,uStack_2ce8);
    puStack_2e48 = (undefined *)CONCAT71(uStack_2cd7,uStack_2cd8);
    uStack_2e60 = uStack_2cf0;
    uStack_2e50 = uStack_2ce0;
    uStack_2e18 = uStack_2ca8;
    uStack_2e20 = uStack_2cb0;
    uStack_2e08 = uStack_2c98;
    uStack_2e10 = uStack_2ca0;
    uStack_2e38 = uStack_2cc8;
    ppuStack_2e40 = ppuStack_2cd0;
    uStack_2e28 = uStack_2cb8;
    uStack_2e30 = uStack_2cc0;
    lStack_2dd8 = lStack_2f50;
    lStack_2de0 = lStack_2f58;
    uStack_2dc8 = uStack_2f40;
    uStack_2dd0 = uStack_2f48;
    uStack_2df8 = uStack_2c88;
    uStack_2e00 = uStack_2c90;
    puStack_2de8 = puStack_2f60;
    uStack_2df0 = uStack_2c80;
    uStack_2d88 = uStack_2f00;
    uStack_2d90 = uStack_2f08;
    uStack_2d78 = uStack_2ef0;
    uStack_2d80 = uStack_2ef8;
    uStack_2da8 = uStack_2f20;
    uStack_2db0 = uStack_2f28;
    uStack_2d98 = uStack_2f10;
    uStack_2da0 = uStack_2f18;
    uStack_2db8 = uStack_2f30;
    uStack_2dc0 = uStack_2f38;
    func_0x0001034aa1e4(&uStack_2e60,auStack_30d0);
    puVar10 = puVar12;
    func_0x000107c61558();
    puVar11 = puVar12;
    if (((ulong)puVar10 & 1) == 0) {
      puVar11 = (undefined *)0x0;
      func_0x0001034d8a80(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
    }
    uVar19 = *(ulong *)(puVar11 + 0x10);
    puVar12 = puVar11;
    if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar19) {
      puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
      func_0x0001034d8a80(puVar12,uVar19 + 1,1,puVar11);
    }
    *(ulong *)(puVar12 + 0x10) = uVar19 + 1;
    *(undefined **)(puVar12 + uVar19 * 0xf0 + 0x38) = puStack_2e48;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0x30) = uStack_2e50;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0x48) = uStack_2e38;
    *(undefined ***)(puVar12 + uVar19 * 0xf0 + 0x40) = ppuStack_2e40;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0x28) = uStack_2e58;
    *(ulong *)(puVar12 + uVar19 * 0xf0 + 0x20) = uStack_2e60;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0x78) = uStack_2e08;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0x70) = uStack_2e10;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0x88) = uStack_2df8;
    *(ulong *)(puVar12 + uVar19 * 0xf0 + 0x80) = uStack_2e00;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0x58) = uStack_2e28;
    *(ulong *)(puVar12 + uVar19 * 0xf0 + 0x50) = uStack_2e30;
    *(ulong *)(puVar12 + uVar19 * 0xf0 + 0x68) = uStack_2e18;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0x60) = uStack_2e20;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0xb8) = uStack_2dc8;
    *(ulong *)(puVar12 + uVar19 * 0xf0 + 0xb0) = uStack_2dd0;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 200) = uStack_2db8;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0xc0) = uStack_2dc0;
    *(ulong **)(puVar12 + uVar19 * 0xf0 + 0x98) = puStack_2de8;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0x90) = uStack_2df0;
    *(long *)(puVar12 + uVar19 * 0xf0 + 0xa8) = lStack_2dd8;
    *(long *)(puVar12 + uVar19 * 0xf0 + 0xa0) = lStack_2de0;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0xf8) = uStack_2d88;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0xf0) = uStack_2d90;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0x108) = uStack_2d78;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0x100) = uStack_2d80;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0xd8) = uStack_2da8;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0xd0) = uStack_2db0;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0xe8) = uStack_2d98;
    *(undefined8 *)(puVar12 + uVar19 * 0xf0 + 0xe0) = uStack_2da0;
    func_0x00010179528c(auStack_21d8);
    func_0x0001034aa2d0(lVar14,0x112dcbcf8,&UNK_10d98e3f0);
    func_0x0001034aa220(&puStack_2d70);
    func_0x0001034aa254(&uStack_2cf0);
    if (lVar3 == 0) {
      func_0x000107c61574(lVar4);
      return puVar12;
    }
    param_1 = param_1 + 0xab8;
  } while( true );
}



/* Entry: 1034aa124; end: 1034aa19f;  */

undefined1  [16] FUN_1034aa124(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x000107c602fc(0x27);
  func_0x000107c6142c(0xe000000000000000);
  func_0x0001046b4ddc(*param_1);
  func_0x000107c5fb78();
  func_0x000107c6142c(param_2);
  auVar1._8_8_ = 0x800000010f154190;
  auVar1._0_8_ = 0xd000000000000025;
  return auVar1;
}



/* Entry: 1034aa1a0; end: 1034aa1a7;  */

undefined1  [16] FUN_1034aa1a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000107c602fc(0x27);
  func_0x000107c6142c(0xe000000000000000);
  func_0x0001046b4ddc(*puVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(param_2);
  auVar1._8_8_ = 0x800000010f154190;
  auVar1._0_8_ = 0xd000000000000025;
  return auVar1;
}



/* Entry: 1034aa1a8; end: 1034aa34b;  */

undefined8 FUN_1034aa1a8(undefined8 param_1,undefined8 param_2)

{
  FUN_10351b7e8(param_2,param_1);
  return param_2;
}



/* Entry: 1034aa34c; end: 1034aa7ab;  */

void FUN_1034aa34c(ulong *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_420 [144];
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined1 uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  ulong uStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined4 uStack_ff;
  undefined3 uStack_fb;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
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
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar3 = *param_2;
  uVar14 = param_2[1];
  uVar19 = param_2[2];
  uVar12 = param_2[3];
  uVar4 = param_2[4];
  uVar6 = param_2[5];
  uVar10 = param_2[6];
  uVar7 = param_2[7];
  uVar17 = param_2[8];
  func_0x00010352df78(&uStack_120);
  uStack_1a8 = 0xc000000000000000;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = uStack_e8;
  uStack_180 = uStack_f0;
  if (uVar3 < 8) {
    uStack_1c8 = 1;
    uStack_1d0 = uVar3;
    if (uVar14 < 0xc) {
      uStack_1b8 = 1;
      uStack_1c0 = uVar14;
      if (uVar12 != 0) {
        uVar3 = uVar19 & 0xffffffffffff;
        if ((uVar12 & 0x2000000000000000) != 0) {
          uVar3 = uVar12 >> 0x38 & 0xf;
        }
        if (uVar3 != 0) {
          func_0x000107c61438(uVar12,2);
          func_0x00010006c00c(0,0xc000000000000000);
          func_0x000107c6142c(uVar12);
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000101597ae4(0,0,0,0);
          uStack_188 = 0xc000000000000000;
          uStack_1a0 = uVar19;
          uStack_198 = uVar12;
        }
      }
      uStack_190 = 0;
      uStack_248 = uStack_1a8;
      uStack_250 = uStack_1b0;
      uStack_238 = uStack_198;
      uStack_240 = uStack_1a0;
      uStack_228 = uStack_188;
      uStack_230 = 0;
      uStack_268 = CONCAT71(uStack_1c7,uStack_1c8);
      uStack_258 = CONCAT71(uStack_1b7,uStack_1b8);
      uStack_270 = uStack_1d0;
      uStack_260 = uStack_1c0;
      uStack_148 = uStack_1a8;
      uStack_150 = uStack_1b0;
      uStack_138 = uStack_198;
      uStack_140 = uStack_1a0;
      uStack_128 = uStack_188;
      uStack_130 = 0;
      uStack_170 = uStack_1d0;
      uStack_160 = uStack_1c0;
      uStack_1e8 = uStack_a8;
      uStack_1f0 = uStack_b0;
      uStack_1d8 = uStack_98;
      uStack_1e0 = uStack_a0;
      uStack_208 = uStack_c8;
      uStack_210 = uStack_d0;
      uStack_1f8 = uStack_b8;
      uStack_200 = uStack_c0;
      uStack_218 = uStack_d8;
      uStack_220 = uStack_e0;
      uStack_168 = uStack_268;
      uStack_158 = uStack_258;
      func_0x0001015544d8(&uStack_270,&uStack_300);
      func_0x0001034ab13c(&uStack_220,0x112db3ea0,&UNK_10d95e3f0);
      uStack_78 = uStack_118;
      uStack_80 = uStack_120;
      func_0x000107c61434(uVar6);
      func_0x000100bcb1dc(&uStack_80);
      uVar3 = uStack_110;
      if (uVar10 != 0) {
        uStack_88 = uStack_110;
        func_0x000107c61434(uVar10);
        func_0x0001034ab13c(&uStack_88,0x112d550a0,&UNK_10d91c290);
        uVar3 = uVar10;
      }
      if (uVar7 < 5) {
        if (uVar17 == 0) {
          func_0x0001015544a4(&uStack_1d0);
LAB_1034aa67c:
          uStack_388 = 0xe000000000000000;
          if (uVar6 != 0) {
            uStack_388 = uVar6;
          }
          uStack_390 = 0;
          if (uVar6 != 0) {
            uStack_390 = uVar4;
          }
          uStack_36c = CONCAT31(uStack_fb,uStack_ff._3_1_);
          uStack_370 = CONCAT31((int3)uStack_ff,1);
          uStack_338 = uStack_158;
          uStack_340 = uStack_160;
          uStack_328 = uStack_148;
          uStack_330 = uStack_150;
          uStack_318 = uStack_138;
          uStack_320 = uStack_140;
          uStack_308 = uStack_128;
          uStack_310 = uStack_130;
          uStack_358 = uStack_178;
          uStack_360 = uStack_180;
          uStack_348 = uStack_168;
          uStack_350 = uStack_170;
          param_1[0xd] = uStack_148;
          param_1[0xc] = uStack_150;
          param_1[0xf] = uStack_138;
          param_1[0xe] = uStack_140;
          param_1[0x11] = uStack_128;
          param_1[0x10] = uStack_130;
          param_1[5] = uStack_f8;
          param_1[4] = CONCAT44(uStack_36c,uStack_370);
          param_1[7] = uStack_178;
          param_1[6] = uStack_180;
          param_1[9] = uStack_168;
          param_1[8] = uStack_170;
          param_1[0xb] = uStack_158;
          param_1[10] = uStack_160;
          param_1[1] = uStack_388;
          *param_1 = uStack_390;
          param_1[3] = uVar7;
          param_1[2] = uVar3;
          uStack_2a8 = uStack_158;
          uStack_2b0 = uStack_160;
          uStack_298 = uStack_148;
          uStack_2a0 = uStack_150;
          uStack_288 = uStack_138;
          uStack_290 = uStack_140;
          uStack_278 = uStack_128;
          uStack_280 = uStack_130;
          uStack_2e0 = 1;
          uStack_2c8 = uStack_178;
          uStack_2d0 = uStack_180;
          uStack_2b8 = uStack_168;
          uStack_2c0 = uStack_170;
          uStack_380 = uVar3;
          uStack_378 = uVar7;
          uStack_368 = uStack_f8;
          uStack_300 = uStack_390;
          uStack_2f8 = uStack_388;
          uStack_2f0 = uVar3;
          uStack_2e8 = uVar7;
          uStack_2d8 = uStack_f8;
          func_0x0001034ab0cc(&uStack_390,auStack_420);
          func_0x0001034ab108(&uStack_300);
          return;
        }
        func_0x0001000285a8(0x112f73108,&UNK_10dbce3c8);
        uVar10 = uVar17;
        func_0x000107c6048c();
        lVar18 = 0;
        uVar14 = 1L << ((ulong)*(byte *)(uVar17 + 0x20) & 0x3f);
        uVar19 = 0xffffffffffffffff;
        if ((*(byte *)(uVar17 + 0x20) & 0x3f) < 6) {
          uVar19 = ~(-1L << (uVar14 & 0x3f));
        }
        uVar19 = uVar19 & *(ulong *)(uVar17 + 0x40);
        if (uVar19 == 0) goto LAB_1034aa584;
        do {
          uVar12 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
          uVar19 = uVar19 - 1 & uVar19;
          while( true ) {
            uVar12 = LZCOUNT(uVar12);
            uVar13 = uVar12 | lVar18 << 6;
            lVar15 = uVar13 * 0x10;
            lVar16 = *(long *)(*(long *)(uVar17 + 0x38) + uVar13 * 8);
            puVar1 = (undefined8 *)(*(long *)(uVar17 + 0x30) + lVar15);
            uVar5 = *puVar1;
            uVar8 = puVar1[1];
            if (3 < lVar16 - 1U) {
              lVar16 = 0;
            }
            uVar13 = (uVar12 & 0xffffffffffffffc0 | lVar18 << 6) >> 3;
            *(ulong *)(uVar10 + 0x40 + uVar13) =
                 *(ulong *)(uVar10 + 0x40 + uVar13) | 1L << (uVar12 & 0x3f);
            puVar1 = (undefined8 *)(*(long *)(uVar10 + 0x30) + lVar15);
            *puVar1 = uVar5;
            puVar1[1] = uVar8;
            plVar2 = (long *)(*(long *)(uVar10 + 0x38) + lVar15);
            *plVar2 = lVar16;
            *(undefined1 *)(plVar2 + 1) = 1;
            if (SCARRY8(*(long *)(uVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1034aa778);
              (*pcVar9)();
            }
            *(long *)(uVar10 + 0x10) = *(long *)(uVar10 + 0x10) + 1;
            func_0x000107c61434();
            if (uVar19 != 0) break;
LAB_1034aa584:
            do {
              lVar16 = lVar18 + 1;
              if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x1034aa774);
                (*pcVar9)();
              }
              if ((long)(uVar14 + 0x3f >> 6) <= lVar16) {
                uStack_90 = uStack_f8;
                func_0x0001015544a4(&uStack_1d0);
                func_0x0001034ab13c(&uStack_90,0x112f73110,&UNK_10dbce3d0);
                uStack_f8 = uVar10;
                goto LAB_1034aa67c;
              }
              uVar19 = ((ulong *)(uVar17 + 0x40))[lVar16];
              lVar18 = lVar18 + 1;
            } while (uVar19 == 0);
            uVar12 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
            uVar19 = uVar19 - 1 & uVar19;
            lVar18 = lVar16;
          }
        } while( true );
      }
      puVar11 = &UNK_1107979d8;
      uStack_300 = uVar7;
    }
    else {
      puVar11 = &UNK_110797bf8;
      uStack_300 = uVar14;
    }
  }
  else {
    puVar11 = &UNK_110797d90;
    uStack_300 = uVar3;
  }
  func_0x000107c60614(puVar11,&uStack_300,puVar11,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1034aa7ac);
  (*pcVar9)();
}



/* Entry: 1034aa7ac; end: 1034aafe7;  */

/* WARNING: Removing unreachable block (ram,0x0001034aae00) */

long * FUN_1034aa7ac(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  code *pcVar24;
  bool bVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  ulong uVar29;
  undefined *puVar30;
  undefined *puVar31;
  ulong uVar32;
  uint uVar33;
  undefined *puVar34;
  ulong uVar35;
  long lVar36;
  undefined8 *puVar37;
  long lVar38;
  long lVar39;
  undefined1 *puVar40;
  undefined *puVar41;
  long lVar42;
  undefined *puVar43;
  ulong uStack_240;
  undefined *puStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_160 [14];
  undefined2 uStack_152;
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
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar26 = param_1;
  FUN_10352e69c();
  puVar41 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar36 = *param_1;
  lVar38 = *(long *)(lVar36 + 0x10);
  plStack_88 = plVar26;
  uStack_80 = param_2;
  uStack_78 = param_3;
  if (lVar38 != 0) {
    func_0x0001034d9248(0,lVar38,0);
    puVar37 = (undefined8 *)(lVar36 + 0x20);
    do {
      uStack_c8 = puVar37[1];
      uStack_d0 = *puVar37;
      uStack_b8 = puVar37[3];
      uStack_c0 = puVar37[2];
      uStack_a8 = puVar37[5];
      uStack_b0 = puVar37[4];
      uStack_98 = puVar37[7];
      uStack_a0 = puVar37[6];
      uStack_90 = puVar37[8];
      uStack_188 = puVar37[5];
      uStack_190 = puVar37[4];
      uStack_178 = puVar37[7];
      uStack_180 = puVar37[6];
      uStack_170 = puVar37[8];
      uStack_198 = puVar37[3];
      uStack_1a0 = puVar37[2];
      uStack_1a8 = puVar37[1];
      puStack_1b0 = (undefined *)*puVar37;
      FUN_1034aafe8(&uStack_d0,auStack_160);
      FUN_1034aa34c(auStack_160,&puStack_1b0);
      func_0x0001034ab024(&puStack_1b0);
      uVar23 = uStack_d8;
      uVar22 = uStack_e0;
      uVar21 = uStack_e8;
      uVar20 = uStack_f0;
      uVar19 = uStack_f8;
      uVar18 = uStack_100;
      uVar17 = uStack_108;
      uVar16 = uStack_110;
      uVar15 = uStack_118;
      uVar14 = uStack_120;
      uVar13 = uStack_128;
      uVar12 = uStack_130;
      uVar11 = uStack_138;
      uVar10 = uStack_140;
      uVar9 = uStack_148;
      uVar5 = uStack_150;
      uVar3 = CONCAT26(uStack_152,
                       CONCAT15(auStack_160[0xd],
                                CONCAT14(auStack_160[0xc],
                                         CONCAT13(auStack_160[0xb],
                                                  CONCAT12(auStack_160[10],
                                                           CONCAT11(auStack_160[9],auStack_160[8])))
                                        )));
      uStack_240 = CONCAT17(auStack_160[7],
                            CONCAT16(auStack_160[6],
                                     CONCAT15(auStack_160[5],
                                              CONCAT14(auStack_160[4],
                                                       CONCAT13(auStack_160[3],
                                                                CONCAT12(auStack_160[2],
                                                                         CONCAT11(auStack_160[1],
                                                                                  auStack_160[0]))))
                                             )));
      uVar29 = *(ulong *)(puVar41 + 0x10);
      if (*(ulong *)(puVar41 + 0x18) >> 1 <= uVar29) {
        func_0x0001034d9248(1 < *(ulong *)(puVar41 + 0x18),uVar29 + 1,1);
      }
      *(ulong *)(puVar41 + 0x10) = uVar29 + 1;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0x28) = uVar3;
      *(ulong *)(puVar41 + uVar29 * 0x90 + 0x20) = uStack_240;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0x58) = uVar13;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0x50) = uVar12;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0x68) = uVar15;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0x60) = uVar14;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0x38) = uVar9;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0x30) = uVar5;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0x48) = uVar11;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0x40) = uVar10;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0x98) = uVar21;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0x90) = uVar20;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0xa8) = uVar23;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0xa0) = uVar22;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0x78) = uVar17;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0x70) = uVar16;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0x88) = uVar19;
      *(undefined8 *)(puVar41 + uVar29 * 0x90 + 0x80) = uVar18;
      puVar37 = puVar37 + 9;
      lVar38 = lVar38 + -1;
    } while (lVar38 != 0);
  }
  func_0x00010352dfec(puVar41);
  lVar38 = param_1[1];
  if (lVar38 != 0) {
    lVar36 = *(long *)(lVar38 + 0x10);
    puVar41 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar36 != 0) {
      puVar40 = (undefined1 *)(lVar38 + 0x30);
      lVar39 = lVar36;
      do {
        uVar29 = *(ulong *)(puVar40 + -0x10);
        uVar4 = *(ulong *)(puVar40 + -8);
        uVar6 = *puVar40;
        plVar26 = plStack_88;
        FUN_10352e080(plStack_88,uStack_80,uStack_78);
        func_0x000107c61438(uVar4,2);
        plVar27 = plVar26;
        func_0x000107c61558();
        auStack_160[0] = SUB81(plVar26,0);
        auStack_160[1] = (undefined1)((ulong)plVar26 >> 8);
        auStack_160[2] = (undefined1)((ulong)plVar26 >> 0x10);
        auStack_160[3] = (undefined1)((ulong)plVar26 >> 0x18);
        auStack_160[4] = (undefined1)((ulong)plVar26 >> 0x20);
        auStack_160[5] = (undefined1)((ulong)plVar26 >> 0x28);
        auStack_160[6] = (undefined1)((ulong)plVar26 >> 0x30);
        auStack_160[7] = (undefined1)((ulong)plVar26 >> 0x38);
        uVar28 = uVar29;
        uVar32 = uVar4;
        func_0x000100029284();
        uVar35 = (ulong)~(uint)uVar32 & 1;
        lVar42 = plVar26[2] + uVar35;
        if (SCARRY8(plVar26[2],uVar35)) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1034aaf4c);
          (*pcVar24)();
        }
        if (plVar26[3] < lVar42) {
          func_0x000101752bb8(lVar42,plVar27);
          uVar28 = uVar29;
          uVar35 = uVar4;
          func_0x000100029284();
          if (((uint)uVar32 & 1) != ((uint)uVar35 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar24 = (code *)SoftwareBreakpoint(1,0x1034aaf84);
            (*pcVar24)();
          }
LAB_1034aaa2c:
          lVar42 = CONCAT17(auStack_160[7],
                            CONCAT16(auStack_160[6],
                                     CONCAT15(auStack_160[5],
                                              CONCAT14(auStack_160[4],
                                                       CONCAT13(auStack_160[3],
                                                                CONCAT12(auStack_160[2],
                                                                         CONCAT11(auStack_160[1],
                                                                                  auStack_160[0]))))
                                             )));
          if ((uVar32 & 1) != 0) goto LAB_1034aa960;
LAB_1034aaa34:
          lVar1 = lVar42 + (uVar28 >> 6) * 8;
          *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar28 & 0x3f);
          puVar2 = (ulong *)(*(long *)(lVar42 + 0x30) + uVar28 * 0x10);
          *puVar2 = uVar29;
          puVar2[1] = uVar4;
          *(undefined1 *)(*(long *)(lVar42 + 0x38) + uVar28) = uVar6;
          if (SCARRY8(*(long *)(lVar42 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar24 = (code *)SoftwareBreakpoint(1,0x1034aaf50);
            (*pcVar24)();
          }
          *(long *)(lVar42 + 0x10) = *(long *)(lVar42 + 0x10) + 1;
        }
        else {
          if (((ulong)plVar27 & 1) != 0) goto LAB_1034aaa2c;
          func_0x000101752a50();
          lVar42 = CONCAT17(auStack_160[7],
                            CONCAT16(auStack_160[6],
                                     CONCAT15(auStack_160[5],
                                              CONCAT14(auStack_160[4],
                                                       CONCAT13(auStack_160[3],
                                                                CONCAT12(auStack_160[2],
                                                                         CONCAT11(auStack_160[1],
                                                                                  auStack_160[0]))))
                                             )));
          if ((uVar32 & 1) == 0) goto LAB_1034aaa34;
LAB_1034aa960:
          *(undefined1 *)(*(long *)(lVar42 + 0x38) + uVar28) = uVar6;
          func_0x000107c6142c(uVar4);
        }
        FUN_10352e0c0(lVar42);
        func_0x000107c6142c(uVar4);
        puVar40 = puVar40 + 0x18;
        lVar39 = lVar39 + -1;
      } while (lVar39 != 0);
      auStack_160[0] = SUB81(PTR___swiftEmptyArrayStorage_11034f1c8,0);
      auStack_160[1] = (undefined1)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 8);
      auStack_160[2] = (undefined1)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x10);
      auStack_160[3] = (undefined1)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x18);
      auStack_160[4] = (undefined1)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x20);
      auStack_160[5] = (undefined1)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x28);
      auStack_160[6] = (undefined1)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x30);
      auStack_160[7] = (undefined1)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x38);
      func_0x0001034d922c(0,lVar36,0);
      puVar41 = (undefined *)
                CONCAT17(auStack_160[7],
                         CONCAT16(auStack_160[6],
                                  CONCAT15(auStack_160[5],
                                           CONCAT14(auStack_160[4],
                                                    CONCAT13(auStack_160[3],
                                                             CONCAT12(auStack_160[2],
                                                                      CONCAT11(auStack_160[1],
                                                                               auStack_160[0])))))))
      ;
      puVar40 = (undefined1 *)(lVar38 + 0x30);
      do {
        uVar3 = *(undefined8 *)(puVar40 + -0x10);
        uVar5 = *(undefined8 *)(puVar40 + -8);
        uVar6 = *puVar40;
        auStack_160[0] = SUB81(puVar41,0);
        auStack_160[1] = (undefined1)((ulong)puVar41 >> 8);
        auStack_160[2] = (undefined1)((ulong)puVar41 >> 0x10);
        auStack_160[3] = (undefined1)((ulong)puVar41 >> 0x18);
        auStack_160[4] = (undefined1)((ulong)puVar41 >> 0x20);
        auStack_160[5] = (undefined1)((ulong)puVar41 >> 0x28);
        auStack_160[6] = (undefined1)((ulong)puVar41 >> 0x30);
        auStack_160[7] = (undefined1)((ulong)puVar41 >> 0x38);
        uVar29 = *(ulong *)(puVar41 + 0x10);
        uVar4 = *(ulong *)(puVar41 + 0x18);
        func_0x000107c61434(uVar5);
        if (uVar4 >> 1 <= uVar29) {
          func_0x0001034d922c(1 < uVar4,uVar29 + 1,1);
          puVar41 = (undefined *)
                    CONCAT17(auStack_160[7],
                             CONCAT16(auStack_160[6],
                                      CONCAT15(auStack_160[5],
                                               CONCAT14(auStack_160[4],
                                                        CONCAT13(auStack_160[3],
                                                                 CONCAT12(auStack_160[2],
                                                                          CONCAT11(auStack_160[1],
                                                                                   auStack_160[0])))
                                                       ))));
        }
        *(ulong *)(puVar41 + 0x10) = uVar29 + 1;
        *(undefined8 *)(puVar41 + uVar29 * 0x28 + 0x20) = uVar3;
        *(undefined8 *)(puVar41 + uVar29 * 0x28 + 0x28) = uVar5;
        puVar41[uVar29 * 0x28 + 0x30] = uVar6;
        *(undefined8 *)(puVar41 + uVar29 * 0x28 + 0x40) = 0xc000000000000000;
        *(undefined8 *)(puVar41 + uVar29 * 0x28 + 0x38) = 0;
        puVar40 = puVar40 + 0x18;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
    }
    FUN_10352e3d8(puVar41);
  }
  bVar7 = *(byte *)(param_1 + 3);
  if (bVar7 != 2) {
    func_0x00010006c00c(0,0xc000000000000000);
    func_0x00010352e1f0(bVar7 & 1,0,0xc000000000000000);
    func_0x00010006c090(0,0xc000000000000000);
  }
  uVar29 = param_1[2];
  if (2 < uVar29) {
    auStack_160[0] = (undefined1)uVar29;
    auStack_160[1] = (undefined1)(uVar29 >> 8);
    auStack_160[2] = (undefined1)(uVar29 >> 0x10);
    auStack_160[3] = (undefined1)(uVar29 >> 0x18);
    auStack_160[4] = (undefined1)(uVar29 >> 0x20);
    auStack_160[5] = (undefined1)(uVar29 >> 0x28);
    auStack_160[6] = (undefined1)(uVar29 >> 0x30);
    auStack_160[7] = (undefined1)(uVar29 >> 0x38);
    puVar41 = &UNK_110797a60;
LAB_1034aafd0:
    func_0x000107c60614(puVar41,auStack_160,puVar41,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar24 = (code *)SoftwareBreakpoint(1,0x1034aafe8);
    (*pcVar24)();
  }
  func_0x00010352e154(uVar29,1);
  uVar29 = param_1[4];
  if (2 < uVar29) {
    auStack_160[0] = (undefined1)uVar29;
    auStack_160[1] = (undefined1)(uVar29 >> 8);
    auStack_160[2] = (undefined1)(uVar29 >> 0x10);
    auStack_160[3] = (undefined1)(uVar29 >> 0x18);
    auStack_160[4] = (undefined1)(uVar29 >> 0x20);
    auStack_160[5] = (undefined1)(uVar29 >> 0x28);
    auStack_160[6] = (undefined1)(uVar29 >> 0x30);
    auStack_160[7] = (undefined1)(uVar29 >> 0x38);
    puVar41 = &UNK_110797c80;
    goto LAB_1034aafd0;
  }
  func_0x00010352e2a0(uVar29,1);
  uVar29 = param_1[5];
  if (2 < uVar29) {
    auStack_160[0] = (undefined1)uVar29;
    auStack_160[1] = (undefined1)(uVar29 >> 8);
    auStack_160[2] = (undefined1)(uVar29 >> 0x10);
    auStack_160[3] = (undefined1)(uVar29 >> 0x18);
    auStack_160[4] = (undefined1)(uVar29 >> 0x20);
    auStack_160[5] = (undefined1)(uVar29 >> 0x28);
    auStack_160[6] = (undefined1)(uVar29 >> 0x30);
    auStack_160[7] = (undefined1)(uVar29 >> 0x38);
    puVar41 = &UNK_110797950;
    goto LAB_1034aafd0;
  }
  func_0x00010352e33c(uVar29,1);
  uVar29 = param_1[8];
  if (5 < uVar29) {
    auStack_160[0] = (undefined1)uVar29;
    auStack_160[1] = (undefined1)(uVar29 >> 8);
    auStack_160[2] = (undefined1)(uVar29 >> 0x10);
    auStack_160[3] = (undefined1)(uVar29 >> 0x18);
    auStack_160[4] = (undefined1)(uVar29 >> 0x20);
    auStack_160[5] = (undefined1)(uVar29 >> 0x28);
    auStack_160[6] = (undefined1)(uVar29 >> 0x30);
    auStack_160[7] = (undefined1)(uVar29 >> 0x38);
    puVar41 = &UNK_110797ae8;
    goto LAB_1034aafd0;
  }
  func_0x00010352e564(uVar29,1);
  uVar29 = param_1[9];
  if (2 < uVar29) {
    auStack_160[0] = (undefined1)uVar29;
    auStack_160[1] = (undefined1)(uVar29 >> 8);
    auStack_160[2] = (undefined1)(uVar29 >> 0x10);
    auStack_160[3] = (undefined1)(uVar29 >> 0x18);
    auStack_160[4] = (undefined1)(uVar29 >> 0x20);
    auStack_160[5] = (undefined1)(uVar29 >> 0x28);
    auStack_160[6] = (undefined1)(uVar29 >> 0x30);
    auStack_160[7] = (undefined1)(uVar29 >> 0x38);
    puVar41 = &UNK_110797d08;
    goto LAB_1034aafd0;
  }
  func_0x00010352e600(uVar29,1);
  uVar29 = param_1[7];
  puVar43 = (undefined *)param_1[6];
  puStack_1b0 = puVar43;
  uStack_1a8 = uVar29;
  if (0xe < uVar29 >> 0x3c) goto LAB_1034aaec8;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_240 = uStack_240 & 0xffffffff00000000;
  uVar8 = (uint)(uVar29 >> 0x20);
  uVar33 = uVar8 >> 0x1e;
  if (uVar8 >> 0x1e < 2) {
    if (uVar33 == 0) {
      auStack_160[0] = SUB81(puVar43,0);
      auStack_160[1] = (undefined1)((ulong)puVar43 >> 8);
      auStack_160[2] = (undefined1)((ulong)puVar43 >> 0x10);
      auStack_160[3] = (undefined1)((ulong)puVar43 >> 0x18);
      auStack_160[4] = (undefined1)((ulong)puVar43 >> 0x20);
      auStack_160[5] = (undefined1)((ulong)puVar43 >> 0x28);
      auStack_160[6] = (undefined1)((ulong)puVar43 >> 0x30);
      auStack_160[7] = (undefined1)((ulong)puVar43 >> 0x38);
      auStack_160[8] = (undefined1)uVar29;
      auStack_160[9] = (undefined1)(uVar29 >> 8);
      auStack_160[10] = (undefined1)(uVar29 >> 0x10);
      auStack_160[0xb] = (undefined1)(uVar29 >> 0x18);
      auStack_160[0xc] = (undefined1)(uVar29 >> 0x20);
      auStack_160[0xd] = (undefined1)(uVar29 >> 0x28);
      puVar31 = auStack_160 + (uVar29 >> 0x30 & 0xff);
      FUN_1034ab058();
      puVar30 = auStack_160;
    }
    else {
      puVar41 = (undefined *)(long)(int)puVar43;
      puVar30 = (undefined *)(((long)puVar43 >> 0x20) - (long)puVar41);
      if ((long)puVar43 >> 0x20 < (long)puVar41) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1034aaf54);
        (*pcVar24)();
      }
      puVar31 = (undefined *)(uVar29 & 0x3fffffffffffffff);
      func_0x000107c61580(puVar31,2);
      func_0x000107c5ec30();
      if (puVar31 != (undefined *)0x0) {
        puVar43 = puVar31;
        func_0x000107c5ec3c();
        if (SBORROW8((long)puVar41,(long)puVar43)) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1034aaf60);
          (*pcVar24)();
        }
        puVar31 = puVar31 + ((long)puVar41 - (long)puVar43);
        func_0x000107c5ec38();
        puVar34 = puVar43;
        if ((long)puVar30 <= (long)puVar43) {
          puVar34 = puVar30;
        }
        puVar34 = puVar34 + (long)puVar31;
        bVar25 = puVar31 == (undefined *)0x0;
        puVar30 = (undefined *)0x0;
        if (!bVar25) {
          puVar30 = puVar31;
        }
        goto LAB_1034aad98;
      }
      func_0x000107c5ec38();
      puVar30 = (undefined *)0x0;
      puVar43 = puVar31;
      puVar31 = (undefined *)0x0;
LAB_1034aad9c:
      FUN_1034ab058();
    }
  }
  else {
    if (uVar33 == 2) {
      lVar38 = *(long *)(puVar43 + 0x10);
      lVar36 = *(long *)(puVar43 + 0x18);
      func_0x000107c61580(puVar43,2);
      puVar30 = (undefined *)(uVar29 & 0x3fffffffffffffff);
      func_0x000107c61580(puVar30,2);
      func_0x000107c5ec30();
      puVar43 = puVar30;
      if (puVar30 != (undefined *)0x0) {
        func_0x000107c5ec3c();
        if (SBORROW8(lVar38,(long)puVar43)) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1034aaf5c);
          (*pcVar24)();
        }
        puVar30 = puVar30 + (lVar38 - (long)puVar43);
      }
      puVar41 = (undefined *)(lVar36 - lVar38);
      if (SBORROW8(lVar36,lVar38)) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1034aaf58);
        (*pcVar24)();
      }
      func_0x000107c5ec38();
      puVar34 = puVar43;
      if ((long)puVar41 <= (long)puVar43) {
        puVar34 = puVar41;
      }
      puVar34 = puVar34 + (long)puVar30;
      bVar25 = puVar30 == (undefined *)0x0;
LAB_1034aad98:
      puVar31 = (undefined *)0x0;
      if (!bVar25) {
        puVar31 = puVar34;
      }
      goto LAB_1034aad9c;
    }
    FUN_1034ab058();
    auStack_160[0] = 0;
    auStack_160[1] = 0;
    auStack_160[2] = 0;
    auStack_160[3] = 0;
    auStack_160[4] = 0;
    auStack_160[5] = 0;
    auStack_160[6] = 0;
    auStack_160[7] = 0;
    auStack_160[8] = 0;
    auStack_160[9] = 0;
    auStack_160[10] = 0;
    auStack_160[0xb] = 0;
    auStack_160[0xc] = 0;
    auStack_160[0xd] = 0;
    puVar30 = auStack_160;
    puVar31 = auStack_160;
  }
  func_0x00010006ae80(puVar30,puVar31,&uStack_d0,0,100,0,&UNK_1106625d0,puVar43);
  func_0x0001034ab13c(&puStack_1b0,0x112d56fe0,&UNK_10d91dda0);
  func_0x0001034ab13c(&uStack_d0,0x112d49548,&UNK_10d90fde0);
  uStack_138 = 0;
  uStack_140 = 0xe000000000000000;
  uStack_128 = 0;
  uStack_130 = 0xe000000000000000;
  uStack_118 = 0;
  uStack_120 = 0xe000000000000000;
  uStack_108 = 0xc000000000000000;
  uStack_110 = 0;
  auStack_160[8] = 0;
  auStack_160[9] = 0;
  auStack_160[10] = 0;
  auStack_160[0xb] = 0;
  auStack_160[0xc] = 0;
  auStack_160[0xd] = 0;
  uStack_152 = 0;
  auStack_160[0] = 0;
  auStack_160[1] = 0;
  auStack_160[2] = 0;
  auStack_160[3] = 0;
  auStack_160[4] = (undefined1)(uStack_240 >> 0x20);
  auStack_160[5] = (undefined1)(uStack_240 >> 0x28);
  auStack_160[6] = (undefined1)(uStack_240 >> 0x30);
  auStack_160[7] = (undefined1)(uStack_240 >> 0x38);
  uStack_148 = 0;
  uStack_150 = 0xe000000000000000;
  func_0x00010352e46c(auStack_160);
  func_0x0001034ab13c(&puStack_1b0,0x112d56fe0,&UNK_10d91dda0);
LAB_1034aaec8:
  uVar5 = uStack_78;
  uVar3 = uStack_80;
  plVar26 = plStack_88;
  func_0x00010006c00c(plStack_88,uStack_80);
  func_0x000107c6157c(uVar5);
  func_0x00010006c090(plVar26,uVar3);
  func_0x000107c61574(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    func_0x0001034ab024();
    func_0x000107c61574(puVar41);
                    /* WARNING: Does not return */
    pcVar24 = (code *)SoftwareBreakpoint(1,0x1034aaf74);
    (*pcVar24)();
  }
  return plVar26;
}



/* Entry: 1034aafe8; end: 1034ab057;  */

undefined8 FUN_1034aafe8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_104213478)(param_2,param_1);
  return param_2;
}



/* Entry: 1034ab058; end: 1034ab097;  */

void FUN_1034ab058(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f73100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd6998;
  func_0x000107c61520(&DAT_10dbd6998,&UNK_1106625d0);
  puRam0000000112f73100 = puVar1;
  return;
}



/* Entry: 1034ab098; end: 1034ab17b;  */

undefined8 FUN_1034ab098(undefined8 param_1)

{
  FUN_103538b08();
  return param_1;
}



/* Entry: 1034ab17c; end: 1034ab42f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034ab17c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar4 = 0;
  puVar6 = param_5;
  func_0x000100b91d00();
  lVar4 = param_4 + *(int *)(lVar4 + 0x88);
  uVar9 = *(undefined8 *)(lVar4 + 0x90);
  uVar10 = *(undefined8 *)(lVar4 + 0x98);
  func_0x000101682c20();
  uVar12 = 0;
  uVar8 = 0;
  if ((int)lVar4 != 1) {
    func_0x000107c61434(uVar10);
    uVar12 = uVar9;
    uVar8 = uVar10;
  }
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f73260);
  lVar5 = 0;
  func_0x0001034b716c();
  func_0x000107c61534();
  *(undefined8 *)(lVar5 + 0x10) = uVar12;
  *(undefined8 *)(lVar5 + 0x18) = uVar8;
  uVar12 = *param_5;
  uVar14 = param_5[3];
  uVar13 = param_5[2];
  *(undefined8 *)(lVar5 + 0x28) = param_5[1];
  *(undefined8 *)(lVar5 + 0x20) = uVar12;
  *(undefined8 *)(lVar5 + 0x38) = uVar14;
  *(undefined8 *)(lVar5 + 0x30) = uVar13;
  *(undefined1 *)(lVar5 + 0x40) = *(undefined1 *)(param_5 + 4);
  *(undefined8 *)(lVar5 + 0x48) = uVar10;
  *(undefined8 *)(lVar5 + 0x50) = uVar11;
  *(undefined8 *)(lVar5 + 0x58) = uVar9;
  uStack_138 = 0xc000000000000000;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_110 = 0;
  uStack_108 = 0xf000000000000000;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar9);
  lVar4 = param_3;
  FUN_1034b0fc0(param_2);
  if (unaff_x21 == 0) {
    func_0x000107c61574(lVar5);
    func_0x00010349f458(0,0,0);
    uStack_78 = *(ulong *)(param_3 + 0xa90);
    uStack_80 = *(ulong *)(param_3 + 0xa88);
    uStack_70 = *(ulong *)(param_3 + 0xa98);
    uVar7 = 0;
    if (uStack_70 != 1) {
      uVar7 = uStack_80;
    }
    lStack_130 = lVar4;
    lStack_128 = param_4;
    puStack_120 = puVar6;
    if ((long)uVar7 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1034ab42c);
      (*pcVar3)();
    }
    if (0x7fffffff < (long)uVar7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1034ab430);
      (*pcVar3)();
    }
    uVar7 = uVar7 & 0xffffffff;
    func_0x0001034ab464(&uStack_80,auStack_158);
    func_0x0001015dc5d0(0,0,0xf000000000000000);
    uVar2 = uStack_70;
    uVar1 = uStack_78;
    uStack_108 = 0xc000000000000000;
    uStack_110 = 0;
    uStack_118 = uVar7;
    if (1 < uStack_70) {
      uVar7 = uStack_78 & 0xffffffffffff;
      if ((uStack_70 & 0x2000000000000000) != 0) {
        uVar7 = uStack_70 >> 0x38 & 0xf;
      }
      if (uVar7 == 0) {
        func_0x0001034ab4b4(&uStack_80);
      }
      else {
        func_0x000107c61434(uStack_70);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(uVar2);
        func_0x00010006c090(0,0xc000000000000000);
        func_0x000101597ae4(0,0,0,0);
        uStack_100 = uVar1;
        uStack_f8 = uVar2;
        uStack_e8 = 0xc000000000000000;
        uStack_f0 = 0;
      }
    }
    param_1[5] = uStack_118;
    param_1[4] = puStack_120;
    param_1[7] = uStack_108;
    param_1[6] = uStack_110;
    param_1[9] = uStack_f8;
    param_1[8] = uStack_100;
    param_1[0xb] = uStack_e8;
    param_1[10] = uStack_f0;
    param_1[1] = uStack_138;
    *param_1 = uStack_140;
    param_1[3] = lStack_128;
    param_1[2] = lStack_130;
  }
  else {
    FUN_1034ab430(&uStack_140);
    func_0x000107c61574(uVar11);
    func_0x000107c61574(uVar10);
    func_0x000107c6142c(uVar8);
    func_0x000107c61588(lVar5);
    func_0x000107c61574(uVar9);
  }
  return;
}



/* Entry: 1034ab430; end: 1034ab4fb;  */

undefined8 FUN_1034ab430(undefined8 param_1)

{
  (*(code *)(undefined *)0x1035a3c08)();
  return param_1;
}



/* Entry: 1034ab4fc; end: 1034acaa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034ab4fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  byte bVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  byte bVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulong in_stack_ffffffffffffd1f8;
  undefined2 in_stack_ffffffffffffd208;
  byte bVar15;
  byte bStack_2bcc;
  byte bStack_2bc8;
  byte bStack_2bc4;
  byte bStack_2bc0;
  byte bStack_2bbc;
  byte bStack_2bb8;
  undefined8 uStack_2bb0;
  undefined8 uStack_2ba8;
  byte bStack_2b9c;
  undefined8 uStack_2b98;
  undefined8 uStack_2b90;
  byte bStack_2b84;
  undefined8 uStack_2b80;
  undefined8 uStack_2b78;
  undefined8 uStack_2b60;
  undefined8 uStack_2b58;
  undefined8 uStack_2b50;
  undefined8 uStack_2b48;
  undefined8 uStack_2b38;
  undefined8 uStack_2b30;
  undefined8 uStack_2b28;
  undefined8 uStack_2b10;
  undefined8 uStack_2b08;
  undefined8 uStack_2b00;
  undefined8 uStack_2af0;
  undefined8 uStack_2ae8;
  undefined8 uStack_2ad8;
  undefined8 uStack_2ad0;
  undefined8 uStack_2ac8;
  undefined8 uStack_2ac0;
  undefined8 uStack_2ab8;
  undefined8 uStack_2a90;
  byte bStack_2a80;
  byte bStack_2a7c;
  undefined8 uStack_2a78;
  undefined8 uStack_2a70;
  undefined8 uStack_2a68;
  undefined8 uStack_2a60;
  undefined8 uStack_2a58;
  undefined1 auStack_2a38 [8];
  undefined8 uStack_2a30;
  undefined8 uStack_2a28;
  undefined8 uStack_2a20;
  undefined8 uStack_2a18;
  undefined8 uStack_2a10;
  undefined8 uStack_2a08;
  undefined8 uStack_2a00;
  undefined8 uStack_29f8;
  undefined8 uStack_29f0;
  undefined8 uStack_29e8;
  undefined8 uStack_29e0;
  undefined8 uStack_29d8;
  undefined8 uStack_29c7;
  undefined1 auStack_2730 [8];
  undefined1 auStack_2728 [8];
  undefined8 uStack_2720;
  undefined8 uStack_2710;
  undefined8 uStack_2700;
  undefined8 uStack_26f8;
  undefined8 uStack_26f0;
  undefined8 uStack_26e0;
  undefined8 uStack_26d8;
  byte bStack_26cf;
  undefined8 uStack_26c8;
  undefined2 uStack_26b8;
  undefined6 uStack_26b6;
  byte bStack_269f;
  undefined1 auStack_2698 [257];
  byte bStack_2597;
  undefined8 uStack_2588;
  undefined8 uStack_2578;
  undefined8 uStack_2570;
  undefined8 uStack_2568;
  byte bStack_2560;
  undefined8 uStack_2558;
  undefined8 uStack_2548;
  undefined8 uStack_2538;
  undefined8 uStack_2530;
  undefined8 uStack_2528;
  undefined8 uStack_2520;
  undefined8 uStack_2518;
  undefined8 uStack_2510;
  undefined8 uStack_2508;
  undefined8 uStack_24f8;
  byte bStack_24ef;
  undefined8 uStack_24e8;
  undefined8 uStack_24e0;
  undefined8 uStack_24d8;
  undefined8 uStack_24d0;
  undefined8 uStack_24c8;
  undefined8 uStack_24c0;
  byte bStack_24b8;
  byte bStack_24b7;
  undefined8 uStack_24b0;
  byte bStack_24a8;
  undefined8 uStack_2498;
  undefined8 uStack_2490;
  byte bStack_2488;
  byte bStack_2487;
  undefined8 uStack_2480;
  byte bStack_2478;
  byte bStack_2477;
  byte bStack_2476;
  byte bStack_2475;
  undefined8 uStack_2470;
  undefined8 uStack_2460;
  undefined8 uStack_2440;
  undefined8 uStack_2438;
  undefined8 uStack_2430;
  undefined1 auStack_2420 [264];
  undefined1 uStack_2318;
  undefined1 uStack_2317;
  undefined6 uStack_2316;
  undefined8 uStack_2310;
  undefined1 uStack_2308;
  undefined8 uStack_2300;
  undefined8 uStack_22f0;
  undefined8 uStack_22e8;
  undefined8 uStack_22e0;
  undefined1 uStack_22d7;
  undefined8 uStack_22d0;
  undefined8 uStack_22c8;
  undefined1 uStack_22c0;
  byte bStack_22bf;
  undefined8 uStack_22b8;
  undefined8 uStack_22a8;
  undefined1 uStack_2298;
  byte bStack_228f;
  undefined1 auStack_2288 [257];
  byte bStack_2187;
  int iStack_2180;
  undefined8 uStack_2178;
  undefined8 uStack_2168;
  undefined8 uStack_2160;
  undefined8 uStack_2158;
  byte bStack_2150;
  undefined8 uStack_2148;
  undefined8 uStack_2138;
  undefined8 uStack_2128;
  undefined8 uStack_2120;
  undefined8 uStack_2118;
  undefined8 uStack_2110;
  undefined8 uStack_2108;
  undefined8 uStack_2100;
  undefined8 uStack_20f8;
  undefined8 uStack_20e8;
  byte bStack_20df;
  undefined8 uStack_20d8;
  undefined8 uStack_20d0;
  undefined8 uStack_20c8;
  undefined8 uStack_20c0;
  undefined8 uStack_20b8;
  undefined8 uStack_20b0;
  byte bStack_20a8;
  byte bStack_20a7;
  undefined8 uStack_20a0;
  byte bStack_2098;
  ulong uStack_2090;
  undefined8 uStack_2088;
  undefined8 uStack_2080;
  byte bStack_2078;
  byte bStack_2077;
  undefined8 uStack_2070;
  byte bStack_2068;
  byte bStack_2067;
  byte bStack_2066;
  byte bStack_2065;
  undefined8 uStack_2060;
  undefined8 uStack_2050;
  undefined8 uStack_2030;
  undefined8 uStack_2028;
  undefined8 uStack_2020;
  undefined8 uStack_1d70;
  undefined8 uStack_1d68;
  undefined8 uStack_1d60;
  undefined8 uStack_1d58;
  undefined8 uStack_1d50;
  undefined8 uStack_1d48;
  undefined8 uStack_1d40;
  undefined8 uStack_1d38;
  undefined8 uStack_1d30;
  undefined8 uStack_1d28;
  undefined8 uStack_1d20;
  undefined8 uStack_1d18;
  undefined8 uStack_1d10;
  undefined8 uStack_1d08;
  undefined8 uStack_1d00;
  undefined8 uStack_1cf0;
  undefined8 uStack_1ce8;
  undefined8 uStack_1ce0;
  undefined8 uStack_1cd8;
  undefined8 uStack_1cd0;
  undefined8 uStack_1cc8;
  undefined8 uStack_1cc0;
  undefined8 uStack_1cb8;
  undefined8 uStack_1cb0;
  undefined8 uStack_1ca8;
  undefined8 uStack_1ca0;
  undefined8 uStack_1c98;
  undefined8 uStack_1c90;
  undefined8 uStack_1c88;
  undefined8 uStack_1c80;
  undefined8 uStack_1c78;
  undefined8 uStack_1c70;
  undefined8 uStack_1c38;
  undefined8 uStack_1c30;
  undefined8 uStack_1c28;
  undefined8 uStack_1c20;
  undefined8 uStack_1c18;
  undefined8 uStack_1c10;
  undefined8 uStack_1c08;
  undefined8 uStack_1c00;
  undefined8 uStack_1bf8;
  undefined8 uStack_1bf0;
  undefined8 uStack_1be8;
  undefined8 uStack_1be0;
  undefined8 uStack_1bd8;
  undefined8 uStack_1bd0;
  undefined8 uStack_1bc8;
  undefined8 uStack_1bc0;
  undefined1 uStack_1bb8;
  undefined8 uStack_1bb0;
  undefined8 uStack_1ba8;
  undefined8 uStack_1ba0;
  undefined8 uStack_1b98;
  undefined8 uStack_1b90;
  undefined8 uStack_1b88;
  undefined8 uStack_1b80;
  undefined8 uStack_1b78;
  undefined8 uStack_1b70;
  undefined8 uStack_1b68;
  undefined8 uStack_1b60;
  undefined8 uStack_1b58;
  undefined8 uStack_1b50;
  undefined8 uStack_1b3f;
  undefined8 uStack_1b30;
  undefined8 uStack_1b28;
  undefined8 uStack_1b20;
  undefined8 uStack_1b18;
  undefined8 uStack_1b10;
  undefined8 uStack_1b08;
  undefined8 uStack_1b00;
  undefined8 uStack_1af8;
  undefined8 uStack_1af0;
  undefined8 uStack_1ae8;
  undefined8 uStack_1ae0;
  undefined8 uStack_1ad8;
  undefined8 uStack_1ad0;
  undefined8 uStack_1abe;
  undefined8 uStack_1a98;
  undefined8 uStack_1a90;
  byte bStack_1a78;
  byte bStack_1a77;
  byte bStack_1a40;
  undefined8 uStack_19d0;
  undefined8 uStack_19c8;
  undefined8 uStack_19c0;
  undefined8 uStack_19b8;
  undefined8 uStack_19b0;
  undefined8 uStack_19a8;
  undefined8 uStack_19a0;
  undefined8 uStack_1998;
  undefined8 uStack_1990;
  undefined8 uStack_1988;
  undefined8 uStack_1980;
  undefined8 uStack_1978;
  undefined8 uStack_1970;
  undefined8 uStack_1968;
  undefined8 uStack_1960;
  undefined8 uStack_1958;
  undefined8 uStack_1950;
  undefined8 uStack_1948;
  undefined8 uStack_1940;
  undefined8 uStack_1938;
  undefined8 uStack_1930;
  undefined8 uStack_1928;
  undefined8 uStack_1920;
  undefined8 uStack_1918;
  undefined8 uStack_1910;
  undefined8 uStack_1908;
  undefined8 uStack_1900;
  undefined8 uStack_18f8;
  undefined8 uStack_18f0;
  undefined8 uStack_18e8;
  undefined8 uStack_18e0;
  undefined8 uStack_18d8;
  undefined8 uStack_18d0;
  undefined8 uStack_18c8;
  undefined8 uStack_18c0;
  undefined8 uStack_18b8;
  undefined2 uStack_18b0;
  byte bStack_18ae;
  undefined8 uStack_18a0;
  undefined8 uStack_1898;
  undefined8 uStack_1890;
  undefined8 uStack_1888;
  undefined8 uStack_1880;
  undefined8 uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined2 uStack_1860;
  undefined1 auStack_17c0 [48];
  double dStack_1790;
  double dStack_1788;
  long lStack_1768;
  double dStack_1760;
  undefined8 uStack_1740;
  undefined8 uStack_1738;
  undefined8 uStack_1730;
  undefined8 uStack_1728;
  undefined8 uStack_1720;
  undefined8 uStack_1718;
  undefined8 uStack_1710;
  undefined8 uStack_1708;
  undefined8 uStack_1700;
  undefined8 uStack_16f8;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined8 uStack_16e0;
  undefined8 uStack_16d8;
  undefined8 uStack_16d0;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_1688;
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  undefined8 uStack_1670;
  undefined8 uStack_1668;
  undefined8 uStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined8 uStack_1610;
  undefined1 uStack_1608;
  undefined8 uStack_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  undefined8 uStack_15e8;
  undefined8 uStack_15e0;
  undefined8 uStack_15d8;
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_158f;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined8 uStack_1570;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  undefined8 uStack_1520;
  undefined8 uStack_150e;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  byte bStack_14c8;
  byte bStack_14c7;
  byte bStack_1490;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined2 uStack_1300;
  byte bStack_12fe;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined2 uStack_12b0;
  undefined1 auStack_1210 [89];
  byte bStack_11b7;
  undefined8 uStack_11a0;
  byte bStack_1187;
  undefined1 auStack_1180 [257];
  byte bStack_107f;
  int iStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  byte bStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1030;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe0;
  byte bStack_fd7;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  byte bStack_fa0;
  byte bStack_f9f;
  undefined8 uStack_f98;
  byte bStack_f90;
  ulong uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  byte bStack_f70;
  byte bStack_f6f;
  undefined8 uStack_f68;
  byte bStack_f60;
  byte bStack_f5f;
  byte bStack_f5e;
  byte bStack_f5d;
  undefined8 uStack_f58;
  undefined8 uStack_f48;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined1 auStack_f08 [264];
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d50;
  undefined8 uStack_d38;
  undefined8 uStack_d28;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce0;
  undefined8 uStack_cd0;
  undefined1 uStack_cc0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c3f;
  undefined8 uStack_c28;
  undefined8 uStack_c18;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd0;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined2 uStack_a60;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined2 uStack_a10;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined1 uStack_8c0;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_83f;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7be;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined2 uStack_690;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined2 uStack_640;
  undefined1 auStack_630 [48];
  double dStack_600;
  double dStack_5f8;
  long lStack_5d8;
  double dStack_5d0;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 uStack_528;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_3ff;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_37e;
  undefined1 uStack_360;
  undefined1 uStack_35f;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 uStack_348;
  byte bStack_338;
  byte bStack_337;
  byte bStack_300;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
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
  undefined2 uStack_170;
  byte bStack_16e;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  byte bVar2;
  
  bVar15 = (byte)((ushort)in_stack_ffffffffffffd208 >> 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c610b4(auStack_630,param_3 + 8,0x5a8);
  iVar6 = (int)auStack_630;
  func_0x00010189c838();
  if (iVar6 == 1) {
    func_0x000101895cec(&uStack_1d70);
    uStack_d68 = uStack_1d08;
    uStack_d70 = uStack_1d10;
    uStack_d60 = uStack_1d00;
    uStack_d50 = uStack_1cf0;
    uStack_da8 = uStack_1d48;
    uStack_db0 = uStack_1d50;
    uStack_d98 = uStack_1d38;
    uStack_da0 = uStack_1d40;
    uStack_d78 = uStack_1d18;
    uStack_d80 = uStack_1d20;
    uStack_d88 = uStack_1d28;
    uStack_d90 = uStack_1d30;
    uStack_db8 = uStack_1d58;
    uStack_dc0 = uStack_1d60;
    uStack_dc8 = uStack_1d68;
    uStack_dd0 = uStack_1d70;
    func_0x000101895d08(&uStack_2318);
    uStack_ce0 = uStack_22b8;
    uStack_cd0 = uStack_22a8;
    uStack_cc0 = uStack_2298;
    uStack_d18 = uStack_22f0;
    uStack_d08 = uStack_22e0;
    uStack_d10 = uStack_22e8;
    uStack_cf0 = uStack_22c8;
    uStack_cf8 = uStack_22d0;
    uStack_d28 = uStack_2300;
    uStack_d38 = uStack_2310;
    func_0x0001018797b4(auStack_2a38);
    uStack_c68 = uStack_29f0;
    uStack_c70 = uStack_29f8;
    uStack_c58 = uStack_29e0;
    uStack_c60 = uStack_29e8;
    uStack_c50 = uStack_29d8;
    uStack_c3f = uStack_29c7;
    uStack_ca8 = uStack_2a30;
    uStack_c98 = uStack_2a20;
    uStack_ca0 = uStack_2a28;
    uStack_c88 = uStack_2a10;
    uStack_c90 = uStack_2a18;
    uStack_c78 = uStack_2a00;
    uStack_c80 = uStack_2a08;
    func_0x000101895d28(auStack_2728);
    uStack_be8 = uStack_26e0;
    uStack_be0 = uStack_26d8;
    uStack_bd0 = uStack_26c8;
    uStack_c28 = uStack_2720;
    uStack_c18 = uStack_2710;
    uStack_c08 = uStack_2700;
    uStack_bf8 = uStack_26f0;
    uStack_c00 = uStack_26f8;
    uStack_ba0 = 0;
    uStack_ba8 = 0;
    uStack_bb0 = 0;
    uStack_b98 = 1;
    uStack_b88 = 0;
    uStack_b90 = 0;
    uStack_b78 = 0;
    uStack_b80 = 0;
    uStack_b70 = 0;
    uStack_b68 = 2;
    uStack_b58 = 0;
    uStack_b60 = 0;
    uStack_b48 = 0;
    uStack_b50 = 0;
    uStack_b38 = 0;
    uStack_b40 = 0;
    uStack_b28 = 0;
    uStack_b30 = 0;
    uStack_b18 = 0;
    uStack_b20 = 0;
    uStack_b08 = 0;
    uStack_b10 = 0;
    uStack_af8 = 0;
    uStack_b00 = 0;
    uStack_ae8 = 0;
    uStack_af0 = 0;
    uStack_ad8 = 0;
    uStack_ae0 = 0;
    uStack_ac8 = 0;
    uStack_ad0 = 0;
    uStack_ab8 = 0;
    uStack_ac0 = 0;
    uStack_aa8 = 0;
    uStack_ab0 = 0;
    uStack_a98 = 0;
    uStack_aa0 = 0;
    uStack_a88 = 0;
    uStack_a90 = 0;
    uStack_a78 = 0;
    uStack_a80 = 0;
    uStack_a68 = 0;
    uStack_a70 = 1;
    uStack_a60 = 0;
    uStack_a48 = 0;
    uStack_a50 = 0;
    uStack_a38 = 0;
    uStack_a40 = 0;
    uStack_a28 = 0;
    uStack_a30 = 0;
    uStack_a18 = 0;
    uStack_a20 = 0;
    uStack_a10 = 0x100;
    uStack_9f8 = 0;
    uStack_a00 = 0;
    uStack_9e8 = 0;
    uStack_9f0 = 0;
    uStack_9e0 = 0;
    func_0x000104218d60(auStack_17c0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                        in_stack_ffffffffffffd1f8 & 0xffffffffffffff00,&uStack_dd0,
                        (ushort)bVar15 << 8);
    uStack_658 = uStack_12c8;
    uStack_660 = uStack_12d0;
    uStack_648 = uStack_12b8;
    uStack_650 = uStack_12c0;
    uStack_640 = uStack_12b0;
    uStack_668 = uStack_12d8;
    uStack_670 = uStack_12e0;
    uStack_678 = uStack_12e8;
    uStack_680 = uStack_12f0;
    uStack_6b8 = uStack_1328;
    uStack_6c0 = uStack_1330;
    uStack_6a8 = uStack_1318;
    uStack_6b0 = uStack_1320;
    uStack_698 = uStack_1308;
    uStack_6a0 = uStack_1310;
    uStack_690 = uStack_1300;
    uStack_6f8 = uStack_1368;
    uStack_700 = uStack_1370;
    uStack_6e8 = uStack_1358;
    uStack_6f0 = uStack_1360;
    uStack_6d8 = uStack_1348;
    uStack_6e0 = uStack_1350;
    uStack_6c8 = uStack_1338;
    uStack_6d0 = uStack_1340;
    uStack_708 = uStack_1378;
    uStack_710 = uStack_1380;
    uStack_718 = uStack_1388;
    uStack_720 = uStack_1390;
    uStack_728 = uStack_1398;
    uStack_730 = uStack_13a0;
    uStack_748 = uStack_13b8;
    uStack_750 = uStack_13c0;
    uStack_738 = uStack_13a8;
    uStack_740 = uStack_13b0;
    uStack_798 = uStack_1408;
    uStack_7a0 = uStack_1410;
    uStack_7a8 = uStack_1418;
    uStack_7b0 = uStack_1420;
    uStack_758 = uStack_13c8;
    uStack_760 = uStack_13d0;
    uStack_768 = uStack_13d8;
    uStack_770 = uStack_13e0;
    uStack_778 = uStack_13e8;
    uStack_780 = uStack_13f0;
    uStack_788 = uStack_13f8;
    uStack_790 = uStack_1400;
    bStack_2a7c = bStack_14c7;
    bStack_2a80 = bStack_14c8;
    uStack_2a60 = uStack_14e0;
    uStack_2a70 = uStack_14e8;
    uStack_7e8 = uStack_1538;
    uStack_7f0 = uStack_1540;
    uStack_7d8 = uStack_1528;
    uStack_7e0 = uStack_1530;
    uStack_7d0 = uStack_1520;
    uStack_7be = uStack_150e;
    uStack_828 = uStack_1578;
    uStack_830 = uStack_1580;
    uStack_818 = uStack_1568;
    uStack_820 = uStack_1570;
    uStack_808 = uStack_1558;
    uStack_810 = uStack_1560;
    uStack_7f8 = uStack_1548;
    uStack_800 = uStack_1550;
    uStack_878 = uStack_15c8;
    uStack_880 = uStack_15d0;
    uStack_888 = uStack_15d8;
    uStack_890 = uStack_15e0;
    uStack_898 = uStack_15e8;
    uStack_8a0 = uStack_15f0;
    uStack_8a8 = uStack_15f8;
    uStack_8b0 = uStack_1600;
    uStack_83f = uStack_158f;
    uStack_850 = uStack_15a0;
    uStack_858 = uStack_15a8;
    uStack_860 = uStack_15b0;
    uStack_868 = uStack_15b8;
    uStack_870 = uStack_15c0;
    uStack_908 = uStack_1650;
    uStack_910 = uStack_1658;
    uStack_918 = uStack_1660;
    uStack_920 = uStack_1668;
    uStack_938 = uStack_1680;
    uStack_940 = uStack_1688;
    uStack_928 = uStack_1670;
    uStack_930 = uStack_1678;
    uStack_8c0 = uStack_1608;
    uStack_8c8 = uStack_1610;
    uStack_8d0 = uStack_1618;
    uStack_8d8 = uStack_1620;
    uStack_8e0 = uStack_1628;
    uStack_8f8 = uStack_1640;
    uStack_900 = uStack_1648;
    uStack_8e8 = uStack_1630;
    uStack_8f0 = uStack_1638;
    uStack_968 = uStack_16d8;
    uStack_970 = uStack_16e0;
    uStack_958 = uStack_16c8;
    uStack_960 = uStack_16d0;
    uStack_950 = uStack_16c0;
    uStack_9a8 = uStack_1718;
    uStack_9b0 = uStack_1720;
    uStack_998 = uStack_1708;
    uStack_9a0 = uStack_1710;
    uStack_978 = uStack_16e8;
    uStack_980 = uStack_16f0;
    uStack_988 = uStack_16f8;
    uStack_990 = uStack_1700;
    uStack_9b8 = uStack_1728;
    uStack_9c0 = uStack_1730;
    uStack_9c8 = uStack_1738;
    uStack_9d0 = uStack_1740;
    dVar12 = dStack_1760;
    dVar13 = dStack_1790;
    dVar14 = dStack_1788;
    lStack_5d8 = lStack_1768;
  }
  else {
    uStack_2318 = uStack_528;
    uStack_908 = uStack_4c0;
    uStack_910 = uStack_4c8;
    uStack_918 = uStack_4d0;
    uStack_920 = uStack_4d8;
    uStack_938 = uStack_4f0;
    uStack_940 = uStack_4f8;
    uStack_928 = uStack_4e0;
    uStack_930 = uStack_4e8;
    uStack_8c0 = uStack_478;
    uStack_8c8 = uStack_480;
    uStack_8d0 = uStack_488;
    uStack_8d8 = uStack_490;
    uStack_8e0 = uStack_498;
    uStack_8f8 = uStack_4b0;
    uStack_900 = uStack_4b8;
    uStack_8e8 = uStack_4a0;
    uStack_8f0 = uStack_4a8;
    auStack_2728[0] = uStack_360;
    auStack_2a38[0] = uStack_35f;
    uStack_2a70 = uStack_358;
    uStack_2a60 = uStack_350;
    auStack_f08[0] = uStack_348;
    bStack_2a7c = bStack_337;
    bStack_2a80 = bStack_338;
    uStack_788 = uStack_268;
    uStack_790 = uStack_270;
    uStack_778 = uStack_258;
    uStack_780 = uStack_260;
    uStack_768 = uStack_248;
    uStack_770 = uStack_250;
    uStack_758 = uStack_238;
    uStack_760 = uStack_240;
    uStack_7a8 = uStack_288;
    uStack_7b0 = uStack_290;
    uStack_798 = uStack_278;
    uStack_7a0 = uStack_280;
    uStack_728 = uStack_208;
    uStack_730 = uStack_210;
    uStack_718 = uStack_1f8;
    uStack_720 = uStack_200;
    uStack_708 = uStack_1e8;
    uStack_710 = uStack_1f0;
    uStack_738 = uStack_218;
    uStack_740 = uStack_220;
    uStack_748 = uStack_228;
    uStack_750 = uStack_230;
    uStack_6b8 = uStack_198;
    uStack_6c0 = uStack_1a0;
    uStack_6a8 = uStack_188;
    uStack_6b0 = uStack_190;
    uStack_698 = uStack_178;
    uStack_6a0 = uStack_180;
    uStack_690 = uStack_170;
    uStack_6f8 = uStack_1d8;
    uStack_700 = uStack_1e0;
    uStack_6e8 = uStack_1c8;
    uStack_6f0 = uStack_1d0;
    uStack_6d8 = uStack_1b8;
    uStack_6e0 = uStack_1c0;
    uStack_6c8 = uStack_1a8;
    uStack_6d0 = uStack_1b0;
    uStack_640 = uStack_120;
    uStack_648 = uStack_128;
    uStack_650 = uStack_130;
    uStack_658 = uStack_138;
    uStack_660 = uStack_140;
    uStack_678 = uStack_158;
    uStack_680 = uStack_160;
    uStack_668 = uStack_148;
    uStack_670 = uStack_150;
    uStack_950 = uStack_530;
    uStack_968 = uStack_548;
    uStack_970 = uStack_550;
    uStack_958 = uStack_538;
    uStack_960 = uStack_540;
    uStack_9a8 = uStack_588;
    uStack_9b0 = uStack_590;
    uStack_998 = uStack_578;
    uStack_9a0 = uStack_580;
    uStack_978 = uStack_558;
    uStack_980 = uStack_560;
    uStack_988 = uStack_568;
    uStack_990 = uStack_570;
    uStack_9b8 = uStack_598;
    uStack_9c0 = uStack_5a0;
    uStack_9c8 = uStack_5a8;
    uStack_9d0 = uStack_5b0;
    uStack_868 = uStack_428;
    uStack_870 = uStack_430;
    uStack_858 = uStack_418;
    uStack_860 = uStack_420;
    uStack_850 = uStack_410;
    uStack_83f = uStack_3ff;
    uStack_8a8 = uStack_468;
    uStack_8b0 = uStack_470;
    uStack_898 = uStack_458;
    uStack_8a0 = uStack_460;
    uStack_888 = uStack_448;
    uStack_890 = uStack_450;
    uStack_878 = uStack_438;
    uStack_880 = uStack_440;
    uStack_7f8 = uStack_3b8;
    uStack_800 = uStack_3c0;
    uStack_808 = uStack_3c8;
    uStack_810 = uStack_3d0;
    uStack_818 = uStack_3d8;
    uStack_820 = uStack_3e0;
    uStack_828 = uStack_3e8;
    uStack_830 = uStack_3f0;
    uStack_7be = uStack_37e;
    uStack_7d0 = uStack_390;
    uStack_7d8 = uStack_398;
    uStack_7e0 = uStack_3a0;
    uStack_7f0 = uStack_3b0;
    uStack_7e8 = uStack_3a8;
    dVar12 = dStack_5d0;
    dVar13 = dStack_600;
    dVar14 = dStack_5f8;
    bStack_12fe = bStack_16e;
    bStack_1490 = bStack_300;
  }
  uStack_1c70 = uStack_950;
  uStack_1c88 = uStack_968;
  uStack_1c90 = uStack_970;
  uStack_1c78 = uStack_958;
  uStack_1c80 = uStack_960;
  uStack_1cc8 = uStack_9a8;
  uStack_1cd0 = uStack_9b0;
  uStack_1cb8 = uStack_998;
  uStack_1cc0 = uStack_9a0;
  uStack_1c98 = uStack_978;
  uStack_1ca0 = uStack_980;
  uStack_1ca8 = uStack_988;
  uStack_1cb0 = uStack_990;
  uStack_1cd8 = uStack_9b8;
  uStack_1ce0 = uStack_9c0;
  uStack_1ce8 = uStack_9c8;
  uStack_1cf0 = uStack_9d0;
  uStack_1bd0 = uStack_8d8;
  uStack_1bd8 = uStack_8e0;
  uStack_1bc0 = uStack_8c8;
  uStack_1bc8 = uStack_8d0;
  uStack_1c10 = uStack_918;
  uStack_1c18 = uStack_920;
  uStack_1c00 = uStack_908;
  uStack_1c08 = uStack_910;
  uStack_1bf0 = uStack_8f8;
  uStack_1bf8 = uStack_900;
  uStack_1be0 = uStack_8e8;
  uStack_1be8 = uStack_8f0;
  uStack_1c30 = uStack_938;
  uStack_1c38 = uStack_940;
  uStack_1c20 = uStack_928;
  uStack_1c28 = uStack_930;
  uStack_1bb8 = uStack_8c0;
  uStack_1b3f = uStack_83f;
  uStack_1b68 = uStack_868;
  uStack_1b70 = uStack_870;
  uStack_1b58 = uStack_858;
  uStack_1b60 = uStack_860;
  uStack_1ba8 = uStack_8a8;
  uStack_1bb0 = uStack_8b0;
  uStack_1b98 = uStack_898;
  uStack_1ba0 = uStack_8a0;
  uStack_1b88 = uStack_888;
  uStack_1b90 = uStack_890;
  uStack_1b78 = uStack_878;
  uStack_1b80 = uStack_880;
  uStack_1abe = uStack_7be;
  uStack_1b08 = uStack_808;
  uStack_1b10 = uStack_810;
  uStack_1b18 = uStack_818;
  uStack_1b20 = uStack_820;
  uStack_1b50 = uStack_850;
  uStack_1b28 = uStack_828;
  uStack_1b30 = uStack_830;
  uStack_1ad0 = uStack_7d0;
  uStack_1ad8 = uStack_7d8;
  uStack_1ae0 = uStack_7e0;
  uStack_1af8 = uStack_7f8;
  uStack_1b00 = uStack_800;
  uStack_1ae8 = uStack_7e8;
  uStack_1af0 = uStack_7f0;
  uStack_1a98 = uStack_2a70;
  uStack_1a90 = uStack_2a60;
  bStack_1a78 = bStack_2a80 & 1;
  bStack_1a77 = bStack_2a7c & 1;
  bStack_1a40 = bStack_1490 & 1;
  uStack_1998 = uStack_778;
  uStack_19a0 = uStack_780;
  uStack_1988 = uStack_768;
  uStack_1990 = uStack_770;
  uStack_19c8 = uStack_7a8;
  uStack_19d0 = uStack_7b0;
  uStack_19a8 = uStack_788;
  uStack_19b0 = uStack_790;
  uStack_19b8 = uStack_798;
  uStack_19c0 = uStack_7a0;
  uStack_1928 = uStack_708;
  uStack_1930 = uStack_710;
  uStack_1938 = uStack_718;
  uStack_1940 = uStack_720;
  uStack_1948 = uStack_728;
  uStack_1950 = uStack_730;
  uStack_1958 = uStack_738;
  uStack_1960 = uStack_740;
  uStack_1978 = uStack_758;
  uStack_1980 = uStack_760;
  uStack_1968 = uStack_748;
  uStack_1970 = uStack_750;
  uStack_18e8 = uStack_6c8;
  uStack_18f0 = uStack_6d0;
  uStack_18f8 = uStack_6d8;
  uStack_1900 = uStack_6e0;
  uStack_1908 = uStack_6e8;
  uStack_1910 = uStack_6f0;
  uStack_1918 = uStack_6f8;
  uStack_1920 = uStack_700;
  uStack_18b0 = uStack_690;
  uStack_18b8 = uStack_698;
  uStack_18c0 = uStack_6a0;
  uStack_18c8 = uStack_6a8;
  uStack_18d0 = uStack_6b0;
  uStack_18d8 = uStack_6b8;
  uStack_18e0 = uStack_6c0;
  bStack_18ae = bStack_12fe & 1;
  uStack_1898 = uStack_678;
  uStack_18a0 = uStack_680;
  uStack_1860 = uStack_640;
  uStack_1868 = uStack_648;
  uStack_1870 = uStack_650;
  uStack_1878 = uStack_658;
  uStack_1880 = uStack_660;
  uStack_1888 = uStack_668;
  uStack_1890 = uStack_670;
  func_0x0001034ae7c4(auStack_630,&uStack_2318,0x112dcbd00,&UNK_10d98e550);
  FUN_1035cb6dc(0 < lStack_5d8,0,0xc000000000000000);
  if (lStack_5d8 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1034aca60);
    (*pcVar4)();
  }
  if (0x7fffffff < lStack_5d8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1034aca64);
    (*pcVar4)();
  }
  FUN_1035cb924(lStack_5d8,0,0xc000000000000000);
  func_0x0001035cb538((float)(dVar12 / 1000.0),0,0xc000000000000000);
  func_0x0001000d224c(&uStack_2318);
  uVar10 = CONCAT62(uStack_2316,CONCAT11(uStack_2317,uStack_2318));
  uVar7 = uVar10;
  func_0x000107c42568();
  func_0x000107c615e8(uVar10);
  if ((uVar7 & 1) != 0) {
    FUN_1035cd5ec((float)(dVar13 / 1000.0),0,0xc000000000000000);
    func_0x0001035cd69c((float)(dVar14 / 1000.0),0,0xc000000000000000);
  }
  func_0x000107c610b4(&uStack_2318,param_3 + 0x620,0x301);
  iVar6 = (int)&uStack_2318;
  func_0x00010178e1e4();
  uVar11 = uStack_2318;
  if (iVar6 == 1) {
    func_0x000100406b98(auStack_2728);
    func_0x000107c610b4(auStack_f08,auStack_2728,0x101);
    uStack_df8 = 1;
    uStack_e00 = 0;
    uStack_de8 = 0;
    uStack_df0 = 0;
    uStack_dd8 = 0;
    uStack_de0 = 0;
    func_0x00010425b4fc(auStack_1210,0,0,0,0,0,1,0,0,0,1,0,0,0);
    uStack_2a90 = uStack_f28;
    uStack_2a58 = uStack_f18;
    uStack_2a60 = uStack_f20;
    uStack_2ad8 = uStack_f48;
    uStack_2b08 = uStack_f58;
    bStack_2b84 = bStack_f5d;
    bStack_2b9c = bStack_f5e;
    bStack_2bb8 = bStack_f5f;
    bStack_2bbc = bStack_f60;
    uStack_2bb0 = uStack_f68;
    bStack_2bc0 = bStack_f6f;
    uStack_2a68 = uStack_f78;
    uStack_2a70 = uStack_f80;
    uStack_2a78 = uStack_f98;
    bStack_2bc4 = bStack_f9f;
    bStack_2bc8 = bStack_fa0;
    uStack_2ac8 = uStack_fc8;
    uStack_2ad0 = uStack_fd0;
    uStack_2ab8 = uStack_fa8;
    uStack_2ac0 = uStack_fb0;
    uStack_2ae8 = uStack_fb8;
    uStack_2af0 = uStack_fc0;
    bStack_2bcc = bStack_fd7;
    uStack_2b00 = uStack_fe0;
    uStack_2b10 = uStack_ff0;
    uStack_2b28 = uStack_1018;
    uStack_2b30 = uStack_1020;
    uStack_2b58 = uStack_ff8;
    uStack_2b60 = uStack_1000;
    uStack_2b48 = uStack_1008;
    uStack_2b50 = uStack_1010;
    uStack_2b38 = uStack_1030;
    uStack_2b78 = uStack_1058;
    uStack_2b80 = uStack_1060;
    uStack_2b90 = uStack_1040;
    uStack_2ba8 = uStack_1050;
    uStack_2b98 = uStack_1070;
    func_0x000107c610b4(auStack_2420,auStack_1180,0x101);
    uVar10 = uStack_f88;
    bVar5 = bStack_1187;
    bVar8 = bStack_11b7;
    uVar11 = auStack_1210[0];
    bVar1 = bStack_f90;
    bVar2 = bStack_f70;
    bVar15 = bStack_1048;
    bVar3 = bStack_107f;
    iVar6 = iStack_1078;
  }
  else {
    auStack_2728[0] = uStack_2318;
    auStack_2a38[0] = uStack_2317;
    auStack_f08[0] = uStack_2308;
    uStack_e00 = CONCAT71(uStack_e00._1_7_,uStack_22d7);
    auStack_2730[0] = uStack_22c0;
    uStack_2b98 = uStack_2178;
    uStack_2b78 = uStack_2160;
    uStack_2b80 = uStack_2168;
    uStack_2ba8 = uStack_2158;
    uStack_2b90 = uStack_2148;
    uStack_2b38 = uStack_2138;
    uStack_2b28 = uStack_2120;
    uStack_2b30 = uStack_2128;
    uStack_2b58 = uStack_2100;
    uStack_2b60 = uStack_2108;
    uStack_2b48 = uStack_2110;
    uStack_2b50 = uStack_2118;
    uStack_2b10 = uStack_20f8;
    uStack_2b00 = uStack_20e8;
    uStack_2ae8 = uStack_20c0;
    uStack_2af0 = uStack_20c8;
    uStack_2ac8 = uStack_20d0;
    uStack_2ad0 = uStack_20d8;
    uStack_2ab8 = uStack_20b0;
    uStack_2ac0 = uStack_20b8;
    uStack_2a78 = uStack_20a0;
    uStack_2a68 = uStack_2080;
    uStack_2a70 = uStack_2088;
    uStack_2a58 = uStack_2020;
    uStack_2a60 = uStack_2028;
    bVar15 = bStack_2150 & 1;
    bVar3 = bStack_2187 & 1;
    bVar5 = bStack_228f & 1;
    bVar8 = bStack_22bf & 1;
    uStack_2bb0 = uStack_2070;
    uStack_2b08 = uStack_2060;
    uStack_2ad8 = uStack_2050;
    uStack_2a90 = uStack_2030;
    bStack_2b84 = bStack_2065;
    bStack_2b9c = bStack_2066;
    bStack_2bb8 = bStack_2067;
    bStack_2bbc = bStack_2068;
    bStack_2bc0 = bStack_2077;
    bStack_2bc4 = bStack_20a7;
    bStack_2bc8 = bStack_20a8;
    bStack_2bcc = bStack_20df;
    func_0x000107c610b4(auStack_2420,auStack_2288,0x101);
    uStack_11a0 = uStack_22a8;
    uVar10 = uStack_2090;
    bVar1 = bStack_2098;
    bVar2 = bStack_2078;
    iVar6 = iStack_2180;
  }
  uStack_26b8 = (undefined2)uStack_11a0;
  uStack_26b6 = (undefined6)((ulong)uStack_11a0 >> 0x10);
  auStack_2728[0] = uVar11;
  bStack_26cf = bVar8;
  bStack_269f = bVar5;
  func_0x000107c610b4(auStack_2698,auStack_2420,0x101);
  uStack_2568 = uStack_2ba8;
  uStack_2588 = uStack_2b98;
  uStack_2570 = uStack_2b78;
  uStack_2578 = uStack_2b80;
  uStack_2558 = uStack_2b90;
  uStack_2548 = uStack_2b38;
  uStack_2530 = uStack_2b28;
  uStack_2538 = uStack_2b30;
  uStack_2520 = uStack_2b48;
  uStack_2528 = uStack_2b50;
  uStack_2510 = uStack_2b58;
  uStack_2518 = uStack_2b60;
  uStack_2508 = uStack_2b10;
  uStack_24f8 = uStack_2b00;
  bStack_24ef = bStack_2bcc & 1;
  uStack_24e0 = uStack_2ac8;
  uStack_24e8 = uStack_2ad0;
  uStack_24d0 = uStack_2ae8;
  uStack_24d8 = uStack_2af0;
  uStack_24c0 = uStack_2ab8;
  uStack_24c8 = uStack_2ac0;
  bStack_24b8 = bStack_2bc8 & 1;
  bStack_24b7 = bStack_2bc4 & 1;
  uStack_24b0 = uStack_2a78;
  bStack_24a8 = bVar1 & 1;
  uStack_2490 = uStack_2a68;
  uStack_2498 = uStack_2a70;
  bStack_2488 = bVar2 & 1;
  bStack_2487 = bStack_2bc0 & 1;
  uStack_2480 = uStack_2bb0;
  bStack_2478 = bStack_2bbc & 1;
  bStack_2477 = bStack_2bb8 & 1;
  bStack_2476 = bStack_2b9c & 1;
  bStack_2475 = bStack_2b84 & 1;
  uStack_2470 = uStack_2b08;
  uStack_2460 = uStack_2ad8;
  uStack_2440 = uStack_2a90;
  uStack_2430 = uStack_2a58;
  uStack_2438 = uStack_2a60;
  bStack_2597 = bVar3;
  bStack_2560 = bVar15;
  if (uVar10 < 4) {
    uVar9 = *(undefined8 *)(&UNK_10dbce3e0 + uVar10 * 8);
    func_0x0001034ae7c4(&uStack_2318,auStack_2a38,0x112dcbc48,&UNK_10d98e2c0);
    func_0x0001035c6fd0(uVar9,1);
    FUN_1035ccec0(iVar6 == 3,0,0xc000000000000000);
    func_0x00010178e244(auStack_2728);
    func_0x00010178e3b8(&uStack_1d70);
    return;
  }
  func_0x0001034ae7c4(&uStack_2318,auStack_2a38,0x112dcbc48,&UNK_10d98e2c0);
  func_0x000107c60614(&UNK_110798b90,auStack_2730,&UNK_110798b90,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1034acaa4);
  (*pcVar4)();
}



/* Entry: 1034acaa4; end: 1034ad693;  */

void FUN_1034acaa4(undefined8 param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long extraout_x12;
  long lVar11;
  long lVar12;
  long lVar13;
  long alStack_7e0 [4];
  long lStack_7c0;
  long lStack_7b8;
  long lStack_7b0;
  ulong uStack_7a8;
  long lStack_7a0;
  long lStack_798;
  undefined8 uStack_790;
  undefined1 auStack_788 [608];
  undefined1 auStack_528 [608];
  undefined1 auStack_2c8 [616];
  
  lVar2 = 0;
  uStack_7a8 = param_3;
  uStack_790 = param_1;
  func_0x000104723a94();
  alStack_7e0[1] = *(long *)(lVar2 + -8);
  alStack_7e0[2] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_7e0[1] + 0x40));
  lVar9 = (long)alStack_7e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112db3e90;
  alStack_7e0[3] = lVar9;
  func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_7c0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  lVar2 = 0x112db3cd0;
  lStack_7b8 = lVar9;
  func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_01;
  lVar2 = 0;
  lStack_7a0 = lVar9;
  func_0x00010471853c();
  lVar13 = *(long *)(lVar2 + -8);
  lStack_798 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar9 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112db3a00;
  lStack_7b0 = lVar9;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_03;
  lVar2 = 0x112dcbf08;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar9 - extraout_x8_04;
  lVar3 = 0;
  func_0x000104760f24();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar2 = lVar12 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x0001046d90b0();
  func_0x0001034ae7c4(param_2 + *(int *)(lVar4 + 0x28),lVar9,0x112db3a00,&UNK_10d95dff0);
  lVar5 = 0;
  func_0x00010477ea9c();
  lVar4 = lVar9;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar9,1,lVar5);
  if ((int)lVar4 == 1) {
    func_0x0001034ae71c(lVar9,0x112db3a00,&UNK_10d95dff0);
    (**(code **)(lVar11 + 0x38))(lVar12,1,1,lVar3);
LAB_1034acd74:
    uVar6 = 0x112dcbf08;
    puVar7 = &UNK_10d98e580;
    lVar2 = lVar12;
LAB_1034acd88:
    func_0x0001034ae71c(lVar2,uVar6,puVar7);
  }
  else {
    func_0x0001034ae7c4(lVar9 + *(int *)(lVar5 + 0x14),lVar12,0x112dcbf08,&UNK_10d98e580);
    func_0x0001034ae660(lVar9,&SUB_10477ea9c);
    lVar4 = lVar12;
    (**(code **)(lVar11 + 0x30))(lVar12,1,lVar3);
    if ((int)lVar4 == 1) goto LAB_1034acd74;
    func_0x0001034ae5d8(lVar12,lVar2,&SUB_104760f24);
    lVar4 = lStack_7a0;
    lVar5 = *(long *)(lVar2 + *(int *)(lVar3 + 0x44));
    if (lVar5 == 0x15) {
LAB_1034acdf8:
      func_0x000107c610b4(auStack_2c8,lVar2 + *(int *)(lVar3 + 0x1c),0x260);
      func_0x0001034ae7c4(auStack_2c8,auStack_528,0x112db3ce8,&UNK_10d98ff60);
      puVar7 = &SUB_104760f24;
LAB_1034ace34:
      func_0x0001034ae660(lVar2,puVar7);
LAB_1034ace38:
      func_0x000107c610b4(auStack_788,auStack_2c8,0x260);
      goto LAB_1034acd94;
    }
    if (lVar5 == 10) {
      func_0x0001034ae7c4(lVar2 + *(int *)(lVar3 + 0x20),lStack_7a0,0x112db3cd0,&UNK_10d95e230);
      lVar5 = lStack_798;
      lVar9 = lVar4;
      (**(code **)(lVar13 + 0x30))(lVar4,1,lStack_798);
      lVar3 = lStack_7b0;
      if ((int)lVar9 == 1) {
        func_0x0001034ae660(lVar2,&SUB_104760f24);
        uVar6 = 0x112db3cd0;
        puVar7 = &UNK_10d95e230;
        lVar2 = lVar4;
      }
      else {
        func_0x0001034ae5d8(lVar4,lStack_7b0,&SUB_10471853c);
        lVar4 = alStack_7e0[3];
        puVar1 = (ulong *)(lVar3 + *(int *)(lVar5 + 0x1c));
        if ((char)puVar1[1] != '\x01') {
          uVar8 = *puVar1;
          if (uStack_7a8 == uVar8) goto LAB_1034acf1c;
          uVar10 = uStack_7a8;
          if ((long)uVar8 < (long)uStack_7a8) goto LAB_1034acfac;
LAB_1034acfb0:
          if (((long)uVar10 < 0) ||
             (lVar5 = *(long *)(lVar3 + *(int *)(lVar5 + 0x18)), *(ulong *)(lVar5 + 0x10) <= uVar10)
             ) goto LAB_1034ad098;
          func_0x0001034ae61c(lVar5 + ((ulong)*(byte *)(alStack_7e0[1] + 0x50) + 0x20 &
                                      ((ulong)*(byte *)(alStack_7e0[1] + 0x50) ^ 0xffffffffffffffff)
                                      ) + *(long *)(alStack_7e0[1] + 0x48) * uVar10,alStack_7e0[3]);
          func_0x0001034ae660(lVar2,&SUB_104760f24);
          func_0x0001034ae660(lVar3,&SUB_10471853c);
          lVar2 = lStack_7c0;
          func_0x0001034ae7c4(lVar4 + *(int *)(alStack_7e0[2] + 0x14),lStack_7c0,0x112db3e90,
                              &UNK_10d95e3e0);
          func_0x0001034ae660(lVar4,&SUB_104723a94);
          lVar3 = 0;
          func_0x00010472f4dc();
          lVar4 = lVar2;
          (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar2,1,lVar3);
          if ((int)lVar4 == 1) {
            func_0x0001034ae71c(lVar2,0x112db3e90,&UNK_10d95e3e0);
            func_0x000101551a34(auStack_2c8);
          }
          else {
            func_0x000107c610b4(auStack_528,lVar2 + *(int *)(lVar3 + 0x14),0x260);
            func_0x0001034ae7c4(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
            func_0x0001034ae660(lVar2,&SUB_10472f4dc);
            func_0x000107c610b4(auStack_2c8,auStack_528,0x260);
          }
          goto LAB_1034ace38;
        }
        if (uStack_7a8 != 0) {
          if (0 < (long)uStack_7a8) {
LAB_1034acfac:
            uVar10 = uStack_7a8 - 1;
            goto LAB_1034acfb0;
          }
LAB_1034ad098:
          func_0x0001034ae660(lVar2,&SUB_104760f24);
          func_0x0001034ae660(lVar3,&SUB_10471853c);
          goto LAB_1034acd8c;
        }
LAB_1034acf1c:
        func_0x0001034ae660(lVar2,&SUB_104760f24);
        lVar2 = lStack_7b8;
        func_0x0001034ae7c4(lVar3 + *(int *)(lVar5 + 0x14),lStack_7b8,0x112db3e90,&UNK_10d95e3e0);
        func_0x0001034ae660(lVar3,&SUB_10471853c);
        lVar3 = 0;
        func_0x00010472f4dc();
        lVar4 = lVar2;
        (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar2,1,lVar3);
        if ((int)lVar4 != 1) {
          func_0x000107c610b4(auStack_2c8,lVar2 + *(int *)(lVar3 + 0x14),0x260);
          func_0x0001034ae7c4(auStack_2c8,auStack_528,0x112db3ce8,&UNK_10d98ff60);
          puVar7 = &SUB_10472f4dc;
          goto LAB_1034ace34;
        }
        uVar6 = 0x112db3e90;
        puVar7 = &UNK_10d95e3e0;
      }
      goto LAB_1034acd88;
    }
    if (lVar5 == 3) goto LAB_1034acdf8;
    func_0x0001034ae660(lVar2,&SUB_104760f24);
  }
LAB_1034acd8c:
  func_0x000101551a34(auStack_788);
LAB_1034acd94:
  func_0x000107c610b4(uStack_790,auStack_788,0x260);
  return;
}



/* Entry: 1034ad694; end: 1034ae5d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1034ad694(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long extraout_x8;
  long extraout_x8_00;
  byte bVar16;
  long unaff_x21;
  long lVar17;
  long lVar18;
  double dVar19;
  undefined2 auStack_40c0 [4];
  undefined8 auStack_40b8 [2];
  undefined2 auStack_40a8 [4];
  undefined8 uStack_40a0;
  undefined1 auStack_4098 [8];
  undefined8 uStack_4090;
  undefined1 auStack_4088 [8];
  undefined8 uStack_4080;
  undefined2 auStack_4078 [4];
  long lStack_4070;
  undefined1 auStack_4068 [8];
  undefined8 auStack_4060 [2];
  undefined1 auStack_4050 [8];
  undefined8 auStack_4048 [3];
  undefined1 auStack_4030 [8];
  undefined8 uStack_4028;
  undefined1 auStack_4020 [8];
  undefined8 uStack_4018;
  undefined1 auStack_4010 [8];
  long alStack_4008 [2];
  undefined1 auStack_3ff8 [8];
  undefined8 uStack_3ff0;
  undefined2 auStack_3fe8 [4];
  undefined8 auStack_3fe0 [6];
  undefined2 uStack_3fb0;
  undefined1 auStack_3fae [6];
  undefined8 uStack_3fa8;
  undefined1 auStack_3fa0 [8];
  undefined8 auStack_3f98 [3];
  undefined2 auStack_3f80 [4];
  undefined8 uStack_3f78;
  undefined4 auStack_3f70 [2];
  undefined8 uStack_3f68;
  undefined1 auStack_3f60 [8];
  undefined8 uStack_3f58;
  undefined1 auStack_3f50 [8];
  undefined8 uStack_3f48;
  undefined1 auStack_3f40 [8];
  undefined8 auStack_3f38 [3];
  undefined1 auStack_3f20 [16];
  undefined1 auStack_3f10 [8];
  undefined8 uStack_3f08;
  uint uStack_3efc;
  undefined8 uStack_3ef8;
  uint uStack_3ef0;
  uint uStack_3eec;
  uint uStack_3ee8;
  uint uStack_3ee4;
  undefined8 uStack_3ee0;
  undefined8 uStack_3ed8;
  uint uStack_3ecc;
  undefined8 uStack_3ec8;
  undefined8 uStack_3ec0;
  undefined8 uStack_3eb8;
  long lStack_3eb0;
  undefined8 uStack_3ea8;
  undefined8 uStack_3ea0;
  uint uStack_3e94;
  undefined8 uStack_3e90;
  undefined8 uStack_3e88;
  undefined8 uStack_3e80;
  uint uStack_3e74;
  undefined8 uStack_3e70;
  undefined8 uStack_3e68;
  uint uStack_3e5c;
  undefined8 uStack_3e58;
  undefined8 uStack_3e50;
  uint uStack_3e48;
  uint uStack_3e44;
  undefined8 uStack_3e40;
  uint uStack_3e38;
  uint uStack_3e34;
  undefined8 uStack_3e30;
  undefined8 uStack_3e28;
  uint uStack_3e18;
  uint uStack_3e14;
  undefined8 uStack_3e10;
  undefined8 uStack_3e08;
  undefined8 uStack_3e00;
  undefined8 uStack_3df8;
  undefined8 uStack_3de8;
  undefined8 uStack_3de0;
  undefined8 uStack_3dd8;
  uint uStack_3dcc;
  uint uStack_3dc8;
  uint uStack_3dc4;
  undefined8 uStack_3dc0;
  uint uStack_3db4;
  undefined8 uStack_3db0;
  undefined8 uStack_3da8;
  undefined8 uStack_3d98;
  undefined8 uStack_3d90;
  undefined8 uStack_3d88;
  undefined8 uStack_3d80;
  undefined8 uStack_3d78;
  undefined8 uStack_3d68;
  uint uStack_3d5c;
  uint uStack_3d58;
  uint uStack_3d54;
  undefined8 uStack_3d50;
  undefined8 uStack_3d48;
  uint uStack_3d34;
  uint uStack_3d30;
  uint uStack_3d2c;
  uint uStack_3d28;
  uint uStack_3d24;
  undefined8 uStack_3d20;
  undefined8 uStack_3d18;
  uint uStack_3d10;
  uint uStack_3d0c;
  long lStack_3d08;
  long lStack_3d00;
  undefined8 uStack_3cf8;
  undefined1 *puStack_3cf0;
  long lStack_3ce8;
  byte abStack_3cc0 [776];
  undefined1 auStack_39b8 [776];
  undefined1 auStack_36b0 [1552];
  long lStack_30a0;
  undefined *puStack_3098;
  long lStack_3090;
  undefined1 auStack_2d98 [776];
  undefined1 auStack_2a90 [776];
  undefined1 auStack_2788 [32];
  undefined1 uStack_2768;
  undefined8 uStack_2760;
  undefined8 uStack_2758;
  undefined8 uStack_2750;
  undefined1 uStack_2748;
  undefined8 uStack_2740;
  undefined8 uStack_2738;
  undefined1 uStack_272f;
  undefined8 uStack_2728;
  undefined1 uStack_2720;
  undefined8 uStack_2718;
  undefined1 uStack_2710;
  undefined1 uStack_2700;
  undefined1 uStack_26ff;
  undefined1 auStack_26f8 [257];
  undefined1 uStack_25f7;
  undefined8 uStack_25f0;
  undefined8 uStack_25e8;
  undefined1 uStack_25e0;
  undefined8 uStack_25d8;
  undefined8 uStack_25d0;
  undefined8 uStack_25c8;
  undefined1 uStack_25c0;
  undefined8 uStack_25b8;
  undefined1 uStack_25b0;
  undefined8 uStack_25a8;
  undefined1 uStack_25a0;
  undefined8 uStack_2598;
  undefined8 uStack_2590;
  undefined8 uStack_2588;
  undefined8 uStack_2580;
  undefined8 uStack_2578;
  undefined8 uStack_2570;
  undefined8 uStack_2568;
  undefined1 uStack_2560;
  undefined8 uStack_2558;
  undefined1 uStack_2550;
  byte bStack_254f;
  undefined8 uStack_2548;
  undefined8 uStack_2540;
  undefined8 uStack_2538;
  undefined8 uStack_2530;
  undefined8 uStack_2528;
  undefined8 uStack_2520;
  byte bStack_2518;
  byte bStack_2517;
  undefined1 uStack_2516;
  undefined8 uStack_2510;
  byte bStack_2508;
  undefined8 uStack_2500;
  undefined8 uStack_24f8;
  undefined8 uStack_24f0;
  byte bStack_24e8;
  byte bStack_24e7;
  undefined8 uStack_24e0;
  byte bStack_24d8;
  byte bStack_24d7;
  byte bStack_24d6;
  byte bStack_24d5;
  undefined8 uStack_24d0;
  undefined1 uStack_24c8;
  undefined8 uStack_24c0;
  undefined1 uStack_24b8;
  undefined8 uStack_24b0;
  undefined1 uStack_24a8;
  undefined8 uStack_24a0;
  undefined8 uStack_2498;
  undefined8 uStack_2490;
  undefined1 uStack_2488;
  undefined1 auStack_2480 [264];
  undefined1 uStack_2378;
  undefined1 uStack_2377;
  double dStack_2370;
  undefined1 uStack_2368;
  long lStack_2360;
  byte bStack_2358;
  undefined8 uStack_2350;
  undefined8 uStack_2348;
  undefined8 uStack_2340;
  byte bStack_2338;
  undefined1 uStack_2337;
  undefined8 uStack_2330;
  undefined8 uStack_2328;
  undefined1 uStack_2320;
  byte bStack_231f;
  undefined8 uStack_2318;
  byte bStack_2310;
  undefined8 uStack_2308;
  byte bStack_2300;
  byte bStack_22f0;
  byte bStack_22ef;
  undefined1 auStack_22e8 [257];
  byte bStack_21e7;
  undefined8 uStack_21e0;
  undefined8 uStack_21d8;
  byte bStack_21d0;
  undefined8 uStack_21c8;
  undefined8 uStack_21c0;
  undefined8 uStack_21b8;
  byte bStack_21b0;
  undefined8 uStack_21a8;
  byte bStack_21a0;
  undefined8 uStack_2198;
  byte bStack_2190;
  undefined8 uStack_2188;
  undefined8 uStack_2180;
  undefined8 uStack_2178;
  undefined8 uStack_2170;
  undefined8 uStack_2168;
  undefined8 uStack_2160;
  undefined8 uStack_2158;
  byte bStack_2150;
  undefined8 uStack_2148;
  byte bStack_2140;
  byte bStack_213f;
  undefined8 uStack_2138;
  undefined8 uStack_2130;
  undefined8 uStack_2128;
  undefined8 uStack_2120;
  undefined8 uStack_2118;
  undefined8 uStack_2110;
  byte bStack_2108;
  byte bStack_2107;
  byte bStack_2106;
  undefined8 uStack_2100;
  byte bStack_20f8;
  undefined8 uStack_20f0;
  undefined8 uStack_20e8;
  undefined8 uStack_20e0;
  byte bStack_20d8;
  byte bStack_20d7;
  undefined8 uStack_20d0;
  byte bStack_20c8;
  byte bStack_20c7;
  byte bStack_20c6;
  byte bStack_20c5;
  undefined8 uStack_20c0;
  byte bStack_20b8;
  undefined8 uStack_20b0;
  byte bStack_20a8;
  undefined8 uStack_20a0;
  byte bStack_2098;
  undefined8 uStack_2090;
  undefined8 uStack_2088;
  undefined8 uStack_2080;
  byte bStack_2078;
  long lStack_2070;
  undefined8 uStack_2068;
  long lStack_2060;
  long lStack_2058;
  undefined *puStack_2050;
  long lStack_2048;
  undefined1 uStack_2040;
  undefined1 uStack_203f;
  double dStack_2038;
  undefined1 uStack_2030;
  long lStack_2028;
  byte bStack_2020;
  undefined8 uStack_2018;
  undefined8 uStack_2010;
  undefined8 uStack_2008;
  undefined1 uStack_2000;
  undefined8 uStack_1ff8;
  undefined8 uStack_1ff0;
  undefined1 uStack_1fe7;
  undefined8 uStack_1fe0;
  undefined1 uStack_1fd8;
  undefined8 uStack_1fd0;
  undefined1 uStack_1fc8;
  undefined1 uStack_1fb8;
  undefined1 uStack_1fb7;
  undefined1 auStack_1fb0 [257];
  byte bStack_1eaf;
  undefined8 uStack_1ea8;
  undefined8 uStack_1ea0;
  byte bStack_1e98;
  undefined8 uStack_1e90;
  undefined8 uStack_1e88;
  undefined8 uStack_1e80;
  byte bStack_1e78;
  undefined8 uStack_1e70;
  byte bStack_1e68;
  undefined8 uStack_1e60;
  byte bStack_1e58;
  undefined8 uStack_1e50;
  undefined8 uStack_1e48;
  undefined8 uStack_1e40;
  undefined8 uStack_1e38;
  undefined8 uStack_1e30;
  undefined8 uStack_1e28;
  undefined8 uStack_1e20;
  byte bStack_1e18;
  undefined8 uStack_1e10;
  byte bStack_1e08;
  byte bStack_1e07;
  undefined8 uStack_1e00;
  undefined8 uStack_1df8;
  undefined8 uStack_1df0;
  undefined8 uStack_1de8;
  undefined8 uStack_1de0;
  undefined8 uStack_1dd8;
  byte bStack_1dd0;
  byte bStack_1dcf;
  byte bStack_1dce;
  undefined8 uStack_1dc8;
  byte bStack_1dc0;
  undefined8 uStack_1db8;
  undefined8 uStack_1db0;
  undefined8 uStack_1da8;
  byte bStack_1da0;
  byte bStack_1d9f;
  undefined8 uStack_1d98;
  byte bStack_1d90;
  byte bStack_1d8f;
  byte bStack_1d8e;
  byte bStack_1d8d;
  undefined8 uStack_1d88;
  byte bStack_1d80;
  undefined8 uStack_1d78;
  byte bStack_1d70;
  undefined8 uStack_1d68;
  byte bStack_1d60;
  undefined8 uStack_1d58;
  undefined8 uStack_1d50;
  undefined8 uStack_1d48;
  byte bStack_1d40;
  undefined1 auStack_1d38 [608];
  undefined1 auStack_1ad8 [320];
  undefined1 auStack_1998 [288];
  undefined1 auStack_1878 [480];
  byte bStack_1698;
  undefined1 auStack_1618 [1448];
  undefined1 auStack_1070 [776];
  undefined1 auStack_d68 [776];
  undefined1 auStack_a60 [776];
  undefined1 auStack_758 [264];
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined1 auStack_618 [16];
  undefined8 uStack_608;
  undefined1 uVar3;
  undefined1 uVar4;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = 0x112dcbcf8;
  puVar14 = &UNK_10d98e3f0;
  lVar13 = param_4;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  puStack_3cf0 = auStack_3f10 + -extraout_x8;
  func_0x0001046d90b0();
  lVar18 = *(long *)(lVar9 + -8);
  lVar10 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar17 = (long)(auStack_3f10 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1035c72ac();
  lVar15 = lVar13;
  uStack_3cf8 = param_3;
  lStack_3ce8 = param_2;
  lStack_2058 = lVar10;
  puStack_2050 = puVar14;
  lStack_2048 = lVar13;
  FUN_1034b0fc0(param_1);
  lVar8 = lStack_3ce8;
  if (unaff_x21 != 0) {
    func_0x00010006c090(lVar10,puVar14);
    func_0x000107c61574(lVar13);
    return param_4;
  }
  lStack_3eb0 = lVar9;
  lStack_3d08 = lVar18;
  lStack_3d00 = lVar17;
  lStack_2070 = param_2;
  uStack_2068 = param_3;
  lStack_2060 = lVar15;
  FUN_1034ab4fc(&lStack_2070,&lStack_2058,lStack_3ce8);
  func_0x000107c610b4(&uStack_2378,lVar8 + 0x620,0x301);
  iVar7 = (int)&uStack_2378;
  func_0x00010178e1e4();
  if (iVar7 == 1) {
    func_0x000100406b98(&lStack_30a0);
    func_0x000107c610b4(auStack_758,&lStack_30a0,0x101);
    uStack_648 = 1;
    uStack_650 = 0;
    uStack_638 = 0;
    uStack_640 = 0;
    uStack_628 = 0;
    uStack_630 = 0;
    *(undefined1 *)(lVar17 + -0x10) = 1;
    *(undefined8 *)(lVar17 + -0x18) = 0;
    *(undefined1 *)(lVar17 + -0x30) = 1;
    *(undefined8 *)(lVar17 + -0x38) = 0;
    *(undefined1 *)(lVar17 + -0x40) = 1;
    *(undefined8 *)(lVar17 + -0x48) = 0;
    *(undefined1 *)(lVar17 + -0x50) = 1;
    *(undefined8 *)(lVar17 + -0x58) = 0;
    *(undefined4 *)(lVar17 + -0x60) = 0;
    *(undefined8 *)(lVar17 + -0x68) = 0;
    *(undefined2 *)(lVar17 + -0x70) = 0;
    *(undefined8 *)(lVar17 + -0x78) = 0;
    *(undefined1 *)(lVar17 + -0x90) = 0;
    *(undefined8 *)(lVar17 + -0x98) = 0;
    *(undefined1 *)(lVar17 + -0x9e) = 2;
    *(undefined2 *)(lVar17 + -0xa0) = 0;
    *(undefined8 *)(lVar17 + -0xb8) = 0;
    *(undefined8 *)(lVar17 + -0xc0) = 0;
    *(undefined8 *)(lVar17 + -0xa8) = 0;
    *(undefined8 *)(lVar17 + -0xb0) = 0;
    *(undefined8 *)(lVar17 + -200) = 0;
    *(undefined8 *)(lVar17 + -0xd0) = 0;
    *(undefined2 *)(lVar17 + -0xd8) = 1;
    *(undefined8 *)(lVar17 + -0xe0) = 0;
    *(undefined1 *)(lVar17 + -0xe8) = 1;
    *(undefined8 **)(lVar17 + -0xf8) = &uStack_650;
    *(undefined8 *)(lVar17 + -0xf0) = 0;
    *(undefined1 *)(lVar17 + -0x100) = 1;
    *(undefined8 *)(lVar17 + -0x108) = 0;
    *(undefined1 *)(lVar17 + -0x110) = 1;
    *(undefined8 *)(lVar17 + -0x118) = 0;
    *(undefined1 *)(lVar17 + -0x120) = 0;
    *(undefined8 *)(lVar17 + -0x128) = 0;
    *(undefined8 *)(lVar17 + -0x130) = 0;
    *(undefined8 *)(lVar17 + -0x138) = 1;
    *(undefined1 *)(lVar17 + -0x140) = 1;
    *(undefined8 *)(lVar17 + -0x148) = 0;
    *(undefined8 *)(lVar17 + -0x150) = 0;
    *(undefined1 *)(lVar17 + -0x158) = 0;
    *(undefined1 **)(lVar17 + -0x160) = auStack_758;
    *(undefined2 *)(lVar17 + -0x168) = 1;
    *(undefined8 *)(lVar17 + -0x170) = 0;
    *(undefined1 *)(lVar17 + -0x178) = 1;
    *(undefined8 *)(lVar17 + -0x180) = 0;
    *(undefined1 *)(lVar17 + -0x188) = 1;
    *(undefined8 *)(lVar17 + -400) = 0;
    *(undefined2 *)(lVar17 + -0x198) = 0;
    *(undefined8 *)(lVar17 + -0x1a0) = 0;
    *(undefined8 *)(lVar17 + -0x1a8) = 0;
    *(undefined2 *)(lVar17 + -0x1b0) = 1;
    *(undefined8 *)(lVar17 + -0x20) = 0;
    *(undefined8 *)(lVar17 + -0x28) = 0;
    *(undefined8 *)(lVar17 + -0x80) = 0;
    *(undefined8 *)(lVar17 + -0x88) = 0;
    func_0x00010425b4fc(&uStack_2040,0,0,0,0,0,1,0,0,0);
    uStack_3d10 = (uint)bStack_1d40;
    uStack_3d68 = uStack_1d58;
    uStack_3d18 = uStack_1d48;
    uStack_3d20 = uStack_1d50;
    uStack_3d98 = uStack_1d68;
    uStack_3d24 = (uint)bStack_1d60;
    uStack_3dc0 = uStack_1d78;
    uStack_3d28 = (uint)bStack_1d70;
    uStack_3de8 = uStack_1d88;
    uStack_3d2c = (uint)bStack_1d80;
    uStack_3d30 = (uint)bStack_1d8d;
    uStack_3d34 = (uint)bStack_1d8e;
    uStack_3d58 = (uint)bStack_1d8f;
    uStack_3d5c = (uint)bStack_1d90;
    uStack_3e40 = uStack_1d98;
    uStack_3db4 = (uint)bStack_1d9f;
    uStack_3dcc = (uint)bStack_1da0;
    uStack_3d48 = uStack_1da8;
    uStack_3d50 = uStack_1db0;
    uStack_3e34 = (uint)bStack_1dc0;
    uStack_3e58 = uStack_1dc8;
    uStack_3e50 = uStack_1db8;
    uStack_3d54 = (uint)bStack_1dce;
    uStack_3e48 = (uint)bStack_1dd0;
    uStack_3e44 = (uint)bStack_1dcf;
    uStack_3d88 = uStack_1df8;
    uStack_3d90 = uStack_1e00;
    uStack_3d78 = uStack_1dd8;
    uStack_3d80 = uStack_1de0;
    uStack_3da8 = uStack_1de8;
    uStack_3db0 = uStack_1df0;
    uStack_3e5c = (uint)bStack_1e07;
    uStack_3dc4 = (uint)bStack_1e08;
    uStack_3dc8 = (uint)bStack_1e18;
    uStack_3dd8 = uStack_1e48;
    uStack_3de0 = uStack_1e50;
    uStack_3e08 = uStack_1e28;
    uStack_3e10 = uStack_1e30;
    uStack_3df8 = uStack_1e38;
    uStack_3e00 = uStack_1e40;
    uStack_3e70 = uStack_1e20;
    uStack_3e68 = uStack_1e10;
    uStack_3e18 = (uint)bStack_1e68;
    uStack_3e14 = (uint)bStack_1e58;
    uStack_3e74 = (uint)bStack_1e78;
    uStack_3e28 = uStack_1e88;
    uStack_3e30 = uStack_1e90;
    uStack_3e88 = uStack_1e70;
    uStack_3e80 = uStack_1e60;
    uStack_3e90 = uStack_1e80;
    uStack_3e38 = (uint)bStack_1e98;
    uStack_3ea8 = uStack_1ea8;
    uStack_3ea0 = uStack_1ea0;
    uStack_3e94 = (uint)bStack_1eaf;
    func_0x000107c610b4(auStack_2480,auStack_1fb0,0x101);
    uStack_3d0c = (uint)bStack_2020;
    lVar8 = lStack_2028;
    dVar19 = dStack_2038;
    uVar2 = uStack_203f;
    uVar3 = uStack_2040;
    uVar4 = uStack_2030;
  }
  else {
    lStack_30a0 = CONCAT71(lStack_30a0._1_7_,uStack_2378);
    auStack_36b0[0] = uStack_2377;
    auStack_2788[0] = uStack_2368;
    uStack_3d0c = (uint)bStack_2358;
    uStack_3eb8 = uStack_2348;
    uStack_3ec0 = uStack_2350;
    uStack_3ec8 = uStack_2340;
    uStack_3ecc = (uint)bStack_2338;
    auStack_2a90[0] = uStack_2337;
    uStack_3ed8 = uStack_2328;
    uStack_3ee0 = uStack_2330;
    auStack_39b8[0] = uStack_2320;
    abStack_3cc0[0] = bStack_231f;
    uStack_3ee8 = (uint)bStack_2300;
    uStack_3ee4 = (uint)bStack_2310;
    uStack_3eec = (uint)bStack_22f0;
    uStack_3e38 = (uint)bStack_21d0;
    uStack_3e28 = uStack_21c0;
    uStack_3e30 = uStack_21c8;
    uStack_3e18 = (uint)bStack_21a0;
    uStack_3e14 = (uint)bStack_2190;
    uStack_3dd8 = uStack_2180;
    uStack_3de0 = uStack_2188;
    uStack_3e08 = uStack_2160;
    uStack_3e10 = uStack_2168;
    uStack_3df8 = uStack_2170;
    uStack_3e00 = uStack_2178;
    uStack_3dc8 = (uint)bStack_2150;
    uStack_3dc4 = (uint)bStack_2140;
    uStack_3da8 = uStack_2120;
    uStack_3db0 = uStack_2128;
    uStack_3d88 = uStack_2130;
    uStack_3d90 = uStack_2138;
    uStack_3d78 = uStack_2110;
    uStack_3d80 = uStack_2118;
    uStack_3d54 = (uint)bStack_2106;
    uStack_3d48 = uStack_20e0;
    uStack_3d50 = uStack_20e8;
    uStack_3d2c = (uint)bStack_20b8;
    uStack_3d28 = (uint)bStack_20a8;
    uStack_3d24 = (uint)bStack_2098;
    uStack_3d18 = uStack_2080;
    uStack_3d20 = uStack_2088;
    uStack_3d10 = (uint)bStack_2078;
    uStack_3d30 = (uint)bStack_20c5;
    uStack_3d34 = (uint)bStack_20c6;
    uStack_3d58 = (uint)bStack_20c7;
    uStack_3d5c = (uint)bStack_20c8;
    uStack_3db4 = (uint)bStack_20d7;
    uStack_3dcc = (uint)bStack_20d8;
    uStack_3e34 = (uint)bStack_20f8;
    uStack_3e48 = (uint)bStack_2108;
    uStack_3e44 = (uint)bStack_2107;
    uStack_3e5c = (uint)bStack_213f;
    uStack_3e74 = bStack_21b0 & 1;
    uStack_3e94 = bStack_21e7 & 1;
    uStack_3ef0 = bStack_22ef & 1;
    uStack_3efc = bStack_231f & 1;
    uStack_3ef8 = uStack_2318;
    uStack_3f08 = uStack_2308;
    uStack_3ea8 = uStack_21e0;
    uStack_3ea0 = uStack_21d8;
    uStack_3e90 = uStack_21b8;
    uStack_3e88 = uStack_21a8;
    uStack_3e80 = uStack_2198;
    uStack_3e70 = uStack_2158;
    uStack_3e68 = uStack_2148;
    uStack_3e58 = uStack_2100;
    uStack_3e50 = uStack_20f0;
    uStack_3e40 = uStack_20d0;
    uStack_3de8 = uStack_20c0;
    uStack_3dc0 = uStack_20b0;
    uStack_3d98 = uStack_20a0;
    uStack_3d68 = uStack_2090;
    func_0x000107c610b4(auStack_2480,auStack_22e8,0x101);
    uStack_1fe7 = (undefined1)uStack_3efc;
    uStack_1fb7 = (undefined1)uStack_3ef0;
    uStack_1fb8 = (undefined1)uStack_3eec;
    uStack_2000 = (undefined1)uStack_3ecc;
    uStack_1fc8 = (undefined1)uStack_3ee8;
    uStack_1fd8 = (undefined1)uStack_3ee4;
    lVar8 = lStack_2360;
    uStack_2008 = uStack_3ec8;
    uStack_1fd0 = uStack_3f08;
    uStack_1fe0 = uStack_3ef8;
    uStack_1ff8 = uStack_3ee0;
    uStack_1ff0 = uStack_3ed8;
    uStack_2018 = uStack_3ec0;
    uStack_2010 = uStack_3eb8;
    dVar19 = dStack_2370;
    uVar2 = uStack_2377;
    uVar3 = uStack_2378;
    uVar4 = uStack_2368;
  }
  uVar5 = uStack_3d0c;
  uStack_2768 = (undefined1)uStack_3d0c;
  uStack_2760 = uStack_2018;
  uStack_2758 = uStack_2010;
  uStack_2750 = uStack_2008;
  uStack_2748 = uStack_2000;
  uStack_2740 = uStack_1ff8;
  uStack_2738 = uStack_1ff0;
  uStack_272f = uStack_1fe7;
  uStack_2728 = uStack_1fe0;
  uStack_2720 = uStack_1fd8;
  uStack_2718 = uStack_1fd0;
  uStack_2710 = uStack_1fc8;
  uStack_2700 = uStack_1fb8;
  uStack_26ff = uStack_1fb7;
  func_0x000107c610b4(auStack_26f8,auStack_2480,0x101);
  uStack_25f7 = (undefined1)uStack_3e94;
  uStack_25f0 = uStack_3ea8;
  uStack_25e8 = uStack_3ea0;
  uStack_25e0 = (undefined1)uStack_3e38;
  uStack_25c8 = uStack_3e90;
  uStack_25b8 = uStack_3e88;
  uStack_25d0 = uStack_3e28;
  uStack_25d8 = uStack_3e30;
  uStack_25c0 = (undefined1)uStack_3e74;
  uStack_25b0 = (undefined1)uStack_3e18;
  uStack_25a8 = uStack_3e80;
  uStack_25a0 = (undefined1)uStack_3e14;
  uStack_2590 = uStack_3dd8;
  uStack_2598 = uStack_3de0;
  uStack_2580 = uStack_3df8;
  uStack_2588 = uStack_3e00;
  uStack_2570 = uStack_3e08;
  uStack_2578 = uStack_3e10;
  uStack_2568 = uStack_3e70;
  uStack_2560 = (undefined1)uStack_3dc8;
  uStack_2558 = uStack_3e68;
  uStack_2550 = (undefined1)uStack_3dc4;
  bStack_254f = (byte)uStack_3e5c & 1;
  uStack_2540 = uStack_3d88;
  uStack_2548 = uStack_3d90;
  uStack_2530 = uStack_3da8;
  uStack_2538 = uStack_3db0;
  uStack_2520 = uStack_3d78;
  uStack_2528 = uStack_3d80;
  bStack_2518 = (byte)uStack_3e48 & 1;
  bStack_2517 = (byte)uStack_3e44 & 1;
  uStack_2516 = (undefined1)uStack_3d54;
  uStack_2510 = uStack_3e58;
  bStack_2508 = (byte)uStack_3e34 & 1;
  uStack_2500 = uStack_3e50;
  uStack_24f0 = uStack_3d48;
  uStack_24f8 = uStack_3d50;
  bStack_24e8 = (byte)uStack_3dcc & 1;
  bStack_24e7 = (byte)uStack_3db4 & 1;
  uStack_24e0 = uStack_3e40;
  bStack_24d8 = (byte)uStack_3d5c & 1;
  bStack_24d7 = (byte)uStack_3d58 & 1;
  bStack_24d6 = (byte)uStack_3d34 & 1;
  bStack_24d5 = (byte)uStack_3d30 & 1;
  uStack_24d0 = uStack_3de8;
  uStack_24c8 = (undefined1)uStack_3d2c;
  uStack_24c0 = uStack_3dc0;
  uStack_24b8 = (undefined1)uStack_3d28;
  uStack_24b0 = uStack_3d98;
  uStack_24a8 = (undefined1)uStack_3d24;
  uStack_24a0 = uStack_3d68;
  uStack_2490 = uStack_3d18;
  uStack_2498 = uStack_3d20;
  uStack_2488 = (undefined1)uStack_3d10;
  func_0x000107c610b4(auStack_a60,auStack_2788,0x301);
  func_0x0001034ae7c4(&uStack_2378,&lStack_30a0,0x112dcbc48,&UNK_10d98e2c0);
  FUN_1035c6ab4(uVar3,0,0xc000000000000000);
  func_0x0001035c6b5c(uVar2,0,0xc000000000000000);
  FUN_1035c6c04((float)dVar19,0,0xc000000000000000);
  puVar12 = puStack_3cf0;
  lVar13 = lStack_3d00;
  lVar10 = lStack_3d08;
  if (uVar5 != 1) {
    if (lVar8 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1034ae5d4);
      (*pcVar6)();
    }
    if (0x7fffffff < lVar8) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1034ae5d8);
      (*pcVar6)();
    }
    func_0x0001035c6d54(lVar8,0,0xc000000000000000);
  }
  func_0x0001035c6cac(uVar4,0,0xc000000000000000);
  lVar8 = lStack_3ce8;
  func_0x000107c610b4(auStack_1618,lStack_3ce8 + 8,0x5a8);
  func_0x000107c610b4(auStack_618,lVar8 + 8,0x5a8);
  iVar7 = (int)auStack_618;
  func_0x00010189c838();
  uVar1 = 0;
  if (iVar7 != 1) {
    uVar1 = uStack_608;
  }
  func_0x000103bfc9d0(puVar12,uVar1);
  puVar11 = puVar12;
  (**(code **)(lVar10 + 0x30))(puVar12,1,lStack_3eb0);
  if ((int)puVar11 == 1) {
    func_0x0001034ae71c(puVar12,0x112dcbcf8,&UNK_10d98e3f0);
    bVar16 = 0;
  }
  else {
    FUN_1034ae5d8(puVar12,lVar13,&SUB_1046d90b0);
    func_0x0001034acaa4(auStack_1d38,lVar13,0);
    func_0x0001034ae660(lVar13,&SUB_1046d90b0);
    func_0x000107c610b4(auStack_1878,auStack_1d38,0x260);
    iVar7 = (int)auStack_1878;
    func_0x0001015538ec();
    if (iVar7 == 1) {
      bVar16 = 0;
    }
    else {
      func_0x0001034ae71c(auStack_1d38,0x112db3ce8,&UNK_10d98ff60);
      bVar16 = bStack_1698;
    }
  }
  func_0x00010178e208(auStack_2788,&lStack_30a0);
  func_0x0001034cda38(auStack_a60,bVar16 & 1);
  func_0x0001035c6e8c();
  func_0x00010178e4b4(auStack_2a90);
  func_0x000107c610b4(&lStack_30a0,&uStack_2378,0x301);
  func_0x000107c610b4(auStack_2d98,auStack_2a90,0x301);
  iVar7 = (int)&lStack_30a0;
  func_0x00010178e1e4();
  if (iVar7 == 1) {
    iVar7 = (int)auStack_2d98;
    func_0x00010178e1e4();
    if (iVar7 != 1) {
LAB_1034ae320:
      func_0x000107c610b4(auStack_36b0,&lStack_30a0,0x609);
      func_0x0001034ae7c4(&uStack_2378,auStack_39b8,0x112dcbc48,&UNK_10d98e2c0);
      func_0x0001034ae71c(auStack_36b0,0x112dcbc98,&UNK_10d98e370);
      goto LAB_1034ae444;
    }
    func_0x000107c610b4(auStack_36b0,&lStack_30a0,0x301);
    func_0x0001034ae7c4(&uStack_2378,auStack_39b8,0x112dcbc48,&UNK_10d98e2c0);
    func_0x0001034ae71c(auStack_36b0,0x112dcbc48,&UNK_10d98e2c0);
  }
  else {
    func_0x000107c610b4(auStack_36b0,&lStack_30a0,0x301);
    iVar7 = (int)auStack_2d98;
    func_0x00010178e1e4();
    if (iVar7 == 1) goto LAB_1034ae320;
    func_0x000107c610b4(auStack_39b8,auStack_2d98,0x301);
    func_0x000107c610b4(auStack_d68,auStack_2d98,0x301);
    func_0x000107c610b4(auStack_1070,auStack_36b0,0x301);
    func_0x0001034ae7c4(&uStack_2378,abStack_3cc0,0x112dcbc48,&UNK_10d98e2c0);
    puVar12 = auStack_1070;
    func_0x00010425b9a0(puVar12,auStack_d68);
    func_0x0001034ae71c(auStack_39b8,0x112dcbc48,&UNK_10d98e2c0);
    func_0x0001034ae71c(&lStack_30a0,0x112dcbc48,&UNK_10d98e2c0);
    if (((ulong)puVar12 & 1) == 0) goto LAB_1034ae444;
  }
  lVar10 = lStack_2058;
  puVar14 = puStack_2050;
  lVar13 = lStack_2048;
  func_0x0001035c6dfc();
  lStack_30a0 = lVar10;
  puStack_3098 = puVar14;
  lStack_3090 = lVar13;
  func_0x00010365241c();
  func_0x0001035c6e8c(lStack_30a0,puStack_3098,lStack_3090);
LAB_1034ae444:
  func_0x0001000d224c(&lStack_30a0);
  lVar10 = lStack_30a0;
  lVar13 = lStack_30a0;
  func_0x000107c4258c();
  func_0x000107c615e8(lVar10);
  if ((int)lVar13 != 0) {
    FUN_1034b0e1c(auStack_1ad8,auStack_1618);
    FUN_1035c7104(auStack_1ad8);
  }
  FUN_1035c705c(1,0,0xc000000000000000);
  lVar13 = lStack_2060;
  uVar1 = uStack_2068;
  lVar10 = lStack_2070;
  func_0x00010006c00c(lStack_2070,uStack_2068);
  func_0x000107c6157c(lVar13);
  func_0x0001035c6970(lVar10,uVar1,lVar13);
  if ((*(ulong *)(lVar8 + 0xaa8) & 0xff) == 3) {
    func_0x00010006c090(lVar10,uVar1);
    func_0x000107c61574(lVar13);
    func_0x00010178e244(auStack_2788);
  }
  else {
    func_0x0001034ad150(auStack_1998,*(ulong *)(lVar8 + 0xaa8),*(undefined2 *)(lVar8 + 0xab0));
    func_0x0001035c71d8(auStack_1998);
    func_0x00010178e244(auStack_2788);
    func_0x00010006c090(lVar10,uVar1);
    func_0x000107c61574(lVar13);
  }
  lVar10 = lStack_2048;
  puVar14 = puStack_2050;
  lVar8 = lStack_2058;
  func_0x00010006c00c(lStack_2058,puStack_2050);
  func_0x000107c6157c(lVar10);
  func_0x00010006c090(lVar8,puVar14);
  func_0x000107c61574(lVar10);
  return lVar8;
}



/* Entry: 1034ae5d8; end: 1034ae69b;  */

undefined8 FUN_1034ae5d8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1034ae69c; end: 1034ae69f;  */

void FUN_1034ae69c(void)

{
  return;
}



/* Entry: 1034ae6a0; end: 1034ae6db;  */

undefined8 FUN_1034ae6a0(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x103652018)(param_2,param_1);
  return param_2;
}



/* Entry: 1034ae6dc; end: 1034ae6df;  */

void FUN_1034ae6dc(void)

{
  return;
}



/* Entry: 1034ae6e0; end: 1034ae80b;  */

undefined8 FUN_1034ae6e0(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x103652014)(param_2,param_1);
  return param_2;
}



/* Entry: 1034ae80c; end: 1034aef8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034ae80c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  long unaff_x21;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  undefined8 uStack_408;
  undefined8 uStack_3f0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 auStack_3c0 [192];
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  double dStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  double dStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  double dStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *apuStack_88 [3];
  
  lVar3 = 0;
  func_0x000100b91d00();
  lVar3 = param_4 + *(int *)(lVar3 + 0x88);
  uVar12 = *(undefined8 *)(lVar3 + 0x90);
  uVar13 = *(undefined8 *)(lVar3 + 0x98);
  func_0x000101682c20();
  uVar21 = 0;
  uVar15 = 0;
  if ((int)lVar3 != 1) {
    func_0x000107c61434(uVar13);
    uVar21 = uVar12;
    uVar15 = uVar13;
  }
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f73260);
  lVar4 = 0;
  func_0x0001034b716c();
  uVar12 = 7;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar21;
  *(undefined8 *)(lVar4 + 0x18) = uVar15;
  uVar21 = *param_5;
  uVar26 = param_5[3];
  uVar25 = param_5[2];
  *(undefined8 *)(lVar4 + 0x28) = param_5[1];
  *(undefined8 *)(lVar4 + 0x20) = uVar21;
  *(undefined8 *)(lVar4 + 0x38) = uVar26;
  *(undefined8 *)(lVar4 + 0x30) = uVar25;
  *(undefined1 *)(lVar4 + 0x40) = *(undefined1 *)(param_5 + 4);
  *(undefined8 *)(lVar4 + 0x48) = uVar19;
  *(undefined8 *)(lVar4 + 0x50) = uVar13;
  *(undefined8 *)(lVar4 + 0x58) = uVar17;
  func_0x000107c6157c(uVar19);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar17);
  lVar3 = param_3;
  FUN_1034b0fc0(param_2);
  if (unaff_x21 == 0) {
    FUN_1035a41d0(&puStack_148);
    uStack_158 = uStack_138;
    uStack_160 = uStack_140;
    uStack_3d0 = uStack_f8;
    uStack_408 = uStack_e0;
    uStack_3f0 = uStack_c8;
    uStack_3d8 = uStack_b0;
    uStack_178 = uStack_98;
    dStack_180 = dStack_a0;
    uStack_170 = uStack_90;
    uVar5 = *(ulong *)(param_3 + 0x940);
    if (uVar5 == 0) {
      uStack_470 = uStack_b8;
      uStack_468 = uStack_100;
      uStack_460 = uStack_118;
      func_0x000107c61574(lVar4);
      uVar5 = uStack_e8;
      puVar14 = puStack_148;
      uVar6 = uStack_d0;
      uVar13 = uStack_c0;
      uVar21 = uStack_a8;
      uVar15 = uStack_d8;
      uVar17 = uStack_110;
      uVar19 = uStack_f0;
      uVar25 = uStack_108;
    }
    else {
      func_0x000107c61174();
      func_0x000107c5cd18();
      bVar1 = 0.0 < dStack_a0;
      func_0x000101556278(uStack_d0,uStack_c8,uStack_c0);
      dVar22 = dStack_a0;
      func_0x000107c5cd18(uVar5);
      dVar23 = dVar22;
      func_0x000100d548c0(uStack_b8,uStack_b0,uStack_a8);
      func_0x000107c5cd10(uVar5);
      dVar24 = dVar23;
      func_0x000100d548c0(uStack_100,uStack_f8,uStack_f0);
      func_0x000107c5ccac(uVar5);
      func_0x000100d548c0(uStack_118,uStack_110,uStack_108);
      uVar6 = uVar5;
      func_0x000107c4f344();
      if ((long)uVar6 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034aef6c);
        (*pcVar2)();
      }
      if (0x7fffffff < (long)uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034aef70);
        (*pcVar2)();
      }
      uStack_470 = (ulong)(uint)(float)(dVar22 * 1000.0);
      uStack_468 = (ulong)(uint)(float)(dVar23 * 1000.0);
      uStack_460 = (ulong)(uint)(float)(dVar24 * 1000.0);
      func_0x000100d548c0(uStack_e8,uStack_e0,uStack_d8);
      uVar18 = uVar5;
      func_0x000107c4f324();
      func_0x000107c61180();
      if (uVar18 == 0) {
        func_0x000107c61170(uVar5);
        func_0x000107c61574(lVar4);
      }
      else {
        uVar13 = 0;
        FUN_1034a68d4(0);
        uVar7 = uVar18;
        func_0x000107c5fc54(uVar18,uVar13);
        func_0x000107c61170(uVar18);
        if (uVar7 >> 0x3e == 0) {
          uVar18 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar18 = uVar7 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar7) {
            uVar18 = uVar7;
          }
          func_0x000107c60480();
        }
        apuStack_88[0] = puStack_148;
        if (uVar18 == 0) {
          func_0x000107c61574(lVar4);
          func_0x000107c6142c(uVar7);
          func_0x000107c61170(uVar5);
          FUN_1034aef8c(apuStack_88);
          puStack_148 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puStack_240 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x0001034d9210(0,uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1034aef8c);
            (*pcVar2)();
          }
          uVar16 = 0;
          do {
            puVar14 = puStack_240;
            if ((uVar7 & 0xc000000000000001) == 0) {
              uVar8 = *(ulong *)(uVar7 + uVar16 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar8 = uVar16;
              FUN_1034d66a4();
            }
            uVar9 = uVar8;
            func_0x000107c45330();
            if ((long)uVar9 < -0x80000000) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1034aef64);
              (*pcVar2)();
            }
            if (0x7fffffff < (long)uVar9) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1034aef68);
              (*pcVar2)();
            }
            uVar11 = 0;
            func_0x000100d548c0(0,0,0xf000000000000000);
            uVar10 = uVar8;
            func_0x000107c4f31c();
            func_0x000107c61180();
            if (uVar10 == 0) {
              func_0x000107c61170(uVar8);
              uVar13 = 0;
              uVar11 = 0;
              uVar20 = 0;
            }
            else {
              uVar20 = uVar10;
              func_0x000107c5faec();
              func_0x000107c61170(uVar10);
              func_0x000107c61170(uVar8);
              uVar8 = uVar20 & 0xffffffffffff;
              if ((uVar11 & 0x2000000000000000) != 0) {
                uVar8 = uVar11 >> 0x38 & 0xf;
              }
              if (uVar8 == 0) {
                func_0x000107c6142c(uVar11);
                uVar13 = 0;
                uVar11 = 0;
                uVar20 = 0;
              }
              else {
                func_0x000107c61434(uVar11);
                uVar13 = 0xc000000000000000;
                func_0x00010006c00c(0,0xc000000000000000);
                func_0x000107c6142c(uVar11);
                func_0x00010006c090(0,0xc000000000000000);
                func_0x000101597ae4(0,0,0,0);
              }
            }
            uVar8 = *(ulong *)(puVar14 + 0x10);
            puStack_240 = puVar14;
            if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar8) {
              func_0x0001034d9210(1 < *(ulong *)(puVar14 + 0x18),uVar8 + 1,1);
            }
            puVar14 = puStack_240;
            *(ulong *)(puStack_240 + 0x10) = uVar8 + 1;
            *(undefined8 *)(puStack_240 + uVar8 * 0x48 + 0x28) = 0xc000000000000000;
            *(undefined8 *)(puStack_240 + uVar8 * 0x48 + 0x20) = 0;
            uVar16 = uVar16 + 1;
            *(ulong *)(puStack_240 + uVar8 * 0x48 + 0x30) = uVar9 & 0xffffffff;
            *(undefined8 *)(puStack_240 + uVar8 * 0x48 + 0x40) = 0xc000000000000000;
            *(undefined8 *)(puStack_240 + uVar8 * 0x48 + 0x38) = 0;
            *(ulong *)(puStack_240 + uVar8 * 0x48 + 0x48) = uVar20;
            *(ulong *)(puStack_240 + uVar8 * 0x48 + 0x50) = uVar11;
            *(undefined8 *)(puStack_240 + uVar8 * 0x48 + 0x58) = 0;
            *(undefined8 *)(puStack_240 + uVar8 * 0x48 + 0x60) = uVar13;
          } while (uVar18 != uVar16);
          func_0x000107c61574(lVar4);
          func_0x000107c6142c(uVar7);
          func_0x000107c61170(uVar5);
          FUN_1034aef8c(apuStack_88);
          puStack_148 = puVar14;
        }
      }
      uStack_3d0 = 0;
      uStack_3d8 = 0;
      uStack_3f0 = 0;
      uStack_408 = 0;
      uVar5 = uVar6 & 0xffffffff;
      puVar14 = puStack_148;
      uVar6 = (ulong)bVar1;
      uVar13 = 0xc000000000000000;
      uVar21 = 0xc000000000000000;
      uVar15 = 0xc000000000000000;
      uVar17 = 0;
      uVar19 = 0xc000000000000000;
      uVar25 = 0xc000000000000000;
    }
    func_0x00010349f458(uStack_130,uStack_128,uStack_120);
    uStack_2f0 = uStack_158;
    uStack_2f8 = uStack_160;
    uStack_250 = uStack_178;
    dStack_258 = dStack_180;
    uStack_230 = uStack_158;
    uStack_238 = uStack_160;
    uStack_2d0 = uStack_460;
    uStack_2b8 = uStack_468;
    uStack_2b0 = uStack_3d0;
    uStack_298 = uStack_408;
    uStack_280 = uStack_3f0;
    uStack_270 = uStack_470;
    uStack_268 = uStack_3d8;
    uStack_248 = uStack_170;
    uStack_210 = uStack_460;
    uStack_1f8 = uStack_468;
    uStack_1f0 = uStack_3d0;
    uStack_1d8 = uStack_408;
    uStack_1c0 = uStack_3f0;
    uStack_1b0 = uStack_470;
    uStack_1a8 = uStack_3d8;
    uStack_188 = uStack_170;
    uStack_190 = uStack_178;
    dStack_198 = dStack_180;
    puStack_300 = puVar14;
    lStack_2e8 = lVar3;
    lStack_2e0 = param_4;
    uStack_2d8 = uVar12;
    uStack_2c8 = uVar17;
    uStack_2c0 = uVar25;
    uStack_2a8 = uVar19;
    uStack_2a0 = uVar5;
    uStack_290 = uVar15;
    uStack_288 = uVar6;
    uStack_278 = uVar13;
    uStack_260 = uVar21;
    puStack_240 = puVar14;
    lStack_228 = lVar3;
    lStack_220 = param_4;
    uStack_218 = uVar12;
    uStack_208 = uVar17;
    uStack_200 = uVar25;
    uStack_1e8 = uVar19;
    uStack_1e0 = uVar5;
    uStack_1d0 = uVar15;
    uStack_1c8 = uVar6;
    uStack_1b8 = uVar13;
    uStack_1a0 = uVar21;
    func_0x0001034a6864(&puStack_300,auStack_3c0);
    func_0x0001034a68a0(&puStack_240);
    param_1[0x11] = uStack_278;
    param_1[0x10] = uStack_280;
    param_1[0x13] = uStack_268;
    param_1[0x12] = uStack_270;
    param_1[0x15] = dStack_258;
    param_1[0x14] = uStack_260;
    param_1[0x17] = uStack_248;
    param_1[0x16] = uStack_250;
    param_1[9] = uStack_2b8;
    param_1[8] = uStack_2c0;
    param_1[0xb] = uStack_2a8;
    param_1[10] = uStack_2b0;
    param_1[0xd] = uStack_298;
    param_1[0xc] = uStack_2a0;
    param_1[0xf] = uStack_288;
    param_1[0xe] = uStack_290;
    param_1[1] = uStack_2f8;
    *param_1 = puStack_300;
    param_1[3] = lStack_2e8;
    param_1[2] = uStack_2f0;
    param_1[5] = uStack_2d8;
    param_1[4] = lStack_2e0;
    param_1[7] = uStack_2c8;
    param_1[6] = uStack_2d0;
  }
  else {
    func_0x000107c61574(uVar13);
    func_0x000107c61574(uVar19);
    func_0x000107c6142c(uVar15);
    func_0x000107c61588(lVar4);
    func_0x000107c61574(uVar17);
    func_0x000107c6145c(lVar4,0x60,7);
  }
  return;
}



/* Entry: 1034aef8c; end: 1034aefd3;  */

undefined8 FUN_1034aef8c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f730e0;
  func_0x0001000285a8(0x112f730e0,&UNK_10dbce2e8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1034aefd4; end: 1034afcd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1034aefd4(ulong *param_1,undefined *param_2,undefined *param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar18;
  long unaff_x21;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  double dVar29;
  ulong auStack_4010 [4];
  long alStack_3ff0 [2];
  uint uStack_3fdc;
  undefined8 uStack_3fd8;
  undefined *puStack_3fd0;
  long *plStack_3fc8;
  ulong uStack_3f90;
  ulong uStack_3f88;
  ulong uStack_3f80;
  long *plStack_3f78;
  ulong uStack_3f70;
  long *plStack_3f68;
  undefined *puStack_3f60;
  undefined *apuStack_3f58 [3];
  undefined8 uStack_3f40;
  undefined8 uStack_3f38;
  undefined8 uStack_3f30;
  undefined8 uStack_3f10;
  undefined8 uStack_3f08;
  undefined8 uStack_3f00;
  ulong uStack_3ef8;
  undefined8 uStack_3ef0;
  undefined8 uStack_3ee8;
  ulong uStack_3ee0;
  undefined8 uStack_3ed8;
  undefined8 uStack_3ed0;
  ulong uStack_3eb0;
  undefined8 uStack_3ea8;
  undefined8 uStack_3ea0;
  ulong uStack_3e98;
  undefined8 uStack_3e90;
  undefined8 uStack_3e88;
  ulong uStack_3e80;
  undefined8 uStack_3e78;
  undefined8 uStack_3e70;
  ulong uStack_3e68;
  undefined8 uStack_3e60;
  undefined8 uStack_3e58;
  long *plStack_34b0;
  undefined *puStack_34a8;
  undefined *puStack_34a0;
  undefined8 uStack_3498;
  undefined8 uStack_3490;
  undefined8 uStack_3488;
  undefined8 uStack_3480;
  undefined8 uStack_3478;
  ulong uStack_3470;
  undefined8 uStack_3468;
  undefined8 uStack_3460;
  undefined *puStack_3350;
  undefined *puStack_3348;
  undefined *puStack_3340;
  undefined1 auStack_3338 [64];
  undefined1 auStack_32f8 [96];
  undefined8 uStack_3298;
  undefined8 uStack_3290;
  undefined8 uStack_3288;
  undefined1 auStack_3280 [328];
  undefined1 auStack_3138 [2744];
  long *plStack_2680;
  undefined *puStack_2678;
  ulong uStack_2670;
  undefined1 auStack_2668 [328];
  long *plStack_2520;
  undefined *puStack_2518;
  undefined *puStack_2510;
  undefined8 uStack_2508;
  undefined8 uStack_2500;
  undefined8 uStack_24f8;
  undefined8 uStack_24f0;
  undefined8 uStack_24e8;
  ulong uStack_24e0;
  undefined8 uStack_24d8;
  undefined8 uStack_24d0;
  long lStack_24c0;
  undefined1 auStack_24b8 [2736];
  undefined1 auStack_1a08 [352];
  undefined1 auStack_18a8 [352];
  undefined1 auStack_1748 [352];
  undefined1 auStack_15e8 [2744];
  long lStack_b30;
  undefined1 auStack_b28 [2736];
  long lStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = 0x112d3bc20;
  puVar7 = &UNK_10d904ef0;
  puVar22 = param_3;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined *)((long)alStack_3ff0 - extraout_x8);
  puVar6 = (undefined *)0x0;
  func_0x000107c5eec8();
  lVar18 = *(long *)(puVar6 + -8);
  puVar8 = puVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  plVar21 = (long *)(puVar16 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_103547524();
  uVar24 = param_1[0xc];
  puStack_3350 = puVar8;
  puStack_3348 = puVar7;
  puStack_3340 = puVar22;
  if ((uVar24 != 0) && (*(long *)(uVar24 + 0x10) != 0)) {
    FUN_1034b0a88(&puStack_3350,param_1);
    FUN_1034afd48(uVar24,param_2,param_3);
    if (unaff_x21 == 0) {
      FUN_103546b98();
      FUN_1034b0bc0(auStack_3338,param_1[0x165],(short)param_1[0x166]);
      FUN_1035473b8(auStack_3338);
      goto LAB_1034af120;
    }
LAB_1034afbc4:
    puVar7 = puStack_3340;
    puVar8 = puStack_3348;
    func_0x00010006c090(puStack_3350,puStack_3348);
    puVar22 = puVar7;
    func_0x000107c61574(puVar7);
    goto LAB_1034afbdc;
  }
LAB_1034af120:
  func_0x000107c610b4(auStack_3138,param_1 + 0xe,0xab2);
  func_0x000107c610b4(auStack_15e8,param_1 + 0xe,0xab2);
  iVar5 = (int)auStack_15e8;
  func_0x00010178e3ec();
  plStack_3fc8 = plVar21;
  if (iVar5 == 1) {
LAB_1034af1ac:
    if ((uVar24 == 0) || (*(long *)(uVar24 + 0x10) == 0)) {
      dVar29 = (double)param_1[0xb];
      if (dVar29 <= 0.0) {
        FUN_103546dec(&plStack_3f68);
        uVar24 = param_1[0xd];
        func_0x000101556278(uStack_3ee0,uStack_3ed8,uStack_3ed0);
        uStack_3ed0 = 0xc000000000000000;
        uStack_3ed8 = 0;
        uVar3 = param_1[0x168];
        uStack_3ee0 = (ulong)(byte)uVar24 & 1;
        func_0x000101556278(uStack_3eb0,uStack_3ea8,uStack_3ea0);
        uStack_3ea0 = 0xc000000000000000;
        uStack_3ea8 = 0;
        bVar1 = *(byte *)((long)param_1 + 0xb41);
        uStack_3eb0 = (ulong)(byte)uVar3 & 1;
        func_0x000101556278(uStack_3e98,uStack_3e90,uStack_3e88);
        uStack_3e88 = 0xc000000000000000;
        uStack_3e90 = 0;
        bVar2 = *(byte *)((long)param_1 + 0xb42);
        uStack_3e98 = (ulong)bVar1 & 1;
        func_0x000101556278(uStack_3e80,uStack_3e78,uStack_3e70);
        uStack_3e70 = 0xc000000000000000;
        uStack_3e78 = 0;
        uVar24 = param_1[0x169];
        uStack_3e80 = (ulong)bVar2 & 1;
        func_0x000100d54900(uStack_3e68,uStack_3e60,uStack_3e58);
        uStack_3e58 = 0xc000000000000000;
        uStack_3e60 = 0;
        uStack_3e68 = uVar24;
        func_0x000107c610b4(auStack_18a8,&plStack_3f68,0x160);
        FUN_1034afcd8(auStack_18a8,&plStack_34b0);
        puVar9 = auStack_18a8;
      }
      else {
        FUN_103546dec(&plStack_3f68);
        func_0x000101556278(uStack_3f10,uStack_3f08,uStack_3f00);
        uStack_3f10 = 0;
        uStack_3f08 = 0;
        uStack_3f00 = 0xc000000000000000;
        func_0x000101556278(uStack_3f40,uStack_3f38,uStack_3f30);
        uStack_3f38 = 0;
        uStack_3f40 = 1;
        uStack_3f30 = 0xc000000000000000;
        func_0x000100d54900(uStack_3ef8,uStack_3ef0,uStack_3ee8);
        uStack_3ee8 = 0xc000000000000000;
        uStack_3ef0 = 0;
        uVar24 = param_1[0xd];
        uStack_3ef8 = (ulong)(uint)(float)(dVar29 / 1000.0);
        func_0x000101556278(uStack_3ee0,uStack_3ed8,uStack_3ed0);
        uStack_3ed0 = 0xc000000000000000;
        uStack_3ed8 = 0;
        uVar3 = param_1[0x168];
        uStack_3ee0 = (ulong)(byte)uVar24 & 1;
        func_0x000101556278(uStack_3eb0,uStack_3ea8,uStack_3ea0);
        uStack_3ea0 = 0xc000000000000000;
        uStack_3ea8 = 0;
        bVar1 = *(byte *)((long)param_1 + 0xb41);
        uStack_3eb0 = (ulong)(byte)uVar3 & 1;
        func_0x000101556278(uStack_3e98,uStack_3e90,uStack_3e88);
        uStack_3e88 = 0xc000000000000000;
        uStack_3e90 = 0;
        bVar2 = *(byte *)((long)param_1 + 0xb42);
        uStack_3e98 = (ulong)bVar1 & 1;
        func_0x000101556278(uStack_3e80,uStack_3e78,uStack_3e70);
        uStack_3e70 = 0xc000000000000000;
        uStack_3e78 = 0;
        uVar24 = param_1[0x169];
        uStack_3e80 = (ulong)bVar2 & 1;
        func_0x000100d54900(uStack_3e68,uStack_3e60,uStack_3e58);
        uStack_3e58 = 0xc000000000000000;
        uStack_3e60 = 0;
        uStack_3e68 = uVar24;
        func_0x000107c610b4(auStack_1a08,&plStack_3f68,0x160);
        FUN_1034afcd8(auStack_1a08,&plStack_34b0);
        puVar9 = auStack_1a08;
      }
    }
    else {
      FUN_103546dec(&plStack_3f68);
      func_0x000101556278(uStack_3f10,uStack_3f08,uStack_3f00);
      uStack_3f08 = 0;
      uStack_3f10 = 1;
      uStack_3f00 = 0xc000000000000000;
      func_0x000101556278(uStack_3f40,uStack_3f38,uStack_3f30);
      uStack_3f38 = 0;
      uStack_3f40 = 1;
      uStack_3f30 = 0xc000000000000000;
      uVar24 = param_1[0xd];
      func_0x000101556278(uStack_3ee0,uStack_3ed8,uStack_3ed0);
      uStack_3ed0 = 0xc000000000000000;
      uStack_3ed8 = 0;
      uVar3 = param_1[0x168];
      uStack_3ee0 = (ulong)(byte)uVar24 & 1;
      func_0x000101556278(uStack_3eb0,uStack_3ea8,uStack_3ea0);
      uStack_3ea0 = 0xc000000000000000;
      uStack_3ea8 = 0;
      bVar1 = *(byte *)((long)param_1 + 0xb41);
      uStack_3eb0 = (ulong)(byte)uVar3 & 1;
      func_0x000101556278(uStack_3e98,uStack_3e90,uStack_3e88);
      uStack_3e88 = 0xc000000000000000;
      uStack_3e90 = 0;
      bVar2 = *(byte *)((long)param_1 + 0xb42);
      uStack_3e98 = (ulong)bVar1 & 1;
      func_0x000101556278(uStack_3e80,uStack_3e78,uStack_3e70);
      uStack_3e70 = 0xc000000000000000;
      uStack_3e78 = 0;
      uVar24 = param_1[0x169];
      uStack_3e80 = (ulong)bVar2 & 1;
      func_0x000100d54900(uStack_3e68,uStack_3e60,uStack_3e58);
      uStack_3e58 = 0xc000000000000000;
      uStack_3e60 = 0;
      uStack_3e68 = uVar24;
      func_0x000107c610b4(auStack_1748,&plStack_3f68,0x160);
      FUN_1034afcd8(auStack_1748,&plStack_34b0);
      puVar9 = auStack_1748;
    }
    FUN_103546e68(puVar9);
    func_0x0001034afd14(&plStack_3f68);
  }
  else {
    func_0x000107c610b4(&lStack_b30,auStack_15e8,0xab2);
    iVar5 = (int)&lStack_b30;
    func_0x00010178e478();
    if (iVar5 == 1) {
      FUN_1034b0d78(auStack_3138,0x112dcbc80,&UNK_10d98ff10);
      goto LAB_1034af1ac;
    }
    func_0x000107c610b4(auStack_24b8,auStack_b28,0xaaa);
    lStack_24c0 = lStack_b30;
    dVar29 = (double)param_1[0xb];
    alStack_3ff0[1] = *(long *)(param_3 + 8);
    uStack_3fd8 = *(undefined8 *)(param_3 + 0x18);
    uStack_3fdc = (uint)(byte)param_3[0x20];
    lVar11 = 0;
    func_0x000100b91d00();
    puVar7 = param_2 + *(int *)(lVar11 + 0x88);
    uVar13 = *(undefined8 *)(puVar7 + 0x90);
    uVar25 = *(undefined8 *)(puVar7 + 0x98);
    puStack_3fd0 = param_2;
    func_0x000101682c20();
    uVar27 = 0;
    uVar28 = 0;
    if ((int)puVar7 != 1) {
      func_0x000107c61434(uVar25);
      uVar27 = uVar25;
      uVar28 = uVar13;
    }
    uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112f73248);
    uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112f73258);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f73260);
    puVar8 = (undefined *)0x0;
    func_0x0001034b716c();
    func_0x000107c613fc();
    *(undefined8 *)(puVar8 + 0x10) = uVar28;
    *(undefined8 *)(puVar8 + 0x18) = uVar27;
    puVar8[0x20] = 0;
    *(long *)(puVar8 + 0x28) = alStack_3ff0[1];
    puVar8[0x30] = 1;
    *(undefined8 *)(puVar8 + 0x38) = uStack_3fd8;
    puVar8[0x40] = (char)uStack_3fdc;
    *(undefined8 *)(puVar8 + 0x48) = uVar26;
    *(undefined8 *)(puVar8 + 0x50) = uVar25;
    *(undefined8 *)(puVar8 + 0x58) = uVar13;
    puStack_34a8 = (undefined *)0x3000000000000000;
    plStack_34b0 = (long *)0x0;
    uStack_3498 = 0;
    puStack_34a0 = (undefined *)0xf000000000000007;
    uStack_3490 = 0xc000000000000000;
    func_0x0001034b0d20(auStack_3138,&plStack_3f68,0x112dcbc80,&UNK_10d98ff10);
    func_0x0001034b0d20(auStack_3138,&plStack_3f68,0x112dcbc80,&UNK_10d98ff10);
    func_0x000107c6157c(uVar26);
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar13);
    func_0x000101556278(2,0,0);
    uStack_3480 = 0;
    uStack_3488 = 1;
    uStack_3478 = 0xc000000000000000;
    uVar24 = (ulong)(uint)(float)(dVar29 / 1000.0);
    func_0x000100d54900(0,0,0xf000000000000000);
    param_2 = puStack_3fd0;
    uStack_3460 = 0xc000000000000000;
    uStack_3468 = 0;
    puVar7 = puStack_3fd0;
    uStack_3470 = uVar24;
    if (5 < lStack_b30) {
      if (lStack_b30 == 6) {
        plVar19 = &lStack_24c0;
        puVar22 = puVar8;
        FUN_1034a81d0(0);
        if (unaff_x21 == 0) {
          func_0x000107c61574(puVar8);
          puVar22 = (undefined *)((ulong)puVar22 | 0x8000000000000000);
LAB_1034afc40:
          func_0x000100d5491c(0,0x3000000000000000,0xf000000000000007);
          plStack_34b0 = plVar19;
          puStack_34a8 = puVar7;
          puStack_34a0 = puVar22;
          goto LAB_1034afc5c;
        }
        func_0x000107c61574(puVar8);
      }
      else {
        if (lStack_b30 != 0x15) goto LAB_1034af61c;
LAB_1034afab8:
        plVar19 = &lStack_24c0;
        puVar22 = puVar8;
        FUN_1034ad694(0);
        func_0x000107c61574(puVar8);
        if (unaff_x21 == 0) {
          puVar22 = (undefined *)((ulong)puVar22 | 0x4000000000000000);
          goto LAB_1034afc40;
        }
      }
LAB_1034afb8c:
      FUN_1034b0d78(auStack_3138,0x112dcbc80,&UNK_10d98ff10);
      FUN_1034b0d78(auStack_3138,0x112dcbc80,&UNK_10d98ff10);
      FUN_1034b0a00(&plStack_34b0);
      goto LAB_1034afbc4;
    }
    if (lStack_b30 == 1) {
      plVar19 = &lStack_24c0;
      puVar22 = puVar8;
      FUN_1034a378c(0);
      func_0x000107c61574(puVar8);
      if (unaff_x21 != 0) goto LAB_1034afb8c;
      func_0x000100d5491c(0,0x3000000000000000,0xf000000000000007);
      plStack_34b0 = plVar19;
      puStack_34a8 = puVar7;
      puStack_34a0 = puVar22;
    }
    else {
      if (lStack_b30 == 3) goto LAB_1034afab8;
LAB_1034af61c:
      func_0x000107c61574(puVar8);
    }
LAB_1034afc5c:
    uStack_24f8 = uStack_3488;
    uStack_2500 = uStack_3490;
    uStack_24e8 = uStack_3478;
    uStack_24f0 = uStack_3480;
    uStack_24d8 = uStack_3468;
    uStack_24e0 = uStack_3470;
    uStack_24d0 = uStack_3460;
    puStack_2518 = puStack_34a8;
    plStack_2520 = plStack_34b0;
    uStack_2508 = uStack_3498;
    puStack_2510 = puStack_34a0;
    func_0x0001035471f4(&plStack_2520);
    FUN_1034b0d78(auStack_3138,0x112dcbc80,&UNK_10d98ff10);
    FUN_1034b0d78(auStack_3138,0x112dcbc80,&UNK_10d98ff10);
  }
  puVar22 = puStack_3340;
  puVar8 = puStack_3348;
  puVar7 = puStack_3350;
  puVar10 = puStack_3350;
  puVar15 = puStack_3348;
  puVar17 = puStack_3340;
  FUN_103546f48();
  if ((((ulong)puVar10 & 1) != 0) && (param_1[0x16b] != 0)) {
    uStack_3f70 = param_1[0x16e];
    plVar19 = (long *)param_1[0x16d];
    uStack_3f80 = param_1[0x16c];
    uStack_3f90 = param_1[0x16a];
    uStack_3f88 = param_1[0x16b];
    plStack_3f78 = plVar19;
    func_0x000107c61434();
    func_0x000107c61434();
    FUN_1035c72ac();
    puStack_3fd0 = param_2;
    plStack_3f68 = plVar19;
    puStack_3f60 = puVar15;
    apuStack_3f58[0] = puVar17;
    FUN_1034cb7d8(auStack_32f8,&uStack_3f90);
    FUN_1035c68e0();
    plStack_34b0 = plVar19;
    puStack_34a8 = puVar15;
    puStack_34a0 = puVar17;
    FUN_1035ce650(auStack_32f8);
    func_0x0001035c6970(plStack_34b0,puStack_34a8,puStack_34a0);
    puVar15 = apuStack_3f58[0];
    puVar10 = puStack_3f60;
    plVar19 = plStack_3f68;
    func_0x00010006c00c(plStack_3f68,puStack_3f60);
    func_0x000107c6157c(puVar15);
    FUN_103546c2c(&uStack_3298,puVar7,puVar8,puVar22);
    func_0x000107c610b4(auStack_2668,auStack_3280,0x148);
    func_0x000100d5491c(uStack_3298,uStack_3290,uStack_3288);
    plStack_2680 = plVar19;
    puStack_2678 = puVar10;
    uStack_2670 = (ulong)puVar15 | 0x4000000000000000;
    FUN_103546e68(&plStack_2680);
    param_2 = puStack_3fd0;
    func_0x00010006c090(plVar19,puVar10);
    func_0x000107c61574(puVar15);
  }
  uVar24 = param_1[1];
  if (uVar24 == 0) {
LAB_1034af894:
    lVar11 = 0;
    func_0x000100b91d00();
    puVar7 = param_2 + *(int *)(lVar11 + 0x5c);
    uVar23 = *(ulong *)(puVar7 + 0x10);
    uVar24 = *(ulong *)(puVar7 + 0x18);
    func_0x000100d548dc();
    if (((int)puVar7 != 1) && (uVar24 != 0)) {
      uVar20 = uVar23 & 0xffffffffffff;
      goto LAB_1034af8c0;
    }
  }
  else {
    uVar23 = *param_1;
    uVar20 = uVar23 & 0xffffffffffff;
    uVar3 = uVar20;
    if ((uVar24 & 0x2000000000000000) != 0) {
      uVar3 = uVar24 >> 0x38 & 0xf;
    }
    if (uVar3 == 0) goto LAB_1034af894;
LAB_1034af8c0:
    func_0x000107c61434(uVar24);
    if ((uVar24 & 0x2000000000000000) != 0) {
      uVar20 = uVar24 >> 0x38 & 0xf;
    }
    if (uVar20 == 0) {
      func_0x000107c6142c(uVar24);
    }
    else {
      func_0x000107c5eea8(puVar16,uVar23,uVar24);
      func_0x000107c6142c(uVar24);
      puVar7 = puVar16;
      (**(code **)(lVar18 + 0x30))(puVar16,1,puVar6);
      plVar19 = plStack_3fc8;
      if ((int)puVar7 == 1) {
        FUN_1034b0d78(puVar16,0x112d3bc20,&UNK_10d904ef0);
      }
      else {
        plVar12 = plStack_3fc8;
        (**(code **)(lVar18 + 0x20))(plStack_3fc8,puVar16,puVar6);
        func_0x000107c5eec0();
        plStack_3f68 = plVar12;
        puStack_3f60 = puVar16;
        func_0x000107c5eec0();
        func_0x000100e37074(&plStack_3f68,apuStack_3f58);
        func_0x00010354714c();
        (**(code **)(lVar18 + 8))(plVar19,puVar6);
      }
    }
  }
  uVar24 = param_1[2];
  if ((long)uVar24 < 1) {
    lVar18 = 0;
    func_0x000100b91d00();
    if (*(long *)(param_2 + *(int *)(lVar18 + 0x4c)) != 0) {
      uVar24 = *(ulong *)(*(long *)(param_2 + *(int *)(lVar18 + 0x4c)) + 0x10);
      goto LAB_1034af9b0;
    }
    uVar24 = 0;
  }
  else {
LAB_1034af9b0:
    if (uVar24 >> 0x1f != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1034afcd4);
      (*pcVar4)();
    }
  }
  FUN_10354678c(uVar24,0,0xc000000000000000);
  if (-1 < (int)param_1[0x167]) {
    func_0x000103547300((int)param_1[0x167],0,0xc000000000000000);
  }
  func_0x0001000d224c(&plStack_3f68);
  plVar19 = plStack_3f68;
  uVar14 = 0xf1541c0;
  uVar13 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d);
  plVar12 = plVar19;
  func_0x000107c4dfc0();
  func_0x000107c615e8(plVar19);
  func_0x000107c61170(uVar13);
  if ((int)plVar12 != 0) {
    func_0x000103bfca8c();
    FUN_10360e2b4();
    if ((uVar14 & 0xff00) == 0x100) {
      uVar14 = 1;
      uVar13 = 0;
    }
    FUN_103547488(uVar13,uVar14);
  }
  puVar22 = puStack_3340;
  puVar8 = puStack_3348;
  puVar7 = puStack_3350;
  func_0x00010006c00c(puStack_3350,puStack_3348);
  func_0x000107c6157c(puVar22);
  func_0x00010006c090(puVar7,puVar8);
  func_0x000107c61574(puVar22);
LAB_1034afbdc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    func_0x000107c60e78();
    plVar21[-4] = (long)puVar7;
    plVar21[-3] = (long)alStack_3ff0;
    plVar21[-2] = (long)&stack0xfffffffffffffff0;
    plVar21[-1] = (long)FUN_1034afcd8;
    FUN_103557ab0(puVar8,puVar22);
    return puVar8;
  }
  return puVar7;
}



/* Entry: 1034afcd8; end: 1034afd47;  */

undefined8 FUN_1034afcd8(undefined8 param_1,undefined8 param_2)

{
  FUN_103557ab0(param_2,param_1);
  return param_2;
}



/* Entry: 1034afd48; end: 1034b09ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1034afd48(long param_1,ulong *param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long unaff_x20;
  long unaff_x21;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong *puStack_1f60;
  ulong *puStack_1f58;
  ulong *puStack_1f50;
  ulong *puStack_1f48;
  ulong *puStack_1f40;
  ulong uStack_1f38;
  undefined8 uStack_1f30;
  undefined8 uStack_1f28;
  ulong uStack_1f20;
  ulong uStack_1f18;
  undefined8 uStack_1f10;
  undefined8 uStack_1f08;
  ulong *puStack_1f00;
  ulong *puStack_1ef8;
  ulong *puStack_1ef0;
  ulong *puStack_1ee8;
  ulong *puStack_1ee0;
  ulong uStack_1ed8;
  undefined8 uStack_1ed0;
  undefined8 uStack_1ec8;
  ulong uStack_1ec0;
  ulong uStack_1eb8;
  undefined8 uStack_1eb0;
  undefined8 uStack_1ea8;
  undefined8 uStack_1ea0;
  undefined8 uStack_1e98;
  undefined8 uStack_1e90;
  undefined8 uStack_1e88;
  undefined8 uStack_1e80;
  undefined8 uStack_1e78;
  undefined8 uStack_1e70;
  undefined8 uStack_1e68;
  undefined8 uStack_1e60;
  undefined8 uStack_1e58;
  undefined8 uStack_1e50;
  undefined8 uStack_1e48;
  undefined1 uStack_1e40;
  ulong auStack_1dd8 [2];
  ulong uStack_1dc8;
  ulong uStack_1d80;
  undefined8 uStack_1d70;
  long lStack_1d68;
  ulong *puStack_1830;
  ulong *puStack_1828;
  ulong *puStack_1820;
  ulong *puStack_1818;
  ulong *puStack_1810;
  ulong uStack_1808;
  undefined8 uStack_1800;
  undefined8 uStack_17f8;
  ulong uStack_17f0;
  ulong uStack_17e8;
  undefined8 uStack_17e0;
  undefined8 uStack_17d8;
  undefined8 uStack_17d0;
  undefined8 uStack_17c8;
  undefined8 uStack_17c0;
  undefined8 uStack_17b8;
  undefined8 uStack_17b0;
  undefined8 uStack_17a8;
  undefined8 uStack_17a0;
  undefined8 uStack_1798;
  undefined8 uStack_1790;
  undefined8 uStack_1788;
  undefined8 uStack_1780;
  undefined8 uStack_1778;
  undefined1 uStack_1770;
  undefined8 uStack_d70;
  undefined1 uStack_d68;
  undefined8 uStack_d60;
  undefined1 uStack_d58;
  ulong *puStack_d50;
  ulong *puStack_d48;
  ulong *puStack_d40;
  ulong *puStack_d38;
  ulong *puStack_d30;
  ulong uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  ulong uStack_d10;
  ulong uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined1 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  ulong uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  ulong uStack_c60;
  undefined8 uStack_c58;
  ulong uStack_c50;
  ulong *puStack_c48;
  ulong *puStack_c40;
  ulong *puStack_c38;
  ulong *puStack_c30;
  ulong *puStack_c28;
  ulong uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  ulong uStack_c08;
  ulong uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined1 uStack_b88;
  undefined8 uStack_b80;
  ulong *puStack_b78;
  ulong *puStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  ulong uStack_b48;
  undefined1 auStack_b40 [2688];
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined1 auStack_90 [8];
  ulong uStack_88;
  ulong uStack_80;
  undefined *puStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar2 = *param_3;
  uVar23 = *(ulong *)(param_3 + 8);
  uVar22 = *(ulong *)(param_3 + 0x18);
  uVar3 = param_3[0x20];
  lVar8 = 0;
  func_0x000100b91d00();
  lVar8 = (long)param_2 + (long)*(int *)(lVar8 + 0x88);
  uVar24 = *(ulong *)(lVar8 + 0x90);
  uVar27 = *(ulong *)(lVar8 + 0x98);
  lVar29 = lVar8;
  func_0x000101682c20();
  uVar26 = 0;
  uVar25 = 0;
  if ((int)lVar29 != 1) {
    func_0x000107c61434(uVar27);
    uVar26 = uVar24;
    uVar25 = uVar27;
  }
  uVar27 = *(ulong *)(unaff_x20 + _DAT_112f73248);
  uVar28 = *(ulong *)(unaff_x20 + _DAT_112f73258);
  uVar24 = *(ulong *)(unaff_x20 + _DAT_112f73260);
  puVar9 = (ulong *)0x0;
  func_0x0001034b716c();
  puVar10 = puVar9;
  func_0x000107c613fc();
  puVar10[2] = uVar26;
  puVar10[3] = uVar25;
  *(undefined1 *)(puVar10 + 4) = uVar2;
  puVar10[5] = uVar23;
  *(undefined1 *)(puVar10 + 6) = 0;
  puVar10[7] = uVar22;
  *(undefined1 *)(puVar10 + 8) = uVar3;
  puVar10[9] = uVar27;
  puVar10[10] = uVar28;
  puVar10[0xb] = uVar24;
  lVar29 = *(long *)(param_1 + 0x10);
  func_0x000107c6157c(uVar27);
  func_0x000107c6157c(uVar28);
  func_0x000107c6157c(uVar24);
  if (lVar29 == 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    param_1 = param_1 + 0x20;
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      func_0x000107c610b4(&uStack_b48,param_1,0xab2);
      uStack_d70 = 0;
      uStack_d68 = 1;
      FUN_1034b0c88(&puStack_c48);
      uVar26 = uStack_b48;
      uStack_ca8 = uStack_ba0;
      uStack_cb0 = uStack_ba8;
      uStack_c98 = uStack_b90;
      uStack_ca0 = uStack_b98;
      uStack_c90 = uStack_b88;
      uStack_ce8 = uStack_be0;
      uStack_cf0 = uStack_be8;
      uStack_cd8 = uStack_bd0;
      uStack_ce0 = uStack_bd8;
      uStack_cc8 = uStack_bc0;
      uStack_cd0 = uStack_bc8;
      uStack_cb8 = uStack_bb0;
      uStack_cc0 = uStack_bb8;
      uStack_d28 = uStack_c20;
      puStack_d30 = puStack_c28;
      uStack_d18 = uStack_c10;
      uStack_d20 = uStack_c18;
      uStack_d08 = uStack_c00;
      uStack_d10 = uStack_c08;
      uStack_cf8 = uStack_bf0;
      uStack_d00 = uStack_bf8;
      puStack_d48 = puStack_c40;
      puStack_d50 = puStack_c48;
      puStack_d38 = puStack_c30;
      puStack_d40 = puStack_c38;
      uStack_c80 = 0xc000000000000000;
      uStack_c88 = 0;
      uStack_c78 = 0;
      uStack_c70 = 0;
      uStack_c60 = 0;
      uStack_c58 = 0;
      uStack_c68 = 0xf000000000000000;
      uStack_c50 = 0xf000000000000000;
      if (0x17 < uStack_b48) {
        auStack_1dd8[0] = uStack_b48;
        func_0x000101795250(&uStack_b48,&puStack_1830);
        func_0x000107c60614(&UNK_110798820,auStack_1dd8,&UNK_110798820,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1034b0a00);
        (*pcVar6)();
      }
      uStack_d60 = *(undefined8 *)(&UNK_10dbce408 + uStack_b48 * 8);
      uStack_d58 = 1;
      func_0x000107c610b4(auStack_1dd8,auStack_b40,0x5a8);
      uVar19 = uStack_1dc8;
      iVar7 = (int)auStack_1dd8;
      func_0x000100d548dc();
      uVar18 = uStack_c68;
      uVar16 = uStack_c70;
      uVar4 = uStack_c78;
      uVar25 = 0;
      if (iVar7 != 1) {
        uVar25 = uVar19;
      }
      if ((long)uVar25 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1034b09b8);
        (*pcVar6)();
      }
      if (0x7fffffff < (long)uVar25) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1034b09bc);
        (*pcVar6)();
      }
      func_0x000101795250(&uStack_b48,&puStack_1830);
      func_0x000100d54900(uVar4,uVar16,uVar18);
      lVar12 = lStack_1d68;
      uVar16 = uStack_1d70;
      uStack_c68 = 0xc000000000000000;
      uStack_c70 = 0;
      iVar7 = (int)auStack_1dd8;
      uStack_c78 = uVar25 & 0xffffffff;
      func_0x000100d548dc();
      if (iVar7 == 1) {
        uVar25 = 0;
      }
      else {
        if (lVar12 != 0) {
          func_0x000107c61434(lVar12);
          FUN_1034cc324();
          uStack_d68 = (undefined1)lVar12;
          uStack_d70 = uVar16;
        }
        if ((long)uStack_1d80 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1034b09c0);
          (*pcVar6)();
        }
        uVar25 = uStack_1d80;
        if (0x7fffffff < (long)uStack_1d80) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1034b09c4);
          (*pcVar6)();
        }
      }
      uVar25 = uVar25 & 0xffffffff;
      uVar19 = uStack_c50;
      func_0x000100d54900(uStack_c60,uStack_c58);
      uStack_c50 = 0xc000000000000000;
      uStack_c58 = 0;
      uStack_c60 = uVar25;
      if ((long)uVar26 < 6) {
        if (uVar26 != 0) {
          if (uVar26 != 1) {
            if (uVar26 == 3) goto LAB_1034b01dc;
            goto LAB_1034b0748;
          }
          puVar14 = &uStack_b48;
          puVar13 = param_2;
          puVar17 = puVar10;
          FUN_1034a378c(0);
          if (unaff_x21 != 0) goto LAB_1034b0864;
          puStack_1f00 = puVar14;
          puStack_1ef8 = puVar13;
          puStack_1ef0 = puVar17;
          func_0x0001034b0e08(&puStack_1f00);
          goto LAB_1034b0688;
        }
        uVar26 = *(ulong *)(lVar8 + 0x90);
        uVar25 = *(ulong *)(lVar8 + 0x98);
        lVar12 = lVar8;
        func_0x000101682c20();
        if ((int)lVar12 == 1) {
          uVar26 = 0;
          uVar25 = 0;
        }
        else {
          func_0x000107c61434(uVar25);
        }
        puVar20 = (ulong *)0x7;
        puVar13 = puVar9;
        func_0x000107c613fc(puVar9,0x60);
        puVar13[2] = uVar26;
        puVar13[3] = uVar25;
        *(undefined1 *)(puVar13 + 4) = uVar2;
        puVar13[5] = uVar23;
        *(undefined1 *)(puVar13 + 6) = 0;
        puVar13[7] = uVar22;
        *(undefined1 *)(puVar13 + 8) = uVar3;
        puVar13[9] = uVar27;
        puVar13[10] = uVar28;
        puVar13[0xb] = uVar24;
        func_0x000107c6157c(uVar27);
        func_0x000107c6157c(uVar28);
        func_0x000107c6157c(uVar24);
        puVar14 = &uStack_b48;
        puVar17 = param_2;
        FUN_1034b0fc0(0);
        if (unaff_x21 != 0) {
          func_0x000107c61574(uVar28);
          func_0x000107c61574(uVar27);
          func_0x000107c6142c(uVar25);
          func_0x000107c61588(puVar13);
          func_0x000107c61574(uVar24);
          func_0x000107c6145c(puVar13,0x60,7);
          func_0x000107c61574(puVar10);
          func_0x00010179528c(&uStack_b48);
          func_0x00010006c090(0,0xc000000000000000);
          uVar16 = 0;
          uVar18 = 0;
          uVar21 = 0;
LAB_1034b0918:
          func_0x00010349f458(uVar16,uVar18,uVar21);
          goto LAB_1034b0974;
        }
        func_0x000107c61574(uVar28);
        func_0x000107c61574(uVar27);
        func_0x000107c6142c(uVar25);
        func_0x000107c61588(puVar13);
        func_0x000107c61574(uVar24);
        func_0x000107c6145c(puVar13,0x60,7);
        func_0x00010349f458(0,0,0);
        puStack_1ef8 = (ulong *)0xc000000000000000;
        puStack_1f00 = (ulong *)0x0;
        puStack_1ef0 = puVar14;
        puStack_1ee8 = puVar17;
        puStack_1ee0 = puVar20;
        func_0x0001034b0e14(&puStack_1f00);
LAB_1034b03bc:
        uStack_1788 = uStack_1e58;
        uStack_1790 = uStack_1e60;
        uStack_1778 = uStack_1e48;
        uStack_1780 = uStack_1e50;
        uStack_1770 = uStack_1e40;
        uStack_17c8 = uStack_1e98;
        uStack_17d0 = uStack_1ea0;
        uStack_17b8 = uStack_1e88;
        uStack_17c0 = uStack_1e90;
        uStack_1798 = uStack_1e68;
        uStack_17a0 = uStack_1e70;
        uStack_17a8 = uStack_1e78;
        uStack_17b0 = uStack_1e80;
        uStack_1808 = uStack_1ed8;
        puStack_1810 = puStack_1ee0;
        uStack_17f8 = uStack_1ec8;
        uStack_1800 = uStack_1ed0;
        uStack_17d8 = uStack_1ea8;
        uStack_17e0 = uStack_1eb0;
        uStack_17e8 = uStack_1eb8;
        uStack_17f0 = uStack_1ec0;
        puStack_1818 = puStack_1ee8;
        puStack_1820 = puStack_1ef0;
        puStack_1828 = puStack_1ef8;
        puStack_1830 = puStack_1f00;
        func_0x0001034b0d74(&puStack_1830);
        FUN_1034b0d78(&puStack_d50,0x112f73130,&UNK_10dbce400);
        uStack_ca8 = uStack_1788;
        uStack_cb0 = uStack_1790;
        uStack_c98 = uStack_1778;
        uStack_ca0 = uStack_1780;
        uStack_c90 = uStack_1770;
        uStack_ce8 = uStack_17c8;
        uStack_cf0 = uStack_17d0;
        uStack_cd8 = uStack_17b8;
        uStack_ce0 = uStack_17c0;
        uStack_cc8 = uStack_17a8;
        uStack_cd0 = uStack_17b0;
        uStack_cb8 = uStack_1798;
        uStack_cc0 = uStack_17a0;
        uStack_d28 = uStack_1808;
        puStack_d30 = puStack_1810;
        uStack_d18 = uStack_17f8;
        uStack_d20 = uStack_1800;
        uStack_d08 = uStack_17e8;
        uStack_d10 = uStack_17f0;
        uStack_cf8 = uStack_17d8;
        uStack_d00 = uStack_17e0;
        puStack_d48 = puStack_1828;
        puStack_d50 = puStack_1830;
        puStack_d38 = puStack_1818;
        puStack_d40 = puStack_1820;
      }
      else {
        if ((long)uVar26 < 0x14) {
          if (uVar26 != 6) {
            if (uVar26 == 9) {
              FUN_10355b720(&uStack_b80);
              uVar21 = uStack_b58;
              uVar18 = uStack_b60;
              uVar16 = uStack_b68;
              puVar17 = puStack_b70;
              puVar13 = puStack_b78;
              uVar5 = uStack_b80;
              puVar14 = &uStack_b48;
              puVar20 = param_2;
              FUN_1034b0fc0(0);
              if (unaff_x21 != 0) {
                func_0x000107c61574(puVar10);
                func_0x00010179528c(&uStack_b48);
                func_0x000107c6142c(uVar5);
                func_0x00010006c090(puVar13,puVar17);
                goto LAB_1034b0918;
              }
              uStack_b50 = uVar5;
              func_0x00010349f458(uVar16,uVar18,uVar21);
              puVar11 = &uStack_b48;
              FUN_1034a1a20();
              FUN_1034b0d78(&uStack_b50,0x112f73138,&UNK_10dbce790);
              func_0x000107c61434(puVar11);
              func_0x00010006c00c(puVar13,puVar17);
              func_0x0001034b0db8(puVar14,puVar20,uVar19);
              func_0x000107c6142c(puVar11);
              func_0x00010006c090(puVar13,puVar17);
              func_0x00010349f458(puVar14,puVar20,uVar19);
              puStack_1ef8 = puVar13;
              puStack_1ef0 = puVar17;
              puStack_1f00 = puVar11;
              puStack_1ee8 = puVar14;
              puStack_1ee0 = puVar20;
              uStack_1ed8 = uVar19;
              FUN_1034b0de4(&puStack_1f00);
              goto LAB_1034b03bc;
            }
            goto LAB_1034b0748;
          }
          puVar14 = &uStack_b48;
          puVar13 = param_2;
          puVar17 = puVar10;
          FUN_1034a81d0(0);
          if (unaff_x21 != 0) {
LAB_1034b0864:
            func_0x000107c61574(puVar10);
            func_0x00010179528c(&uStack_b48);
LAB_1034b0974:
            func_0x0001034b0cec(&uStack_d70);
            func_0x000107c6142c(puStack_58);
            return puStack_58;
          }
          puStack_1f00 = puVar14;
          puStack_1ef8 = puVar13;
          puStack_1ef0 = puVar17;
          func_0x0001034b0df0(&puStack_1f00);
        }
        else if (uVar26 == 0x14) {
          uVar26 = *(ulong *)(lVar8 + 0x90);
          uVar25 = *(ulong *)(lVar8 + 0x98);
          lVar12 = lVar8;
          func_0x000101682c20();
          if ((int)lVar12 == 1) {
            uVar26 = 0;
            uVar25 = 0;
          }
          else {
            func_0x000107c61434(uVar25);
          }
          puVar20 = (ulong *)0x7;
          puVar13 = puVar9;
          func_0x000107c613fc(puVar9,0x60);
          puVar13[2] = uVar26;
          puVar13[3] = uVar25;
          *(undefined1 *)(puVar13 + 4) = uVar2;
          puVar13[5] = uVar23;
          *(undefined1 *)(puVar13 + 6) = 0;
          puVar13[7] = uVar22;
          *(undefined1 *)(puVar13 + 8) = uVar3;
          puVar13[9] = uVar27;
          puVar13[10] = uVar28;
          puVar13[0xb] = uVar24;
          puStack_1f58 = (ulong *)0xc000000000000000;
          puStack_1f60 = (ulong *)0x0;
          puStack_1f48 = (ulong *)0x0;
          puStack_1f50 = (ulong *)0x0;
          uStack_1f38 = 0;
          puStack_1f40 = (ulong *)0x0;
          uStack_1f30 = 0;
          uStack_1f28 = 0xf000000000000000;
          uStack_1f18 = 0;
          uStack_1f20 = 0;
          uStack_1f08 = 0;
          uStack_1f10 = 0;
          func_0x000107c6157c();
          func_0x000107c6157c(uVar28);
          func_0x000107c6157c(uVar24);
          puVar14 = &uStack_b48;
          puVar17 = param_2;
          FUN_1034b0fc0(0);
          if (unaff_x21 != 0) {
            func_0x000107c61574(uVar28);
            func_0x000107c61574(uVar27);
            func_0x000107c61574(puVar10);
            func_0x000107c6142c(uVar25);
            func_0x000107c61588(puVar13);
            func_0x000107c61574(uVar24);
            func_0x000107c6145c(puVar13,0x60,7);
            func_0x00010179528c(&uStack_b48);
            FUN_1034ab430(&puStack_1f60);
            goto LAB_1034b0974;
          }
          func_0x000107c61574(puVar13);
          func_0x00010349f458(0,0,0);
          uStack_88 = uStack_b8;
          uStack_80 = uStack_b0;
          uVar26 = 0;
          if (uStack_b0 != 1) {
            uVar26 = uStack_c0;
          }
          puStack_1f50 = puVar14;
          puStack_1f48 = puVar17;
          puStack_1f40 = puVar20;
          if ((long)uVar26 < -0x80000000) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1034b09c8);
            (*pcVar6)();
          }
          if (0x7fffffff < (long)uVar26) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1034b09cc);
            (*pcVar6)();
          }
          uVar26 = uVar26 & 0xffffffff;
          func_0x0001034b0d20(auStack_90,&puStack_1830,0x112f73118,&UNK_10dbce3d8);
          func_0x000100d54900(0,0,0xf000000000000000);
          uStack_1f28 = 0xc000000000000000;
          uStack_1f30 = 0;
          uStack_1f38 = uVar26;
          if (1 < uStack_80) {
            uVar26 = uStack_88 & 0xffffffffffff;
            if ((uStack_80 & 0x2000000000000000) != 0) {
              uVar26 = uStack_80 >> 0x38 & 0xf;
            }
            if (uVar26 == 0) {
              FUN_1034b0d78(auStack_90,0x112f73118,&UNK_10dbce3d8);
            }
            else {
              func_0x000107c61434(uStack_80);
              func_0x00010006c00c(0,0xc000000000000000);
              func_0x000107c6142c(uStack_80);
              func_0x00010006c090(0,0xc000000000000000);
              func_0x000101597ae4(0,0,0,0);
              uStack_1f20 = uStack_88;
              uStack_1f18 = uStack_80;
              uStack_1f08 = 0xc000000000000000;
              uStack_1f10 = 0;
            }
          }
          uStack_1ed8 = uStack_1f38;
          puStack_1ee0 = puStack_1f40;
          uStack_1ec8 = uStack_1f28;
          uStack_1ed0 = uStack_1f30;
          uStack_1eb8 = uStack_1f18;
          uStack_1ec0 = uStack_1f20;
          uStack_1ea8 = uStack_1f08;
          uStack_1eb0 = uStack_1f10;
          puStack_1ef8 = puStack_1f58;
          puStack_1f00 = puStack_1f60;
          puStack_1ee8 = puStack_1f48;
          puStack_1ef0 = puStack_1f50;
          func_0x0001034b0d68(&puStack_1f00);
        }
        else {
          if (uVar26 != 0x15) goto LAB_1034b0748;
LAB_1034b01dc:
          puVar14 = &uStack_b48;
          puVar13 = param_2;
          puVar17 = puVar10;
          FUN_1034ad694(0);
          if (unaff_x21 != 0) goto LAB_1034b0864;
          puStack_1f00 = puVar14;
          puStack_1ef8 = puVar13;
          puStack_1ef0 = puVar17;
          func_0x0001034b0dfc(&puStack_1f00);
        }
LAB_1034b0688:
        uStack_1788 = uStack_1e58;
        uStack_1790 = uStack_1e60;
        uStack_1778 = uStack_1e48;
        uStack_1780 = uStack_1e50;
        uStack_1770 = uStack_1e40;
        uStack_17c8 = uStack_1e98;
        uStack_17d0 = uStack_1ea0;
        uStack_17b8 = uStack_1e88;
        uStack_17c0 = uStack_1e90;
        uStack_1798 = uStack_1e68;
        uStack_17a0 = uStack_1e70;
        uStack_17a8 = uStack_1e78;
        uStack_17b0 = uStack_1e80;
        uStack_1808 = uStack_1ed8;
        puStack_1810 = puStack_1ee0;
        uStack_17f8 = uStack_1ec8;
        uStack_1800 = uStack_1ed0;
        uStack_17d8 = uStack_1ea8;
        uStack_17e0 = uStack_1eb0;
        uStack_17e8 = uStack_1eb8;
        uStack_17f0 = uStack_1ec0;
        puStack_1818 = puStack_1ee8;
        puStack_1820 = puStack_1ef0;
        puStack_1828 = puStack_1ef8;
        puStack_1830 = puStack_1f00;
        func_0x0001034b0d74(&puStack_1830);
        FUN_1034b0d78(&puStack_d50,0x112f73130,&UNK_10dbce400);
        uStack_ca8 = uStack_1788;
        uStack_cb0 = uStack_1790;
        uStack_c98 = uStack_1778;
        uStack_ca0 = uStack_1780;
        uStack_c90 = uStack_1770;
        uStack_ce8 = uStack_17c8;
        uStack_cf0 = uStack_17d0;
        uStack_cd8 = uStack_17b8;
        uStack_ce0 = uStack_17c0;
        uStack_cc8 = uStack_17a8;
        uStack_cd0 = uStack_17b0;
        uStack_cb8 = uStack_1798;
        uStack_cc0 = uStack_17a0;
        uStack_d28 = uStack_1808;
        puStack_d30 = puStack_1810;
        uStack_d18 = uStack_17f8;
        uStack_d20 = uStack_1800;
        uStack_d08 = uStack_17e8;
        uStack_d10 = uStack_17f0;
        uStack_cf8 = uStack_17d8;
        uStack_d00 = uStack_17e0;
        puStack_d48 = puStack_1828;
        puStack_d50 = puStack_1830;
        puStack_d38 = puStack_1818;
        puStack_d40 = puStack_1820;
      }
LAB_1034b0748:
      func_0x000107c610b4(&puStack_1830,&uStack_d70,0x128);
      FUN_1034b0cb0(&puStack_1830,&puStack_1f00);
      puVar15 = puStack_58;
      func_0x000107c61558();
      if (((ulong)puVar15 & 1) == 0) {
        plVar1 = (long *)(puStack_58 + 0x10);
        puStack_58 = (undefined *)0x0;
        func_0x0001034d8ba0(0,*plVar1 + 1,1);
      }
      uVar26 = *(ulong *)(puStack_58 + 0x10);
      if (*(ulong *)(puStack_58 + 0x18) >> 1 <= uVar26) {
        puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puStack_58 + 0x18));
        func_0x0001034d8ba0(puVar15,uVar26 + 1,1,puStack_58);
        puStack_58 = puVar15;
      }
      *(ulong *)(puStack_58 + 0x10) = uVar26 + 1;
      func_0x000107c610b4(puStack_58 + uVar26 * 0x128 + 0x20,&puStack_1830,0x128);
      func_0x00010179528c(&uStack_b48);
      func_0x0001034b0cec(&uStack_d70);
      param_1 = param_1 + 0xab8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
  func_0x000107c61588(puVar10);
  func_0x000107c6142c(puVar10[3]);
  func_0x000107c61574(puVar10[9]);
  func_0x000107c61574(puVar10[10]);
  func_0x000107c61574(puVar10[0xb]);
  func_0x000107c6145c(puVar10,0x60,7);
  return puStack_58;
}



/* Entry: 1034b0a00; end: 1034b0a87;  */

undefined8 FUN_1034b0a00(undefined8 param_1)

{
  FUN_103558db4();
  return param_1;
}



/* Entry: 1034b0a88; end: 1034b0bbf;  */

void FUN_1034b0a88(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000103546ae8(*(byte *)(param_2 + 0x18) & 1,0,0xc000000000000000);
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c61434(lVar2);
    FUN_1034cc324(uVar3,lVar2);
    func_0x0001035468ec();
  }
  lVar2 = *(long *)(param_2 + 0x30);
  if (lVar2 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034b0bac);
    (*pcVar1)();
  }
  if (0x7fffffff < lVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034b0bb0);
    (*pcVar1)();
  }
  func_0x000103546a38(lVar2,0,0xc000000000000000);
  lVar2 = *(long *)(param_2 + 0x38);
  if (-0x80000001 < lVar2) {
    if (0x7fffffff < lVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034b0bb8);
      (*pcVar1)();
    }
    func_0x000103546988(lVar2,0,0xc000000000000000);
    lVar2 = *(long *)(param_2 + 0x40);
    if (-0x80000001 < lVar2) {
      if (lVar2 < 0x80000000) {
        func_0x00010354683c(lVar2,0,0xc000000000000000);
        FUN_1035466d4((float)((double)*(long *)(param_2 + 0x48) / 1000.0),0,0xc000000000000000);
        FUN_1035465fc((float)(*(double *)(param_2 + 0x50) / 1000.0),0,0xc000000000000000);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034b0bc0);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034b0bbc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034b0bb4);
  (*pcVar1)();
}



/* Entry: 1034b0bc0; end: 1034b0c87;  */

void FUN_1034b0bc0(undefined8 *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  func_0x000101556278(2,0,0);
  uVar4 = 0;
  uVar3 = 0xf000000000000000;
  if (((param_3 & 0xff00) != 0x200) && ((param_3 & 0xff) != 1)) {
    if ((long)param_2 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034b0c84);
      (*pcVar2)();
    }
    if (0x7fffffff < (long)param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034b0c88);
      (*pcVar2)();
    }
    uVar4 = param_2 & 0xffffffff;
    func_0x000100d54900(0,0,0xf000000000000000);
    uVar3 = 0xc000000000000000;
  }
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  uVar1 = 0;
  if ((param_3 & 0xff00) != 0x200) {
    uVar1 = param_3 >> 8 & 1;
  }
  param_1[2] = uVar4;
  param_1[3] = 0;
  param_1[4] = uVar3;
  param_1[5] = (ulong)uVar1;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 1034b0c88; end: 1034b0caf;  */

void FUN_1034b0c88(undefined8 *param_1)

{
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0xff;
  return;
}



/* Entry: 1034b0cb0; end: 1034b0d67;  */

undefined8 FUN_1034b0cb0(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x103556a78)(param_2,param_1);
  return param_2;
}



/* Entry: 1034b0d68; end: 1034b0d77;  */

void FUN_1034b0d68(long param_1)

{
  *(undefined1 *)(param_1 + 0xc0) = 0xb;
  return;
}



/* Entry: 1034b0d78; end: 1034b0de3;  */

undefined8 FUN_1034b0d78(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1034b0de4; end: 1034b0e1b;  */

void FUN_1034b0de4(long param_1)

{
  *(undefined1 *)(param_1 + 0xc0) = 7;
  return;
}



/* Entry: 1034b0e1c; end: 1034b0fbf;  */

void FUN_1034b0e1c(undefined8 *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_6f8 [864];
  double dStack_398;
  char cStack_390;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  dVar7 = *(double *)(param_2 + 0x370);
  cVar1 = *(char *)(param_2 + 0x378);
  func_0x0001016152c0(&uStack_150);
  func_0x000107c610b4(auStack_6f8,param_2,0x5a8);
  iVar2 = (int)auStack_6f8;
  func_0x00010189c838();
  if (iVar2 == 1) {
    uVar4 = 0;
    uVar6 = 0xf000000000000000;
  }
  else {
    if (cStack_390 == '\x01') {
      uVar4 = 0;
      uVar6 = 0xf000000000000000;
    }
    else {
      uVar4 = (ulong)(uint)(float)dStack_398;
      func_0x000101553ccc(0,0,0xf000000000000000);
      uVar6 = 0xc000000000000000;
    }
    if (cVar1 != '\x01') {
      uVar5 = (ulong)(uint)(float)dVar7;
      func_0x000101553ccc(0,0,0xf000000000000000);
      uVar3 = 0xc000000000000000;
      goto LAB_1034b0f4c;
    }
  }
  uVar5 = 0;
  uVar3 = 0xf000000000000000;
LAB_1034b0f4c:
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar4;
  param_1[3] = 0;
  param_1[4] = uVar6;
  param_1[5] = uVar5;
  param_1[6] = 0;
  param_1[7] = uVar3;
  param_1[0x21] = uStack_88;
  param_1[0x20] = uStack_90;
  param_1[0x23] = uStack_78;
  param_1[0x22] = uStack_80;
  param_1[0x25] = uStack_68;
  param_1[0x24] = uStack_70;
  param_1[0x27] = uStack_58;
  param_1[0x26] = uStack_60;
  param_1[0x19] = uStack_c8;
  param_1[0x18] = uStack_d0;
  param_1[0x1b] = uStack_b8;
  param_1[0x1a] = uStack_c0;
  param_1[0x1d] = uStack_a8;
  param_1[0x1c] = uStack_b0;
  param_1[0x1f] = uStack_98;
  param_1[0x1e] = uStack_a0;
  param_1[0x11] = uStack_108;
  param_1[0x10] = uStack_110;
  param_1[0x13] = uStack_f8;
  param_1[0x12] = uStack_100;
  param_1[0x15] = uStack_e8;
  param_1[0x14] = uStack_f0;
  param_1[0x17] = uStack_d8;
  param_1[0x16] = uStack_e0;
  param_1[9] = uStack_148;
  param_1[8] = uStack_150;
  param_1[0xb] = uStack_138;
  param_1[10] = uStack_140;
  param_1[0xd] = uStack_128;
  param_1[0xc] = uStack_130;
  param_1[0xf] = uStack_118;
  param_1[0xe] = uStack_120;
  return;
}



/* Entry: 1034b0fc0; end: 1034b20d3;  */

undefined1 * FUN_1034b0fc0(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uStack_46e0;
  undefined8 uStack_46d0;
  undefined8 uStack_46c8;
  undefined8 uStack_46c0;
  undefined8 uStack_4680;
  undefined8 uStack_4660;
  undefined8 uStack_4658;
  undefined8 uStack_4650;
  undefined8 uStack_4648;
  undefined8 uStack_4640;
  undefined8 uStack_4638;
  undefined8 uStack_4630;
  undefined8 uStack_4628;
  undefined8 uStack_4620;
  undefined8 uStack_4618;
  undefined8 uStack_4610;
  undefined8 uStack_4608;
  undefined8 uStack_4600;
  undefined8 uStack_45f8;
  undefined8 uStack_45f0;
  undefined8 uStack_45e8;
  undefined8 uStack_45e0;
  undefined8 uStack_40b0;
  undefined8 uStack_40a8;
  undefined8 uStack_40a0;
  undefined *puStack_4098;
  undefined **ppuStack_4090;
  undefined8 uStack_4088;
  undefined8 uStack_4080;
  undefined8 uStack_4078;
  undefined8 uStack_4070;
  undefined8 uStack_4068;
  undefined8 uStack_4060;
  undefined8 uStack_4058;
  undefined8 uStack_4050;
  undefined8 uStack_4048;
  undefined8 uStack_4040;
  undefined8 uStack_4038;
  undefined8 uStack_4030;
  undefined8 uStack_3b00;
  undefined8 uStack_3af8;
  long lStack_3af0;
  undefined8 uStack_3ae8;
  undefined8 uStack_3ae0;
  undefined8 uStack_3ad8;
  undefined8 uStack_3ad0;
  undefined8 uStack_3ac8;
  undefined8 uStack_3ac0;
  undefined8 uStack_3ab8;
  undefined8 uStack_3ab0;
  undefined8 uStack_3aa8;
  undefined8 uStack_3aa0;
  undefined8 uStack_3a98;
  undefined8 uStack_3a90;
  undefined8 uStack_3a80;
  undefined8 uStack_3a78;
  undefined8 uStack_3a70;
  undefined8 uStack_3a68;
  undefined8 uStack_3a60;
  undefined8 uStack_3a58;
  undefined8 uStack_3a50;
  undefined8 uStack_3a48;
  undefined8 uStack_3a40;
  undefined8 uStack_3a38;
  undefined8 uStack_3a30;
  undefined8 uStack_3a28;
  undefined8 uStack_3a20;
  undefined8 uStack_3a18;
  undefined8 uStack_3a10;
  undefined8 uStack_3a08;
  undefined8 uStack_3a00;
  undefined8 uStack_39c8;
  undefined8 uStack_39c0;
  undefined8 uStack_39b8;
  undefined8 uStack_39b0;
  undefined8 uStack_39a8;
  undefined8 uStack_39a0;
  undefined8 uStack_3998;
  undefined8 uStack_3990;
  undefined8 uStack_3988;
  undefined8 uStack_3980;
  undefined8 uStack_3978;
  undefined8 uStack_3970;
  undefined8 uStack_3968;
  undefined8 uStack_3960;
  undefined8 uStack_3958;
  undefined8 uStack_3950;
  undefined1 uStack_3948;
  undefined8 uStack_3940;
  undefined8 uStack_3938;
  undefined8 uStack_3930;
  undefined8 uStack_3928;
  undefined8 uStack_3920;
  undefined8 uStack_3918;
  undefined8 uStack_3910;
  undefined8 uStack_3908;
  undefined8 uStack_3900;
  undefined8 uStack_38f8;
  undefined8 uStack_38f0;
  undefined8 uStack_38e8;
  undefined8 uStack_38e0;
  undefined8 uStack_38cf;
  undefined8 uStack_38c0;
  undefined8 uStack_38b8;
  undefined8 uStack_38b0;
  undefined8 uStack_38a8;
  undefined8 uStack_38a0;
  undefined8 uStack_3898;
  undefined8 uStack_3890;
  undefined8 uStack_3888;
  undefined8 uStack_3880;
  undefined8 uStack_3878;
  undefined8 uStack_3870;
  undefined8 uStack_3868;
  undefined8 uStack_3860;
  undefined8 uStack_384e;
  byte bStack_3808;
  byte bStack_3807;
  byte bStack_37d0;
  undefined8 uStack_3760;
  undefined8 uStack_3758;
  undefined8 uStack_3750;
  undefined8 uStack_3748;
  undefined8 uStack_3740;
  undefined8 uStack_3738;
  undefined8 uStack_3730;
  undefined8 uStack_3728;
  undefined8 uStack_3720;
  undefined8 uStack_3718;
  undefined8 uStack_3710;
  undefined8 uStack_3708;
  undefined8 uStack_3700;
  undefined8 uStack_36f8;
  undefined8 uStack_36f0;
  undefined8 uStack_36e8;
  undefined8 uStack_36e0;
  undefined8 uStack_36d8;
  undefined8 uStack_36d0;
  undefined8 uStack_36c8;
  undefined8 uStack_36c0;
  undefined8 uStack_36b8;
  undefined8 uStack_36b0;
  undefined8 uStack_36a8;
  undefined8 uStack_36a0;
  undefined8 uStack_3698;
  undefined8 uStack_3690;
  undefined8 uStack_3688;
  undefined8 uStack_3680;
  undefined8 uStack_3678;
  undefined8 uStack_3670;
  undefined8 uStack_3668;
  undefined8 uStack_3660;
  undefined8 uStack_3658;
  undefined8 uStack_3650;
  undefined8 uStack_3648;
  undefined2 uStack_3640;
  byte bStack_363e;
  undefined8 uStack_3630;
  undefined8 uStack_3628;
  undefined8 uStack_3620;
  undefined8 uStack_3618;
  undefined8 uStack_3610;
  undefined8 uStack_3608;
  undefined8 uStack_3600;
  undefined8 uStack_35f8;
  undefined2 uStack_35f0;
  undefined8 uStack_35a8;
  undefined8 uStack_35a0;
  undefined8 uStack_3578;
  undefined8 uStack_3560;
  undefined8 uStack_3550;
  undefined8 uStack_3548;
  undefined8 uStack_3540;
  undefined8 uStack_3538;
  undefined8 uStack_3530;
  undefined8 uStack_3528;
  undefined8 uStack_3520;
  undefined8 uStack_3518;
  undefined8 uStack_3510;
  undefined8 uStack_3508;
  undefined8 uStack_3500;
  undefined8 uStack_34f8;
  undefined8 uStack_34f0;
  undefined8 uStack_34df;
  undefined8 uStack_34d0;
  undefined8 uStack_34c8;
  undefined8 uStack_34c0;
  undefined8 uStack_34b8;
  undefined8 uStack_34b0;
  undefined8 uStack_34a8;
  undefined8 uStack_34a0;
  undefined8 uStack_3498;
  undefined8 uStack_3490;
  undefined8 uStack_3488;
  undefined8 uStack_3480;
  undefined8 uStack_3478;
  undefined8 uStack_3470;
  undefined8 uStack_345e;
  undefined8 uStack_3450;
  undefined8 uStack_3448;
  undefined8 uStack_3440;
  undefined8 uStack_3438;
  undefined8 uStack_3430;
  undefined8 uStack_3428;
  undefined8 uStack_3420;
  undefined8 uStack_3418;
  undefined8 uStack_3410;
  undefined8 uStack_3408;
  undefined8 uStack_3400;
  undefined8 uStack_33f8;
  undefined8 uStack_33f0;
  undefined8 uStack_33e8;
  undefined8 uStack_33e0;
  undefined8 uStack_33d8;
  undefined1 uStack_33d0;
  undefined8 uStack_33c0;
  undefined8 uStack_33b8;
  undefined8 uStack_33b0;
  undefined8 uStack_33a8;
  undefined8 uStack_33a0;
  undefined8 uStack_3398;
  undefined8 uStack_3390;
  undefined8 uStack_3388;
  undefined8 uStack_3380;
  undefined8 uStack_3378;
  undefined8 uStack_3370;
  undefined8 uStack_3368;
  undefined8 uStack_3360;
  undefined8 uStack_334f;
  undefined8 uStack_3340;
  undefined8 uStack_3338;
  undefined8 uStack_3330;
  undefined8 uStack_3328;
  undefined8 uStack_3320;
  undefined8 uStack_3318;
  undefined8 uStack_3310;
  undefined8 uStack_3308;
  undefined8 uStack_3300;
  undefined8 uStack_32f8;
  undefined8 uStack_32f0;
  undefined8 uStack_32e8;
  undefined8 uStack_32e0;
  undefined8 uStack_32ce;
  undefined8 uStack_32c0;
  undefined8 uStack_32b8;
  undefined8 uStack_32b0;
  undefined8 uStack_32a8;
  undefined8 uStack_32a0;
  undefined8 uStack_3298;
  undefined8 uStack_3290;
  undefined8 uStack_3288;
  undefined8 uStack_3280;
  undefined8 uStack_3278;
  undefined8 uStack_3270;
  undefined8 uStack_3268;
  undefined8 uStack_3260;
  undefined8 uStack_3258;
  undefined8 uStack_3250;
  undefined8 uStack_3248;
  undefined8 uStack_3240;
  undefined8 uStack_3238;
  undefined8 uStack_3230;
  undefined8 uStack_3228;
  undefined8 uStack_3220;
  undefined8 uStack_3218;
  undefined8 uStack_3210;
  undefined8 uStack_3208;
  undefined8 uStack_3200;
  undefined8 uStack_31f8;
  undefined8 uStack_31f0;
  undefined8 uStack_31e8;
  undefined8 uStack_31e0;
  undefined8 uStack_31d8;
  undefined8 uStack_31d0;
  undefined8 uStack_31c8;
  undefined8 uStack_31c0;
  undefined8 uStack_31b8;
  undefined8 uStack_31b0;
  undefined8 uStack_31a8;
  undefined2 uStack_31a0;
  undefined8 uStack_3190;
  undefined8 uStack_3188;
  undefined8 uStack_3180;
  undefined8 uStack_3178;
  undefined8 uStack_3170;
  undefined8 uStack_3168;
  undefined8 uStack_3160;
  undefined8 uStack_3158;
  undefined2 uStack_3150;
  undefined1 *puStack_3148;
  undefined8 uStack_3140;
  undefined8 *puStack_3138;
  undefined1 auStack_3130 [2896];
  undefined1 uStack_25e0;
  undefined7 uStack_25df;
  undefined8 uStack_25d8;
  undefined8 uStack_25d0;
  undefined *puStack_25c8;
  undefined **ppuStack_25c0;
  undefined8 uStack_25b8;
  undefined8 uStack_25b0;
  undefined8 uStack_25a8;
  undefined8 uStack_25a0;
  undefined8 uStack_2598;
  undefined8 uStack_2590;
  undefined8 uStack_2588;
  undefined8 uStack_2580;
  undefined8 uStack_2578;
  undefined8 uStack_2570;
  undefined8 uStack_2568;
  undefined8 uStack_2560;
  undefined1 auStack_2038 [1448];
  undefined1 auStack_1a90 [128];
  undefined8 uStack_1a10;
  undefined8 uStack_1a08;
  undefined8 uStack_1a00;
  undefined8 uStack_19f8;
  undefined8 uStack_19f0;
  undefined8 uStack_19e8;
  undefined8 uStack_19e0;
  undefined8 uStack_19d8;
  undefined8 uStack_19d0;
  undefined8 uStack_19c8;
  undefined8 uStack_19c0;
  undefined8 uStack_19b8;
  undefined8 uStack_19b0;
  undefined8 uStack_19a8;
  undefined8 uStack_19a0;
  undefined8 uStack_1998;
  undefined8 uStack_1990;
  undefined8 uStack_1958;
  undefined8 uStack_1950;
  undefined8 uStack_1948;
  undefined8 uStack_1940;
  undefined8 uStack_1938;
  undefined8 uStack_1930;
  undefined8 uStack_1928;
  undefined8 uStack_1920;
  undefined8 uStack_1918;
  undefined8 uStack_1910;
  undefined8 uStack_1908;
  undefined8 uStack_1900;
  undefined8 uStack_18f8;
  undefined8 uStack_18f0;
  undefined8 uStack_18e8;
  undefined8 uStack_18e0;
  undefined1 uStack_18d8;
  undefined8 uStack_18d0;
  undefined8 uStack_18c8;
  undefined8 uStack_18c0;
  undefined8 uStack_18b8;
  undefined8 uStack_18b0;
  undefined8 uStack_18a8;
  undefined8 uStack_18a0;
  undefined8 uStack_1898;
  undefined8 uStack_1890;
  undefined8 uStack_1888;
  undefined8 uStack_1880;
  undefined8 uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_185f;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined8 uStack_1838;
  undefined8 uStack_1830;
  undefined8 uStack_1828;
  undefined8 uStack_1820;
  undefined8 uStack_1818;
  undefined8 uStack_1810;
  undefined8 uStack_1808;
  undefined8 uStack_1800;
  undefined8 uStack_17f8;
  undefined8 uStack_17f0;
  undefined8 uStack_17de;
  byte bStack_1798;
  byte bStack_1797;
  byte bStack_1760;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined8 uStack_16e0;
  undefined8 uStack_16d8;
  undefined8 uStack_16d0;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b8;
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined8 uStack_1690;
  undefined8 uStack_1688;
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  undefined8 uStack_1670;
  undefined8 uStack_1668;
  undefined8 uStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined8 uStack_1610;
  undefined8 uStack_1608;
  undefined8 uStack_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  undefined8 uStack_15e8;
  undefined8 uStack_15e0;
  undefined8 uStack_15d8;
  undefined2 uStack_15d0;
  byte bStack_15ce;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  undefined2 uStack_1580;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1508;
  undefined8 uStack_14f0;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  long lStack_14d0;
  undefined8 uStack_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined1 uStack_1460;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13df;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_135e;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined2 uStack_1200;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined2 uStack_11b0;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined1 auStack_1178 [1448];
  undefined1 auStack_bd0 [120];
  undefined1 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined1 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_99f;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_91e;
  undefined1 uStack_900;
  undefined1 uStack_8ff;
  undefined1 uStack_8e8;
  byte bStack_8d8;
  byte bStack_8d7;
  byte bStack_8a0;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined2 uStack_710;
  byte bStack_70e;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined2 uStack_6c0;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_648;
  undefined8 uStack_630;
  undefined1 auStack_628 [1464];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c610b4(auStack_bd0,param_2 + 8,0x5a8);
  func_0x00010178ed8c(auStack_628);
  func_0x000107c610b4(&uStack_25e0,auStack_bd0,0x5a8);
  func_0x000107c610b4(auStack_2038,auStack_628,0x5a8);
  iVar5 = (int)&uStack_25e0;
  func_0x00010189c838();
  if (iVar5 == 1) {
    iVar5 = (int)auStack_2038;
    func_0x00010189c838();
    if (iVar5 != 1) {
LAB_1034b112c:
      func_0x000107c610b4(auStack_3130,&uStack_25e0,0xb50);
      FUN_1034bbabc(auStack_bd0,auStack_1178,0x112dcbd00,&UNK_10d98e550);
      FUN_1034bbabc(auStack_bd0,auStack_1178,0x112dcbd00,&UNK_10d98e550);
      uVar12 = 0x112dcbd08;
      puVar8 = (undefined8 *)&UNK_10d98e400;
      puVar7 = auStack_3130;
      func_0x0001034bbc24();
      goto LAB_1034b12b8;
    }
    func_0x000107c610b4(auStack_3130,&uStack_25e0,0x5a8);
    FUN_1034bbabc(auStack_bd0,auStack_1178,0x112dcbd00,&UNK_10d98e550);
    FUN_1034bbabc(auStack_bd0,auStack_1178,0x112dcbd00,&UNK_10d98e550);
    func_0x0001034bbc24(auStack_3130,0x112dcbd00,&UNK_10d98e550);
  }
  else {
    func_0x000107c610b4(&uStack_3b00,&uStack_25e0,0x5a8);
    iVar5 = (int)auStack_2038;
    func_0x00010189c838();
    if (iVar5 == 1) goto LAB_1034b112c;
    func_0x000107c610b4(&uStack_40b0,auStack_2038,0x5a8);
    func_0x000107c610b4(auStack_3130,auStack_2038,0x5a8);
    func_0x000107c610b4(auStack_1178,&uStack_3b00,0x5a8);
    uVar12 = 0x112dcbd00;
    puVar8 = (undefined8 *)&UNK_10d98e550;
    FUN_1034bbabc(auStack_bd0,&uStack_4660,0x112dcbd00,&UNK_10d98e550);
    FUN_1034bbabc(auStack_bd0,&uStack_4660,0x112dcbd00,&UNK_10d98e550);
    puVar6 = auStack_1178;
    func_0x00010421948c(puVar6,auStack_3130);
    func_0x0001034bbc24(&uStack_40b0,0x112dcbd00,&UNK_10d98e550);
    puVar7 = &uStack_25e0;
    func_0x0001034bbc24();
    if (((ulong)puVar6 & 1) == 0) goto LAB_1034b12b8;
  }
  puStack_25c8 = &UNK_11065d188;
  ppuStack_25c0 = &PTR_DAT_11065d0f0;
  uStack_25e0 = 9;
  uVar12 = 0x1034b7254;
  puVar8 = &uStack_3b00;
  lStack_3af0 = param_2;
  func_0x0001034e2644(&uStack_25e0,0x1034b7254,puVar8,0,0,0);
  puVar7 = &uStack_25e0;
  func_0x0001000834e4();
LAB_1034b12b8:
  FUN_1035ced54();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puStack_3148 = puVar7;
  uStack_3140 = uVar12;
  puStack_3138 = puVar8;
  if (*(long *)(unaff_x20 + 0x48) == 0) {
    uVar12 = 0;
    lVar13 = *(long *)(unaff_x20 + 0x50);
  }
  else {
    func_0x0001000d224c(&uStack_25e0);
    uVar12 = CONCAT71(uStack_25df,uStack_25e0);
    lVar13 = *(long *)(unaff_x20 + 0x50);
  }
  if (lVar13 == 0) {
    uStack_4680 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_25e0);
    uStack_4680 = CONCAT71(uStack_25df,uStack_25e0);
  }
  if (*(long *)(unaff_x20 + 0x58) == 0) {
    uVar9 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_25e0);
    uVar9 = CONCAT71(uStack_25df,uStack_25e0);
  }
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  cVar3 = *(char *)(unaff_x20 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x40);
  iVar5 = (int)auStack_bd0;
  func_0x00010189c838();
  if (iVar5 == 1) {
    func_0x000101895cec(&uStack_25e0);
    uStack_4048 = uStack_2578;
    uStack_4050 = uStack_2580;
    uStack_4038 = uStack_2568;
    uStack_4040 = uStack_2570;
    uStack_4030 = uStack_2560;
    uStack_4088 = uStack_25b8;
    ppuStack_4090 = ppuStack_25c0;
    uStack_4078 = uStack_25a8;
    uStack_4080 = uStack_25b0;
    uStack_4058 = uStack_2588;
    uStack_4060 = uStack_2590;
    uStack_4068 = uStack_2598;
    uStack_4070 = uStack_25a0;
    uStack_40b0 = CONCAT71(uStack_25df,uStack_25e0);
    puStack_4098 = puStack_25c8;
    uStack_40a0 = uStack_25d0;
    uStack_40a8 = uStack_25d8;
    func_0x000101895d08(&uStack_3b00);
    uStack_1478 = uStack_3a98;
    uStack_1480 = uStack_3aa0;
    uStack_1470 = uStack_3a90;
    uStack_1460 = (undefined1)uStack_3a80;
    uStack_14b8 = uStack_3ad8;
    uStack_14c0 = uStack_3ae0;
    uStack_14a8 = uStack_3ac8;
    uStack_14b0 = uStack_3ad0;
    uStack_1488 = uStack_3aa8;
    uStack_1490 = uStack_3ab0;
    uStack_1498 = uStack_3ab8;
    uStack_14a0 = uStack_3ac0;
    uStack_14c8 = uStack_3ae8;
    lStack_14d0 = lStack_3af0;
    uStack_14d8 = uStack_3af8;
    uStack_14e0 = uStack_3b00;
    func_0x0001018797b4(&uStack_3550);
    uStack_1408 = uStack_3508;
    uStack_1410 = uStack_3510;
    uStack_13f8 = uStack_34f8;
    uStack_1400 = uStack_3500;
    uStack_13f0 = uStack_34f0;
    uStack_13df = uStack_34df;
    uStack_1448 = uStack_3548;
    uStack_1450 = uStack_3550;
    uStack_1438 = uStack_3538;
    uStack_1440 = uStack_3540;
    uStack_1428 = uStack_3528;
    uStack_1430 = uStack_3530;
    uStack_1418 = uStack_3518;
    uStack_1420 = uStack_3520;
    func_0x000101895d28(&uStack_34d0);
    uStack_1388 = uStack_3488;
    uStack_1390 = uStack_3490;
    uStack_1378 = uStack_3478;
    uStack_1380 = uStack_3480;
    uStack_1370 = uStack_3470;
    uStack_135e = uStack_345e;
    uStack_13c8 = uStack_34c8;
    uStack_13d0 = uStack_34d0;
    uStack_13b8 = uStack_34b8;
    uStack_13c0 = uStack_34c0;
    uStack_13a8 = uStack_34a8;
    uStack_13b0 = uStack_34b0;
    uStack_1398 = uStack_3498;
    uStack_13a0 = uStack_34a0;
    uStack_1340 = 0;
    uStack_1348 = 0;
    uStack_1350 = 0;
    uStack_1338 = 1;
    uStack_1328 = 0;
    uStack_1330 = 0;
    uStack_1318 = 0;
    uStack_1320 = 0;
    uStack_1310 = 0;
    uStack_1308 = 2;
    uStack_12f8 = 0;
    uStack_1300 = 0;
    uStack_12e8 = 0;
    uStack_12f0 = 0;
    uStack_12d8 = 0;
    uStack_12e0 = 0;
    uStack_12c8 = 0;
    uStack_12d0 = 0;
    uStack_12b8 = 0;
    uStack_12c0 = 0;
    uStack_12a8 = 0;
    uStack_12b0 = 0;
    uStack_1298 = 0;
    uStack_12a0 = 0;
    uStack_1288 = 0;
    uStack_1290 = 0;
    uStack_1278 = 0;
    uStack_1280 = 0;
    uStack_1268 = 0;
    uStack_1270 = 0;
    uStack_1258 = 0;
    uStack_1260 = 0;
    uStack_1248 = 0;
    uStack_1250 = 0;
    uStack_1238 = 0;
    uStack_1240 = 0;
    uStack_1228 = 0;
    uStack_1230 = 0;
    uStack_1218 = 0;
    uStack_1220 = 0;
    uStack_1208 = 0;
    uStack_1210 = 1;
    uStack_1200 = 0;
    uStack_11e8 = 0;
    uStack_11f0 = 0;
    uStack_11d8 = 0;
    uStack_11e0 = 0;
    uStack_11c8 = 0;
    uStack_11d0 = 0;
    uStack_11b8 = 0;
    uStack_11c0 = 0;
    uStack_11b0 = 0x100;
    uStack_1198 = 0;
    uStack_11a0 = 0;
    uStack_1188 = 0;
    uStack_1190 = 0;
    uStack_1180 = 0;
    func_0x000104218d60(auStack_1a90,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    uStack_46c8 = uStack_1508;
    uStack_46c0 = uStack_14f0;
    uStack_46d0 = uStack_1538;
    uStack_46e0 = uStack_1530;
    uStack_3168 = uStack_1598;
    uStack_3170 = uStack_15a0;
    uStack_3158 = uStack_1588;
    uStack_3160 = uStack_1590;
    uStack_3150 = uStack_1580;
    uStack_3178 = uStack_15a8;
    uStack_3180 = uStack_15b0;
    uStack_3188 = uStack_15b8;
    uStack_3190 = uStack_15c0;
    uStack_31c8 = uStack_15f8;
    uStack_31d0 = uStack_1600;
    uStack_31b8 = uStack_15e8;
    uStack_31c0 = uStack_15f0;
    uStack_31a8 = uStack_15d8;
    uStack_31b0 = uStack_15e0;
    uStack_31a0 = uStack_15d0;
    uStack_3208 = uStack_1638;
    uStack_3210 = uStack_1640;
    uStack_31f8 = uStack_1628;
    uStack_3200 = uStack_1630;
    uStack_31e8 = uStack_1618;
    uStack_31f0 = uStack_1620;
    uStack_31d8 = uStack_1608;
    uStack_31e0 = uStack_1610;
    uStack_3218 = uStack_1648;
    uStack_3220 = uStack_1650;
    uStack_3228 = uStack_1658;
    uStack_3230 = uStack_1660;
    uStack_3238 = uStack_1668;
    uStack_3240 = uStack_1670;
    uStack_3258 = uStack_1688;
    uStack_3260 = uStack_1690;
    uStack_3248 = uStack_1678;
    uStack_3250 = uStack_1680;
    uStack_32a8 = uStack_16d8;
    uStack_32b0 = uStack_16e0;
    uStack_32b8 = uStack_16e8;
    uStack_32c0 = uStack_16f0;
    uStack_3268 = uStack_1698;
    uStack_3270 = uStack_16a0;
    uStack_3278 = uStack_16a8;
    uStack_3280 = uStack_16b0;
    uStack_3288 = uStack_16b8;
    uStack_3290 = uStack_16c0;
    uStack_3298 = uStack_16c8;
    uStack_32a0 = uStack_16d0;
    uStack_32f8 = uStack_1808;
    uStack_3300 = uStack_1810;
    uStack_32e8 = uStack_17f8;
    uStack_32f0 = uStack_1800;
    uStack_32e0 = uStack_17f0;
    uStack_32ce = uStack_17de;
    uStack_3338 = uStack_1848;
    uStack_3340 = uStack_1850;
    uStack_3328 = uStack_1838;
    uStack_3330 = uStack_1840;
    uStack_3318 = uStack_1828;
    uStack_3320 = uStack_1830;
    uStack_3308 = uStack_1818;
    uStack_3310 = uStack_1820;
    uStack_3388 = uStack_1898;
    uStack_3390 = uStack_18a0;
    uStack_3398 = uStack_18a8;
    uStack_33a0 = uStack_18b0;
    uStack_33a8 = uStack_18b8;
    uStack_33b0 = uStack_18c0;
    uStack_33b8 = uStack_18c8;
    uStack_33c0 = uStack_18d0;
    uStack_334f = uStack_185f;
    uStack_3360 = uStack_1870;
    uStack_3368 = uStack_1878;
    uStack_3370 = uStack_1880;
    uStack_3378 = uStack_1888;
    uStack_3380 = uStack_1890;
    uStack_3418 = uStack_1920;
    uStack_3420 = uStack_1928;
    uStack_3428 = uStack_1930;
    uStack_3430 = uStack_1938;
    uStack_3448 = uStack_1950;
    uStack_3450 = uStack_1958;
    uStack_3438 = uStack_1940;
    uStack_3440 = uStack_1948;
    uStack_33d0 = uStack_18d8;
    uStack_33d8 = uStack_18e0;
    uStack_33e0 = uStack_18e8;
    uStack_33e8 = uStack_18f0;
    uStack_33f0 = uStack_18f8;
    uStack_3408 = uStack_1910;
    uStack_3410 = uStack_1918;
    uStack_33f8 = uStack_1900;
    uStack_3400 = uStack_1908;
    uStack_45e0 = uStack_1990;
    uStack_45f8 = uStack_19a8;
    uStack_4600 = uStack_19b0;
    uStack_45e8 = uStack_1998;
    uStack_45f0 = uStack_19a0;
    uStack_4638 = uStack_19e8;
    uStack_4640 = uStack_19f0;
    uStack_4628 = uStack_19d8;
    uStack_4630 = uStack_19e0;
    uStack_4618 = uStack_19c8;
    uStack_4620 = uStack_19d0;
    uStack_4608 = uStack_19b8;
    uStack_4610 = uStack_19c0;
    uStack_4658 = uStack_1a08;
    uStack_4660 = uStack_1a10;
    uStack_4648 = uStack_19f8;
    uStack_4650 = uStack_1a00;
  }
  else {
    uStack_25e0 = uStack_b58;
    uStack_3418 = uStack_a60;
    uStack_3420 = uStack_a68;
    uStack_3428 = uStack_a70;
    uStack_3430 = uStack_a78;
    uStack_3448 = uStack_a90;
    uStack_3450 = uStack_a98;
    uStack_3438 = uStack_a80;
    uStack_3440 = uStack_a88;
    uStack_33d0 = uStack_a18;
    uStack_33d8 = uStack_a20;
    uStack_33e0 = uStack_a28;
    uStack_33e8 = uStack_a30;
    uStack_33f0 = uStack_a38;
    uStack_3408 = uStack_a50;
    uStack_3410 = uStack_a58;
    uStack_33f8 = uStack_a40;
    uStack_3400 = uStack_a48;
    uStack_40b0 = CONCAT71(uStack_40b0._1_7_,uStack_900);
    uStack_14e0 = CONCAT71(uStack_14e0._1_7_,uStack_8ff);
    uStack_13d0 = CONCAT71(uStack_13d0._1_7_,uStack_8e8);
    uStack_3298 = uStack_808;
    uStack_32a0 = uStack_810;
    uStack_3288 = uStack_7f8;
    uStack_3290 = uStack_800;
    uStack_3278 = uStack_7e8;
    uStack_3280 = uStack_7f0;
    uStack_3268 = uStack_7d8;
    uStack_3270 = uStack_7e0;
    uStack_32b8 = uStack_828;
    uStack_32c0 = uStack_830;
    uStack_32a8 = uStack_818;
    uStack_32b0 = uStack_820;
    uStack_3238 = uStack_7a8;
    uStack_3240 = uStack_7b0;
    uStack_3228 = uStack_798;
    uStack_3230 = uStack_7a0;
    uStack_3218 = uStack_788;
    uStack_3220 = uStack_790;
    uStack_3248 = uStack_7b8;
    uStack_3250 = uStack_7c0;
    uStack_3258 = uStack_7c8;
    uStack_3260 = uStack_7d0;
    uStack_31c8 = uStack_738;
    uStack_31d0 = uStack_740;
    uStack_31b8 = uStack_728;
    uStack_31c0 = uStack_730;
    uStack_31a8 = uStack_718;
    uStack_31b0 = uStack_720;
    uStack_31a0 = uStack_710;
    uStack_3208 = uStack_778;
    uStack_3210 = uStack_780;
    uStack_31f8 = uStack_768;
    uStack_3200 = uStack_770;
    uStack_31e8 = uStack_758;
    uStack_31f0 = uStack_760;
    uStack_31d8 = uStack_748;
    uStack_31e0 = uStack_750;
    uStack_3150 = uStack_6c0;
    uStack_3158 = uStack_6c8;
    uStack_3160 = uStack_6d0;
    uStack_3168 = uStack_6d8;
    uStack_3170 = uStack_6e0;
    uStack_3188 = uStack_6f8;
    uStack_3190 = uStack_700;
    uStack_3178 = uStack_6e8;
    uStack_3180 = uStack_6f0;
    uStack_46d0 = uStack_678;
    uStack_46e0 = uStack_670;
    uStack_46c8 = uStack_648;
    uStack_46c0 = uStack_630;
    uStack_45e0 = uStack_ad0;
    uStack_45f8 = uStack_ae8;
    uStack_4600 = uStack_af0;
    uStack_45f0 = uStack_ae0;
    uStack_45e8 = uStack_ad8;
    uStack_4638 = uStack_b28;
    uStack_4640 = uStack_b30;
    uStack_4630 = uStack_b20;
    uStack_4628 = uStack_b18;
    uStack_4620 = uStack_b10;
    uStack_4618 = uStack_b08;
    uStack_4608 = uStack_af8;
    uStack_4610 = uStack_b00;
    uStack_4660 = uStack_b50;
    uStack_4658 = uStack_b48;
    uStack_4648 = uStack_b38;
    uStack_4650 = uStack_b40;
    uStack_3378 = uStack_9c8;
    uStack_3380 = uStack_9d0;
    uStack_3370 = uStack_9c0;
    uStack_3368 = uStack_9b8;
    uStack_3360 = uStack_9b0;
    uStack_334f = uStack_99f;
    uStack_33b8 = uStack_a08;
    uStack_33c0 = uStack_a10;
    uStack_33a8 = uStack_9f8;
    uStack_33b0 = uStack_a00;
    uStack_3398 = uStack_9e8;
    uStack_33a0 = uStack_9f0;
    uStack_3388 = uStack_9d8;
    uStack_3390 = uStack_9e0;
    uStack_3308 = uStack_958;
    uStack_3310 = uStack_960;
    uStack_3318 = uStack_968;
    uStack_3320 = uStack_970;
    uStack_3328 = uStack_978;
    uStack_3330 = uStack_980;
    uStack_3340 = uStack_990;
    uStack_3338 = uStack_988;
    uStack_32ce = uStack_91e;
    uStack_32e0 = uStack_930;
    uStack_32e8 = uStack_938;
    uStack_32f0 = uStack_940;
    uStack_32f8 = uStack_948;
    uStack_3300 = uStack_950;
    bStack_1760 = bStack_8a0;
    bStack_15ce = bStack_70e;
    bStack_1797 = bStack_8d7;
    bStack_1798 = bStack_8d8;
  }
  uStack_3a00 = uStack_45e0;
  uStack_3a18 = uStack_45f8;
  uStack_3a20 = uStack_4600;
  uStack_3a08 = uStack_45e8;
  uStack_3a10 = uStack_45f0;
  uStack_3a58 = uStack_4638;
  uStack_3a60 = uStack_4640;
  uStack_3a48 = uStack_4628;
  uStack_3a50 = uStack_4630;
  uStack_3a28 = uStack_4608;
  uStack_3a30 = uStack_4610;
  uStack_3a38 = uStack_4618;
  uStack_3a40 = uStack_4620;
  uStack_3a68 = uStack_4648;
  uStack_3a70 = uStack_4650;
  uStack_3a78 = uStack_4658;
  uStack_3a80 = uStack_4660;
  uStack_3960 = uStack_33e8;
  uStack_3968 = uStack_33f0;
  uStack_3950 = uStack_33d8;
  uStack_3958 = uStack_33e0;
  uStack_39a0 = uStack_3428;
  uStack_39a8 = uStack_3430;
  uStack_3990 = uStack_3418;
  uStack_3998 = uStack_3420;
  uStack_3980 = uStack_3408;
  uStack_3988 = uStack_3410;
  uStack_3970 = uStack_33f8;
  uStack_3978 = uStack_3400;
  uStack_39c0 = uStack_3448;
  uStack_39c8 = uStack_3450;
  uStack_39b0 = uStack_3438;
  uStack_39b8 = uStack_3440;
  uStack_3948 = uStack_33d0;
  uStack_38cf = uStack_334f;
  uStack_38f8 = uStack_3378;
  uStack_3900 = uStack_3380;
  uStack_38e8 = uStack_3368;
  uStack_38f0 = uStack_3370;
  uStack_3938 = uStack_33b8;
  uStack_3940 = uStack_33c0;
  uStack_3928 = uStack_33a8;
  uStack_3930 = uStack_33b0;
  uStack_3918 = uStack_3398;
  uStack_3920 = uStack_33a0;
  uStack_3908 = uStack_3388;
  uStack_3910 = uStack_3390;
  uStack_384e = uStack_32ce;
  uStack_3898 = uStack_3318;
  uStack_38a0 = uStack_3320;
  uStack_38a8 = uStack_3328;
  uStack_38b0 = uStack_3330;
  uStack_38e0 = uStack_3360;
  uStack_38b8 = uStack_3338;
  uStack_38c0 = uStack_3340;
  uStack_3860 = uStack_32e0;
  uStack_3868 = uStack_32e8;
  uStack_3870 = uStack_32f0;
  uStack_3888 = uStack_3308;
  uStack_3890 = uStack_3310;
  uStack_3878 = uStack_32f8;
  uStack_3880 = uStack_3300;
  bStack_3808 = bStack_1798 & 1;
  bStack_3807 = bStack_1797 & 1;
  bStack_37d0 = bStack_1760 & 1;
  uStack_3728 = uStack_3288;
  uStack_3730 = uStack_3290;
  uStack_3718 = uStack_3278;
  uStack_3720 = uStack_3280;
  uStack_3758 = uStack_32b8;
  uStack_3760 = uStack_32c0;
  uStack_3738 = uStack_3298;
  uStack_3740 = uStack_32a0;
  uStack_3748 = uStack_32a8;
  uStack_3750 = uStack_32b0;
  uStack_36b8 = uStack_3218;
  uStack_36c0 = uStack_3220;
  uStack_36c8 = uStack_3228;
  uStack_36d0 = uStack_3230;
  uStack_36d8 = uStack_3238;
  uStack_36e0 = uStack_3240;
  uStack_36e8 = uStack_3248;
  uStack_36f0 = uStack_3250;
  uStack_3708 = uStack_3268;
  uStack_3710 = uStack_3270;
  uStack_36f8 = uStack_3258;
  uStack_3700 = uStack_3260;
  uStack_3678 = uStack_31d8;
  uStack_3680 = uStack_31e0;
  uStack_3688 = uStack_31e8;
  uStack_3690 = uStack_31f0;
  uStack_3698 = uStack_31f8;
  uStack_36a0 = uStack_3200;
  uStack_36a8 = uStack_3208;
  uStack_36b0 = uStack_3210;
  uStack_3640 = uStack_31a0;
  uStack_3648 = uStack_31a8;
  uStack_3650 = uStack_31b0;
  uStack_3658 = uStack_31b8;
  uStack_3660 = uStack_31c0;
  uStack_3668 = uStack_31c8;
  uStack_3670 = uStack_31d0;
  uStack_3628 = uStack_3188;
  uStack_3630 = uStack_3190;
  uStack_35f0 = uStack_3150;
  uStack_35f8 = uStack_3158;
  uStack_3600 = uStack_3160;
  uStack_3608 = uStack_3168;
  uStack_3610 = uStack_3170;
  uStack_3618 = uStack_3178;
  uStack_3620 = uStack_3180;
  uStack_35a8 = uStack_46d0;
  uStack_35a0 = uStack_46e0;
  uStack_3578 = uStack_46c8;
  uStack_3560 = uStack_46c0;
  bStack_363e = bStack_15ce & 1;
  func_0x000107c610b4(&uStack_25e0,&uStack_3b00,0x5a8);
  FUN_1034b255c(&uStack_25e0,uVar1,uVar2,uVar10,uVar4);
  FUN_1034b3be8(&uStack_25e0,param_3);
  FUN_1034b3dac(&uStack_25e0,param_3,cVar3);
  FUN_1034b4174(&uStack_25e0);
  FUN_1034b446c(param_2,&uStack_25e0,param_3,uVar12,uStack_4680,uVar9,uVar11);
  if (cVar3 != '\0') {
    lVar13 = 0;
    func_0x000100b91d00();
    FUN_1034b544c(&uStack_25e0,*(undefined8 *)(param_3 + *(int *)(lVar13 + 0x48)));
  }
  FUN_1034b54b8(param_1,&uStack_25e0);
  FUN_1034b5500(&uStack_25e0,param_3);
  FUN_1034b624c(&uStack_25e0);
  FUN_1035cdf10(bStack_15ce & 1);
  func_0x00010178e3b8(&uStack_3b00);
  func_0x000107c615e8(uVar9);
  func_0x000107c615e8(uStack_4680);
  func_0x000107c615e8(uVar12);
  return puStack_3148;
}



/* Entry: 1034b20d4; end: 1034b20e7;  */

bool FUN_1034b20d4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



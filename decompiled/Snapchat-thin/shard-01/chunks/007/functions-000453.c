/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101361a64; end: 101361a6b; -[_TtC15SCOAuth2Feature40OAuth2SaturnApprovalScreenViewController numberOfSectionsInTableView:] */

undefined8 FUN_101361a64(void)

{
  return 1;
}



/* Entry: 101361a6c; end: 101361ab3; -[_TtC15SCOAuth2Feature40OAuth2SaturnApprovalScreenViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_101361a6c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_1013617d8();
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(lVar1);
  return uVar2;
}



/* Entry: 101361ab4; end: 101361ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101361ab4(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  uVar9 = param_1;
  func_0x000107c5efe4();
  uVar10 = uVar9;
  FUN_1013617d8();
  if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x101361dd8);
    (*pcVar8)();
  }
  if (uVar9 < *(ulong *)(uVar10 + 0x10)) {
    lVar12 = uVar10 + uVar9 * 0x38;
    uVar1 = *(undefined8 *)(lVar12 + 0x20);
    uVar4 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined8 *)(lVar12 + 0x30);
    uVar5 = *(undefined8 *)(lVar12 + 0x38);
    uVar3 = *(undefined8 *)(lVar12 + 0x40);
    uVar6 = *(undefined8 *)(lVar12 + 0x48);
    cVar7 = *(char *)(lVar12 + 0x50);
    func_0x000101363c34(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,cVar7);
    func_0x000107c6142c(uVar10);
    if (cVar7 == '\x01') {
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar4);
      uVar11 = 0x4365727574616546;
      func_0x000107c5fadc(0x4365727574616546,0xeb000000006c6c65);
      uVar13 = uVar11;
      func_0x000107c5efd4();
      func_0x000107c417dc(param_1);
      func_0x000107c61180();
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar13);
      FUN_101363be8();
      func_0x000107c61484(param_1,uVar13,0,0,0);
      lVar12 = _DAT_112d756e8;
      func_0x000107c61428(unaff_x20 + _DAT_112d756e8,auStack_a0,0,0);
      func_0x00010135f1c8(unaff_x20 + lVar12,auStack_88);
      if (lStack_70 == 0) {
        func_0x00010135f218(auStack_88);
        uVar13 = 0;
      }
      else {
        func_0x00010135f2a0(auStack_88,auStack_c8);
        func_0x00010135f218(auStack_88);
        func_0x0001000a8868(auStack_c8,uStack_b0);
        uVar13 = uVar3;
        FUN_1013593a0(uVar3,uVar6);
        func_0x0001000834e4(auStack_c8);
      }
      FUN_101363934(uVar1,uVar4,uVar2,uVar5,uVar13);
      FUN_101363c8c(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,1);
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(uVar4);
      func_0x000107c61574(uVar13);
    }
    else {
      func_0x000107c61434(uVar4);
      uVar11 = 0x6543726564616548;
      func_0x000107c5fadc(0x6543726564616548,0xea00000000006c6c);
      uVar13 = uVar11;
      func_0x000107c5efd4();
      func_0x000107c417dc();
      func_0x000107c61180();
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar13);
      FUN_101362c84();
      func_0x000107c61484(param_1,uVar13,0,0,0);
      uVar11 = *(undefined8 *)(param_1 + _DAT_112d75770);
      uVar13 = uVar1;
      func_0x000107c5fadc(uVar1,uVar4);
      func_0x000107c59c6c(uVar11);
      func_0x000107c61170(uVar13);
      FUN_101363c8c(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,cVar7);
      FUN_101363c8c(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,cVar7);
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x101361ddc);
  (*pcVar8)();
}



/* Entry: 101361ddc; end: 101361ea3; -[_TtC15SCOAuth2Feature40OAuth2SaturnApprovalScreenViewController tableView:cellForRowAtIndexPath:] */

void FUN_101361ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_101361ab4(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101361ea4; end: 101361f37; -[_TtC15SCOAuth2Feature40OAuth2SaturnApprovalScreenViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_101361ea4(void)

{
  long lVar1;
  undefined8 in_x3;
  long extraout_x8;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),in_x3);
  uVar3 = *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return uVar3;
}



/* Entry: 101361f38; end: 10136208f; -[_TtC15SCOAuth2Feature40OAuth2SaturnApprovalScreenViewController tableView:estimatedHeightForRowAtIndexPath:] */

undefined8 FUN_101361f38(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lStack_70;
  long lStack_68;
  
  lVar8 = 0;
  func_0x000107c5eff8();
  lVar13 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(lVar12,param_4);
  func_0x000107c61174();
  uVar9 = param_1;
  func_0x000107c5efe4();
  uVar10 = uVar9;
  FUN_1013617d8();
  if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10136208c);
    (*pcVar7)();
  }
  if (uVar9 < *(ulong *)(uVar10 + 0x10)) {
    lVar11 = uVar10 + uVar9 * 0x38;
    uVar14 = *(undefined8 *)(lVar11 + 0x20);
    uVar3 = *(undefined8 *)(lVar11 + 0x28);
    uVar1 = *(undefined8 *)(lVar11 + 0x30);
    uVar4 = *(undefined8 *)(lVar11 + 0x38);
    uVar2 = *(undefined8 *)(lVar11 + 0x40);
    uVar5 = *(undefined8 *)(lVar11 + 0x48);
    cVar6 = *(char *)(lVar11 + 0x50);
    lStack_70 = lVar8;
    lStack_68 = lVar13;
    func_0x000101363c34(uVar14,uVar3,uVar1,uVar4,uVar2,uVar5,cVar6);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(uVar10);
    (**(code **)(lStack_68 + 8))(lVar12,lStack_70);
    FUN_101363c8c(uVar14,uVar3,uVar1,uVar4,uVar2,uVar5,cVar6);
    uVar14 = 0x4048000000000000;
    if (cVar6 != '\x01') {
      uVar14 = 0x4038000000000000;
    }
    return uVar14;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x101362090);
  (*pcVar7)();
}



/* Entry: 101362090; end: 10136217f; -[_TtC15SCOAuth2Feature40OAuth2SaturnApprovalScreenViewController textView:shouldInteractWithURL:inRange:] */

undefined8
FUN_101362090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000107c5edb4(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4)
  ;
  puVar2 = PTR__OBJC_CLASS___SFSafariViewController_1126d6d00;
  func_0x000107c610f8(PTR__OBJC_CLASS___SFSafariViewController_1126d6d00);
  func_0x000107c61174(param_1);
  uVar3 = param_1;
  func_0x000107c5ed90();
  func_0x000107c48fbc(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c4f018(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return 0;
}



/* Entry: 101362180; end: 10136239f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101362180(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffa0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d756e8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  lVar2 = _DAT_112d756f0;
  uVar3 = 0x112d756e0;
  func_0x0001000285a8(0x112d756e0,&UNK_10d935a10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d756f8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75700;
  puVar4 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c55130();
  func_0x000107c5a050(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75708;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar5);
  func_0x000107c53840(puVar4);
  func_0x000107c5a050(puVar4);
  puVar5 = puVar4;
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75710;
  FUN_10135f554();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d75718;
  FUN_10135f624();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d75720;
  FUN_10135f738();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d75728) = 0;
  lVar2 = _DAT_112d75730;
  func_0x00010135fab0();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d75738) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d75740) = 0;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c();
  }
  FUN_101362700();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithNibName_bundle__1125e9850,param_1,
                      param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return puVar6;
}



/* Entry: 1013623a0; end: 1013623ff; -[_TtC15SCOAuth2Feature40OAuth2SaturnApprovalScreenViewController initWithNibName:bundle:] */

void FUN_1013623a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  FUN_101362180(param_3,param_2,param_4);
  return;
}



/* Entry: 101362400; end: 1013625f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101362400(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffb0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d756e8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  lVar2 = _DAT_112d756f0;
  uVar3 = 0x112d756e0;
  func_0x0001000285a8(0x112d756e0,&UNK_10d935a10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d756f8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75700;
  puVar4 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c55130();
  func_0x000107c5a050(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75708;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar5);
  func_0x000107c53840(puVar4);
  func_0x000107c5a050(puVar4);
  puVar5 = puVar4;
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75710;
  FUN_10135f554();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d75718;
  FUN_10135f624();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d75720;
  FUN_10135f738();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d75728) = 0;
  lVar2 = _DAT_112d75730;
  func_0x00010135fab0();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d75738) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d75740) = 0;
  FUN_101362700();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar6 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar6);
  }
  return puVar6;
}



/* Entry: 1013625f4; end: 10136261b; -[_TtC15SCOAuth2Feature40OAuth2SaturnApprovalScreenViewController initWithCoder:] */

void FUN_1013625f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_101362400();
  return;
}



/* Entry: 10136261c; end: 101362627;  */

void FUN_10136261c(void)

{
  FUN_101362700();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101362628; end: 1013626ff; -[_TtC15SCOAuth2Feature40OAuth2SaturnApprovalScreenViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101362628(long param_1)

{
  func_0x00010135f218(param_1 + _DAT_112d756e8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d756f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d756f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d75700));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d75708));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d75710));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d75718));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d75720));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d75728));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d75730));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d75738));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d75740));
  return;
}



/* Entry: 101362700; end: 10136271f;  */

void FUN_101362700(void)

{
  func_0x000107c61168(&PTR_PTR_1127cacb0);
  return;
}



/* Entry: 101362720; end: 10136272f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101362720(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112d756f0));
  return;
}



/* Entry: 101362730; end: 10136278b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101362730(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d756e8;
  func_0x000107c61428(unaff_x20 + _DAT_112d756e8,auStack_48,0x21,0);
  FUN_10135f178(param_1,unaff_x20 + lVar1);
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 10136278c; end: 101362837;  */

undefined * FUN_10136278c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a100();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2,param_2,0xc6);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c59c74(puVar1,param_2,1);
  func_0x000107c56ba8(puVar1,param_2,0);
  func_0x000107c5a050(puVar1,param_2,0);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 101362838; end: 10136290b; -[_TtC15SCOAuth2Feature10HeaderCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101362838(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lStack_50;
  long lStack_48;
  
  plVar2 = &lStack_50;
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
    lStack_48 = param_1;
  }
  else {
    func_0x000107c5faec();
    lStack_48 = param_4;
  }
  lVar1 = _DAT_112d75770;
  FUN_10136278c();
  *(long *)(param_1 + lVar1) = lStack_48;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5fadc(param_4,param_2);
    func_0x000107c6142c();
    lStack_48 = param_2;
  }
  FUN_101362c84();
  lStack_50 = param_1;
  func_0x000107c61154(&lStack_50,PTR_s_initWithStyle_reuseIdentifier__1125f1528,param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61174(plVar2);
  FUN_10136299c();
  func_0x000107c61170(plVar2);
  return (undefined1 *)plVar2;
}



/* Entry: 10136290c; end: 10136299b; -[_TtC15SCOAuth2Feature10HeaderCell initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10136290c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112d75770;
  plVar3 = &lStack_40;
  func_0x000107c61174();
  uVar2 = param_3;
  FUN_10136278c();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  FUN_101362c84();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61154(&lStack_40,PTR_s_initWithCoder__1125dd730,param_3);
  if (plVar3 != (long *)0x0) {
    puVar4 = (undefined1 *)plVar3;
    func_0x000107c61174(plVar3);
    FUN_10136299c();
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)plVar3;
}



/* Entry: 10136299c; end: 101362c67;  */

/* WARNING: Possible PIC construction at 0x0001013629e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101362a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101362a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101362ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101362b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101362b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101362b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101362ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101362bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101362c10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101362bf0) */
/* WARNING: Removing unreachable block (ram,0x000101362ba4) */
/* WARNING: Removing unreachable block (ram,0x000101362b80) */
/* WARNING: Removing unreachable block (ram,0x000101362b34) */
/* WARNING: Removing unreachable block (ram,0x000101362b10) */
/* WARNING: Removing unreachable block (ram,0x000101362ac4) */
/* WARNING: Removing unreachable block (ram,0x000101362aa0) */
/* WARNING: Removing unreachable block (ram,0x000101362a20) */
/* WARNING: Removing unreachable block (ram,0x0001013629e4) */
/* WARNING: Removing unreachable block (ram,0x000101362c14) */

void FUN_10136299c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101362c68; end: 101362c73;  */

void FUN_101362c68(void)

{
  FUN_101362c84();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101362c74; end: 101362c83; -[_TtC15SCOAuth2Feature10HeaderCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101362c74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d75770));
  return;
}



/* Entry: 101362c84; end: 101362ca3;  */

void FUN_101362c84(void)

{
  func_0x000107c61168(&PTR_PTR_1127cae90);
  return;
}



/* Entry: 101362ca4; end: 101362fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101362ca4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  lVar1 = _DAT_112d757a0;
  puVar6 = &stack0xffffffffffffff90;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar4 = puVar3;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar2);
  func_0x000107c61170(puVar4);
  puVar4 = puVar2;
  func_0x000107c4aba4(puVar2);
  func_0x000107c61180();
  func_0x000107c539d4(0x4020000000000000);
  func_0x000107c61170(puVar4);
  func_0x000107c5a050(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d757a8;
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c53840();
  puVar4 = puVar3;
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c59e10(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c5a050(puVar2);
  func_0x000107c61170(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d757b0;
  puVar2 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a100();
  func_0x000107c61174();
  puVar4 = puVar3;
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c59c78(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c56ba8(puVar2);
  func_0x000107c5a050(puVar2);
  func_0x000107c61170(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d757b8;
  puVar2 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a100();
  func_0x000107c61174();
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c59c78(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c56ba8(puVar2);
  func_0x000107c5a050(puVar2);
  func_0x000107c61170(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d757c0;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x3ff0000000000000,puVar2);
  func_0x000107c5a050(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d757c8;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c6142c();
  }
  FUN_101363be8();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_initWithStyle_reuseIdentifier__1125f1528,
                      param_1,param_2);
  func_0x000107c61170(param_2);
  func_0x000107c61174(puVar6);
  FUN_101363310();
  func_0x000107c61170(puVar6);
  return puVar6;
}



/* Entry: 101362fbc; end: 101363003; -[_TtC15SCOAuth2Feature11FeatureCell initWithStyle:reuseIdentifier:] */

void FUN_101362fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  FUN_101362ca4(param_3,param_4,param_2);
  return;
}



/* Entry: 101363004; end: 1013632e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101363004(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  
  lVar1 = _DAT_112d757a0;
  puVar6 = &stack0xffffffffffffffa0;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar4 = puVar3;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar2);
  func_0x000107c61170(puVar4);
  puVar4 = puVar2;
  func_0x000107c4aba4(puVar2);
  func_0x000107c61180();
  func_0x000107c539d4(0x4020000000000000);
  func_0x000107c61170(puVar4);
  func_0x000107c5a050(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d757a8;
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c53840();
  puVar4 = puVar3;
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c59e10(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c5a050(puVar2);
  func_0x000107c61170(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d757b0;
  puVar2 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a100();
  func_0x000107c61174();
  puVar4 = puVar3;
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c59c78(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c56ba8(puVar2);
  func_0x000107c5a050(puVar2);
  func_0x000107c61170(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d757b8;
  puVar2 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a100();
  func_0x000107c61174();
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c59c78(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c56ba8(puVar2);
  func_0x000107c5a050(puVar2);
  func_0x000107c61170(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d757c0;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x3ff0000000000000,puVar2);
  func_0x000107c5a050(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d757c8;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
  FUN_101363be8();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithCoder__1125dd730,param_1);
  if (puVar6 != (undefined1 *)0x0) {
    puVar7 = puVar6;
    func_0x000107c61174(puVar6);
    FUN_101363310();
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61170(param_1);
  return puVar6;
}



/* Entry: 1013632e8; end: 10136330f; -[_TtC15SCOAuth2Feature11FeatureCell initWithCoder:] */

void FUN_1013632e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_101363004();
  return;
}



/* Entry: 101363310; end: 101363933;  */

/* WARNING: Possible PIC construction at 0x00010136335c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101363398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101363470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101363490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013634dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013634fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101363548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101363568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013635b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013635d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101363618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101363668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013636bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013636f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010136372c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010136377c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013637d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101363828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101363880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013638d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101363884) */
/* WARNING: Removing unreachable block (ram,0x00010136382c) */
/* WARNING: Removing unreachable block (ram,0x0001013637d8) */
/* WARNING: Removing unreachable block (ram,0x000101363780) */
/* WARNING: Removing unreachable block (ram,0x000101363730) */
/* WARNING: Removing unreachable block (ram,0x0001013636fc) */
/* WARNING: Removing unreachable block (ram,0x0001013636c0) */
/* WARNING: Removing unreachable block (ram,0x00010136366c) */
/* WARNING: Removing unreachable block (ram,0x00010136361c) */
/* WARNING: Removing unreachable block (ram,0x0001013635dc) */
/* WARNING: Removing unreachable block (ram,0x0001013635b8) */
/* WARNING: Removing unreachable block (ram,0x00010136356c) */
/* WARNING: Removing unreachable block (ram,0x00010136354c) */
/* WARNING: Removing unreachable block (ram,0x000101363500) */
/* WARNING: Removing unreachable block (ram,0x0001013634e0) */
/* WARNING: Removing unreachable block (ram,0x000101363494) */
/* WARNING: Removing unreachable block (ram,0x000101363474) */
/* WARNING: Removing unreachable block (ram,0x00010136339c) */
/* WARNING: Removing unreachable block (ram,0x000101363360) */
/* WARNING: Removing unreachable block (ram,0x0001013638dc) */

void FUN_101363310(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101363934; end: 101363a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101363934(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  code *pcVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d757b0);
  func_0x000107c5fadc();
  func_0x000107c59c6c(uVar5);
  func_0x000107c61170(param_1);
  if (param_4 == 0) {
    func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112d757b8));
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d757b8);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c59c6c(uVar5);
    func_0x000107c61170(param_3);
    func_0x000107c550d8(uVar5);
  }
  if (param_5 != (long *)0x0) {
    puVar1 = &UNK_1103a6b20;
    func_0x000107c613fc(&UNK_1103a6b20,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    pcVar4 = *(code **)(*param_5 + 0x60);
    func_0x000107c6157c(param_5);
    uVar5 = 0x101363efc;
    puVar3 = puVar1;
    (*pcVar4)(0x101363efc);
    func_0x000107c61574(puVar1);
    uVar2 = uVar5;
    func_0x000107c614f0(uVar5);
    (**(code **)(puVar3 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d757c8),uVar2,puVar3);
    func_0x000107c61574(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
    return;
  }
  return;
}



/* Entry: 101363a88; end: 101363b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101363a88(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d757a8);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    if (lVar2 != 0) {
      func_0x000107c45154(lVar2);
      func_0x000107c61180();
    }
    func_0x000107c55258(uVar1);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101363b34; end: 101363b3f;  */

void FUN_101363b34(void)

{
  FUN_101363be8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101363b40; end: 101363b6f;  */

void FUN_101363b40(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101363b70; end: 101363be7; -[_TtC15SCOAuth2Feature11FeatureCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101363b70(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d757a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d757a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d757b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d757b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d757c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d757c8));
  return;
}



/* Entry: 101363be8; end: 101363c07;  */

void FUN_101363be8(void)

{
  func_0x000107c61168(&PTR_PTR_1127caf58);
  return;
}



/* Entry: 101363c08; end: 101363c73;  */

long FUN_101363c08(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101363c74; end: 101363c8b;  */

/* WARNING: Possible PIC construction at 0x000101363cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101363cb0) */
/* WARNING: Removing unreachable block (ram,0x000101363cd4) */
/* WARNING: Removing unreachable block (ram,0x000101363cb8) */

void FUN_101363c74(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*param_1,param_1[1],param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],
             *(undefined1 *)(param_1 + 6));
  return;
}



/* Entry: 101363c8c; end: 101363ce3;  */

/* WARNING: Possible PIC construction at 0x000101363cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101363cb0) */
/* WARNING: Removing unreachable block (ram,0x000101363cd4) */
/* WARNING: Removing unreachable block (ram,0x000101363cb8) */

void FUN_101363c8c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101363ce4; end: 101363de7;  */

undefined8 * FUN_101363ce4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  func_0x000101363c34(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  return param_1;
}



/* Entry: 101363de8; end: 101363e3b;  */

undefined8 * FUN_101363de8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  FUN_101363c8c(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  return param_1;
}



/* Entry: 101363e3c; end: 101363f47;  */

int FUN_101363e3c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 0xc) ^ 0xff;
  if (*(byte *)(param_1 + 0xc) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101363f48; end: 101363fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101363f48(void)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 7;
  func_0x0001002a64a8(&uStack_50);
  return;
}



/* Entry: 101363fdc; end: 101363fff;  */

void FUN_101363fdc(long param_1,long param_2)

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



/* Entry: 101364000; end: 1013640ab;  */

void FUN_101364000(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1013640ac; end: 101364353;  */

undefined * FUN_1013640ac(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  
  uVar13 = *(ulong *)(unaff_x20 + 0x68);
  uVar17 = uVar13 & 0xffffffffffffff8;
  if (uVar13 >> 0x3e == 0) {
    uVar15 = *(ulong *)(uVar17 + 0x10);
  }
  else {
    uVar15 = uVar17;
    if (0x7fffffffffffffff < uVar13) {
      uVar15 = uVar13;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar13);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar12 = 0;
    do {
      while( true ) {
        if ((uVar13 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar17 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1013642f8);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(uVar13 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar12;
          func_0x00010136f448(uVar12,uVar13);
        }
        uVar1 = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1013642f4);
          (*pcVar3)();
        }
        uVar5 = uVar4;
        func_0x000107c4a118();
        if (((int)uVar5 != 0) && (uVar5 = uVar4, func_0x000107c4e638(), uVar5 == 1)) break;
        func_0x000107c61170(uVar4);
        uVar12 = uVar12 + 1;
        if (uVar1 == uVar15) goto LAB_1013641f8;
      }
      puVar6 = puVar2;
      func_0x000107c61558();
      if (((ulong)puVar6 & 1) == 0) {
        FUN_101370f44(0,*(long *)(puVar2 + 0x10) + 1,1);
      }
      uVar12 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar12) {
        FUN_101370f44(1 < *(ulong *)(puVar2 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar12 + 1;
      *(ulong *)(puVar2 + uVar12 * 8 + 0x20) = uVar4;
      uVar12 = uVar1;
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    } while (uVar1 != uVar15);
  }
LAB_1013641f8:
  func_0x000107c6142c(uVar13);
  if (((long)puVar2 < 0) || (((ulong)puVar2 >> 0x3e & 1) != 0)) {
    puVar14 = puVar2;
    func_0x000107c60480();
  }
  else {
    puVar14 = *(undefined **)(puVar2 + 0x10);
  }
  if (puVar14 == (undefined *)0x0) {
    func_0x000107c61574(puVar2);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar10 = (undefined *)((ulong)puVar14 & ((long)puVar14 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000100403514(0,puVar10,0);
    if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101364354);
      (*pcVar3)();
    }
    puVar16 = (undefined *)0x0;
    do {
      if (((ulong)puVar2 & 0xc000000000000001) == 0) {
        puVar7 = *(undefined **)(puVar2 + (long)puVar16 * 8 + 0x20);
        func_0x000107c61174();
        puVar11 = puVar10;
      }
      else {
        puVar7 = puVar16;
        puVar11 = puVar2;
        func_0x00010136f448();
      }
      func_0x000107c61174();
      puVar8 = puVar7;
      func_0x000107c4e620();
      func_0x000107c61180();
      puVar9 = puVar8;
      func_0x000107c5faec();
      puVar10 = puVar11;
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar8);
      uVar13 = *(ulong *)(puVar6 + 0x10);
      puVar7 = (undefined *)(uVar13 + 1);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar13) {
        puVar10 = puVar7;
        func_0x000100403514(1 < *(ulong *)(puVar6 + 0x18),puVar7,1);
      }
      puVar16 = puVar16 + 1;
      *(undefined **)(puVar6 + 0x10) = puVar7;
      *(undefined **)(puVar6 + uVar13 * 0x10 + 0x20) = puVar9;
      *(undefined **)(puVar6 + uVar13 * 0x10 + 0x28) = puVar11;
    } while (puVar14 != puVar16);
    func_0x000107c61574(puVar2);
  }
  return puVar6;
}



/* Entry: 101364354; end: 10136453b;  */

/* WARNING: Possible PIC construction at 0x0001013644ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013644f0) */

void FUN_101364354(double param_1)

{
  char *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c51820();
  func_0x000107c61170(puVar3);
  pcVar1 = "ScreenBusinessLogic";
  if (3.0 <= param_1) {
    pcVar1 = "fUgCUAhaBAivthhgAQ%3D%3D&uc=8";
  }
  puVar3 = PTR_PTR_1126b08b0;
  func_0x000107c61168(PTR_PTR_1126b08b0);
  uVar4 = 0xd00000000000005d;
  func_0x000107c5fadc(0xd00000000000005d,(ulong)pcVar1 | 0x8000000000000000);
  func_0x000107c3f71c(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  puVar5 = PTR_PTR_1126b08a8;
  func_0x000107c610f8(PTR_PTR_1126b08a8);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c460f4(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  lVar7 = *(long *)(unaff_x20 + 0x50);
  func_0x000107c423b0();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar8 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar8 == 0) {
      func_0x000107c6142c((ulong)pcVar1 | 0x8000000000000000);
      func_0x000107c61170(puVar5);
      lVar8 = *(long *)(unaff_x20 + 0x48);
      *(undefined8 *)(unaff_x20 + 0x48) = 0;
    }
    else {
      puVar3 = PTR_PTR_1126b08b8;
      func_0x000107c610f8(PTR_PTR_1126b08b8);
      uVar4 = 0xd00000000000005d;
      func_0x000107c5fadc(0xd00000000000005d,(ulong)pcVar1 | 0x8000000000000000);
      func_0x000107c6142c((ulong)pcVar1 | 0x8000000000000000);
      func_0x000107c4766c(puVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c409f4(lVar8);
      func_0x000107c61180();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10136453c);
  (*pcVar2)();
}



/* Entry: 10136453c; end: 1013651e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10136453c(void)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar15;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x13;
  undefined *puVar18;
  ulong uVar19;
  long unaff_x20;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  long lVar26;
  long lVar27;
  undefined8 uStack_1a0;
  undefined4 auStack_198 [2];
  undefined1 auStack_190 [12];
  undefined4 uStack_184;
  long lStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar3 = 0;
  func_0x000107c5f7fc();
  lVar22 = *(long *)(lVar3 + -8);
  lStack_130 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar4 = 0;
  func_0x000107c5f824();
  lVar24 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
  lVar14 = (long)(auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_138 = lVar14;
  func_0x000107c5ec24();
  lStack_110 = *(long *)(lVar3 + -8);
  lStack_108 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_110 + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  lStack_118 = lVar14;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_02;
  lVar3 = 0;
  func_0x000107c5ede0();
  lStack_d0 = *(long *)(lVar3 + -8);
  lStack_d8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar14 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  lStack_148 = extraout_x13;
  lStack_140 = lVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar15 - extraout_x12;
  lVar5 = 0;
  func_0x000107c5ebbc();
  lVar26 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  lVar17 = lVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_f0 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar17 - extraout_x12_00;
  lStack_f8 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar17 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = lVar17 - extraout_x12_02;
  lVar3 = 0x112d4b5b0;
  puVar18 = &UNK_10d912140;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar27 - extraout_x8_04;
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lStack_100 = *(long *)(unaff_x20 + 0x38);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar20 = *(long *)(unaff_x20 + 0x60);
  lVar23 = lVar20;
  func_0x000107c4fb0c();
  func_0x000107c61180();
  if (lVar23 == 0) {
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x101365150);
    (*pcVar25)();
  }
  lVar6 = lVar23;
  lStack_170 = lVar24;
  lStack_168 = lVar4;
  puStack_160 = auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec();
  puStack_e0 = puVar18;
  func_0x000107c61170(lVar23);
  lVar23 = lVar20;
  func_0x000107c3fcb0();
  func_0x000107c61180();
  if (lVar23 == 0) {
    lVar4 = 0;
    puStack_e8 = (undefined *)0x0;
  }
  else {
    lVar4 = lVar23;
    func_0x000107c5faec();
    puStack_e8 = puVar18;
    func_0x000107c61170(lVar23);
  }
  lStack_120 = lVar14;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  if (lVar20 == 0) {
    lVar23 = 0;
    puVar18 = (undefined *)0x0;
  }
  else {
    lVar23 = lVar20;
    func_0x000107c5faec();
    func_0x000107c61170(lVar20);
  }
  lVar20 = lVar3;
  func_0x000107c49970();
  uStack_184 = (undefined4)lVar20;
  FUN_1013640ac();
  lStack_128 = *(long *)(unaff_x20 + 0x78);
  lStack_180 = lVar20;
  func_0x000107c6157c(unaff_x20);
  func_0x000107c5ec14(lVar16,lVar6,puStack_e0);
  puStack_178 = puVar18;
  func_0x000107c5ebb0(lVar27,0x6574617473,0xe500000000000000,lVar23,puVar18);
  uVar7 = 0;
  FUN_1012d3170(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar9 = *(ulong *)(uVar7 + 0x10);
  uVar21 = uVar7;
  lStack_158 = lVar22;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar9) {
    uVar21 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_1012d3170(uVar21,uVar9 + 1,1,uVar7);
  }
  *(ulong *)(uVar21 + 0x10) = uVar9 + 1;
  uVar19 = (ulong)*(byte *)(lVar26 + 0x50) + 0x20 &
           ((ulong)*(byte *)(lVar26 + 0x50) ^ 0xffffffffffffffff);
  lVar23 = *(long *)(lVar26 + 0x48);
  pcVar25 = *(code **)(lVar26 + 0x20);
  (*pcVar25)(uVar21 + uVar19 + lVar23 * uVar9,lVar27,lVar5);
  func_0x000107c5ebb0(lVar17,0x65646f63,0xe400000000000000,lVar4,puStack_e8);
  uVar9 = *(ulong *)(uVar21 + 0x10);
  uVar7 = uVar21;
  if (*(ulong *)(uVar21 + 0x18) >> 1 <= uVar9) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar21 + 0x18));
    FUN_1012d3170(uVar7,uVar9 + 1,1,uVar21);
  }
  lVar20 = lStack_100;
  *(ulong *)(uVar7 + 0x10) = uVar9 + 1;
  (*pcVar25)(uVar7 + uVar19 + uVar9 * lVar23,lVar17,lVar5);
  lVar14 = lVar3;
  func_0x000107c4e6c8();
  func_0x000107c61180();
  lVar4 = lStack_108;
  uVar9 = uVar7;
  if (lVar14 != 0) {
    lVar22 = lVar14;
    func_0x000107c5faec();
    func_0x000107c61170(lVar14);
    func_0x000107c5ebb0(lStack_f8,0xd00000000000001e,0x800000010ef387f0,lVar22,lVar17);
    func_0x000107c6142c(lVar17);
    uVar21 = *(ulong *)(uVar7 + 0x10);
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar21) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_1012d3170(uVar9,uVar21 + 1,1,uVar7);
    }
    *(ulong *)(uVar9 + 0x10) = uVar21 + 1;
    lVar17 = lStack_f8;
    (*pcVar25)(uVar9 + uVar19 + uVar21 * lVar23,lStack_f8,lVar5);
  }
  lVar14 = lVar3;
  func_0x000107c52060();
  func_0x000107c61180();
  uVar21 = uVar9;
  if (lVar14 != 0) {
    lVar22 = lVar14;
    func_0x000107c5faec();
    func_0x000107c61170(lVar14);
    func_0x000107c5ebb0(uStack_f0,0x5f6e6f6973736573,0xea00000000006469,lVar22,lVar17);
    func_0x000107c6142c(lVar17);
    uVar7 = *(ulong *)(uVar9 + 0x10);
    if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar7) {
      uVar21 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
      FUN_1012d3170(uVar21,uVar7 + 1,1,uVar9);
    }
    *(ulong *)(uVar21 + 0x10) = uVar7 + 1;
    (*pcVar25)(uVar21 + uVar19 + uVar7 * lVar23,uStack_f0,lVar5);
  }
  lVar23 = lStack_110;
  pcVar25 = *(code **)(lStack_110 + 0x30);
  lVar14 = lVar16;
  (*pcVar25)(lVar16,1,lVar4);
  lVar5 = lStack_d0;
  lVar17 = lStack_d8;
  if ((int)lVar14 == 0) {
    func_0x000107c61434(uVar21);
    func_0x000107c5ebc8();
  }
  lVar24 = lVar16;
  (*pcVar25)(lVar16,1,lVar4);
  lVar22 = lStack_118;
  lVar14 = lStack_120;
  if ((int)lVar24 == 0) {
    (**(code **)(lVar23 + 0x10))(lStack_118,lVar16,lVar4);
    lVar14 = lStack_120;
    func_0x000107c5ebe8(lStack_120);
    (**(code **)(lVar23 + 8))(lVar22,lVar4);
    lVar23 = lVar14;
    (**(code **)(lVar5 + 0x30))(lVar14,1,lVar17);
    if ((int)lVar23 != 1) {
      pcVar25 = *(code **)(lVar5 + 0x20);
      uStack_f0 = uVar21;
      (*pcVar25)(lVar15,lVar14,lVar17);
      lVar23 = *(long *)(lStack_128 + _DAT_1130837d0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar23 != 0) {
        func_0x000107c4b9f4();
        func_0x000107c615e8(lVar23);
      }
      lVar23 = lVar3;
      func_0x000107c4a39c();
      puVar18 = PTR___NSConcreteStackBlock_11034bd00;
      if ((int)lVar23 != 0) {
        puVar8 = &UNK_1103a6df8;
        func_0x000107c613fc(&UNK_1103a6df8,0x20,7);
        *(undefined8 *)(puVar8 + 0x10) = 0x101365cb8;
        *(long *)(puVar8 + 0x18) = unaff_x20;
        lVar4 = *(long *)(lVar20 + 0x18);
        func_0x000107c6157c(unaff_x20);
        func_0x000107c44f60();
        func_0x000107c61180();
        lVar23 = lVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar23 == 0) {
          puStack_a8 = (undefined *)0x3;
          func_0x0001000285a8(0x112d75a18,&UNK_10d935ba8);
          ppuVar11 = &puStack_a8;
          func_0x000100854cb0(ppuVar11);
          func_0x000103dbf524();
          func_0x000107c61574(ppuVar11);
          func_0x000107c61574(puVar8);
        }
        else {
          func_0x000107c5ed90();
          pcStack_88 = (code *)0x101365b00;
          puStack_80 = (undefined *)0x0;
          puStack_a8 = puVar18;
          uStack_a0 = 0x42000000;
          pcStack_98 = FUN_101365b04;
          puStack_90 = &UNK_1103a6e10;
          ppuVar11 = &puStack_a8;
          func_0x000107c60bc4(ppuVar11);
          func_0x000107c61574(puStack_80);
          lVar5 = lVar23;
          func_0x000107c3ecec(lVar23);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar11);
          func_0x000107c615e8(lVar23);
          func_0x000107c61170(lVar4);
          uVar9 = 0;
          func_0x000107c61544(0,"",0x56,0x192,0x20,1);
          func_0x000107c61574(0);
          if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x10136514c);
            (*pcVar25)();
          }
          lVar4 = *(long *)(lVar20 + 0x18);
          func_0x000107c44f4c();
          func_0x000107c61180();
          lVar23 = lVar4;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar4);
          if (lVar23 == 0) {
            func_0x000107c61170(lVar5);
            func_0x000107c61574(puVar8);
            lVar5 = lStack_d0;
          }
          else {
            lVar17 = *(long *)(lVar20 + 0x20);
            func_0x000107c4f7c0();
            func_0x000107c61180();
            if (lVar17 == 0) {
                    /* WARNING: Does not return */
              pcVar25 = (code *)SoftwareBreakpoint(1,0x101365154);
              (*pcVar25)();
            }
            puVar10 = &UNK_1103a6e48;
            func_0x000107c613fc(&UNK_1103a6e48,0x20,7);
            *(code **)(puVar10 + 0x10) = FUN_101365d88;
            *(undefined **)(puVar10 + 0x18) = puVar8;
            pcStack_88 = (code *)0x101365d90;
            puStack_a8 = puVar18;
            uStack_a0 = 0x42000000;
            pcStack_98 = FUN_101365b40;
            puStack_90 = &UNK_1103a6e60;
            ppuVar11 = &puStack_a8;
            puStack_80 = puVar10;
            func_0x000107c60bc4(ppuVar11);
            puVar10 = puStack_80;
            func_0x000107c6157c(puVar8);
            func_0x000107c61574(puVar10);
            lVar4 = lVar23;
            func_0x000107c5c2f4(lVar23);
            func_0x000107c61180();
            func_0x000107c61170(lVar5);
            func_0x000107c61574(puVar8);
            func_0x000107c60bd0(ppuVar11);
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar23);
            func_0x000107c61170(lVar17);
            lVar5 = lStack_d0;
            lVar17 = lStack_d8;
          }
        }
      }
      uVar12 = 0;
      func_0x0001000295c4();
      func_0x000107c5ffdc();
      lVar23 = lStack_140;
      lStack_100 = lVar3;
      lStack_f8 = uVar12;
      (**(code **)(lVar5 + 0x10))(lStack_140,lVar15,lVar17);
      uVar9 = (ulong)*(byte *)(lVar5 + 0x50);
      uVar21 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
      uVar7 = lStack_148 + uVar21 + 7 & 0xfffffffffffffff8;
      puVar8 = &UNK_1103a6da8;
      func_0x000107c613fc(&UNK_1103a6da8,uVar7 + 0x30,uVar9 | 7);
      (*pcVar25)(puVar8 + uVar21,lVar23,lVar17);
      lVar23 = lStack_100;
      uVar12 = uStack_150;
      lVar3 = lStack_180;
      puVar1 = (undefined8 *)(puVar8 + uVar7);
      *puVar1 = uStack_150;
      *(undefined2 *)(puVar1 + 1) = 0x101;
      *(char *)((long)puVar1 + 10) = (char)uStack_184;
      *(long *)(puVar8 + uVar7 + 0x10) = lStack_100;
      *(long *)(puVar8 + uVar7 + 0x18) = lStack_180;
      *(undefined8 *)(puVar8 + uVar7 + 0x20) = 0x101365cb8;
      *(long *)((long)(puVar8 + uVar7 + 0x20) + 8) = unaff_x20;
      pcStack_88 = FUN_101365cc0;
      puStack_a8 = puVar18;
      uStack_a0 = 0x42000000;
      pcStack_98 = (code *)&UNK_1000f6b44;
      puStack_90 = &UNK_1103a6dc0;
      ppuVar11 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar11);
      puVar18 = puStack_80;
      func_0x000107c6157c(unaff_x20);
      func_0x000107c61174(uVar12);
      func_0x000107c61174(lVar23);
      func_0x000107c61434(lVar3);
      func_0x000107c61574(puVar18);
      lVar23 = lStack_138;
      func_0x000107c5f808(lStack_138);
      puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001c7eec();
      uVar12 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar13 = uVar12;
      func_0x0001001c7f30();
      lVar17 = lStack_130;
      puVar2 = puStack_160;
      func_0x000107c60264(puStack_160,&puStack_a8,uVar12,uVar13,lStack_130,puVar18);
      lVar4 = lStack_f8;
      func_0x000107c5ffe8(0,lVar23,puVar2,ppuVar11);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c6142c(lVar3);
      func_0x000107c61574(unaff_x20);
      func_0x000107c6142c(puStack_e0);
      func_0x000107c61170(lVar4);
      func_0x000107c6142c(puStack_178);
      func_0x000107c6142c(puStack_e8);
      (**(code **)(lStack_158 + 8))(puVar2,lVar17);
      (**(code **)(lStack_170 + 8))(lVar23,lStack_168);
      (**(code **)(lStack_d0 + 8))(lVar15,lStack_d8);
      func_0x000107c6142c(uStack_f0);
      FUN_101365d48(lVar16,0x112d4b5b0,&UNK_10d912140);
      return;
    }
  }
  else {
    (**(code **)(lVar5 + 0x38))(lStack_120,1,1,lVar17);
  }
  FUN_101365d48(lVar14,0x112d36580,&UNK_10d9016d0);
  *(undefined4 *)(lVar16 + -8) = 0;
  *(undefined8 *)(lVar16 + -0x10) = 0x30;
  func_0x000107c60450("Fatal error",0xb,2,0x6e207369206c7275,0xea00000000006c69,
                      "SCOAuth2Feature/OAuth2RedirectHandler.swift",0x2b,2);
                    /* WARNING: Does not return */
  pcVar25 = (code *)SoftwareBreakpoint(1,0x1013651e4);
  (*pcVar25)();
}



/* Entry: 1013651e4; end: 10136524b;  */

void FUN_1013651e4(void)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  
  uStack_38 = 3;
  func_0x0001000285a8(0x112d75a18,&UNK_10d935ba8);
  puVar1 = &uStack_38;
  func_0x000100854cb0(puVar1);
  func_0x000103dbf524();
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 10136524c; end: 1013652a7;  */

/* WARNING: Possible PIC construction at 0x000101365258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101365268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101365278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101365288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010136527c) */
/* WARNING: Removing unreachable block (ram,0x00010136526c) */
/* WARNING: Removing unreachable block (ram,0x00010136525c) */
/* WARNING: Removing unreachable block (ram,0x00010136528c) */

void FUN_10136524c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1013652a8; end: 10136531b;  */

long FUN_1013652a8(long param_1)

{
  func_0x000103dbf870();
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x38));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x48));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x58));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x68));
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x70));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x78));
  return param_1;
}



/* Entry: 10136531c; end: 10136540f;  */

void FUN_10136531c(undefined8 param_1)

{
  FUN_1013652a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x80,7);
  return;
}



/* Entry: 101365410; end: 101365487;  */

void FUN_101365410(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  uVar2 = (undefined1)(0x4000201 >> (ulong)(((uint)uVar3 & 3) << 3));
  if (3 < uVar3) {
    uVar2 = 3;
  }
  uVar1 = 0;
  if (3 < uVar3) {
    uVar1 = uVar3;
  }
  *param_1 = uVar2;
  *(ulong *)(param_1 + 8) = uVar1;
  if (uVar3 < 4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101365488; end: 101365583;  */

ulong * FUN_101365488(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (uVar1 < 0xffffffff) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      func_0x000107c61174();
    }
  }
  else if (uVar1 < 0xffffffff) {
    func_0x000107c61170(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
  }
  return param_1;
}



/* Entry: 101365584; end: 101365687;  */

int FUN_101365584(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffb < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffc;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (4 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -3;
  }
  return iVar1;
}



/* Entry: 101365688; end: 1013656ff;  */

undefined1 * FUN_101365688(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101365700; end: 1013657bb;  */

int FUN_101365700(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1013657bc; end: 101365937;  */

undefined8 FUN_1013657bc(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  
  puVar2 = &stack0xffffffffffffff90;
  puVar4 = &stack0xffffffffffffff90;
  uVar1 = 0x112d755f8;
  func_0x0001000285a8(0x112d755f8,&UNK_10d9358f0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  lVar7 = *(long *)(unaff_x20 + 0x48);
  if (lVar7 != 0) {
    func_0x000107c60bc4(&stack0xffffffffffffff90);
    func_0x000107c615f0(lVar7);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(uVar1);
    uVar3 = 0;
    func_0x000101365338(0);
    func_0x000107c6157c();
    func_0x000107c5fb18(&stack0xffffffffffffff90,uVar3);
    uVar5 = 0;
    func_0x0001048b0ec8(0);
    func_0x000107c610f8();
    func_0x0001048b0b48(puVar4,uVar3,0x2a,uVar5);
    uVar3 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    lVar6 = lVar7;
    func_0x000107c43124(lVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c60bd0(puVar2);
    func_0x000107c615e8(lVar6);
    func_0x000107c615e8(lVar7);
  }
  return uVar1;
}



/* Entry: 101365938; end: 10136597f;  */

void FUN_101365938(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    lStack_28 = param_2;
    func_0x000107c61174(param_2);
    func_0x0001002a64a8(&lStack_28);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101365980; end: 101365adb;  */

undefined1  [16] FUN_101365980(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auVar9 [16];
  
  func_0x000108ed0608();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
    func_0x000107c4c12c();
    func_0x000107c61180();
    uVar7 = param_2;
    func_0x000107c5ecac(lVar2,param_2,0,0,puVar3,0,0xe000000000000000,0,0xe000000000000000);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(puVar3);
    lVar4 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    uVar8 = 0x48;
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c4d98c();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170();
    *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
    func_0x00010075bbf0();
    *(undefined8 *)(lVar4 + 0x40) = uVar5;
    *(undefined8 *)(lVar4 + 0x20) = uVar6;
    *(undefined8 *)(lVar4 + 0x28) = uVar8;
    uVar6 = uVar7;
    func_0x000107c5fae0(lVar2,uVar7,lVar4);
    func_0x000107c6142c(uVar7);
    func_0x000107c61574(lVar4);
    auVar9._8_8_ = uVar6;
    auVar9._0_8_ = lVar2;
    return auVar9;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101365adc);
  (*pcVar1)();
}



/* Entry: 101365adc; end: 101365b03;  */

void FUN_101365adc(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    lStack_28 = param_2;
    func_0x000107c61174(param_2);
    func_0x0001002a64a8(&lStack_28);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101365b04; end: 101365b3f;  */

void FUN_101365b04(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c615f0(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 101365b40; end: 101365c3b;  */

/* WARNING: Possible PIC construction at 0x000101365bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101365bfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101365c18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101365c00) */
/* WARNING: Removing unreachable block (ram,0x000101365bb4) */
/* WARNING: Removing unreachable block (ram,0x000101365c1c) */

void FUN_101365b40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  long lVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_5 == 0) {
    func_0x000107c6157c(*(undefined8 *)(param_1 + 0x28));
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_4);
    lVar2 = param_6;
    func_0x000107c61174(param_6);
    (*pcVar1)(param_2,param_3,param_4,0,0xf000000000000000,param_6);
  }
  else {
    func_0x000107c6157c(*(undefined8 *)(param_1 + 0x28));
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_4);
    lVar2 = param_5;
    func_0x000107c61174(param_5);
    func_0x000107c5ee30(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101365c3c; end: 101365ca7;  */

undefined8 FUN_101365c3c(long param_1)

{
  long unaff_x20;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      if (param_1 != 1) goto LAB_101365c80;
      if (*(long *)(unaff_x20 + 0x58) != 0) {
        func_0x000107c42054();
      }
    }
    FUN_10136453c();
  }
  else {
    if (param_1 == 2) {
      if (*(long *)(unaff_x20 + 0x58) == 0) {
        return 0;
      }
      func_0x000107c42054();
      return 0;
    }
    if (param_1 == 3) {
      return 0;
    }
LAB_101365c80:
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      func_0x000107c4f02c();
    }
  }
  return 0;
}



/* Entry: 101365ca8; end: 101365cbf;  */

void FUN_101365ca8(ulong param_1)

{
  if (param_1 < 4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101365cc0; end: 101365d47;  */

void FUN_101365cc0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar4);
  puVar2 = (undefined8 *)(unaff_x20 + uVar4 + 0x20);
  FUN_101370c60(unaff_x20 + uVar5,*puVar1,*(undefined1 *)(puVar1 + 1),
                *(undefined1 *)((long)puVar1 + 9),*(undefined1 *)((long)puVar1 + 10),
                *(undefined8 *)(unaff_x20 + uVar4 + 0x10),*(undefined8 *)(unaff_x20 + uVar4 + 0x18),
                *puVar2,puVar2[1]);
  return;
}



/* Entry: 101365d48; end: 101365d87;  */

undefined8 FUN_101365d48(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101365d88; end: 101365eff;  */

void FUN_101365d88(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101365f00; end: 101365f3f;  */

void FUN_101365f00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d75a20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d935bf8;
  func_0x000107c61520(&UNK_10d935bf8,&UNK_1103a6f08);
  puRam0000000112d75a20 = puVar1;
  return;
}



/* Entry: 101365f40; end: 101365f67;  */

void FUN_101365f40(long param_1,long param_2)

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



/* Entry: 101365f68; end: 101365fc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101365f68(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d75a40;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d75a40);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_101365fc8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 101365fc8; end: 101366143;  */

undefined * FUN_101365fc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c56ba8(puVar1,param_2,0);
  func_0x000107c55f80(puVar1,param_2,0);
  func_0x000107c59c74(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c4ca94(0x4033000000000000);
  func_0x000107c61180();
  func_0x000107c54adc(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 101366144; end: 101366427;  */

undefined * FUN_101366144(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar2 = (undefined *)0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef38bb0);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c55260(puVar1);
    func_0x000107c61170(puVar3);
    puVar2 = puVar3;
  }
  func_0x000108ed0638();
  func_0x000107c61180();
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c30a38(0xd5,0x6a);
  func_0x000107c59e34(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c30a34(0x6a);
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c5a050(puVar1);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 101366428; end: 10136669b; -[_TtC15SCOAuth2Feature36OAuth2BitmojiCTAScreenViewController viewDidLoad] */

void FUN_101366428(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  FUN_1013677a4();
  puVar3 = PTR_s_viewDidLoad_112684cd8;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar3);
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x0001013664e0();
    FUN_101366fbc();
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013664e0);
  (*pcVar1)();
}



/* Entry: 10136669c; end: 101366fbb;  */

/* WARNING: Possible PIC construction at 0x000101366700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013667a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013667c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010136683c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010136688c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013668b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013669d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013669f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366c14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366d18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101366f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101366ee4) */
/* WARNING: Removing unreachable block (ram,0x000101366ea0) */
/* WARNING: Removing unreachable block (ram,0x000101366e80) */
/* WARNING: Removing unreachable block (ram,0x000101366e24) */
/* WARNING: Removing unreachable block (ram,0x000101366fb8) */
/* WARNING: Removing unreachable block (ram,0x000101366e50) */
/* WARNING: Removing unreachable block (ram,0x000101366dd8) */
/* WARNING: Removing unreachable block (ram,0x000101366d80) */
/* WARNING: Removing unreachable block (ram,0x000101366d3c) */
/* WARNING: Removing unreachable block (ram,0x000101366d1c) */
/* WARNING: Removing unreachable block (ram,0x000101366cd4) */
/* WARNING: Removing unreachable block (ram,0x000101366fb4) */
/* WARNING: Removing unreachable block (ram,0x000101366d00) */
/* WARNING: Removing unreachable block (ram,0x000101366c88) */
/* WARNING: Removing unreachable block (ram,0x000101366c60) */
/* WARNING: Removing unreachable block (ram,0x000101366c18) */
/* WARNING: Removing unreachable block (ram,0x000101366fb0) */
/* WARNING: Removing unreachable block (ram,0x000101366c44) */
/* WARNING: Removing unreachable block (ram,0x000101366bd4) */
/* WARNING: Removing unreachable block (ram,0x000101366bb0) */
/* WARNING: Removing unreachable block (ram,0x000101366b60) */
/* WARNING: Removing unreachable block (ram,0x000101366fac) */
/* WARNING: Removing unreachable block (ram,0x000101366b94) */
/* WARNING: Removing unreachable block (ram,0x000101366b3c) */
/* WARNING: Removing unreachable block (ram,0x000101366aec) */
/* WARNING: Removing unreachable block (ram,0x000101366fa8) */
/* WARNING: Removing unreachable block (ram,0x000101366b20) */
/* WARNING: Removing unreachable block (ram,0x000101366acc) */
/* WARNING: Removing unreachable block (ram,0x000101366a70) */
/* WARNING: Removing unreachable block (ram,0x000101366fa4) */
/* WARNING: Removing unreachable block (ram,0x000101366ab0) */
/* WARNING: Removing unreachable block (ram,0x000101366a4c) */
/* WARNING: Removing unreachable block (ram,0x0001013669fc) */
/* WARNING: Removing unreachable block (ram,0x000101366fa0) */
/* WARNING: Removing unreachable block (ram,0x000101366a30) */
/* WARNING: Removing unreachable block (ram,0x0001013669d8) */
/* WARNING: Removing unreachable block (ram,0x000101366988) */
/* WARNING: Removing unreachable block (ram,0x000101366f9c) */
/* WARNING: Removing unreachable block (ram,0x0001013669bc) */
/* WARNING: Removing unreachable block (ram,0x000101366968) */
/* WARNING: Removing unreachable block (ram,0x000101366918) */
/* WARNING: Removing unreachable block (ram,0x000101366f98) */
/* WARNING: Removing unreachable block (ram,0x00010136694c) */
/* WARNING: Removing unreachable block (ram,0x0001013668b4) */
/* WARNING: Removing unreachable block (ram,0x000101366890) */
/* WARNING: Removing unreachable block (ram,0x000101366840) */
/* WARNING: Removing unreachable block (ram,0x000101366f94) */
/* WARNING: Removing unreachable block (ram,0x000101366874) */
/* WARNING: Removing unreachable block (ram,0x00010136681c) */
/* WARNING: Removing unreachable block (ram,0x0001013667cc) */
/* WARNING: Removing unreachable block (ram,0x000101366f90) */
/* WARNING: Removing unreachable block (ram,0x000101366800) */
/* WARNING: Removing unreachable block (ram,0x0001013667ac) */
/* WARNING: Removing unreachable block (ram,0x000101366754) */
/* WARNING: Removing unreachable block (ram,0x000101366f8c) */
/* WARNING: Removing unreachable block (ram,0x000101366790) */
/* WARNING: Removing unreachable block (ram,0x000101366734) */
/* WARNING: Removing unreachable block (ram,0x000101366704) */
/* WARNING: Removing unreachable block (ram,0x000101366f88) */
/* WARNING: Removing unreachable block (ram,0x000101366718) */
/* WARNING: Removing unreachable block (ram,0x000101366f34) */

void FUN_10136669c(long param_1)

{
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 0x2b;
  *(undefined8 *)(param_1 + 0x10) = 0x15;
  FUN_101365f68();
  func_0x000107c5cbe4();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101366fbc; end: 1013671bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101366fbc(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long lStack_78;
  long alStack_68 [3];
  undefined8 uStack_50;
  
  lVar2 = _DAT_112d75a28;
  func_0x000107c61428(unaff_x20 + _DAT_112d75a28,auStack_a8,0,0);
  FUN_10136785c(unaff_x20 + lVar2,auStack_90);
  if (lStack_78 == 0) {
    func_0x0001013678ac(auStack_90);
  }
  else {
    FUN_1013678f4(auStack_90,alStack_68);
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013671b8);
      (*pcVar1)();
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    plVar4 = alStack_68;
    func_0x0001000a8868(plVar4,uStack_50);
    FUN_1013657bc();
    puVar3 = &UNK_1103a6f88;
    func_0x000107c613fc(&UNK_1103a6f88,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    uVar7 = 0x10136790c;
    puVar6 = puVar3;
    (**(code **)(*plVar4 + 0x60))(0x10136790c);
    func_0x000107c61574(plVar4);
    func_0x000107c61574(puVar3);
    uVar5 = uVar7;
    func_0x000107c614f0(uVar7);
    (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d75a38),uVar5,puVar6);
    func_0x000107c615e8(uVar7);
    FUN_101365f68();
    plVar4 = alStack_68;
    func_0x0001000a8868(plVar4,uStack_50);
    uVar5 = uStack_50;
    FUN_101365980();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar5);
    func_0x000107c59c6c(uVar7);
    func_0x000107c61170(uVar7);
    func_0x000107c61170();
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d75a48);
    func_0x000108ed0620();
    func_0x000107c61180();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013671bc);
      (*pcVar1)();
    }
    func_0x000107c59c6c(uVar7);
    func_0x000107c61170(plVar4);
    func_0x0001000834e4(alStack_68);
  }
  return;
}



/* Entry: 1013671bc; end: 1013672ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013671bc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d75a50);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c55258(uVar1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1013672f0; end: 101367317; -[_TtC15SCOAuth2Feature36OAuth2BitmojiCTAScreenViewController _didPressContinueButton] */

void FUN_1013672f0(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101367244();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101367318; end: 10136735f; -[_TtC15SCOAuth2Feature36OAuth2BitmojiCTAScreenViewController _didPressSkipButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101367318(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_28);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101367360; end: 1013674ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101367360(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffb0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d75a28);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  lVar2 = _DAT_112d75a30;
  uVar3 = 0x112d75a98;
  func_0x0001000285a8(0x112d75a98,&UNK_10d935c60);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75a38;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d75a40) = 0;
  lVar2 = _DAT_112d75a48;
  func_0x00010136608c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75a50;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c53840(puVar4);
  puVar5 = puVar4;
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75a58;
  FUN_101366144();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d75a60;
  func_0x0001013662a8();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c();
  }
  FUN_1013677a4();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithNibName_bundle__1125e9850,param_1,
                      param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return puVar6;
}



/* Entry: 1013674f0; end: 1013676b3; -[_TtC15SCOAuth2Feature36OAuth2BitmojiCTAScreenViewController initWithNibName:bundle:] */

void FUN_1013674f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  FUN_101367360(param_3,param_2,param_4);
  return;
}



/* Entry: 1013676b4; end: 1013676db; -[_TtC15SCOAuth2Feature36OAuth2BitmojiCTAScreenViewController initWithCoder:] */

void FUN_1013676b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000101367550();
  return;
}



/* Entry: 1013676dc; end: 10136770b;  */

void FUN_1013676dc(void)

{
  FUN_1013677a4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10136770c; end: 1013677a3; -[_TtC15SCOAuth2Feature36OAuth2BitmojiCTAScreenViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101367758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101367778: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010136775c) */
/* WARNING: Removing unreachable block (ram,0x00010136777c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10136770c(long param_1)

{
  func_0x0001013678ac(param_1 + _DAT_112d75a28);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d75a30));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d75a38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d75a40));
  return;
}



/* Entry: 1013677a4; end: 1013677c3;  */

void FUN_1013677a4(void)

{
  func_0x000107c61168(&PTR_PTR_1127cb048);
  return;
}



/* Entry: 1013677c4; end: 10136784b; -[_TtC15SCOAuth2Feature36OAuth2BitmojiCTAScreenViewController bitmojiCreateFlowDidCompleteWithAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013677c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    param_2 = 0;
    uVar1 = 2;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = 1;
  }
  uStack_38 = uVar1;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_38);
  func_0x000107c6142c(param_2);
  FUN_10136784c(uVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10136784c; end: 10136785b;  */

void FUN_10136784c(ulong param_1)

{
  if (param_1 < 4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10136785c; end: 1013678f3;  */

undefined8 FUN_10136785c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d75a90;
  func_0x0001000285a8(0x112d75a90,&UNK_10d935c58);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1013678f4; end: 101367913;  */

undefined8 * FUN_1013678f4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101367914; end: 1013679b7;  */

/* WARNING: Possible PIC construction at 0x000101367990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101367994) */

void FUN_101367914(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,param_3,param_4,param_5);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1013679b8; end: 101367a3b;  */

void FUN_1013679b8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101367a3c; end: 101367c23;  */

/* WARNING: Possible PIC construction at 0x000101367bd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101367bd8) */

void FUN_101367a3c(double param_1)

{
  char *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c51820();
  func_0x000107c61170(puVar3);
  pcVar1 = "eenBusinessLogic";
  if (3.0 <= param_1) {
    pcVar1 = "ABoAMgF9SAJQCGAB&uc=8";
  }
  puVar3 = PTR_PTR_1126b08b0;
  func_0x000107c61168(PTR_PTR_1126b08b0);
  uVar4 = 0xd000000000000055;
  func_0x000107c5fadc(0xd000000000000055,(ulong)pcVar1 | 0x8000000000000000);
  func_0x000107c3f71c(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  puVar5 = PTR_PTR_1126b08a8;
  func_0x000107c610f8(PTR_PTR_1126b08a8);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c460f4(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c423b0();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar8 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar8 == 0) {
      func_0x000107c6142c((ulong)pcVar1 | 0x8000000000000000);
      func_0x000107c61170(puVar5);
      lVar8 = *(long *)(unaff_x20 + 0x38);
      *(undefined8 *)(unaff_x20 + 0x38) = 0;
    }
    else {
      puVar3 = PTR_PTR_1126b08b8;
      func_0x000107c610f8(PTR_PTR_1126b08b8);
      uVar4 = 0xd000000000000055;
      func_0x000107c5fadc(0xd000000000000055,(ulong)pcVar1 | 0x8000000000000000);
      func_0x000107c6142c((ulong)pcVar1 | 0x8000000000000000);
      func_0x000107c4766c(puVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c409f4(lVar8);
      func_0x000107c61180();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101367c24);
  (*pcVar2)();
}



/* Entry: 101367c24; end: 101367c47;  */

void FUN_101367c24(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 101367c48; end: 101367c9f;  */

void FUN_101367c48(long param_1)

{
  undefined8 uVar1;
  
  func_0x000103dbf870();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x40,7);
  return;
}



/* Entry: 101367ca0; end: 101367d53;  */

void FUN_101367ca0(undefined8 param_1)

{
  if (lRam0000000112d75ac8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6306a8);
  return;
}



/* Entry: 101367d54; end: 101367d5f;  */

void FUN_101367d54(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 101367d60; end: 101367dbb;  */

undefined1 * FUN_101367d60(char *param_1)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  if (*param_1 == '\x01') {
    func_0x0001000285a8(0x112d75c10,&UNK_10d935db0);
    uStack_21 = 2;
    puVar1 = &uStack_21;
    func_0x000100854cb0(puVar1);
    return puVar1;
  }
  return (undefined1 *)0x0;
}



/* Entry: 101367dbc; end: 101367f2b;  */

/* WARNING: Possible PIC construction at 0x000101368198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101368214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010136819c) */
/* WARNING: Removing unreachable block (ram,0x000101368250) */
/* WARNING: Removing unreachable block (ram,0x0001013681ac) */
/* WARNING: Removing unreachable block (ram,0x0001013681b8) */
/* WARNING: Removing unreachable block (ram,0x0001013681bc) */
/* WARNING: Removing unreachable block (ram,0x000101368254) */
/* WARNING: Removing unreachable block (ram,0x0001013681c0) */
/* WARNING: Removing unreachable block (ram,0x0001013681c8) */
/* WARNING: Removing unreachable block (ram,0x0001013681cc) */
/* WARNING: Removing unreachable block (ram,0x000101368258) */
/* WARNING: Removing unreachable block (ram,0x0001013681d0) */
/* WARNING: Removing unreachable block (ram,0x00010136825c) */
/* WARNING: Removing unreachable block (ram,0x0001013681e8) */
/* WARNING: Removing unreachable block (ram,0x000101368260) */
/* WARNING: Removing unreachable block (ram,0x0001013681fc) */
/* WARNING: Removing unreachable block (ram,0x000101368218) */

void FUN_101367dbc(char *param_1)

{
  undefined *puVar1;
  
  if (*param_1 == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c453e4();
    func_0x000107c5c9e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 101367f2c; end: 101367f6b;  */

void FUN_101367f2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d75c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d935d6c;
  func_0x000107c61520(&UNK_10d935d6c,&UNK_1103a7020);
  puRam0000000112d75c08 = puVar1;
  return;
}



/* Entry: 101367f6c; end: 1013680e7;  */

undefined8 FUN_101367f6c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  
  puVar2 = &stack0xffffffffffffff90;
  puVar4 = &stack0xffffffffffffff90;
  uVar1 = 0x112d755f8;
  func_0x0001000285a8(0x112d755f8,&UNK_10d9358f0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  lVar7 = *(long *)(unaff_x20 + 0x38);
  if (lVar7 != 0) {
    func_0x000107c60bc4(&stack0xffffffffffffff90);
    func_0x000107c615f0(lVar7);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(uVar1);
    uVar3 = 0;
    FUN_101367ca0(0);
    func_0x000107c6157c();
    func_0x000107c5fb18(&stack0xffffffffffffff90,uVar3);
    uVar5 = 0;
    func_0x0001048b0ec8(0);
    func_0x000107c610f8();
    func_0x0001048b0b48(puVar4,uVar3,0x2a,uVar5);
    uVar3 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    lVar6 = lVar7;
    func_0x000107c43124(lVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c60bd0(puVar2);
    func_0x000107c615e8(lVar6);
    func_0x000107c615e8(lVar7);
  }
  return uVar1;
}



/* Entry: 1013680e8; end: 10136812f;  */

void FUN_1013680e8(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    lStack_28 = param_2;
    func_0x000107c61174(param_2);
    func_0x0001002a64a8(&lStack_28);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101368130; end: 101368153;  */

void FUN_101368130(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    lStack_28 = param_2;
    func_0x000107c61174(param_2);
    func_0x0001002a64a8(&lStack_28);
    func_0x000107c61170(param_2);
  }
  return;
}



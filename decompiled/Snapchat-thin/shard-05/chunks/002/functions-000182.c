/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c4427c; end: 103c4427f;  */

void FUN_103c4427c(void)

{
  return;
}



/* Entry: 103c44280; end: 103c44427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c44280(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  uVar1 = 0;
  FUN_103c43334(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  lVar3 = _DAT_11380d140;
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c61428(lVar2 + _DAT_11380d140,auStack_58,1,0);
  uVar1 = *(undefined8 *)(lVar2 + lVar3);
  *(long *)(lVar2 + lVar3) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c615e8(uVar1);
  func_0x000107c49fe0();
  if ((int)lVar2 == 0) {
    func_0x000107c61170(param_1);
    return;
  }
  if (param_2 != 0) {
    lVar3 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c466c0(0x3fa999999999999a);
    uVar1 = 0;
    func_0x000103c45c8c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined8 *)(lVar3 + 0x38) = uVar1;
    *(undefined **)(lVar3 + 0x20) = puVar4;
    lVar2 = lVar3;
    func_0x000107c5fc48(lVar3,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61574(lVar3);
    func_0x000107c4e5f4();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (param_2 != 0) {
      func_0x000107c60234(&uStack_80,param_2);
      func_0x000107c615e8(param_2);
      func_0x000107c61170(param_1);
      goto LAB_103c443f8;
    }
  }
  func_0x000107c61170(param_1);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
LAB_103c443f8:
  func_0x000103c45c4c(&uStack_80,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 103c44428; end: 103c4444b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c44428(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  uVar2 = 0;
  FUN_103c43334(0);
  func_0x000107c61480(param_1,uVar2);
  lVar1 = _DAT_11380d140;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_11380d140,auStack_38,1,0);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = 0;
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 103c4444c; end: 103c446e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c4444c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar5 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar5 - extraout_x12;
  uVar2 = 0;
  FUN_103c43334(0);
  lVar6 = param_1;
  func_0x000107c61480(param_1,uVar2);
  lVar1 = _DAT_11380d148;
  if (lVar6 == 0) {
    return;
  }
  func_0x000107c61428(lVar6 + _DAT_11380d148,auStack_68,1,0);
  uVar2 = *(undefined8 *)(lVar6 + lVar1);
  *(long *)(lVar6 + lVar1) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c615e8(uVar2);
  if (param_2 != 0) {
    lVar1 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    uVar2 = 0x112d35ff8;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    *(undefined8 *)(lVar1 + 0x38) = uVar2;
    func_0x000107c3abfc();
    func_0x000107c61180();
    if (lVar6 != 0) {
      func_0x000107c5edb4(lVar5);
      func_0x000107c61170(lVar6);
    }
    lVar3 = 0;
    func_0x000107c5ede0();
    lVar7 = *(long *)(lVar3 + -8);
    (**(code **)(lVar7 + 0x38))(lVar5,lVar6 == 0,1,lVar3);
    func_0x0001001021cc(lVar5,lVar4);
    uVar2 = 1;
    lVar6 = lVar4;
    (**(code **)(lVar7 + 0x30))(lVar4,1,lVar3);
    if ((int)lVar6 == 1) {
      FUN_103c45c4c(lVar4,0x112d36580,&UNK_10d9016d0);
      lVar6 = 0;
      uVar2 = 0;
    }
    else {
      func_0x000107c5ed70();
      (**(code **)(lVar7 + 8))(lVar4,lVar3);
    }
    *(long *)(lVar1 + 0x20) = lVar6;
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    lVar6 = lVar1;
    func_0x000107c5fc48(lVar1,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61574(lVar1);
    func_0x000107c4e5f4();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (param_2 != 0) {
      func_0x000107c60234(&uStack_90,param_2);
      func_0x000107c615e8(param_2);
      func_0x000107c61170(param_1);
      goto LAB_103c446b0;
    }
  }
  func_0x000107c61170(param_1);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
LAB_103c446b0:
  FUN_103c45c4c(&uStack_90,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 103c446e4; end: 103c4471f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c446e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  uVar2 = 0;
  FUN_103c43334(0);
  func_0x000107c61480(param_1,uVar2);
  lVar1 = _DAT_11380d148;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_11380d148,auStack_38,1,0);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = 0;
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 103c44720; end: 103c44973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103c44720(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined1 auStack_78 [24];
  
  uVar4 = 0;
  FUN_103c43334(0);
  puVar5 = param_1;
  func_0x000107c61480(param_1,uVar4);
  if (puVar5 != (ulong *)0x0) {
    if (param_2 == 0) {
      func_0x000107c61174(param_1);
    }
    else {
      func_0x000107c61174(param_1);
      func_0x000101158fcc();
    }
    lVar3 = _DAT_11380d168;
    func_0x000107c61428((long)puVar5 + _DAT_11380d168,auStack_78,1,0);
    uVar4 = *(undefined8 *)((long)puVar5 + lVar3);
    *(long *)((long)puVar5 + lVar3) = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c6142c(uVar4);
    puVar2 = PTR__swift_isaMask_11034f488;
    if (param_2 != 0) {
      uVar6 = *(ulong *)(param_2 + 0x10);
      if (uVar6 != 0) {
        uVar7 = 0;
        puVar8 = (undefined8 *)(param_2 + 0x28);
        do {
          if (*(ulong *)(param_2 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x103c44860);
            (*pcVar9)();
          }
          uVar7 = uVar7 + 1;
          uVar4 = puVar8[-1];
          uVar1 = *puVar8;
          pcVar9 = *(code **)((*(ulong *)puVar2 & *puVar5) + 0x120);
          func_0x000107c61434(uVar1);
          (*pcVar9)(puVar5,uVar4,uVar1);
          func_0x000107c6142c(uVar1);
          puVar8 = puVar8 + 2;
        } while (uVar6 != uVar7);
      }
      func_0x000107c6142c(param_2);
    }
    func_0x000107c61170(param_1);
  }
  return puVar5 != (ulong *)0x0;
}



/* Entry: 103c44974; end: 103c4497f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c44974(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0;
  FUN_103c43334(0);
  func_0x000107c61480(param_1,uVar2);
  lVar1 = _DAT_11380d170;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_11380d170,auStack_48,1,0);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = param_2;
    func_0x000107c615f0(param_2);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 103c44980; end: 103c449ff;  */

void FUN_103c44980(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = 0;
  FUN_103c43334(0);
  func_0x000107c61480(param_1,uVar1);
  if (param_1 != 0) {
    lVar2 = *param_3;
    func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_2;
    func_0x000107c615f0(param_2);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 103c44a00; end: 103c44a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c44a00(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  uVar2 = 0;
  FUN_103c43334(0);
  func_0x000107c61480(param_1,uVar2);
  lVar1 = _DAT_11380d170;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_11380d170,auStack_38,1,0);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = 0;
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 103c44a0c; end: 103c44a73;  */

void FUN_103c44a0c(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  uVar1 = 0;
  FUN_103c43334(0);
  func_0x000107c61480(param_1,uVar1);
  if (param_1 != 0) {
    lVar2 = *param_2;
    func_0x000107c61428(param_1 + lVar2,auStack_38,1,0);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 103c44a74; end: 103c44aa3; +[SCComposerWebView bindAttributes:] */

void FUN_103c44a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000103c45370(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 103c44aa4; end: 103c44ba3;  */

void FUN_103c44aa4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  FUN_103c48190();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  puVar1 = PTR_PTR_1126b4b08;
  func_0x000107c610f8();
  uVar2 = 0x697274536c6d7468;
  func_0x000107c5fadc(0x697274536c6d7468,0xea0000000000676e);
  func_0x000107c45814();
  func_0x000107c61170(uVar2);
  *(undefined **)(param_1 + 0x20) = puVar1;
  puVar1 = PTR_PTR_1126b4b08;
  func_0x000107c610f8();
  uVar2 = 0x6c725565736162;
  func_0x000107c5fadc(0x6c725565736162,0xe700000000000000);
  func_0x000107c45814();
  func_0x000107c61170(uVar2);
  *(undefined **)(param_1 + 0x28) = puVar1;
  lRam0000000112ffafe0 = param_1;
  return;
}



/* Entry: 103c44ba4; end: 103c44c2b; -[SCComposerWebView userContentController:didReceive:webView:] */

/* WARNING: Possible PIC construction at 0x000103c44c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c44c10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c44c04) */
/* WARNING: Removing unreachable block (ram,0x000103c44c14) */

void FUN_103c44ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_103c45a30(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103c44c2c; end: 103c45a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c44c2c(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar7 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar9 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar12 = PTR___sypN_11034f1a8;
  lVar7 = (long)puVar9 - extraout_x12;
  if (param_2 == 0) {
    return;
  }
  if (((param_1 == 0xd000000000000011) && (param_2 == -0x7ffffffef0e4ec90)) ||
     (uVar1 = param_1, func_0x000107c605b8(param_1,param_2,0xd000000000000011,0x800000010f1b1370,0),
     (uVar1 & 1) != 0)) {
    lVar11 = _DAT_11380d140;
    func_0x000107c61428(unaff_x20 + _DAT_11380d140,auStack_f0,0,0);
    lVar11 = *(long *)(unaff_x20 + lVar11);
    if (lVar11 == 0) {
LAB_103c44e04:
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      lVar2 = 0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      func_0x000107c613fc();
      uVar4 = 1;
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      func_0x000107c615f0(lVar11);
      func_0x000107c42a78();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c466c0(uVar4);
      uVar4 = 0;
      func_0x000103c45c8c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      *(undefined8 *)(lVar2 + 0x38) = uVar4;
      *(undefined **)(lVar2 + 0x20) = puVar3;
      lVar10 = lVar2;
      func_0x000107c5fc48(lVar2,puVar12 + 8);
      func_0x000107c61574(lVar2);
      lVar2 = lVar11;
      func_0x000107c4e5f4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(lVar10);
      if (lVar2 == 0) goto LAB_103c44e04;
      func_0x000107c60234(&uStack_90,lVar2);
      func_0x000107c615e8(lVar2);
    }
    func_0x000103c45c4c(&uStack_90,0x112d387f8,&UNK_10d902650);
  }
  if (((param_1 == 0x4c5255) && (param_2 == -0x1d00000000000000)) ||
     (uVar1 = param_1, func_0x000107c605b8(param_1,param_2,0x4c5255,0xe300000000000000,0),
     (uVar1 & 1) != 0)) {
    lVar11 = _DAT_11380d148;
    func_0x000107c61428(unaff_x20 + _DAT_11380d148,auStack_d8,0,0);
    lVar11 = *(long *)(unaff_x20 + lVar11);
    if (lVar11 == 0) {
LAB_103c45000:
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      lVar2 = 0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      uVar4 = 0x112d35ff8;
      func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
      *(undefined8 *)(lVar2 + 0x38) = uVar4;
      func_0x000107c615f0(lVar11);
      lVar10 = unaff_x20;
      func_0x000107c3abfc();
      func_0x000107c61180();
      if (lVar10 != 0) {
        func_0x000107c5edb4(puVar9);
        func_0x000107c61170(lVar10);
      }
      lVar5 = 0;
      func_0x000107c5ede0();
      lVar8 = *(long *)(lVar5 + -8);
      (**(code **)(lVar8 + 0x38))(puVar9,lVar10 == 0,1,lVar5);
      func_0x0001001021cc(puVar9,lVar7);
      uVar4 = 1;
      lVar10 = lVar7;
      (**(code **)(lVar8 + 0x30))(lVar7,1,lVar5);
      if ((int)lVar10 == 1) {
        func_0x000103c45c4c(lVar7,0x112d36580,&UNK_10d9016d0);
        lVar10 = 0;
        uVar4 = 0;
      }
      else {
        func_0x000107c5ed70();
        (**(code **)(lVar8 + 8))(lVar7,lVar5);
      }
      *(long *)(lVar2 + 0x20) = lVar10;
      *(undefined8 *)(lVar2 + 0x28) = uVar4;
      puVar12 = PTR___sypN_11034f1a8;
      lVar7 = lVar2;
      func_0x000107c5fc48(lVar2,PTR___sypN_11034f1a8 + 8);
      func_0x000107c61574(lVar2);
      lVar2 = lVar11;
      func_0x000107c4e5f4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(lVar7);
      if (lVar2 == 0) goto LAB_103c45000;
      func_0x000107c60234(&uStack_90,lVar2);
      func_0x000107c615e8(lVar2);
    }
    func_0x000103c45c4c(&uStack_90,0x112d387f8,&UNK_10d902650);
  }
  if (((param_1 == 0x656c746974) && (param_2 == -0x1b00000000000000)) ||
     (uVar1 = param_1, func_0x000107c605b8(param_1,param_2,0x656c746974,0xe500000000000000,0),
     (uVar1 & 1) != 0)) {
    lVar7 = _DAT_11380d150;
    func_0x000107c61428(unaff_x20 + _DAT_11380d150,auStack_c0,0,0);
    lVar7 = *(long *)(unaff_x20 + lVar7);
    if (lVar7 == 0) {
LAB_103c45164:
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      lVar11 = 0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      uVar4 = 0x40;
      func_0x000107c613fc();
      *(undefined8 *)(lVar11 + 0x18) = 2;
      *(undefined8 *)(lVar11 + 0x10) = 1;
      func_0x000107c615f0(lVar7);
      lVar2 = unaff_x20;
      func_0x000107c5cab0();
      func_0x000107c61180();
      if (lVar2 == 0) {
        lVar10 = 0;
        uVar4 = 0;
      }
      else {
        lVar10 = lVar2;
        func_0x000107c5faec();
        func_0x000107c61170(lVar2);
      }
      uVar6 = 0x112d35ff8;
      func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
      *(undefined8 *)(lVar11 + 0x38) = uVar6;
      *(long *)(lVar11 + 0x20) = lVar10;
      *(undefined8 *)(lVar11 + 0x28) = uVar4;
      lVar2 = lVar11;
      func_0x000107c5fc48(lVar11,puVar12 + 8);
      func_0x000107c61574(lVar11);
      lVar11 = lVar7;
      func_0x000107c4e5f4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar7);
      func_0x000107c61170(lVar2);
      if (lVar11 == 0) goto LAB_103c45164;
      func_0x000107c60234(&uStack_90,lVar11);
      func_0x000107c615e8(lVar11);
    }
    func_0x000103c45c4c(&uStack_90,0x112d387f8,&UNK_10d902650);
  }
  if (((((param_1 != 0x726f466f476e6163) || (param_2 != -0x13ffffff9b8d9e89)) &&
       (uVar1 = param_1,
       func_0x000107c605b8(param_1,param_2,0x726f466f476e6163,0xec00000064726177,0),
       (uVar1 & 1) == 0)) && ((param_1 != 0x6361426f476e6163 || (param_2 != -0x16ffffffffffff95))))
     && (func_0x000107c605b8(param_1,param_2,0x6361426f476e6163,0xe90000000000006b,0),
        (param_1 & 1) == 0)) {
    return;
  }
  lVar7 = _DAT_11380d158;
  func_0x000107c61428(unaff_x20 + _DAT_11380d158,auStack_a8,0,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (lVar7 != 0) {
    lVar11 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x18) = 4;
    *(undefined8 *)(lVar11 + 0x10) = 2;
    func_0x000107c615f0(lVar7);
    func_0x000107c3f3d0();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    uVar4 = 0;
    func_0x000103c45c8c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined8 *)(lVar11 + 0x38) = uVar4;
    *(undefined **)(lVar11 + 0x20) = puVar3;
    func_0x000107c3f3cc();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    *(undefined8 *)(lVar11 + 0x58) = uVar4;
    *(undefined **)(lVar11 + 0x40) = puVar3;
    lVar2 = lVar11;
    func_0x000107c5fc48(lVar11,puVar12 + 8);
    func_0x000107c61574(lVar11);
    lVar11 = lVar7;
    func_0x000107c4e5f4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(lVar2);
    if (lVar11 != 0) {
      func_0x000107c60234(&uStack_90,lVar11);
      func_0x000107c615e8(lVar11);
      goto LAB_103c45334;
    }
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
LAB_103c45334:
  func_0x000103c45c4c(&uStack_90,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 103c45a30; end: 103c45bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c45a30(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar9 = _DAT_11380d170;
  func_0x000107c61428(unaff_x20 + _DAT_11380d170,auStack_78,0,0);
  lVar9 = *(long *)(unaff_x20 + lVar9);
  if (lVar9 != 0) {
    lVar3 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    uVar8 = 0x60;
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 4;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    func_0x000107c615f0(lVar9);
    uVar4 = param_1;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    *(undefined8 *)(lVar3 + 0x28) = uVar8;
    func_0x000107c3eb80(param_1);
    func_0x000107c61180();
    func_0x000107c60234(&uStack_60);
    func_0x000107c615e8(param_1);
    puVar2 = PTR___sypN_11034f1a8;
    puVar6 = &uStack_88;
    func_0x000107c6147c(puVar6,&uStack_60,PTR___sypN_11034f1a8 + 8,puVar1,6);
    *(undefined **)(lVar3 + 0x58) = puVar1;
    if (((uint)puVar6 & (uint)(lStack_80 != 0)) == 0) {
      uStack_88 = 0;
      lStack_80 = -0x2000000000000000;
    }
    *(undefined8 *)(lVar3 + 0x40) = uStack_88;
    *(long *)(lVar3 + 0x48) = lStack_80;
    lVar7 = lVar3;
    func_0x000107c5fc48(lVar3,puVar2 + 8);
    func_0x000107c61574(lVar3);
    lVar3 = lVar9;
    func_0x000107c4e5f4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar9);
    func_0x000107c61170(lVar7);
    if (lVar3 != 0) {
      func_0x000107c60234(&uStack_60,lVar3);
      func_0x000107c615e8(lVar3);
      goto LAB_103c45bac;
    }
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
LAB_103c45bac:
  FUN_103c45c4c(&uStack_60,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 103c45bdc; end: 103c45be3;  */

void FUN_103c45bdc(void)

{
  if (lRam0000000112ffafc8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7bbfc4);
  return;
}



/* Entry: 103c45be4; end: 103c45c2f;  */

void FUN_103c45be4(long param_1)

{
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_48 = &UNK_10dc696f8;
  puStack_40 = &UNK_10dc696f8;
  puStack_38 = &UNK_10dc696f8;
  puStack_30 = &UNK_10dc696f8;
  puStack_28 = &UNK_10dc696f8;
  puStack_20 = &UNK_10dc696f8;
  puStack_18 = &UNK_10dc696f8;
  func_0x000107c61630(param_1,0x100,7,&puStack_48,param_1 + 0x138);
  return;
}



/* Entry: 103c45c30; end: 103c45c4b;  */

void FUN_103c45c30(long param_1,long param_2)

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



/* Entry: 103c45c4c; end: 103c45d53;  */

undefined8 FUN_103c45c4c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103c45d54; end: 103c45df3;  */

void FUN_103c45d54(long param_1,long param_2)

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



/* Entry: 103c45df4; end: 103c461fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103c45df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong *puVar5;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar1 = unaff_x20 + _DAT_112ffaff0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ffaff8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffb000) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ffb008) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ffb010) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ffb018) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ffb020) = param_5;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112ffb028) = puVar2;
  puVar3 = auStack_70;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  puVar5 = *(ulong **)(puVar3 + _DAT_112ffb000);
  func_0x000107c61174();
  FUN_103c461fc();
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0xa0))();
  puVar2 = &UNK_1106eebc8;
  func_0x000107c613fc(&UNK_1106eebc8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,puVar3);
  uVar4 = 6;
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc69718,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  return puVar3;
}



/* Entry: 103c461fc; end: 103c46333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103c461fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar4 = &puStack_60;
  puVar1 = PTR_PTR_1126d6dc0;
  func_0x000107c610f8(PTR_PTR_1126d6dc0);
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_103c4746c();
  puVar3 = PTR_PTR_1126d6db8;
  func_0x000107c610f8();
  func_0x000107c49520();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61174();
  func_0x000107c54b80(0,0,0,0x404e000000000000);
  puVar1 = puVar3;
  func_0x000107c5dbc0();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar1 != (undefined *)0x0) {
    pcStack_40 = FUN_103c477f8;
    uStack_38 = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100f11710;
    puStack_48 = &UNK_1106eec08;
    func_0x000107c60bc4(&puStack_60);
    uVar5 = 0;
    FUN_103c488a4(0);
    func_0x000107c614e8();
    func_0x000107c4fcd8(puVar1,param_2,ppuVar4,uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(puVar1);
  }
  return puVar3;
}



/* Entry: 103c46334; end: 103c4634b;  */

void FUN_103c46334(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c4634c,0,0);
  return;
}



/* Entry: 103c4634c; end: 103c463b3;  */

void FUN_103c4634c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c463b4,uVar1,uVar2);
  return;
}



/* Entry: 103c463b4; end: 103c46497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c463b4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long unaff_x22;
  code *pcVar7;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  puVar4 = (undefined8 *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar4 != (undefined8 *)0x0) {
    puVar6 = *(ulong **)((long)puVar4 + _DAT_112ffb000);
    func_0x000107c61174();
    func_0x000107c61174();
    puVar5 = puVar4;
    func_0x000103c54de0();
    uVar2 = *puVar5;
    uVar3 = puVar5[1];
    pcVar7 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x120);
    func_0x000107c61434(uVar3);
    (*pcVar7)(puVar4,uVar2,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x000103c46494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c46498; end: 103c464eb;  */

void FUN_103c46498(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x103c485b0;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c4634c,0,0);
  return;
}



/* Entry: 103c464ec; end: 103c4653f;  */

void FUN_103c464ec(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103c46540;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c4634c,0,0);
  return;
}



/* Entry: 103c46540; end: 103c4657b;  */

void FUN_103c46540(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c46578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103c4657c; end: 103c4658f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c4657c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ffaff8);
  *(undefined8 *)(unaff_x20 + _DAT_112ffaff8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103c46590; end: 103c46d6f;  */

/* WARNING: Possible PIC construction at 0x000103c46d4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c46d50) */

void FUN_103c46590(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x000107c402f8();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c40d80();
  func_0x000107c61180();
  uVar5 = 0xe000000000000000;
  func_0x000107c602fc(0x1fb);
  uVar4 = 0x800000010f1b1410;
  func_0x000107c5fb78(0xd000000000000046,0x800000010f1b1410);
  lVar6 = param_1;
  func_0x000107c43854();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
    uVar5 = uVar4;
  }
  func_0x000107c5fb78(lVar7,uVar5);
  func_0x000107c6142c(uVar5);
  uVar5 = 0x800000010f1b1460;
  func_0x000107c5fb78(0xd00000000000001b,0x800000010f1b1460);
  func_0x000107c3ef0c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar6 = 0;
    uVar5 = 0xe000000000000000;
  }
  else {
    lVar6 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  func_0x000107c5fb78(lVar6,uVar5);
  func_0x000107c6142c(uVar5);
  uVar5 = 0x800000010f1b1480;
  func_0x000107c5fb78(0xd000000000000036,0x800000010f1b1480);
  if (lVar1 == 0) {
    uVar5 = 0xe000000000000000;
    func_0x000107c5fb78(0,0xe000000000000000);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(0xd000000000000020,0x800000010f1b14c0);
  }
  else {
    lVar6 = lVar1;
    func_0x000107c43634();
    func_0x000107c61180();
    if (lVar6 == 0) {
      lVar7 = 0;
      uVar5 = 0xe000000000000000;
    }
    else {
      lVar7 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
    }
    func_0x000107c5fb78(lVar7,uVar5);
    func_0x000107c6142c(uVar5);
    uVar5 = 0x800000010f1b14c0;
    func_0x000107c5fb78(0xd000000000000020,0x800000010f1b14c0);
    lVar6 = lVar1;
    func_0x000107c4aa24();
    func_0x000107c61180();
    if (lVar6 == 0) {
      uVar5 = 0xe000000000000000;
    }
    else {
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
    }
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  uVar5 = 0x800000010f1b14f0;
  func_0x000107c5fb78(0xd00000000000001c,0x800000010f1b14f0);
  if (lVar1 == 0) {
    uVar5 = 0xe000000000000000;
    func_0x000107c5fb78(0,0xe000000000000000);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(0xd000000000000023,0x800000010f1b1510);
  }
  else {
    lVar6 = lVar1;
    func_0x000107c4248c();
    func_0x000107c61180();
    if (lVar6 == 0) {
      lVar7 = 0;
      uVar5 = 0xe000000000000000;
    }
    else {
      lVar7 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
    }
    func_0x000107c5fb78(lVar7,uVar5);
    func_0x000107c6142c(uVar5);
    uVar5 = 0x800000010f1b1510;
    func_0x000107c5fb78(0xd000000000000023,0x800000010f1b1510);
    lVar6 = lVar1;
    func_0x000107c4e6c0();
    func_0x000107c61180();
    if (lVar6 == 0) {
      uVar5 = 0xe000000000000000;
    }
    else {
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
    }
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  uVar5 = 0x800000010f1b1540;
  func_0x000107c5fb78(0xd00000000000001e,0x800000010f1b1540);
  if (lVar1 == 0) {
    uVar5 = 0xe000000000000000;
    func_0x000107c5fb78(0,0xe000000000000000);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(0xd00000000000001b,0x800000010f1b1560);
  }
  else {
    lVar6 = lVar1;
    func_0x000107c3d9a4();
    func_0x000107c61180();
    if (lVar6 == 0) {
      lVar7 = 0;
      uVar5 = 0xe000000000000000;
    }
    else {
      lVar7 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
    }
    func_0x000107c5fb78(lVar7,uVar5);
    func_0x000107c6142c(uVar5);
    uVar5 = 0x800000010f1b1560;
    func_0x000107c5fb78(0xd00000000000001b,0x800000010f1b1560);
    lVar6 = lVar1;
    func_0x000107c3fa10();
    func_0x000107c61180();
    if (lVar6 == 0) {
      uVar5 = 0xe000000000000000;
    }
    else {
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
    }
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  uVar5 = 0x800000010f1b1580;
  func_0x000107c5fb78(0xd00000000000001c,0x800000010f1b1580);
  if (lVar1 == 0) {
    uVar5 = 0xe000000000000000;
    func_0x000107c5fb78(0,0xe000000000000000);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(0xd00000000000001d,0x800000010f1b15a0);
  }
  else {
    lVar6 = lVar1;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    if (lVar6 == 0) {
      lVar7 = 0;
      uVar5 = 0xe000000000000000;
    }
    else {
      lVar7 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
    }
    func_0x000107c5fb78(lVar7,uVar5);
    func_0x000107c6142c(uVar5);
    uVar5 = 0x800000010f1b15a0;
    func_0x000107c5fb78(0xd00000000000001d,0x800000010f1b15a0);
    lVar6 = lVar1;
    func_0x000107c4ebd8();
    func_0x000107c61180();
    if (lVar6 == 0) {
      uVar5 = 0xe000000000000000;
    }
    else {
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
    }
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  uVar5 = 0x800000010f1b15c0;
  func_0x000107c5fb78(0xd000000000000020,0x800000010f1b15c0);
  if (lVar2 == 0) {
    uVar5 = 0xe000000000000000;
    func_0x000107c5fb78(0,0xe000000000000000);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(0xd000000000000029,0x800000010f1b15f0);
  }
  else {
    lVar6 = lVar2;
    func_0x000107c3f640(lVar2);
    func_0x000107c61180();
    lVar7 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
    func_0x000107c5fb78(lVar7,uVar5);
    func_0x000107c6142c(uVar5);
    uVar5 = 0x800000010f1b15f0;
    func_0x000107c5fb78(0xd000000000000029,0x800000010f1b15f0);
    lVar6 = lVar2;
    func_0x000107c42bcc();
    func_0x000107c61180();
    if (lVar6 == 0) {
      uVar5 = 0xe000000000000000;
    }
    else {
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
    }
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  uVar5 = 0x800000010f1b1620;
  func_0x000107c5fb78(0xd00000000000001e,0x800000010f1b1620);
  if (lVar2 != 0) {
    lVar6 = lVar2;
    func_0x000107c4d3f0();
    func_0x000107c61180();
    if (lVar6 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
      goto LAB_103c46ca0;
    }
  }
  uVar5 = 0xe000000000000000;
LAB_103c46ca0:
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f1b1640);
  puVar3 = &UNK_1106eebf0;
  func_0x000107c613fc(&UNK_1106eebf0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0xe000000000000000;
  func_0x000107c61174();
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc69730,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 103c46d70; end: 103c46d8b;  */

void FUN_103c46d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c46d8c,0,0);
  return;
}



/* Entry: 103c46d8c; end: 103c46df3;  */

void FUN_103c46d8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c46df4,uVar1,uVar2);
  return;
}



/* Entry: 103c46df4; end: 103c46e63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c46df4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  uVar4 = *(undefined8 *)(lVar2 + _DAT_112ffb000);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c42a80(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103c46e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c46e64; end: 103c46ecf;  */

void FUN_103c46e64(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103c485b4;
  plVar3[3] = lVar2;
  plVar3[4] = lVar4;
  plVar3[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c46d8c,0,0);
  return;
}



/* Entry: 103c46ed0; end: 103c46f2f; -[_TtC15ComposerWebView25WebViewAutofillController init] */

void FUN_103c46ed0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerWebView.WebViewAutofillController",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c46efc);
  (*pcVar1)();
}



/* Entry: 103c46f30; end: 103c46fc7; -[_TtC15ComposerWebView25WebViewAutofillController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c46f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c46f7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c46f60) */
/* WARNING: Removing unreachable block (ram,0x000103c46f80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c46f30(long param_1)

{
  FUN_103c483dc(param_1 + _DAT_112ffaff0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ffb000));
  return;
}



/* Entry: 103c46fc8; end: 103c473e3;  */

/* WARNING: Possible PIC construction at 0x000103c47088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c470bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c471fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c47214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c47148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c47160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c4718c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c471a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c47274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c472dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c4730c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c4736c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c4737c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c47370) */
/* WARNING: Removing unreachable block (ram,0x000103c47310) */
/* WARNING: Removing unreachable block (ram,0x000103c4733c) */
/* WARNING: Removing unreachable block (ram,0x000103c47368) */
/* WARNING: Removing unreachable block (ram,0x000103c472e0) */
/* WARNING: Removing unreachable block (ram,0x000103c47278) */
/* WARNING: Removing unreachable block (ram,0x000103c473e0) */
/* WARNING: Removing unreachable block (ram,0x000103c472a4) */
/* WARNING: Removing unreachable block (ram,0x000103c471a8) */
/* WARNING: Removing unreachable block (ram,0x000103c47190) */
/* WARNING: Removing unreachable block (ram,0x000103c47164) */
/* WARNING: Removing unreachable block (ram,0x000103c473dc) */
/* WARNING: Removing unreachable block (ram,0x000103c47178) */
/* WARNING: Removing unreachable block (ram,0x000103c4714c) */
/* WARNING: Removing unreachable block (ram,0x000103c47218) */
/* WARNING: Removing unreachable block (ram,0x000103c4721c) */
/* WARNING: Removing unreachable block (ram,0x000103c47200) */
/* WARNING: Removing unreachable block (ram,0x000103c470c0) */
/* WARNING: Removing unreachable block (ram,0x000103c4708c) */
/* WARNING: Removing unreachable block (ram,0x000103c47380) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c46fc8(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar3 = param_1;
  func_0x000107c5d0fc();
  if ((int)lVar3 == 2) {
    func_0x000107c3e4f4();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar3 = param_1;
      func_0x000107c42ad4();
      iVar2 = (int)lVar3;
      if (iVar2 < 3) {
        if (iVar2 == 1) {
          lVar3 = param_1;
          func_0x000107c43850();
          func_0x000107c61180();
          if (lVar3 != 0) {
            func_0x000107c433ec();
            func_0x000107c61180();
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103c473d8);
              (*pcVar1)();
            }
            FUN_103c4e3c4(0);
            FUN_103c4ad28(lVar3);
            param_1 = lVar3;
          }
        }
        else if (iVar2 == 2) {
          lVar3 = param_1;
          func_0x000107c43748();
          func_0x000107c61180();
          if (lVar3 != 0) {
            uVar4 = 0;
            FUN_103c4e3c4(0);
            FUN_103c4ac18(lVar3,uVar4);
            func_0x000107c433e8();
            func_0x000107c61180();
            func_0x000107c5fc54();
            param_1 = lVar3;
          }
        }
      }
      else if (iVar2 == 3) {
        lVar3 = param_1;
        func_0x000107c5c30c();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c4384c();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103c473dc);
            (*pcVar1)();
          }
          FUN_103c4e3c4(0);
          FUN_103c4af04(lVar3);
          param_1 = lVar3;
        }
      }
      else if (iVar2 == 4) {
        lVar3 = param_1;
        func_0x000107c3eb64();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c4384c();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103c473d4);
            (*pcVar1)();
          }
          FUN_103c4e3c4(0);
          uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ffaff8);
          func_0x000107c61174(uVar4);
          FUN_103c4aea0(lVar3,uVar4);
          param_1 = lVar3;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 103c473e4; end: 103c4746b; -[_TtC15ComposerWebView25WebViewAutofillController userContentController:didReceive:webView:] */

/* WARNING: Possible PIC construction at 0x000103c47440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c47450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c47444) */
/* WARNING: Removing unreachable block (ram,0x000103c47454) */

void FUN_103c473e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_103c4822c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103c4746c; end: 103c477f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103c4746c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  ppuVar6 = &puStack_80;
  ppuVar7 = &puStack_80;
  ppuVar8 = &puStack_80;
  ppuVar10 = &puStack_80;
  puVar1 = PTR_PTR_1126d6dc8;
  func_0x000107c610f8(PTR_PTR_1126d6dc8);
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ffb028);
  func_0x000107c5cb24(uVar2);
  func_0x000107c61180();
  func_0x000107c54a9c(puVar1);
  func_0x000107c61170(uVar2);
  puVar9 = &UNK_1106eebc8;
  puVar3 = puVar9;
  func_0x000107c613fc(&UNK_1106eebc8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x103c4841c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1106eec30;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c54aa8(puVar1);
  func_0x000107c60bd0(ppuVar4);
  puVar3 = puVar9;
  func_0x000107c613fc(&UNK_1106eebc8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uStack_60 = 0x103c48424;
  puStack_80 = puVar11;
  uStack_78 = 0x42000000;
  puStack_70 = (undefined *)0x103c485ac;
  puStack_68 = &UNK_1106eec58;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c56e40(puVar1);
  func_0x000107c60bd0(ppuVar5);
  puVar3 = puVar9;
  func_0x000107c613fc(&UNK_1106eebc8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uStack_60 = 0x103c4842c;
  puStack_80 = puVar11;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100f11160;
  puStack_68 = &UNK_1106eec80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c53430(puVar1);
  func_0x000107c60bd0(ppuVar6);
  puVar3 = puVar9;
  func_0x000107c613fc(&UNK_1106eebc8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uStack_60 = 0x103c48434;
  puStack_80 = puVar11;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10246d424;
  puStack_68 = &UNK_1106eeca8;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c54e84(puVar1);
  func_0x000107c60bd0(ppuVar7);
  puVar3 = puVar9;
  func_0x000107c613fc(&UNK_1106eebc8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uStack_60 = 0x103c4843c;
  puStack_80 = puVar11;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1030a48b0;
  puStack_68 = &UNK_1106eecd0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c54e8c(puVar1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c613fc(&UNK_1106eebc8,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  uStack_60 = 0x103c48444;
  puStack_80 = puVar11;
  uStack_78 = 0x42000000;
  puStack_70 = (undefined *)0x103c485a8;
  puStack_68 = &UNK_1106eecf8;
  puStack_58 = puVar9;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c560b8(puVar1);
  func_0x000107c60bd0(ppuVar10);
  func_0x0001000d224c(&puStack_80);
  puVar9 = puStack_80;
  if (puStack_80 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = puStack_80;
    func_0x000107c4c1dc(puStack_80);
    func_0x000107c61180();
    func_0x000107c615e8(puVar9);
  }
  func_0x000107c525f4(puVar1);
  func_0x000107c615e8(puVar11);
  return puVar1;
}



/* Entry: 103c477f8; end: 103c47823;  */

void FUN_103c477f8(void)

{
  FUN_103c488a4(0);
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,0,0);
  return;
}



/* Entry: 103c47824; end: 103c4789b;  */

/* WARNING: Possible PIC construction at 0x000103c47884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c47888) */

void FUN_103c47824(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c6157c();
  uVar1 = 0x112dc3dc8;
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc697a8,param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103c4789c; end: 103c478b3;  */

void FUN_103c4789c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c478b4,0,0);
  return;
}



/* Entry: 103c478b4; end: 103c4791b;  */

void FUN_103c478b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c4791c,uVar1,uVar2);
  return;
}



/* Entry: 103c4791c; end: 103c479b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c4791c(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112ffb000);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    uVar3 = uVar4;
    func_0x000107c42810();
    uVar1 = (undefined1)uVar3;
    func_0x000107c61170(uVar4);
  }
  **(undefined1 **)(unaff_x22 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000103c479b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c479b8; end: 103c47a13;  */

void FUN_103c479b8(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_103c46590(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103c47a14; end: 103c47a83;  */

void FUN_103c47a14(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_103c47a84(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 103c47a84; end: 103c47bab;  */

/* WARNING: Possible PIC construction at 0x000103c47b8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c47b90) */

void FUN_103c47a84(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  
  func_0x000107c602fc(0x2d);
  func_0x000107c6142c(0xe000000000000000);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_1;
  }
  lVar2 = -0x2000000000000000;
  if (param_2 != 0) {
    lVar2 = param_2;
  }
  func_0x000107c61434(param_2);
  func_0x000107c5fb78(uVar1,lVar2);
  func_0x000107c6142c(lVar2);
  func_0x000107c5fb78(0x3b2927,0xe300000000000000);
  puVar3 = &UNK_1106eed30;
  func_0x000107c613fc(&UNK_1106eed30,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = 0xd000000000000028;
  *(undefined8 *)(puVar3 + 0x20) = 0x800000010f1b1690;
  func_0x000107c61174();
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc69798,puVar3,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 103c47bac; end: 103c47e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c47bac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112ffaff0;
    func_0x000107c61428(lVar2,auStack_60,0,0);
    lVar1 = lVar2;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      lVar2 = *(long *)(lVar2 + 8);
      func_0x000107c61170(param_1);
      func_0x000107c614f0(lVar1);
      (**(code **)(lVar2 + 8))();
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 103c47e60; end: 103c47e7b;  */

void FUN_103c47e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c47e7c,0,0);
  return;
}



/* Entry: 103c47e7c; end: 103c47ee3;  */

void FUN_103c47e7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x103c485c0,uVar1,uVar2);
  return;
}



/* Entry: 103c47ee4; end: 103c4818f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c47ee4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  FUN_103c4e3c4(0);
  uVar1 = param_2;
  FUN_103c4b0a4();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ecc();
    if ((ulong)puVar8 >> 0x3e == 0) {
      puVar3 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar3 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar3 = puVar8;
      }
      func_0x000107c60480(puVar3);
    }
    puVar4 = (undefined *)0x0;
    func_0x000101d1802c(0,puVar3 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar9 = (ulong)puVar4 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar9 + 0x10);
    puVar8 = puVar4;
    if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
      func_0x000101d1802c(puVar8,uVar1 + 1,1,puVar4);
      uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
    *(undefined **)(uVar9 + uVar1 * 8 + 0x20) = puVar2;
  }
  uVar1 = param_2;
  func_0x000103c4b0c4();
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ecc();
    puVar3 = puVar8;
    func_0x000107c61550();
    if ((((int)puVar3 == 0) || ((long)puVar8 < 0)) ||
       (puVar3 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar8 >> 0x3e == 0) {
        puVar4 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar4 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar8) {
          puVar4 = puVar8;
        }
        func_0x000107c60480(puVar4);
      }
      puVar3 = (undefined *)0x0;
      func_0x000101d1802c(0,puVar4 + 1,1,puVar8);
    }
    uVar9 = (ulong)puVar3 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar9 + 0x10);
    puVar8 = puVar3;
    if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
      func_0x000101d1802c(puVar8,uVar1 + 1,1,puVar3);
      uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
    *(undefined **)(uVar9 + uVar1 * 8 + 0x20) = puVar2;
  }
  puVar2 = PTR_PTR_1126d6e58;
  func_0x000107c610f8(PTR_PTR_1126d6e58);
  uVar5 = 0;
  FUN_103c48538(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar3 = puVar8;
  func_0x000107c5fc48(puVar8,uVar5);
  func_0x000107c467f4(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  func_0x000107c54998(puVar2);
  func_0x000107c61170(param_2);
  lVar7 = unaff_x20 + _DAT_112ffaff0;
  func_0x000107c61428(lVar7,auStack_78,0,0);
  lVar6 = lVar7;
  func_0x000107c61618();
  if (lVar6 == 0) {
    func_0x000107c6142c(puVar8);
  }
  else {
    lVar10 = *(long *)(lVar7 + 8);
    lVar7 = lVar6;
    func_0x000107c614f0();
    (**(code **)(lVar10 + 0x18))(puVar2,lVar7,lVar10);
    func_0x000107c6142c(puVar8);
    func_0x000107c615e8(lVar6);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 103c48190; end: 103c481b3;  */

void FUN_103c48190(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112ffb058;
  plVar5 = (long *)&UNK_10dc697b8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103c48538(0,0x112ffafe8,&PTR_PTR_1126b4b08);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103c481b4; end: 103c4822b;  */

void FUN_103c481b4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103c48538(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103c4822c; end: 103c483bb;  */

/* WARNING: Removing unreachable block (ram,0x000103c48368) */

void FUN_103c4822c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [32];
  
  plVar1 = param_1;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  plVar2 = plVar1;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x000103c54de0();
  if (plVar2 == (long *)*plVar1 && param_2 == plVar1[1]) {
    func_0x000107c6142c(param_2);
  }
  else {
    func_0x000107c605b8(plVar2,param_2,(long *)*plVar1,plVar1[1],0);
    func_0x000107c6142c(param_2);
    if (((ulong)plVar2 & 1) == 0) {
      return;
    }
  }
  func_0x000107c3eb80(param_1);
  func_0x000107c61180();
  func_0x000107c60234(auStack_60);
  func_0x000107c615e8(param_1);
  plVar1 = &lStack_70;
  func_0x000107c6147c(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar1 & 1) != 0) {
    lVar3 = lStack_70;
    uVar5 = uStack_68;
    func_0x000107c5ee08(lStack_70,uStack_68,0);
    func_0x000107c6142c(uStack_68);
    if (uVar5 >> 0x3c < 0xf) {
      func_0x000107c610f8(PTR_PTR_1126d6e90);
      func_0x00010006c00c(lVar3,uVar5);
      lVar4 = lVar3;
      func_0x0001037af238(lVar3,uVar5);
      func_0x0001000b44c0(lVar3,uVar5);
      if (lVar4 == 0) {
        func_0x0001000b44c0(lVar3,uVar5);
      }
      else {
        FUN_103c46fc8(lVar4);
        func_0x0001000b44c0(lVar3,uVar5);
        func_0x000107c61170(lVar4);
      }
    }
  }
  return;
}



/* Entry: 103c483bc; end: 103c483db;  */

void FUN_103c483bc(void)

{
  func_0x000107c61168(&PTR_PTR_112948c10);
  return;
}



/* Entry: 103c483dc; end: 103c483ff;  */

undefined8 FUN_103c483dc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103c48400; end: 103c4844b;  */

void FUN_103c48400(long param_1,long param_2)

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



/* Entry: 103c4844c; end: 103c48477;  */

void FUN_103c4844c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103c48478; end: 103c484e3;  */

void FUN_103c48478(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103c485b8;
  plVar3[3] = lVar2;
  plVar3[4] = lVar4;
  plVar3[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c47e7c,0,0);
  return;
}



/* Entry: 103c484e4; end: 103c48537;  */

void FUN_103c484e4(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x103c485bc;
  plVar1[5] = param_1;
  plVar1[6] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c478b4,0,0);
  return;
}



/* Entry: 103c48538; end: 103c48577;  */

void FUN_103c48538(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103c48578; end: 103c485c3;  */

void FUN_103c48578(long param_1,long param_2)

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



/* Entry: 103c485c4; end: 103c48607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c485c4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ffb060;
  func_0x000107c61428(unaff_x20 + _DAT_112ffb060,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 103c48608; end: 103c4865b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c48608(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ffb060;
  func_0x000107c61428(unaff_x20 + _DAT_112ffb060,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 103c4865c; end: 103c4869b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c4865c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ffb060;
  func_0x000107c61428(unaff_x20 + _DAT_112ffb060,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103c4869c;
  return auVar2;
}



/* Entry: 103c4869c; end: 103c4869f;  */

void FUN_103c4869c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103c486a0; end: 103c486c7; +[SCComposerCreditCardScanView layerClass] */

void FUN_103c486a0(void)

{
  FUN_103c49498(0,0x112ffb068,&PTR__OBJC_CLASS___AVCaptureVideoPreviewLayer_1126dae20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 103c486c8; end: 103c488a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103c486c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  *(undefined8 *)(unaff_x20 + _DAT_112ffb060) = 0;
  lVar1 = _DAT_112ffb070;
  puVar3 = PTR__OBJC_CLASS___AVCaptureSession_1126b70a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112ffb078;
  puVar3 = PTR__OBJC_CLASS___CIContext_1126b3120;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112ffb080) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ffb088) = 0;
  lVar1 = _DAT_112ffb090;
  (**(code **)(lVar6 + 0x68))
            (&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2
            );
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1b16c0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  FUN_103c488a4();
  puVar5 = &stack0xffffffffffffff80;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar5,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c5a050();
  FUN_103c4890c();
  FUN_103c48ad4();
  func_0x000107c5bba0(*(undefined8 *)(puVar5 + _DAT_112ffb070));
  func_0x000107c61170(puVar5);
  return puVar5;
}



/* Entry: 103c488a4; end: 103c488c3;  */

void FUN_103c488a4(void)

{
  func_0x000107c61168(&PTR_PTR_112948d08);
  return;
}



/* Entry: 103c488c4; end: 103c488e3; -[SCComposerCreditCardScanView initWithFrame:] */

void FUN_103c488c4(void)

{
  FUN_103c486c8();
  return;
}



/* Entry: 103c488e4; end: 103c4890b; -[SCComposerCreditCardScanView initWithCoder:] */

void FUN_103c488e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103c48e98();
  return;
}



/* Entry: 103c4890c; end: 103c48ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c4890c(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 auStack_e0 [80];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___AVCaptureVideoPreviewLayer_1126dae20;
  func_0x000107c61168(PTR__OBJC_CLASS___AVCaptureVideoPreviewLayer_1126dae20);
  func_0x000107c61490(lVar2,puVar3,0,0,0);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ffb070);
  func_0x000107c58fb4();
  func_0x000107c61170(lVar2);
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___AVCaptureVideoPreviewLayer_1126dae20;
  func_0x000107c61168(PTR__OBJC_CLASS___AVCaptureVideoPreviewLayer_1126dae20);
  func_0x000107c61490(unaff_x20,puVar3,0,0,0);
  func_0x000107c5a51c();
  func_0x000107c61170(unaff_x20);
  puVar3 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
  func_0x000107c61168();
  func_0x000107c41594();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c48ad0);
    (*pcVar1)();
  }
  puVar4 = PTR__OBJC_CLASS___AVCaptureDeviceInput_1126d4280;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c46530();
  uVar5 = 0;
  if (puVar4 == (undefined *)0x0) {
    uVar9 = uVar5;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar9);
    func_0x000107c61654();
    func_0x000107c61170(puVar3);
    func_0x000107c614ac(uVar5);
  }
  else {
    func_0x000107c61174();
    func_0x000107c61170(puVar3);
    func_0x000107c3d710(uVar9);
    func_0x000107c61170(puVar3);
    puVar3 = puVar4;
  }
  func_0x000107c61170(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  func_0x000107c60e78();
  puVar7 = auStack_e0;
  puVar4 = PTR__OBJC_CLASS___AVCaptureVideoDataOutput_1126b70b0;
  func_0x000107c610f8(PTR__OBJC_CLASS___AVCaptureVideoDataOutput_1126b70b0);
  func_0x000107c453e4();
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar9 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar9;
  *(undefined1 **)(lVar2 + 0x28) = puVar7;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d0();
  uVar9 = 0;
  FUN_103c49498(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar2 + 0x48) = uVar9;
  *(undefined **)(lVar2 + 0x30) = puVar6;
  lVar8 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000103c494d8((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  lVar2 = lVar8;
  func_0x000107c5f9dc(lVar8,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar8);
  func_0x000107c5a540(puVar4);
  func_0x000107c61170(lVar2);
  uVar9 = *(undefined8 *)(puVar3 + _DAT_112ffb090);
  func_0x000107c4f7c0(uVar9);
  func_0x000107c61180();
  func_0x000107c58b60(puVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c3d7e0(*(undefined8 *)(puVar3 + _DAT_112ffb070));
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 103c48ad4; end: 103c48c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c48ad4(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_90 [80];
  
  puVar6 = auStack_90;
  puVar1 = PTR__OBJC_CLASS___AVCaptureVideoDataOutput_1126b70b0;
  func_0x000107c610f8(PTR__OBJC_CLASS___AVCaptureVideoDataOutput_1126b70b0);
  func_0x000107c453e4();
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d0();
  uVar3 = 0;
  FUN_103c49498(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(undefined **)(lVar2 + 0x30) = puVar4;
  lVar5 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000103c494d8((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  lVar2 = lVar5;
  func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  func_0x000107c5a540(puVar1);
  func_0x000107c61170(lVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ffb090);
  func_0x000107c4f7c0(uVar3);
  func_0x000107c61180();
  func_0x000107c58b60(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c3d7e0(*(undefined8 *)(unaff_x20 + _DAT_112ffb070));
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 103c48c5c; end: 103c48c8b;  */

void FUN_103c48c5c(void)

{
  FUN_103c488a4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c48c8c; end: 103c48ce3; -[SCComposerCreditCardScanView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c48cb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c48cbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c48c8c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ffb060));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ffb070));
  return;
}



/* Entry: 103c48ce4; end: 103c48e03; -[SCComposerCreditCardScanView captureOutput:didOutputSampleBuffer:fromConnection:] */

/* WARNING: Possible PIC construction at 0x000103c48d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c48d50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c48d44) */
/* WARNING: Removing unreachable block (ram,0x000103c48d54) */

void FUN_103c48ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_103c49030(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103c48e04; end: 103c48e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c48e04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = param_1;
  FUN_103c488a4();
  func_0x000107c61480(param_1,lVar1);
  lVar1 = _DAT_112ffb060;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112ffb060,auStack_38,1,0);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = 0;
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 103c48e68; end: 103c48e97; +[SCComposerCreditCardScanView bindAttributes:] */

void FUN_103c48e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  FUN_103c4914c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 103c48e98; end: 103c4902f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c48e98(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  
  lVar4 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + _DAT_112ffb060) = 0;
  lVar2 = _DAT_112ffb070;
  puVar5 = PTR__OBJC_CLASS___AVCaptureSession_1126b70a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112ffb078;
  puVar5 = PTR__OBJC_CLASS___CIContext_1126b3120;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined1 *)(unaff_x20 + _DAT_112ffb080) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ffb088) = 0;
  lVar2 = _DAT_112ffb090;
  (**(code **)(lVar7 + 0x68))
            (&stack0xffffffffffffffb0 + lVar1,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar4
            );
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar6 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1b16c0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar6);
  (**(code **)(lVar7 + 8))(&stack0xffffffffffffffb0 + lVar1,lVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined4 *)((long)auStack_58 + lVar1) = 0;
  *(undefined8 *)((long)&uStack_60 + lVar1) = 0x2b;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ComposerCreditCardScanView/ComposerCreditCardScanView.swift",0x3b,2);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103c49030);
  (*pcVar3)();
}



/* Entry: 103c49030; end: 103c4914b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c49030(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  
  lVar1 = _DAT_112ffb080;
  if (((*(byte *)(unaff_x20 + _DAT_112ffb080) & 1) == 0) &&
     ((*(byte *)(unaff_x20 + _DAT_112ffb088) & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + _DAT_112ffb080) = 1;
    func_0x000107c60a1c();
    func_0x000107c61180();
    if (param_1 != 0) {
      puVar2 = PTR__OBJC_CLASS___CIImage_1126b3128;
      func_0x000107c610f8(PTR__OBJC_CLASS___CIImage_1126b3128);
      func_0x000107c45b18();
      lVar4 = *(long *)(unaff_x20 + _DAT_112ffb078);
      func_0x000107c42c78();
      func_0x000107c4094c();
      if (lVar4 != 0) {
        puVar3 = &UNK_1106eee58;
        func_0x000107c613fc(&UNK_1106eee58,0x18,7);
        func_0x000107c61614(puVar3 + 0x10);
        func_0x000107c6157c(puVar3);
        FUN_103c569c0(lVar4,FUN_103c49260,puVar3);
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(lVar4);
        func_0x000107c61578(puVar3,2);
        return;
      }
      func_0x000107c61170(puVar2);
      func_0x000107c61170(param_1);
    }
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
  }
  return;
}



/* Entry: 103c4914c; end: 103c49243;  */

void FUN_103c4914c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  ppuVar4 = &puStack_70;
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f1b16e0);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_50 = (code *)0x103c48d6c;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101279ab8;
  puStack_58 = &UNK_1106eedf8;
  func_0x000107c60bc4(&puStack_70);
  pcStack_50 = FUN_103c48e04;
  uStack_48 = 0;
  puStack_70 = puVar1;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10127a6c0;
  puStack_58 = &UNK_1106eee20;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c3e908(param_1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103c49244; end: 103c4925f;  */

void FUN_103c49244(long param_1,long param_2)

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



/* Entry: 103c49260; end: 103c49497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c49260(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar7 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar7 == 0) {
    return;
  }
  if (param_1 == 0) goto LAB_103c49464;
  *(undefined1 *)(lVar7 + _DAT_112ffb088) = 1;
  lVar11 = _DAT_112ffb060;
  func_0x000107c61428(lVar7 + _DAT_112ffb060,auStack_b8,0,0);
  lVar11 = *(long *)(lVar7 + lVar11);
  if (lVar11 == 0) {
LAB_103c49444:
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    lVar8 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 8;
    *(undefined8 *)(lVar8 + 0x10) = 4;
    puVar6 = PTR___sSSN_11034da80;
    uVar9 = *(undefined8 *)(param_1 + _DAT_112ffbd48);
    uVar2 = ((undefined8 *)(param_1 + _DAT_112ffbd48))[1];
    *(undefined **)(lVar8 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar8 + 0x20) = uVar9;
    *(undefined8 *)(lVar8 + 0x28) = uVar2;
    uVar9 = *(undefined8 *)(param_1 + _DAT_112ffbd50);
    uVar3 = ((undefined8 *)(param_1 + _DAT_112ffbd50))[1];
    *(undefined **)(lVar8 + 0x58) = puVar6;
    *(undefined8 *)(lVar8 + 0x40) = uVar9;
    *(undefined8 *)(lVar8 + 0x48) = uVar3;
    uVar9 = *(undefined8 *)(param_1 + _DAT_112ffbd58);
    uVar4 = ((undefined8 *)(param_1 + _DAT_112ffbd58))[1];
    *(undefined **)(lVar8 + 0x78) = puVar6;
    *(undefined8 *)(lVar8 + 0x60) = uVar9;
    *(undefined8 *)(lVar8 + 0x68) = uVar4;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112ffbd60);
    uVar5 = ((undefined8 *)(param_1 + _DAT_112ffbd60))[1];
    uVar9 = 0x112d35ff8;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    *(undefined8 *)(lVar8 + 0x98) = uVar9;
    *(undefined8 *)(lVar8 + 0x80) = uVar1;
    *(undefined8 *)(lVar8 + 0x88) = uVar5;
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    func_0x000107c615f0(lVar11);
    func_0x000107c61174(param_1);
    lVar10 = lVar8;
    func_0x000107c5fc48(lVar8,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61574(lVar8);
    lVar8 = lVar11;
    func_0x000107c4e5f4();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    func_0x000107c615e8(lVar11);
    if (lVar8 == 0) {
      func_0x000107c61170(param_1);
      goto LAB_103c49444;
    }
    func_0x000107c60234(&uStack_a0,lVar8);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar8);
  }
  func_0x000103c494d8(&uStack_a0,0x112d387f8,&UNK_10d902650);
LAB_103c49464:
  *(undefined1 *)(lVar7 + _DAT_112ffb080) = 0;
  func_0x000107c61170(lVar7);
  return;
}



/* Entry: 103c49498; end: 103c49517;  */

void FUN_103c49498(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103c49518; end: 103c4951f;  */

void FUN_103c49518(long param_1,long param_2)

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



/* Entry: 103c49520; end: 103c49b53;  */

void FUN_103c49520(undefined8 ******param_1,undefined8 param_2,undefined8 *******param_3,
                  undefined8 *******param_4,undefined8 *******param_5,undefined8 *******param_6,
                  undefined8 param_7,long param_8,undefined8 ******param_9,long param_10,
                  uint param_11)

{
  undefined8 *****pppppuVar1;
  long lVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined *puVar8;
  undefined8 *******pppppppuVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *******pppppppuVar11;
  code *pcVar12;
  undefined8 *******pppppppuVar13;
  long lVar14;
  code *pcVar15;
  code *pcVar16;
  undefined8 *******pppppppuVar17;
  long lVar18;
  long lVar19;
  undefined8 *****apppppuStack_110 [4];
  undefined8 ******appppppuStack_f0 [3];
  long lStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined8 ******ppppppuStack_c8;
  undefined8 *****pppppuStack_c0;
  long lStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 *****pppppuStack_90;
  long lStack_88;
  undefined8 ******ppppppuStack_80;
  undefined8 ******ppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 ******ppppppuStack_68;
  
  lVar2 = 0;
  appppppuStack_f0[1] = (undefined8 ******)param_7;
  lStack_d8 = param_8;
  ppppppuStack_d0 = param_3;
  ppppppuStack_c8 = param_5;
  pppppuStack_c0 = param_9;
  ppppppuStack_b0 = param_4;
  ppppppuStack_a8 = param_6;
  func_0x000107c5eb9c();
  lStack_98 = *(long *)(lVar2 + -8);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  pppppppuVar7 = (undefined8 *******)
                 ((long)appppppuStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar18 = (long)pppppppuVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar18 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppppppuVar11 = (undefined8 *******)(lVar19 - extraout_x12_00);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  pppppppuVar17 =
       (undefined8 *******)((long)pppppppuVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppppppuVar13 = (undefined8 *******)((long)pppppppuVar17 - extraout_x12_01);
  func_0x000100029394(param_2,pppppppuVar11);
  pcVar15 = *(code **)(lVar14 + 0x30);
  pppppppuVar3 = pppppppuVar11;
  (*pcVar15)(pppppppuVar11,1,lVar2);
  if ((int)pppppppuVar3 == 1) {
    func_0x0001000293e4(pppppppuVar11);
    pcVar15 = *(code **)(lVar14 + 0x38);
  }
  else {
    pcVar16 = *(code **)(lVar14 + 0x20);
    pppppppuVar3 = pppppppuVar13;
    appppppuStack_f0[0] = param_1;
    lStack_b8 = lVar14;
    (*pcVar16)(pppppppuVar13,pppppppuVar11,lVar2);
    appppppuStack_f0[2] = pppppppuVar13;
    if ((param_11 & 0x100) != 0) {
      if (((param_11 & 1) == 0) || (lStack_d8 == 0)) {
LAB_103c49734:
        lVar14 = lStack_b8;
        pppppppuVar3 = (undefined8 *******)appppppuStack_f0[2];
        (*pcVar16)(lVar19,appppppuStack_f0[2],lVar2);
        (**(code **)(lVar14 + 0x38))(lVar19,0,1,lVar2);
      }
      else {
        uVar10 = 0x6469436353;
        func_0x000107c5ed90();
        func_0x000107c5fadc(0x6469436353,0xe500000000000000);
        pppppppuVar11 = pppppppuVar3;
        func_0x000107c4f7a0();
        func_0x000107c61180();
        func_0x000107c61170(pppppppuVar3);
        func_0x000107c61170(uVar10);
        lVar14 = lStack_b8;
        pppppppuVar3 = (undefined8 *******)appppppuStack_f0[2];
        if (pppppppuVar11 != (undefined8 *******)0x0) {
          func_0x000107c61170(pppppppuVar11);
          goto LAB_103c49734;
        }
        (**(code **)(lStack_b8 + 0x10))(lVar18,appppppuStack_f0[2],lVar2);
        pcVar12 = *(code **)(lVar14 + 0x38);
        (*pcVar12)(lVar18,0,1,lVar2);
        func_0x000103c49dc8(lVar19,lVar18,0x6469436353,0xe500000000000000,appppppuStack_f0[1],
                            lStack_d8);
        func_0x0001000293e4(lVar18);
        (**(code **)(lVar14 + 8))(pppppppuVar3,lVar2);
        lVar14 = lVar19;
        (*pcVar15)(lVar19,1,lVar2);
        if ((int)lVar14 == 1) {
          func_0x0001000293e4(lVar19);
          (*pcVar12)(appppppuStack_f0[0],1,1,lVar2);
          return;
        }
      }
      (*pcVar16)(pppppppuVar17,lVar19,lVar2);
      (*pcVar16)(pppppppuVar3,pppppppuVar17,lVar2);
      pppppppuVar11 = pppppppuVar17;
    }
    func_0x000107c5ed70();
    pppppppuVar17 = pppppppuVar3;
    lVar14 = lStack_a0;
    ppppppuStack_70 = pppppppuVar3;
    ppppppuStack_68 = pppppppuVar11;
    if ((undefined8 *******)ppppppuStack_b0 != (undefined8 *******)0x0) {
      ppppppuStack_80 = ppppppuStack_d0;
      ppppppuStack_78 = ppppppuStack_b0;
      pppppppuVar4 = pppppppuVar3;
      func_0x000107c5eb78(pppppppuVar7);
      func_0x000100e8b654();
      puVar8 = PTR___sSSN_11034da80;
      pppppppuVar5 = pppppppuVar7;
      pppppppuVar6 = (undefined8 *******)PTR___sSSN_11034da80;
      func_0x000107c60200(pppppppuVar7,PTR___sSSN_11034da80,pppppppuVar4);
      lVar14 = lStack_a0;
      pppppppuVar17 = pppppppuVar7;
      (**(code **)(lStack_98 + 8))(pppppppuVar7,lStack_a0);
      if (pppppppuVar6 != (undefined8 *******)0x0) {
        ppppppuStack_80 = pppppppuVar5;
        ppppppuStack_78 = pppppppuVar6;
        pppppppuVar13[-2] = pppppppuVar4;
        pppppppuVar13[-1] = pppppppuVar4;
        pppppppuVar13[-4] = (undefined8 ******)puVar8;
        pppppppuVar13[-3] = pppppppuVar4;
        pppppppuVar3 = (undefined8 *******)&UNK_1106eeef0;
        pppppppuVar4 = &ppppppuStack_80;
        func_0x000107c601fc(&UNK_1106eeef0,pppppppuVar4,0,0,0,1,puVar8,puVar8);
        func_0x000107c6142c(pppppppuVar6);
        func_0x000107c6142c();
        pppppppuVar17 = pppppppuVar11;
        pppppppuVar11 = pppppppuVar4;
        ppppppuStack_70 = pppppppuVar3;
        ppppppuStack_68 = pppppppuVar4;
      }
    }
    pppppppuVar4 = pppppppuVar17;
    pppppppuVar5 = pppppppuVar11;
    if ((undefined8 *******)ppppppuStack_a8 != (undefined8 *******)0x0) {
      ppppppuStack_80 = ppppppuStack_c8;
      ppppppuStack_78 = ppppppuStack_a8;
      func_0x000107c5eb78(pppppppuVar7);
      func_0x000100e8b654();
      puVar8 = PTR___sSSN_11034da80;
      pppppppuVar6 = pppppppuVar7;
      pppppppuVar9 = (undefined8 *******)PTR___sSSN_11034da80;
      func_0x000107c60200(pppppppuVar7,PTR___sSSN_11034da80,pppppppuVar17);
      (**(code **)(lStack_98 + 8))(pppppppuVar7,lVar14);
      pppppppuVar4 = pppppppuVar7;
      if (pppppppuVar9 != (undefined8 *******)0x0) {
        ppppppuStack_80 = pppppppuVar6;
        ppppppuStack_78 = pppppppuVar9;
        pppppppuVar13[-2] = pppppppuVar17;
        pppppppuVar13[-1] = pppppppuVar17;
        pppppppuVar13[-4] = (undefined8 ******)puVar8;
        pppppppuVar13[-3] = pppppppuVar17;
        pppppppuVar3 = (undefined8 *******)&UNK_10dc69828;
        pppppppuVar5 = &ppppppuStack_80;
        func_0x000107c601fc(&UNK_10dc69828,pppppppuVar5,0,0,0,1,puVar8,puVar8);
        func_0x000107c6142c(pppppppuVar9);
        func_0x000107c6142c();
        pppppppuVar4 = pppppppuVar11;
        ppppppuStack_70 = pppppppuVar3;
        ppppppuStack_68 = pppppppuVar5;
      }
    }
    pppppuVar1 = pppppuStack_c0;
    puVar8 = PTR___sSSN_11034da80;
    if (param_10 != 0) {
      ppppppuStack_80 = (undefined8 ******)pppppuStack_c0;
      ppppppuStack_78 = (undefined8 ******)param_10;
      func_0x000100e8b654();
      pppppppuVar13[-2] = pppppppuVar4;
      pppppppuVar13[-1] = pppppppuVar4;
      pppppppuVar13[-4] = (undefined8 ******)puVar8;
      pppppppuVar13[-3] = pppppppuVar4;
      pppppppuVar3 = (undefined8 *******)&UNK_10dc69808;
      pppppppuVar11 = &ppppppuStack_80;
      func_0x000107c601fc(&UNK_10dc69808,pppppppuVar11,0,0,0,1,puVar8,puVar8);
      func_0x000107c6142c(pppppppuVar5);
      pppppuStack_90 = pppppuVar1;
      lStack_88 = param_10;
      ppppppuStack_80 = pppppppuVar3;
      ppppppuStack_78 = pppppppuVar11;
      func_0x000107c61434(pppppppuVar11);
      pppppppuVar13[-2] = pppppppuVar4;
      pppppppuVar13[-1] = pppppppuVar4;
      pppppppuVar13[-4] = (undefined8 ******)puVar8;
      pppppppuVar13[-3] = pppppppuVar4;
      pppppppuVar3 = (undefined8 *******)&UNK_10dc69818;
      pppppppuVar5 = (undefined8 *******)&pppppuStack_90;
      func_0x000107c601fc(&UNK_10dc69818,pppppppuVar5,0,0,0,1,puVar8,puVar8);
      func_0x000107c61430(pppppppuVar11,2);
    }
    param_1 = appppppuStack_f0[0];
    puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x000107c610f8();
    func_0x000107c5fadc(pppppppuVar3,pppppppuVar5);
    func_0x000107c48af4();
    func_0x000107c61170(pppppppuVar3);
    if (puVar8 != (undefined *)0x0) {
      func_0x000107c5edb4(param_1,puVar8);
      func_0x000107c6142c(pppppppuVar5);
      func_0x000107c61170(puVar8);
      lVar14 = lStack_b8;
      (**(code **)(lStack_b8 + 8))(appppppuStack_f0[2],lVar2);
      pcVar15 = *(code **)(lVar14 + 0x38);
      uVar10 = 0;
      goto LAB_103c49a80;
    }
    func_0x000107c6142c(pppppppuVar5);
    lVar14 = lStack_b8;
    (**(code **)(lStack_b8 + 8))(appppppuStack_f0[2],lVar2);
    pcVar15 = *(code **)(lVar14 + 0x38);
  }
  uVar10 = 1;
LAB_103c49a80:
  (*pcVar15)(param_1,uVar10,1,lVar2);
  return;
}



/* Entry: 103c49b54; end: 103c4a11b; +[AdsURLUtilsSwift overrideAdsURL:adKey:adId:adServeItemId:pixelToken:enableWebClickIDQueryParam:allowClickId:] */

void FUN_103c49b54(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,undefined4 param_8,byte param_9)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  
  uStack_68 = (uint)param_9;
  lVar7 = 0x112d36580;
  uStack_70 = param_1;
  uStack_64 = param_8;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar8 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar8 - extraout_x12;
  if (param_3 == 0) {
    lVar3 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar8,param_3);
    lVar3 = 0;
    func_0x000107c5ede0();
  }
  uVar6 = (ulong)(param_3 == 0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar8,uVar6,1);
  if (param_4 == 0) {
    lStack_78 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lStack_78 = param_4;
    uVar2 = uVar6;
  }
  if (param_5 == 0) {
    param_5 = 0;
    uVar11 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
    uVar11 = uVar6;
  }
  lVar3 = param_6;
  func_0x000107c61174();
  lVar4 = param_7;
  func_0x000107c61174();
  if (lVar3 == 0) {
    param_6 = 0;
    uVar1 = 0;
    uVar10 = uVar6;
  }
  else {
    func_0x000107c5faec(param_6);
    uVar10 = uVar6;
    func_0x000107c61170(lVar3);
    uVar1 = uVar6;
  }
  if (lVar4 == 0) {
    param_7 = 0;
    uVar10 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c614ec(uStack_70);
  *(char *)(lVar7 + -7) = (char)uStack_68;
  *(char *)(lVar7 + -8) = (char)uStack_64;
  *(ulong *)(lVar7 + -0x10) = uVar10;
  FUN_103c49520(lVar7,puVar8,lStack_78,uVar2,param_5,uVar11,param_6,uVar1,param_7);
  func_0x000107c6142c(uVar10);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(uVar2);
  func_0x0001000293e4(puVar8);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar4 + -8);
  lVar3 = lVar7;
  (**(code **)(lVar9 + 0x30))(lVar7,1,lVar4);
  uVar5 = 0;
  if ((int)lVar3 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar9 + 8))(lVar7,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 103c4a11c; end: 103c4a2af; +[AdsURLUtilsSwift updatedURL:queryName:queryValue:] */

void FUN_103c4a11c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  if (param_3 == 0) {
    lVar2 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar6,param_3);
    lVar2 = 0;
    func_0x000107c5ede0();
  }
  uVar5 = (ulong)(param_3 == 0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar6,uVar5,1);
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = uVar5;
  }
  if (param_5 == 0) {
    param_5 = 0;
    uVar5 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000103c49dc8(lVar7,puVar6,param_4,uVar1,param_5,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar1);
  func_0x0001000293e4(puVar6);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar3 + -8);
  lVar2 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,lVar3);
  uVar4 = 0;
  if ((int)lVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 103c4a2b0; end: 103c4a3a7; +[AdsURLUtilsSwift initialRedirectQueryItemsToRetain:enableRetainQueryParamsOnInitialRedirect:] */

void FUN_103c4a2b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar4,param_3);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar4,param_3 == 0,1);
  puVar2 = puVar4;
  FUN_103c4a41c(puVar4,param_4);
  func_0x0001000293e4(puVar4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    uVar3 = 0;
    func_0x000107c5ebbc(0);
    puVar4 = puVar2;
    func_0x000107c5fc48(puVar2,uVar3);
    func_0x000107c6142c(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 103c4a3a8; end: 103c4a3e3; -[AdsURLUtilsSwift init] */

void FUN_103c4a3a8(undefined8 param_1)

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



/* Entry: 103c4a3e4; end: 103c4a417;  */

void FUN_103c4a3e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c4a418; end: 103c4a41b; -[AdsURLUtilsSwift .cxx_destruct] */

void FUN_103c4a418(void)

{
  return;
}



/* Entry: 103c4a41c; end: 103c4a653;  */

long FUN_103c4a41c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  uVar8 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((param_2 & 1) != 0) {
    func_0x000100029394(param_1,puVar10);
    puVar2 = puVar10;
    (**(code **)(lVar11 + 0x30))(puVar10,1,lVar1);
    if ((int)puVar2 == 1) {
      func_0x0001000293e4(puVar10);
    }
    else {
      uVar9 = 0x6469436353;
      uVar7 = uVar8;
      (**(code **)(lVar11 + 0x20))(uVar8,puVar10,lVar1);
      func_0x000107c5ed90();
      uVar6 = 0xe500000000000000;
      func_0x000107c5fadc(0x6469436353);
      uVar12 = uVar7;
      func_0x000107c4f7a0();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar9);
      if (uVar12 == 0) {
        (**(code **)(lVar11 + 8))(uVar8,lVar1);
      }
      else {
        uVar3 = uVar12;
        func_0x000107c5faec();
        func_0x000107c61170(uVar12);
        uVar7 = uVar3 & 0xffffffffffff;
        if ((uVar6 & 0x2000000000000000) != 0) {
          uVar7 = uVar6 >> 0x38 & 0xf;
        }
        if (uVar7 != 0) {
          lVar4 = 0x112d70260;
          func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
          lVar5 = 0;
          func_0x000107c5ebbc();
          uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
          uVar12 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
          func_0x000107c613fc(lVar4,uVar12 + *(long *)(*(long *)(lVar5 + -8) + 0x48),uVar7 | 7);
          *(undefined8 *)(lVar4 + 0x18) = 2;
          *(undefined8 *)(lVar4 + 0x10) = 1;
          func_0x000107c5ebb0(lVar4 + uVar12,0x6469436353,0xe500000000000000,uVar3,uVar6);
          func_0x000107c6142c(uVar6);
          (**(code **)(lVar11 + 8))(uVar8,lVar1);
          return lVar4;
        }
        (**(code **)(lVar11 + 8))(uVar8,lVar1);
        func_0x000107c6142c(uVar6);
      }
    }
  }
  return 0;
}



/* Entry: 103c4a654; end: 103c4a673;  */

void FUN_103c4a654(void)

{
  func_0x000107c61168(&PTR_PTR_112948e50);
  return;
}



/* Entry: 103c4a674; end: 103c4a72f; +[WebBrowsingURLHelpersSwift IsHypertextURL:] */

uint FUN_103c4a674(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffe0 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar3,param_3);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  puVar2 = puVar3;
  FUN_103c4a7a0(puVar3);
  func_0x0001000293e4(puVar3);
  return (uint)puVar2 & 1;
}



/* Entry: 103c4a730; end: 103c4a76b; -[WebBrowsingURLHelpersSwift init] */

void FUN_103c4a730(undefined8 param_1)

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



/* Entry: 103c4a76c; end: 103c4a79f;  */

void FUN_103c4a76c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c4a7a0; end: 103c4a903;  */

uint FUN_103c4a7a0(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  uint uVar5;
  long lVar6;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000100029394(param_1,puVar3);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  lVar4 = 1;
  puVar2 = puVar3;
  (**(code **)(lVar6 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar3);
  }
  else {
    func_0x000107c5edc8();
    (**(code **)(lVar6 + 8))(puVar3,lVar1);
    if (lVar4 != 0) {
      if (((puVar2 == (undefined1 *)0x70747468 && lVar4 == -0x1c00000000000000) ||
          (puVar3 = puVar2, func_0x000107c605b8(puVar2,lVar4,0x70747468,0xe400000000000000,0),
          ((ulong)puVar3 & 1) != 0)) ||
         (puVar2 == (undefined1 *)0x7370747468 && lVar4 == -0x1b00000000000000)) {
        func_0x000107c6142c(lVar4);
        uVar5 = 1;
      }
      else {
        func_0x000107c605b8(puVar2,lVar4,0x7370747468,0xe500000000000000,0);
        uVar5 = (uint)puVar2;
        func_0x000107c6142c(lVar4);
      }
      goto LAB_103c4a8e8;
    }
  }
  uVar5 = 0;
LAB_103c4a8e8:
  return uVar5 & 1;
}



/* Entry: 103c4a904; end: 103c4a923;  */

void FUN_103c4a904(void)

{
  func_0x000107c61168(&PTR_PTR_112948f00);
  return;
}



/* Entry: 103c4a924; end: 103c4a99f; +[WebURLHelperSwift encodeUrl:] */

void FUN_103c4a924(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  lVar1 = param_2;
  FUN_103c4aac4();
  func_0x000107c6142c(param_2);
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



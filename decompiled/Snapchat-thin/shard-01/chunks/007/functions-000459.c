/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101385038; end: 10138509b; -[_TtC22UseTemplateFlowFeature32UseTemplateFlowFeatureEntryPoint didSendSnapsAndPostToStory:storyTypes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385038(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d76c28);
  func_0x000107c61174();
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5d898();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10138509c; end: 1013850bb;  */

void FUN_10138509c(void)

{
  func_0x000107c61168(&PTR_PTR_1127cc460);
  return;
}



/* Entry: 1013850bc; end: 1013850e3;  */

void FUN_1013850bc(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1013850e4; end: 1013851ef;  */

void FUN_1013850e4(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1013859f4(0,0x112d76cd0,&PTR_PTR_1126a6bc8);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d76cd8;
  plVar5 = (long *)&UNK_10d936780;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1013851f0; end: 101385453;  */

undefined * FUN_1013851f0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101385324);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1013850e4();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1013859f4(0,0x112d76cd0,&PTR_PTR_1126a6bc8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101385454; end: 10138545f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385454(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c49b28();
    if ((uVar4 & 1) == 0) {
      if ((param_2 != 0) || (param_1 == 0)) {
        puVar5 = &UNK_1103a89a8;
        func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
        func_0x000107c61614(puVar5 + 0x10,lVar3);
        func_0x000107c6157c(puVar5);
        func_0x000101381968(FUN_101385460,puVar5);
        func_0x000107c61170(lVar3);
        func_0x000107c61578(puVar5,2);
        return;
      }
      uVar7 = *(undefined8 *)(lVar3 + _DAT_112d76c08);
      *(undefined8 *)(lVar3 + _DAT_112d76c08) = 0;
      func_0x000107c61174(param_1);
      func_0x000107c61170(uVar7);
      lStack_60 = 0;
      uVar7 = 0;
      FUN_1013859f4(0,0x112d62390,&PTR_PTR_1126aff40);
      func_0x000107c5fc4c(param_1,&lStack_60,uVar7);
      lVar1 = lStack_60;
      if (lStack_60 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101381968);
        (*pcVar2)();
      }
      FUN_101381a9c(uVar6,lStack_60);
      func_0x000107c6142c(lVar1);
      func_0x000107c61170(lVar3);
      lVar3 = param_1;
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101385460; end: 1013854ef;  */

void FUN_101385460(void)

{
  FUN_101382ce8();
  return;
}



/* Entry: 1013854f0; end: 1013854f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013854f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if ((param_2 == 0) && (param_1 != 0)) {
      lVar2 = param_1;
      func_0x000107c615f0(param_1);
      func_0x000107c5b1d0();
      func_0x000107c61180();
      lVar3 = param_1;
      func_0x000107c5b198(param_1);
      func_0x000107c61180();
      puVar4 = PTR_PTR_1126b1060;
      func_0x000107c610f8(PTR_PTR_1126b1060);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
      func_0x000107c47d08(puVar4);
      func_0x000107c61170(puVar9);
      uVar5 = 0xd000000000000011;
      func_0x000107c5fadc(0xd000000000000011,0x800000010ef39750);
      uVar10 = *(undefined8 *)(lVar1 + _DAT_112d76bf0);
      puVar9 = &UNK_1103a89a8;
      func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,lVar1);
      puVar6 = &UNK_1103a8c40;
      func_0x000107c613fc(&UNK_1103a8c40,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar9;
      *(long *)(puVar6 + 0x18) = param_1;
      pcStack_88 = FUN_101385528;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_1013838b0;
      puStack_90 = &UNK_1103a8c58;
      ppuVar7 = &puStack_a8;
      puStack_80 = puVar6;
      func_0x000107c60bc4();
      puVar9 = puStack_80;
      func_0x000107c615f0(param_1);
      func_0x000107c61174();
      func_0x000107c61574(puVar9);
      func_0x000107c4228c(uVar8);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar10);
    }
    else {
      puVar9 = &UNK_1103a89a8;
      func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,lVar1);
      func_0x000107c6157c(puVar9);
      func_0x000101381968(FUN_1013854f8,puVar9);
      func_0x000107c61170(lVar1);
      func_0x000107c61578(puVar9,2);
    }
  }
  return;
}



/* Entry: 1013854f8; end: 101385527;  */

void FUN_1013854f8(void)

{
  FUN_1013831bc();
  return;
}



/* Entry: 101385528; end: 10138552f;  */

void FUN_101385528(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar3 = &UNK_1103a89a8;
    func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar2);
    if ((param_1 & 1) == 0) {
      func_0x000107c6157c(puVar3);
      func_0x000101381968(FUN_101385530,puVar3);
      puVar4 = puVar3;
    }
    else {
      puVar4 = &UNK_1103a8c90;
      func_0x000107c613fc(&UNK_1103a8c90,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = uVar1;
      func_0x000107c6157c(puVar3);
      func_0x000107c615f0(uVar1);
      func_0x000101381968(FUN_10138558c,puVar4);
    }
    func_0x000107c61170(lVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 101385530; end: 10138558b;  */

void FUN_101385530(void)

{
  FUN_1013831bc();
  return;
}



/* Entry: 10138558c; end: 1013855c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10138558c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d76c08);
    *(undefined8 *)(lVar1 + _DAT_112d76c08) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d76c18);
    *(undefined8 *)(lVar1 + _DAT_112d76c18) = uVar3;
    func_0x000107c615e8(uVar2);
    func_0x000107c615f0(uVar3);
    func_0x000107c5b198();
    func_0x000107c61180();
    FUN_1013833d0();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1013855c8; end: 1013855f3;  */

void FUN_1013855c8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1013855f4; end: 101385603;  */

void FUN_1013855f4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 101385604; end: 101385647;  */

void FUN_101385604(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101385648; end: 10138565f;  */

undefined * FUN_101385648(undefined *param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_101382c8c;
  uStack_60 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_100b61264;
  puStack_70 = &UNK_1103a9180;
  ppuVar1 = &puStack_88;
  uVar2 = uVar3;
  func_0x000107c60bc4(ppuVar1);
  func_0x000107c4c6bc(param_1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (param_1 == (undefined *)0x0) {
    uVar3 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    uVar2 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010ef39850);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar6 = puVar4;
    func_0x000107c5ed2c(puVar4);
    func_0x000107c451ac(puVar5);
    func_0x000107c61180();
  }
  else {
    puVar4 = param_1;
    func_0x00010011df08();
    func_0x000107c61180();
    uVar11 = uVar2;
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c5faec();
      uVar11 = uVar2;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar2);
    }
    puStack_88 = (undefined *)0x0;
    func_0x000107c5e908(uVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = puStack_88;
    uVar2 = uVar3;
    func_0x000107c5faec(uVar3);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    if (puVar4 == (undefined *)0x0) {
      puStack_88 = (undefined *)0x2f2f3a656c6966;
      uStack_80 = 0xe700000000000000;
      func_0x000107c5fb78(uVar2,uVar11);
      func_0x000107c6142c(uVar11);
      uVar3 = uStack_80;
      puVar5 = puStack_88;
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x000107c610f8();
      uVar2 = uVar3;
      func_0x000107c5fadc(puVar5,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c48af4();
      func_0x000107c61170(puVar5);
      if (puVar7 != (undefined *)0x0) {
        puVar4 = PTR_PTR_1126aff28;
        func_0x000107c61168(PTR_PTR_1126aff28);
        func_0x000107c3f1d4();
        func_0x000107c61180();
        lVar8 = lVar10;
        func_0x000107c45214();
        func_0x000107c61180();
        if (lVar8 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar2);
        }
        lVar9 = lVar10;
        func_0x000107c45218(lVar10);
        func_0x000107c61180();
        func_0x000107c5d060(lVar10);
        func_0x000107c61180();
        puVar6 = PTR_PTR_1126aff40;
        func_0x000107c610f8(PTR_PTR_1126aff40);
        func_0x000107c61174(puVar4);
        func_0x000107c46e34(puVar6);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(lVar8);
        puVar5 = PTR_PTR_1126ae558;
        func_0x000107c61168(PTR_PTR_1126ae558);
        func_0x000107c451b0();
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar7);
        goto LAB_101382c40;
      }
    }
    else {
      func_0x000107c61170(puVar4);
      func_0x000107c6142c(uVar11);
    }
    puVar5 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    uVar2 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    uVar3 = 0xd00000000000004d;
    func_0x000107c5fadc(0xd00000000000004d,0x800000010ef39870);
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    puVar6 = puVar7;
    func_0x000107c5ed2c(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c451ac(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = param_1;
  }
LAB_101382c40:
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  func_0x000107c60e78();
  return puVar6;
}



/* Entry: 101385660; end: 1013856ab;  */

void FUN_101385660(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1013856ac; end: 1013856bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013856ac(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d76c20);
    *(undefined8 *)(lVar1 + _DAT_112d76c20) = 0;
    func_0x000107c61170();
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 1013856bc; end: 1013856e7;  */

void FUN_1013856bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013856e8; end: 1013858ab;  */

ulong FUN_1013856e8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013857cc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013857d0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b0cb8;
    func_0x000107c61168(PTR_PTR_1126b0cb8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126b0cb8;
    func_0x000107c61168(PTR_PTR_1126b0cb8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1013859f4(0,0x112d76778,&PTR_PTR_1126b0cb8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013858ac);
  (*pcVar2)();
}



/* Entry: 1013858ac; end: 1013858cf;  */

void FUN_1013858ac(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100b60084(&uStack_18);
  return;
}



/* Entry: 1013858d0; end: 1013858ef;  */

void FUN_1013858d0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1013858f0; end: 1013858fb;  */

void FUN_1013858f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_1103a94d8;
  func_0x000107c613fc(&UNK_1103a94d8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = uVar1;
  *(undefined8 *)(puVar2 + 0x28) = uVar3;
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c6157c(uVar1);
  FUN_1013806d4(param_1,param_2,FUN_10138591c,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1013858fc; end: 10138591b;  */

void FUN_1013858fc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10138591c; end: 101385933;  */

void FUN_10138591c(undefined *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if ((param_2 == 0) && (param_1 != (undefined *)0x0)) {
    puStack_50 = param_1;
    func_0x000107c61174();
    func_0x000100b60084(&puStack_50);
  }
  else {
    uVar4 = 0xe000000000000000;
    puStack_50 = (undefined *)0x0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c602fc(0x5a);
    func_0x000107c5fb78(0xd00000000000004d,0x800000010ef39ae0);
    func_0x000107c5ee24(0,uVar3,uVar1);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar3);
    func_0x000107c5fb78(0x3a726f727265202c,0xe900000000000020);
    if (param_2 != 0) {
      func_0x000107c614cc(param_2,auStack_58,auStack_70);
      func_0x000107c60640(uStack_68,uStack_60);
      uVar4 = uStack_60;
    }
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    uVar3 = uStack_48;
    puVar2 = puStack_50;
    uVar1 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    func_0x000107c5fadc(puVar2,uVar3);
    param_1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c6142c(uVar3);
    func_0x00010488ade0(param_1);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101385934; end: 1013859f3;  */

undefined1  [16] FUN_101385934(ulong *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  puVar3 = param_1;
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar1 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar1);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = unaff_x20;
    return auVar5;
  }
  func_0x000107c60e78();
  auVar6._0_8_ = *param_2;
  if (auVar6._0_8_ != 0) {
    auVar6._8_8_ = 0;
    return auVar6;
  }
  uVar2 = *puVar3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = uVar2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar2;
  return auVar7;
}



/* Entry: 1013859f4; end: 101385a77;  */

void FUN_1013859f4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101385a78; end: 101385be7;  */

void FUN_101385a78(long param_1,long param_2)

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



/* Entry: 101385be8; end: 101385bf3; -[SCUseTemplateFlowFeatureEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385be8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76cf0;
  func_0x000107c61428(param_1 + _DAT_112d76cf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101385bf4; end: 101385bff; -[SCUseTemplateFlowFeatureEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76cf0;
  func_0x000107c61428(param_1 + _DAT_112d76cf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101385c00; end: 101385c0b; -[SCUseTemplateFlowFeatureEntryPoint memoriesPickerV2ScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385c00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76cf8;
  func_0x000107c61428(param_1 + _DAT_112d76cf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101385c0c; end: 101385c17; -[SCUseTemplateFlowFeatureEntryPoint setMemoriesPickerV2ScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76cf8;
  func_0x000107c61428(param_1 + _DAT_112d76cf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101385c18; end: 101385c23; -[SCUseTemplateFlowFeatureEntryPoint snapDocPlaybackCapabilitiesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385c18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76d00;
  func_0x000107c61428(param_1 + _DAT_112d76d00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101385c24; end: 101385c2f; -[SCUseTemplateFlowFeatureEntryPoint setSnapDocPlaybackCapabilitiesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76d00;
  func_0x000107c61428(param_1 + _DAT_112d76d00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101385c30; end: 101385c3b; -[SCUseTemplateFlowFeatureEntryPoint templateServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385c30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76d08;
  func_0x000107c61428(param_1 + _DAT_112d76d08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101385c3c; end: 101385c47; -[SCUseTemplateFlowFeatureEntryPoint setTemplateServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76d08;
  func_0x000107c61428(param_1 + _DAT_112d76d08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101385c48; end: 101385c53; -[SCUseTemplateFlowFeatureEntryPoint temporaryFileWriterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385c48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76d10;
  func_0x000107c61428(param_1 + _DAT_112d76d10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101385c54; end: 101385c5f; -[SCUseTemplateFlowFeatureEntryPoint setTemporaryFileWriterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76d10;
  func_0x000107c61428(param_1 + _DAT_112d76d10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101385c60; end: 101385c6b; -[SCUseTemplateFlowFeatureEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385c60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76d18;
  func_0x000107c61428(param_1 + _DAT_112d76d18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101385c6c; end: 101385c77; -[SCUseTemplateFlowFeatureEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76d18;
  func_0x000107c61428(param_1 + _DAT_112d76d18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101385c78; end: 101385c83; -[SCUseTemplateFlowFeatureEntryPoint taskManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385c78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76d20;
  func_0x000107c61428(param_1 + _DAT_112d76d20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101385c84; end: 101385c8f; -[SCUseTemplateFlowFeatureEntryPoint setTaskManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76d20;
  func_0x000107c61428(param_1 + _DAT_112d76d20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101385c90; end: 101385c9b; -[SCUseTemplateFlowFeatureEntryPoint composerNetworkingBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385c90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76d28;
  func_0x000107c61428(param_1 + _DAT_112d76d28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101385c9c; end: 101385ca7; -[SCUseTemplateFlowFeatureEntryPoint setComposerNetworkingBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76d28;
  func_0x000107c61428(param_1 + _DAT_112d76d28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101385ca8; end: 101385cb3; -[SCUseTemplateFlowFeatureEntryPoint progressOverlayScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385ca8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76d30;
  func_0x000107c61428(param_1 + _DAT_112d76d30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101385cb4; end: 101385cbf; -[SCUseTemplateFlowFeatureEntryPoint setProgressOverlayScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385cb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76d30;
  func_0x000107c61428(param_1 + _DAT_112d76d30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101385cc0; end: 101385ccb; -[SCUseTemplateFlowFeatureEntryPoint mediaVideoImportServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385cc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76d38;
  func_0x000107c61428(param_1 + _DAT_112d76d38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101385ccc; end: 101385cd7; -[SCUseTemplateFlowFeatureEntryPoint setMediaVideoImportServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385ccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76d38;
  func_0x000107c61428(param_1 + _DAT_112d76d38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101385cd8; end: 101385ce3; -[SCUseTemplateFlowFeatureEntryPoint memoriesPreviewPresenterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385cd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76d40;
  func_0x000107c61428(param_1 + _DAT_112d76d40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101385ce4; end: 101385cef; -[SCUseTemplateFlowFeatureEntryPoint setMemoriesPreviewPresenterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76d40;
  func_0x000107c61428(param_1 + _DAT_112d76d40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101385cf0; end: 101385cfb; -[SCUseTemplateFlowFeatureEntryPoint snapDocEditorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385cf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76d48;
  func_0x000107c61428(param_1 + _DAT_112d76d48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101385cfc; end: 101385d07; -[SCUseTemplateFlowFeatureEntryPoint setSnapDocEditorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76d48;
  func_0x000107c61428(param_1 + _DAT_112d76d48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101385d08; end: 101385d13; -[SCUseTemplateFlowFeatureEntryPoint memoriesSnapDocDownloadingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385d08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76d50;
  func_0x000107c61428(param_1 + _DAT_112d76d50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101385d14; end: 101385d57;  */

void FUN_101385d14(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101385d58; end: 101385d63; -[SCUseTemplateFlowFeatureEntryPoint setMemoriesSnapDocDownloadingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76d50;
  func_0x000107c61428(param_1 + _DAT_112d76d50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101385d64; end: 101385db7;  */

void FUN_101385d64(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101385db8; end: 101385dff; -[SCUseTemplateFlowFeatureEntryPoint memoriesPickerV2ScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385db8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76d58;
  func_0x000107c61428(param_1 + _DAT_112d76d58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101385e00; end: 101385e0b; -[SCUseTemplateFlowFeatureEntryPoint setMemoriesPickerV2ScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76d58;
  func_0x000107c61428(param_1 + _DAT_112d76d58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101385e0c; end: 101385e53; -[SCUseTemplateFlowFeatureEntryPoint progressOverlayScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385e0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76d60;
  func_0x000107c61428(param_1 + _DAT_112d76d60,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101385e54; end: 101385e5f; -[SCUseTemplateFlowFeatureEntryPoint setProgressOverlayScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385e54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76d60;
  func_0x000107c61428(param_1 + _DAT_112d76d60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101385e60; end: 101385ebf;  */

void FUN_101385e60(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101385ec0; end: 10138684b;  */

/* WARNING: Possible PIC construction at 0x00010138619c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013863dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101386420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101386430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101386440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101386450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101386460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101386470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101386480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101386490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013864a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013864c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013867cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013867dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013867ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013867fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138680c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138681c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138675c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138676c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138677c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138678c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138679c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013867ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013866fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138670c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138671c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138672c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138673c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138674c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013866ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013866bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013866cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013866dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013866ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138665c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138666c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138667c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138668c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138660c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138661c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138662c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138663c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013865cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013865dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013865ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013865fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138659c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013865ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013865bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138656c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138657c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138654c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138651c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138652c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138650c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101386530) */
/* WARNING: Removing unreachable block (ram,0x000101386520) */
/* WARNING: Removing unreachable block (ram,0x000101386550) */
/* WARNING: Removing unreachable block (ram,0x000101386540) */
/* WARNING: Removing unreachable block (ram,0x000101386580) */
/* WARNING: Removing unreachable block (ram,0x000101386570) */
/* WARNING: Removing unreachable block (ram,0x0001013865c0) */
/* WARNING: Removing unreachable block (ram,0x0001013865b0) */
/* WARNING: Removing unreachable block (ram,0x0001013865a0) */
/* WARNING: Removing unreachable block (ram,0x000101386600) */
/* WARNING: Removing unreachable block (ram,0x0001013865f0) */
/* WARNING: Removing unreachable block (ram,0x0001013865e0) */
/* WARNING: Removing unreachable block (ram,0x0001013865d0) */
/* WARNING: Removing unreachable block (ram,0x000101386640) */
/* WARNING: Removing unreachable block (ram,0x000101386630) */
/* WARNING: Removing unreachable block (ram,0x000101386620) */
/* WARNING: Removing unreachable block (ram,0x000101386610) */
/* WARNING: Removing unreachable block (ram,0x000101386690) */
/* WARNING: Removing unreachable block (ram,0x000101386680) */
/* WARNING: Removing unreachable block (ram,0x000101386670) */
/* WARNING: Removing unreachable block (ram,0x000101386660) */
/* WARNING: Removing unreachable block (ram,0x0001013866f0) */
/* WARNING: Removing unreachable block (ram,0x0001013866e0) */
/* WARNING: Removing unreachable block (ram,0x0001013866d0) */
/* WARNING: Removing unreachable block (ram,0x0001013866c0) */
/* WARNING: Removing unreachable block (ram,0x0001013866b0) */
/* WARNING: Removing unreachable block (ram,0x000101386750) */
/* WARNING: Removing unreachable block (ram,0x000101386740) */
/* WARNING: Removing unreachable block (ram,0x000101386730) */
/* WARNING: Removing unreachable block (ram,0x000101386720) */
/* WARNING: Removing unreachable block (ram,0x000101386710) */
/* WARNING: Removing unreachable block (ram,0x000101386700) */
/* WARNING: Removing unreachable block (ram,0x0001013867b0) */
/* WARNING: Removing unreachable block (ram,0x0001013867a0) */
/* WARNING: Removing unreachable block (ram,0x000101386790) */
/* WARNING: Removing unreachable block (ram,0x000101386780) */
/* WARNING: Removing unreachable block (ram,0x000101386770) */
/* WARNING: Removing unreachable block (ram,0x000101386760) */
/* WARNING: Removing unreachable block (ram,0x000101386820) */
/* WARNING: Removing unreachable block (ram,0x000101386810) */
/* WARNING: Removing unreachable block (ram,0x000101386800) */
/* WARNING: Removing unreachable block (ram,0x0001013867f0) */
/* WARNING: Removing unreachable block (ram,0x0001013867e0) */
/* WARNING: Removing unreachable block (ram,0x0001013867d0) */
/* WARNING: Removing unreachable block (ram,0x0001013864a4) */
/* WARNING: Removing unreachable block (ram,0x000101386494) */
/* WARNING: Removing unreachable block (ram,0x000101386484) */
/* WARNING: Removing unreachable block (ram,0x000101386474) */
/* WARNING: Removing unreachable block (ram,0x000101386464) */
/* WARNING: Removing unreachable block (ram,0x000101386454) */
/* WARNING: Removing unreachable block (ram,0x000101386444) */
/* WARNING: Removing unreachable block (ram,0x000101386434) */
/* WARNING: Removing unreachable block (ram,0x000101386424) */
/* WARNING: Removing unreachable block (ram,0x0001013863e0) */
/* WARNING: Removing unreachable block (ram,0x0001013861a0) */
/* WARNING: Removing unreachable block (ram,0x000101386510) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101385ec0(void)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_f0 [16];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  char *pcStack_c0;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  pcVar3 = (char *)unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (pcVar3 != (char *)0x0) {
    lVar5 = unaff_x20;
    func_0x000107c4cc24();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c4cc2c();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(pcVar3);
        pcVar3 = (char *)lVar5;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c5b1e0();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(pcVar3);
          pcVar3 = (char *)lVar5;
        }
        else {
          lVar4 = unaff_x20;
          func_0x000107c5c7ec();
          func_0x000107c61180();
          if (lVar4 != 0) {
            lVar4 = unaff_x20;
            func_0x000107c5c804();
            func_0x000107c61180();
            if (lVar4 != 0) {
              lVar4 = unaff_x20;
              func_0x000107c3ff88();
              func_0x000107c61180();
              if (lVar4 == 0) {
                func_0x000107c61170(pcVar3);
                pcVar3 = (char *)lVar5;
              }
              else {
                lVar4 = unaff_x20;
                func_0x000107c5c78c();
                func_0x000107c61180();
                if (lVar4 == 0) {
                  func_0x000107c61170(pcVar3);
                  pcVar3 = (char *)lVar5;
                }
                else {
                  lVar4 = unaff_x20;
                  func_0x000107c3ffd0();
                  func_0x000107c61180();
                  if (lVar4 != 0) {
                    lVar4 = unaff_x20;
                    func_0x000107c4f3f8();
                    func_0x000107c61180();
                    if (lVar4 != 0) {
                      lVar4 = unaff_x20;
                      func_0x000107c4f400();
                      func_0x000107c61180();
                      if (lVar4 == 0) {
                        func_0x000107c61170(pcVar3);
                        pcVar3 = (char *)lVar5;
                      }
                      else {
                        lVar4 = unaff_x20;
                        func_0x000107c4ca78();
                        func_0x000107c61180();
                        if (lVar4 == 0) {
                          func_0x000107c61170(pcVar3);
                          pcVar3 = (char *)lVar5;
                        }
                        else {
                          lVar4 = unaff_x20;
                          func_0x000107c4cc38();
                          func_0x000107c61180();
                          if (lVar4 != 0) {
                            lVar4 = unaff_x20;
                            func_0x000107c5b1bc();
                            func_0x000107c61180();
                            if (lVar4 != 0) {
                              func_0x000107c4cc90();
                              func_0x000107c61180();
                              if (unaff_x20 == 0) {
                                func_0x000107c61170(pcVar3);
                                pcVar3 = (char *)lVar5;
                              }
                              else {
                                lVar5 = 0;
                                FUN_10138509c();
                                lStack_c8 = lVar5;
                                func_0x000107c610f8();
                                puVar1 = (undefined8 *)(lVar5 + _DAT_112d76bd8);
                                *puVar1 = 0xd000000000000018;
                                puVar1[1] = 0x800000010ef11a10;
                                puVar1 = (undefined8 *)(lVar5 + _DAT_112d76be0);
                                *puVar1 = 0xd00000000000002f;
                                puVar1[1] = 0x800000010ef39680;
                                puVar1 = (undefined8 *)(lVar5 + _DAT_112d76be8);
                                *puVar1 = 0x706d65547465472f;
                                puVar1[1] = 0xed0000736574616c;
                                uStack_d8 = _DAT_112d76bf0;
                                pcStack_c0 = "etools.template.TemplateService";
                                lStack_d0 = lVar5;
                                (**(code **)(lVar7 + 0x68))
                                          (auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                                           *(undefined4 *)
                                            PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
                                           ,lVar2);
                                puVar6 = PTR_PTR_1126ae790;
                                func_0x000107c610f8();
                                lVar2 = -0x2fffffffffffffe4;
                                puStack_e0 = puVar6;
                                func_0x000107c5fadc(0xd00000000000001c,
                                                    (ulong)pcStack_c0 | 0x8000000000000000);
                                pcStack_c0 = (char *)lVar2;
                                func_0x000107c5f800();
                                func_0x000107c470d0();
                                pcVar3 = pcStack_c0;
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
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
    return;
  }
  return;
}



/* Entry: 10138684c; end: 101386853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10138684c(ulong *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  uVar11 = *param_1;
  uVar5 = param_1[1];
  puVar10 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar10,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if ((char)uVar5 == '\x01') {
      lVar3 = lVar2;
      func_0x00010518dd7c();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10137fefc);
        (*pcVar1)();
      }
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      pcVar6 = "presentErrorMessage(message:)";
      func_0x0001000c10c0("presentErrorMessage(message:)");
      func_0x000107c61180();
      puVar7 = &UNK_1103a89a8;
      func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,lVar2);
      puVar8 = &UNK_1103a9280;
      func_0x000107c613fc(&UNK_1103a9280,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(long *)(puVar8 + 0x18) = lVar4;
      *(undefined1 **)(puVar8 + 0x20) = puVar10;
      uStack_68 = 0x101385bd8;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1103a9298;
      ppuVar9 = &puStack_88;
      puStack_60 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar7 = puStack_60;
      func_0x000107c61434(puVar10);
      func_0x000107c61574(puVar7);
      func_0x000107c4e524(pcVar6);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c6142c(puVar10);
      func_0x000107c61170(lVar2);
    }
    else {
      uVar5 = uVar11;
      func_0x000101380010();
      if ((uVar5 & 1) != 0) {
        uVar12 = *(undefined8 *)(lVar2 + _DAT_112d76bf8);
        *(ulong *)(lVar2 + _DAT_112d76bf8) = uVar11;
        func_0x000107c61174(uVar11);
        func_0x000107c61170(uVar12);
        func_0x000101380138(uVar11);
        func_0x000107c61170(lVar2);
        return;
      }
      func_0x00010518dd64();
      func_0x000107c61180();
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10137ff00);
        (*pcVar1)();
      }
      uVar11 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      pcVar6 = "presentErrorMessage(message:)";
      func_0x0001000c10c0("presentErrorMessage(message:)");
      func_0x000107c61180();
      puVar7 = &UNK_1103a89a8;
      func_0x000107c613fc(&UNK_1103a89a8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,lVar2);
      puVar8 = &UNK_1103a92d0;
      func_0x000107c613fc(&UNK_1103a92d0,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(ulong *)(puVar8 + 0x18) = uVar11;
      *(undefined1 **)(puVar8 + 0x20) = puVar10;
      uStack_68 = 0x101385bdc;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1103a92e8;
      ppuVar9 = &puStack_88;
      puStack_60 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar7 = puStack_60;
      func_0x000107c61434(puVar10);
      func_0x000107c61574(puVar7);
      func_0x000107c4e524(pcVar6);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(lVar2);
      func_0x000107c6142c(puVar10);
    }
    func_0x000107c615e8(pcVar6);
  }
  return;
}



/* Entry: 101386854; end: 10138687b; -[SCUseTemplateFlowFeatureEntryPoint begin] */

void FUN_101386854(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101385ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10138687c; end: 1013868bf; -[SCUseTemplateFlowFeatureEntryPoint end] */

void FUN_10138687c(undefined8 param_1)

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



/* Entry: 1013868c0; end: 101386fe3;  */

void FUN_1013868c0(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd00000000000001d;
    if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef10e5620)) ||
       (func_0x000107c605b8(0xd00000000000001d,0x800000010ef1a9e0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c565a0();
    }
    else {
      uVar2 = 0xd000000000000023;
      if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef10c64d0)) ||
         (func_0x000107c605b8(0xd000000000000023,0x800000010ef39b30,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59374();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10c6ce0)) ||
           (func_0x000107c605b8(0xd000000000000010,0x800000010ef39320,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59c4c();
        }
        else {
          uVar2 = 0xd00000000000001b;
          if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10df490)) ||
             (func_0x000107c605b8(0xd00000000000001b,0x800000010ef20b70,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c59c58();
          }
          else {
            if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10e63d0)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10edd20)) {
                  uVar2 = 0;
                  func_0x000107c605b8(0xd000000000000016,0x800000010ef122e0,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0;
                    if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10e6390)) ||
                       (func_0x000107c605b8(0xd000000000000020,0x800000010ef19c70,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c536a8();
                    }
                    else {
                      uVar2 = 0;
                      if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10c64a0)) ||
                         (func_0x000107c605b8(0xd00000000000001c,0x800000010ef39b60,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c5792c();
                      }
                      else {
                        uVar2 = 0;
                        if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10d7140))
                           || (func_0x000107c605b8(0xd000000000000018,0x800000010ef28ec0,param_2,
                                                   param_3,0), (uVar2 & 1) != 0)) {
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c564a8();
                        }
                        else {
                          if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef10c6480))
                          {
                            uVar2 = 0;
                            func_0x000107c605b8(0xd000000000000020,0x800000010ef39b80,param_2,
                                                param_3,0);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = 0xd000000000000015;
                              if (((param_2 == -0x2fffffffffffffeb) &&
                                  (param_3 == -0x7ffffffef10e2010)) ||
                                 (func_0x000107c605b8(0xd000000000000015,0x800000010ef1dff0,param_2,
                                                      param_3,0), (uVar2 & 1) != 0)) {
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c5935c();
                              }
                              else {
                                uVar2 = 0;
                                if (((param_2 == -0x2fffffffffffffde) &&
                                    (param_3 == -0x7ffffffef10c6450)) ||
                                   (func_0x000107c605b8(0xd000000000000022,0x800000010ef39bb0,
                                                        param_2,param_3,0), (uVar2 & 1) != 0)) {
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c565d0();
                                }
                                else {
                                  if ((param_2 != -0x2fffffffffffffe4) ||
                                     (param_3 != -0x7ffffffef10e5600)) {
                                    uVar2 = 0;
                                    func_0x000107c605b8(0xd00000000000001c,0x800000010ef1aa00,
                                                        param_2,param_3,0);
                                    if ((uVar2 & 1) == 0) {
                                      if ((param_2 != -0x2fffffffffffffe5) ||
                                         (param_3 != -0x7ffffffef10c6420)) {
                                        uVar2 = 0xd00000000000001b;
                                        func_0x000107c605b8(0xd00000000000001b,0x800000010ef39be0,
                                                            param_2,param_3,0);
                                        if ((uVar2 & 1) == 0) {
                                          func_0x000107c602fc(0x15);
                                          func_0x000107c6142c(0xe000000000000000);
                                          func_0x000107c5fb78(param_2,param_3);
                                          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013
                                                              ,0x800000010ef0fc20,
                                                                                                                            
                                                  "UseTemplateFlowFeature/SCUseTemplateFlowFeatureEntryPoint.swift"
                                                  ,0x3f,2,0x79,0);
                    /* WARNING: Does not return */
                                          pcVar1 = (code *)SoftwareBreakpoint(1,0x101386fe4);
                                          (*pcVar1)();
                                        }
                                      }
                                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                      func_0x000107c605b0();
                                      func_0x000107c57924();
                                      goto LAB_101386950;
                                    }
                                  }
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c56598();
                                }
                              }
                              goto LAB_101386950;
                            }
                          }
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c565a4();
                        }
                      }
                    }
                    goto LAB_101386950;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c59c2c();
                goto LAB_101386950;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c53680();
          }
        }
      }
    }
  }
LAB_101386950:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101386fe4; end: 10138708f; -[SCUseTemplateFlowFeatureEntryPoint setValue:forIvarName:] */

void FUN_101386fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1013868c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101387090; end: 1013871f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101387090(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d76cf0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76cf8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76d00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76d08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76d10,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76d18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76d20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76d28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76d30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76d38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76d40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76d48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d76d50,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d76d58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d76d60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d76d68) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013871f8; end: 101387217; -[SCUseTemplateFlowFeatureEntryPoint init] */

void FUN_1013871f8(void)

{
  FUN_101387090();
  return;
}



/* Entry: 101387218; end: 10138724b;  */

void FUN_101387218(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10138724c; end: 101387363; -[SCUseTemplateFlowFeatureEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101387338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010138733c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10138724c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d76cf0);
  func_0x000107c61610(param_1 + _DAT_112d76cf8);
  func_0x000107c61610(param_1 + _DAT_112d76d00);
  func_0x000107c61610(param_1 + _DAT_112d76d08);
  func_0x000107c61610(param_1 + _DAT_112d76d10);
  func_0x000107c61610(param_1 + _DAT_112d76d18);
  func_0x000107c61610(param_1 + _DAT_112d76d20);
  func_0x000107c61610(param_1 + _DAT_112d76d28);
  func_0x000107c61610(param_1 + _DAT_112d76d30);
  func_0x000107c61610(param_1 + _DAT_112d76d38);
  func_0x000107c61610(param_1 + _DAT_112d76d40);
  func_0x000107c61610(param_1 + _DAT_112d76d48);
  func_0x000107c61610(param_1 + _DAT_112d76d50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d76d58));
  return;
}



/* Entry: 101387364; end: 101387383;  */

void FUN_101387364(void)

{
  func_0x000107c61168(&PTR_PTR_1127cc5e0);
  return;
}



/* Entry: 101387384; end: 101387547;  */

void FUN_101387384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 101387548; end: 101387583;  */

void FUN_101387548(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101387584; end: 1013875d3;  */

void FUN_101387584(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c4e9e4(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001013873d4();
  func_0x000107c4fba8(uVar1,param_2,uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 1013875d4; end: 1013875db;  */

undefined8 FUN_1013875d4(void)

{
  return 0;
}



/* Entry: 1013875dc; end: 101387697;  */

void FUN_1013875dc(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      func_0x000107c61174();
      lVar1 = param_1;
      func_0x000107c4d508();
      func_0x000107c61180();
      if (lVar1 == 0) {
        func_0x000107c61574(param_2);
      }
      else {
        func_0x000107c3dcdc(param_1);
        FUN_1013876dc(lVar1);
        func_0x000107c61574(param_2);
        func_0x000107c61170(param_1);
        param_1 = lVar1;
      }
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 101387698; end: 1013876b7;  */

void FUN_101387698(void)

{
  func_0x000107c61168(&PTR_PTR_112d76dd8);
  return;
}



/* Entry: 1013876b8; end: 1013876db;  */

void FUN_1013876b8(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574(lVar1);
    }
    else {
      func_0x000107c61174();
      lVar2 = param_1;
      func_0x000107c4d508();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61574(lVar1);
      }
      else {
        func_0x000107c3dcdc(param_1);
        FUN_1013876dc(lVar2);
        func_0x000107c61574(lVar1);
        func_0x000107c61170(param_1);
        param_1 = lVar2;
      }
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1013876dc; end: 10138777b;  */

/* WARNING: Possible PIC construction at 0x000101387708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101387758: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010138770c) */
/* WARNING: Removing unreachable block (ram,0x00010138775c) */

void FUN_1013876dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    puVar1 = PTR_PTR_1126aead0;
    func_0x000107c610f8(PTR_PTR_1126aead0);
    func_0x000107c47994();
    func_0x000107c3edc0(uVar3,param_2,puVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10138777c; end: 101387787; -[SCThirdPartyLoginSettingsRowEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10138777c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76e50;
  func_0x000107c61428(param_1 + _DAT_112d76e50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101387788; end: 101387793; -[SCThirdPartyLoginSettingsRowEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101387788(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76e50;
  func_0x000107c61428(param_1 + _DAT_112d76e50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101387794; end: 10138779f; -[SCThirdPartyLoginSettingsRowEntryPoint adConfigService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101387794(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76e58;
  func_0x000107c61428(param_1 + _DAT_112d76e58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013877a0; end: 1013877ab; -[SCThirdPartyLoginSettingsRowEntryPoint setAdConfigService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013877a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76e58;
  func_0x000107c61428(param_1 + _DAT_112d76e58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013877ac; end: 1013877b7; -[SCThirdPartyLoginSettingsRowEntryPoint thirdPartyLoginScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013877ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76e60;
  func_0x000107c61428(param_1 + _DAT_112d76e60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013877b8; end: 1013877fb;  */

void FUN_1013877b8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1013877fc; end: 101387807; -[SCThirdPartyLoginSettingsRowEntryPoint setThirdPartyLoginScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013877fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76e60;
  func_0x000107c61428(param_1 + _DAT_112d76e60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101387808; end: 10138785b;  */

void FUN_101387808(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10138785c; end: 1013878a3; -[SCThirdPartyLoginSettingsRowEntryPoint thirdPartyLoginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10138785c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76e68;
  func_0x000107c61428(param_1 + _DAT_112d76e68,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1013878a4; end: 101387907; -[SCThirdPartyLoginSettingsRowEntryPoint setThirdPartyLoginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013878a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76e68;
  func_0x000107c61428(param_1 + _DAT_112d76e68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101387908; end: 101387ab3;  */

/* WARNING: Possible PIC construction at 0x000101387a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101387a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101387a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101387a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101387a7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101387a90) */
/* WARNING: Removing unreachable block (ram,0x000101387a28) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101387a18) */
/* WARNING: Removing unreachable block (ram,0x000101387a08) */
/* WARNING: Removing unreachable block (ram,0x000101387a80) */

void FUN_101387908(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3d294();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5c8f0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5c8e8();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar4 = 0;
        FUN_101387698();
        func_0x000107c613fc();
        *(long *)(lVar4 + 0x10) = lVar1;
        *(long *)(lVar4 + 0x18) = lVar2;
        *(long *)(lVar4 + 0x20) = lVar3;
        *(long *)(lVar4 + 0x28) = unaff_x20;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c61174(unaff_x20);
        func_0x000107c4e9e4(lVar1);
        func_0x000107c61180();
        func_0x0001013873d4();
        func_0x000107c4fba8(lVar1);
        lVar1 = unaff_x20;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 101387ab4; end: 101387adb; -[SCThirdPartyLoginSettingsRowEntryPoint begin] */

void FUN_101387ab4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101387908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101387adc; end: 101387b1f; -[SCThirdPartyLoginSettingsRowEntryPoint end] */

void FUN_101387adc(undefined8 param_1)

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



/* Entry: 101387b20; end: 101387d9b;  */

void FUN_101387b20(long param_1,long param_2,long param_3)

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
    uVar2 = 0x6769666e6f436461;
    if (((param_2 == 0x6769666e6f436461) && (param_3 == -0x109a9c96898d9aad)) ||
       (func_0x000107c605b8(0x6769666e6f436461,0xef65636976726553,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c522b0();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10c63c0)) ||
         (func_0x000107c605b8(0xd00000000000001c,0x800000010ef39c40,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59ccc();
      }
      else {
        if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10c63a0)) {
          uVar2 = 0xd00000000000001b;
          func_0x000107c605b8(0xd00000000000001b,0x800000010ef39c60,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SCThirdPartyLoginSettingsRow/SCThirdPartyLoginSettingsRowEntryPoint.swift"
                                ,0x49,2,0x32,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101387d9c);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59cc4();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101387d9c; end: 101387e47; -[SCThirdPartyLoginSettingsRowEntryPoint setValue:forIvarName:] */

void FUN_101387d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101387b20(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101387e48; end: 101387edb; -[SCThirdPartyLoginSettingsRowEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101387e48(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d76e50,0);
  func_0x000107c61614(param_1 + _DAT_112d76e58,0);
  func_0x000107c61614(param_1 + _DAT_112d76e60,0);
  *(undefined8 *)(param_1 + _DAT_112d76e68) = 0;
  *(undefined8 *)(param_1 + _DAT_112d76e70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101387edc; end: 101387f0f;  */

void FUN_101387edc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101387f10; end: 101387f77; -[SCThirdPartyLoginSettingsRowEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101387f10(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d76e50);
  func_0x000107c61610(param_1 + _DAT_112d76e58);
  func_0x000107c61610(param_1 + _DAT_112d76e60);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d76e68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d76e70));
  return;
}



/* Entry: 101387f78; end: 101387f97;  */

void FUN_101387f78(void)

{
  func_0x000107c61168(&PTR_PTR_1127cc710);
  return;
}



/* Entry: 101387f98; end: 101387fef;  */

void FUN_101387f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



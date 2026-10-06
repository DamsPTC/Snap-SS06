/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103819694; end: 1038196e7;  */

void FUN_103819694(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_103819728(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038196e8; end: 103819727;  */

void FUN_1038196e8(void)

{
  FUN_1038192d4();
  return;
}



/* Entry: 103819728; end: 103819747;  */

void FUN_103819728(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103819748; end: 10381978f; -[_TtC16ARBarIntegration12ARBarAdapter arBarBottomUIArbitrator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103819748(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f9f290;
  func_0x000107c61428(param_1 + _DAT_112f9f290,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103819790; end: 10381980f; -[_TtC16ARBarIntegration12ARBarAdapter setArBarBottomUIArbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103819790(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9f290;
  func_0x000107c61428(param_1 + _DAT_112f9f290,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103819810();
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103819810; end: 10381990f;  */

/* WARNING: Possible PIC construction at 0x0001038198cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038198d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103819810(void)

{
  char *pcVar1;
  long *plVar2;
  undefined *puVar3;
  long unaff_x20;
  
  if ((*(long *)(unaff_x20 + _DAT_112f9f298) == 0) &&
     (*(char *)(unaff_x20 + _DAT_112f9f2a0) == '\x01')) {
    pcVar1 = "arBarBottomUIArbitrator";
    func_0x0001000c10c0();
    func_0x000107c61180();
    plVar2 = (long *)pcVar1;
    func_0x000100471e0c(*(undefined8 *)(unaff_x20 + _DAT_112f9f2a8));
    puVar3 = &UNK_11069a270;
    func_0x000107c613fc(&UNK_11069a270,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    (**(code **)(*plVar2 + 0x60))(0x10381a120,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar1);
    return;
  }
  return;
}



/* Entry: 103819910; end: 10381991f;  */

undefined8 FUN_103819910(void)

{
  return 0;
}



/* Entry: 103819920; end: 103819a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103819920(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f9f290;
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + _DAT_112f9f290,auStack_60,0,0);
    lVar1 = param_2 + lVar1;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      func_0x0001000d224c(&lStack_68);
      if (lStack_68 != 0) {
        func_0x000107c499a8(lStack_68);
        func_0x000107c615e8(lStack_68);
      }
      func_0x000107c50440(lVar1);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 103819a04; end: 103819a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103819a04(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112f9f290;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_112f9f290,auStack_60,0,0);
    lVar2 = lVar1 + lVar2;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      func_0x0001000d224c(&lStack_68);
      if (lStack_68 != 0) {
        func_0x000107c499a8(lStack_68);
        func_0x000107c615e8(lStack_68);
      }
      func_0x000107c50440(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 103819a0c; end: 103819a6b; -[_TtC16ARBarIntegration12ARBarAdapter init] */

void FUN_103819a0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.ARBarAdapter",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103819a38);
  (*pcVar1)();
}



/* Entry: 103819a6c; end: 103819b0b; -[_TtC16ARBarIntegration12ARBarAdapter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103819a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103819ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103819ae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103819abc) */
/* WARNING: Removing unreachable block (ram,0x000103819a9c) */
/* WARNING: Removing unreachable block (ram,0x000103819ae4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103819a6c(long param_1)

{
  FUN_10381a098(param_1 + _DAT_112f9f290);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f9f2d8));
  return;
}



/* Entry: 103819b0c; end: 103819c17;  */

/* WARNING: Possible PIC construction at 0x000103819bc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103819bc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103819b0c(void)

{
  char *pcVar1;
  long *plVar2;
  undefined *puVar3;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + _DAT_112f9f2a0) & 1) != 0) {
    return;
  }
  pcVar1 = "activate()";
  func_0x0001000c10c0();
  func_0x000107c61180();
  plVar2 = (long *)pcVar1;
  func_0x000100471e0c(*(undefined8 *)(unaff_x20 + _DAT_112f9f2a8));
  puVar3 = &UNK_11069a270;
  func_0x000107c613fc(&UNK_11069a270,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  (**(code **)(*plVar2 + 0x60))(FUN_10381a11c,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar1);
  return;
}



/* Entry: 103819c18; end: 103819c3f; -[_TtC16ARBarIntegration12ARBarAdapter activate] */

void FUN_103819c18(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103819b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103819c40; end: 103819c43; -[_TtC16ARBarIntegration12ARBarAdapter configureWithView:] */

void FUN_103819c40(void)

{
  return;
}



/* Entry: 103819c44; end: 103819c47; -[_TtC16ARBarIntegration12ARBarAdapter resetMetrics] */

void FUN_103819c44(void)

{
  return;
}



/* Entry: 103819c48; end: 103819c9f; -[_TtC16ARBarIntegration12ARBarAdapter usageMetrics] */

void FUN_103819c48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar2 = puVar1;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103819ca0; end: 103819cf7; -[_TtC16ARBarIntegration12ARBarAdapter setCameraUIVisible:animated:isFromRootArbitrator:arBarBottomUIArbitrator:] */

void FUN_103819ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  FUN_10381a004(param_3);
  func_0x000107c615e8(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103819cf8; end: 103819dc7; -[_TtC16ARBarIntegration12ARBarAdapter shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103819cf8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auStack_78 [24];
  long lStack_60;
  long lStack_58;
  
  FUN_10381a0d4(param_3 + _DAT_112f9f2b8,auStack_78,0x112f9f2c0,&UNK_10dc14850);
  if (lStack_60 == 0) {
    func_0x0001007b7c40(auStack_78);
    uVar1 = 0;
  }
  else {
    func_0x0001000a8868(auStack_78,lStack_60);
    pcVar2 = *(code **)(lStack_58 + 8);
    func_0x000107c61174(param_3);
    (*pcVar2)(param_1,param_2,lStack_60,lStack_58);
    uVar1 = (uint)lStack_60;
    func_0x000107c61170(param_3);
    func_0x0001000834e4(auStack_78);
  }
  return uVar1 & 1;
}



/* Entry: 103819dc8; end: 103819e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103819dc8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  (**(code **)(unaff_x20 + _DAT_112f9f2c8))();
  if (((param_1 & 1) != 0) && ((**(code **)(unaff_x20 + _DAT_112f9f2d0))(), param_1 != 0)) {
    uVar1 = param_1;
    func_0x000107c3d118();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c614f0();
      uVar3 = uVar2;
      func_0x000107c61440();
      if ((uVar3 != 0) &&
         (uVar4 = uVar2, (**(code **)(uVar3 + 0x10))(uVar2,uVar3), (uVar4 & 1) != 0)) {
        (**(code **)(uVar3 + 0x18))(uVar2,uVar3);
      }
      func_0x000107c615e8(uVar1);
    }
  }
  return;
}



/* Entry: 103819ea0; end: 103819ed3; -[_TtC16ARBarIntegration12ARBarAdapter consumeSwipeToDismissGesture] */

uint FUN_103819ea0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103819dc8();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103819ed4; end: 10381a003;  */

undefined * FUN_103819ed4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [40];
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f9f308,&UNK_10dc14870);
    puVar5 = puVar8;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      FUN_10381a0d4(param_1,&uStack_98,0x112f9f310,&UNK_10dc15ac0);
      uVar3 = uStack_90;
      uVar2 = uStack_98;
      uVar6 = uStack_98;
      uVar7 = uStack_90;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10381a000);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_10381a0bc(auStack_88,*(long *)(puVar5 + 0x38) + uVar6 * 0x28);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10381a004);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x38;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10381a004; end: 10381a077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381a004(ulong param_1)

{
  long lStack_28;
  
  if ((param_1 & 1) == 0) {
    func_0x0001000d224c(&lStack_28);
    if (lStack_28 == 0) {
      return;
    }
    func_0x000107c506c0(lStack_28);
  }
  else {
    func_0x0001000d224c(&lStack_28);
    if (lStack_28 == 0) {
      return;
    }
    func_0x000107c3dbec(lStack_28);
  }
  func_0x000107c615e8(lStack_28);
  return;
}



/* Entry: 10381a078; end: 10381a097;  */

void FUN_10381a078(void)

{
  func_0x000107c61168(&PTR_PTR_1128f1f00);
  return;
}



/* Entry: 10381a098; end: 10381a0bb;  */

undefined8 FUN_10381a098(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10381a0bc; end: 10381a0d3;  */

undefined8 * FUN_10381a0bc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10381a0d4; end: 10381a11b;  */

undefined8 FUN_10381a0d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10381a11c; end: 10381a123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381a11c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112f9f290;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_112f9f290,auStack_60,0,0);
    lVar2 = lVar1 + lVar2;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      func_0x0001000d224c(&lStack_68);
      if (lStack_68 != 0) {
        func_0x000107c499a8(lStack_68);
        func_0x000107c615e8(lStack_68);
      }
      func_0x000107c50440(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10381a124; end: 10381a167;  */

void FUN_10381a124(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10381a168; end: 10381a173;  */

void FUN_10381a168(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakLoadStrong_11034f590)(*unaff_x20 + 0x10);
  return;
}



/* Entry: 10381a174; end: 10381a18f;  */

void FUN_10381a174(undefined8 param_1)

{
  func_0x0001091a2ac0();
  uRam0000000112f9f480 = param_1;
  return;
}



/* Entry: 10381a190; end: 10381a203;  */

void FUN_10381a190(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_3 + 0x18) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61574(param_3);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 10381a204; end: 10381a25f;  */

void FUN_10381a204(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10381a260(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10381a260; end: 10381a2ff;  */

/* WARNING: Possible PIC construction at 0x00010381a388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a4e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a5d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a2d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010381a69c) */
/* WARNING: Removing unreachable block (ram,0x00010381a67c) */
/* WARNING: Removing unreachable block (ram,0x00010381a660) */
/* WARNING: Removing unreachable block (ram,0x00010381a644) */
/* WARNING: Removing unreachable block (ram,0x00010381a5d4) */
/* WARNING: Removing unreachable block (ram,0x00010381a594) */
/* WARNING: Removing unreachable block (ram,0x00010381a568) */
/* WARNING: Removing unreachable block (ram,0x00010381a6d8) */
/* WARNING: Removing unreachable block (ram,0x00010381a574) */
/* WARNING: Removing unreachable block (ram,0x00010381a540) */
/* WARNING: Removing unreachable block (ram,0x00010381a4ec) */
/* WARNING: Removing unreachable block (ram,0x00010381a498) */
/* WARNING: Removing unreachable block (ram,0x00010381a3ec) */
/* WARNING: Removing unreachable block (ram,0x00010381a3f4) */
/* WARNING: Removing unreachable block (ram,0x00010381a5dc) */
/* WARNING: Removing unreachable block (ram,0x00010381a3fc) */
/* WARNING: Removing unreachable block (ram,0x00010381a38c) */
/* WARNING: Removing unreachable block (ram,0x00010381a3b4) */
/* WARNING: Removing unreachable block (ram,0x00010381a5e8) */
/* WARNING: Removing unreachable block (ram,0x00010381a6c0) */
/* WARNING: Removing unreachable block (ram,0x00010381a5f8) */
/* WARNING: Removing unreachable block (ram,0x00010381a3d0) */
/* WARNING: Removing unreachable block (ram,0x00010381a2d4) */

void FUN_10381a260(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (lVar2 != 0) {
    func_0x000107c44dcc();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10381a300);
      (*pcVar1)();
    }
    func_0x000107c537e4();
    func_0x000107c615e8(lVar2);
  }
  if ((param_1 & 1) == 0) {
    if (*(long *)(unaff_x20 + 0x30) == 0) {
      return;
    }
    puVar3 = (undefined *)0x0;
    if (*(long *)(unaff_x20 + 0x28) != 0) {
      func_0x000107c4ff34();
      puVar3 = *(undefined **)(unaff_x20 + 0x28);
    }
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
  }
  else {
    if (*(long *)(unaff_x20 + 0x28) != 0) {
      return;
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c610f8(PTR_PTR_1126df758);
    func_0x000107c46460();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10381a300; end: 10381a6ef;  */

/* WARNING: Possible PIC construction at 0x00010381a388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a4e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a5d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381a698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010381a67c) */
/* WARNING: Removing unreachable block (ram,0x00010381a660) */
/* WARNING: Removing unreachable block (ram,0x00010381a644) */
/* WARNING: Removing unreachable block (ram,0x00010381a5d4) */
/* WARNING: Removing unreachable block (ram,0x00010381a594) */
/* WARNING: Removing unreachable block (ram,0x00010381a568) */
/* WARNING: Removing unreachable block (ram,0x00010381a6d8) */
/* WARNING: Removing unreachable block (ram,0x00010381a574) */
/* WARNING: Removing unreachable block (ram,0x00010381a540) */
/* WARNING: Removing unreachable block (ram,0x00010381a4ec) */
/* WARNING: Removing unreachable block (ram,0x00010381a498) */
/* WARNING: Removing unreachable block (ram,0x00010381a3ec) */
/* WARNING: Removing unreachable block (ram,0x00010381a3f4) */
/* WARNING: Removing unreachable block (ram,0x00010381a5dc) */
/* WARNING: Removing unreachable block (ram,0x00010381a3fc) */
/* WARNING: Removing unreachable block (ram,0x00010381a38c) */
/* WARNING: Removing unreachable block (ram,0x00010381a3b4) */
/* WARNING: Removing unreachable block (ram,0x00010381a5e8) */
/* WARNING: Removing unreachable block (ram,0x00010381a6c0) */
/* WARNING: Removing unreachable block (ram,0x00010381a5f8) */
/* WARNING: Removing unreachable block (ram,0x00010381a3d0) */
/* WARNING: Removing unreachable block (ram,0x00010381a69c) */

void FUN_10381a300(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c610f8(PTR_PTR_1126df758);
  func_0x000107c46460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10381a6f0; end: 10381a753;  */

void FUN_10381a6f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10381a754; end: 10381a77f;  */

undefined8 FUN_10381a754(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x30);
  func_0x000107c61174(uVar1);
  return uVar1;
}



/* Entry: 10381a780; end: 10381a947;  */

void FUN_10381a780(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  if (param_1 == 0) {
    func_0x000107c6157c(param_2);
  }
  else {
    puVar2 = &UNK_11069a2b8;
    func_0x000107c613fc(&UNK_11069a2b8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    uStack_50 = 0x10381a950;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_102a2a198;
    puStack_58 = &UNK_11069a2d0;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c6157c(param_2);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar2);
    func_0x000107c5dc64(param_1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    param_2 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  func_0x000107c6157c(param_2);
  plVar4 = (long *)PTR___sSbSQsWP_11034dd50;
  func_0x000104884898();
  func_0x000107c61574(param_2);
  puVar2 = &UNK_11069a2b8;
  func_0x000107c613fc(&UNK_11069a2b8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar5 = FUN_10381a948;
  puVar7 = puVar2;
  (**(code **)(*plVar4 + 0x60))(FUN_10381a948);
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar2);
  pcVar6 = pcVar5;
  func_0x000107c614f0(pcVar5);
  (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + 0x20),pcVar6,puVar7);
  func_0x000107c615e8(pcVar5);
  return;
}



/* Entry: 10381a948; end: 10381a973;  */

void FUN_10381a948(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_10381a260(uVar1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 10381a974; end: 10381aa43; -[_TtC16ARBarIntegration40ARBarCameraPreviewLensInfoFeatureAdapter activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381a974(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f9f490);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f9f498);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f9f4a0);
  func_0x000103881f5c(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x0001038812a8(uVar1,uVar2,uVar3);
  FUN_103881990(*(undefined8 *)(param_1 + _DAT_112f9f488));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f9f4a8);
  *(undefined8 *)(param_1 + _DAT_112f9f4a8) = uVar1;
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10381aa44; end: 10381aa47; -[_TtC16ARBarIntegration40ARBarCameraPreviewLensInfoFeatureAdapter configureWithView:] */

void FUN_10381aa44(void)

{
  return;
}



/* Entry: 10381aa48; end: 10381aa4b; -[_TtC16ARBarIntegration40ARBarCameraPreviewLensInfoFeatureAdapter resetMetrics] */

void FUN_10381aa48(void)

{
  return;
}



/* Entry: 10381aa4c; end: 10381aaa3; -[_TtC16ARBarIntegration40ARBarCameraPreviewLensInfoFeatureAdapter usageMetrics] */

void FUN_10381aa4c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar2 = puVar1;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10381aaa4; end: 10381ab03; -[_TtC16ARBarIntegration40ARBarCameraPreviewLensInfoFeatureAdapter init] */

void FUN_10381aaa4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.ARBarCameraPreviewLensInfoFeatureAdapter",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10381aad0);
  (*pcVar1)();
}



/* Entry: 10381ab04; end: 10381ab6b; -[_TtC16ARBarIntegration40ARBarCameraPreviewLensInfoFeatureAdapter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010381ab30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381ab50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010381ab34) */
/* WARNING: Removing unreachable block (ram,0x00010381ab54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381ab04(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f9f488));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f9f490));
  return;
}



/* Entry: 10381ab6c; end: 10381ab8b;  */

void FUN_10381ab6c(void)

{
  func_0x000107c61168(&PTR_PTR_1128f2000);
  return;
}



/* Entry: 10381ab8c; end: 10381accb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10381ab8c(void)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112f9f4f0;
  pcVar2 = *(code **)(unaff_x20 + _DAT_112f9f4f0);
  pcVar3 = pcVar2;
  if (pcVar2 == (code *)0x0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f9f4d8);
    func_0x0001000285a8(0x112f9f520,&UNK_10dc14980);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar4);
    pcVar2 = FUN_10381b19c;
    func_0x0001000b64ac(FUN_10381b19c,uVar4);
    uVar4 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar3 = FUN_10381ad9c;
    func_0x00010068b194(FUN_10381ad9c,0,uVar4);
    func_0x0001038824d8(0);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f9f4e0);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f9f4e8);
    func_0x000107c6157c(uVar4);
    func_0x000107c6157c(uVar5);
    func_0x00010388208c(pcVar3,uVar4,uVar5);
    func_0x000107c61574(pcVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c6157c(pcVar3);
    func_0x000107c61574(uVar4);
    pcVar2 = (code *)0x0;
  }
  func_0x000107c6157c(pcVar2);
  return pcVar3;
}



/* Entry: 10381accc; end: 10381ad3b;  */

void FUN_10381accc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c6157c();
  uVar1 = 0;
  func_0x00010488a220(0,1,FUN_10381b1c8,param_1);
  func_0x000107c61574(param_1);
  func_0x000107c61574(uVar1);
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 10381ad3c; end: 10381ad9b;  */

void FUN_10381ad3c(void)

{
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000100087f6c(&lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  return;
}



/* Entry: 10381ad9c; end: 10381ae2b;  */

code * FUN_10381ad9c(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  func_0x000107c3d14c(uVar3);
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x0001000b637c();
  func_0x000107c61170(uVar3);
  uVar3 = 0x112d3b7d8;
  func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
  pcVar2 = FUN_10381ae2c;
  func_0x0001000bfde0(FUN_10381ae2c,0,uVar3);
  func_0x000107c61574(uVar1);
  return pcVar2;
}



/* Entry: 10381ae2c; end: 10381af1b;  */

void FUN_10381ae2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *param_2;
  puVar2 = &UNK_11069a310;
  func_0x000107c613fc(&UNK_11069a310,0x18,7);
  puVar5 = (undefined8 *)(puVar2 + 0x10);
  *puVar5 = 0;
  uStack_50 = 0x10381b1a4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1019eb2d8;
  puStack_58 = &UNK_11069a328;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6bc(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61428(puVar5,&puStack_70,0,0);
  *param_1 = *puVar5;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 10381af1c; end: 10381af67;  */

void FUN_10381af1c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 10381af68; end: 10381afa3; -[_TtC16ARBarIntegration46ARBarCameraPreviewLoadingOveralyFeatureAdapter activate] */

void FUN_10381af68(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10381ab8c();
  FUN_103882180();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10381afa4; end: 10381b067; -[_TtC16ARBarIntegration46ARBarCameraPreviewLoadingOveralyFeatureAdapter configureWithView:] */

void FUN_10381afa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_38;
  
  if (param_3 != 0) {
    puStack_38 = PTR_DAT_11269cb50;
    lVar2 = param_3;
    func_0x000107c61494(param_3,1,&puStack_38);
    if (lVar2 != 0) {
      func_0x000107c61174(param_1);
      func_0x000107c61174(param_3);
      lVar3 = param_3;
      FUN_10381ab8c();
      func_0x000107c3f2f8();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10381b068);
        (*pcVar1)();
      }
      FUN_103882328(param_3,lVar2);
      func_0x000107c61170(param_3);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 10381b068; end: 10381b06b; -[_TtC16ARBarIntegration46ARBarCameraPreviewLoadingOveralyFeatureAdapter resetMetrics] */

void FUN_10381b068(void)

{
  return;
}



/* Entry: 10381b06c; end: 10381b0c3; -[_TtC16ARBarIntegration46ARBarCameraPreviewLoadingOveralyFeatureAdapter usageMetrics] */

void FUN_10381b06c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar2 = puVar1;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10381b0c4; end: 10381b123; -[_TtC16ARBarIntegration46ARBarCameraPreviewLoadingOveralyFeatureAdapter init] */

void FUN_10381b0c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.ARBarCameraPreviewLoadingOveralyFeatureAdapter",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10381b0f0);
  (*pcVar1)();
}



/* Entry: 10381b124; end: 10381b17b; -[_TtC16ARBarIntegration46ARBarCameraPreviewLoadingOveralyFeatureAdapter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010381b140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381b160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010381b144) */
/* WARNING: Removing unreachable block (ram,0x00010381b164) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381b124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f9f4d8));
  return;
}



/* Entry: 10381b17c; end: 10381b19b;  */

void FUN_10381b17c(void)

{
  func_0x000107c61168(&PTR_PTR_1128f20e0);
  return;
}



/* Entry: 10381b19c; end: 10381b1c7;  */

void FUN_10381b19c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c6157c();
  uVar1 = 0;
  func_0x00010488a220(0,1,FUN_10381b1c8,param_1);
  func_0x000107c61574(param_1);
  func_0x000107c61574(uVar1);
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 10381b1c8; end: 10381b1df;  */

void FUN_10381b1c8(void)

{
  FUN_10381ad3c();
  return;
}



/* Entry: 10381b1e0; end: 10381b45b;  */

void FUN_10381b1e0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_58;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar8);
  func_0x0001000d224c(&lStack_58);
  func_0x000107c61574(uVar8);
  if (lStack_58 != 0) {
    lVar2 = lStack_58;
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_58);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c44dc8();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar4 != 0) {
          func_0x000107c3e2c8(lVar4);
          puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
          func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
          lVar6 = lVar4;
          func_0x000107c6148c(lVar4,puVar5);
          lVar3 = 0;
          if (lVar6 != 0) {
            lVar3 = lVar2;
            func_0x000107c4977c();
          }
          func_0x0001008478a8();
          func_0x000107c613fc();
          *(undefined8 *)(lVar3 + 0x18) = 7;
          *(undefined8 *)(lVar3 + 0x10) = 3;
          uVar8 = param_1;
          func_0x000107c4acb0();
          func_0x000107c61180();
          lVar6 = lVar2;
          func_0x000107c4acb0(lVar2);
          func_0x000107c61180();
          uVar7 = uVar8;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(uVar8);
          func_0x000107c61170(lVar6);
          *(undefined8 *)(lVar3 + 0x20) = uVar7;
          uVar8 = param_1;
          func_0x000107c5ce8c();
          func_0x000107c61180();
          lVar6 = lVar2;
          func_0x000107c5ce8c(lVar2);
          func_0x000107c61180();
          uVar7 = uVar8;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(uVar8);
          func_0x000107c61170(lVar6);
          *(undefined8 *)(lVar3 + 0x28) = uVar7;
          func_0x000107c3ec1c();
          func_0x000107c61180();
          lVar6 = lVar2;
          func_0x000107c3f2e4();
          func_0x000107c61180();
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10381b45c);
            (*pcVar1)();
          }
          puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
          uVar8 = param_1;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(param_1);
          func_0x000107c61170(lVar6);
          *(undefined8 *)(lVar3 + 0x30) = uVar8;
          uVar8 = 0;
          func_0x000100847984(0);
          lVar6 = lVar3;
          func_0x000107c5fc48(lVar3,uVar8);
          func_0x000107c61574(lVar3);
          func_0x000107c3d048(puVar5);
          func_0x000107c61170(lVar2);
          func_0x000107c615e8(lVar4);
          lVar2 = lVar6;
        }
      }
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 10381b45c; end: 10381b49f; -[_TtC16ARBarIntegration28ARBarCameraSwitcherContainer attachView:] */

void FUN_10381b45c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_10381b1e0(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10381b4a0; end: 10381b52f;  */

void FUN_10381b4a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10381b530; end: 10381b65f;  */

code * FUN_10381b530(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  long lStack_38;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e04238;
  lVar2 = param_2;
  func_0x000107c5faec();
  if (ppuVar1 == param_1 && lVar2 == param_2) {
    func_0x000107c6142c(lVar2);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c6142c(lVar2);
    if (((ulong)ppuVar1 & 1) == 0) {
      return (code *)0x0;
    }
  }
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    return (code *)0x0;
  }
  func_0x0001000285a8(0x112f9f670,&UNK_10dc14a08);
  lVar2 = lStack_38;
  func_0x000107c615f0(lStack_38);
  func_0x000107c4b130();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x0001000b637c();
  func_0x000107c61170(lVar2);
  pcVar4 = FUN_10381b660;
  func_0x0001000c0ebc(FUN_10381b660,0);
  func_0x000107c61574(lVar3);
  pcVar5 = FUN_10381b680;
  func_0x0001000bfde0(FUN_10381b680,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c615ec(lStack_38,2);
  func_0x000107c61574(pcVar4);
  return pcVar5;
}



/* Entry: 10381b660; end: 10381b67f;  */

bool FUN_10381b660(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x000107c5b634(lVar1);
  return lVar1 == 3;
}



/* Entry: 10381b680; end: 10381b683;  */

void FUN_10381b680(void)

{
  return;
}



/* Entry: 10381b684; end: 10381b6a3;  */

void FUN_10381b684(void)

{
  FUN_10381b530();
  return;
}



/* Entry: 10381b6a4; end: 10381b70f; -[_TtC16ARBarIntegration43ARBarDeepLinkActivationConfigurationAdapter configureForActivationWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381b6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c5faec();
  uStack_40 = param_3;
  uStack_38 = param_2;
  func_0x000107c61174(param_1);
  func_0x000100087c34(&uStack_40);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10381b710; end: 10381b743;  */

void FUN_10381b710(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10381b744; end: 10381b767; -[_TtC16ARBarIntegration43ARBarDeepLinkActivationConfigurationAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381b744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f9f678));
  return;
}



/* Entry: 10381b768; end: 10381b7c7; -[_TtC16ARBarIntegration12ARBarFeature init] */

void FUN_10381b768(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.ARBarFeature",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10381b794);
  (*pcVar1)();
}



/* Entry: 10381b7c8; end: 10381b7db; -[_TtC16ARBarIntegration12ARBarFeature .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381b7c8(long param_1)

{
  if (*(long *)(param_1 + _DAT_112f9f6a8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f9f6a8))[1]);
    return;
  }
  return;
}



/* Entry: 10381b7dc; end: 10381b88f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10381b7dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  pcVar2 = *(code **)(unaff_x20 + _DAT_112f9f6a8);
  if (pcVar2 == (code *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112f9f6a8))[1];
    lVar1 = lVar3;
    func_0x000107c6157c();
    (*pcVar2)();
    if (lVar1 == 0) {
      lVar4 = 0;
    }
    else {
      func_0x000107c4071c(param_1,param_2);
      lVar4 = lVar1;
      func_0x000107c3ec60(lVar1);
      func_0x000107c609a4();
      func_0x000107c61170(lVar1);
    }
    func_0x000100ba52d8(pcVar2,lVar3);
  }
  return lVar4;
}



/* Entry: 10381b890; end: 10381b8b3;  */

uint FUN_10381b890(uint param_1)

{
  FUN_10381b7dc();
  return param_1 & 1;
}



/* Entry: 10381b8b4; end: 10381b8d3;  */

void FUN_10381b8b4(void)

{
  func_0x000107c61168(&PTR_PTR_1128f2270);
  return;
}



/* Entry: 10381b8d4; end: 10381b92f; -[_TtC16ARBarIntegration24ARBarIntegrationServices init] */

void FUN_10381b8d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.ARBarIntegrationServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10381b900);
  (*pcVar1)();
}



/* Entry: 10381b930; end: 10381b977; -[_TtC16ARBarIntegration24ARBarIntegrationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10381b930(long param_1)

{
  long lVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f9f6d8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f9f6e0));
  param_1 = param_1 + _DAT_112f9f6e8;
  lVar1 = 0x112f9f2c0;
  func_0x0001000285a8(0x112f9f2c0,&UNK_10dc14850);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10381b978; end: 10381b97b;  */

void FUN_10381b978(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10381b97c; end: 10381b9ef;  */

void FUN_10381b97c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10381b9f0; end: 10381b9f3;  */

void FUN_10381b9f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10381b9f4; end: 10381bacf;  */

/* WARNING: Removing unreachable block (ram,0x00010381bab0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10381b9f4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f9f778;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f9f778);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000103f57290();
    func_0x000103f56e98();
    lVar3 = -0x2fffffffffffffee;
    func_0x000103f56ecc(0xd000000000000012,0x800000010f16e870);
    func_0x000107c61170();
    func_0x000100802a4c();
    func_0x000107c61170(lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10381bad0; end: 10381bb2f; -[_TtC16ARBarIntegration22ARBarLECarouselManager init] */

void FUN_10381bad0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.ARBarLECarouselManager",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10381bafc);
  (*pcVar1)();
}



/* Entry: 10381bb30; end: 10381bb77; -[_TtC16ARBarIntegration22ARBarLECarouselManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010381bb5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010381bb60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381bb30(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f9f768));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f9f770));
  return;
}



/* Entry: 10381bb78; end: 10381bb97;  */

void FUN_10381bb78(void)

{
  func_0x000107c61168(&PTR_PTR_1128f25a0);
  return;
}



/* Entry: 10381bb98; end: 10381bc13; -[_TtC16ARBarIntegration22ARBarLECarouselManager collectionsCarouselLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381bb98(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  
  func_0x000107c61174();
  uVar1 = 0x112d657e8;
  func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
  pcVar2 = FUN_10381bc14;
  func_0x0001000bfde0(FUN_10381bc14,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 10381bc14; end: 10381bccb;  */

void FUN_10381bc14(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  puVar1 = PTR_PTR_1126af5d0;
  func_0x000107c61168();
  FUN_1030f0560(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar3 = uVar4;
  func_0x000107c5fc48(uVar4,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(uVar4);
  func_0x000107c45788(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c5c3c8();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10381bccc; end: 10381bcff; -[_TtC16ARBarIntegration22ARBarLECarouselManager lensDataProviderConfiguration] */

void FUN_10381bccc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10381b9f4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10381bd00; end: 10381bd23; -[_TtC16ARBarIntegration22ARBarLECarouselManager lensCameraUpdatingStrategy] */

void FUN_10381bd00(void)

{
  func_0x000107c610f8(PTR_PTR_1126c89f0);
  func_0x000107c47400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10381bd24; end: 10381bd33; -[_TtC16ARBarIntegration22ARBarLECarouselManager lensToPreselect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381bd24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f9f770));
  return;
}



/* Entry: 10381bd34; end: 10381bd37; -[_TtC16ARBarIntegration22ARBarLECarouselManager willActivateCollectionCarousel:] */

void FUN_10381bd34(void)

{
  return;
}



/* Entry: 10381bd38; end: 10381bd3b; -[_TtC16ARBarIntegration22ARBarLECarouselManager didActivateCollectionCarousel:] */

void FUN_10381bd38(void)

{
  return;
}



/* Entry: 10381bd3c; end: 10381bd3f; -[_TtC16ARBarIntegration22ARBarLECarouselManager willDeactivateCollectionCarousel:] */

void FUN_10381bd3c(void)

{
  return;
}



/* Entry: 10381bd40; end: 10381bd43; -[_TtC16ARBarIntegration22ARBarLECarouselManager didDeactivateCollectionCarousel:] */

void FUN_10381bd40(void)

{
  return;
}



/* Entry: 10381bd44; end: 10381bdf7;  */

void FUN_10381bd44(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (param_2 != 0) {
    return;
  }
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x18) = param_1;
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(uVar2);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_60,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    FUN_10381bdf8();
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 10381bdf8; end: 10381c093;  */

/* WARNING: Possible PIC construction at 0x00010381bf10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381bfd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381c05c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010381bfdc) */
/* WARNING: Removing unreachable block (ram,0x00010381bf14) */
/* WARNING: Removing unreachable block (ram,0x00010381c060) */

void FUN_10381bdf8(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  
  lVar7 = *(long *)(unaff_x20 + 0x18);
  if (lVar7 != 0) {
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    func_0x000107c615f0(lVar7);
    func_0x000107c4b2e0();
    func_0x000107c61180();
    lVar1 = lVar7;
    func_0x0001000b637c();
    func_0x000107c61170(lVar7);
    uVar2 = 0x112d530a8;
    func_0x0001000285a8(0x112d530a8,&UNK_10d919940);
    pcVar3 = FUN_10381c094;
    func_0x0001000bfde0(FUN_10381c094,0,uVar2);
    func_0x000107c61574(lVar1);
    puVar4 = &UNK_11069a3f8;
    func_0x000107c613fc(&UNK_11069a3f8,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    pcVar5 = FUN_10381cc98;
    puVar6 = puVar4;
    (**(code **)(*(long *)pcVar3 + 0x60))(FUN_10381cc98);
    func_0x000107c61574(pcVar3);
    func_0x000107c61574(puVar4);
    pcVar3 = pcVar5;
    func_0x000107c614f0(pcVar5);
    (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + 0x28),pcVar3,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar5);
    return;
  }
  return;
}



/* Entry: 10381c094; end: 10381c227;  */

/* WARNING: Possible PIC construction at 0x00010381c1e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010381c1e4) */

void FUN_10381c094(ulong *param_1,long *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a8 [32];
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar4 = *param_2;
  FUN_1033188e4();
  *param_1 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___sypN_11034f1a8;
  lVar11 = lVar4;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  for (lVar12 = *(long *)(lVar4 + 0x10); lVar12 != 0; lVar12 = lVar12 + -1) {
    lVar11 = lVar11 + 0x20;
    func_0x0001000bb420(lVar11,auStack_80);
    func_0x000100102924(auStack_80,auStack_a8);
    uVar7 = 0;
    func_0x000100c70ba8(0);
    plVar8 = &lStack_88;
    func_0x000107c6147c(plVar8,auStack_a8,puVar2 + 8,uVar7,6);
    lVar3 = lStack_88;
    if ((((ulong)plVar8 & 1) != 0) && (lStack_88 != 0)) {
      puVar6 = puVar9;
      func_0x000107c61550();
      if (((int)puVar6 == 0) ||
         (((long)puVar9 < 0 || (puVar6 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)))) {
        if ((ulong)puVar9 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar9) {
            puVar5 = puVar9;
          }
          func_0x000107c60480(puVar5);
        }
        puVar6 = (undefined *)0x0;
        func_0x000100fe2a60(0,puVar5 + 1,1,puVar9);
      }
      uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar10 + 0x10);
      puVar9 = puVar6;
      if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
        func_0x000100fe2a60(puVar9,uVar1 + 1,1,puVar6);
        uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
      *(long *)(uVar10 + uVar1 * 8 + 0x20) = lVar3;
      *param_1 = (ulong)puVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar4);
  return;
}



/* Entry: 10381c228; end: 10381c2cb;  */

void FUN_10381c228(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    func_0x000107c61434(uVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c6142c(uVar3);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10381c2cc();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10381c2cc; end: 10381c427;  */

/* WARNING: Possible PIC construction at 0x00010381c314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381c340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381c370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381c3e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381c3f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010381c408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010381c3e4) */
/* WARNING: Removing unreachable block (ram,0x00010381c374) */
/* WARNING: Removing unreachable block (ram,0x00010381c380) */
/* WARNING: Removing unreachable block (ram,0x00010381c344) */
/* WARNING: Removing unreachable block (ram,0x00010381c348) */
/* WARNING: Removing unreachable block (ram,0x00010381c34c) */
/* WARNING: Removing unreachable block (ram,0x00010381c3fc) */
/* WARNING: Removing unreachable block (ram,0x00010381c350) */
/* WARNING: Removing unreachable block (ram,0x00010381c318) */
/* WARNING: Removing unreachable block (ram,0x00010381c3b4) */
/* WARNING: Removing unreachable block (ram,0x00010381c3bc) */
/* WARNING: Removing unreachable block (ram,0x00010381c320) */
/* WARNING: Removing unreachable block (ram,0x00010381c3f8) */
/* WARNING: Removing unreachable block (ram,0x00010381c40c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_10381c2cc(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10381c428; end: 10381c49b;  */

void FUN_10381c428(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = uVar1;
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10381c49c; end: 10381c5e7;  */

void FUN_10381c49c(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  uVar5 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar2 = &UNK_11069a420;
    func_0x000107c613fc(&UNK_11069a420,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_10381ccb0;
    *(long *)(puVar2 + 0x18) = param_2;
    pcStack_68 = FUN_10381ccd0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    pcStack_78 = FUN_10384cd1c;
    puStack_70 = &UNK_11069a438;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar4 = puStack_60;
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c4c7c4(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(param_2);
    puVar4 = puVar2;
    func_0x000107c61544(puVar2,"",0x5d,0x84,0x21,1);
    func_0x000107c61574(param_2);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10381c5e8);
      (*pcVar1)();
    }
  }
  return;
}



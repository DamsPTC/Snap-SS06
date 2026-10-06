/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031bb770; end: 1031bb7bb; -[_TtC32SCContextStoryReactionMenuPlugin31StoryReactionMenuViewController initWithNibName:bundle:] */

void FUN_1031bb770(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextStoryReactionMenuPlugin.StoryReactionMenuViewController",0x40,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bb79c);
  (*pcVar1)();
}



/* Entry: 1031bb7bc; end: 1031bb7e7;  */

void FUN_1031bb7bc(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  ppuVar2 = &puStack_60;
  pcVar1 = "createMenuIfNeeded()";
  func_0x0001000c10c0("createMenuIfNeeded()");
  func_0x000107c61180();
  uStack_40 = 0x1031bbd2c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11061c7b0;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c4e524(pcVar1,param_2,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1031bb7e8; end: 1031bb847;  */

void FUN_1031bb7e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1031bb848; end: 1031bb8b7;  */

void FUN_1031bb848(void)

{
  long unaff_x20;
  
  func_0x0001031ba638(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1031bb8b8; end: 1031bb8d3;  */

void FUN_1031bb8b8(long param_1)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c064c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + 0x10),PTR_s_initiateChatSendResultNotificati_1125f6d30,
               param_1 == 0);
    return;
  }
  return;
}



/* Entry: 1031bb8d4; end: 1031bb90f;  */

void FUN_1031bb8d4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001031bae38(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1031bb910; end: 1031bb917;  */

/* WARNING: Possible PIC construction at 0x0001031bb628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031bb62c) */

void FUN_1031bb910(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = param_3;
  }
  lVar2 = -0x2000000000000000;
  if (param_4 != 0) {
    lVar2 = param_4;
  }
  func_0x000107c61434(param_4);
  func_0x000107c5fb78(uVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 1031bb918; end: 1031bb9d7;  */

void FUN_1031bb918(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = 0;
  if (in_stack_00000008 != 0) {
    uVar1 = in_stack_00000000;
  }
  lVar2 = -0x2000000000000000;
  if (in_stack_00000008 != 0) {
    lVar2 = in_stack_00000008;
  }
  uVar4 = puVar3[1];
  *puVar3 = uVar1;
  puVar3[1] = lVar2;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 1031bb9d8; end: 1031bba4f;  */

void FUN_1031bb9d8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1031bba80(0,param_1,param_2);
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



/* Entry: 1031bba50; end: 1031bba7f;  */

void FUN_1031bba50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001031bb20c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1031bba80; end: 1031bbabf;  */

void FUN_1031bba80(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1031bbac0; end: 1031bbc83;  */

ulong FUN_1031bbac0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031bbba4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031bbba8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126be690;
    func_0x000107c61168(PTR_PTR_1126be690);
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
    puVar4 = PTR_PTR_1126be690;
    func_0x000107c61168(PTR_PTR_1126be690);
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
  FUN_1031bba80(0,0x112ec4378,&PTR_PTR_1126be690);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031bbc84);
  (*pcVar2)();
}



/* Entry: 1031bbc84; end: 1031bbdc3;  */

void FUN_1031bbc84(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  
  plVar2 = *(long **)(unaff_x20 + 0x10);
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  lVar3 = *plVar2;
  *plVar2 = lVar1;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
  return;
}



/* Entry: 1031bbdc4; end: 1031bc3cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031bbdc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar8 = 0x18;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
  lVar3 = param_4;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar1 != 0) {
    lVar3 = param_5;
    func_0x000107c3e980();
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 == 0) {
      lVar3 = 0;
      uVar8 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) {
        lVar3 = 0;
        uVar8 = 0;
      }
      else {
        func_0x000107c5fb14(lVar3);
      }
    }
    FUN_1031bccf0();
    func_0x000107c6142c(uVar8);
    puVar4 = PTR_PTR_1126aaa18;
    func_0x000107c610f8(PTR_PTR_1126aaa18);
    func_0x000107c453e4();
    uVar8 = param_3;
    func_0x000107c5dec8(param_3);
    func_0x000107c61180();
    uVar5 = uVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c52704(puVar4);
    func_0x000107c615e8(uVar5);
    uVar8 = param_2;
    func_0x000107c3ff84(param_2);
    func_0x000107c61180();
    uVar5 = uVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c57b50(puVar4);
    func_0x000107c615e8(uVar5);
    puVar6 = &UNK_11061c908;
    func_0x000107c613fc(&UNK_11061c908,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,unaff_x20);
    pcStack_70 = FUN_1031bc428;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_10252755c;
    puStack_78 = &UNK_11061c920;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_68);
    func_0x000107c56e20(puVar4);
    func_0x000107c60bd0(ppuVar7);
    FUN_1031bccd0(0);
    func_0x000107c610f8();
    func_0x000107c61174(lVar3);
    func_0x000107c61174(puVar4);
    func_0x000107c615f0(lVar1);
    lVar2 = lVar3;
    FUN_1031bc730(lVar3,puVar4,lVar1);
    uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130781d8);
    func_0x000107c615f0(uVar8);
    func_0x000107c3e2c0();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(uVar8);
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return unaff_x20;
}



/* Entry: 1031bc3cc; end: 1031bc427;  */

void FUN_1031bc3cc(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1031bc430(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1031bc428; end: 1031bc42f;  */

void FUN_1031bc428(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1031bc430(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1031bc430; end: 1031bc543;  */

void FUN_1031bc430(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long *unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = *unaff_x20;
  uVar5 = 0;
  func_0x000107c60714(lVar1,0);
  puVar2 = &UNK_11061c908;
  func_0x000107c613fc(&UNK_11061c908,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_11061c998;
  func_0x000107c613fc(&UNK_11061c998,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  pcStack_50 = FUN_1031bc6cc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11061c9b0;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c5fb28(lVar1,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x0001000d76cc(lVar1 + 0x20,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 1031bc544; end: 1031bc55f;  */

void FUN_1031bc544(long param_1,long param_2)

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



/* Entry: 1031bc560; end: 1031bc61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bc560(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  lVar1 = _DAT_1130781e0;
  if (param_1 != 0) {
    if (param_2 != 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x000107c61428(lVar2 + _DAT_1130781e0,auStack_60,0,0);
      lVar2 = lVar2 + lVar1;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c41d04();
        func_0x000107c615e8(lVar2);
      }
    }
    func_0x000107c41864(*(undefined8 *)(*(long *)(param_1 + 0x10) + _DAT_1130781d8));
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1031bc620; end: 1031bc673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1031bc620(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130781d8),param_2,0);
  return 0;
}



/* Entry: 1031bc674; end: 1031bc677;  */

void FUN_1031bc674(void)

{
  return;
}



/* Entry: 1031bc678; end: 1031bc6cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1031bc678(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_1130781d8),param_2,0);
  return 0;
}



/* Entry: 1031bc6cc; end: 1031bc6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bc6cc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  lVar1 = _DAT_1130781e0;
  if (lVar2 != 0) {
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar2 + 0x10);
      func_0x000107c61428(lVar3 + _DAT_1130781e0,auStack_60,0,0);
      lVar3 = lVar3 + lVar1;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c41d04();
        func_0x000107c615e8(lVar3);
      }
    }
    func_0x000107c41864(*(undefined8 *)(*(long *)(lVar2 + 0x10) + _DAT_1130781d8));
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1031bc6e8; end: 1031bc72f;  */

void FUN_1031bc6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_1031bc730(param_1,param_2,param_3);
  return;
}



/* Entry: 1031bc730; end: 1031bc857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031bc730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f492c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f492d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f492d8) = param_3;
  puVar4 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar4,0,0);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5e2ac();
    func_0x000107c61180();
    func_0x000107c52b50(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(param_3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bc858);
  (*pcVar1)();
}



/* Entry: 1031bc858; end: 1031bc8af; -[_TtC30SCContextTopLevelReactionsTray35TopLevelReactionsTrayViewController initWithCoder:] */

void FUN_1031bc858(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextTopLevelReactionsTray/TopLevelReactionsTrayViewController.swift",
                      0x48,2,0x18,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bc8b0);
  (*pcVar1)();
}



/* Entry: 1031bc8b0; end: 1031bcbff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bc8b0(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = *(long *)(unaff_x20 + _DAT_112f492d8);
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126aaa20;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c61180();
    func_0x000107c5a050();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bcbf0);
      (*pcVar1)();
    }
    func_0x000107c3d89c();
    func_0x000107c61170();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 9;
    *(undefined8 *)(lVar4 + 0x10) = 4;
    puVar5 = puVar3;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bcbf4);
      (*pcVar1)();
    }
    lVar7 = lVar6;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar8 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar4 + 0x20) = puVar8;
    puVar5 = puVar3;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bcbf8);
      (*pcVar1)();
    }
    lVar7 = lVar6;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar8 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar4 + 0x28) = puVar8;
    puVar5 = puVar3;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bcbfc);
      (*pcVar1)();
    }
    lVar7 = lVar6;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar8 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar4 + 0x30) = puVar8;
    puVar5 = puVar3;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bcc00);
      (*pcVar1)();
    }
    puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar6 = unaff_x20;
    func_0x000107c3ec1c(unaff_x20);
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    puVar9 = puVar5;
    func_0x000107c40284(0xc03e000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar4 + 0x38) = puVar9;
    uVar10 = 0;
    func_0x000100847984(0);
    lVar6 = lVar4;
    func_0x000107c5fc48(lVar4,uVar10);
    func_0x000107c61574(lVar4);
    func_0x000107c3d048(puVar8);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 1031bcc00; end: 1031bcc27; -[_TtC30SCContextTopLevelReactionsTray35TopLevelReactionsTrayViewController viewDidLoad] */

void FUN_1031bcc00(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031bc8b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031bcc28; end: 1031bcc87; -[_TtC30SCContextTopLevelReactionsTray35TopLevelReactionsTrayViewController initWithNibName:bundle:] */

void FUN_1031bcc28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextTopLevelReactionsTray.TopLevelReactionsTrayViewController",0x42,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bcc54);
  (*pcVar1)();
}



/* Entry: 1031bcc88; end: 1031bcccf; -[_TtC30SCContextTopLevelReactionsTray35TopLevelReactionsTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bcc88(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f492c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f492d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f492d8));
  return;
}



/* Entry: 1031bccd0; end: 1031bccef;  */

void FUN_1031bccd0(void)

{
  func_0x000107c61168(&PTR_PTR_1128bf3f8);
  return;
}



/* Entry: 1031bccf0; end: 1031bcdbb;  */

undefined * FUN_1031bccf0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aaa10;
  func_0x000107c610f8(PTR_PTR_1126aaa10);
  func_0x000107c453e4();
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1);
  }
  func_0x000107c52ae0(puVar1);
  func_0x000107c61170(param_1);
  puVar2 = PTR_PTR_1126b0d28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c51c60();
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c57698(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 1031bcdbc; end: 1031bce97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031bcdbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1031bd388();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f49308) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f49310) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bce98);
  (*pcVar1)();
}



/* Entry: 1031bce98; end: 1031bcef7; -[_TtC33SCChatInputPluginScopeGraphBridge48SCChatInputPluginScopeGraphBridgeSaberEntryPoint init] */

void FUN_1031bce98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatInputPluginScopeGraphBridge.SCChatInputPluginScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bcec4);
  (*pcVar1)();
}



/* Entry: 1031bcef8; end: 1031bcf2f; -[_TtC33SCChatInputPluginScopeGraphBridge48SCChatInputPluginScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031bcf14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031bcf18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bcef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f49308));
  return;
}



/* Entry: 1031bcf30; end: 1031bcf57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bcf30(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f49310),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f49308));
  return;
}



/* Entry: 1031bcf58; end: 1031bcf77;  */

void FUN_1031bcf58(void)

{
  func_0x000107c61168(&PTR_PTR_1128bf4c8);
  return;
}



/* Entry: 1031bcf78; end: 1031bd013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031bcf78(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f493c8);
  *(undefined8 *)(unaff_x20 + _DAT_112f49340) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f49348) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1031bd014; end: 1031bd073; -[_TtC33SCChatInputPluginScopeGraphBridge50SCAIStoryReplyLoggingHelperServicesSaberEntryPoint init] */

void FUN_1031bd014(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatInputPluginScopeGraphBridge.SCAIStoryReplyLoggingHelperServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bd040);
  (*pcVar1)();
}



/* Entry: 1031bd074; end: 1031bd107; -[_TtC33SCChatInputPluginScopeGraphBridge50SCAIStoryReplyLoggingHelperServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bd074(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f49340));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f49348));
  return;
}



/* Entry: 1031bd108; end: 1031bd10f;  */

undefined8 FUN_1031bd108(void)

{
  return 0;
}



/* Entry: 1031bd110; end: 1031bd12f;  */

void FUN_1031bd110(void)

{
  func_0x000107c61168(&PTR_PTR_1128bf590);
  return;
}



/* Entry: 1031bd130; end: 1031bd1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031bd130(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f49378) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f49380);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031bd1b8);
  (*pcVar2)();
}



/* Entry: 1031bd1b8; end: 1031bd29f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031bd1b8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f49378);
  *(undefined **)(unaff_x20 + _DAT_112f49378) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f49380);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f49380))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11061cb08;
  func_0x000107c613fc(&UNK_11061cb08,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1031bd2a4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1031bd2a0; end: 1031bd2ab;  */

void FUN_1031bd2a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031bd2ac; end: 1031bd30b; -[_TtC33SCChatInputPluginScopeGraphBridge46SCChatInputPluginScopedServicesSaberEntryPoint init] */

void FUN_1031bd2ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatInputPluginScopeGraphBridge.SCChatInputPluginScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bd2d8);
  (*pcVar1)();
}



/* Entry: 1031bd30c; end: 1031bd343; -[_TtC33SCChatInputPluginScopeGraphBridge46SCChatInputPluginScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bd30c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f49380));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f49378));
  return;
}



/* Entry: 1031bd344; end: 1031bd347;  */

void FUN_1031bd344(void)

{
  return;
}



/* Entry: 1031bd348; end: 1031bd367;  */

void FUN_1031bd348(void)

{
  FUN_1031bd1b8();
  return;
}



/* Entry: 1031bd368; end: 1031bd387;  */

void FUN_1031bd368(void)

{
  func_0x000107c61168(&PTR_PTR_1128bf658);
  return;
}



/* Entry: 1031bd388; end: 1031bd457;  */

undefined8 FUN_1031bd388(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f493b0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1031bd458();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1031bd458; end: 1031bd477;  */

void FUN_1031bd458(void)

{
  func_0x000107c61168(&PTR_PTR_1128bf720);
  return;
}



/* Entry: 1031bd478; end: 1031bd49b;  */

void FUN_1031bd478(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11061cb50;
  func_0x0001000285a8(0x112f493b8,&UNK_10db96c28);
  func_0x000107c613fc(&UNK_11061cb50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1031bd520,puVar1);
  return;
}



/* Entry: 1031bd49c; end: 1031bd51f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bd49c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1031bd458();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f493c0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f493c8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1031bd520; end: 1031bd527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bd520(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_1031bd458();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112f493c0) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112f493c8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1031bd528; end: 1031bd58b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bd528(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f493c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f493c8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031bd58c; end: 1031bd5eb; -[_TtC33SCChatInputPluginScopeGraphBridge41SCChatInputPluginScopeGraphBridgeServices init] */

void FUN_1031bd58c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatInputPluginScopeGraphBridge.SCChatInputPluginScopeGraphBridgeServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bd5b8);
  (*pcVar1)();
}



/* Entry: 1031bd5ec; end: 1031bd72f; -[_TtC33SCChatInputPluginScopeGraphBridge41SCChatInputPluginScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031bd608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031bd60c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bd5ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f493c8));
  return;
}



/* Entry: 1031bd730; end: 1031bd75b;  */

undefined8 FUN_1031bd730(void)

{
  return 0x1b;
}



/* Entry: 1031bd75c; end: 1031bd7db;  */

void FUN_1031bd75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 1031bd7dc; end: 1031bd8d3;  */

void FUN_1031bd7dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f493b0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f493b0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11061cc50;
  func_0x000107c613fc(&UNK_11061cc50,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1031bd9d4;
  func_0x00010058fa64(0x1031bd9d4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031bd8d4; end: 1031bd8ff;  */

void FUN_1031bd8d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031bd900; end: 1031bd907;  */

void FUN_1031bd900(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f493b0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f493b0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11061cc50;
  func_0x000107c613fc(&UNK_11061cc50,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1031bd9d4;
  func_0x00010058fa64(0x1031bd9d4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031bd908; end: 1031bd963;  */

void FUN_1031bd908(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f493b0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f493b0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1031bd964; end: 1031bd9db;  */

undefined ** FUN_1031bd964(void)

{
  return &PTR_DAT_1130668b0;
}



/* Entry: 1031bd9dc; end: 1031bda23; -[SCSCChatInputPluginScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bd9dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f49420;
  func_0x000107c61428(param_1 + _DAT_112f49420,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031bda24; end: 1031bda7b; -[SCSCChatInputPluginScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bda24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f49420;
  func_0x000107c61428(param_1 + _DAT_112f49420,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031bda7c; end: 1031bdac3; -[SCSCChatInputPluginScopeGraphBridgeSaberEntryPoint chatReactionMenuScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bda7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f49428;
  func_0x000107c61428(param_1 + _DAT_112f49428,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031bdac4; end: 1031bdacf; -[SCSCChatInputPluginScopeGraphBridgeSaberEntryPoint setChatReactionMenuScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bdac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f49428;
  func_0x000107c61428(param_1 + _DAT_112f49428,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1031bdad0; end: 1031bdb17; -[SCSCChatInputPluginScopeGraphBridgeSaberEntryPoint sCChatInputPluginScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bdad0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f49430;
  func_0x000107c61428(param_1 + _DAT_112f49430,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031bdb18; end: 1031bdb23; -[SCSCChatInputPluginScopeGraphBridgeSaberEntryPoint setSCChatInputPluginScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bdb18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f49430;
  func_0x000107c61428(param_1 + _DAT_112f49430,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1031bdb24; end: 1031bdb83;  */

void FUN_1031bdb24(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1031bdb84; end: 1031bdd3f;  */

/* WARNING: Possible PIC construction at 0x0001031bdc9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031bdcc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031bdcd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031bdd14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031bdcd4) */
/* WARNING: Removing unreachable block (ram,0x0001031bdcc4) */
/* WARNING: Removing unreachable block (ram,0x0001031bdca0) */
/* WARNING: Removing unreachable block (ram,0x0001031bdd18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bdb84(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c3f8f0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c50b90();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1031bcf58();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1031bd388();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bdd40);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f49308) = lVar5;
      *(long *)(lVar3 + _DAT_112f49310) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1031bdd40; end: 1031bdd67; -[SCSCChatInputPluginScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1031bdd40(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031bdb84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031bdd68; end: 1031bddab; -[SCSCChatInputPluginScopeGraphBridgeSaberEntryPoint end] */

void FUN_1031bdd68(undefined8 param_1)

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



/* Entry: 1031bddac; end: 1031bdfaf;  */

void FUN_1031bddac(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0f3b1f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001c,0x800000010f0c4e10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0ed32b0)) &&
           (func_0x000107c605b8(0xd000000000000030,0x800000010f12cd50,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SCChatInputPluginScopeGraphBridge/SCSCChatInputPluginScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x5a,2,0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bdfb0);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58138();
        goto LAB_1031bde38;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c533a4();
  }
LAB_1031bde38:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1031bdfb0; end: 1031be05b; -[SCSCChatInputPluginScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1031bdfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031bddac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031be05c; end: 1031be0d3; -[SCSCChatInputPluginScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031be05c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f49420,0);
  *(undefined8 *)(param_1 + _DAT_112f49428) = 0;
  *(undefined8 *)(param_1 + _DAT_112f49430) = 0;
  *(undefined8 *)(param_1 + _DAT_112f49438) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031be0d4; end: 1031be107;  */

void FUN_1031be0d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031be108; end: 1031be15f; -[SCSCChatInputPluginScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031be134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031be138) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031be108(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f49420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f49428));
  return;
}



/* Entry: 1031be160; end: 1031be17f;  */

void FUN_1031be160(void)

{
  func_0x000107c61168(&PTR_PTR_1128bf7e8);
  return;
}



/* Entry: 1031be180; end: 1031be18b; -[SCSCAIStoryReplyLoggingHelperServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031be180(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f49468;
  func_0x000107c61428(param_1 + _DAT_112f49468,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031be18c; end: 1031be197; -[SCSCAIStoryReplyLoggingHelperServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031be18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f49468;
  func_0x000107c61428(param_1 + _DAT_112f49468,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031be198; end: 1031be1a3; -[SCSCAIStoryReplyLoggingHelperServicesSaberEntryPoint sCChatInputPluginScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031be198(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f49470;
  func_0x000107c61428(param_1 + _DAT_112f49470,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031be1a4; end: 1031be1e7;  */

void FUN_1031be1a4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1031be1e8; end: 1031be1f3; -[SCSCAIStoryReplyLoggingHelperServicesSaberEntryPoint setSCChatInputPluginScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031be1e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f49470;
  func_0x000107c61428(param_1 + _DAT_112f49470,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031be1f4; end: 1031be247;  */

void FUN_1031be1f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031be248; end: 1031be28f; -[SCSCAIStoryReplyLoggingHelperServicesSaberEntryPoint sCAIStoryReplyLoggingHelperServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031be248(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f49478;
  func_0x000107c61428(param_1 + _DAT_112f49478,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031be290; end: 1031be2f3; -[SCSCAIStoryReplyLoggingHelperServicesSaberEntryPoint setSCAIStoryReplyLoggingHelperServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031be290(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f49478;
  func_0x000107c61428(param_1 + _DAT_112f49478,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1031be2f4; end: 1031be477;  */

/* WARNING: Possible PIC construction at 0x0001031be3f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031be404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031be420: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031be3f8) */
/* WARNING: Removing unreachable block (ram,0x0001031be408) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031be2f4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c50b8c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c509d0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1031bd110();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112f493c8);
        *(undefined8 *)(lVar2 + _DAT_112f49340) = uVar6;
        *(long *)(lVar2 + _DAT_112f49348) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112f49348);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1031be478; end: 1031be49f; -[SCSCAIStoryReplyLoggingHelperServicesSaberEntryPoint begin] */

void FUN_1031be478(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031be2f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031be4a0; end: 1031be4e3; -[SCSCAIStoryReplyLoggingHelperServicesSaberEntryPoint end] */

void FUN_1031be4a0(undefined8 param_1)

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



/* Entry: 1031be4e4; end: 1031be6e7;  */

void FUN_1031be4e4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0ed3210)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f12cdf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0ed31e0)) &&
           (func_0x000107c605b8(0xd00000000000002a,0x800000010f12ce20,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SCChatInputPluginScopeGraphBridge/SCSCAIStoryReplyLoggingHelperServicesSaberEntryPoint.swift"
                              ,0x5c,2,0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1031be6e8);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57f78();
        goto LAB_1031be570;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58134();
  }
LAB_1031be570:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1031be6e8; end: 1031be793; -[SCSCAIStoryReplyLoggingHelperServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1031be6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031be4e4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031be794; end: 1031be813; -[SCSCAIStoryReplyLoggingHelperServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031be794(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f49468,0);
  func_0x000107c61614(param_1 + _DAT_112f49470,0);
  *(undefined8 *)(param_1 + _DAT_112f49478) = 0;
  *(undefined8 *)(param_1 + _DAT_112f49480) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031be814; end: 1031be847;  */

void FUN_1031be814(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031be848; end: 1031be89f; -[SCSCAIStoryReplyLoggingHelperServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031be884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031be888) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031be848(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f49468);
  func_0x000107c61610(param_1 + _DAT_112f49470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f49478));
  return;
}



/* Entry: 1031be8a0; end: 1031be8bf;  */

void FUN_1031be8a0(void)

{
  func_0x000107c61168(&PTR_PTR_1128bf8b8);
  return;
}



/* Entry: 1031be8c0; end: 1031be907; -[SCSCChatInputPluginScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031be8c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f494b0;
  func_0x000107c61428(param_1 + _DAT_112f494b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031be908; end: 1031be95f; -[SCSCChatInputPluginScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031be908(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f494b0;
  func_0x000107c61428(param_1 + _DAT_112f494b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028db35c; end: 1028db37f;  */

undefined8 FUN_1028db35c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1028db380; end: 1028db387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028db380(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(lVar2 + _DAT_112ec94e8);
  if (lVar1 != 0) {
    func_0x000107c41864(lVar1,param_2,0);
  }
  lVar2 = lVar2 + _DAT_112ec94f0;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c411dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 1028db388; end: 1028db3a7;  */

void FUN_1028db388(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028db3a8; end: 1028db3cb;  */

void FUN_1028db3a8(long param_1,long param_2)

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



/* Entry: 1028db3cc; end: 1028db55f;  */

void FUN_1028db3cc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uStack_18;
  
  switch(param_1) {
  case 0:
    uVar2 = 0x4145485f44454546;
    uVar3 = 0xeb00000000524544;
    break;
  case 1:
    uVar2 = 0x4d5f535554415453;
    uVar3 = 0xee00454741535345;
    break;
  case 2:
    uVar2 = 0x4153505f50414e53;
    uVar3 = 0xe800000000000000;
    break;
  case 3:
    uVar2 = 0xd000000000000014;
    uVar3 = 0x800000010f0c8f60;
    break;
  case 4:
    pcVar4 = "POST_SUCCESS_CALL_1_1";
    goto code_r0x0001028db420;
  case 5:
    uVar2 = 0xd000000000000016;
    uVar3 = 0x800000010f0c8f20;
    break;
  case 6:
    uVar2 = 0xd000000000000017;
    uVar3 = 0x800000010f0c8f00;
    break;
  case 7:
    uVar2 = 0x5f4c4c41435f4e49;
    uVar3 = 0xeb00000000315f31;
    break;
  case 8:
    uVar2 = 0x5f4c4c41435f4e49;
    uVar3 = 0xed000050554f5247;
    break;
  case 9:
    pcVar4 = "PROFILE_ACTIVITY_CARD";
code_r0x0001028db420:
    uVar3 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    uVar2 = 0xd000000000000015;
    break;
  case 10:
    uVar2 = 0x4e494c5f50454544;
    uVar3 = 0xe90000000000004b;
    break;
  default:
    uStack_18 = param_1;
    func_0x000107c60614(&UNK_1106155f8,&uStack_18,&UNK_1106155f8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028db560);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb773c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF_110350f90)(uVar2,uVar3);
  return;
}



/* Entry: 1028db560; end: 1028db637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1028db560(double param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec9568);
  dVar3 = 0.0;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar2 = lVar1;
      func_0x000107c5dbc0();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c5e07c();
        func_0x000107c615e8(lVar2);
      }
      func_0x000107c3ec60(unaff_x20);
      func_0x000107c609cc();
      dVar3 = 1.79769313486232e+308;
      func_0x000107c5b098(lVar1);
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c517d0();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(unaff_x20);
      dVar3 = dVar3 + param_1;
    }
  }
  return dVar3;
}



/* Entry: 1028db638; end: 1028db71f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1028db638(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112ec95a8;
  uVar4 = (uint)*(byte *)(unaff_x20 + _DAT_112ec95a8);
  if (*(byte *)(unaff_x20 + _DAT_112ec95a8) == 2) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112ec9580);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c4a29c();
      uVar4 = (uint)lVar3;
      func_0x000107c615e8(lVar2);
    }
    *(char *)(unaff_x20 + lVar1) = (char)uVar4;
  }
  return uVar4 & 1;
}



/* Entry: 1028db720; end: 1028db7bb; -[_TtC32DWebExplainerTrayScopeEntryPoint33SCDWebExplainerTrayViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028db720(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112ec9550,0);
  *(undefined8 *)(param_1 + _DAT_112ec9568) = 0;
  *(undefined1 *)(param_1 + _DAT_112ec95a8) = 2;
  *(undefined8 *)(param_1 + _DAT_112ec95b0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "DWebExplainerTrayScopeEntryPoint/SCDWebExplainerTrayViewController.swift",
                      0x48,2,0x71,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028db7bc);
  (*pcVar1)();
}



/* Entry: 1028db7bc; end: 1028dba8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028db7bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *unaff_x20;
  undefined8 uVar7;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_viewDidLoad_112684cd8);
  puVar1 = unaff_x20;
  func_0x000107c53dec();
  FUN_1028dba8c();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ec9568);
  *(undefined **)(unaff_x20 + _DAT_112ec9568) = puVar1;
  puVar2 = puVar1;
  func_0x000107c61174();
  func_0x000107c61170(uVar7);
  if (puVar1 != (undefined *)0x0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    puVar1 = puVar2;
    if (unaff_x20 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c5a050();
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c52b50(unaff_x20);
      func_0x000107c61170(puVar1);
      func_0x000107c3d89c(unaff_x20);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar4 = puVar3;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar4 + 0x18) = 9;
      *(undefined8 *)(puVar4 + 0x10) = 4;
      puVar1 = unaff_x20;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      puVar5 = puVar2;
      func_0x000107c5cbe4(puVar2);
      func_0x000107c61180();
      puVar6 = puVar1;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar5);
      *(undefined **)(puVar4 + 0x20) = puVar6;
      puVar1 = unaff_x20;
      func_0x000107c4acb0();
      func_0x000107c61180();
      puVar5 = puVar2;
      func_0x000107c4acb0(puVar2);
      func_0x000107c61180();
      puVar6 = puVar1;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar5);
      *(undefined **)(puVar4 + 0x28) = puVar6;
      puVar1 = unaff_x20;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      puVar5 = puVar2;
      func_0x000107c5ce8c(puVar2);
      func_0x000107c61180();
      puVar6 = puVar1;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar5);
      *(undefined **)(puVar4 + 0x30) = puVar6;
      puVar1 = puVar2;
      func_0x000107c44d9c();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      FUN_1028db560();
      puVar5 = puVar1;
      func_0x000107c40290();
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      *(undefined **)(puVar4 + 0x38) = puVar5;
      uVar7 = 0;
      FUN_1028ddf3c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      puVar1 = puVar4;
      func_0x000107c5fc48(puVar4,uVar7);
      func_0x000107c61574(puVar4);
      func_0x000107c3d048(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(unaff_x20);
    }
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1028dba8c; end: 1028dc057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028dba8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar3 = 0;
  func_0x000107c5ef14();
  lVar20 = *(long *)(uVar3 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  lVar10 = (long)&puStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar19 = lVar10 - extraout_x12;
  lVar4 = *(long *)(unaff_x20 + _DAT_112ec9560);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = lVar4;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar4);
  if (lVar5 == 0) {
    return;
  }
  func_0x0001000d224c(&puStack_a0);
  puVar14 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
    func_0x000107c615e8(lVar5);
    return;
  }
  puVar6 = PTR_PTR_1126ab7c8;
  func_0x000107c610f8(PTR_PTR_1126ab7c8);
  func_0x000107c453e4();
  uVar15 = ((undefined8 *)(unaff_x20 + _DAT_112ec9528))[1];
  lStack_a8 = lVar5;
  if (uVar15 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ec9528);
    func_0x000107c5fadc(uVar7);
  }
  func_0x000107c56718(puVar6);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ec9530);
  FUN_1028db3cc(uVar7);
  func_0x000107c59558(puVar6);
  func_0x000107c61170(uVar7);
  puStack_b0 = puVar14;
  func_0x000107c52d58(puVar6);
  func_0x0001000d224c(&puStack_a0);
  func_0x000107c54fa0(puVar6);
  func_0x000107c615e8(puStack_a0);
  uVar8 = (ulong)*(byte *)(unaff_x20 + _DAT_112ec9540);
  func_0x000107c5fca0(uVar8);
  func_0x000107c59208(puVar6);
  func_0x000107c61170(uVar8);
  uVar9 = (ulong)*(byte *)(unaff_x20 + _DAT_112ec9548);
  func_0x000107c5fca0();
  func_0x000107c54448(puVar6);
  func_0x000107c61170();
  func_0x000107c5ef04(uVar19);
  func_0x000107c5eee0();
  pcVar18 = *(code **)(lVar20 + 8);
  uVar16 = uVar3;
  (*pcVar18)();
  uVar8 = 0;
  if (uVar15 != 0) {
    uVar8 = uVar9;
  }
  uVar9 = 0xe000000000000000;
  if (uVar15 != 0) {
    uVar9 = uVar15;
  }
  func_0x000107c5ef04(lVar10);
  func_0x000107c5eed8();
  (*pcVar18)(lVar10,uVar3);
  uVar3 = 0;
  if (uVar16 != 0) {
    uVar3 = uVar19;
  }
  uVar19 = 0xe000000000000000;
  if (uVar16 != 0) {
    uVar19 = uVar16;
  }
  uVar15 = uVar8 & 0xffffffffffff;
  if ((uVar9 & 0x2000000000000000) != 0) {
    uVar15 = uVar9 >> 0x38 & 0xf;
  }
  if (uVar15 != 0) {
    uVar15 = uVar3 & 0xffffffffffff;
    if ((uVar19 & 0x2000000000000000) != 0) {
      uVar15 = uVar19 >> 0x38 & 0xf;
    }
    if (uVar15 != 0) {
      lVar4 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 2;
      puVar14 = PTR___sSSN_11034da80;
      *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
      lVar10 = lVar4;
      func_0x00010075bbf0();
      *(ulong *)(lVar4 + 0x20) = uVar8;
      *(ulong *)(lVar4 + 0x28) = uVar9;
      *(undefined **)(lVar4 + 0x60) = puVar14;
      *(long *)(lVar4 + 0x68) = lVar10;
      *(long *)(lVar4 + 0x40) = lVar10;
      *(ulong *)(lVar4 + 0x48) = uVar3;
      *(ulong *)(lVar4 + 0x50) = uVar19;
      uVar7 = 0x40252d4025;
      uVar17 = 0xe500000000000000;
      func_0x000107c5fb00(0x40252d4025,0xe500000000000000,lVar4);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar17);
      func_0x000107c54454(puVar6);
      func_0x000107c61170(uVar7);
      goto LAB_1028dbdb4;
    }
  }
  func_0x000107c6142c(uVar9);
  func_0x000107c6142c(uVar19);
LAB_1028dbdb4:
  puVar2 = puStack_b0;
  puVar14 = &UNK_1105661f0;
  puVar11 = puVar14;
  func_0x000107c613fc(&UNK_1105661f0,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1028ddf7c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1105662d0;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c61574(puStack_78);
  func_0x000107c56ccc(puVar6);
  func_0x000107c60bd0(ppuVar12);
  puVar13 = puVar14;
  func_0x000107c613fc(&UNK_1105661f0,0x18,7);
  func_0x000107c61614(puVar13 + 0x10);
  pcStack_80 = (code *)0x1028ddfac;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1105662f8;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar13;
  func_0x000107c60bc4(ppuVar12);
  puVar11 = puStack_78;
  func_0x000107c6157c(puVar13);
  func_0x000107c61574(puVar11);
  func_0x000107c56ef8(puVar6);
  func_0x000107c60bd0(ppuVar12);
  pcStack_80 = (code *)0x1028ddfac;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110566320;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar13;
  func_0x000107c60bc4(ppuVar12);
  puVar11 = puStack_78;
  func_0x000107c6157c(puVar13);
  func_0x000107c61574(puVar11);
  func_0x000107c56e5c(puVar6);
  func_0x000107c60bd0(ppuVar12);
  puVar11 = puVar14;
  func_0x000107c613fc(&UNK_1105661f0,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  pcStack_80 = (code *)0x1028ddfdc;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110566348;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c61574(puStack_78);
  func_0x000107c56dac(puVar6);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c613fc(&UNK_1105661f0,0x18,7);
  func_0x000107c61614(puVar14 + 0x10);
  pcStack_80 = (code *)0x1028de00c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110566370;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar14;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c61574(puStack_78);
  func_0x000107c56e60(puVar6);
  func_0x000107c60bd0(ppuVar12);
  puVar14 = PTR_PTR_1126ab7d0;
  func_0x000107c610f8(PTR_PTR_1126ab7d0);
  func_0x000107c61174(puVar6);
  lVar4 = lStack_a8;
  func_0x000107c49520(puVar14);
  func_0x000107c61574(puVar13);
  func_0x000107c615e8(puVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c615e8(lVar4);
  return;
}



/* Entry: 1028dc058; end: 1028dc07f; -[_TtC32DWebExplainerTrayScopeEntryPoint33SCDWebExplainerTrayViewController viewDidLoad] */

void FUN_1028dc058(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028db7bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028dc080; end: 1028dc163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028dc080(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  FUN_1028ded70();
  puVar1 = PTR_PTR_1126afde0;
  func_0x000107c61168(PTR_PTR_1126afde0);
  uVar2 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c40930(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  lVar3 = *(long *)(unaff_x20 + _DAT_112ec9588);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar4 = puVar1;
    func_0x000107c61174(puVar1);
    func_0x000107c5c2e0(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1028dc164; end: 1028dc3e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028dc164(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  func_0x00010011df08();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x000103f5e1a4(0);
  func_0x000107c610f8();
  func_0x000103f5cdfc(uVar2,uVar1,param_2,2,8,0,0x27,0,0,0,0,0,0,0,0,0,0);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_110566498;
  func_0x000107c613fc(&UNK_110566498,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  pcStack_60 = FUN_1028de084;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1011f6060;
  puStack_68 = &UNK_1105664b0;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000103f5b134(0);
  func_0x000107c610f8();
  puVar4 = puVar3;
  func_0x000107c61174(puVar3);
  func_0x000103f5aeec(puVar3,0,0,0,0,0);
  func_0x000103f5a410(0);
  func_0x000107c610f8();
  uVar6 = 0;
  func_0x000103f5a2cc(0,0);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ec95a0);
  uVar2 = uVar6;
  func_0x0001028db6ac();
  uVar7 = 0;
  FUN_1028ddf3c(0,0x112d60fb0,&PTR_PTR_1126b3568);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar7);
  func_0x000107c3edb0(uVar9);
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(puVar8);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ec9598));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  return;
}



/* Entry: 1028dc3e4; end: 1028dc4e3;  */

void FUN_1028dc3e4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    pcVar2 = "createExplainerTrayView()";
    func_0x0001000c10c0("createExplainerTrayView()");
    func_0x000107c61180();
    func_0x000107c613fc(param_2,0x18,7);
    *(long *)(param_2 + 0x10) = param_1;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    ppuVar3 = &puStack_88;
    uStack_70 = param_4;
    uStack_68 = param_3;
    lStack_60 = param_2;
    func_0x000107c60bc4(ppuVar3);
    lVar1 = lStack_60;
    func_0x000107c61174(param_1);
    func_0x000107c61574(lVar1);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 1028dc4e4; end: 1028dc52f;  */

void FUN_1028dc4e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1028deb80(0);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c4f018(param_1,param_2,uVar1,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028dc530; end: 1028dc9db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028dc530(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  puVar6 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar6,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x000107c61168(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
    func_0x000107c43d80();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5ed70(_DAT_112ec9538);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar6);
    func_0x000107c59a00(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    pcVar4 = "createExplainerTrayView()";
    func_0x0001000c10c0("createExplainerTrayView()");
    func_0x000107c61180();
    func_0x000107c613fc(param_2,0x18,7);
    *(long *)(param_2 + 0x10) = param_1;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    ppuVar5 = &puStack_98;
    uStack_80 = param_4;
    uStack_78 = param_3;
    lStack_70 = param_2;
    func_0x000107c60bc4(ppuVar5);
    lVar1 = lStack_70;
    func_0x000107c61174(param_1);
    func_0x000107c61574(lVar1);
    func_0x000107c4e524(pcVar4);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(pcVar4);
  }
  return;
}



/* Entry: 1028dc9dc; end: 1028dcc1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028dc9dc(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  if (param_1 == 0) {
    lVar4 = -0x2fffffffffffffed;
    func_0x000107c5fadc(0xd000000000000013,0x800000010f04f1a0);
    uVar3 = 0;
    func_0x000107c5fe40(0);
    lVar2 = lVar4;
    uVar6 = uVar3;
    func_0x000107c312f4(lVar4,uVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar3);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028dcc20);
      (*pcVar1)();
    }
    lVar4 = lVar2;
    func_0x000107c5faec(lVar2);
    func_0x000107c61170(lVar2);
    puVar5 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    lVar2 = lVar4;
    func_0x000107c5fadc(lVar4,uVar6);
    func_0x000107c5fadc(lVar4,uVar6);
    func_0x000107c40930(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar4);
    lVar4 = *(long *)(unaff_x20 + _DAT_112ec9588);
    func_0x000107c5c734();
    func_0x000107c61180();
  }
  else {
    lVar2 = -0x2ffffffffffffff0;
    func_0x000107c5fadc(0xd000000000000010,0x800000010f0c8fd0);
    uVar3 = 0;
    func_0x000107c5fe40(0);
    lVar4 = lVar2;
    uVar6 = uVar3;
    func_0x000107c312f4(lVar2,uVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028dcc1c);
      (*pcVar1)();
    }
    lVar2 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    puVar5 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    lVar4 = lVar2;
    func_0x000107c5fadc(lVar2,uVar6);
    func_0x000107c5fadc(lVar2,uVar6);
    func_0x000107c409d8(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar2);
    lVar4 = *(long *)(unaff_x20 + _DAT_112ec9588);
    func_0x000107c5c734();
    func_0x000107c61180();
  }
  if (lVar4 != 0) {
    func_0x000107c61174(puVar5);
    func_0x000107c5c2e0(lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
  return;
}



/* Entry: 1028dcc20; end: 1028dcc4b; -[_TtC32DWebExplainerTrayScopeEntryPoint33SCDWebExplainerTrayViewController initWithNibName:bundle:] */

void FUN_1028dcc20(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DWebExplainerTrayScopeEntryPoint.SCDWebExplainerTrayViewController",0x42,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028dcc4c);
  (*pcVar1)();
}



/* Entry: 1028dcc4c; end: 1028dccab; -[_TtC32DWebExplainerTrayScopeEntryPoint33SCDWebExplainerTrayViewController initWithNibName:bundle:transitionType:] */

void FUN_1028dcc4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DWebExplainerTrayScopeEntryPoint.SCDWebExplainerTrayViewController",0x42,
                      "init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028dcc78);
  (*pcVar1)();
}



/* Entry: 1028dccac; end: 1028dcdbb; -[_TtC32DWebExplainerTrayScopeEntryPoint33SCDWebExplainerTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028dccac(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec9528 + 8));
  lVar1 = _DAT_112ec9538;
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  FUN_1028db35c(param_1 + _DAT_112ec9550);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec9558));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec9560));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec9568));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec9570));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec9578));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec9580));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec9588));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec9590));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec9598));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec95a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec95b0));
  return;
}



/* Entry: 1028dcdbc; end: 1028dcdc3;  */

void FUN_1028dcdbc(void)

{
  if (lRam0000000112ec95e0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6fc150);
  return;
}



/* Entry: 1028dcdc4; end: 1028dcdfb;  */

void FUN_1028dcdc4(undefined8 param_1)

{
  if (lRam0000000112ec95e0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6fc150);
  return;
}



/* Entry: 1028dcdfc; end: 1028dcecf;  */

void FUN_1028dcdfc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_a8 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_b0 = &UNK_10daed168;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_a0 = *(long *)(lVar1 + -8) + 0x40;
    puStack_98 = &UNK_10daed180;
    puStack_90 = &UNK_10daed180;
    puStack_88 = &UNK_10daed198;
    puStack_80 = PTR___sBoWV_11034d678 + 0x40;
    puStack_78 = PTR___sBOWV_11034d658 + 0x40;
    puStack_70 = &UNK_10daed1b0;
    puStack_30 = &UNK_10daed1c8;
    puStack_28 = &UNK_10daed1b0;
    puStack_68 = puStack_78;
    puStack_60 = puStack_78;
    puStack_58 = puStack_78;
    puStack_50 = puStack_78;
    puStack_48 = puStack_80;
    puStack_40 = puStack_78;
    puStack_38 = puStack_78;
    func_0x000107c61630(param_1,0x100,0x12,&puStack_b0,param_1 + 0x50);
  }
  return;
}



/* Entry: 1028dced0; end: 1028dced7; -[_TtC32DWebExplainerTrayScopeEntryPoint33SCDWebExplainerTrayViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_1028dced0(void)

{
  return 1;
}



/* Entry: 1028dced8; end: 1028dd017;  */

/* WARNING: Possible PIC construction at 0x0001028dcfdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028dcfe0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028dced8(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec9598);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113034f28);
    lVar1 = ((undefined8 *)(param_1 + _DAT_113034f40))[1];
    if (lVar1 == 0) {
      uVar5 = 0;
      lVar1 = -0x2000000000000000;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + _DAT_113034f40);
    }
    func_0x000107c61434();
    FUN_1028dd018(uVar3,uVar5,lVar1);
    func_0x000107c6142c(lVar1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_113034f30);
    uVar4 = *(undefined8 *)(lVar2 + _DAT_113034908);
    uVar3 = uVar4;
    func_0x000107c61174(uVar4);
    FUN_1028dd494(uVar5,uVar4);
    func_0x000107c61170(uVar3);
    func_0x0001028db6ac();
    func_0x000107c41864();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
    return;
  }
  return;
}



/* Entry: 1028dd018; end: 1028dd493;  */

/* WARNING: Possible PIC construction at 0x0001028dd320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028dd44c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028dd324) */
/* WARNING: Removing unreachable block (ram,0x0001028dd450) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028dd018(undefined *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long unaff_x20;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *apuStack_a0 [7];
  long lStack_68;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar10 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar10 = param_1;
    }
    func_0x000107c60480();
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar10 != (undefined *)0x0) {
    apuStack_a0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001012facac(0,(ulong)puVar10 & ((long)puVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028dd494);
      (*pcVar2)();
    }
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      puVar9 = (undefined8 *)(param_1 + 0x20);
      do {
        puVar7 = apuStack_a0[0];
        uVar6 = *puVar9;
        func_0x000107c4fa44();
        func_0x000107c61180();
        uVar1 = *(ulong *)(puVar7 + 0x10);
        apuStack_a0[0] = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          func_0x0001012facac(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_a0[0] + 0x10) = uVar1 + 1;
        *(undefined8 *)(apuStack_a0[0] + uVar1 * 8 + 0x20) = uVar6;
        puVar10 = puVar10 + -1;
        puVar9 = puVar9 + 1;
        puVar7 = apuStack_a0[0];
      } while (puVar10 != (undefined *)0x0);
    }
    else {
      puVar12 = (undefined *)0x0;
      do {
        puVar7 = apuStack_a0[0];
        puVar13 = puVar12;
        func_0x0001011f491c(puVar12,param_1);
        puVar3 = puVar13;
        func_0x000107c4fa44();
        func_0x000107c61180();
        func_0x000107c615e8(puVar13);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        apuStack_a0[0] = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          func_0x0001012facac(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
        }
        puVar12 = puVar12 + 1;
        *(ulong *)(apuStack_a0[0] + 0x10) = uVar1 + 1;
        *(undefined **)(apuStack_a0[0] + uVar1 * 8 + 0x20) = puVar3;
        puVar7 = apuStack_a0[0];
      } while (puVar10 != puVar12);
    }
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar10 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar10 = param_1;
    }
    func_0x000107c60480();
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
  if (puVar10 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1028dd47c);
          (*pcVar2)();
        }
        puVar3 = *(undefined **)(param_1 + (long)puVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar3 = puVar13;
        func_0x0001011f491c(puVar13,param_1);
      }
      if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1028dd478);
        (*pcVar2)();
      }
      puVar11 = puVar13 + 1;
      apuStack_a0[0] = puVar3;
      FUN_1028dd600(&lStack_68,apuStack_a0);
      func_0x000107c61170(puVar3);
      lVar5 = lStack_68;
      if (lStack_68 != 0) {
        puVar3 = puVar12;
        func_0x000107c61550();
        if ((((int)puVar3 == 0) || ((long)puVar12 < 0)) ||
           (puVar3 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar12 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar12) {
              puVar4 = puVar12;
            }
            func_0x000107c60480(puVar4);
          }
          puVar3 = (undefined *)0x0;
          func_0x0001011f467c(0,puVar4 + 1,1,puVar12);
        }
        uVar8 = (ulong)puVar3 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar8 + 0x10);
        puVar12 = puVar3;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
          func_0x0001011f467c(puVar12,uVar1 + 1,1,puVar3);
          uVar8 = (ulong)puVar12 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
        *(long *)(uVar8 + uVar1 * 8 + 0x20) = lVar5;
      }
      puVar13 = puVar13 + 1;
    } while (puVar11 != puVar10);
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112ec9578);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uVar6 = 0;
    func_0x000104522c9c(0);
    func_0x000107c5fc48(puVar12,uVar6);
    puVar7 = puVar12;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar7);
  return;
}



/* Entry: 1028dd494; end: 1028dd563;  */

/* WARNING: Possible PIC construction at 0x0001028dd53c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028dd494(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  if ((*(long *)(param_1 + 0x10) != 0 && param_2 != 0) &&
     (uVar1 = *(ulong *)(param_2 + _DAT_113034af0), uVar1 != 0)) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      FUN_1028db638();
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(unaff_x20 + _DAT_112ec9580);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
          func_0x000107c51e38(lVar3);
          func_0x000107c615e8(lVar3);
          uVar1 = param_1;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 1028dd564; end: 1028dd5b3; -[_TtC32DWebExplainerTrayScopeEntryPoint33SCDWebExplainerTrayViewController didSendWithSelectionState:] */

/* WARNING: Possible PIC construction at 0x0001028dd59c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028dd5a0) */

void FUN_1028dd564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1028dced8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1028dd5b4; end: 1028dd5ff; -[_TtC32DWebExplainerTrayScopeEntryPoint33SCDWebExplainerTrayViewController didDismissWithSelectedItems:sendToDismissSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028dd5b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec9598);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1028dd600; end: 1028dd8c3;  */

/* WARNING: Removing unreachable block (ram,0x0001028dd8c0) */
/* WARNING: Removing unreachable block (ram,0x0001028dd8bc) */

void FUN_1028dd600(ulong *param_1,ulong *param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  ppuVar4 = (undefined **)*param_2;
  ppuVar5 = ppuVar4;
  func_0x000107c4fa44();
  func_0x000107c61180();
  ppuVar1 = ppuVar5;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar5);
  ppuVar5 = ppuVar1;
  func_0x000107c51cec();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar1);
  ppuVar1 = ppuVar5;
  func_0x000107c5faec();
  lVar2 = param_3;
  func_0x000107c61170(ppuVar5);
  ppuVar6 = &PTR____CFConstantStringClassReference_110f52c78;
  ppuVar5 = ppuVar6;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52c78);
  func_0x000107c5faec();
  lVar3 = lVar2;
  func_0x000107c61170(ppuVar5);
  if (ppuVar1 == ppuVar6 && param_3 == lVar2) {
    func_0x000107c6142c(param_3);
    param_3 = lVar2;
LAB_1028dd700:
    func_0x000107c6142c(param_3);
    func_0x000104522c9c(0);
    func_0x000107c4fa44();
    func_0x000107c61180();
    ppuVar5 = ppuVar4;
    func_0x000107c44fdc();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar4);
    ppuVar1 = ppuVar5;
    func_0x000107c4fa4c();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar5);
    ppuVar5 = ppuVar1;
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar1);
    func_0x00010452281c(ppuVar5,lVar3);
    lVar2 = lVar3;
  }
  else {
    ppuVar5 = ppuVar1;
    lVar3 = param_3;
    func_0x000107c605b8(ppuVar1,param_3,ppuVar6,lVar2,0);
    func_0x000107c6142c(lVar2);
    if (((ulong)ppuVar5 & 1) != 0) goto LAB_1028dd700;
    ppuVar6 = &PTR____CFConstantStringClassReference_110f52c98;
    ppuVar5 = ppuVar6;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52c98);
    func_0x000107c5faec();
    lVar2 = lVar3;
    func_0x000107c61170(ppuVar5);
    if ((ppuVar1 == ppuVar6) && (param_3 == lVar3)) {
      func_0x000107c6142c(param_3);
      func_0x000107c6142c(lVar3);
    }
    else {
      lVar2 = param_3;
      func_0x000107c605b8(ppuVar1,param_3,ppuVar6,lVar3,0);
      func_0x000107c6142c(param_3);
      func_0x000107c6142c(lVar3);
      if (((ulong)ppuVar1 & 1) == 0) {
        ppuVar5 = (undefined **)0x0;
        goto LAB_1028dd790;
      }
    }
    func_0x000104522c9c(0);
    func_0x000107c4fa44();
    func_0x000107c61180();
    ppuVar5 = ppuVar4;
    func_0x000107c44fdc();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar4);
    ppuVar1 = ppuVar5;
    func_0x000107c4fa4c();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar5);
    ppuVar5 = ppuVar1;
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar1);
    func_0x00010452292c(ppuVar5,lVar2);
  }
  func_0x000107c6142c(lVar2);
LAB_1028dd790:
  *param_1 = (ulong)ppuVar5;
  return;
}



/* Entry: 1028dd8c4; end: 1028dd94b;  */

void FUN_1028dd8c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_1028dd94c(param_1,param_4,param_5,param_6);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1028dd94c; end: 1028ddbab;  */

/* WARNING: Possible PIC construction at 0x0001028dd9d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028dda14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ddb2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ddb3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ddb54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ddb80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ddb58) */
/* WARNING: Removing unreachable block (ram,0x0001028ddb40) */
/* WARNING: Removing unreachable block (ram,0x0001028ddb30) */
/* WARNING: Removing unreachable block (ram,0x0001028dda18) */
/* WARNING: Removing unreachable block (ram,0x0001028dd9dc) */
/* WARNING: Removing unreachable block (ram,0x0001028ddb84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028dd94c(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61174();
  FUN_1028ddbac();
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112ec9570);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5ed70(_DAT_112ec9538);
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      uVar4 = *(undefined8 *)(param_1 + _DAT_11307fc78);
      func_0x000107c61434(uVar4);
      func_0x000107c5fc48();
      func_0x000107c6142c(uVar4);
      puVar2 = &UNK_1105661f0;
      func_0x000107c613fc(&UNK_1105661f0,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      uStack_60 = 0x1028ddf2c;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_100f5c588;
      puStack_68 = &UNK_110566258;
      puStack_58 = puVar2;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c61574(puStack_58);
      func_0x000107c51ee4(lVar3);
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c48af4(puVar2);
    param_1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028ddbac; end: 1028dddd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028ddbac(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  if (param_2 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar7 = param_2;
    }
    func_0x000107c60480(uVar7);
  }
  lVar2 = _DAT_112ec9550;
  lVar1 = unaff_x20 + _DAT_112ec9550;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4d944();
    func_0x000107c615e8(lVar1);
  }
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4d948();
    func_0x000107c615e8(lVar2);
  }
  uVar8 = *(undefined8 *)(param_1 + _DAT_11307fc80);
  uVar3 = 0;
  func_0x0001044c309c(0);
  func_0x000107c5fc48(uVar8,uVar3);
  uVar3 = uVar8;
  func_0x0001086066b4();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  puVar4 = PTR_PTR_1126b1a40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5e7ec();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5e4a4(puVar4);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61174(uVar3);
  puVar5 = puVar4;
  func_0x000107c5e500();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170();
  func_0x00010011df08();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar7);
  }
  puVar6 = puVar4;
  func_0x000107c5e870(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  puVar5 = PTR_PTR_1126ab7c0;
  func_0x000107c610f8(PTR_PTR_1126ab7c0);
  func_0x000107c476c0();
  puVar6 = puVar4;
  func_0x000107c5e4f4(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  puVar5 = puVar4;
  func_0x000107c3ecc8(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 1028dddd4; end: 1028ddea7;  */

void FUN_1028dddd4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "send(to:recipients:additionalText:)";
  func_0x0001000c10c0("send(to:recipients:additionalText:)");
  func_0x000107c61180();
  puVar2 = &UNK_110566290;
  func_0x000107c613fc(&UNK_110566290,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  uStack_40 = 0x1028ddf34;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105662a8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1028ddea8; end: 1028ddf03;  */

void FUN_1028ddea8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1028dc9dc(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1028ddf04; end: 1028ddf3b;  */

void FUN_1028ddf04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_1028dd94c(param_1,uVar2,uVar1,uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1028ddf3c; end: 1028ddf7b;  */

void FUN_1028ddf3c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028ddf7c; end: 1028de03b;  */

void FUN_1028ddf7c(void)

{
  FUN_1028dc530();
  return;
}



/* Entry: 1028de03c; end: 1028de05b;  */

void FUN_1028de03c(void)

{
  func_0x0001028dc694();
  return;
}



/* Entry: 1028de05c; end: 1028de063;  */

void FUN_1028de05c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_1028deb80(0);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c4f018(uVar2,param_2,uVar1,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028de064; end: 1028de083;  */

void FUN_1028de064(void)

{
  FUN_1028dc164();
  return;
}



/* Entry: 1028de084; end: 1028de08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028de084(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  long lVar10;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = 0x112d36580;
  puVar5 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_112ec9538;
  puVar8 = &stack0xffffffffffffffb0 + -extraout_x8;
  func_0x000107c5ed70();
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar3 + -8);
  (**(code **)(lVar10 + 0x10))(puVar8,lVar7 + lVar1,lVar3);
  (**(code **)(lVar10 + 0x38))(puVar8,0,1,lVar3);
  func_0x000107c5fadc(lVar2,puVar5);
  func_0x000107c6142c(puVar5);
  puVar4 = puVar8;
  (**(code **)(lVar10 + 0x30))(puVar8,1,lVar3);
  puVar9 = (undefined1 *)0x0;
  if ((int)puVar4 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar10 + 8))(puVar8,lVar3);
    puVar9 = puVar4;
  }
  puVar5 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar6 = PTR_PTR_1126b0800;
  func_0x000107c610f8(PTR_PTR_1126b0800);
  func_0x000107c48cbc();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c451b0(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 1028de08c; end: 1028de0ab;  */

void FUN_1028de08c(void)

{
  FUN_1028dc080();
  return;
}



/* Entry: 1028de0ac; end: 1028de10b;  */

void FUN_1028de0ac(long param_1,long param_2)

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



/* Entry: 1028de10c; end: 1028de44f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028de10c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_loadView_112604be0);
  lVar2 = unaff_x20;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c59a2c();
    func_0x000107c5a304();
    lVar3 = unaff_x20;
    func_0x000107c44ca0();
    func_0x000107c61180();
    func_0x000107c59e24();
    func_0x000107c61170(lVar3);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ec9600);
    func_0x000107c569dc(uVar9);
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3d89c();
      func_0x000107c61170(lVar3);
    }
    lVar3 = 0x112d360b8;
    func_0x0001028decb8(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                        &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 9;
    *(undefined8 *)(lVar3 + 0x10) = 4;
    uVar4 = uVar9;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar5 = lVar2;
    func_0x000107c3ec1c(lVar2);
    func_0x000107c61180();
    uVar6 = uVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar5);
    *(undefined8 *)(lVar3 + 0x20) = uVar6;
    uVar4 = uVar9;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028de448);
      (*pcVar1)();
    }
    lVar7 = lVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar6 = uVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar3 + 0x28) = uVar6;
    uVar4 = uVar9;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028de44c);
      (*pcVar1)();
    }
    lVar7 = lVar5;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar6 = uVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar3 + 0x30) = uVar6;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028de450);
      (*pcVar1)();
    }
    puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar5 = unaff_x20;
    func_0x000107c5ce8c(unaff_x20);
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    uVar4 = uVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar5);
    *(undefined8 *)(lVar3 + 0x38) = uVar4;
    uVar9 = 0;
    FUN_1028ded30(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar5 = lVar3;
    func_0x000107c5fc48(lVar3,uVar9);
    func_0x000107c61574(lVar3);
    func_0x000107c3d048(puVar8);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 1028de450; end: 1028de477; -[_TtC32DWebExplainerTrayScopeEntryPoint32SCDWebLearnMoreWebViewController loadView] */

void FUN_1028de450(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028de10c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028de478; end: 1028de51b; -[_TtC32DWebExplainerTrayScopeEntryPoint32SCDWebLearnMoreWebViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028de478(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112ec9600);
  func_0x000107c5eae0(_DAT_112ec95f8);
  func_0x000107c4b768(uVar4);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(plVar3);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1028de51c; end: 1028de6c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028de51c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = _DAT_112ec95f8;
  if (lRam0000000112ec9498 != -1) {
    func_0x000107c61568(0x112ec9498,FUN_1028d94ac);
  }
  lVar3 = lVar2;
  func_0x000100028790(lVar2,0x113804c60);
  (**(code **)(lVar7 + 0x10))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3,lVar2);
  func_0x000107c5eaec(unaff_x20 + lVar1,0x404e000000000000,
                      &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),0);
  lVar1 = _DAT_112ec9600;
  puVar4 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  func_0x000107c453e4();
  puVar5 = PTR__OBJC_CLASS___WKWebView_1126b4f60;
  func_0x000107c610f8();
  func_0x000107c469b0(0,0,0,0);
  func_0x000107c5a050();
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
  }
  puVar6 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar6,PTR_s_initWithNibName_bundle__1125e9850,param_1,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return puVar6;
}



/* Entry: 1028de6c8; end: 1028de727; -[_TtC32DWebExplainerTrayScopeEntryPoint32SCDWebLearnMoreWebViewController initWithNibName:bundle:] */

void FUN_1028de6c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  FUN_1028de51c(param_3,param_2,param_4);
  return;
}



/* Entry: 1028de728; end: 1028de8df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028de728(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = _DAT_112ec95f8;
  if (lRam0000000112ec9498 != -1) {
    func_0x000107c61568(0x112ec9498,FUN_1028d94ac);
  }
  lVar3 = lVar2;
  func_0x000100028790(lVar2,0x113804c60);
  (**(code **)(lVar7 + 0x10))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3,lVar2);
  func_0x000107c5eaec(unaff_x20 + lVar1,0x404e000000000000,
                      &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),0);
  lVar1 = _DAT_112ec9600;
  puVar4 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  func_0x000107c453e4();
  puVar5 = PTR__OBJC_CLASS___WKWebView_1126b4f60;
  func_0x000107c610f8();
  func_0x000107c469b0(0,0,0,0);
  func_0x000107c5a050();
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
  }
  puVar6 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar6,PTR_s_initWithNibName_bundle_transitio_1125e9860,param_1,param_3,
                      param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return puVar6;
}



/* Entry: 1028de8e0; end: 1028de94f; -[_TtC32DWebExplainerTrayScopeEntryPoint32SCDWebLearnMoreWebViewController initWithNibName:bundle:transitionType:] */

void FUN_1028de8e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  FUN_1028de728(param_3,param_2,param_4,param_5);
  return;
}



/* Entry: 1028de950; end: 1028deacf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028de950(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = _DAT_112ec95f8;
  if (lRam0000000112ec9498 != -1) {
    func_0x000107c61568(0x112ec9498,FUN_1028d94ac);
  }
  lVar3 = lVar2;
  func_0x000100028790(lVar2,0x113804c60);
  (**(code **)(lVar7 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3,lVar2);
  func_0x000107c5eaec(unaff_x20 + lVar1,0x404e000000000000,
                      &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),0);
  lVar1 = _DAT_112ec9600;
  puVar4 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  func_0x000107c453e4();
  puVar5 = PTR__OBJC_CLASS___WKWebView_1126b4f60;
  func_0x000107c610f8();
  func_0x000107c469b0(0,0,0,0);
  func_0x000107c5a050();
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  puVar6 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar6,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar6 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar6);
  }
  return puVar6;
}



/* Entry: 1028dead0; end: 1028deaf7; -[_TtC32DWebExplainerTrayScopeEntryPoint32SCDWebLearnMoreWebViewController initWithCoder:] */

void FUN_1028dead0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1028de950();
  return;
}



/* Entry: 1028deaf8; end: 1028deb2b;  */

void FUN_1028deaf8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028deb2c; end: 1028deb77; -[_TtC32DWebExplainerTrayScopeEntryPoint32SCDWebLearnMoreWebViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028deb2c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_112ec95f8;
  lVar2 = 0;
  func_0x000107c5eb08();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec9600));
  return;
}



/* Entry: 1028deb78; end: 1028deb7f;  */

void FUN_1028deb78(void)

{
  if (lRam0000000112ec9630 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6fc198);
  return;
}



/* Entry: 1028deb80; end: 1028debb7;  */

void FUN_1028deb80(undefined8 param_1)

{
  if (lRam0000000112ec9630 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6fc198);
  return;
}



/* Entry: 1028debb8; end: 1028dec2f;  */

void FUN_1028debb8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eb08();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBOWV_11034d658 + 0x40;
    func_0x000107c61630(param_1,0x100,2,&lStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 1028dec30; end: 1028ded2f; -[_TtC32DWebExplainerTrayScopeEntryPoint32SCDWebLearnMoreWebViewController webView:didFinishNavigation:] */

/* WARNING: Possible PIC construction at 0x0001028dec90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028deca0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028dec94) */
/* WARNING: Removing unreachable block (ram,0x0001028deca4) */

void FUN_1028dec30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c44ca0();
  func_0x000107c61180();
  func_0x000107c5cab0(param_3);
  func_0x000107c61180();
  func_0x000107c59e18(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028ded30; end: 1028ded6f;  */

void FUN_1028ded30(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028ded70; end: 1028dee3b;  */

undefined1  [16] FUN_1028ded70(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe3;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0c90b0);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0c90d0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028dee3c);
  (*pcVar1)();
}



/* Entry: 1028dee3c; end: 1028deec3;  */

void FUN_1028dee3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_1028df818();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar1 = param_2;
  FUN_1028df580(param_2,param_3,param_4);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028deec4; end: 1028deecf;  */

void FUN_1028deec4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_1028df818();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  uVar3 = uVar1;
  FUN_1028df580(uVar1,uVar2,uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = uVar3;
  return;
}



/* Entry: 1028deed0; end: 1028df18f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1028deed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 auStack_90 [3];
  ulong uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar15 = *(long *)(unaff_x20 + _DAT_112ec9648);
  uVar11 = *(ulong *)(lVar15 + 0x10);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 != 0) {
    uVar12 = 0;
    lVar14 = lVar15 + 0x20;
    do {
      if (*(ulong *)(lVar15 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1028df190);
        (*pcVar2)();
      }
      FUN_1028df6f0(lVar14,auStack_90);
      lVar1 = lStack_70;
      uVar3 = uStack_78;
      func_0x0001000a8868(auStack_90,uStack_78);
      (**(code **)(lVar1 + 0x10))(uVar3,lVar1);
      if ((uVar3 & 1) == 0) {
        func_0x0001000834e4(auStack_90);
      }
      else {
        puVar4 = puVar13;
        func_0x000107c61558();
        puStack_68 = puVar13;
        if (((ulong)puVar4 & 1) == 0) {
          FUN_1028df310(0,*(long *)(puVar13 + 0x10) + 1,1);
        }
        uVar3 = *(ulong *)(puStack_68 + 0x10);
        if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar3) {
          FUN_1028df310(1 < *(ulong *)(puStack_68 + 0x18),uVar3 + 1,1);
        }
        puVar13 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        FUN_1028df734(auStack_90,puStack_68 + uVar3 * 0x28 + 0x20);
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0x28;
    } while (uVar11 != uVar12);
  }
  if (*(long *)(puVar13 + 0x10) == 0) {
    func_0x000107c61574(puVar13);
    func_0x0001000285a8(0x112ec9678,&UNK_10daed248);
    auStack_90[0] = 0;
    puVar9 = auStack_90;
    func_0x000100854cb0(puVar9);
    puVar10 = puVar9;
    func_0x000104877210();
  }
  else {
    puVar5 = (undefined8 *)0x0;
    func_0x0001028e0330();
    func_0x000107c613fc();
    puVar5[2] = puVar13;
    puVar5[3] = param_2;
    puVar5[4] = param_3;
    puVar5[5] = 0;
    func_0x0001000285a8(0x112d5c1e0,&UNK_10d923090);
    func_0x000107c61434(param_3);
    func_0x0001000b637c(param_1);
    uVar6 = param_1;
    func_0x000101324720();
    func_0x0001000c2068();
    func_0x000107c61574(param_1);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ec9650);
    func_0x000104880bc0(0x3fd6666666666666,uVar7);
    func_0x000107c61574(uVar6);
    func_0x000107c6157c(puVar5);
    uVar6 = 0x112ec9658;
    func_0x0001000285a8(0x112ec9658,&UNK_10daed240);
    uVar8 = 0x1028df74c;
    func_0x0001000bfde0(0x1028df74c,puVar5,uVar6);
    func_0x000107c61574(uVar7);
    puVar10 = puVar5;
    func_0x000107c61574(puVar5);
    FUN_1028df754();
    func_0x0001000c2068();
    func_0x000107c61574(uVar8);
    puVar9 = *(undefined8 **)(unaff_x20 + _DAT_112ec9670);
    func_0x000100471e0c(puVar9,0);
    func_0x000107c61574(puVar10);
    func_0x000104877210();
    func_0x000107c61574(puVar5);
  }
  func_0x000107c61574(puVar9);
  return puVar10;
}



/* Entry: 1028df190; end: 1028df1d7;  */

void FUN_1028df190(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5faec();
  FUN_1028dffd0();
  func_0x000107c6142c(param_3);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028df1d8; end: 1028df257; -[_TtC35SCChatIntentDetectionImplementation40ChatIntentDetectionServiceImplementation detectIntentInDraft:conversationId:] */

void FUN_1028df1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028deed0(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028df258; end: 1028df2b7; -[_TtC35SCChatIntentDetectionImplementation40ChatIntentDetectionServiceImplementation init] */

void FUN_1028df258(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatIntentDetectionImplementation.ChatIntentDetectionServiceImplementation"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028df284);
  (*pcVar1)();
}



/* Entry: 1028df2b8; end: 1028df30f; -[_TtC35SCChatIntentDetectionImplementation40ChatIntentDetectionServiceImplementation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028df2e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028df2e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028df2b8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec9648));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec9650));
  return;
}



/* Entry: 1028df310; end: 1028df32b;  */

void FUN_1028df310(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1028df32c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1028df32c; end: 1028df57f;  */

undefined * FUN_1028df32c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1028df470);
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
    puVar3 = (undefined *)0x112ec96b0;
    func_0x0001000285a8(0x112ec96b0,&UNK_10daed2f0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112ec96b8;
    func_0x0001000285a8(0x112ec96b8,&UNK_10daed2f8);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1028df580; end: 1028df6ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028df580(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  uVar4 = *(undefined8 *)(lStack_58 + _DAT_11305e778);
  func_0x000107c6157c(uVar4);
  func_0x000107c61170(lStack_58);
  func_0x0001000d224c(auStack_80);
  func_0x000107c61574(uVar4);
  puVar1 = auStack_80;
  func_0x0001000a8868(puVar1,uStack_68);
  uVar2 = 2;
  func_0x000100774b74(2,0,1,uStack_68,uStack_60,puVar1);
  pcVar3 = "init(asyncQueueServices:circumstanceEngine:messagingExperimentServices:)";
  func_0x0001000c10c0("init(asyncQueueServices:circumstanceEngine:messagingExperimentServices:)");
  func_0x000107c61180();
  func_0x000107c614f0();
  func_0x000100083b20(&uStack_88);
  func_0x000107c614f0(uStack_88);
  func_0x000100083b20(&uStack_90);
  uVar4 = uStack_90;
  func_0x000107c4cdb8(uStack_90);
  func_0x000107c61180();
  func_0x000107c61170(uStack_90);
  FUN_1028df838(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x0001028df470(uVar2,pcVar3,uStack_88,uVar4);
  func_0x0001000834e4(auStack_80);
  return uVar2;
}



/* Entry: 1028df6f0; end: 1028df733;  */

long FUN_1028df6f0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1028df734; end: 1028df753;  */

undefined8 * FUN_1028df734(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1028df754; end: 1028df7c3;  */

void FUN_1028df754(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112ec9660 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ec9658;
  func_0x00010002969c(0x112ec9658,&UNK_10daed240);
  uVar2 = uVar1;
  FUN_1028df7c4();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112ec9660 = puVar3;
  return;
}



/* Entry: 1028df7c4; end: 1028df807;  */

void FUN_1028df7c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ec9668 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001031a34c4(0xff);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112ec9668 = puVar2;
  return;
}



/* Entry: 1028df808; end: 1028df817;  */

undefined1  [16] FUN_1028df808(void)

{
  return ZEXT816(0x110566600);
}



/* Entry: 1028df818; end: 1028df837;  */

void FUN_1028df818(void)

{
  func_0x000107c61168(&PTR_PTR_11286d380);
  return;
}



/* Entry: 1028df838; end: 1028df8db;  */

void FUN_1028df838(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028df8dc; end: 1028df93f;  */

undefined8 * FUN_1028df8dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 1028df940; end: 1028df983;  */

undefined8 * FUN_1028df940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c61170(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 1028df984; end: 1028dfa1b;  */

int FUN_1028df984(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1028dfa1c; end: 1028dfab7;  */

void FUN_1028dfa1c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c49b54();
    func_0x000107c615e8(param_2);
    if ((int)lVar1 != 0) {
      uVar2 = 0xd000000000000030;
      func_0x000107c5fadc(0xd000000000000030,0x800000010f0c93d0);
      func_0x000107c3ebd4(param_3);
      func_0x000107c61170(uVar2);
    }
  }
  return;
}



/* Entry: 1028dfab8; end: 1028dfac7;  */

undefined8 FUN_1028dfab8(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1028dfac8; end: 1028dfbb7;  */

undefined8 FUN_1028dfac8(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar2 = uVar1;
  func_0x000107c61538();
  FUN_1028e03e8();
  uVar3 = 0;
  if ((uVar2 & 1) == 0) {
    func_0x000107c61538(0,uVar1,0x112ec9820);
    FUN_1028e03e8();
    uVar3 = 0x3ff0000000000000;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Entry: 1028dfbb8; end: 1028dfbbf;  */

undefined8 * FUN_1028dfbb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  func_0x000107c61174();
  func_0x000107c615f0(uVar1);
  return param_1;
}



/* Entry: 1028dfbc0; end: 1028dfc23;  */

void FUN_1028dfbc0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1028dfc24; end: 1028dfc87;  */

undefined8 * FUN_1028dfc24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 1028dfc88; end: 1028dfccb;  */

undefined8 * FUN_1028dfc88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c61170(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 1028dfccc; end: 1028dfd63;  */

int FUN_1028dfccc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1028dfd64; end: 1028dfdff;  */

void FUN_1028dfd64(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c49b58();
    func_0x000107c615e8(param_2);
    if ((int)lVar1 != 0) {
      uVar2 = 0xd000000000000026;
      func_0x000107c5fadc(0xd000000000000026,0x800000010f0c94b0);
      func_0x000107c3ebd4(param_3);
      func_0x000107c61170(uVar2);
    }
  }
  return;
}



/* Entry: 1028dfe00; end: 1028dfe13;  */

undefined8 FUN_1028dfe00(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1028dfe14; end: 1028dfe6b;  */

undefined8 FUN_1028dfe14(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  lVar13 = *(long *)(lVar7 + 0x10);
  if (lVar13 != 0) {
    lVar1 = lVar7 + 0x20;
    func_0x000100e8b654();
    lVar14 = 0;
    do {
      puVar5 = PTR___sSSN_11034da80;
      puVar9 = (ulong *)(lVar1 + lVar14 * 0x10);
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      uStack_70 = 0x20;
      uStack_68 = 0xe100000000000000;
      uStack_b8 = uVar2;
      uStack_b0 = uVar3;
      func_0x000107c61434(uVar3);
      puVar8 = &uStack_70;
      func_0x000107c6022c(puVar8,puVar5,puVar5,lVar7,lVar7);
      if (((ulong)puVar8 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) != 0) {
          func_0x000107c6068c(&uStack_b8,*(undefined8 *)(param_1 + 0x28));
          puVar9 = &uStack_b8;
          func_0x000107c5fb58(puVar9,uVar2,uVar3);
          func_0x000107c606a8();
          uVar11 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
          uVar12 = (ulong)puVar9 & (uVar11 ^ 0xffffffffffffffff);
          if ((*(ulong *)(param_1 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0) {
            do {
              puVar9 = (ulong *)(*(long *)(param_1 + 0x30) + uVar12 * 0x10);
              uVar10 = *puVar9;
              uVar4 = puVar9[1];
              if ((uVar10 == uVar2 && uVar4 == uVar3) ||
                 (func_0x000107c605b8(uVar10,uVar4,uVar2,uVar3,0), (uVar10 & 1) != 0)) {
                func_0x000107c6142c(uVar3);
                return 1;
              }
              uVar12 = uVar12 + 1 & ~uVar11;
            } while ((*(ulong *)(param_1 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0);
          }
        }
        func_0x000107c6142c(uVar3);
      }
      else {
        uStack_70 = 0x20;
        uStack_68 = 0xe100000000000000;
        uStack_b8 = param_2;
        uStack_b0 = param_3;
        func_0x000107c61434(param_3);
        func_0x000107c5fb78(uVar2,uVar3);
        uVar6 = uStack_68;
        func_0x000107c61434(uStack_68);
        func_0x000107c5fb78(0x20,0xe100000000000000);
        func_0x000107c6142c(uVar6);
        uVar6 = uStack_68;
        puVar8 = &uStack_70;
        func_0x000107c6022c(puVar8,puVar5,puVar5,lVar7,lVar7);
        func_0x000107c6142c(param_3);
        func_0x000107c6142c(uVar6);
        func_0x000107c6142c(uVar3);
        if (((ulong)puVar8 & 1) != 0) {
          return 1;
        }
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar13);
  }
  return 0;
}



/* Entry: 1028dfe6c; end: 1028dffc7;  */

double FUN_1028dfe6c(void)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  
  uVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar3 = uVar2;
  func_0x000107c61538();
  FUN_1028e03e8();
  dVar6 = 0.0;
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar2;
    func_0x000107c61538(0,uVar2,0x112ec9d50);
    FUN_1028e03e8();
    uVar4 = uVar2;
    func_0x000107c61538(uVar2,0x112ec9f08);
    FUN_1028e03e8();
    uVar5 = uVar2;
    func_0x000107c61538(uVar2,0x112eca0e0);
    FUN_1028e03e8();
    bVar1 = (uVar3 & 1) == 0;
    if ((uVar5 & 1) == 0) {
      dVar6 = 0.4;
      if (bVar1) {
        dVar6 = 0.0;
      }
    }
    else {
      dVar6 = 1.0;
      if (bVar1) {
        dVar6 = 0.6;
      }
    }
    if ((uVar4 & 1) != 0) {
      dVar7 = dVar6 + 0.4;
      func_0x000107c61538(uVar2,0x112eca418);
      FUN_1028e03e8();
      dVar6 = dVar7;
      if (((uVar2 & 1) != 0) && (dVar6 = 1.0, 1.0 < dVar7)) {
        dVar6 = dVar7;
      }
    }
  }
  return dVar6;
}



/* Entry: 1028dffc8; end: 1028dffcf;  */

undefined8 * FUN_1028dffc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  func_0x000107c61174();
  func_0x000107c615f0(uVar1);
  return param_1;
}



/* Entry: 1028dffd0; end: 1028e02fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1028dffd0(ulong param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 auStack_f0 [24];
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  uVar8 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar8 = param_2 >> 0x38 & 0xf;
  }
  if (uVar8 == 0) {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    func_0x000107c61170(uVar9);
    lVar11 = 0;
  }
  else {
    FUN_1028e0d68();
    lVar12 = _DAT_112f48528;
    lVar11 = *(long *)(unaff_x20 + 0x28);
    if (lVar11 == 0) {
LAB_1028e0138:
      lVar11 = *(long *)(unaff_x20 + 0x10);
      uVar8 = *(ulong *)(lVar11 + 0x10);
      if (uVar8 != 0) {
        uVar10 = 0;
        lVar12 = lVar11 + 0x20;
        do {
          if (*(ulong *)(lVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1028e02fc);
            (*pcVar4)();
          }
          FUN_1028df6f0(lVar12,auStack_c8);
          FUN_1028df734(auStack_c8,auStack_f0);
          lVar13 = lStack_d0;
          lVar6 = lStack_d8;
          func_0x0001000a8868(auStack_f0,lStack_d8);
          (**(code **)(lVar13 + 0x18))(param_1,param_2,param_3,lVar6,lVar13);
          bVar5 = false;
          bVar1 = NAN((double)CONCAT17(in_register_00005007,
                                       CONCAT16(in_register_00005006,
                                                CONCAT15(in_register_00005005,
                                                         CONCAT14(in_register_00005004,
                                                                  CONCAT13(in_register_00005003,
                                                                           CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))));
          if (!bVar1) {
            bVar5 = (double)CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))) < 1.0;
          }
          if (bVar5 == bVar1) {
            func_0x000107c6142c(param_3);
            func_0x000107c6142c(param_1);
            FUN_1028df734(auStack_f0,&uStack_a0);
            goto LAB_1028e0200;
          }
          uVar10 = uVar10 + 1;
          func_0x0001000834e4(auStack_f0);
          lVar12 = lVar12 + 0x28;
        } while (uVar8 != uVar10);
      }
      func_0x000107c6142c(param_3);
      func_0x000107c6142c(param_1);
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_80 = 0;
LAB_1028e0200:
      FUN_1028e0350(&uStack_a0,auStack_c8);
      if (lStack_b0 == 0) {
        func_0x0001028e03a0(&uStack_a0);
        lVar11 = 0;
      }
      else {
        FUN_1028df734(auStack_c8,auStack_f0);
        func_0x0001000a8868(auStack_f0,lStack_d8);
        lVar11 = lStack_d8;
        (**(code **)(lStack_d0 + 8))(lStack_d8,lStack_d0);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
        uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
        func_0x0001031a34c4(0);
        func_0x000107c610f8();
        func_0x000107c61434(uVar2);
        func_0x0001031a30bc(lVar11,uVar9,uVar2);
        func_0x0001028e03a0(&uStack_a0);
        func_0x0001000834e4(auStack_f0);
      }
      uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
      *(long *)(unaff_x20 + 0x28) = lVar11;
      func_0x000107c61174(lVar11);
      func_0x000107c61170(uVar9);
    }
    else {
      lVar13 = *(long *)(unaff_x20 + 0x10);
      uVar8 = *(ulong *)(lVar13 + 0x10);
      lVar6 = lVar11;
      func_0x000107c61174();
      if (uVar8 != 0) {
        uVar10 = 0;
        lVar14 = lVar13 + 0x20;
        do {
          if (*(ulong *)(lVar13 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1028e02f8);
            (*pcVar4)();
          }
          FUN_1028df6f0(lVar14,auStack_c8);
          FUN_1028df734(auStack_c8,auStack_f0);
          lVar3 = lStack_d0;
          lVar7 = lStack_d8;
          func_0x0001000a8868(auStack_f0,lStack_d8);
          (**(code **)(lVar3 + 8))(lVar7,lVar3);
          if ((int)lVar7 == *(int *)(lVar11 + lVar12)) {
            FUN_1028df734(auStack_f0,&uStack_a0);
            lVar12 = lStack_80;
            uVar9 = uStack_88;
            func_0x0001000a8868(&uStack_a0,uStack_88);
            uVar8 = param_1;
            (**(code **)(lVar12 + 0x20))(param_1,param_2,param_3,uVar9,lVar12);
            func_0x0001000834e4(&uStack_a0);
            if ((uVar8 & 1) == 0) {
              func_0x000107c6142c(param_3);
              func_0x000107c6142c(param_1);
              return lVar11;
            }
            func_0x000107c61170(lVar6);
            goto LAB_1028e0138;
          }
          uVar10 = uVar10 + 1;
          func_0x0001000834e4(auStack_f0);
          lVar14 = lVar14 + 0x28;
        } while (uVar8 != uVar10);
      }
      func_0x000107c6142c(param_3);
      func_0x000107c6142c(param_1);
    }
  }
  return lVar11;
}



/* Entry: 1028e02fc; end: 1028e034f;  */

void FUN_1028e02fc(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028e0350; end: 1028e03e7;  */

undefined8 FUN_1028e0350(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112eca608;
  func_0x0001000285a8(0x112eca608,&UNK_10daed3b8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1028e03e8; end: 1028e0613;  */

undefined8 FUN_1028e03e8(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 != 0) {
    lVar1 = param_1 + 0x20;
    func_0x000100e8b654();
    lVar13 = 0;
    do {
      puVar5 = PTR___sSSN_11034da80;
      puVar8 = (ulong *)(lVar1 + lVar13 * 0x10);
      uVar2 = *puVar8;
      uVar3 = puVar8[1];
      uStack_70 = 0x20;
      uStack_68 = 0xe100000000000000;
      uStack_b8 = uVar2;
      uStack_b0 = uVar3;
      func_0x000107c61434(uVar3);
      puVar7 = &uStack_70;
      func_0x000107c6022c(puVar7,puVar5,puVar5,param_1,param_1);
      if (((ulong)puVar7 & 1) == 0) {
        if (*(long *)(param_2 + 0x10) != 0) {
          func_0x000107c6068c(&uStack_b8,*(undefined8 *)(param_2 + 0x28));
          puVar8 = &uStack_b8;
          func_0x000107c5fb58(puVar8,uVar2,uVar3);
          func_0x000107c606a8();
          uVar10 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
          uVar11 = (ulong)puVar8 & (uVar10 ^ 0xffffffffffffffff);
          if ((*(ulong *)(param_2 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
            do {
              puVar8 = (ulong *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
              uVar9 = *puVar8;
              uVar4 = puVar8[1];
              if ((uVar9 == uVar2 && uVar4 == uVar3) ||
                 (func_0x000107c605b8(uVar9,uVar4,uVar2,uVar3,0), (uVar9 & 1) != 0)) {
                func_0x000107c6142c(uVar3);
                return 1;
              }
              uVar11 = uVar11 + 1 & ~uVar10;
            } while ((*(ulong *)(param_2 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
          }
        }
        func_0x000107c6142c(uVar3);
      }
      else {
        uStack_70 = 0x20;
        uStack_68 = 0xe100000000000000;
        uStack_b8 = param_3;
        uStack_b0 = param_4;
        func_0x000107c61434(param_4);
        func_0x000107c5fb78(uVar2,uVar3);
        uVar6 = uStack_68;
        func_0x000107c61434(uStack_68);
        func_0x000107c5fb78(0x20,0xe100000000000000);
        func_0x000107c6142c(uVar6);
        uVar6 = uStack_68;
        puVar7 = &uStack_70;
        func_0x000107c6022c(puVar7,puVar5,puVar5,param_1,param_1);
        func_0x000107c6142c(param_4);
        func_0x000107c6142c(uVar6);
        func_0x000107c6142c(uVar3);
        if (((ulong)puVar7 & 1) != 0) {
          return 1;
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar12);
  }
  return 0;
}



/* Entry: 1028e0614; end: 1028e0633;  */

void FUN_1028e0614(void)

{
  puRam0000000113804c90 = PTR___swiftEmptySetSingleton_11034f1d8;
  uRam0000000113804c98 = 0;
  uRam0000000113804ca0 = 0xe000000000000000;
  return;
}



/* Entry: 1028e0634; end: 1028e09eb;  */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_1028e0634(undefined8 *******param_1,ulong param_2)

{
  undefined8 *******pppppppuVar1;
  ulong uVar2;
  byte bVar3;
  undefined *puVar4;
  code *pcVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *******pppppppuVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  long unaff_x21;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  undefined8 *******pppppppuStack_70;
  ulong uStack_68;
  
  uVar2 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  uVar10 = (uint)((ulong)param_1 >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar14 = 7;
  if (uVar10 == 0) {
    uVar14 = 0xb;
  }
  uVar7 = 0xf;
  func_0x000101ee55a0(0xf,uVar14 | uVar2 << 0x10,param_1,param_2);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 == 0) {
    return puVar4;
  }
  func_0x000101499164(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
  if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1028e09e0);
    (*pcVar5)();
  }
  uVar15 = 4L << uVar10;
  pppppppuVar1 = (undefined8 *******)((param_2 & 0xfffffffffffffff) + 0x20);
  uVar14 = 0xf;
LAB_1028e070c:
  do {
    uVar13 = uVar14 & 0xc;
    uVar10 = (uint)(uVar13 != uVar15) & (uint)uVar14;
    uVar8 = uVar14;
    if (uVar10 == 1) {
      uVar16 = uVar14 >> 0x10;
      if (uVar2 <= uVar16) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1028e09d0);
        (*pcVar5)();
      }
LAB_1028e075c:
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_1028e0830;
LAB_1028e0764:
      if ((param_2 >> 0x3d & 1) == 0) {
        pppppppuVar9 = pppppppuVar1;
        if (((ulong)param_1 >> 0x3c & 1) == 0) {
          pppppppuVar9 = param_1;
          func_0x000107c60358(param_1,param_2);
        }
      }
      else {
        pppppppuStack_80 = param_1;
        uStack_78 = param_2 & 0xffffffffffffff;
        pppppppuVar9 = &pppppppuStack_80;
      }
      pbVar11 = (byte *)((long)pppppppuVar9 + uVar16);
      uVar6 = (uint)*pbVar11;
      if ((char)*pbVar11 < '\0') {
        uVar12 = (uint)LZCOUNT(uVar6 << 0x18 ^ 0xffffffff);
        if (uVar12 < 3) {
          if (uVar12 != 1) {
            uVar6 = pbVar11[1] & 0x3f | (uVar6 & 0x1f) << 6;
          }
        }
        else if (uVar12 == 3) {
          uVar6 = (uVar6 & 0xf) << 0xc | (pbVar11[1] & 0x3f) << 6 | pbVar11[2] & 0x3f;
        }
        else {
          uVar6 = (uVar6 & 0xf) << 0x12 | (pbVar11[1] & 0x3f) << 0xc | (pbVar11[2] & 0x3f) << 6 |
                  pbVar11[3] & 0x3f;
        }
      }
    }
    else {
      if (uVar13 == uVar15) {
        func_0x000100e36e7c(uVar14,param_1,param_2);
      }
      uVar16 = uVar8 >> 0x10;
      if (uVar2 <= uVar16) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1028e09d4);
        (*pcVar5)();
      }
      if ((uVar8 & 1) != 0) goto LAB_1028e075c;
      func_0x000100eda254();
      uVar16 = uVar8 >> 0x10;
      if ((param_2 >> 0x3c & 1) == 0) goto LAB_1028e0764;
LAB_1028e0830:
      uVar8 = uVar8 & 0xffffffffffff0000;
      func_0x000107c602f8(uVar8,param_1,param_2);
      uVar6 = (uint)uVar8;
    }
    pppppppuStack_80 = (undefined8 *******)CONCAT44(pppppppuStack_80._4_4_,uVar6);
    FUN_1028e0a34(&pppppppuStack_70,&pppppppuStack_80);
    uVar8 = uStack_68;
    pppppppuVar9 = pppppppuStack_70;
    if (unaff_x21 != 0) {
      func_0x000107c61574(puVar4);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1028e09ec);
      (*pcVar5)();
    }
    uVar16 = *(ulong *)(puVar4 + 0x10);
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar16) {
      func_0x000101499164(1 < *(ulong *)(puVar4 + 0x18),uVar16 + 1,1);
    }
    *(ulong *)(puVar4 + 0x10) = uVar16 + 1;
    *(undefined8 ********)(puVar4 + uVar16 * 0x10 + 0x20) = pppppppuVar9;
    *(ulong *)(puVar4 + uVar16 * 0x10 + 0x28) = uVar8;
    if (uVar10 == 0) {
      if (uVar13 == uVar15) {
        func_0x000100e36e7c(uVar14,param_1,param_2);
      }
      if (uVar2 <= uVar14 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1028e09dc);
        (*pcVar5)();
      }
      if ((uVar14 & 1) != 0) goto LAB_1028e08c0;
      uVar8 = uVar14;
      func_0x000100eda254(uVar14,param_1,param_2);
      uVar14 = uVar14 & 0xc | uVar8 & 0xfffffffffffffff3 | 1;
      if ((param_2 >> 0x3c & 1) == 0) goto LAB_1028e08c4;
LAB_1028e06f0:
      func_0x000107c5fb40(uVar14,param_1,param_2);
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return puVar4;
      }
      goto LAB_1028e070c;
    }
    if (uVar2 <= uVar14 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1028e09d8);
      (*pcVar5)();
    }
LAB_1028e08c0:
    if ((param_2 >> 0x3c & 1) != 0) goto LAB_1028e06f0;
LAB_1028e08c4:
    uVar14 = uVar14 >> 0x10;
    if ((param_2 >> 0x3d & 1) == 0) {
      pppppppuVar9 = pppppppuVar1;
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        pppppppuVar9 = param_1;
        func_0x000107c60358(param_1,param_2);
      }
      bVar3 = *(byte *)((long)pppppppuVar9 + uVar14);
    }
    else {
      pppppppuStack_70 = param_1;
      uStack_68 = param_2 & 0xffffffffffffff;
      bVar3 = *(byte *)((long)&pppppppuStack_70 + uVar14);
    }
    uVar10 = (uint)LZCOUNT((uint)bVar3 << 0x18 ^ 0xffffffff);
    if (-1 < (char)bVar3) {
      uVar10 = 1;
    }
    uVar14 = (uVar14 + uVar10) * 0x10000 | 5;
    uVar7 = uVar7 - 1;
    if (uVar7 == 0) {
      return puVar4;
    }
  } while( true );
}



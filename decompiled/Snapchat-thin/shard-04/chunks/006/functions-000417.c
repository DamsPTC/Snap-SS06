/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036f6c78; end: 1036f6d23; -[SCStartCallTrayScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1036f6c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1036f6b58(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1036f6d24; end: 1036f6d83; -[SCStartCallTrayScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f6d24(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f89868,0);
  *(undefined8 *)(param_1 + _DAT_112f89870) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036f6d84; end: 1036f6db7;  */

void FUN_1036f6d84(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036f6db8; end: 1036f6def; -[SCStartCallTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f6db8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f89868);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89870));
  return;
}



/* Entry: 1036f6df0; end: 1036f6e0f;  */

void FUN_1036f6df0(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4d68);
  return;
}



/* Entry: 1036f6e10; end: 1036f6e67;  */

void FUN_1036f6e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c610f8();
  FUN_1036f6e68(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1036f6e68; end: 1036f72bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036f6e68(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f898a0) = 0;
  lVar10 = _DAT_112f898a8;
  *(undefined8 *)(unaff_x20 + _DAT_112f898a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f898b0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f898b8) = 2;
  *(long *)(unaff_x20 + _DAT_112f898c0) = param_1;
  func_0x000107c61174();
  lVar2 = param_4;
  func_0x000107c5c6dc();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    puVar8 = &stack0xffffffffffffff90;
    func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
  }
  else {
    puVar4 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar10);
    *(undefined **)(unaff_x20 + lVar10) = puVar4;
    func_0x000107c61174();
    func_0x000107c61170(uVar9);
    puVar8 = &stack0xffffffffffffff80;
    func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
    func_0x000107c61180();
    func_0x000107c61174();
    pcVar5 = "init(beginIn:systemScope:composerServices:legacyTalkServices:)";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(param_1 + _DAT_11307bf90);
    uVar1 = ((undefined8 *)(param_1 + _DAT_11307bf90))[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar9,uVar1);
    func_0x000107c6142c(uVar1);
    lVar10 = *(long *)(param_1 + _DAT_11307bf98);
    puVar6 = &UNK_110685690;
    func_0x000107c613fc(&UNK_110685690,0x40,7);
    *(long *)(puVar6 + 0x10) = lVar3;
    *(long *)(puVar6 + 0x18) = param_1;
    *(char **)(puVar6 + 0x20) = pcVar5;
    *(undefined1 **)(puVar6 + 0x28) = puVar8;
    *(undefined8 *)(puVar6 + 0x30) = param_3;
    *(undefined **)(puVar6 + 0x38) = puVar4;
    pcStack_90 = FUN_1036f72bc;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_1036f7454;
    puStack_98 = &UNK_1106856a8;
    ppuVar7 = &puStack_b0;
    puStack_88 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar6 = puStack_88;
    func_0x000107c61174();
    func_0x000107c61174(puVar4);
    func_0x000107c61174(lVar10);
    func_0x000107c615f0(lVar3);
    func_0x000107c615f0(pcVar5);
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar6);
    func_0x000107c432b4(lVar3);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(pcVar5);
    param_4 = lVar10;
    param_3 = uVar9;
    param_2 = param_1;
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return puVar8;
}



/* Entry: 1036f72bc; end: 1036f72cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f72bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  ppuVar9 = &puStack_90;
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_11307bf90);
  uVar6 = *puVar1;
  func_0x000107c5fadc(uVar6,puVar1[1]);
  puVar7 = &UNK_1106856f8;
  func_0x000107c613fc(&UNK_1106856f8,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,uVar4);
  puVar8 = &UNK_110685798;
  func_0x000107c613fc(&UNK_110685798,0x30,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(undefined8 *)(puVar8 + 0x18) = uVar3;
  *(undefined8 *)(puVar8 + 0x20) = param_1;
  *(undefined8 *)(puVar8 + 0x28) = uVar5;
  pcStack_70 = FUN_1036f7b7c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100f11160;
  puStack_78 = &UNK_1106857b0;
  puStack_68 = puVar8;
  func_0x000107c60bc4(&puStack_90);
  puVar7 = puStack_68;
  func_0x000107c61174(uVar3);
  func_0x000107c61434(param_1);
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar7);
  func_0x000107c42134(uVar2);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 1036f72cc; end: 1036f7453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f72cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c5dbd4();
    func_0x000107c61180();
    FUN_1036f87bc(0);
    func_0x000107c610f8();
    func_0x000107c61434(param_2);
    lVar1 = param_3;
    func_0x000107c61174();
    func_0x000107c61434(param_5);
    FUN_1036f7d80(param_4,param_5,param_1,param_2,param_3);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f898a0);
    *(undefined8 *)(lVar1 + _DAT_112f898a0) = param_4;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f898b0);
    *(undefined **)(lVar1 + _DAT_112f898b0) = puVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    func_0x000107c52684(puVar2);
    func_0x000107c5a070(puVar2);
    func_0x000107c5921c(puVar2);
    func_0x000107c5a074(puVar2);
    func_0x000107c4ef3c(0x3fe0000000000000,puVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_4);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1036f7454; end: 1036f74af;  */

void FUN_1036f7454(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  func_0x000101994830(0);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1036f74b0; end: 1036f74cb;  */

void FUN_1036f74b0(long param_1,long param_2)

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



/* Entry: 1036f74cc; end: 1036f7517; -[_TtC17StartCallTrayImpl27StartCallTrayImplEntryPoint trayViewControllerDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001036f7500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f7504) */

void FUN_1036f74cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036f7878();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036f7518; end: 1036f7593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f7518(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112f898b0);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c42018();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1036f7594; end: 1036f75e7; -[_TtC17StartCallTrayImpl27StartCallTrayImplEntryPoint trayViewControllerStartCall:withVideo:] */

/* WARNING: Possible PIC construction at 0x0001036f75d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f75d4) */

void FUN_1036f7594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001036f795c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036f75e8; end: 1036f7647; -[_TtC17StartCallTrayImpl27StartCallTrayImplEntryPoint init] */

void FUN_1036f75e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StartCallTrayImpl.StartCallTrayImplEntryPoint",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f7614);
  (*pcVar1)();
}



/* Entry: 1036f7648; end: 1036f769f; -[_TtC17StartCallTrayImpl27StartCallTrayImplEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036f7664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f7684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f7668) */
/* WARNING: Removing unreachable block (ram,0x0001036f7688) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f7648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f898c0));
  return;
}



/* Entry: 1036f76a0; end: 1036f76ab;  */

void FUN_1036f76a0(void)

{
  return;
}



/* Entry: 1036f76ac; end: 1036f77b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f76ac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + _DAT_112f898a8) != 0) {
    func_0x000107c41864();
  }
  lVar1 = _DAT_11307bfa8;
  lVar2 = *(long *)(param_1 + _DAT_112f898c0);
  if (*(char *)(param_1 + _DAT_112f898b8) == '\x02') {
    func_0x000107c61428(lVar2 + _DAT_11307bfa8,auStack_60,0,0);
    lVar2 = lVar2 + lVar1;
    func_0x000107c61618();
    if (lVar2 == 0) {
LAB_1036f7798:
      func_0x000107c61170(param_1);
      return;
    }
    func_0x000107c5ba78();
  }
  else {
    func_0x000107c61428(lVar2 + _DAT_11307bfa8,auStack_60,0,0);
    lVar2 = lVar2 + lVar1;
    func_0x000107c61618();
    if (lVar2 == 0) goto LAB_1036f7798;
    func_0x000107c5ba84();
  }
  func_0x000107c61170(param_1);
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 1036f77b4; end: 1036f7807; -[_TtC17StartCallTrayImpl27StartCallTrayImplEntryPoint tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x0001036f77f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f77f4) */

void FUN_1036f77b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001036f7a50(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036f7808; end: 1036f7877; -[_TtC17StartCallTrayImpl27StartCallTrayImplEntryPoint tray:heightForPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036f7808(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + _DAT_112f898a0);
  if (lVar1 == 0) {
    param_1 = 0xbff0000000000000;
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174(lVar1);
    FUN_1036f7c0c();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_2);
  }
  return param_1;
}



/* Entry: 1036f7878; end: 1036f7b3b;  */

void FUN_1036f7878(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c614f0();
  uVar3 = 0;
  func_0x000107c60714();
  puVar1 = &UNK_1106856f8;
  func_0x000107c613fc(&UNK_1106856f8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uStack_40 = 0x1036f7ba8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110685760;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5fb28(unaff_x20,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x0001000d76cc(unaff_x20 + 0x20,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(unaff_x20);
  return;
}



/* Entry: 1036f7b3c; end: 1036f7b5b;  */

void FUN_1036f7b3c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4e28);
  return;
}



/* Entry: 1036f7b5c; end: 1036f7b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f7b5c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  if (*(long *)(lVar2 + _DAT_112f898a8) != 0) {
    func_0x000107c41864();
  }
  lVar1 = _DAT_11307bfa8;
  lVar3 = *(long *)(lVar2 + _DAT_112f898c0);
  if (*(char *)(lVar2 + _DAT_112f898b8) == '\x02') {
    func_0x000107c61428(lVar3 + _DAT_11307bfa8,auStack_60,0,0);
    lVar3 = lVar3 + lVar1;
    func_0x000107c61618();
    if (lVar3 == 0) {
LAB_1036f7798:
      func_0x000107c61170(lVar2);
      return;
    }
    func_0x000107c5ba78();
  }
  else {
    func_0x000107c61428(lVar3 + _DAT_11307bfa8,auStack_60,0,0);
    lVar3 = lVar3 + lVar1;
    func_0x000107c61618();
    if (lVar3 == 0) goto LAB_1036f7798;
    func_0x000107c5ba84();
  }
  func_0x000107c61170(lVar2);
  func_0x000107c615e8(lVar3);
  return;
}



/* Entry: 1036f7b64; end: 1036f7b7b;  */

void FUN_1036f7b64(void)

{
  FUN_1036f7518();
  return;
}



/* Entry: 1036f7b7c; end: 1036f7bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f7b7c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5dbd4();
    func_0x000107c61180();
    FUN_1036f87bc(0);
    func_0x000107c610f8();
    func_0x000107c61434(param_2);
    lVar3 = lVar1;
    func_0x000107c61174();
    func_0x000107c61434(uVar5);
    FUN_1036f7d80(uVar2,uVar5,param_1,param_2,lVar1);
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112f898a0);
    *(undefined8 *)(lVar3 + _DAT_112f898a0) = uVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    puVar4 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112f898b0);
    *(undefined **)(lVar3 + _DAT_112f898b0) = puVar4;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    func_0x000107c52684(puVar4);
    func_0x000107c5a070(puVar4);
    func_0x000107c5921c(puVar4);
    func_0x000107c5a074(puVar4);
    func_0x000107c4ef3c(0x3fe0000000000000,puVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 1036f7bac; end: 1036f7c0b;  */

void FUN_1036f7bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c610f8();
  FUN_1036f7d80(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 1036f7c0c; end: 1036f7cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1036f7c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f898f0);
  if (lVar2 == 0) {
    dVar4 = -1.0;
  }
  else {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5dbc0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5e07c();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f7cf0);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(unaff_x20);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar4 = 1.79769313486232e+308;
    func_0x000107c5b098(lVar2);
    func_0x000107c61170(lVar2);
    dVar4 = dVar4 + 50.0;
  }
  return dVar4;
}



/* Entry: 1036f7cf0; end: 1036f7d7f; -[_TtC17StartCallTrayImpl27StartCallTrayViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036f7cf0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112f898f8;
  *(undefined8 *)(param_1 + _DAT_112f898f8) = 0;
  lVar3 = _DAT_112f89900;
  func_0x000107c61614(param_1 + _DAT_112f89900,0);
  lVar1 = _DAT_112f898f0;
  *(undefined8 *)(param_1 + _DAT_112f898f0) = 0;
  func_0x000107c61170(*(undefined8 *)(param_1 + lVar2));
  FUN_1036f821c(param_1 + lVar3);
  func_0x000107c61170(*(undefined8 *)(param_1 + lVar1));
  func_0x000107c61464(param_1,lVar4,0x28,7);
  return 0;
}



/* Entry: 1036f7d80; end: 1036f821b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1036f7d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  
  puVar2 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f898f8) = 0;
  lVar13 = _DAT_112f89900;
  func_0x000107c61614(unaff_x20 + _DAT_112f89900,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f898f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f89908) = param_1;
  func_0x000107c61604(unaff_x20 + lVar13,param_5);
  puVar6 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&stack0xffffffffffffff90,puVar6,0,0);
  uVar12 = param_2;
  FUN_1036f8240(param_2,param_3,param_4);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
  lVar13 = _DAT_112f898f8;
  uVar3 = *(undefined8 *)(puVar2 + _DAT_112f898f8);
  *(undefined8 *)(puVar2 + _DAT_112f898f8) = uVar12;
  func_0x000107c61170(uVar3);
  lVar4 = *(long *)(puVar2 + _DAT_112f89908);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    if (lVar5 != 0) {
      lVar13 = *(long *)(puVar2 + lVar13);
      if (lVar13 == 0) {
        func_0x000107c615e8(lVar5);
      }
      else {
        puVar6 = PTR_PTR_1126ad4d0;
        func_0x000107c610f8();
        func_0x000107c61174(lVar13);
        func_0x000107c61174();
        func_0x000107c49520();
        func_0x000107c61170(lVar13);
        func_0x000107c61170(lVar13);
        func_0x000107c615e8(lVar5);
        if (puVar6 != (undefined *)0x0) {
          puVar7 = puVar6;
          func_0x000107c61174();
          func_0x000107c5a050();
          puVar8 = puVar2;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f820c);
            (*pcVar1)();
          }
          func_0x000107c3d89c();
          func_0x000107c61170(puVar8);
          lVar13 = 0x112d360b8;
          FUN_1036f8744(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                        &UNK_10d9011a0);
          func_0x000107c613fc();
          *(undefined8 *)(lVar13 + 0x18) = 9;
          *(undefined8 *)(lVar13 + 0x10) = 4;
          puVar9 = puVar7;
          func_0x000107c5cbe4();
          func_0x000107c61180();
          puVar8 = puVar2;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f8210);
            (*pcVar1)();
          }
          puVar10 = puVar8;
          func_0x000107c5cbe4();
          func_0x000107c61180();
          func_0x000107c61170(puVar8);
          puVar11 = puVar9;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar10);
          *(undefined **)(lVar13 + 0x20) = puVar11;
          puVar9 = puVar7;
          func_0x000107c3ec1c();
          func_0x000107c61180();
          puVar8 = puVar2;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f8214);
            (*pcVar1)();
          }
          puVar10 = puVar8;
          func_0x000107c3ec1c();
          func_0x000107c61180();
          func_0x000107c61170(puVar8);
          puVar11 = puVar9;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar10);
          *(undefined **)(lVar13 + 0x28) = puVar11;
          puVar9 = puVar7;
          func_0x000107c4acb0();
          func_0x000107c61180();
          puVar8 = puVar2;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (puVar8 != (undefined1 *)0x0) {
            puVar10 = puVar8;
            func_0x000107c4acb0();
            func_0x000107c61180();
            func_0x000107c61170(puVar8);
            puVar11 = puVar9;
            func_0x000107c40280();
            func_0x000107c61180();
            func_0x000107c61170(puVar9);
            func_0x000107c61170(puVar10);
            *(undefined **)(lVar13 + 0x30) = puVar11;
            puVar9 = puVar7;
            func_0x000107c5ce8c();
            func_0x000107c61180();
            func_0x000107c61170(puVar7);
            puVar8 = puVar2;
            func_0x000107c5de64();
            func_0x000107c61180();
            if (puVar8 != (undefined1 *)0x0) {
              puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
              func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
              puVar10 = puVar8;
              func_0x000107c5ce8c(puVar8);
              func_0x000107c61180();
              func_0x000107c61170(puVar8);
              puVar11 = puVar9;
              func_0x000107c40280();
              func_0x000107c61180();
              func_0x000107c61170(puVar9);
              func_0x000107c61170(puVar10);
              *(undefined **)(lVar13 + 0x38) = puVar11;
              uVar12 = 0;
              FUN_1036f8ac8(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
              lVar4 = lVar13;
              func_0x000107c5fc48(lVar13,uVar12);
              func_0x000107c61574(lVar13);
              func_0x000107c3d048(puVar7);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(param_1);
              func_0x000107c615e8(param_5);
              uVar12 = *(undefined8 *)(puVar2 + _DAT_112f898f0);
              *(undefined **)(puVar2 + _DAT_112f898f0) = puVar6;
              func_0x000107c61170(uVar12);
              return puVar2;
            }
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f821c);
            (*pcVar1)();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f8218);
          (*pcVar1)();
        }
      }
    }
  }
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_5);
  return puVar2;
}



/* Entry: 1036f821c; end: 1036f823f;  */

undefined8 FUN_1036f821c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1036f8240; end: 1036f8413;  */

undefined * FUN_1036f8240(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar10 = &puStack_c0;
  uVar6 = 0;
  if (param_3 != 0) {
    uVar6 = param_2;
  }
  lVar1 = -0x2000000000000000;
  if (param_3 != 0) {
    lVar1 = param_3;
  }
  func_0x000107c61434(param_3);
  FUN_1036f894c(param_1);
  puVar3 = &UNK_1106857f0;
  func_0x000107c613fc(&UNK_1106857f0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_110685818;
  func_0x000107c613fc(&UNK_110685818,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
  puVar5 = PTR_PTR_1126ad4d8;
  func_0x000107c610f8(PTR_PTR_1126ad4d8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(uVar6,lVar1);
  func_0x000107c6142c(lVar1);
  uVar7 = 0;
  FUN_1036f8ac8(0,0x112f89938,&PTR_PTR_1126ad4e0);
  uVar8 = param_1;
  func_0x000107c5fc48(param_1,uVar7);
  func_0x000107c6142c(param_1);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1036f8a9c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110685830;
  ppuVar9 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar9);
  uStack_a0 = 0x1036f8aa4;
  puStack_c0 = puVar2;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100288f10;
  puStack_a8 = &UNK_110685858;
  puStack_98 = puVar4;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c465ec(puVar5);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(puStack_98);
  func_0x000107c61574(puStack_68);
  return puVar5;
}



/* Entry: 1036f8414; end: 1036f84b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f8414(long param_1)

{
  param_1 = param_1 + _DAT_112f89900;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c5cfc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1036f84b4; end: 1036f868b;  */

void FUN_1036f84b4(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_2;
  puVar1 = PTR_PTR_1126ad4e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = lVar3;
  func_0x000107c5d984(lVar3);
  func_0x000107c61180();
  func_0x000107c5a344(puVar1,param_3,lVar4);
  func_0x000107c61170(lVar4);
  puVar2 = PTR_PTR_1126b28e0;
  func_0x000107c610f8(PTR_PTR_1126b28e0);
  func_0x000107c453e4();
  lVar4 = lVar3;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (lVar4 == 0) {
LAB_1036f855c:
    lVar5 = 0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c3e978();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 == 0) goto LAB_1036f855c;
  }
  func_0x000107c52ae0(puVar2,param_3,lVar5);
  func_0x000107c61170(lVar5);
  lVar4 = lVar3;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (lVar4 == 0) {
LAB_1036f85a8:
    lVar5 = 0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c3ea10();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 == 0) goto LAB_1036f85a8;
  }
  func_0x000107c58c30(puVar2,param_3,lVar5);
  func_0x000107c61170(lVar5);
  lVar4 = lVar3;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (lVar4 == 0) {
LAB_1036f85f4:
    lVar5 = 0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c3ea1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 == 0) goto LAB_1036f85f4;
  }
  func_0x000107c58e54(puVar2,param_3,lVar5);
  func_0x000107c61170(lVar5);
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c3e984();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) goto LAB_1036f8644;
  }
  lVar4 = 0;
LAB_1036f8644:
  func_0x000107c52b64(puVar2,param_3,lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c52d10(puVar1,param_3,puVar2);
  func_0x000107c61170(puVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1036f868c; end: 1036f86eb; -[_TtC17StartCallTrayImpl27StartCallTrayViewController initWithNibName:bundle:] */

void FUN_1036f868c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StartCallTrayImpl.StartCallTrayViewController",0x2d,"init(nibName:bundle:)",
                      0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f86b8);
  (*pcVar1)();
}



/* Entry: 1036f86ec; end: 1036f8743; -[_TtC17StartCallTrayImpl27StartCallTrayViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036f8708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f870c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f86ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89908));
  return;
}



/* Entry: 1036f8744; end: 1036f87bb;  */

void FUN_1036f8744(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1036f8ac8(0,param_1,param_2);
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



/* Entry: 1036f87bc; end: 1036f87f7;  */

void FUN_1036f87bc(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4f08);
  return;
}



/* Entry: 1036f87f8; end: 1036f894b;  */

undefined * FUN_1036f87f8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1036f894c);
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
    puVar3 = (undefined *)0x112f89938;
    FUN_1036f8744(0x112f89938,&PTR_PTR_1126ad4e0,0x112f89940,&UNK_10dbfec20);
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
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1036f8ac8(0,0x112f89938,&PTR_PTR_1126ad4e0);
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



/* Entry: 1036f894c; end: 1036f8a9b;  */

undefined * FUN_1036f894c(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    func_0x0001036f87dc(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1036f8a9c);
      (*pcVar3)();
    }
    uVar6 = 0;
    do {
      puVar2 = puStack_68;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1036f8a80);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar6;
        func_0x00010103193c(uVar6,param_1);
      }
      uStack_78 = uVar4;
      FUN_1036f84b4(&uStack_70,&uStack_78);
      func_0x000107c61170(uVar4);
      uVar1 = uStack_70;
      uVar4 = *(ulong *)(puVar2 + 0x10);
      puStack_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        func_0x0001036f87dc(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      uVar6 = uVar6 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puStack_68 + uVar4 * 8 + 0x20) = uVar1;
    } while (uVar5 != uVar6);
  }
  return puStack_68;
}



/* Entry: 1036f8a9c; end: 1036f8ac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f8a9c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10) + _DAT_112f89900;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5cfc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1036f8ac8; end: 1036f8b07;  */

void FUN_1036f8ac8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1036f8b08; end: 1036f8b0f;  */

void FUN_1036f8b08(long param_1,long param_2)

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



/* Entry: 1036f8b10; end: 1036f8b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f8b10(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1036f8f04();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f89950) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1036f8b7c; end: 1036f8be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f8b7c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f89950) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036f8be8; end: 1036f8c47; -[_TtC44TopicViewerMusicScopedFactoryServiceProvider32SCTopicViewerMusicScopedServices init] */

void FUN_1036f8be8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TopicViewerMusicScopedFactoryServiceProvider.SCTopicViewerMusicScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f8c14);
  (*pcVar1)();
}



/* Entry: 1036f8c48; end: 1036f8c57; -[_TtC44TopicViewerMusicScopedFactoryServiceProvider32SCTopicViewerMusicScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f8c48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f89950));
  return;
}



/* Entry: 1036f8c58; end: 1036f8cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f8c58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110685a48;
  func_0x000107c613fc(&UNK_110685a48,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1036f8f9c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1036f8cc4; end: 1036f8d5f;  */

void FUN_1036f8cc4(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110685958;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110685958;
  return;
}



/* Entry: 1036f8d60; end: 1036f8d97;  */

void FUN_1036f8d60(long *param_1)

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



/* Entry: 1036f8d98; end: 1036f8d9f;  */

undefined8 FUN_1036f8d98(void)

{
  return 0x1b;
}



/* Entry: 1036f8da0; end: 1036f8ed3;  */

void FUN_1036f8da0(undefined8 *param_1)

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
  puVar1 = &UNK_110685a70;
  func_0x000107c613fc(&UNK_110685a70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1036f8f74;
  func_0x00010058fa64(FUN_1036f8f74,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036f8ed4; end: 1036f8f03;  */

undefined ** FUN_1036f8ed4(void)

{
  return &PTR_DAT_112fef990;
}



/* Entry: 1036f8f04; end: 1036f8f23;  */

void FUN_1036f8f04(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4fe0);
  return;
}



/* Entry: 1036f8f24; end: 1036f8f73;  */

undefined1  [16] FUN_1036f8f24(void)

{
  return ZEXT816(0x1106859a8);
}



/* Entry: 1036f8f74; end: 1036f8f9b;  */

void FUN_1036f8f74(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1036f8f9c; end: 1036f8faf;  */

void FUN_1036f8f9c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036f8fb0; end: 1036f9467;  */

void FUN_1036f8fb0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  uVar13 = *param_2;
  func_0x0001000285a8(0x112f899c8,&UNK_10dbfee98);
  puVar1 = &uStack_68;
  uStack_68 = uVar13;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f899d0,&UNK_10dbfeea0);
  puVar2 = &UNK_110685b20;
  func_0x000107c613fc(&UNK_110685b20,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar13 = 0x1036f9474;
  func_0x0001000823a8(0x1036f9474,puVar2);
  pcVar3 = "MusicTopicViewerCTAProviderServiceProviderWrapperServiceProvider";
  func_0x000100082720("MusicTopicViewerCTAProviderServiceProviderWrapperServiceProvider",0x40,2);
  func_0x0001036faab0();
  func_0x000100082720("SCMusicCameraScopeExposerSubjectServiceProvider",0x2f,2);
  pcVar4 = pcVar3;
  func_0x0001036fab3c();
  func_0x000100082720("SCMusicCameraScopeExposerObservableServiceProvider",0x32,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_1036f8d60;
  func_0x0001000823a8(FUN_1036f8d60,0);
  func_0x000100082720("SCTopicViewerMusicScopedServicesCleanupRelayServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f899d8,&UNK_10dbfeeb0);
  func_0x000107c6157c(uVar13);
  uVar6 = 0x1036f9480;
  func_0x0001000823a8(0x1036f9480,uVar13);
  func_0x000100082720("MusicTopicViewerCTAProviderServiceServiceProvider",0x31,2);
  func_0x0001000285a8(0x112f899e0,&UNK_10dbff0a0);
  puVar2 = &UNK_110685b48;
  func_0x000107c613fc(&UNK_110685b48,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(char **)(puVar2 + 0x20) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1036f9488;
  func_0x0001000823a8(0x1036f9488,puVar2);
  func_0x000100082720("MusicTopicViewerCameraPresenterServiceProviderWrapperServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112f899e8,&UNK_10dbfeec0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1036f9494;
  func_0x0001000823a8(0x1036f9494,uVar7);
  func_0x000100082720("MusicTopicViewerCameraPresenterServiceServiceProvider",0x35,2);
  uVar9 = uVar6;
  FUN_1036fa84c(uVar6,uVar8,pcVar3);
  func_0x000100082720("TopicViewerMusicScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f899f0,&UNK_10dbfeec8);
  puVar2 = &UNK_110685b70;
  func_0x000107c613fc(&UNK_110685b70,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar13;
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  *(undefined8 **)(puVar2 + 0x20) = puVar1;
  *(code **)(puVar2 + 0x28) = pcVar5;
  *(undefined8 *)(puVar2 + 0x30) = uVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1036f949c;
  func_0x0001000823a8(0x1036f949c,puVar2);
  func_0x000100082720("SCTopicViewerMusicScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112f89958,&UNK_10dbfec40);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x1036f94ac;
  func_0x0001000823a8(0x1036f94ac,uVar10);
  func_0x000100082720("SCTopicViewerMusicScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112f89948,&UNK_10dbfec30);
  func_0x000107c6157c(uVar11);
  uVar12 = 0x1036f94b4;
  func_0x0001000823a8(0x1036f94b4,uVar11);
  func_0x000100082720("SCTopicViewerMusicScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110685b98;
  func_0x000107c613fc(&UNK_110685b98,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar12;
  *(code **)(puVar2 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar12 = 0x1036f94bc;
  func_0x0001000823a8(0x1036f94bc,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000100082720("SCTopicViewerMusicScopeEntryPointProvider",0x29,2);
  *param_1 = uVar12;
  return;
}



/* Entry: 1036f9468; end: 1036f94c3;  */

void FUN_1036f9468(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar13 = *param_2;
  func_0x0001000285a8(0x112f899c8,&UNK_10dbfee98);
  puVar1 = &uStack_68;
  uStack_68 = uVar13;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f899d0,&UNK_10dbfeea0);
  puVar2 = &UNK_110685b20;
  func_0x000107c613fc(&UNK_110685b20,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  uVar3 = 0x1036f9474;
  func_0x0001000823a8(0x1036f9474,puVar2);
  pcVar4 = "MusicTopicViewerCTAProviderServiceProviderWrapperServiceProvider";
  func_0x000100082720("MusicTopicViewerCTAProviderServiceProviderWrapperServiceProvider",0x40,2);
  func_0x0001036faab0();
  func_0x000100082720("SCMusicCameraScopeExposerSubjectServiceProvider",0x2f,2);
  pcVar5 = pcVar4;
  func_0x0001036fab3c();
  func_0x000100082720("SCMusicCameraScopeExposerObservableServiceProvider",0x32,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1036f8d60;
  func_0x0001000823a8(FUN_1036f8d60,0);
  func_0x000100082720("SCTopicViewerMusicScopedServicesCleanupRelayServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f899d8,&UNK_10dbfeeb0);
  func_0x000107c6157c(uVar3);
  uVar7 = 0x1036f9480;
  func_0x0001000823a8(0x1036f9480,uVar3);
  func_0x000100082720("MusicTopicViewerCTAProviderServiceServiceProvider",0x31,2);
  func_0x0001000285a8(0x112f899e0,&UNK_10dbff0a0);
  puVar2 = &UNK_110685b48;
  func_0x000107c613fc(&UNK_110685b48,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar12;
  *(char **)(puVar2 + 0x20) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(pcVar5);
  uVar12 = 0x1036f9488;
  func_0x0001000823a8(0x1036f9488,puVar2);
  func_0x000100082720("MusicTopicViewerCameraPresenterServiceProviderWrapperServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112f899e8,&UNK_10dbfeec0);
  func_0x000107c6157c(uVar12);
  uVar13 = 0x1036f9494;
  func_0x0001000823a8(0x1036f9494,uVar12);
  func_0x000100082720("MusicTopicViewerCameraPresenterServiceServiceProvider",0x35,2);
  uVar8 = uVar7;
  FUN_1036fa84c(uVar7,uVar13,pcVar4);
  func_0x000100082720("TopicViewerMusicScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f899f0,&UNK_10dbfeec8);
  puVar2 = &UNK_110685b70;
  func_0x000107c613fc(&UNK_110685b70,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = uVar12;
  *(undefined8 **)(puVar2 + 0x20) = puVar1;
  *(code **)(puVar2 + 0x28) = pcVar6;
  *(undefined8 *)(puVar2 + 0x30) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1036f949c;
  func_0x0001000823a8(0x1036f949c,puVar2);
  func_0x000100082720("SCTopicViewerMusicScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112f89958,&UNK_10dbfec40);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1036f94ac;
  func_0x0001000823a8(0x1036f94ac,uVar9);
  func_0x000100082720("SCTopicViewerMusicScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112f89948,&UNK_10dbfec30);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x1036f94b4;
  func_0x0001000823a8(0x1036f94b4,uVar10);
  func_0x000100082720("SCTopicViewerMusicScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110685b98;
  func_0x000107c613fc(&UNK_110685b98,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar11;
  *(code **)(puVar2 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar11 = 0x1036f94bc;
  func_0x0001000823a8(0x1036f94bc,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000100082720("SCTopicViewerMusicScopeEntryPointProvider",0x29,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 1036f94c4; end: 1036f9557;  */

void FUN_1036f94c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1036f97d4();
  func_0x000107c613fc();
  FUN_1036f95ac(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1036f9558; end: 1036f95ab;  */

undefined8 FUN_1036f9558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1036f95ac(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1036f95ac; end: 1036f9687;  */

void FUN_1036f95ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_1036fccc8(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001036fca28();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_1036fcbc4();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1036f9688; end: 1036f96c3;  */

void FUN_1036f9688(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036f96c4; end: 1036f9717;  */

void FUN_1036f96c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036f9718; end: 1036f971f;  */

undefined8 FUN_1036f9718(void)

{
  return 0x1b;
}



/* Entry: 1036f9720; end: 1036f97a3;  */

void FUN_1036f9720(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1036f9824,param_2,FUN_1036f9828,param_2,0x1036f9850,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1036f97a4; end: 1036f97d3;  */

undefined ** FUN_1036f97a4(void)

{
  return &PTR_DAT_112fef990;
}



/* Entry: 1036f97d4; end: 1036f97f3;  */

void FUN_1036f97d4(void)

{
  func_0x000107c61168(&PTR_PTR_112f89a60);
  return;
}



/* Entry: 1036f97f4; end: 1036f9827;  */

undefined1  [16] FUN_1036f97f4(void)

{
  return ZEXT816(0x110685bf0);
}



/* Entry: 1036f9828; end: 1036f987b;  */

void FUN_1036f9828(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1036f987c; end: 1036f990f;  */

void FUN_1036f987c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1036f9bd0();
  func_0x000107c613fc();
  FUN_1036f9964(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1036f9910; end: 1036f9963;  */

undefined8 FUN_1036f9910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1036f9964(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1036f9964; end: 1036f9a83;  */

void FUN_1036f9964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112f24c50,&UNK_10db5f840);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  uVar1 = param_3;
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001036fd04c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001036fcdf0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar3 = uVar1;
  func_0x000107c6157c();
  FUN_1036fcfbc();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  return;
}



/* Entry: 1036f9a84; end: 1036f9abf;  */

void FUN_1036f9a84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036f9ac0; end: 1036f9b13;  */

void FUN_1036f9ac0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036f9b14; end: 1036f9b1b;  */

undefined8 FUN_1036f9b14(void)

{
  return 0x1b;
}



/* Entry: 1036f9b1c; end: 1036f9b9f;  */

void FUN_1036f9b1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1036f9c20,param_2,FUN_1036f9c24,param_2,0x1036f9c4c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1036f9ba0; end: 1036f9bcf;  */

undefined ** FUN_1036f9ba0(void)

{
  return &PTR_DAT_112fef990;
}



/* Entry: 1036f9bd0; end: 1036f9bef;  */

void FUN_1036f9bd0(void)

{
  func_0x000107c61168(&PTR_PTR_112f89b40);
  return;
}



/* Entry: 1036f9bf0; end: 1036f9c23;  */

undefined1  [16] FUN_1036f9bf0(void)

{
  return ZEXT816(0x110685c90);
}



/* Entry: 1036f9c24; end: 1036f9c77;  */

void FUN_1036f9c24(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1036f9c78; end: 1036f9edf;  */

void FUN_1036f9c78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106d9898;
  ppuVar4 = &PTR_DAT_112fef990;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112f89bb8;
  func_0x0001000285a8(0x112f89bb8,&UNK_10dbff278);
  func_0x0001000a6ee8(&UNK_110685c10,
                      "MusicTopicViewerCTAProviderServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x4d,2,FUN_1036f9ee0,param_2,uVar2,&UNK_110685c10,&PTR_DAT_112f899f8);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110685cb0,
                      "MusicTopicViewerCameraPresenterServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x51,2,FUN_1036f9f90,param_3,uVar2,&UNK_110685cb0,&PTR_DAT_112f89ad8);
  func_0x000107c61574(param_3);
  puVar3 = &UNK_110685d00;
  func_0x000107c613fc(&UNK_110685d00,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1106859e8,"SCTopicViewerMusicScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_1036fa064,puVar3,uVar2,&UNK_1106859e8,&PTR_DAT_112f89960);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110685d28;
  func_0x000107c613fc(&UNK_110685d28,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_110685f78,"TopicViewerMusicScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_1036fa06c,puVar3,uVar2,&UNK_110685f78,&PTR_DAT_112f89e00);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f89bc0;
  func_0x0001000285a8(0x112f89bc0,&UNK_10dbff280);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCTopicViewerMusicScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1036f9ee0; end: 1036f9f0b;  */

void FUN_1036f9ee0(void)

{
  FUN_1036f9f0c();
  return;
}



/* Entry: 1036f9f0c; end: 1036f9f8f;  */

void FUN_1036f9f0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 1036f9f90; end: 1036f9fbb;  */

void FUN_1036f9f90(void)

{
  FUN_1036f9f0c();
  return;
}



/* Entry: 1036f9fbc; end: 1036fa063;  */

void FUN_1036f9fbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110685d50;
  func_0x000107c613fc(&UNK_110685d50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1036fa0d8;
  func_0x0001000823a8(FUN_1036fa0d8,puVar1);
  func_0x000100082720("SCTopicViewerMusicScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1036fa064; end: 1036fa06b;  */

void FUN_1036fa064(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110685d50;
  func_0x000107c613fc(&UNK_110685d50,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1036fa0d8;
  func_0x0001000823a8(FUN_1036fa0d8,puVar3);
  func_0x000100082720("SCTopicViewerMusicScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1036fa06c; end: 1036fa0ab;  */

void FUN_1036fa06c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1036fabc4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("TopicViewerMusicScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036fa0ac; end: 1036fa0d7;  */

void FUN_1036fa0ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036fa0d8; end: 1036fa0ef;  */

void FUN_1036fa0d8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110685a70;
  func_0x000107c613fc(&UNK_110685a70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1036f8f74;
  func_0x00010058fa64(FUN_1036f8f74,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036fa0f0; end: 1036fa1cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036fa0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1036fa75c();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f89bc8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f89bd0) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036fa1cc);
  (*pcVar1)();
}



/* Entry: 1036fa1cc; end: 1036fa22b; -[_TtC32TopicViewerMusicScopeGraphBridge47TopicViewerMusicScopeGraphBridgeSaberEntryPoint init] */

void FUN_1036fa1cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TopicViewerMusicScopeGraphBridge.TopicViewerMusicScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036fa1f8);
  (*pcVar1)();
}



/* Entry: 1036fa22c; end: 1036fa263; -[_TtC32TopicViewerMusicScopeGraphBridge47TopicViewerMusicScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036fa248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036fa24c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fa22c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89bc8));
  return;
}



/* Entry: 1036fa264; end: 1036fa28b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fa264(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f89bd0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f89bc8));
  return;
}



/* Entry: 1036fa28c; end: 1036fa2ab;  */

void FUN_1036fa28c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e50a0);
  return;
}



/* Entry: 1036fa2ac; end: 1036fa30f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036fa2ac(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f89de8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1036fa310; end: 1036fa317;  */

void FUN_1036fa310(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036fa318; end: 1036fa3b7;  */

void FUN_1036fa318(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036fa3b8; end: 1036fa3d7;  */

void FUN_1036fa3b8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1036fa3d8; end: 1036fa43b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036fa3d8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f89df0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1036fa43c; end: 1036fa443;  */

void FUN_1036fa43c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



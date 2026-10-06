/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101081a40; end: 101081b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101081a40(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112d58888);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(param_2);
    func_0x000107c5fadc(uVar2,uVar1);
    func_0x000107c59e1c(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 101081b7c; end: 101081d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101081b7c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  long *plVar6;
  code *pcVar7;
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined1 auStack_80 [24];
  long alStack_68 [3];
  undefined8 uStack_50;
  
  lVar1 = _DAT_112d58858;
  func_0x000107c61428(unaff_x20 + _DAT_112d58858,auStack_80,0,0);
  FUN_1010835a4(unaff_x20 + lVar1,auStack_a8);
  if (lStack_90 == 0) {
    func_0x0001010835f4(auStack_a8);
  }
  else {
    FUN_10108363c(auStack_a8,alStack_68);
    plVar6 = alStack_68;
    func_0x0001000a8868(plVar6,uStack_50);
    plVar6 = *(long **)(*(long *)(*plVar6 + 0x70) + 0x10);
    func_0x000107c6157c(plVar6);
    uVar2 = 1;
    func_0x00010061b458(1);
    func_0x000107c61574();
    FUN_10107c558();
    func_0x000104884898();
    func_0x000107c61574(uVar2);
    puVar3 = &UNK_11037d2f0;
    func_0x000107c613fc(&UNK_11037d2f0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    FUN_101083654(alStack_68,auStack_a8);
    puVar4 = &UNK_11037d318;
    func_0x000107c613fc(&UNK_11037d318,0x50,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    FUN_10108363c(auStack_a8,puVar4 + 0x18);
    *(undefined8 *)(puVar4 + 0x40) = param_1;
    *(undefined8 *)(puVar4 + 0x48) = param_2;
    pcVar7 = *(code **)(*plVar6 + 0x60);
    func_0x000107c61434(param_2);
    pcVar5 = FUN_101083698;
    puVar3 = puVar4;
    (*pcVar7)(FUN_101083698);
    func_0x000107c61574(plVar6);
    func_0x000107c61574(puVar4);
    func_0x000107c614f0(pcVar5);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d58870);
    pcVar7 = *(code **)(puVar3 + 0x10);
    func_0x000107c6157c(uVar2);
    (*pcVar7)();
    func_0x000107c615e8(pcVar5);
    func_0x000107c61574(uVar2);
    func_0x0001000834e4(alStack_68);
  }
  return;
}



/* Entry: 101081d2c; end: 101081dc7;  */

void FUN_101081d2c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  lVar5 = param_1[1];
  if (lVar5 != 0) {
    uVar6 = *param_1;
    uVar1 = param_1[4];
    uVar3 = param_1[5];
    uVar2 = param_1[2];
    uVar4 = param_1[3];
    func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      FUN_101081dc8(uVar6,lVar5,uVar2,uVar4,uVar1,uVar3);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 101081dc8; end: 101082a3f;  */

void FUN_101081dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar7 = param_1;
  uVar9 = param_2;
  func_0x00010108f8b4();
  puVar2 = &UNK_11037d520;
  func_0x000107c613fc(&UNK_11037d520,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  func_0x000107c61174();
  func_0x000107c5fadc(uVar7,uVar9);
  func_0x000107c6142c(uVar9);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1010837a0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de205c;
  puStack_88 = &UNK_11037d538;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar4 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puStack_78);
  puVar2 = &UNK_11037d570;
  func_0x000107c613fc(&UNK_11037d570,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  func_0x000107c61174(unaff_x20);
  func_0x000107c5fadc(param_5,param_6);
  pcStack_80 = (code *)0x1010837d0;
  puStack_a0 = puVar6;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de205c;
  puStack_88 = &UNK_11037d588;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_5);
  puVar2 = puStack_78;
  func_0x000107c61574();
  FUN_100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)(puVar2 + 0x18) = 5;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(undefined **)(puVar2 + 0x20) = puVar4;
  *(undefined **)(puVar2 + 0x28) = puVar5;
  puVar6 = PTR_PTR_1126aed78;
  func_0x000107c610f8();
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar5);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c6142c(param_4);
  uVar7 = 0;
  FUN_101083760(0,0x112d360a8,&PTR_PTR_1126aed70);
  puVar8 = puVar2;
  func_0x000107c5fc48(puVar2,uVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c48d50();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar8);
  func_0x000107c53fcc(puVar6);
  puVar2 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c59ba8();
    func_0x000107c61170(puVar2);
    func_0x000107c4f018(unaff_x20);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010820f0);
  (*pcVar1)();
}



/* Entry: 101082a40; end: 101082bab;  */

undefined * FUN_101082a40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c46db4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c53840(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 5;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  puVar4 = puVar1;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40290(0x4060000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(puVar3 + 0x20) = puVar5;
  puVar4 = puVar1;
  func_0x000107c5e308();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar5 = puVar4;
  func_0x000107c40290(0x4060000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(puVar3 + 0x28) = puVar5;
  uVar6 = 0;
  FUN_101083760(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar4 = puVar3;
  func_0x000107c5fc48(puVar3,uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 101082bac; end: 101082c57;  */

void FUN_101082bac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c613fc(param_3,0x18,7);
  *(undefined8 *)(param_3 + 0x10) = param_2;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  uStack_48 = param_5;
  uStack_40 = param_4;
  lStack_38 = param_3;
  func_0x000107c60bc4(&puStack_60);
  lVar1 = lStack_38;
  func_0x000107c61174(param_2);
  func_0x000107c61574(lVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101082c58; end: 101082e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101082c58(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d58858);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  lVar2 = _DAT_112d58860;
  uVar3 = 0x112d588d0;
  func_0x0001000285a8(0x112d588d0,&UNK_10d91f188);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d58868) = 0;
  lVar2 = _DAT_112d58870;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d58878;
  FUN_10107fc00();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d58880;
  func_0x00010107fce4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d58888;
  func_0x00010107febc();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d58890;
  if (lRam0000000112d59230 != -1) {
    func_0x000107c61568(0x112d59230,FUN_1010907b4);
  }
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c46db4();
  func_0x000107c61180();
  func_0x000107c53840();
  func_0x000107c5a050(puVar4);
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d58898;
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c5a100(puVar4);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c61174();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d588a0;
  func_0x000101080010();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101082e68; end: 101082e87; -[_TtC23SCChangeUsernameFeature12PasswordPage init] */

void FUN_101082e68(void)

{
  FUN_101082c58();
  return;
}



/* Entry: 101082e88; end: 101082ebb;  */

void FUN_101082e88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101082ebc; end: 101082f73; -[_TtC23SCChangeUsernameFeature12PasswordPage .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101082ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101082f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101082f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101082f58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101082f3c) */
/* WARNING: Removing unreachable block (ram,0x000101082f1c) */
/* WARNING: Removing unreachable block (ram,0x000101082efc) */
/* WARNING: Removing unreachable block (ram,0x000101082f5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101082ebc(long param_1)

{
  func_0x0001010835f4(param_1 + _DAT_112d58858);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d58860));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d58868));
  return;
}



/* Entry: 101082f74; end: 101082f93;  */

void FUN_101082f74(void)

{
  func_0x000107c61168(&PTR_PTR_1127ace10);
  return;
}



/* Entry: 101082f94; end: 10108301f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101082f94(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5c6a4();
    func_0x000107c61170(param_1);
    if (lVar2 == 2) {
      uStack_50 = 0xb;
    }
    else {
      uStack_50 = 4;
    }
    uStack_48 = 0;
    uStack_40 = 3;
    func_0x0001002a64a8(&uStack_50);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101083020);
  (*pcVar1)();
}



/* Entry: 101083020; end: 10108306f; -[_TtC23SCChangeUsernameFeature12PasswordPage dialogDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000101083058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010108305c) */

void FUN_101083020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101082f94(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101083070; end: 101083077; -[_TtC23SCChangeUsernameFeature12PasswordPage textFieldShouldBeginEditing:] */

undefined8 FUN_101083070(void)

{
  return 1;
}



/* Entry: 101083078; end: 101083193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101083078(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112d588a0);
  func_0x000107c49fe0();
  if ((uVar1 & 1) == 0) {
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (param_1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c610f8();
      func_0x000107c48af4();
      func_0x000107c61170(param_1);
      func_0x000107c5fadc(param_4);
      puVar3 = puVar2;
      func_0x000107c5c180();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(param_4);
      puVar2 = puVar3;
      func_0x000107c5faec();
      func_0x000107c61170(puVar3);
      uStack_58 = 0;
      puStack_68 = puVar2;
      uStack_60 = param_5;
      func_0x0001002a64a8(&puStack_68);
      func_0x000107c6142c(param_5);
    }
  }
  return (uint)uVar1 ^ 1;
}



/* Entry: 101083194; end: 10108322f; -[_TtC23SCChangeUsernameFeature12PasswordPage textField:shouldChangeCharactersInRange:replacementString:] */

uint FUN_101083194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101083078(param_3,param_4,param_5,param_6,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 101083230; end: 10108329b; -[_TtC23SCChangeUsernameFeature12PasswordPage textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101083230(long param_1)

{
  int iVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112d588a0);
  func_0x000107c61174();
  func_0x000107c49cd8();
  if (iVar1 != 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 3;
    func_0x0001002a64a8(&uStack_38);
  }
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 10108329c; end: 1010833c3;  */

ulong FUN_10108329c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010833c4);
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
  FUN_1010833c4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010833c0);
      (*pcVar1)();
    }
    FUN_101083444(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1010833c4; end: 101083443;  */

undefined * FUN_1010833c4(undefined *param_1,undefined *param_2)

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
    FUN_100de9c28();
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



/* Entry: 101083444; end: 10108355b;  */

long FUN_101083444(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101083558);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10108355c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101083760(0,0x112d360a8,&PTR_PTR_1126aed70);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_101083760(0,0x112d360a8,&PTR_PTR_1126aed70);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101083554);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10108355c; end: 1010835a3;  */

void FUN_10108355c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar15 = param_1[1];
  if (lVar15 != 0) {
    uVar16 = *param_1;
    uVar12 = param_1[2];
    uVar1 = param_1[3];
    uVar13 = param_1[4];
    uVar2 = param_1[5];
    uVar10 = param_1[6];
    uVar3 = param_1[7];
    func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
    lVar5 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar5 != 0) {
      puVar6 = &UNK_11037d660;
      func_0x000107c613fc(&UNK_11037d660,0x18,7);
      *(long *)(puVar6 + 0x10) = lVar5;
      func_0x000107c61174();
      func_0x000107c5fadc(uVar13,uVar2);
      pcStack_98 = FUN_101083818;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      pcStack_a8 = FUN_100de205c;
      puStack_a0 = &UNK_11037d678;
      ppuVar7 = &puStack_b8;
      puStack_90 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar8 = PTR_PTR_1126aed70;
      func_0x000107c61168();
      puVar9 = puVar8;
      func_0x000107c3dad0();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(uVar13);
      func_0x000107c61574(puStack_90);
      puVar6 = &UNK_11037d6b0;
      func_0x000107c613fc(&UNK_11037d6b0,0x18,7);
      *(long *)(puVar6 + 0x10) = lVar5;
      func_0x000107c61174(lVar5);
      func_0x000107c5fadc(uVar10,uVar3);
      pcStack_98 = (code *)0x101083848;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      pcStack_a8 = FUN_100de205c;
      puStack_a0 = &UNK_11037d6c8;
      ppuVar7 = &puStack_b8;
      puStack_90 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c3dad0();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(uVar10);
      puVar6 = puStack_90;
      func_0x000107c61574();
      FUN_100de9c28();
      func_0x000107c613fc();
      *(undefined8 *)(puVar6 + 0x18) = 5;
      *(undefined8 *)(puVar6 + 0x10) = 2;
      *(undefined **)(puVar6 + 0x20) = puVar9;
      *(undefined **)(puVar6 + 0x28) = puVar8;
      puVar11 = PTR_PTR_1126aed78;
      func_0x000107c610f8();
      func_0x000107c61174(puVar9);
      func_0x000107c61174(puVar8);
      func_0x000107c61434(uVar1);
      func_0x000107c61434(lVar15);
      func_0x000107c5fadc(uVar16,lVar15);
      func_0x000107c6142c(lVar15);
      func_0x000107c5fadc(uVar12,uVar1);
      func_0x000107c6142c(uVar1);
      uVar13 = 0;
      FUN_101083760(0,0x112d360a8,&PTR_PTR_1126aed70);
      puVar14 = puVar6;
      func_0x000107c5fc48(puVar6,uVar13);
      func_0x000107c61574(puVar6);
      func_0x000107c48d50();
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(puVar14);
      func_0x000107c53fcc(puVar11);
      puVar6 = puVar11;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101082448);
        (*pcVar4)();
      }
      func_0x000107c59ba8();
      func_0x000107c61170(puVar6);
      func_0x000107c4f018(lVar5);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar11);
    }
  }
  return;
}



/* Entry: 1010835a4; end: 10108363b;  */

undefined8 FUN_1010835a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d588d8;
  func_0x0001000285a8(0x112d588d8,&UNK_10d91f190);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10108363c; end: 101083653;  */

undefined8 * FUN_10108363c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101083654; end: 101083697;  */

long FUN_101083654(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101083698; end: 1010836a7;  */

void FUN_101083698(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar15 = *(long *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
  plVar2 = (long *)(unaff_x20 + 0x18);
  uVar18 = *param_1;
  func_0x000107c61428(lVar15 + 0x10,auStack_88,0,0);
  lVar15 = lVar15 + 0x10;
  func_0x000107c61618();
  if (lVar15 != 0) {
    FUN_101082a40();
    uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x0001000a8868(plVar2,uVar14);
    if (*(char *)(*plVar2 + 0x58) == '\x01') {
      func_0x00010108fecc();
      puVar7 = &UNK_11037d390;
      func_0x000107c613fc(&UNK_11037d390,0x18,7);
      *(long *)(puVar7 + 0x10) = lVar15;
      lVar3 = lVar15;
      func_0x000107c61174();
      func_0x000107c5fadc(plVar2,uVar14);
      func_0x000107c6142c(uVar14);
      pcStack_98 = FUN_1010836f4;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      pcStack_a8 = FUN_100de205c;
      puStack_a0 = &UNK_11037d3a8;
      ppuVar8 = &puStack_b8;
      puStack_90 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar4 = PTR_PTR_1126aed70;
      func_0x000107c61168();
      puVar9 = puVar4;
      func_0x000107c3dad0();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(plVar2);
      func_0x000107c61574(puStack_90);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61174();
      if ((ulong)puVar7 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar7) {
          puVar5 = puVar7;
        }
        func_0x000107c60480(puVar5);
      }
      puVar5 = puVar5 + 1;
      uVar6 = 0;
      FUN_10108329c(0,puVar5,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar17 = uVar6 & 0xffffffffffffff8;
      uVar16 = *(ulong *)(uVar17 + 0x10);
      puVar7 = (undefined *)(uVar16 + 1);
      uVar13 = uVar6;
      if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar16) {
        uVar13 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
        puVar5 = puVar7;
        FUN_10108329c(uVar13,puVar7,1,uVar6);
        uVar17 = uVar13 & 0xffffffffffffff8;
      }
      *(undefined **)(uVar17 + 0x10) = puVar7;
      *(undefined **)(uVar17 + uVar16 * 8 + 0x20) = puVar9;
      uVar16 = uVar13;
      func_0x00010108fee0();
      puVar7 = &UNK_11037d3e0;
      func_0x000107c613fc(&UNK_11037d3e0,0x18,7);
      *(long *)(puVar7 + 0x10) = lVar3;
      func_0x000107c61174(lVar3);
      puVar10 = puVar5;
      func_0x000107c5fadc(uVar16,puVar5);
      func_0x000107c6142c(puVar5);
      pcStack_98 = (code *)0x101083724;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      pcStack_a8 = FUN_100de205c;
      puStack_a0 = &UNK_11037d3f8;
      ppuVar8 = &puStack_b8;
      puStack_90 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c3dad0();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(uVar16);
      func_0x000107c61574(puStack_90);
      func_0x000107c61174();
      uVar6 = uVar13;
      if (uVar13 >> 0x3e != 0) {
        if (0x7fffffffffffffff < uVar13) {
          uVar17 = uVar13;
        }
        func_0x000107c60480(uVar17);
        puVar10 = (undefined *)(uVar17 + 1);
        uVar6 = 0;
        FUN_10108329c(0,puVar10,1,uVar13);
        uVar17 = uVar6 & 0xffffffffffffff8;
      }
      uVar13 = *(ulong *)(uVar17 + 0x10);
      puVar7 = (undefined *)(uVar13 + 1);
      uVar16 = uVar6;
      if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar13) {
        uVar16 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
        puVar10 = puVar7;
        FUN_10108329c(uVar16,puVar7,1,uVar6);
        uVar17 = uVar16 & 0xffffffffffffff8;
      }
      *(undefined **)(uVar17 + 0x10) = puVar7;
      *(undefined **)(uVar17 + uVar13 * 8 + 0x20) = puVar4;
      func_0x000107c61170();
    }
    else {
      func_0x00010108f8c8();
      puVar7 = &UNK_11037d340;
      func_0x000107c613fc(&UNK_11037d340,0x18,7);
      *(long *)(puVar7 + 0x10) = lVar15;
      func_0x000107c61174(lVar15);
      func_0x000107c5fadc(plVar2,uVar14);
      func_0x000107c6142c(uVar14);
      pcStack_98 = FUN_1010836a8;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      pcStack_a8 = FUN_100de205c;
      puStack_a0 = &UNK_11037d358;
      ppuVar8 = &puStack_b8;
      puStack_90 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar9 = PTR_PTR_1126aed70;
      func_0x000107c61168();
      func_0x000107c3dad0();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(plVar2);
      func_0x000107c61574(puStack_90);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61174();
      if ((ulong)puVar7 >> 0x3e == 0) {
        puVar10 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar10 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar7) {
          puVar10 = puVar7;
        }
        func_0x000107c60480(puVar10);
      }
      puVar10 = puVar10 + 1;
      uVar13 = 0;
      FUN_10108329c(0,puVar10,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar6 = uVar13 & 0xffffffffffffff8;
      uVar17 = *(ulong *)(uVar6 + 0x10);
      puVar7 = (undefined *)(uVar17 + 1);
      uVar16 = uVar13;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar17) {
        uVar16 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        puVar10 = puVar7;
        FUN_10108329c(uVar16,puVar7,1,uVar13);
        uVar6 = uVar16 & 0xffffffffffffff8;
      }
      *(undefined **)(uVar6 + 0x10) = puVar7;
      *(undefined **)(uVar6 + uVar17 * 8 + 0x20) = puVar9;
    }
    func_0x000107c61170(puVar9);
    func_0x000107c61174(uVar18);
    uVar14 = uVar18;
    func_0x00010108f8e8();
    puVar7 = PTR_PTR_1126aed78;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar11,uVar12);
    func_0x000107c5fadc(uVar14,puVar10);
    func_0x000107c6142c(puVar10);
    uVar12 = 0;
    FUN_101083760(0,0x112d360a8,&PTR_PTR_1126aed70);
    uVar17 = uVar16;
    func_0x000107c5fc48(uVar16,uVar12);
    func_0x000107c454c0();
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar17);
    func_0x000107c53fcc(puVar7);
    puVar9 = puVar7;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101082a40);
      (*pcVar1)();
    }
    func_0x000107c59ba8();
    func_0x000107c61170(puVar9);
    func_0x000107c4f018(lVar15);
    func_0x000107c6142c(uVar16);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(puVar7);
  }
  return;
}



/* Entry: 1010836a8; end: 1010836d7;  */

void FUN_1010836a8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101082bac(param_1,*(undefined8 *)(unaff_x20 + 0x10),&UNK_11037d4d0,0x10108393c,&UNK_11037d4e8)
  ;
  return;
}



/* Entry: 1010836d8; end: 1010836f3;  */

void FUN_1010836d8(long param_1,long param_2)

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



/* Entry: 1010836f4; end: 101083753;  */

void FUN_1010836f4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101082bac(param_1,*(undefined8 *)(unaff_x20 + 0x10),&UNK_11037d480,FUN_101083754,
                &UNK_11037d498);
  return;
}



/* Entry: 101083754; end: 10108375f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101083754(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = 0;
  uStack_40 = 5;
  uStack_30 = 3;
  func_0x0001002a64a8(&uStack_40);
  return;
}



/* Entry: 101083760; end: 10108379f;  */

void FUN_101083760(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1010837a0; end: 1010837ff;  */

void FUN_1010837a0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101082bac(param_1,*(undefined8 *)(unaff_x20 + 0x10),&UNK_11037d610,0x10108380c,&UNK_11037d628)
  ;
  return;
}



/* Entry: 101083800; end: 101083817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101083800(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = 0;
  uStack_40 = 8;
  uStack_30 = 3;
  func_0x0001002a64a8(&uStack_40);
  return;
}



/* Entry: 101083818; end: 101083877;  */

void FUN_101083818(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101082bac(param_1,*(undefined8 *)(unaff_x20 + 0x10),&UNK_11037d750,0x101083884,&UNK_11037d768)
  ;
  return;
}



/* Entry: 101083878; end: 10108388f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101083878(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = 0;
  uStack_40 = 0xb;
  uStack_30 = 3;
  func_0x0001002a64a8(&uStack_40);
  return;
}



/* Entry: 101083890; end: 1010838d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101083890(undefined8 param_1)

{
  undefined8 auStack_40 [2];
  undefined1 uStack_30;
  
  uStack_30 = 3;
  auStack_40[0] = param_1;
  func_0x0001002a64a8(auStack_40);
  return;
}



/* Entry: 1010838d4; end: 101083943;  */

void FUN_1010838d4(long param_1,long param_2)

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



/* Entry: 101083944; end: 1010839b7;  */

void FUN_101083944(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    param_3 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000107c5faec(param_3);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3,uVar3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1010839b8; end: 101083a9b;  */

/* WARNING: Possible PIC construction at 0x000101083a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101083a0c) */

long FUN_1010839b8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = *param_1;
  lVar6 = param_1[1];
  uVar5 = param_1[2];
  lVar2 = param_1[4];
  lVar9 = param_1[5];
  lVar7 = *param_2;
  lVar8 = param_2[1];
  lVar1 = param_2[4];
  lVar3 = param_2[5];
  if ((lVar4 == lVar7) && (lVar6 == lVar8)) {
    if (((uVar5 == param_2[2]) && (param_1[3] == param_2[3])) ||
       (func_0x000107c605b8(uVar5,param_1[3],param_2[2],param_2[3],0), (uVar5 & 1) != 0)) {
      lVar4 = lVar2;
      lVar6 = lVar9;
      lVar7 = lVar1;
      lVar8 = lVar3;
      if ((lVar2 != lVar1) || (lVar9 != lVar3)) goto code_r0x000107c605b8;
      lVar6 = 1;
    }
    else {
      lVar6 = 0;
    }
    return lVar6;
  }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar4,lVar6,lVar7,lVar8,0);
  return lVar4;
}



/* Entry: 101083a9c; end: 101083bcb;  */

/* WARNING: Possible PIC construction at 0x000101083b00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101083b58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101083b04) */
/* WARNING: Removing unreachable block (ram,0x000101083b5c) */

long FUN_101083a9c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar8 = *param_1;
  lVar10 = param_1[1];
  uVar9 = param_1[2];
  lVar4 = param_1[4];
  lVar1 = param_1[5];
  lVar5 = param_1[6];
  lVar13 = param_1[7];
  lVar11 = *param_2;
  lVar12 = param_2[1];
  lVar2 = param_2[4];
  lVar6 = param_2[5];
  lVar3 = param_2[6];
  lVar7 = param_2[7];
  if ((lVar8 == lVar11) && (lVar10 == lVar12)) {
    if (((uVar9 == param_2[2]) && (param_1[3] == param_2[3])) ||
       (func_0x000107c605b8(uVar9,param_1[3],param_2[2],param_2[3],0), (uVar9 & 1) != 0)) {
      lVar8 = lVar4;
      lVar10 = lVar1;
      lVar11 = lVar2;
      lVar12 = lVar6;
      if ((((lVar4 != lVar2) || (lVar1 != lVar6)) ||
          (lVar8 = lVar5, lVar10 = lVar13, lVar11 = lVar3, lVar12 = lVar7, lVar5 != lVar3)) ||
         (lVar13 != lVar7)) goto code_r0x000107c605b8;
      lVar10 = 1;
    }
    else {
      lVar10 = 0;
    }
    return lVar10;
  }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar8,lVar10,lVar11,lVar12,0);
  return lVar8;
}



/* Entry: 101083bcc; end: 101083be7;  */

ulong FUN_101083bcc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
  uVar2 = param_1[1];
  uVar1 = *param_2;
  uVar3 = param_2[1];
  cVar4 = (char)param_2[2];
  bVar5 = (byte)param_1[2];
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      if (cVar4 == '\0') {
        if ((uVar6 == uVar1) && (uVar2 == uVar3)) {
          return 1;
        }
        goto 
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF;
      }
    }
    else if (cVar4 == '\x01') {
      return (ulong)((((uint)uVar1 ^ (uint)uVar6) & 0xff) == 0);
    }
  }
  else {
    if (bVar5 != 2) {
                    /* WARNING: Could not recover jumptable at 0x0001010850fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10d91f1a0)[uVar6] * 4 + 0x101085100))();
      return uVar6;
    }
    if (cVar4 == '\x02') {
      if ((uVar6 == uVar1) && (uVar2 == uVar3)) {
        return 1;
      }
__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(uVar6,uVar2,uVar1,uVar3,0);
      return uVar6;
    }
  }
  return 0;
}



/* Entry: 101083be8; end: 101083c6b;  */

void FUN_101083be8(void)

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



/* Entry: 101083c6c; end: 101083c77;  */

bool FUN_101083c6c(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_2;
  uVar2 = (uint)bVar1;
  switch((uint)*param_1) {
  case 2:
    if (uVar2 == 2) {
      return true;
    }
    break;
  case 3:
    if (uVar2 == 3) {
      return true;
    }
    break;
  case 4:
    if (uVar2 == 4) {
      return true;
    }
    break;
  case 5:
    if (uVar2 == 5) {
      return true;
    }
    break;
  case 6:
    if (bVar1 == 6) {
      return true;
    }
    break;
  case 7:
    if (bVar1 == 7) {
      return true;
    }
    break;
  case 8:
    if (bVar1 == 8) {
      return true;
    }
    break;
  case 9:
    if (bVar1 == 9) {
      return true;
    }
    break;
  case 10:
    if (bVar1 == 10) {
      return true;
    }
    break;
  case 0xb:
    if (bVar1 == 0xb) {
      return true;
    }
    break;
  case 0xc:
    if (bVar1 == 0xc) {
      return true;
    }
    break;
  case 0xd:
    if (bVar1 == 0xd) {
      return true;
    }
    break;
  case 0xe:
    if (uVar2 == 0xe) {
      return true;
    }
    break;
  case 0xf:
    if (uVar2 == 0xf) {
      return true;
    }
    break;
  default:
    if (0xd < uVar2 - 2) {
      return *param_1 == uVar2;
    }
  }
  return false;
}



/* Entry: 101083c78; end: 101083e3b;  */

undefined8 FUN_101083c78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  func_0x0001000285a8(0x112d58a40,&UNK_10d91f318);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  uStack_78 = 0;
  puStack_80 = (undefined *)0x1;
  pcStack_70 = (code *)CONCAT71(pcStack_70._1_7_,3);
  func_0x000100087c34(&puStack_80);
  lVar6 = *(long *)(unaff_x20 + 0x60);
  if (lVar6 != 0) {
    func_0x000107c615f0(lVar6);
    func_0x000107c5fadc(param_1,param_2);
    puVar2 = &UNK_11037d920;
    func_0x000107c613fc(&UNK_11037d920,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_11037d948;
    func_0x000107c613fc(&UNK_11037d948,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_1010858ec;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = (code *)&UNK_1000f6b44;
    puStack_68 = &UNK_11037d960;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar3);
    pcStack_60 = (code *)0x101085910;
    puStack_80 = puVar2;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_10108405c;
    puStack_68 = &UNK_11037d988;
    puStack_58 = (undefined *)uVar1;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4f9e0(lVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(param_1);
  }
  return uVar1;
}



/* Entry: 101083e3c; end: 101083f7f;  */

undefined8 FUN_101083e3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  ppuVar4 = &puStack_90;
  func_0x0001000285a8(0x112d58a40,&UNK_10d91f318);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  uStack_88 = 0;
  puStack_90 = (undefined *)0xc;
  pcStack_80 = (code *)CONCAT71(pcStack_80._1_7_,3);
  func_0x000100087c34(&puStack_90);
  FUN_101086198();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  uStack_70 = 0x101085918;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101083944;
  puStack_78 = &UNK_11037d9b0;
  uStack_68 = uVar2;
  func_0x000107c60bc4(&puStack_90);
  uVar1 = uStack_68;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c5d6a4(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar3);
  return uVar2;
}



/* Entry: 101083f80; end: 10108400f;  */

void FUN_101083f80(long param_1)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x0001000a8868(param_1 + 0x78,*(undefined8 *)(param_1 + 0x90));
    func_0x00010108cce4();
    uStack_58 = 0;
    uStack_60 = 9;
    uStack_50 = 3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101084010; end: 10108405b;  */

void FUN_101084010(long param_1)

{
  ulong auStack_40 [2];
  undefined1 uStack_30;
  
  auStack_40[1] = 0;
  auStack_40[0] = (ulong)(param_1 == 0);
  uStack_30 = 1;
  func_0x000100087c34(auStack_40);
  return;
}



/* Entry: 10108405c; end: 1010840cf;  */

void FUN_10108405c(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    param_3 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000107c5faec(param_3);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3,uVar3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1010840d0; end: 10108414b;  */

void FUN_1010840d0(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 uStack_30;
  
  if ((param_1 & 1) == 0) {
    uStack_40 = 0;
    if (param_3 != 0) {
      uStack_40 = param_2;
    }
    lVar1 = -0x2000000000000000;
    if (param_3 != 0) {
      lVar1 = param_3;
    }
    uStack_30 = 2;
    lStack_38 = lVar1;
    func_0x000107c61434(param_3);
    func_0x000100087c34(&uStack_40);
    func_0x000107c6142c(lVar1);
  }
  else {
    lStack_38 = 0;
    uStack_40 = 7;
    uStack_30 = 3;
    func_0x000100087c34(&uStack_40);
  }
  return;
}



/* Entry: 10108414c; end: 101084177;  */

/* WARNING: Possible PIC construction at 0x000101084168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010108416c) */
/* WARNING: Removing unreachable block (ram,0x0001000834e4) */
/* WARNING: Removing unreachable block (ram,0x0001000834fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834f4) */

void FUN_10108414c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 101084178; end: 1010841d3;  */

void FUN_101084178(long param_1)

{
  undefined8 uVar1;
  
  func_0x000103dbf870();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c6157c();
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x68));
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x70));
  func_0x0001000834e4(param_1 + 0x78);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0xa0,7);
  return;
}



/* Entry: 1010841d4; end: 101084277;  */

void FUN_1010841d4(undefined8 param_1)

{
  if (lRam0000000112d58908 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e620904);
  return;
}



/* Entry: 101084278; end: 10108433b;  */

void FUN_101084278(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar2);
  func_0x000107c60eb0("SCChangeUsernameFeature.PasswordPageBusinessLogic",0x31,"init(initialState:)"
                      ,0x13,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010842c8);
  (*pcVar1)();
}



/* Entry: 10108433c; end: 101084437;  */

long * FUN_10108433c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  long *plStack_58;
  
  if ((char)param_1[2] == '\x03') {
    if (*param_1 == 10 && param_1[1] == 0) {
      FUN_101083e3c();
      return param_1;
    }
    if (*param_1 == 0 && param_1[1] == 0) {
      uVar4 = *param_2;
      uVar1 = param_2[1];
      uVar10 = param_2[2];
      uVar12 = param_2[3];
      uVar9 = uVar4;
      uVar11 = uVar1;
      func_0x000107c5fb1c();
      func_0x000107c5fb1c();
      if (uVar9 == uVar10 && uVar11 == uVar12) {
        func_0x000107c6142c(uVar11);
        func_0x000107c6142c(uVar12);
      }
      else {
        func_0x000107c605b8(uVar9,uVar11,uVar10,uVar12,0);
        func_0x000107c6142c(uVar11);
        func_0x000107c6142c(uVar12);
        if ((uVar9 & 1) == 0) {
          ppuVar7 = &puStack_80;
          ppuVar8 = &puStack_80;
          func_0x0001000285a8(0x112d58a40,&UNK_10d91f318);
          func_0x000107c613fc();
          plVar3 = (long *)0x1;
          func_0x00010008747c();
          uStack_78 = 0;
          puStack_80 = (undefined *)0x1;
          pcStack_70 = (code *)CONCAT71(pcStack_70._1_7_,3);
          func_0x000100087c34(&puStack_80);
          lVar13 = *(long *)(unaff_x20 + 0x60);
          if (lVar13 != 0) {
            func_0x000107c615f0(lVar13);
            func_0x000107c5fadc(uVar4,uVar1);
            puVar5 = &UNK_11037d920;
            func_0x000107c613fc(&UNK_11037d920,0x18,7);
            func_0x000107c61644(puVar5 + 0x10,unaff_x20);
            puVar6 = &UNK_11037d948;
            func_0x000107c613fc(&UNK_11037d948,0x20,7);
            *(undefined **)(puVar6 + 0x10) = puVar5;
            *(long **)(puVar6 + 0x18) = plVar3;
            puVar5 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_60 = FUN_1010858ec;
            puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_78 = 0x42000000;
            pcStack_70 = (code *)&UNK_1000f6b44;
            puStack_68 = &UNK_11037d960;
            plStack_58 = (long *)puVar6;
            func_0x000107c60bc4(&puStack_80);
            plVar2 = plStack_58;
            func_0x000107c6157c(plVar3);
            func_0x000107c61574(plVar2);
            pcStack_60 = (code *)0x101085910;
            puStack_80 = puVar5;
            uStack_78 = 0x42000000;
            pcStack_70 = FUN_10108405c;
            puStack_68 = &UNK_11037d988;
            plStack_58 = plVar3;
            func_0x000107c60bc4(&puStack_80);
            plVar2 = plStack_58;
            func_0x000107c6157c(plVar3);
            func_0x000107c61574(plVar2);
            func_0x000107c4f9e0(lVar13);
            func_0x000107c60bd0(ppuVar8);
            func_0x000107c60bd0(ppuVar7);
            func_0x000107c615e8(lVar13);
            func_0x000107c61170(uVar4);
          }
          return plVar3;
        }
      }
    }
  }
  return (long *)0x0;
}



/* Entry: 101084438; end: 101084447;  */

void FUN_101084438(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((char)param_1[2] == '\x01') {
    if ((uVar1 & 0xff) != 1) {
      func_0x0001000a8868(unaff_x20 + 0x78,*(undefined8 *)(unaff_x20 + 0x90));
      func_0x00010108ce70();
    }
  }
  else if ((char)param_1[2] == '\x03') {
    if (uVar1 == 0 && uVar2 == 0) {
      func_0x0001000a8868(unaff_x20 + 0x78,*(undefined8 *)(unaff_x20 + 0x90));
      func_0x00010108c534();
    }
    else if (uVar1 == 10 && uVar2 == 0) {
      func_0x0001000a8868(unaff_x20 + 0x78,*(undefined8 *)(unaff_x20 + 0x90));
      func_0x00010108c6bc();
    }
    else if (uVar1 == 0xb && uVar2 == 0) {
      func_0x0001000a8868(unaff_x20 + 0x78,*(undefined8 *)(unaff_x20 + 0x90));
      func_0x00010108c844();
    }
  }
  return;
}



/* Entry: 101084448; end: 1010844cb;  */

void FUN_101084448(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  puVar1 = &uStack_50;
  func_0x0001000285a8(0x112d58a38,&UNK_10d91f310);
  uStack_48 = 0;
  uStack_50 = 6;
  uStack_40 = 3;
  func_0x000107c6157c(param_1);
  func_0x000100854cb0(&uStack_50);
  func_0x000103dbf524();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1010844cc; end: 1010844cf;  */

void FUN_1010844cc(void)

{
  return;
}



/* Entry: 1010844d0; end: 1010845c7;  */

undefined8 * FUN_1010844d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1010845c8; end: 1010845e3;  */

void FUN_1010845c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 1010845e4; end: 101084647;  */

undefined8 * FUN_1010845e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  return param_1;
}



/* Entry: 101084648; end: 10108472f;  */

int FUN_101084648(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x32) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101084730; end: 1010847cb;  */

undefined8 * FUN_101084730(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x0001010846f0(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1010847cc; end: 10108480f;  */

undefined8 * FUN_1010847cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000101084718(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 101084810; end: 1010848df;  */

int FUN_101084810(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1010848e0; end: 101084967;  */

void FUN_1010848e0(long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  
  if (*(byte *)(param_2 + 0x31) - 2 < 0xe) {
    param_3 = -0x2000000000000000;
    param_2 = 0;
  }
  else if (*(byte *)(param_2 + 0x31) == 1) {
    func_0x000108b9aaa4();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101084968);
      (*pcVar1)();
    }
    lVar2 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    param_2 = lVar2;
  }
  else {
    func_0x00010108ff00();
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 101084968; end: 101084a5f;  */

void FUN_101084968(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = 0x112d483a8;
  puVar3 = &UNK_10d910f00;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&lStack_50 - extraout_x8;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    func_0x00010108ff24();
  }
  else {
    func_0x00010108ff34();
  }
  lStack_50 = lVar1;
  puStack_48 = puVar3;
  func_0x000107c5ef04(lVar5);
  lVar2 = 0;
  func_0x000107c5ef14();
  lVar1 = lVar5;
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar5,0,1,lVar2);
  FUN_100e8b654();
  lVar2 = lVar5;
  puVar4 = PTR___sSSN_11034da80;
  func_0x000107c601e0(lVar5,PTR___sSSN_11034da80,lVar1);
  FUN_100eca640(lVar5);
  func_0x000107c6142c(puVar3);
  *param_1 = lVar2;
  param_1[1] = (long)puVar4;
  return;
}



/* Entry: 101084a60; end: 101084abb;  */

void FUN_101084a60(byte *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  if (lVar1 == 0 && param_2[1] == -0x2000000000000000) {
    bVar2 = 0;
  }
  else {
    func_0x000107c605b8(lVar1,param_2[1],0,0xe000000000000000,0);
    bVar2 = (byte)lVar1 ^ 1;
  }
  *param_1 = bVar2 & 1;
  return;
}



/* Entry: 101084abc; end: 101084af3;  */

void FUN_101084abc(undefined8 param_1,long param_2)

{
  *(bool *)param_1 = *(char *)(param_2 + 0x31) == '\x03' || *(char *)(param_2 + 0x31) == '\x0f';
  return;
}



/* Entry: 101084af4; end: 101084c7f;  */

void FUN_101084af4(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_2 + 0x31) == '\b') {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010108fca8();
    lVar3 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
    lVar4 = lVar3;
    func_0x00010075bbf0();
    *(long *)(lVar3 + 0x40) = lVar4;
    *(undefined8 *)(lVar3 + 0x20) = uVar1;
    *(undefined8 *)(lVar3 + 0x28) = uVar2;
    func_0x000107c61434(uVar2);
    lVar4 = param_3;
    func_0x000107c5fb00(param_2,param_3,lVar3);
    func_0x000107c6142c(param_3);
  }
  else {
    param_2 = 0;
    lVar4 = -0x2000000000000000;
  }
  *param_1 = param_2;
  param_1[1] = lVar4;
  return;
}



/* Entry: 101084c80; end: 101084d9b;  */

void FUN_101084c80(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (*(char *)(param_2 + 0x31) == '\r') {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    FUN_10108fa30();
    lVar8 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 2;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    func_0x000107c5fb1c();
    *(undefined **)(lVar8 + 0x38) = PTR___sSSN_11034da80;
    uVar2 = uVar1;
    func_0x00010075bbf0();
    *(undefined8 *)(lVar8 + 0x40) = uVar2;
    *(undefined8 *)(lVar8 + 0x20) = uVar1;
    *(undefined8 *)(lVar8 + 0x28) = uVar4;
    lVar6 = param_3;
    func_0x000107c5fb00(param_2,param_3,lVar8);
    lVar7 = lVar6;
    func_0x000107c6142c();
    func_0x00010108fafc();
    lVar8 = param_3;
    lVar9 = lVar7;
    func_0x00010108fbc8();
    lVar3 = lVar8;
    lVar5 = lVar9;
    FUN_10108fc94();
  }
  else {
    param_2 = 0;
    lVar6 = 0;
    param_3 = 0;
    lVar7 = 0;
    lVar8 = 0;
    lVar9 = 0;
    lVar3 = 0;
    lVar5 = 0;
  }
  *param_1 = param_2;
  param_1[1] = lVar6;
  param_1[2] = param_3;
  param_1[3] = lVar7;
  param_1[4] = lVar8;
  param_1[5] = lVar9;
  param_1[6] = lVar3;
  param_1[7] = lVar5;
  return;
}



/* Entry: 101084d9c; end: 101084e5f;  */

undefined * FUN_101084d9c(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  
  puVar3 = PTR___sSbSQsWP_11034dd50;
  puVar1 = PTR___sSbN_11034dd40;
  pcVar2 = FUN_101084a60;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_101084a60,0,puVar1);
  func_0x000107c61574(param_1);
  func_0x000104884898(puVar3);
  func_0x000107c61574(pcVar2);
  return puVar3;
}



/* Entry: 101084e60; end: 10108506f;  */

undefined8
FUN_101084e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000103dbf46c();
  func_0x0001000bfde0(param_3,0,param_4);
  func_0x000107c61574(param_1);
  func_0x000104884898(param_5);
  func_0x000107c61574(param_3);
  return param_5;
}



/* Entry: 101085070; end: 1010853df;  */

ulong FUN_101085070(ulong param_1,long param_2,byte param_3,ulong param_4,long param_5,char param_6)

{
  if (param_3 < 2) {
    if (param_3 == 0) {
      if (param_6 == '\0') {
        if ((param_1 == param_4) && (param_2 == param_5)) {
          return 1;
        }
        goto 
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF;
      }
    }
    else if (param_6 == '\x01') {
      return (ulong)((((uint)param_4 ^ (uint)param_1) & 0xff) == 0);
    }
  }
  else {
    if (param_3 != 2) {
                    /* WARNING: Could not recover jumptable at 0x0001010850fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10d91f1a0)[param_1] * 4 + 0x101085100))();
      return param_1;
    }
    if (param_6 == '\x02') {
      if ((param_1 == param_4) && (param_2 == param_5)) {
        return 1;
      }
__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(param_1,param_2,param_4,param_5,0);
      return param_1;
    }
  }
  return 0;
}



/* Entry: 1010853e0; end: 10108582f;  */

void FUN_1010853e0(ulong *param_1,ulong param_2,ulong param_3,byte param_4,ulong *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  
  if (param_4 < 2) {
    if (param_4 == 0) {
      uVar6 = param_5[2];
      uVar7 = param_5[3];
      uVar1 = param_5[4];
      uVar2 = param_5[5];
      bVar8 = (byte)param_5[6];
      uVar3 = *(undefined1 *)((long)param_5 + 0x31);
      func_0x0001010846f0(param_2,param_3,0);
      func_0x000107c61434(uVar7);
      func_0x000107c61434(uVar2);
      uVar4 = param_3;
      uVar5 = param_2;
      param_2 = uVar1;
      param_3 = uVar2;
    }
    else {
      uVar3 = (param_2 & 0xff) == 1;
      uVar5 = *param_5;
      uVar4 = param_5[1];
      uVar6 = param_5[2];
      uVar7 = param_5[3];
      param_2 = param_5[4];
      param_3 = param_5[5];
      bVar8 = (byte)param_5[6];
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar7);
      func_0x000107c61434(param_3);
    }
  }
  else {
    if (param_4 != 2) {
                    /* WARNING: Could not recover jumptable at 0x00010108551c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10d91f1bb)[param_2] * 4 + 0x101085520))();
      return;
    }
    uVar5 = *param_5;
    uVar4 = param_5[1];
    uVar6 = param_5[2];
    uVar7 = param_5[3];
    bVar8 = (byte)param_5[6];
    func_0x0001010846f0(param_2,param_3,2);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar7);
    uVar3 = 9;
  }
  *param_1 = uVar5;
  param_1[1] = uVar4;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  param_1[4] = param_2;
  param_1[5] = param_3;
  *(byte *)(param_1 + 6) = bVar8 & 1;
  *(undefined1 *)((long)param_1 + 0x31) = uVar3;
  return;
}



/* Entry: 101085830; end: 1010858eb;  */

void FUN_101085830(ulong param_1,long param_2,char param_3)

{
  long unaff_x20;
  
  if (param_3 == '\x01') {
    if ((param_1 & 0xff) != 1) {
      func_0x0001000a8868(unaff_x20 + 0x78,*(undefined8 *)(unaff_x20 + 0x90));
      func_0x00010108ce70();
    }
  }
  else if (param_3 == '\x03') {
    if (param_1 == 0 && param_2 == 0) {
      func_0x0001000a8868(unaff_x20 + 0x78,*(undefined8 *)(unaff_x20 + 0x90));
      func_0x00010108c534();
    }
    else if (param_1 == 10 && param_2 == 0) {
      func_0x0001000a8868(unaff_x20 + 0x78,*(undefined8 *)(unaff_x20 + 0x90));
      func_0x00010108c6bc();
    }
    else if (param_1 == 0xb && param_2 == 0) {
      func_0x0001000a8868(unaff_x20 + 0x78,*(undefined8 *)(unaff_x20 + 0x90));
      func_0x00010108c844();
    }
  }
  return;
}



/* Entry: 1010858ec; end: 10108591f;  */

void FUN_1010858ec(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x0001000a8868(lVar1 + 0x78,*(undefined8 *)(lVar1 + 0x90));
    func_0x00010108cce4();
    uStack_58 = 0;
    uStack_60 = 9;
    uStack_50 = 3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101085920; end: 10108598b;  */

undefined8 FUN_101085920(undefined8 param_1,undefined8 param_2)

{
  FUN_1010844d0(param_2,param_1,&UNK_11037d7f8);
  return param_2;
}



/* Entry: 10108598c; end: 101085a9b;  */

undefined8 * FUN_10108598c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 101085a9c; end: 101085aff;  */

undefined8 * FUN_101085a9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101085b00; end: 101085ba7;  */

int FUN_101085b00(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101085ba8; end: 101085bd7;  */

/* WARNING: Possible PIC construction at 0x000101085bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101085bc0) */

void FUN_101085ba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101085bd8; end: 101085cb7;  */

undefined8 * FUN_101085bd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 101085cb8; end: 101085d0b;  */

undefined8 * FUN_101085cb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101085d0c; end: 101085f53;  */

int FUN_101085d0c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101085f54; end: 101085f93;  */

void FUN_101085f54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d58a48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91f3c4;
  func_0x000107c61520(&UNK_10d91f3c4,&UNK_11037dbf8);
  puRam0000000112d58a48 = puVar1;
  return;
}



/* Entry: 101085f94; end: 1010860eb;  */

int FUN_101085f94(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101086010;
        goto LAB_101085ff4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101085ff4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101086010:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1010860ec; end: 10108612b;  */

void FUN_1010860ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d58a50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91f4c4;
  func_0x000107c61520(&UNK_10d91f4c4,&UNK_11037dc88);
  puRam0000000112d58a50 = puVar1;
  return;
}



/* Entry: 10108612c; end: 101086197;  */

undefined1 FUN_10108612c(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 101086198; end: 10108652b;  */

void FUN_101086198(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar15 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar14 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(unaff_x20 + 0x28);
  if (lVar13 == 0) {
    lVar11 = 0;
  }
  else {
    lVar2 = lVar13;
    func_0x000107c3e550();
    func_0x000107c61180();
    lVar11 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c45070();
    func_0x000107c61180();
    lVar2 = lVar13;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    lVar13 = lVar2;
    if (lVar11 != 0) {
      lVar3 = lVar11;
      func_0x000107c3e544();
      func_0x000107c61180();
      if (lVar3 != 0) {
        if (lVar2 != 0) {
          puVar4 = PTR_PTR_1126b58e0;
          func_0x000107c610f8();
          func_0x000107c615f0(lVar2);
          func_0x000107c453e4();
          puVar10 = puVar4;
          func_0x000107c5e458();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          func_0x000107c61170(puVar10);
          uVar5 = 0xd000000000000024;
          func_0x000107c5fadc(0xd000000000000024,0x800000010ef22b40);
          puVar10 = puVar4;
          func_0x000107c5e820(puVar4);
          func_0x000107c61180();
          func_0x000107c61170(uVar5);
          func_0x000107c61170(puVar10);
          puVar10 = puVar4;
          func_0x000107c3ecc8();
          func_0x000107c61180();
          puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puStack_98 = puVar10;
          func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
          func_0x0001000295c4(0);
          (**(code **)(lVar15 + 0x68))
                    (puVar14,*(undefined4 *)
                              PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1);
          puVar7 = puVar14;
          func_0x000107c5fff0(puVar14);
          (**(code **)(lVar15 + 8))(puVar14,lVar1);
          puVar10 = &UNK_11037dd08;
          func_0x000107c613fc(&UNK_11037dd08,0x18,7);
          func_0x000107c61644(puVar10 + 0x10);
          pcStack_70 = FUN_10108679c;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          pcStack_80 = FUN_1010866ac;
          puStack_78 = &UNK_11037dd20;
          ppuVar8 = &puStack_90;
          puStack_68 = puVar10;
          func_0x000107c60bc4(ppuVar8);
          func_0x000107c61574(puStack_68);
          puVar10 = puStack_98;
          func_0x000107c42fec(lVar2);
          func_0x000107c61180();
          func_0x000107c615e8();
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c615e8(lVar11);
          func_0x000107c615ec(lVar2,2);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar7);
          return;
        }
        func_0x000107c61170();
      }
    }
  }
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 == 0) {
    func_0x000107c6157c(uVar5);
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c6157c(uVar5);
    func_0x000107c5fadc(uVar12,lVar1);
  }
  uVar9 = uVar12;
  func_0x000108ffe710(uVar12);
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  puVar10 = (undefined *)0x1;
  func_0x000108ffef38(1,uVar9,1);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  puStack_90 = puVar10;
  func_0x000100087c34(&puStack_90);
  func_0x000107c61170(puVar10);
  func_0x000107c615e8(lVar11);
  func_0x000107c615e8(lVar13);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 10108652c; end: 1010866ab;  */

void FUN_10108652c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_68;
  long alStack_60 [3];
  undefined1 auStack_48 [24];
  
  if (param_1 == 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
    lVar1 = param_4 + 0x10;
    func_0x000107c61648();
    if (lVar1 == 0) {
      return;
    }
    if (*(long *)(lVar1 + 0x20) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      func_0x000107c5fadc(uVar2);
    }
    uVar3 = uVar2;
    func_0x000108ffe710(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar2 = 1;
    func_0x000108ffef38(1,uVar3,1);
    func_0x000107c61180();
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61428(param_4 + 0x10,alStack_60,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61648();
    if (param_4 == 0) {
      func_0x000107c61170(uVar2);
      return;
    }
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(param_4);
    uStack_68 = uVar2;
    func_0x000100087c34(&uStack_68);
    func_0x000107c61170(uVar2);
  }
  else {
    func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61648();
    if (param_4 == 0) {
      return;
    }
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    func_0x000107c61174();
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(param_4);
    alStack_60[0] = param_1;
    func_0x000100087c34(alStack_60);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 1010866ac; end: 101086747;  */

/* WARNING: Possible PIC construction at 0x000101086720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101086724) */

void FUN_1010866ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101086748; end: 10108679b;  */

void FUN_101086748(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10108679c; end: 1010867bf;  */

void FUN_10108679c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_68;
  long alStack_60 [3];
  undefined1 auStack_48 [24];
  
  if (param_1 == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar1 == 0) {
      return;
    }
    if (*(long *)(lVar1 + 0x20) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      func_0x000107c5fadc(uVar2);
    }
    uVar3 = uVar2;
    func_0x000108ffe710(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar2 = 1;
    func_0x000108ffef38(1,uVar3,1);
    func_0x000107c61180();
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61428(unaff_x20 + 0x10,alStack_60,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar1 == 0) {
      func_0x000107c61170(uVar2);
      return;
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(lVar1);
    uStack_68 = uVar2;
    func_0x000100087c34(&uStack_68);
    func_0x000107c61170(uVar2);
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar1 == 0) {
      return;
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c61174();
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(lVar1);
    alStack_60[0] = param_1;
    func_0x000100087c34(alStack_60);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 1010867c0; end: 101086bc7;  */

undefined * FUN_1010867c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c5a100(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x00010108f6d0();
  uVar3 = param_2;
  func_0x000107c5fb24();
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(puVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 101086bc8; end: 101086eeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101086bc8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long extraout_x8;
  long unaff_x20;
  int iVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  
  lVar3 = 0;
  FUN_10108abf4();
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar13 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_10108fc94();
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d58b20);
  func_0x000107c6159c(puVar13,lVar3,3);
  uVar5 = 0;
  FUN_1010884e0(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar14);
  FUN_101088680(lVar4,param_2,uVar14,puVar13);
  lVar6 = lVar4;
  func_0x00010108f8c8();
  func_0x000107c6159c(puVar13,lVar3,2);
  func_0x000107c610f8(uVar5);
  FUN_101088680(lVar6,param_2,uVar14,puVar13,uVar5);
  func_0x000107c61574(uVar14);
  lVar3 = *(long *)(unaff_x20 + _DAT_112d58b10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101086eec);
    (*pcVar2)();
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_112d58b08);
  lVar11 = ((long *)(unaff_x20 + _DAT_112d58b08))[1];
  func_0x000107c5fadc(lVar7,lVar11);
  lVar8 = lVar3;
  func_0x000107c4980c();
  func_0x000107c615e8(lVar3);
  func_0x000107c61170();
  iVar12 = (int)lVar8;
  if (iVar12 < 3) {
    if (iVar12 != 0) {
      if (iVar12 == 1) {
        func_0x0001010900f8();
        lVar3 = lVar7;
        lVar8 = lVar11;
        goto LAB_101086db0;
      }
      if (iVar12 == 2) {
        func_0x0001010901c4();
        lVar3 = lVar7;
        lVar8 = lVar11;
        goto LAB_101086db0;
      }
    }
  }
  else if (iVar12 < 5) {
    if (iVar12 == 3) {
      func_0x000101090290();
      lVar3 = lVar7;
      lVar8 = lVar11;
      goto LAB_101086db0;
    }
    if (iVar12 == 4) {
      func_0x00010109035c();
      lVar3 = lVar7;
      lVar8 = lVar11;
      goto LAB_101086db0;
    }
  }
  else {
    if (iVar12 == 5) {
      func_0x000101090428();
      lVar3 = lVar7;
      lVar8 = lVar11;
      goto LAB_101086db0;
    }
    if (iVar12 == 6) {
      lVar3 = 0;
      lVar8 = -0x2000000000000000;
      goto LAB_101086db0;
    }
  }
  func_0x00010109002c();
  lVar3 = lVar7;
  lVar8 = lVar11;
LAB_101086db0:
  func_0x0001010904f4();
  lVar9 = lVar7;
  FUN_100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x18) = 5;
  *(undefined8 *)(lVar9 + 0x10) = 2;
  lVar1 = _DAT_112d58b70;
  uVar5 = *(undefined8 *)(lVar6 + _DAT_112d58b70);
  *(undefined8 *)(lVar9 + 0x20) = uVar5;
  uVar14 = *(undefined8 *)(lVar4 + lVar1);
  *(undefined8 *)(lVar9 + 0x28) = uVar14;
  puVar10 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar14);
  func_0x000107c5fadc(lVar7,lVar11);
  func_0x000107c6142c(lVar11);
  func_0x000107c5fadc(lVar3,lVar8);
  func_0x000107c6142c(lVar8);
  uVar5 = 0;
  FUN_101088878(0,0x112d360a8,&PTR_PTR_1126aed70);
  lVar11 = lVar9;
  func_0x000107c5fc48(lVar9,uVar5);
  func_0x000107c61574(lVar9);
  func_0x000107c48d50(puVar10);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar11);
  return puVar10;
}



/* Entry: 101086eec; end: 101086ef3; -[_TtC23SCChangeUsernameFeature26ChangeUsernameStartingPage leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101086eec(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_10108abf4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c6159c(puVar2);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar2);
  FUN_101088500(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101086ef4; end: 101086efb; -[_TtC23SCChangeUsernameFeature26ChangeUsernameStartingPage leftSwipeSucceed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101086ef4(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_10108abf4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c6159c(puVar2);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar2);
  FUN_101088500(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101086efc; end: 101087af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101086efc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  puVar2 = PTR_PTR_1126b0620;
  func_0x000107c61168();
  lVar15 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  lVar12 = lVar15;
  func_0x0001010905c0();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c3d728();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar12);
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101087ad4);
    (*pcVar1)();
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar2);
  func_0x000107c61170(puVar3);
  lVar15 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar15 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101087ad8);
    (*pcVar1)();
  }
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112d58b28);
  func_0x000107c3d89c();
  func_0x000107c61170(lVar15);
  lVar15 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar15 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101087adc);
    (*pcVar1)();
  }
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d58b30);
  func_0x000107c3d89c();
  func_0x000107c61170(lVar15);
  lVar15 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar15 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101087ae0);
    (*pcVar1)();
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d58b38);
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar15 + 0x18) = 0x13;
  *(undefined8 *)(lVar15 + 0x10) = 9;
  uVar4 = uVar11;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar12 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101087ae4);
    (*pcVar1)();
  }
  lVar13 = lVar12;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  uVar5 = uVar4;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar13);
  *(undefined8 *)(lVar15 + 0x20) = uVar5;
  uVar4 = uVar11;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar12 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101087ae8);
    (*pcVar1)();
  }
  lVar13 = lVar12;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  uVar5 = uVar4;
  func_0x000107c40284(0xc030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar13);
  *(undefined8 *)(lVar15 + 0x28) = uVar5;
  uVar4 = uVar11;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ec1c(puVar2);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(lVar15 + 0x30) = uVar5;
  uVar4 = uVar10;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar12 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101087aec);
    (*pcVar1)();
  }
  lVar13 = lVar12;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  uVar5 = uVar4;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar13);
  *(undefined8 *)(lVar15 + 0x38) = uVar5;
  uVar4 = uVar10;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar12 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 != 0) {
    lVar13 = lVar12;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    uVar5 = uVar4;
    func_0x000107c40284(0xc030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar13);
    *(undefined8 *)(lVar15 + 0x40) = uVar5;
    uVar4 = uVar10;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c40290(0x4043000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    *(undefined8 *)(lVar15 + 0x48) = uVar5;
    uVar4 = uVar10;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c3ec1c(uVar11);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c40284(0x4020000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar11);
    *(undefined8 *)(lVar15 + 0x50) = uVar5;
    uVar11 = uVar9;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c3ec1c(uVar10);
    func_0x000107c61180();
    uVar4 = uVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar10);
    *(undefined8 *)(lVar15 + 0x58) = uVar4;
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar12 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar12 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar13 = lVar12;
      func_0x000107c3f75c(lVar12);
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      uVar11 = uVar9;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(lVar13);
      *(undefined8 *)(lVar15 + 0x60) = uVar11;
      uVar11 = 0;
      FUN_101088878(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar12 = lVar15;
      func_0x000107c5fc48(lVar15,uVar11);
      func_0x000107c61574(lVar15);
      func_0x000107c3d048(puVar3);
      func_0x000107c61170(lVar12);
      lVar15 = unaff_x20 + _DAT_112d58b18;
      func_0x000107c61428(lVar15,auStack_78,0,0);
      lVar12 = *(long *)(lVar15 + 0x18);
      if (lVar12 != 0) {
        func_0x0001000a8868(lVar15,lVar12);
        lVar13 = *(long *)(lVar12 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
        (**(code **)(lVar13 + 0x10))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        plVar6 = (long *)0x0;
        FUN_10108a070();
        plVar7 = plVar6;
        FUN_10108b228();
        (**(code **)(lVar13 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar12);
        puVar3 = &UNK_11037dd58;
        func_0x000107c613fc(&UNK_11037dd58,0x18,7);
        func_0x000107c61614(puVar3 + 0x10);
        uVar11 = 0x101088870;
        puVar8 = puVar3;
        (**(code **)(*plVar7 + 0x60))(0x101088870);
        func_0x000107c61574(plVar7);
        func_0x000107c61574(puVar3);
        uVar10 = uVar11;
        func_0x000107c614f0(uVar11);
        (**(code **)(puVar8 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d58b40),uVar10,puVar8);
        func_0x000107c615e8(uVar11);
        lVar12 = *(long *)(lVar15 + 0x18);
        if (lVar12 != 0) {
          func_0x0001000a8868(lVar15,lVar12);
          lVar13 = *(long *)(lVar12 + -8);
          (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
          (**(code **)(lVar13 + 0x10))(auStack_80 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
          plVar7 = plVar6;
          (*(code *)(undefined *)0x10108b260)(plVar6,&PTR_DAT_11037de38);
          (**(code **)(lVar13 + 8))
                    (auStack_80 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),lVar12);
          puVar3 = &UNK_11037dd58;
          func_0x000107c613fc(&UNK_11037dd58,0x18,7);
          func_0x000107c61614(puVar3 + 0x10);
          pcVar1 = FUN_101088868;
          puVar8 = puVar3;
          (**(code **)(*plVar7 + 0x60))(FUN_101088868);
          func_0x000107c61574(plVar7);
          func_0x000107c61574(puVar3);
          pcVar14 = pcVar1;
          func_0x000107c614f0(pcVar1);
          (**(code **)(puVar8 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d58b40),pcVar14,puVar8);
          func_0x000107c615e8(pcVar1);
          lVar12 = *(long *)(lVar15 + 0x18);
          if (lVar12 != 0) {
            func_0x0001000a8868(lVar15,lVar12);
            lVar13 = *(long *)(lVar12 + -8);
            (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
            (**(code **)(lVar13 + 0x10))(auStack_80 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0))
            ;
            plVar7 = plVar6;
            (*(code *)(undefined *)0x10108b244)(plVar6,&PTR_DAT_11037de38);
            (**(code **)(lVar13 + 8))
                      (auStack_80 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0),lVar12);
            puVar3 = &UNK_11037dd80;
            func_0x000107c613fc(&UNK_11037dd80,0x18,7);
            *(undefined **)(puVar3 + 0x10) = puVar2;
            pcVar14 = *(code **)(*plVar7 + 0x60);
            func_0x000107c61174(puVar2);
            pcVar1 = FUN_10108882c;
            puVar8 = puVar3;
            (*pcVar14)(FUN_10108882c);
            func_0x000107c61574(plVar7);
            func_0x000107c61574(puVar3);
            pcVar14 = pcVar1;
            func_0x000107c614f0(pcVar1);
            (**(code **)(puVar8 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d58b40),pcVar14,puVar8)
            ;
            func_0x000107c615e8(pcVar1);
            lVar12 = *(long *)(lVar15 + 0x18);
            if (lVar12 != 0) {
              func_0x0001000a8868(lVar15,lVar12);
              lVar13 = *(long *)(lVar12 + -8);
              (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
              (**(code **)(lVar13 + 0x10))
                        (auStack_80 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
              plVar7 = plVar6;
              FUN_10108b27c(plVar6,&PTR_DAT_11037de38);
              (**(code **)(lVar13 + 8))
                        (auStack_80 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0),lVar12);
              puVar3 = &UNK_11037dd58;
              func_0x000107c613fc(&UNK_11037dd58,0x18,7);
              func_0x000107c61614(puVar3 + 0x10);
              uVar11 = 0x101088824;
              puVar8 = puVar3;
              (**(code **)(*plVar7 + 0x60))(0x101088824);
              func_0x000107c61574(plVar7);
              func_0x000107c61574(puVar3);
              uVar10 = uVar11;
              func_0x000107c614f0(uVar11);
              (**(code **)(puVar8 + 0x10))
                        (*(undefined8 *)(unaff_x20 + _DAT_112d58b40),uVar10,puVar8);
              func_0x000107c615e8(uVar11);
              lVar12 = *(long *)(lVar15 + 0x18);
              if (lVar12 != 0) {
                func_0x0001000a8868(lVar15,lVar12);
                lVar13 = *(long *)(lVar12 + -8);
                (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
                (**(code **)(lVar13 + 0x10))
                          (auStack_80 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
                plVar7 = plVar6;
                FUN_10108b2f0(plVar6,&PTR_DAT_11037de38);
                (**(code **)(lVar13 + 8))
                          (auStack_80 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0),lVar12);
                puVar3 = &UNK_11037dd58;
                func_0x000107c613fc(&UNK_11037dd58,0x18,7);
                func_0x000107c61614(puVar3 + 0x10);
                uVar11 = 0x10108881c;
                puVar8 = puVar3;
                (**(code **)(*plVar7 + 0x60))(0x10108881c);
                func_0x000107c61574(plVar7);
                func_0x000107c61574(puVar3);
                uVar10 = uVar11;
                func_0x000107c614f0(uVar11);
                (**(code **)(puVar8 + 0x10))
                          (*(undefined8 *)(unaff_x20 + _DAT_112d58b40),uVar10,puVar8);
                func_0x000107c615e8(uVar11);
                lVar12 = *(long *)(lVar15 + 0x18);
                if (lVar12 != 0) {
                  func_0x0001000a8868(lVar15,lVar12);
                  lVar15 = *(long *)(lVar12 + -8);
                  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
                  (**(code **)(lVar15 + 0x10))
                            (auStack_80 + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
                  (*(code *)(undefined *)0x10108b30c)(plVar6,&PTR_DAT_11037de38);
                  (**(code **)(lVar15 + 8))
                            (auStack_80 + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0),lVar12);
                  puVar3 = &UNK_11037dd58;
                  func_0x000107c613fc(&UNK_11037dd58,0x18,7);
                  func_0x000107c61614(puVar3 + 0x10);
                  pcVar1 = FUN_101088814;
                  puVar8 = puVar3;
                  (**(code **)(*plVar6 + 0x60))(FUN_101088814);
                  func_0x000107c61574(plVar6);
                  func_0x000107c61574(puVar3);
                  pcVar14 = pcVar1;
                  func_0x000107c614f0(pcVar1);
                  (**(code **)(puVar8 + 0x10))
                            (*(undefined8 *)(unaff_x20 + _DAT_112d58b40),pcVar14,puVar8);
                  func_0x000107c615e8(pcVar1);
                }
              }
            }
          }
        }
      }
      func_0x000107c61170(puVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101087af4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101087af0);
  (*pcVar1)();
}



/* Entry: 101087af4; end: 101087b83; -[_TtC23SCChangeUsernameFeature26ChangeUsernameStartingPage viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101087af4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  FUN_101086efc();
  func_0x000107c53fcc(*(undefined8 *)(param_1 + _DAT_112d58b30));
  func_0x000107c3d8b8(*(undefined8 *)(param_1 + _DAT_112d58b38));
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101087b84; end: 101087bb7; -[_TtC23SCChangeUsernameFeature26ChangeUsernameStartingPage getTitle] */

void FUN_101087b84(undefined8 param_1,undefined8 param_2)

{
  func_0x00010108f6d0();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 101087bb8; end: 101087d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101087bb8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112d58b30);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(param_2);
    func_0x000107c5fadc(uVar2,uVar1);
    func_0x000107c59c6c(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  return;
}



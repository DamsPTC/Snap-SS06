/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10380b028; end: 10380b1f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380b028(long param_1,ulong param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  puVar8 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar8,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f9ccb0;
  if (param_1 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + _DAT_112f9ccb0);
  func_0x000107c3fb8c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  if (uVar3 == param_2 && puVar8 == param_3) {
    func_0x000107c6142c(puVar8);
  }
  else {
    func_0x000107c605b8(uVar3,puVar8,param_2,param_3,0);
    func_0x000107c6142c(puVar8);
    if ((uVar3 & 1) == 0) goto LAB_10380b124;
  }
  lVar4 = *(long *)(param_1 + _DAT_112f9cd10);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    pcVar5 = "widgetDismissed()";
    func_0x0001000c10c0("widgetDismissed()");
    func_0x000107c61180();
    puVar6 = &UNK_110698ec8;
    func_0x000107c613fc(&UNK_110698ec8,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,param_1);
    uStack_78 = 0x10380d198;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110699250;
    ppuVar7 = &puStack_98;
    puStack_70 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_70);
    func_0x000107c4e524(pcVar5);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(pcVar5);
    return;
  }
  func_0x000107c61170();
  func_0x000107c54218(*(undefined8 *)(param_1 + lVar1));
  func_0x000107c4d664(*(undefined8 *)(param_1 + _DAT_112f9cc90));
LAB_10380b124:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10380b1f8; end: 10380b273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380b1f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112f9cca8);
    if (lVar1 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c6157c(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c5f84c();
      func_0x000107c61574(lVar1);
    }
  }
  return;
}



/* Entry: 10380b274; end: 10380b433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380b274(undefined8 param_1,long param_2,ulong param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [24];
  
  puVar7 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar7,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar5 = _DAT_112f9ccb0;
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(ulong *)(param_2 + _DAT_112f9ccb0);
  func_0x000107c3fb8c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  if (uVar2 == param_3 && puVar7 == param_4) {
    func_0x000107c6142c(puVar7);
  }
  else {
    func_0x000107c605b8(uVar2,puVar7,param_3,param_4,0);
    func_0x000107c6142c(puVar7);
    if ((uVar2 & 1) == 0) goto LAB_10380b40c;
  }
  func_0x000107c59a58(*(undefined8 *)(param_2 + lVar5));
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  func_0x000107c61174(uVar3);
  uVar4 = param_5;
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c593e4(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c4d664(*(undefined8 *)(param_2 + _DAT_112f9cc90));
  lVar6 = _DAT_112f9cca0;
  lVar5 = param_2 + _DAT_112f9cca0;
  func_0x000107c61618();
  if (lVar5 != 0) {
    FUN_10380cb20(param_5,param_6);
    func_0x000107c4ed94(lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(param_5);
  }
  lVar6 = param_2 + lVar6;
  func_0x000107c61618();
  if (lVar6 != 0) {
    func_0x000107c496c0();
    func_0x000107c615e8(lVar6);
  }
  FUN_1038091a4(param_3,param_4);
LAB_10380b40c:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10380b434; end: 10380b577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10380b434(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = ((ulong *)(unaff_x20 + _DAT_112f9ccb8))[1];
  uVar1 = param_2;
  if (uVar4 == 0) {
LAB_10380b4f4:
    uVar5 = *(ulong *)(unaff_x20 + _DAT_112f9ccb0);
    func_0x000107c3fb8c();
    func_0x000107c61180();
    uVar4 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    if (uVar4 == param_1 && uVar1 == param_2) {
      uVar3 = 1;
    }
    else {
      func_0x000107c605b8(uVar4,uVar1,param_1,param_2,0);
      uVar3 = (uint)uVar4;
    }
    func_0x000107c6142c(uVar1);
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_112f9ccb8);
    if ((uVar5 != param_1 || uVar4 != param_2) &&
       (uVar1 = uVar5, func_0x000107c605b8(uVar5,uVar4,param_1,param_2,0), (uVar1 & 1) == 0)) {
      func_0x000107c61434(uVar4);
      func_0x000107c5fb78(param_1,param_2);
      uVar2 = 0;
      uVar1 = 0xe100000000000000;
      func_0x000107c5fbb8(0x7e,0xe100000000000000,uVar5,uVar4);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(0xe100000000000000);
      if ((uVar2 & 1) == 0) goto LAB_10380b4f4;
    }
    uVar3 = 1;
  }
  return uVar3 & 1;
}



/* Entry: 10380b578; end: 10380b99f;  */

void FUN_10380b578(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar6 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  pcVar2 = "retrieveThumbnailForImageFuture(thumbnail:clientId:clientIdCacheKey:)";
  func_0x0001000c10c0("retrieveThumbnailForImageFuture(thumbnail:clientId:clientIdCacheKey:)");
  func_0x000107c61180();
  puVar3 = &UNK_110698ec8;
  func_0x000107c613fc(&UNK_110698ec8,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  func_0x000107c61614(puVar3 + 0x10,param_2);
  func_0x000107c61170(param_2);
  puVar4 = &UNK_1106993c8;
  func_0x000107c613fc(&UNK_1106993c8,0x48,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(undefined8 *)(puVar4 + 0x28) = uVar6;
  puVar4[0x30] = uVar1;
  *(undefined8 *)(puVar4 + 0x38) = param_5;
  *(undefined8 *)(puVar4 + 0x40) = param_6;
  uStack_88 = 0x10380d108;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_1106993e0;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar3 = puStack_80;
  func_0x000107c61434(param_4);
  func_0x000100f96518(uVar6,uVar1);
  func_0x000107c61434(param_6);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 10380b9a0; end: 10380baef;  */

/* WARNING: Possible PIC construction at 0x00010380ba88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380bab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010380ba8c) */
/* WARNING: Removing unreachable block (ram,0x00010380babc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380b9a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  *(undefined1 *)(unaff_x20 + _DAT_112f9cce8) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f9cd08);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f9cd08))[1];
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 0x30))(param_1,param_2,uVar2,lVar1);
  lVar1 = _DAT_112f9ccb0;
  if (param_1 == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f9ccb0);
  func_0x000107c61174();
  func_0x000107c59cec(uVar2);
  func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112f9cc90));
  if (*(long *)(unaff_x20 + _DAT_112f9cd30) != 0) {
    func_0x000107c614f0(*(long *)(unaff_x20 + _DAT_112f9cd30));
    param_1 = *(long *)(unaff_x20 + lVar1);
    func_0x000107c3fb8c(param_1);
    func_0x000107c61180();
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10380baf0; end: 10380bd43;  */

void FUN_10380baf0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  long lVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0710a0);
  puVar4 = puVar2;
  func_0x000107c4d9bc();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  if (puVar4 == (undefined *)0x0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(&uStack_a0,puVar4);
    func_0x000107c615e8(puVar4);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x000100938314(&uStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar5 = &uStack_b0;
    func_0x000107c6147c(puVar5,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar5 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      func_0x000107c415e0();
      func_0x000107c61180();
      uVar3 = uStack_b0;
      func_0x000107c5fadc(uStack_b0,uStack_a8);
      func_0x000107c6142c(uStack_a8);
      puVar4 = puVar2;
      func_0x000107c403a8();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(uVar3);
      if (puVar4 != (undefined *)0x0) {
        func_0x000107c5edb4(lVar6,puVar4);
        func_0x000107c61170(puVar4);
        (**(code **)(lVar7 + 0x20))(lVar6 - extraout_x12,lVar6,lVar1);
        func_0x000107c5ed9c(param_1,0x7845746567646957,0xef6e6f69736e6574);
        (**(code **)(lVar7 + 8))(lVar6 - extraout_x12,lVar1);
        uVar3 = 0;
        goto LAB_10380bd10;
      }
    }
  }
  uVar3 = 1;
LAB_10380bd10:
  (**(code **)(lVar7 + 0x38))(param_1,uVar3,1,lVar1);
  return;
}



/* Entry: 10380bd44; end: 10380bd67;  */

void FUN_10380bd44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x68) = param_7;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10380bd68,0,0);
  return;
}



/* Entry: 10380bd68; end: 10380be23;  */

void FUN_10380bd68(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  FUN_10380cd98();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(ulong *)(unaff_x22 + 0x58) = param_2;
  if (0xe < param_2 >> 0x3c) {
                    /* WARNING: Could not recover jumptable at 0x00010380bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar3 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar2 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  uVar2 = 0x112d45220;
  FUN_10380d050(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10380be24,uVar3,uVar2);
  return;
}



/* Entry: 10380be24; end: 10380bed3;  */

void FUN_10380be24(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10380bed4(*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58),
                  *(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
                  *(undefined8 *)(unaff_x22 + 0x48),*(undefined1 *)(unaff_x22 + 0x68));
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10380bea4,0,0);
  return;
}



/* Entry: 10380bed4; end: 10380c5cf;  */

/* WARNING: Removing unreachable block (ram,0x00010380c26c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380bed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined *param_5,ulong param_6)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar14;
  long unaff_x20;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long alStack_110 [2];
  ulong uStack_98;
  undefined *puStack_90;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = &stack0xffffffffffffff00 + -extraout_x8;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar11 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar11 - extraout_x12;
  lVar13 = 0x112d36580;
  puVar6 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  uVar12 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = uVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar13 - extraout_x12_01;
  puVar19 = (undefined *)((ulong *)(unaff_x20 + _DAT_112f9ccb8))[1];
  if (puVar19 == (undefined *)0x0) {
LAB_10380c0f4:
    uVar5 = *(ulong *)(unaff_x20 + _DAT_112f9ccb0);
    func_0x000107c3fb8c();
    func_0x000107c61180();
    uVar15 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    if (uVar15 == param_4 && puVar6 == param_5) {
      func_0x000107c6142c(puVar6);
    }
    else {
      func_0x000107c605b8(uVar15,puVar6,param_4,param_5,0);
      func_0x000107c6142c(puVar6);
      param_6 = param_6 & 0xffffffff;
      if ((uVar15 & 1) == 0) goto LAB_10380c578;
    }
  }
  else {
    uVar15 = *(ulong *)(unaff_x20 + _DAT_112f9ccb8);
    if ((uVar15 != param_4 || puVar19 != param_5) &&
       (uVar5 = uVar15, func_0x000107c605b8(uVar15,puVar19,param_4,param_5,0), (uVar5 & 1) == 0)) {
      uStack_98 = 0x7e;
      puStack_90 = (undefined *)0xe100000000000000;
      func_0x000107c61434(puVar19);
      func_0x000107c5fb78(param_4,param_5);
      puVar7 = puStack_90;
      uVar5 = uStack_98;
      puVar6 = puStack_90;
      func_0x000107c5fbb8(uStack_98,puStack_90,uVar15,puVar19);
      func_0x000107c6142c(puVar19);
      func_0x000107c6142c(puVar7);
      if ((uVar5 & 1) == 0) goto LAB_10380c0f4;
    }
  }
  if (((param_6 & 1) != 0) && ((*(byte *)(unaff_x20 + _DAT_112f9cce8) & 1) != 0))
  goto LAB_10380c578;
  FUN_10380efec();
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar19 = puVar6;
  func_0x000107c5ed90();
  uStack_98 = 0;
  puVar7 = puVar6;
  func_0x000107c409e4();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar19);
  uVar15 = uStack_98;
  bVar1 = (int)puVar7 == 0;
  if (bVar1) {
    uVar5 = uStack_98;
    func_0x000107c61174(uStack_98);
    func_0x000107c5ed30(uVar15);
    func_0x000107c61170(uVar5);
    func_0x000107c61654();
    func_0x000107c614ac(uVar15);
  }
  else {
    func_0x000107c61174(uStack_98);
    func_0x000107c5ed9c(param_4,param_5);
    func_0x000107c5ee40(lVar10,1,param_1,param_2);
    (**(code **)(lVar18 + 0x20))(lVar17,lVar10,lVar4);
  }
  pcVar14 = *(code **)(lVar18 + 0x38);
  (*pcVar14)(lVar17,bVar1,1,lVar4);
  (*pcVar14)(lVar13,1,1,lVar4);
  iVar2 = *(int *)(lVar3 + 0x30);
  func_0x0001009382cc(lVar17,puVar16,0x112d36580,&UNK_10d9016d0);
  func_0x0001009382cc(lVar13,puVar16 + iVar2,0x112d36580,&UNK_10d9016d0);
  pcVar14 = *(code **)(lVar18 + 0x30);
  puVar8 = puVar16;
  (*pcVar14)(puVar16,1,lVar4);
  if ((int)puVar8 == 1) {
    func_0x000100938314(lVar13,0x112d36580,&UNK_10d9016d0);
    func_0x000100938314(lVar17,0x112d36580,&UNK_10d9016d0);
    puVar8 = puVar16 + iVar2;
    (*pcVar14)(puVar8,1,lVar4);
    if ((int)puVar8 == 1) {
      func_0x000100938314(puVar16,0x112d36580,&UNK_10d9016d0);
LAB_10380c54c:
      func_0x000107c6142c(param_5);
      goto LAB_10380c578;
    }
LAB_10380c404:
    func_0x000100938314(puVar16,0x112d7e680,&UNK_10d95e350);
  }
  else {
    func_0x0001009382cc(puVar16,uVar12,0x112d36580,&UNK_10d9016d0);
    puVar8 = puVar16 + iVar2;
    (*pcVar14)(puVar8,1,lVar4);
    if ((int)puVar8 == 1) {
      func_0x000100938314(lVar13,0x112d36580,&UNK_10d9016d0);
      func_0x000100938314(lVar17,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar18 + 8))(uVar12,lVar4);
      goto LAB_10380c404;
    }
    (**(code **)(lVar18 + 0x20))(lVar11,puVar16 + iVar2,lVar4);
    uVar9 = 0x112d7e688;
    FUN_10380d050(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,
                  PTR___s10Foundation3URLVSQAAMc_1103509a8);
    uVar15 = uVar12;
    func_0x000107c5fab8(uVar12,lVar11,lVar4,uVar9);
    pcVar14 = *(code **)(lVar18 + 8);
    (*pcVar14)(lVar11,lVar4);
    func_0x000100938314(lVar13,0x112d36580,&UNK_10d9016d0);
    func_0x000100938314(lVar17,0x112d36580,&UNK_10d9016d0);
    (*pcVar14)(uVar12,lVar4);
    func_0x000100938314(puVar16,0x112d36580,&UNK_10d9016d0);
    if ((uVar15 & 1) != 0) goto LAB_10380c54c;
  }
  func_0x0001009382cc(unaff_x20 + _DAT_112f9cd20,&uStack_98,0x112f9cd28,&UNK_10dc13000);
  if (lStack_80 == 0) {
    func_0x000107c6142c(param_5);
    func_0x000100938314(&uStack_98,0x112f9cd28,&UNK_10dc13000);
  }
  else {
    func_0x0001000a8868(&uStack_98,lStack_80);
    (**(code **)(lStack_78 + 0x18))(param_4,param_5,lStack_80,lStack_78);
    func_0x000107c6142c(param_5);
    func_0x0001000834e4(&uStack_98);
  }
LAB_10380c578:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  *(undefined1 **)(lVar17 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar17 + -8) = FUN_10380c5d0;
  func_0x000107c60eb0("SpotlightWidgetServices.SpotlightWidgetServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10380c5fc);
  (*pcVar14)();
}



/* Entry: 10380c5d0; end: 10380c62f; -[_TtC23SpotlightWidgetServices23SpotlightWidgetServices init] */

void FUN_10380c5d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightWidgetServices.SpotlightWidgetServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10380c5fc);
  (*pcVar1)();
}



/* Entry: 10380c630; end: 10380c7db; -[_TtC23SpotlightWidgetServices23SpotlightWidgetServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010380c64c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380c66c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380c70c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380c79c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010380c710) */
/* WARNING: Removing unreachable block (ram,0x00010380c670) */
/* WARNING: Removing unreachable block (ram,0x00010380c650) */
/* WARNING: Removing unreachable block (ram,0x00010380c7a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380c630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f9cc90));
  return;
}



/* Entry: 10380c7dc; end: 10380c7eb;  */

void FUN_10380c7dc(void)

{
  if (lRam0000000112f9cd60 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e781724);
  return;
}



/* Entry: 10380c7ec; end: 10380c80b;  */

void FUN_10380c7ec(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10380c80c; end: 10380c813;  */

void FUN_10380c80c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*(undefined8 *)(unaff_x20 + 0x10)
                     );
  func_0x000107c466c0(param_1);
  FUN_10380a7a8(param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10380c814; end: 10380c833;  */

void FUN_10380c814(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10380c834; end: 10380c857;  */

void FUN_10380c834(void)

{
  FUN_10380aa4c();
  return;
}



/* Entry: 10380c858; end: 10380c877;  */

void FUN_10380c858(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10380c878; end: 10380c89b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380c878(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  puVar1 = *(undefined1 **)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar11 = auStack_78;
  func_0x000107c61428(lVar3 + 0x10,puVar11,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar8 = _DAT_112f9ccb0;
  if (lVar3 == 0) {
    return;
  }
  uVar4 = *(ulong *)(lVar3 + _DAT_112f9ccb0);
  func_0x000107c3fb8c();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  if (uVar5 == uVar2 && puVar11 == puVar1) {
    func_0x000107c6142c(puVar11);
  }
  else {
    func_0x000107c605b8(uVar5,puVar11,uVar2,puVar1,0);
    func_0x000107c6142c(puVar11);
    if ((uVar5 & 1) == 0) goto LAB_10380b40c;
  }
  func_0x000107c59a58(*(undefined8 *)(lVar3 + lVar8));
  uVar6 = *(undefined8 *)(lVar3 + lVar8);
  func_0x000107c61174(uVar6);
  uVar7 = uVar9;
  func_0x000107c5fadc(uVar9,uVar12);
  func_0x000107c593e4(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c4d664(*(undefined8 *)(lVar3 + _DAT_112f9cc90));
  lVar10 = _DAT_112f9cca0;
  lVar8 = lVar3 + _DAT_112f9cca0;
  func_0x000107c61618();
  if (lVar8 != 0) {
    FUN_10380cb20(uVar9,uVar12);
    func_0x000107c4ed94(lVar8);
    func_0x000107c615e8(lVar8);
    func_0x000107c61170(uVar9);
  }
  lVar10 = lVar3 + lVar10;
  func_0x000107c61618();
  if (lVar10 != 0) {
    func_0x000107c496c0();
    func_0x000107c615e8(lVar10);
  }
  FUN_1038091a4(uVar2,puVar1);
LAB_10380b40c:
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 10380c89c; end: 10380cb1f;  */

undefined * FUN_10380c89c(undefined *param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long alStack_c0 [8];
  undefined *apuStack_80 [2];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)0x0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)apuStack_80 + lVar1;
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c5edc4();
  puVar8 = param_2;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  puStack_70 = (undefined *)0x0;
  puVar5 = puVar4;
  func_0x000107c40528();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar7);
  puVar4 = puStack_70;
  if (puVar5 == (undefined *)0x0) {
    param_1 = puStack_70;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(param_1);
    func_0x000107c61654();
    puVar6 = puVar4;
    func_0x000107c614ac(puVar4);
    puVar7 = puVar4;
  }
  else {
    puVar6 = puVar5;
    puVar8 = PTR___sSSN_11034da80;
    func_0x000107c5fc54(puVar5,PTR___sSSN_11034da80);
    func_0x000107c61174(puVar4);
    func_0x000107c61170(puVar5);
    lVar12 = *(long *)(puVar6 + 0x10);
    puVar7 = puVar4;
    if (lVar12 != 0) {
      puVar10 = (undefined8 *)(puVar6 + 0x28);
      apuStack_80[0] = puVar6;
      do {
        puVar5 = (undefined *)puVar10[-1];
        puVar7 = (undefined *)*puVar10;
        func_0x000107c61434(puVar7);
        puVar4 = puVar5;
        puVar8 = puVar7;
        FUN_10380f198(puVar5,puVar7);
        if (((ulong)puVar4 & 1) == 0) {
          func_0x000107c6142c(puVar7);
        }
        else {
          func_0x000107c5ed9c(lVar9,puVar5,puVar7);
          func_0x000107c6142c(puVar7);
          puVar7 = puVar3;
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar5 = puVar7;
          func_0x000107c5ed90();
          puStack_70 = (undefined *)0x0;
          puVar4 = puVar7;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar5);
          puVar5 = puStack_70;
          if ((int)puVar4 == 0) {
            puVar4 = puStack_70;
            func_0x000107c61174(puStack_70);
            func_0x000107c5ed30();
            func_0x000107c61170(puVar4);
            func_0x000107c61654();
            func_0x000107c614ac(puVar5);
            puVar7 = puVar5;
          }
          else {
            func_0x000107c61174(puStack_70);
          }
          puVar8 = puVar2;
          (**(code **)(lVar11 + 8))(lVar9,puVar2);
        }
        puVar10 = puVar10 + 2;
        lVar12 = lVar12 + -1;
        puVar6 = apuStack_80[0];
      } while (lVar12 != 0);
    }
    func_0x000107c6142c(puVar6);
    puVar4 = puVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    *(undefined **)((long)alStack_c0 + lVar1) = puVar3;
    *(long *)((long)alStack_c0 + lVar1 + 8) = lVar9;
    *(undefined **)((long)alStack_c0 + lVar1 + 0x10) = puVar2;
    *(undefined **)((long)alStack_c0 + lVar1 + 0x18) = puVar7;
    *(undefined **)((long)alStack_c0 + lVar1 + 0x20) = puVar4;
    *(undefined **)((long)alStack_c0 + lVar1 + 0x28) = param_1;
    *(undefined1 **)((long)alStack_c0 + lVar1 + 0x30) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_c0 + lVar1 + 0x38) = FUN_10380cb20;
    puVar5 = PTR_PTR_1126d5ca0;
    func_0x000107c610f8(PTR_PTR_1126d5ca0);
    func_0x000107c453e4();
    func_0x000107c5fadc(puVar6,puVar8);
    func_0x000107c593e4(puVar5);
    func_0x000107c61170(puVar6);
    puVar4 = PTR_PTR_1126c9298;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c59850();
    puVar3 = puVar4;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      puVar8 = (undefined *)0xc000000000000000;
    }
    else {
      puVar7 = puVar3;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar3);
    }
    puVar3 = puVar7;
    func_0x000107c5ee20(puVar7,puVar8);
    func_0x00010006c090(puVar7,puVar8);
    func_0x000107c54534(puVar5);
    func_0x000107c61170(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c5388c(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    return puVar5;
  }
  return puVar6;
}



/* Entry: 10380cb20; end: 10380cc43;  */

undefined * FUN_10380cb20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d5ca0;
  func_0x000107c610f8(PTR_PTR_1126d5ca0);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c593e4(puVar1);
  func_0x000107c61170(param_1);
  puVar2 = PTR_PTR_1126c9298;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c59850();
  puVar3 = puVar2;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
    param_2 = 0xc000000000000000;
  }
  else {
    puVar4 = puVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
  }
  puVar3 = puVar4;
  func_0x000107c5ee20(puVar4,param_2);
  func_0x00010006c090(puVar4,param_2);
  func_0x000107c54534(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c5388c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return puVar1;
}



/* Entry: 10380cc44; end: 10380cc6f;  */

void FUN_10380cc44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10380cc70; end: 10380cc8b;  */

void FUN_10380cc70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar2 = "fetchAndApplyMediaThumbnail(_:)";
  func_0x0001000c10c0("fetchAndApplyMediaThumbnail(_:)");
  func_0x000107c61180();
  puVar3 = &UNK_110698ec8;
  func_0x000107c613fc(&UNK_110698ec8,0x18,7);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618(lVar4);
  func_0x000107c61614(puVar3 + 0x10,lVar4);
  func_0x000107c61170(lVar4);
  puVar5 = &UNK_1106992b0;
  func_0x000107c613fc(&UNK_1106992b0,0x38,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(undefined8 *)(puVar5 + 0x28) = uVar1;
  *(undefined8 *)(puVar5 + 0x30) = uVar7;
  uStack_78 = 0x10380cc7c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_1106992c8;
  ppuVar6 = &puStack_98;
  puStack_70 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar3 = puStack_70;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61434(uVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 10380cc8c; end: 10380cd5b;  */

void FUN_10380cc8c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = 0;
  func_0x000107c5ede0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar6 = (long *)(unaff_x20 +
                   (uVar7 + *(long *)(*(long *)(lVar5 + -8) + 0x40) + 7 & 0xfffffffffffffff8));
  lVar5 = *plVar6;
  lVar3 = plVar6[1];
  lVar4 = plVar6[2];
  plVar6 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10380cd5c;
  *(char *)(plVar6 + 0xd) = (char)lVar4;
  plVar6[8] = lVar5;
  plVar6[9] = lVar3;
  plVar6[6] = lVar2;
  plVar6[7] = unaff_x20 + uVar7;
  plVar6[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10380bd68,0,0);
  return;
}



/* Entry: 10380cd5c; end: 10380cd97;  */

void FUN_10380cd5c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010380cd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10380cd98; end: 10380d04f;  */

undefined1  [16] FUN_10380cd98(double param_1,double param_2,undefined *param_3,char *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  double dVar7;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  func_0x000107c5b078();
  dVar7 = param_1;
  func_0x000107c51820(param_3);
  param_1 = param_1 * dVar7;
  func_0x000107c5b078(param_3);
  func_0x000107c51820(param_3);
  dVar9 = param_2 * dVar7;
  if (param_2 * dVar7 < param_1) {
    dVar9 = param_1;
  }
  dVar7 = 360.0;
  if (dVar9 <= 360.0) {
    func_0x000107c60bb4(0x3fe999999999999a);
    func_0x000107c61180();
    if (param_3 == (undefined *)0x0) goto LAB_10380d018;
    puVar8 = param_3;
    func_0x000107c5ee30();
  }
  else {
    dVar11 = 360.0 / dVar9;
    func_0x000107c5b078(param_3);
    dVar10 = dVar9;
    func_0x000107c51820(param_3);
    dVar9 = dVar9 * dVar10;
    dVar10 = dVar11 * dVar9;
    func_0x000107c5b078(param_3);
    func_0x000107c51820(param_3);
    dVar11 = dVar11 * dVar7 * dVar9;
    puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    func_0x000107c453e4();
    func_0x000107c58bfc(0x3ff0000000000000);
    puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    func_0x000107c610f8();
    func_0x000107c486fc(dVar10,dVar11);
    puVar4 = &UNK_110699328;
    func_0x000107c613fc(&UNK_110699328,0x28,7);
    *(undefined **)(puVar4 + 0x10) = param_3;
    *(double *)(puVar4 + 0x18) = dVar10;
    *(double *)(puVar4 + 0x20) = dVar11;
    puVar8 = &UNK_110699350;
    func_0x000107c613fc(&UNK_110699350,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_10380d090;
    *(undefined **)(puVar8 + 0x18) = puVar4;
    pcStack_80 = FUN_10380d0a4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100f9148c;
    puStack_88 = &UNK_110699368;
    puStack_78 = puVar8;
    func_0x000107c60bc4(&puStack_a0);
    puVar6 = puStack_78;
    func_0x000107c61174(param_3);
    func_0x000107c6157c(puVar8);
    func_0x000107c61574(puVar6);
    puVar6 = puVar3;
    func_0x000107c45138();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar3);
    param_4 = "";
    puVar3 = puVar8;
    func_0x000107c61544(puVar8,"",0x62,0x2de,0x52,1);
    func_0x000107c61574(puVar8);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10380d050);
      (*pcVar1)();
    }
    puVar3 = puVar6;
    func_0x000107c60bb4(0x3fe999999999999a);
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c61574(puVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar2);
LAB_10380d018:
      puVar8 = (undefined *)0x0;
      param_4 = (char *)0xf000000000000000;
      goto LAB_10380d020;
    }
    puVar8 = puVar3;
    func_0x000107c5ee30();
    func_0x000107c61574(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
    param_3 = puVar2;
  }
  func_0x000107c61170(param_3);
LAB_10380d020:
  auVar12._8_8_ = param_4;
  auVar12._0_8_ = puVar8;
  return auVar12;
}



/* Entry: 10380d050; end: 10380d08f;  */

void FUN_10380d050(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10380d090; end: 10380d0a3;  */

void FUN_10380d090(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x10),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10380d0a4; end: 10380d0c3;  */

void FUN_10380d0a4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10380d0c4; end: 10380d0f7;  */

void FUN_10380d0c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10380d0f8; end: 10380d19b;  */

void FUN_10380d0f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar11 = *param_1;
  uVar4 = *(undefined1 *)(param_1 + 1);
  pcVar5 = "retrieveThumbnailForImageFuture(thumbnail:clientId:clientIdCacheKey:)";
  func_0x0001000c10c0("retrieveThumbnailForImageFuture(thumbnail:clientId:clientIdCacheKey:)");
  func_0x000107c61180();
  puVar6 = &UNK_110698ec8;
  func_0x000107c613fc(&UNK_110698ec8,0x18,7);
  func_0x000107c61428(lVar7 + 0x10,auStack_78,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618(lVar7);
  func_0x000107c61614(puVar6 + 0x10,lVar7);
  func_0x000107c61170(lVar7);
  puVar8 = &UNK_1106993c8;
  func_0x000107c613fc(&UNK_1106993c8,0x48,7);
  *(undefined **)(puVar8 + 0x10) = puVar6;
  *(undefined8 *)(puVar8 + 0x18) = uVar2;
  *(undefined8 *)(puVar8 + 0x20) = uVar1;
  *(undefined8 *)(puVar8 + 0x28) = uVar11;
  puVar8[0x30] = uVar4;
  *(undefined8 *)(puVar8 + 0x38) = uVar3;
  *(undefined8 *)(puVar8 + 0x40) = uVar10;
  uStack_88 = 0x10380d108;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_1106993e0;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar6 = puStack_80;
  func_0x000107c61434(uVar1);
  func_0x000100f96518(uVar11,uVar4);
  func_0x000107c61434(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c4e524(pcVar5);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c615e8(pcVar5);
  return;
}



/* Entry: 10380d19c; end: 10380d367;  */

void FUN_10380d19c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5ffd8();
  lVar9 = *(long *)(lVar2 + -8);
  lStack_70 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  func_0x0001000295c4();
  uStack_78 = uVar4;
  func_0x000107c5f80c(lVar3);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4ac68;
  FUN_10380ddfc(0x112d4ac68,puVar1,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar5 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar6 = 0x112d4ac78;
  func_0x00010380de3c(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar8,&puStack_68,uVar5,uVar6,lVar2,uVar4);
  (**(code **)(lVar9 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_70);
  uVar4 = 0xd00000000000002b;
  func_0x000107c5ffec(0xd00000000000002b,0x800000010f16d3c0,lVar3,lVar8,puVar7,0);
  uRam000000011380bbb0 = uVar4;
  return;
}



/* Entry: 10380d368; end: 10380d4d3;  */

void FUN_10380d368(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  uVar6 = *unaff_x20;
  FUN_10380d4d4();
  pcVar1 = "queryThumbnailInfo(_:completion:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  uVar5 = unaff_x20[2];
  if ((param_1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
  }
  else {
    if (lRam0000000112f9ce18 != -1) {
      func_0x000107c61568(0x112f9ce18,FUN_10380d19c);
    }
    uVar2 = uRam000000011380bbb0;
    func_0x000107c61174(uRam000000011380bbb0);
  }
  puVar3 = &UNK_110699418;
  func_0x000107c613fc(&UNK_110699418,0x38,7);
  puVar3[0x10] = (byte)param_1 & 1;
  *(char **)(puVar3 + 0x18) = pcVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined8 *)(puVar3 + 0x30) = uVar6;
  pcStack_60 = FUN_10380ddbc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1010605ac;
  puStack_68 = &UNK_110699430;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c615f0(pcVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar3);
  func_0x000107c4f790(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10380d4d4; end: 10380d5a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10380d4d4(ulong *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  
  func_0x000103f1dc3c();
  uVar2 = *param_1;
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(uVar2 + _DAT_11302e940);
  uVar1 = ((undefined8 *)(uVar2 + _DAT_11302e940))[1];
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c3ebd8();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (uVar4 == 0) {
    uVar5 = (ulong)*(byte *)(uVar2 + _DAT_11302e950);
  }
  else {
    uVar5 = uVar4;
    func_0x000107c3ebcc(uVar4);
    func_0x000107c61170(uVar2);
    uVar2 = uVar4;
  }
  func_0x000107c61170(uVar2);
  return uVar5;
}



/* Entry: 10380d5a4; end: 10380daa3;  */

/* WARNING: Possible PIC construction at 0x00010380d85c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380d870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380d9f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380da38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010380d874) */
/* WARNING: Removing unreachable block (ram,0x00010380da3c) */
/* WARNING: Removing unreachable block (ram,0x00010380d860) */
/* WARNING: Removing unreachable block (ram,0x00010380d9fc) */

void FUN_10380d5a4(undefined8 param_1,ulong param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7,long param_8)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long lVar14;
  undefined1 auStack_f0 [8];
  code *pcStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  lStack_b0 = param_8;
  uStack_a0 = param_1;
  func_0x000107c5f7fc();
  lStack_b8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar4 = 0;
  puStack_c0 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f824();
  lStack_d0 = *(long *)(lVar4 + -8);
  lStack_c8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  lVar13 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_d8 = lVar13;
  func_0x000107c5f804();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_a8 = param_2;
  if (param_2 >> 0x3c < 0xf) {
    puVar5 = &UNK_1106994b8;
    lStack_e0 = lVar3;
    func_0x000107c613fc(&UNK_1106994b8,0x48,7);
    *(undefined8 *)(puVar5 + 0x10) = uStack_a0;
    *(ulong *)(puVar5 + 0x18) = uStack_a8;
    puVar5[0x20] = param_4 & 1;
    *(undefined8 *)(puVar5 + 0x28) = param_5;
    *(code **)(puVar5 + 0x30) = param_6;
    *(undefined8 *)(puVar5 + 0x38) = param_7;
    *(long *)(puVar5 + 0x40) = lStack_b0;
    pcStack_e8 = param_6;
    if ((param_4 & 1) == 0) {
      func_0x0001000295c4(0);
      (**(code **)(lVar14 + 0x68))
                (lVar13,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
                 lVar4);
      uVar10 = uStack_a0;
      uVar2 = uStack_a8;
      func_0x000100de78a0(uStack_a0,uStack_a8);
      func_0x000107c6157c(param_7);
      func_0x000100de78a0(uVar10,uVar2);
      func_0x000107c615f0(param_5);
      lVar3 = lVar13;
      func_0x000107c5fff0();
      lStack_b0 = lVar3;
      (**(code **)(lVar14 + 8))(lVar13,lVar4);
      uStack_70 = 0x10380dde8;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000b0c7c;
      puStack_78 = &UNK_1106994d0;
      ppuVar9 = &puStack_90;
      puStack_68 = puVar5;
      func_0x000107c60bc4(ppuVar9);
      func_0x000107c6157c(puVar5);
      lVar3 = lStack_d8;
      func_0x000107c5f808(lStack_d8);
      puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar10 = 0x112d4af88;
      FUN_10380ddfc(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
      uVar11 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar12 = 0x112d4af98;
      func_0x00010380de3c(0x112d4af98,0x112d4af90,&UNK_10d914100);
      puVar1 = puStack_c0;
      func_0x000107c60264(puStack_c0,&puStack_98,uVar11,uVar12,lStack_e0,uVar10);
      func_0x000107c5ffe8(0,lVar3,puVar1,ppuVar9);
      func_0x000107c60bd0(ppuVar9);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
      uVar10 = uStack_a0;
      uVar2 = uStack_a8;
      func_0x000100de78a0(uStack_a0,uStack_a8);
      func_0x000107c6157c(param_7);
      func_0x000100de78a0(uVar10,uVar2);
      func_0x000107c615f0(param_5);
      func_0x000107c5ee20(uVar10,uVar2);
      func_0x000107c51770(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      puVar7 = PTR_PTR_1126b27a8;
      func_0x000107c61168();
      func_0x000107c45160();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) {
        (*pcStack_e8)();
        func_0x0001000b44c0(uStack_a0,uStack_a8);
      }
      else {
        puVar8 = puVar7;
        func_0x000107c30e3c();
        func_0x000107c61180();
        (*pcStack_e8)();
        func_0x0001000b44c0(uStack_a0,uStack_a8);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar8);
        puVar6 = puVar7;
      }
      func_0x000107c61170(puVar6);
    }
  }
  else {
    puVar5 = &UNK_110699468;
    func_0x000107c613fc(&UNK_110699468,0x21,7);
    *(code **)(puVar5 + 0x10) = param_6;
    *(undefined8 *)(puVar5 + 0x18) = param_7;
    puVar5[0x20] = param_4 & 1;
    if ((param_4 & 1) == 0) {
      uStack_70 = 0x10380defc;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_110699480;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      puVar6 = puStack_68;
      func_0x000107c6157c(param_7);
      func_0x000107c6157c(puVar5);
      puVar5 = puVar6;
    }
    else {
      func_0x000107c6157c(param_7);
      (*param_6)(0,0,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar5);
  return;
}



/* Entry: 10380daa4; end: 10380dd8f;  */

/* WARNING: Possible PIC construction at 0x00010380db14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380dbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380dbbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380dcbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380dcd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380dce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380dc24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380dd4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380dd60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010380dd50) */
/* WARNING: Removing unreachable block (ram,0x00010380dc28) */
/* WARNING: Removing unreachable block (ram,0x00010380dce4) */
/* WARNING: Removing unreachable block (ram,0x00010380dcd4) */
/* WARNING: Removing unreachable block (ram,0x00010380dcc0) */
/* WARNING: Removing unreachable block (ram,0x00010380dbc0) */
/* WARNING: Removing unreachable block (ram,0x00010380dbb0) */
/* WARNING: Removing unreachable block (ram,0x00010380db18) */
/* WARNING: Removing unreachable block (ram,0x00010380dbe0) */
/* WARNING: Removing unreachable block (ram,0x00010380dcf0) */
/* WARNING: Removing unreachable block (ram,0x00010380dc08) */
/* WARNING: Removing unreachable block (ram,0x00010380db38) */
/* WARNING: Removing unreachable block (ram,0x00010380dc48) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x00010380db78) */
/* WARNING: Removing unreachable block (ram,0x00010380dd64) */
/* WARNING: Removing unreachable block (ram,0x00010380dd6c) */

void FUN_10380daa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5ee20(param_1,param_2);
  func_0x000107c51770(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10380dd90; end: 10380ddbb;  */

void FUN_10380dd90(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10380ddbc; end: 10380ddfb;  */

/* WARNING: Possible PIC construction at 0x00010380d85c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380d870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380d9f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380da38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010380d874) */
/* WARNING: Removing unreachable block (ram,0x00010380da3c) */
/* WARNING: Removing unreachable block (ram,0x00010380d860) */
/* WARNING: Removing unreachable block (ram,0x00010380d9fc) */

void FUN_10380ddbc(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long unaff_x20;
  long lVar16;
  undefined1 auStack_f0 [8];
  code *pcStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  bVar2 = *(byte *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  lStack_b0 = *(long *)(unaff_x20 + 0x30);
  lVar5 = 0;
  uStack_a0 = param_1;
  func_0x000107c5f7fc();
  lStack_b8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar6 = 0;
  puStack_c0 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f824();
  lStack_d0 = *(long *)(lVar6 + -8);
  lStack_c8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  lVar15 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  lStack_d8 = lVar15;
  func_0x000107c5f804();
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_a8 = param_2;
  if (param_2 >> 0x3c < 0xf) {
    puVar7 = &UNK_1106994b8;
    lStack_e0 = lVar5;
    func_0x000107c613fc(&UNK_1106994b8,0x48,7);
    *(undefined8 *)(puVar7 + 0x10) = uStack_a0;
    *(ulong *)(puVar7 + 0x18) = uStack_a8;
    puVar7[0x20] = bVar2 & 1;
    *(undefined8 *)(puVar7 + 0x28) = uVar12;
    *(code **)(puVar7 + 0x30) = pcVar1;
    *(undefined8 *)(puVar7 + 0x38) = uVar13;
    *(long *)(puVar7 + 0x40) = lStack_b0;
    pcStack_e8 = pcVar1;
    if ((bVar2 & 1) == 0) {
      func_0x0001000295c4(0);
      (**(code **)(lVar16 + 0x68))
                (lVar15,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
                 lVar6);
      uVar14 = uStack_a0;
      uVar4 = uStack_a8;
      func_0x000100de78a0(uStack_a0,uStack_a8);
      func_0x000107c6157c(uVar13);
      func_0x000100de78a0(uVar14,uVar4);
      func_0x000107c615f0(uVar12);
      lVar5 = lVar15;
      func_0x000107c5fff0();
      lStack_b0 = lVar5;
      (**(code **)(lVar16 + 8))(lVar15,lVar6);
      uStack_70 = 0x10380dde8;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000b0c7c;
      puStack_78 = &UNK_1106994d0;
      ppuVar11 = &puStack_90;
      puStack_68 = puVar7;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c6157c(puVar7);
      lVar5 = lStack_d8;
      func_0x000107c5f808(lStack_d8);
      puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar12 = 0x112d4af88;
      FUN_10380ddfc(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
      uVar13 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar14 = 0x112d4af98;
      func_0x00010380de3c(0x112d4af98,0x112d4af90,&UNK_10d914100);
      puVar3 = puStack_c0;
      func_0x000107c60264(puStack_c0,&puStack_98,uVar13,uVar14,lStack_e0,uVar12);
      func_0x000107c5ffe8(0,lVar5,puVar3,ppuVar11);
      func_0x000107c60bd0(ppuVar11);
    }
    else {
      puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
      uVar14 = uStack_a0;
      uVar4 = uStack_a8;
      func_0x000100de78a0(uStack_a0,uStack_a8);
      func_0x000107c6157c(uVar13);
      func_0x000100de78a0(uVar14,uVar4);
      func_0x000107c615f0(uVar12);
      func_0x000107c5ee20(uVar14,uVar4);
      func_0x000107c51770(puVar8);
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      puVar9 = PTR_PTR_1126b27a8;
      func_0x000107c61168();
      func_0x000107c45160();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
        (*pcStack_e8)();
        func_0x0001000b44c0(uStack_a0,uStack_a8);
      }
      else {
        puVar10 = puVar9;
        func_0x000107c30e3c();
        func_0x000107c61180();
        (*pcStack_e8)();
        func_0x0001000b44c0(uStack_a0,uStack_a8);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar10);
        puVar8 = puVar9;
      }
      func_0x000107c61170(puVar8);
    }
  }
  else {
    puVar7 = &UNK_110699468;
    func_0x000107c613fc(&UNK_110699468,0x21,7);
    *(code **)(puVar7 + 0x10) = pcVar1;
    *(undefined8 *)(puVar7 + 0x18) = uVar13;
    puVar7[0x20] = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      uStack_70 = 0x10380defc;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_110699480;
      puStack_68 = puVar7;
      func_0x000107c60bc4(&puStack_90);
      puVar8 = puStack_68;
      func_0x000107c6157c(uVar13);
      func_0x000107c6157c(puVar7);
      puVar7 = puVar8;
    }
    else {
      func_0x000107c6157c(uVar13);
      (*pcVar1)(0,0,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar7);
  return;
}



/* Entry: 10380ddfc; end: 10380dedb;  */

void FUN_10380ddfc(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10380dedc; end: 10380df13;  */

void FUN_10380dedc(long param_1,long param_2)

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



/* Entry: 10380df14; end: 10380dfbf;  */

void FUN_10380df14(void)

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



/* Entry: 10380dfc0; end: 10380e01b;  */

undefined1  [16] FUN_10380dfc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar3 = *unaff_x20;
  uVar4 = 0x73736572676f7270;
  if (cVar3 != '\x01') {
    uVar4 = 0xd000000000000011;
  }
  uVar1 = 0xe800000000000000;
  if (cVar3 != '\x01') {
    uVar1 = 0x800000010f16d3f0;
  }
  uVar2 = 0x6574617473;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  uVar4 = 0xe500000000000000;
  if (cVar3 != '\0') {
    uVar4 = uVar1;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 10380e01c; end: 10380e03f;  */

void FUN_10380e01c(undefined1 *param_1,undefined1 param_2)

{
  FUN_10380e650();
  *param_1 = param_2;
  return;
}



/* Entry: 10380e040; end: 10380e057;  */

undefined1  [16] FUN_10380e040(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10380e058; end: 10380e0a7;  */

void FUN_10380e058(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010380e7dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10380e0a8; end: 10380e22f;  */

void FUN_10380e0a8(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar3 = 0x112f9ce20;
  uStack_70 = param_5;
  func_0x0001000285a8(0x112f9ce20,&UNK_10dc13100);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&uStack_70 - extraout_x8;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  func_0x00010380e7dc();
  puVar4 = &UNK_110699718;
  func_0x000107c606ec(lVar6,&UNK_110699718,&UNK_110699718,param_2,uVar1,uVar2);
  uStack_62 = 0;
  uStack_61 = param_3;
  func_0x00010380e81c();
  func_0x000107c60554(&uStack_61,&uStack_62,lVar3,&UNK_1106998b0,puVar4);
  uVar1 = uStack_70;
  if (unaff_x21 == 0) {
    uStack_63 = 1;
    func_0x000107c60544(param_1,&uStack_63,lVar3);
    uStack_64 = 2;
    func_0x000107c60520(param_4,uVar1,&uStack_64,lVar3);
    (**(code **)(lVar5 + 8))(lVar6,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(lVar6,lVar3);
  }
  return;
}



/* Entry: 10380e230; end: 10380e377;  */

/* WARNING: Possible PIC construction at 0x00010380e310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010380e314) */
/* WARNING: Removing unreachable block (ram,0x00010380e31c) */
/* WARNING: Removing unreachable block (ram,0x00010380e320) */
/* WARNING: Removing unreachable block (ram,0x00010380e324) */
/* WARNING: Removing unreachable block (ram,0x00010380e328) */
/* WARNING: Removing unreachable block (ram,0x00010380e35c) */
/* WARNING: Removing unreachable block (ram,0x00010380e334) */

void FUN_10380e230(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xeb00000000676e69;
  uVar3 = 0x746e6573;
  if (param_2 != 4) {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe400000000000000;
  if (param_2 != 4) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646573756170;
  if (param_2 != 3) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (param_2 != 3) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e6964616f6c7075;
  if (param_2 != 1) {
    uVar1 = 0x6e696873696e6966;
  }
  uVar4 = 0x646f63736e617274;
  if (param_2 != 0) {
    uVar5 = 0xe900000000000067;
    uVar4 = uVar1;
  }
  if (param_2 < 3) {
    uVar3 = uVar5;
    uVar2 = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar2,uVar3);
  return;
}



/* Entry: 10380e378; end: 10380e3a7;  */

void FUN_10380e378(undefined1 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_10380e85c();
  if (unaff_x21 == 0) {
    *param_1 = param_3;
    *(undefined8 *)(param_1 + 8) = param_2;
    *(undefined8 *)(param_1 + 0x10) = param_4;
    *(undefined8 *)(param_1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 10380e3a8; end: 10380e3c7;  */

void FUN_10380e3a8(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_10380e0a8(*(undefined8 *)(unaff_x20 + 8),param_1,*unaff_x20,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10380e3c8; end: 10380e42f;  */

void FUN_10380e3c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_88 [72];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_88,0);
  FUN_10380e230(uVar4,auStack_88,uVar3,uVar1,uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10380e430; end: 10380e43f;  */

/* WARNING: Possible PIC construction at 0x00010380e310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010380e314) */
/* WARNING: Removing unreachable block (ram,0x00010380e31c) */
/* WARNING: Removing unreachable block (ram,0x00010380e320) */
/* WARNING: Removing unreachable block (ram,0x00010380e324) */
/* WARNING: Removing unreachable block (ram,0x00010380e328) */
/* WARNING: Removing unreachable block (ram,0x00010380e35c) */
/* WARNING: Removing unreachable block (ram,0x00010380e334) */

void FUN_10380e430(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar6 = 0xeb00000000676e69;
  uVar3 = 0x746e6573;
  if (bVar4 != 4) {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4 != 4) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646573756170;
  if (bVar4 != 3) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (bVar4 != 3) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e6964616f6c7075;
  if (bVar4 != 1) {
    uVar1 = 0x6e696873696e6966;
  }
  uVar5 = 0x646f63736e617274;
  if (bVar4 != 0) {
    uVar6 = 0xe900000000000067;
    uVar5 = uVar1;
  }
  if (bVar4 < 3) {
    uVar3 = uVar6;
    uVar2 = uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (*(undefined8 *)(unaff_x20 + 8),param_1,uVar2,uVar3,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10380e440; end: 10380e4a3;  */

void FUN_10380e440(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_88 [72];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_88);
  FUN_10380e230(uVar4,auStack_88,uVar3,uVar1,uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10380e4a4; end: 10380e4cf;  */

undefined8 FUN_10380e4a4(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(param_2 + 0x18);
  bVar3 = false;
  if ((*param_1 == *param_2) &&
     (bVar3 = false, !NAN(*(double *)(param_1 + 8)) && !NAN(*(double *)(param_2 + 8)))) {
    bVar3 = *(double *)(param_1 + 8) == *(double *)(param_2 + 8);
  }
  if (bVar3) {
    if (lVar1 == 0) {
      if (lVar2 == 0) {
        return 1;
      }
    }
    else if (lVar2 != 0) {
      if ((uVar4 == *(ulong *)(param_2 + 0x10)) && (lVar1 == lVar2)) {
        return 1;
      }
      func_0x000107c605b8(uVar4,lVar1,*(ulong *)(param_2 + 0x10),lVar2,0);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10380e4d0; end: 10380e4fb;  */

void FUN_10380e4d0(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6142c(param_3);
  *param_1 = 1;
  return;
}



/* Entry: 10380e4fc; end: 10380e513;  */

undefined1  [16] FUN_10380e4fc(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10380e514; end: 10380e563;  */

void FUN_10380e514(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10380e9fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10380e564; end: 10380e587;  */

void FUN_10380e564(void)

{
  func_0x0001000834e4();
  return;
}



/* Entry: 10380e588; end: 10380e64f;  */

void FUN_10380e588(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  
  lVar3 = 0x112f9ce38;
  func_0x0001000285a8(0x112f9ce38,&UNK_10dc13108);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_10380e9fc();
  func_0x000107c606ec(&stack0xffffffffffffffb0 + -extraout_x8,&UNK_110699688,&UNK_110699688,param_1,
                      uVar1,uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,lVar3);
  return;
}



/* Entry: 10380e650; end: 10380e767;  */

undefined4 FUN_10380e650(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x6574617473;
  if ((param_1 == 0x6574617473 && param_2 == -0x1b00000000000000) ||
     (func_0x000107c605b8(0x6574617473,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if (((param_1 == 0x73736572676f7270) && (param_2 == -0x1800000000000000)) ||
       (func_0x000107c605b8(0x73736572676f7270,0xe800000000000000,param_1,param_2,0),
       (uVar1 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar2 = 1;
    }
    else if ((param_1 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffef0e92c10)) {
      func_0x000107c6142c(0x800000010f16d3f0);
      uVar2 = 2;
    }
    else {
      uVar1 = 0xd000000000000011;
      func_0x000107c605b8(0xd000000000000011,0x800000010f16d3f0,param_1,param_2,0);
      func_0x000107c6142c(param_2);
      uVar2 = 2;
      if ((uVar1 & 1) == 0) {
        uVar2 = 3;
      }
    }
  }
  return uVar2;
}



/* Entry: 10380e768; end: 10380e85b;  */

undefined8
FUN_10380e768(double param_1,double param_2,char param_3,ulong param_4,long param_5,char param_6,
             ulong param_7,long param_8)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_3 == param_6) && (bVar1 = false, !NAN(param_1) && !NAN(param_2))) {
    bVar1 = param_1 == param_2;
  }
  if (bVar1) {
    if (param_5 == 0) {
      if (param_8 == 0) {
        return 1;
      }
    }
    else if (param_8 != 0) {
      if ((param_4 == param_7) && (param_5 == param_8)) {
        return 1;
      }
      func_0x000107c605b8(param_4,param_5,param_7,param_8,0);
      if ((param_4 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10380e85c; end: 10380e9fb;  */

/* WARNING: Removing unreachable block (ram,0x00010380e98c) */

ulong FUN_10380e85c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  byte bStack_51;
  
  lVar2 = 0x112f9ce88;
  func_0x0001000285a8(0x112f9ce88,&UNK_10dc13460);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(ulong *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar5);
  func_0x00010380e7dc();
  puVar4 = &UNK_110699718;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110699718,&UNK_110699718,lVar3,
                      uVar5,uVar1);
  if (unaff_x21 == 0) {
    uStack_52 = 0;
    func_0x00010380efac();
    func_0x000107c60508(&bStack_51,&UNK_1106998b0,&uStack_52,lVar2,&UNK_1106998b0,puVar4);
    uVar5 = (ulong)bStack_51;
    uStack_53 = 1;
    func_0x000107c604fc(&uStack_53,lVar2);
    uStack_54 = 2;
    func_0x000107c604d4(&uStack_54,lVar2);
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return uVar5;
}



/* Entry: 10380e9fc; end: 10380ea3b;  */

void FUN_10380e9fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc133bc;
  func_0x000107c61520(&UNK_10dc133bc,&UNK_110699688);
  puRam0000000112f9ce40 = puVar1;
  return;
}



/* Entry: 10380ea3c; end: 10380ea3f;  */

void FUN_10380ea3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc131a0;
  func_0x000107c61520(&UNK_10dc131a0,&UNK_110699658);
  puRam0000000112f9ce48 = puVar1;
  return;
}



/* Entry: 10380ea40; end: 10380ea7f;  */

void FUN_10380ea40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc131a0;
  func_0x000107c61520(&UNK_10dc131a0,&UNK_110699658);
  puRam0000000112f9ce48 = puVar1;
  return;
}



/* Entry: 10380ea80; end: 10380ea83;  */

void FUN_10380ea80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc13218;
  func_0x000107c61520(&UNK_10dc13218,&UNK_1106995e0);
  puRam0000000112f9ce50 = puVar1;
  return;
}



/* Entry: 10380ea84; end: 10380eac3;  */

void FUN_10380ea84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc13218;
  func_0x000107c61520(&UNK_10dc13218,&UNK_1106995e0);
  puRam0000000112f9ce50 = puVar1;
  return;
}



/* Entry: 10380eac4; end: 10380eac7;  */

void FUN_10380eac4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc13240;
  func_0x000107c61520(&UNK_10dc13240,&UNK_1106995e0);
  puRam0000000112f9ce58 = puVar1;
  return;
}



/* Entry: 10380eac8; end: 10380eb07;  */

void FUN_10380eac8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc13240;
  func_0x000107c61520(&UNK_10dc13240,&UNK_1106995e0);
  puRam0000000112f9ce58 = puVar1;
  return;
}



/* Entry: 10380eb08; end: 10380eb23;  */

void FUN_10380eb08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9c900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc13110;
  func_0x000107c61520(&UNK_10dc13110,&UNK_110699658);
  puRam0000000112f9c900 = puVar1;
  return;
}



/* Entry: 10380eb24; end: 10380eb4f;  */

long FUN_10380eb24(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10380eb50; end: 10380eb57;  */

void FUN_10380eb50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10380eb58; end: 10380ec23;  */

undefined1 * FUN_10380eb58(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10380ec24; end: 10380ee5b;  */

int FUN_10380ec24(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10380ee5c; end: 10380ee9b;  */

void FUN_10380ee5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc13344;
  func_0x000107c61520(&UNK_10dc13344,&UNK_110699718);
  puRam0000000112f9ce60 = puVar1;
  return;
}



/* Entry: 10380ee9c; end: 10380ee9f;  */

void FUN_10380ee9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc13394;
  func_0x000107c61520(&UNK_10dc13394,&UNK_110699688);
  puRam0000000112f9ce68 = puVar1;
  return;
}



/* Entry: 10380eea0; end: 10380eedf;  */

void FUN_10380eea0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc13394;
  func_0x000107c61520(&UNK_10dc13394,&UNK_110699688);
  puRam0000000112f9ce68 = puVar1;
  return;
}



/* Entry: 10380eee0; end: 10380eee3;  */

void FUN_10380eee0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1336c;
  func_0x000107c61520(&UNK_10dc1336c,&UNK_110699688);
  puRam0000000112f9ce70 = puVar1;
  return;
}



/* Entry: 10380eee4; end: 10380ef23;  */

void FUN_10380eee4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1336c;
  func_0x000107c61520(&UNK_10dc1336c,&UNK_110699688);
  puRam0000000112f9ce70 = puVar1;
  return;
}



/* Entry: 10380ef24; end: 10380ef27;  */

void FUN_10380ef24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc132dc;
  func_0x000107c61520(&UNK_10dc132dc,&UNK_110699718);
  puRam0000000112f9ce78 = puVar1;
  return;
}



/* Entry: 10380ef28; end: 10380ef67;  */

void FUN_10380ef28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc132dc;
  func_0x000107c61520(&UNK_10dc132dc,&UNK_110699718);
  puRam0000000112f9ce78 = puVar1;
  return;
}



/* Entry: 10380ef68; end: 10380ef6b;  */

void FUN_10380ef68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc132b4;
  func_0x000107c61520(&UNK_10dc132b4,&UNK_110699718);
  puRam0000000112f9ce80 = puVar1;
  return;
}



/* Entry: 10380ef6c; end: 10380efeb;  */

void FUN_10380ef6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ce80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc132b4;
  func_0x000107c61520(&UNK_10dc132b4,&UNK_110699718);
  puRam0000000112f9ce80 = puVar1;
  return;
}



/* Entry: 10380efec; end: 10380f197;  */

undefined1  [16] FUN_10380efec(ulong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar3 = param_1;
  func_0x000107c5fb5c();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar3 != 0) {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000101499164(0,uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10380f198);
      (*pcVar2)();
    }
    uVar8 = 0xf;
    puVar7 = puStack_70;
    do {
      uVar10 = uVar8;
      uVar9 = param_1;
      func_0x000107c5fbcc(uVar8,param_1,param_2);
      uVar4 = uVar10;
      func_0x000107c5fa6c();
      if (((uVar4 & 1) == 0) &&
         (uVar4 = uVar10, func_0x000107c5fa70(uVar10,uVar9), (uVar4 & 1) == 0)) {
        func_0x000107c6142c(uVar9);
        uVar9 = 0xe100000000000000;
        uVar10 = 0x5f;
      }
      uVar4 = *(ulong *)(puVar7 + 0x10);
      puStack_70 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
        func_0x000101499164(1 < *(ulong *)(puVar7 + 0x18),uVar4 + 1,1);
      }
      puVar7 = puStack_70;
      *(ulong *)(puStack_70 + 0x10) = uVar4 + 1;
      *(ulong *)(puStack_70 + uVar4 * 0x10 + 0x20) = uVar10;
      *(ulong *)(puStack_70 + uVar4 * 0x10 + 0x28) = uVar9;
      func_0x000107c5fb60(uVar8,param_1,param_2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar5 = 0x112da2fe0;
  puStack_70 = puVar7;
  func_0x0001000285a8(0x112da2fe0,&UNK_10d947420);
  uVar6 = uVar5;
  FUN_10380f204();
  func_0x000107c5fbd0(&puStack_70,uVar5,uVar6);
  puStack_70 = (undefined *)0xd000000000000017;
  uStack_68 = 0x800000010f16d410;
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c5fb78(0x67706a,0xe300000000000000);
  auVar1._8_8_ = uStack_68;
  auVar1._0_8_ = puStack_70;
  return auVar1;
}



/* Entry: 10380f198; end: 10380f203;  */

undefined8 FUN_10380f198(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xd000000000000017;
  func_0x000107c5fbb4(0xd000000000000017,0x800000010f16d410,param_1,param_2);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x67706a2e;
                    /* WARNING: Could not recover jumptable at 0x00010bdb79dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS9hasSuffixySbSSF_11034da58)(0x67706a2e,0xe400000000000000,param_1,param_2);
    return uVar2;
  }
  return 0;
}



/* Entry: 10380f204; end: 10380f253;  */

void FUN_10380f204(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112da2fe8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112da2fe0;
  func_0x00010002969c(0x112da2fe0,&UNK_10d947420);
  puVar2 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar1);
  puRam0000000112da2fe8 = puVar2;
  return;
}



/* Entry: 10380f254; end: 10380f277;  */

undefined1  [16] FUN_10380f254(void)

{
  return ZEXT816(0x110699820);
}



/* Entry: 10380f278; end: 10380f2a3;  */

void FUN_10380f278(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010380f73c(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10380f2a4; end: 10380f363;  */

void FUN_10380f2a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar6 = 0xeb00000000676e69;
  uVar3 = 0x746e6573;
  if (bVar4 != 4) {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4 != 4) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646573756170;
  if (bVar4 != 3) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (bVar4 != 3) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e6964616f6c7075;
  if (bVar4 != 1) {
    uVar1 = 0x6e696873696e6966;
  }
  uVar5 = 0x646f63736e617274;
  if (bVar4 != 0) {
    uVar6 = 0xe900000000000067;
    uVar5 = uVar1;
  }
  if (bVar4 < 3) {
    uVar3 = uVar6;
    uVar2 = uVar5;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 10380f364; end: 10380f3bf;  */

void FUN_10380f364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_10380f99c();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 10380f3c0; end: 10380f40b;  */

void FUN_10380f3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10380f99c();
  func_0x000107c5fc2c(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 10380f40c; end: 10380f413;  */

void FUN_10380f40c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar6 = 0xeb00000000676e69;
  uVar3 = 0x746e6573;
  if (bVar4 != 4) {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4 != 4) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646573756170;
  if (bVar4 != 3) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (bVar4 != 3) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e6964616f6c7075;
  if (bVar4 != 1) {
    uVar1 = 0x6e696873696e6966;
  }
  uVar5 = 0x646f63736e617274;
  if (bVar4 != 0) {
    uVar6 = 0xe900000000000067;
    uVar5 = uVar1;
  }
  if (bVar4 < 3) {
    uVar3 = uVar6;
    uVar2 = uVar5;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10380f414; end: 10380f5f3;  */

void FUN_10380f414(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0xeb00000000676e69;
  uVar3 = 0x746e6573;
  if (param_1 != 4) {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe400000000000000;
  if (param_1 != 4) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646573756170;
  if (param_1 != 3) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (param_1 != 3) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e6964616f6c7075;
  if (param_1 != 1) {
    uVar1 = 0x6e696873696e6966;
  }
  uVar4 = 0x646f63736e617274;
  if (param_1 != 0) {
    uVar5 = 0xe900000000000067;
    uVar4 = uVar1;
  }
  if (param_1 < 3) {
    uVar3 = uVar5;
    uVar2 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10380f5f4; end: 10380f5fb;  */

void FUN_10380f5f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar6 = 0xeb00000000676e69;
  uVar3 = 0x746e6573;
  if (bVar4 != 4) {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4 != 4) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646573756170;
  if (bVar4 != 3) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (bVar4 != 3) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e6964616f6c7075;
  if (bVar4 != 1) {
    uVar1 = 0x6e696873696e6966;
  }
  uVar5 = 0x646f63736e617274;
  if (bVar4 != 0) {
    uVar6 = 0xe900000000000067;
    uVar5 = uVar1;
  }
  if (bVar4 < 3) {
    uVar3 = uVar6;
    uVar2 = uVar5;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10380f5fc; end: 10380f79f;  */

void FUN_10380f5fc(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  uVar5 = 0xeb00000000676e69;
  uVar3 = 0x746e6573;
  if (param_2 != 4) {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe400000000000000;
  if (param_2 != 4) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646573756170;
  if (param_2 != 3) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (param_2 != 3) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e6964616f6c7075;
  if (param_2 != 1) {
    uVar1 = 0x6e696873696e6966;
  }
  uVar4 = 0x646f63736e617274;
  if (param_2 != 0) {
    uVar5 = 0xe900000000000067;
    uVar4 = uVar1;
  }
  if (param_2 < 3) {
    uVar3 = uVar5;
    uVar2 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10380f7a0; end: 10380f7a3;  */

void FUN_10380f7a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ced0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc13498;
  func_0x000107c61520(&UNK_10dc13498,&UNK_1106998b0);
  puRam0000000112f9ced0 = puVar1;
  return;
}



/* Entry: 10380f7a4; end: 10380f7e3;  */

void FUN_10380f7a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9ced0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc13498;
  func_0x000107c61520(&UNK_10dc13498,&UNK_1106998b0);
  puRam0000000112f9ced0 = puVar1;
  return;
}



/* Entry: 10380f7e4; end: 10380f7e7;  */

void FUN_10380f7e4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f9ced8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f9cee0;
  func_0x00010002969c(0x112f9cee0,&UNK_10dc13588);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f9ced8 = puVar2;
  return;
}



/* Entry: 10380f7e8; end: 10380f837;  */

void FUN_10380f7e8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f9ced8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f9cee0;
  func_0x00010002969c(0x112f9cee0,&UNK_10dc13588);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f9ced8 = puVar2;
  return;
}



/* Entry: 10380f838; end: 10380f99b;  */

int FUN_10380f838(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10380f8b4;
        goto LAB_10380f898;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10380f898:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_10380f8b4:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



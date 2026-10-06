/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029c4614; end: 1029c464b;  */

void FUN_1029c4614(undefined8 param_1)

{
  if (lRam0000000112ed4670 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e704758);
  return;
}



/* Entry: 1029c464c; end: 1029c471f;  */

void FUN_1029c464c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
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
  long lStack_28;
  
  puStack_b0 = PTR___sBOWV_11034d658 + 0x40;
  puStack_b8 = &UNK_10dafd360;
  puStack_a8 = &UNK_10dafd378;
  puStack_90 = &UNK_10dafd390;
  puStack_88 = &UNK_10dafd390;
  puStack_78 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_70 = &UNK_10dafd3a8;
  puStack_68 = &UNK_10dafd3a8;
  puStack_60 = &UNK_10dafd3c0;
  puStack_38 = &UNK_10dafd3d8;
  puStack_30 = &UNK_10dafd3d8;
  lVar1 = 0x13f;
  puStack_a0 = puStack_b0;
  puStack_98 = puStack_b0;
  puStack_80 = puStack_b0;
  puStack_58 = puStack_b0;
  puStack_50 = puStack_b0;
  puStack_48 = puStack_b0;
  puStack_40 = puStack_b0;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,0x13,&puStack_b8,param_1 + 0x50);
  }
  return;
}



/* Entry: 1029c4720; end: 1029c475f; -[_TtC18ContentShareUpsell30StoriesPostSendUpsellPresenter upsellPresenterDidBeginPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c4720(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001029c5ac4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029c4760; end: 1029c4807; -[_TtC18ContentShareUpsell30StoriesPostSendUpsellPresenter upsellPresenterDidTapDestination:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c4760(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(char *)((undefined8 *)(param_1 + _DAT_112ed45f8) + 1) != '\x01') &&
     (*(char *)((undefined8 *)(param_1 + _DAT_112ed4600) + 1) != '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112ed45f8);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ed4600);
    func_0x0001000a8868(param_1 + _DAT_112ed45e0,*(undefined8 *)(param_1 + _DAT_112ed45e0 + 0x18));
    func_0x000107c61174(param_1);
    func_0x0001029c5c9c(param_3,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1029c4808; end: 1029c489f; -[_TtC18ContentShareUpsell30StoriesPostSendUpsellPresenter upsellPresenterDidDismissByUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c4808(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(char *)((undefined8 *)(param_1 + _DAT_112ed45f8) + 1) != '\x01') &&
     (*(char *)((undefined8 *)(param_1 + _DAT_112ed4600) + 1) != '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112ed45f8);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ed4600);
    func_0x0001000a8868(param_1 + _DAT_112ed45e0,*(undefined8 *)(param_1 + _DAT_112ed45e0 + 0x18));
    func_0x000107c61174(param_1);
    func_0x0001029c5bcc(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1029c48a0; end: 1029c4b57;  */

/* WARNING: Possible PIC construction at 0x0001029c4a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029c4af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029c4b00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029c4a0c) */
/* WARNING: Removing unreachable block (ram,0x0001029c4af4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c48a0(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  
  if ((*(char *)(unaff_x20 + _DAT_112ed45f8 + 8) != '\x01') &&
     (lVar5 = *(long *)(unaff_x20 + _DAT_112ed4630 + 8), lVar5 != 0)) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ed4638 + 8);
    uVar2 = 0;
    func_0x000104522c9c(0);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(lVar5);
    func_0x00010452281c(param_1,param_2);
    lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112ed4610) + _DAT_11307fc48);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c6142c(lVar5);
      func_0x000107c6142c(uVar1);
    }
    else {
      puVar4 = &SUB_104522c9c;
      FUN_1029c5570(&SUB_104522c9c,0x112d65a40,&UNK_10d92b760);
      func_0x000107c613fc();
      *(undefined8 *)(puVar4 + 0x18) = 3;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(undefined **)(puVar4 + 0x20) = param_1;
      func_0x000107c61174();
      param_1 = puVar4;
      func_0x000107c5fc48(puVar4,uVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c5b59c(lVar3);
      func_0x000107c61180();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1029c4b58; end: 1029c4bb3; -[_TtC18ContentShareUpsell30StoriesPostSendUpsellPresenter upsellPresenterDidTapFriendWithUserId:] */

void FUN_1029c4b58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1029c48a0(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1029c4bb4; end: 1029c4bdb; -[_TtC18ContentShareUpsell30StoriesPostSendUpsellPresenter upsellPresenterDidFinishPresenting:] */

void FUN_1029c4bb4(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001029c55dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029c4bdc; end: 1029c5553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c4bdc(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (((param_2 == 0) && (param_1 != 0)) &&
       (lVar7 = *(long *)(param_1 + _DAT_11307fc78), *(long *)(lVar7 + 0x10) != 0)) {
      uVar1 = *(undefined8 *)(lVar7 + 0x20);
      uVar2 = *(undefined8 *)(lVar7 + 0x28);
      lVar8 = *(long *)(param_3 + _DAT_112ed4628);
      func_0x000107c61434(lVar7);
      func_0x000107c61434(uVar2);
      func_0x000107c61174();
      func_0x000107c40664();
      func_0x000107c61180();
      lVar3 = lVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      if (lVar3 == 0) {
        func_0x000107c6142c(uVar2);
        func_0x000107c6142c(lVar7);
        func_0x000107c61170(param_1);
      }
      else {
        func_0x000107c5fadc(uVar1,uVar2);
        func_0x000107c6142c(uVar2);
        puVar4 = &UNK_11057ce98;
        func_0x000107c613fc(&UNK_11057ce98,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,param_3);
        puVar5 = &UNK_11057cf10;
        func_0x000107c613fc(&UNK_11057cf10,0x58,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined8 *)(puVar5 + 0x18) = param_4;
        *(undefined8 *)(puVar5 + 0x20) = param_5;
        *(undefined8 *)(puVar5 + 0x28) = param_6;
        *(undefined8 *)(puVar5 + 0x30) = param_7;
        *(undefined8 *)(puVar5 + 0x38) = param_8;
        *(long *)(puVar5 + 0x40) = lVar7;
        *(undefined8 *)(puVar5 + 0x48) = param_9;
        *(undefined8 *)(puVar5 + 0x50) = param_10;
        pcStack_88 = FUN_1029c56e0;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100e46b24;
        puStack_90 = &UNK_11057cf28;
        ppuVar6 = &puStack_a8;
        puStack_80 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        puVar4 = puStack_80;
        func_0x000107c61434(param_8);
        func_0x000107c61434(param_10);
        func_0x000107c61434(lVar7);
        func_0x000107c61434(param_6);
        func_0x000107c61574(puVar4);
        func_0x000107c43050(lVar3);
        func_0x000107c6142c(lVar7);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_3);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c615e8(lVar3);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1029c5554; end: 1029c556f;  */

void FUN_1029c5554(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112ed4680;
  plVar5 = (long *)&UNK_10dafd3f8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*(code *)&SUB_100442c3c)();
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



/* Entry: 1029c5570; end: 1029c5693;  */

void FUN_1029c5570(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1029c5694; end: 1029c56c3;  */

void FUN_1029c5694(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1029c4bdc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1029c56c4; end: 1029c56df;  */

void FUN_1029c56c4(long param_1,long param_2)

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



/* Entry: 1029c56e0; end: 1029c573f;  */

void FUN_1029c56e0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001029c4e24(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1029c5740; end: 1029c5743;  */

void FUN_1029c5740(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  func_0x000107c61618(lVar1 + 0x10);
  func_0x000107c61170();
  return;
}



/* Entry: 1029c5744; end: 1029c57ab;  */

void FUN_1029c5744(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  func_0x000107c61618(lVar1 + 0x10);
  func_0x000107c61170();
  return;
}



/* Entry: 1029c57ac; end: 1029c57d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029c57ac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar8 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar10 - extraout_x12_00;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar9 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ed4640;
  if (lVar3 == 0) {
    (**(code **)(lVar13 + 0x38))(lVar12,1,1,lVar2);
  }
  else {
    func_0x000107c61428(lVar3 + _DAT_112ed4640,auStack_90,0,0);
    func_0x000100029394(lVar3 + lVar1,lVar12);
    func_0x000107c61170(lVar3);
    pcVar14 = *(code **)(lVar13 + 0x30);
    lVar1 = lVar12;
    (*pcVar14)(lVar12,1,lVar2);
    if ((int)lVar1 != 1) {
      lVar1 = lVar9;
      (**(code **)(lVar13 + 0x20))(lVar9,lVar12,lVar2);
      func_0x000107c5ed70();
      (**(code **)(lVar13 + 0x10))(lVar10,lVar9,lVar2);
      (**(code **)(lVar13 + 0x38))(lVar10,0,1,lVar2);
      func_0x000107c5fadc(lVar1,lVar12);
      func_0x000107c6142c(lVar12);
      lVar3 = lVar10;
      (*pcVar14)(lVar10,1,lVar2);
      lVar12 = 0;
      if ((int)lVar3 != 1) {
        func_0x000107c5ed90();
        (**(code **)(lVar13 + 8))(lVar10,lVar2);
        lVar12 = lVar3;
      }
      puVar6 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      puVar7 = PTR_PTR_1126b0800;
      func_0x000107c610f8(PTR_PTR_1126b0800);
      func_0x000107c48cbc();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar12);
      func_0x000107c451b0(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      (**(code **)(lVar13 + 8))(lVar9,lVar2);
      return puVar6;
    }
  }
  func_0x0001000293e4(lVar12);
  (**(code **)(lVar13 + 0x38))(puVar8,1,1,lVar2);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  puVar5 = puVar8;
  (**(code **)(lVar13 + 0x30))(puVar8,1,lVar2);
  puVar11 = (undefined1 *)0x0;
  if ((int)puVar5 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar13 + 8))(puVar8,lVar2);
    puVar11 = puVar5;
  }
  puVar6 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar7 = PTR_PTR_1126b0800;
  func_0x000107c610f8(PTR_PTR_1126b0800);
  func_0x000107c48cbc();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar11);
  func_0x000107c451b0(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  return puVar6;
}



/* Entry: 1029c57d8; end: 1029c58ef;  */

long FUN_1029c57d8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1029c58f0; end: 1029c5993;  */

int FUN_1029c58f0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1029c5994; end: 1029c5bbf;  */

bool FUN_1029c5994(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  int iVar4;
  undefined8 *unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = unaff_x20[5];
  func_0x000107c5b968();
  dVar7 = (double)lVar2 / 1000.0;
  func_0x000107c5ee88(puVar5);
  func_0x000107c5ee68(puVar5);
  func_0x0001000a8868();
  dVar8 = dRam0000000112ed4278;
  if (dRam0000000112ed4278 == 86400.0) {
    iVar4 = (int)*unaff_x20;
    uVar3 = 0xd000000000000038;
    func_0x000107c5fadc(0xd000000000000038,0x800000010f0d4fd0);
    func_0x000107c4980c();
    func_0x000107c61170(uVar3);
    dVar8 = (double)iVar4;
  }
  (**(code **)(lVar6 + 8))(puVar5,lVar1);
  return dVar7 < dVar8;
}



/* Entry: 1029c5bc0; end: 1029c5bd7;  */

/* WARNING: Possible PIC construction at 0x0001029c5c80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029c5c84) */

void FUN_1029c5bc0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 3;
  if (param_1 != 4) {
    lVar1 = 0;
  }
  if (param_1 == 3) {
    lVar1 = 1;
  }
  lVar2 = param_2;
  func_0x000108f95094();
  func_0x000107c61180();
  lVar3 = lVar2;
  if (lVar1 == 0) {
    func_0x000107c5faec();
    lVar3 = lVar2;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar2);
  }
  func_0x000108f94dd8();
  func_0x000107c61180();
  if (param_2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar3);
  }
  (*(code *)&UNK_10607a9e0)(uVar4,lVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1029c5bd8; end: 1029c5d9b;  */

/* WARNING: Possible PIC construction at 0x0001029c5c80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029c5c84) */

void FUN_1029c5bd8(long param_1,long param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 3;
  if (param_1 != 4) {
    lVar1 = 0;
  }
  if (param_1 == 3) {
    lVar1 = 1;
  }
  lVar2 = param_2;
  func_0x000108f95094();
  func_0x000107c61180();
  lVar3 = lVar2;
  if (lVar1 == 0) {
    func_0x000107c5faec();
    lVar3 = lVar2;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar2);
  }
  func_0x000108f94dd8();
  func_0x000107c61180();
  if (param_2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar3);
  }
  (*param_3)(uVar4,lVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1029c5d9c; end: 1029c5e0b;  */

void FUN_1029c5d9c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029c5e0c; end: 1029c5ecf;  */

void FUN_1029c5e0c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ed4758;
  func_0x0001000285a8(0x112ed4758,&UNK_10dafd490);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1029c5ed0; end: 1029c5ed3;  */

void FUN_1029c5ed0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed4768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafd4a0;
  func_0x000107c61520(&UNK_10dafd4a0,&UNK_11057d250);
  puRam0000000112ed4768 = puVar1;
  return;
}



/* Entry: 1029c5ed4; end: 1029c5f3f;  */

void FUN_1029c5ed4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed4768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafd4a0;
  func_0x000107c61520(&UNK_10dafd4a0,&UNK_11057d250);
  puRam0000000112ed4768 = puVar1;
  return;
}



/* Entry: 1029c5f40; end: 1029c5f43;  */

void FUN_1029c5f40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed4780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafd558;
  func_0x000107c61520(&UNK_10dafd558,&UNK_11057d2e0);
  puRam0000000112ed4780 = puVar1;
  return;
}



/* Entry: 1029c5f44; end: 1029c5faf;  */

void FUN_1029c5f44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed4780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafd558;
  func_0x000107c61520(&UNK_10dafd558,&UNK_11057d2e0);
  puRam0000000112ed4780 = puVar1;
  return;
}



/* Entry: 1029c5fb0; end: 1029c6033;  */

void FUN_1029c5fb0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1029c6034; end: 1029c6037;  */

void FUN_1029c6034(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed4798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafd5c8;
  func_0x000107c61520(&UNK_10dafd5c8,&UNK_11057d2e0);
  puRam0000000112ed4798 = puVar1;
  return;
}



/* Entry: 1029c6038; end: 1029c6077;  */

void FUN_1029c6038(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed4798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafd5c8;
  func_0x000107c61520(&UNK_10dafd5c8,&UNK_11057d2e0);
  puRam0000000112ed4798 = puVar1;
  return;
}



/* Entry: 1029c6078; end: 1029c607b;  */

void FUN_1029c6078(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed47a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafd580;
  func_0x000107c61520(&UNK_10dafd580,&UNK_11057d2e0);
  puRam0000000112ed47a0 = puVar1;
  return;
}



/* Entry: 1029c607c; end: 1029c60bb;  */

void FUN_1029c607c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed47a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafd580;
  func_0x000107c61520(&UNK_10dafd580,&UNK_11057d2e0);
  puRam0000000112ed47a0 = puVar1;
  return;
}



/* Entry: 1029c60bc; end: 1029c626b;  */

void FUN_1029c60bc(void)

{
  return;
}



/* Entry: 1029c626c; end: 1029c67d7;  */

undefined * FUN_1029c626c(ulong param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  FUN_1029c6c8c(0,0x112d4e810,&PTR_PTR_1126b0cd8);
  func_0x000107c61434(param_3);
  func_0x000103c1912c(param_2,param_3);
  if (param_2 == 0) {
    return (undefined *)0x0;
  }
  uVar2 = param_1;
  func_0x000107c406e8();
  uVar12 = param_1;
  func_0x000107c4e3a4();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_1029c6c8c(0,0x112ea39b8,&PTR_PTR_1126dab40);
  uVar4 = uVar12;
  func_0x000107c5fc54(uVar12,uVar3);
  func_0x000107c61170(uVar12);
  if (uVar2 == 1) {
    if (uVar4 >> 0x3e != 0) {
      uVar3 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar3 = uVar4;
      }
      func_0x000107c60480(uVar3);
    }
    func_0x000107c6142c(uVar4);
    lVar7 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    uVar9 = 0x30;
    func_0x000107c613fc();
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    func_0x000107c40674();
    func_0x000107c61180();
    uVar3 = param_1;
    func_0x000107c5cb4c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    uVar2 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    *(ulong *)(lVar7 + 0x20) = uVar2;
    *(undefined8 *)(lVar7 + 0x28) = uVar9;
    lVar13 = lVar7;
    func_0x000107c5fc48(lVar7,PTR___sSSN_11034da80);
    lVar11 = 0;
    lVar10 = 0;
    goto LAB_1029c6734;
  }
  if (uVar4 >> 0x3e == 0) {
    if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_1029c63f4;
LAB_1029c644c:
    func_0x000107c6142c(uVar4);
    lVar10 = 0;
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    func_0x000107c60480();
    if (uVar2 == 0) goto LAB_1029c644c;
LAB_1029c63f4:
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c6650);
        (*pcVar1)();
      }
      lVar10 = *(long *)(uVar4 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar10 = 0;
      FUN_102521c64(0,uVar4);
    }
    func_0x000107c6142c(uVar4);
  }
  uVar12 = param_1;
  func_0x000107c4e3a4();
  func_0x000107c61180();
  uVar4 = uVar12;
  uVar2 = uVar3;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar12);
  if (uVar4 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar12 = uVar4;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar4);
  if ((long)uVar12 < 2) {
joined_r0x0001029c666c:
    uVar3 = uVar2;
    if (lVar10 != 0) goto LAB_1029c65ac;
    lVar11 = 0;
  }
  else {
    uVar12 = param_1;
    func_0x000107c4e3a4();
    func_0x000107c61180();
    uVar4 = uVar12;
    uVar2 = uVar3;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar12);
    if (uVar4 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar12 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar12 == 0) {
      func_0x000107c6142c(uVar4);
      goto joined_r0x0001029c666c;
    }
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c67c4);
        (*pcVar1)();
      }
      uVar9 = *(undefined8 *)(uVar4 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar9 = 0;
      uVar2 = uVar4;
      FUN_102521c64();
    }
    func_0x000107c6142c(uVar4);
    uVar5 = uVar9;
    func_0x000107c4e3a0();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c49cec();
    func_0x000107c61170(uVar5);
    if ((int)uVar6 == 0) {
      func_0x000107c61170(uVar9);
      goto joined_r0x0001029c666c;
    }
    uVar2 = param_1;
    func_0x000107c4e3a4();
    func_0x000107c61180();
    uVar12 = uVar2;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar2);
    if ((uVar12 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) < 2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c67d8);
        (*pcVar1)();
      }
      lVar11 = *(long *)(uVar12 + 0x28);
      func_0x000107c61174();
    }
    else {
      lVar11 = 1;
      uVar3 = uVar12;
      FUN_102521c64();
    }
    func_0x000107c6142c(uVar12);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar10);
    lVar10 = lVar11;
LAB_1029c65ac:
    lVar11 = lVar10;
    func_0x000107c4e3a0();
    func_0x000107c61180();
    lVar7 = lVar11;
    func_0x000107c5cb4c();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    lVar13 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
    lVar11 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x18) = 2;
    *(undefined8 *)(lVar11 + 0x10) = 1;
    *(long *)(lVar11 + 0x20) = lVar13;
    *(ulong *)(lVar11 + 0x28) = uVar3;
  }
  lVar7 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar9 = 0x30;
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 2;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  func_0x000107c40674();
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c5cb4c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar2 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar10);
  *(ulong *)(lVar7 + 0x20) = uVar2;
  *(undefined8 *)(lVar7 + 0x28) = uVar9;
  if (lVar11 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = lVar11;
    func_0x000107c5fc48(lVar11,PTR___sSSN_11034da80);
    func_0x000107c6142c(lVar11);
  }
  lVar11 = lVar7;
  func_0x000107c5fc48(lVar7,PTR___sSSN_11034da80);
  lVar13 = 0;
LAB_1029c6734:
  func_0x000107c61574(lVar7);
  puVar8 = PTR_PTR_1126b5be8;
  func_0x000107c610f8(PTR_PTR_1126b5be8);
  func_0x000107c45794();
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar11);
  return puVar8;
}



/* Entry: 1029c67d8; end: 1029c6c8b;  */

undefined * FUN_1029c67d8(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char cStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar15 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar15 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar15 = param_1;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar16 = puVar6;
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  puStack_90 = puVar6;
  if (uVar15 != 0) {
    if ((long)uVar15 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1029c6c8c);
      (*pcVar3)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar19 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar8 = *puVar19;
        func_0x000107c61174(uVar8);
        func_0x000107c61174();
        func_0x0001044c2b38(&uStack_88);
        uVar12 = uStack_70;
        uVar13 = uStack_78;
        uVar2 = uStack_80;
        uVar1 = uStack_88;
        if (cStack_68 == '\x01') {
          puVar7 = puVar6;
          func_0x000107c61558();
          puVar5 = puVar6;
          if (((ulong)puVar7 & 1) == 0) {
            puVar5 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
          }
          uVar17 = *(ulong *)(puVar5 + 0x10);
          puVar6 = puVar5;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar17) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
            func_0x0001000d182c(puVar6,uVar17 + 1,1,puVar5);
          }
          *(ulong *)(puVar6 + 0x10) = uVar17 + 1;
          *(undefined8 *)(puVar6 + uVar17 * 0x10 + 0x20) = uVar1;
          *(undefined8 *)(puVar6 + uVar17 * 0x10 + 0x28) = uVar2;
          puVar5 = puStack_90;
          func_0x000107c61558();
          puVar7 = puStack_90;
          if (((ulong)puVar5 & 1) == 0) {
            puVar7 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puStack_90 + 0x10) + 1,1,puStack_90);
          }
          uVar17 = *(ulong *)(puVar7 + 0x10);
          lVar18 = uVar17 + 1;
          puStack_90 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar17) {
            puStack_90 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
            func_0x0001000d182c(puStack_90,lVar18,1,puVar7);
            puVar7 = puStack_90;
          }
        }
        else {
          puVar7 = puVar16;
          func_0x000107c61558();
          if (((ulong)puVar7 & 1) == 0) {
            puVar7 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
            puVar16 = puVar7;
          }
          uVar17 = *(ulong *)(puVar16 + 0x10);
          lVar18 = uVar17 + 1;
          puVar7 = puVar16;
          uVar13 = uVar1;
          uVar12 = uVar2;
          if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar17) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
            func_0x0001000d182c(puVar7,lVar18,1,puVar16);
            puVar16 = puVar7;
          }
        }
        *(long *)(puVar7 + 0x10) = lVar18;
        *(undefined8 *)(puVar7 + uVar17 * 0x10 + 0x20) = uVar13;
        *(undefined8 *)(puVar7 + uVar17 * 0x10 + 0x28) = uVar12;
        func_0x000107c61170(uVar8);
        uVar15 = uVar15 - 1;
        puVar19 = puVar19 + 1;
      } while (uVar15 != 0);
    }
    else {
      uVar17 = 0;
      do {
        uVar4 = uVar17;
        func_0x0001011f4b2c(uVar17,param_1);
        func_0x000107c61174();
        func_0x0001044c2b38(&uStack_88);
        uVar12 = uStack_70;
        uVar13 = uStack_78;
        uVar2 = uStack_80;
        uVar1 = uStack_88;
        if (cStack_68 == '\x01') {
          puVar7 = puVar6;
          func_0x000107c61558();
          puVar5 = puVar6;
          if (((ulong)puVar7 & 1) == 0) {
            puVar5 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
          }
          uVar14 = *(ulong *)(puVar5 + 0x10);
          puVar6 = puVar5;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar14) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
            func_0x0001000d182c(puVar6,uVar14 + 1,1,puVar5);
          }
          *(ulong *)(puVar6 + 0x10) = uVar14 + 1;
          *(undefined8 *)(puVar6 + uVar14 * 0x10 + 0x20) = uVar1;
          *(undefined8 *)(puVar6 + uVar14 * 0x10 + 0x28) = uVar2;
          puVar5 = puStack_90;
          func_0x000107c61558();
          puVar7 = puStack_90;
          if (((ulong)puVar5 & 1) == 0) {
            puVar7 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puStack_90 + 0x10) + 1,1,puStack_90);
          }
          uVar14 = *(ulong *)(puVar7 + 0x10);
          lVar18 = uVar14 + 1;
          puStack_90 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar14) {
            puStack_90 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
            func_0x0001000d182c(puStack_90,lVar18,1,puVar7);
            puVar7 = puStack_90;
          }
        }
        else {
          puVar7 = puVar16;
          func_0x000107c61558();
          if (((ulong)puVar7 & 1) == 0) {
            puVar7 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
            puVar16 = puVar7;
          }
          uVar14 = *(ulong *)(puVar16 + 0x10);
          lVar18 = uVar14 + 1;
          puVar7 = puVar16;
          uVar12 = uVar2;
          uVar13 = uVar1;
          if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar14) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
            func_0x0001000d182c(puVar7,lVar18,1,puVar16);
            puVar16 = puVar7;
          }
        }
        uVar17 = uVar17 + 1;
        *(long *)(puVar7 + 0x10) = lVar18;
        *(undefined8 *)(puVar7 + uVar14 * 0x10 + 0x20) = uVar13;
        *(undefined8 *)(puVar7 + uVar14 * 0x10 + 0x28) = uVar12;
        func_0x000107c615e8(uVar4);
      } while (uVar15 != uVar17);
    }
  }
  puVar5 = PTR_PTR_1126b5be8;
  func_0x000107c610f8(PTR_PTR_1126b5be8);
  puVar7 = PTR___sSSN_11034da80;
  puVar9 = puVar16;
  func_0x000107c5fc48(puVar16,PTR___sSSN_11034da80);
  puVar10 = puVar6;
  func_0x000107c5fc48(puVar6,puVar7);
  puVar11 = puStack_90;
  func_0x000107c5fc48(puStack_90,puVar7);
  func_0x000107c45794(puVar5);
  func_0x000107c6142c(puVar6);
  func_0x000107c6142c(puStack_90);
  func_0x000107c6142c(puVar16);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar11);
  return puVar5;
}



/* Entry: 1029c6c8c; end: 1029c6ccb;  */

void FUN_1029c6c8c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1029c6ccc; end: 1029c6d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c6ccc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1029c70c0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed4838) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029c6d38; end: 1029c6da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c6d38(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed4838) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029c6da4; end: 1029c6e03; -[_TtC46GroupExternalShareScopedFactoryServiceProvider34SCGroupExternalShareScopedServices init] */

void FUN_1029c6da4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GroupExternalShareScopedFactoryServiceProvider.SCGroupExternalShareScopedServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c6dd0);
  (*pcVar1)();
}



/* Entry: 1029c6e04; end: 1029c6e13; -[_TtC46GroupExternalShareScopedFactoryServiceProvider34SCGroupExternalShareScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c6e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed4838));
  return;
}



/* Entry: 1029c6e14; end: 1029c6e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c6e14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11057d5a0;
  func_0x000107c613fc(&UNK_11057d5a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1029c7158,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1029c6e80; end: 1029c6f1b;  */

void FUN_1029c6e80(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11057d4b0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11057d4b0;
  return;
}



/* Entry: 1029c6f1c; end: 1029c6f53;  */

void FUN_1029c6f1c(long *param_1)

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



/* Entry: 1029c6f54; end: 1029c6f5b;  */

undefined8 FUN_1029c6f54(void)

{
  return 0x1b;
}



/* Entry: 1029c6f5c; end: 1029c708f;  */

void FUN_1029c6f5c(undefined8 *param_1)

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
  puVar1 = &UNK_11057d5c8;
  func_0x000107c613fc(&UNK_11057d5c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029c7130;
  func_0x00010058fa64(FUN_1029c7130,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029c7090; end: 1029c70bf;  */

undefined ** FUN_1029c7090(void)

{
  return &PTR_DAT_112f45f80;
}



/* Entry: 1029c70c0; end: 1029c70df;  */

void FUN_1029c70c0(void)

{
  func_0x000107c61168(&PTR_PTR_112879c38);
  return;
}



/* Entry: 1029c70e0; end: 1029c712f;  */

undefined1  [16] FUN_1029c70e0(void)

{
  return ZEXT816(0x11057d500);
}



/* Entry: 1029c7130; end: 1029c7157;  */

void FUN_1029c7130(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1029c7158; end: 1029c715b;  */

void FUN_1029c7158(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029c715c; end: 1029c71d7;  */

void FUN_1029c715c(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112ed48a8,&UNK_10dafd8f8);
  func_0x000107c613fc();
  pcVar1 = FUN_1029c7558;
  func_0x0001000841fc(FUN_1029c7558,param_2);
  func_0x000100084214(&UNK_10dafd8c0,0x30,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1029c71d8; end: 1029c71ef;  */

void FUN_1029c71d8(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112ed48a8,&UNK_10dafd8f8);
  func_0x000107c613fc();
  pcVar1 = FUN_1029c7558;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10dafd8c0,0x30,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1029c71f0; end: 1029c7557;  */

void FUN_1029c71f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112ed48b0,&UNK_10dafd900);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1029c840c();
  func_0x000100082720("SCStandardExternalContentShareScopeExposerSubjectServiceProvider",0x40,2);
  puVar3 = puVar2;
  FUN_1029c8498();
  func_0x000100082720("SCStandardExternalContentShareScopeExposerObservableServiceProvider",0x43,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1029c6f1c;
  func_0x0001000823a8(FUN_1029c6f1c,0);
  func_0x000100082720("SCGroupExternalShareScopedServicesCleanupRelayServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112ed48b8,&UNK_10dafd910);
  puVar5 = &UNK_11057d628;
  func_0x000107c613fc(&UNK_11057d628,0x28,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 **)(puVar5 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1029c7560;
  func_0x0001000823a8(0x1029c7560,puVar5);
  func_0x000100082720("GroupExternalShareEntryPointWrapperServiceProvider",0x32,2);
  puVar6 = puVar2;
  FUN_1029c8200();
  func_0x000100082720("GroupExternalShareScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ed48c0,&UNK_10dafd918);
  puVar5 = &UNK_11057d650;
  func_0x000107c613fc(&UNK_11057d650,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1029c756c;
  func_0x0001000823a8(0x1029c756c,puVar5);
  func_0x000100082720("SCGroupExternalShareScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112ed4840,&UNK_10dafd690);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1029c7578;
  func_0x0001000823a8(0x1029c7578,uVar7);
  func_0x000100082720("SCGroupExternalShareScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ed4830,&UNK_10dafd680);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1029c7580;
  func_0x0001000823a8(0x1029c7580,uVar8);
  func_0x000100082720("SCGroupExternalShareScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_11057d678;
  func_0x000107c613fc(&UNK_11057d678,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1029c7588;
  func_0x0001000823a8(0x1029c7588,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCGroupExternalShareScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1029c7558; end: 1029c758f;  */

void FUN_1029c7558(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112ed48b0,&UNK_10dafd900);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1029c840c();
  func_0x000100082720("SCStandardExternalContentShareScopeExposerSubjectServiceProvider",0x40,2);
  puVar3 = puVar2;
  FUN_1029c8498();
  func_0x000100082720("SCStandardExternalContentShareScopeExposerObservableServiceProvider",0x43,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1029c6f1c;
  func_0x0001000823a8(FUN_1029c6f1c,0);
  func_0x000100082720("SCGroupExternalShareScopedServicesCleanupRelayServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112ed48b8,&UNK_10dafd910);
  puVar5 = &UNK_11057d628;
  func_0x000107c613fc(&UNK_11057d628,0x28,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20;
  *(undefined8 **)(puVar5 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1029c7560;
  func_0x0001000823a8(0x1029c7560,puVar5);
  func_0x000100082720("GroupExternalShareEntryPointWrapperServiceProvider",0x32,2);
  puVar6 = puVar2;
  FUN_1029c8200();
  func_0x000100082720("GroupExternalShareScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ed48c0,&UNK_10dafd918);
  puVar5 = &UNK_11057d650;
  func_0x000107c613fc(&UNK_11057d650,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1029c756c;
  func_0x0001000823a8(0x1029c756c,puVar5);
  func_0x000100082720("SCGroupExternalShareScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112ed4840,&UNK_10dafd690);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1029c7578;
  func_0x0001000823a8(0x1029c7578,uVar7);
  func_0x000100082720("SCGroupExternalShareScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ed4830,&UNK_10dafd680);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1029c7580;
  func_0x0001000823a8(0x1029c7580,uVar8);
  func_0x000100082720("SCGroupExternalShareScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_11057d678;
  func_0x000107c613fc(&UNK_11057d678,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1029c7588;
  func_0x0001000823a8(0x1029c7588,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCGroupExternalShareScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1029c7590; end: 1029c763f;  */

void FUN_1029c7590(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1029c7894();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1029c7784(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029c7640; end: 1029c76af;  */

undefined8 FUN_1029c7640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1029c7784(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 1029c76b0; end: 1029c76e3;  */

void FUN_1029c76b0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029c76e4; end: 1029c76eb;  */

undefined8 FUN_1029c76e4(void)

{
  return 0x1b;
}



/* Entry: 1029c76ec; end: 1029c776f;  */

void FUN_1029c76ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1029c78d4,param_2,FUN_1029c78d8,param_2,0x1029c7900,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1029c7770; end: 1029c7783;  */

void FUN_1029c7770(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11057d690;
  return;
}



/* Entry: 1029c7784; end: 1029c7877;  */

void FUN_1029c7784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112e84da0,&UNK_10dabb480);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  FUN_1029c9d50(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  func_0x000107c61174();
  func_0x0001029c9614();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
  func_0x0001029c96e4();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1029c7878; end: 1029c7893;  */

undefined ** FUN_1029c7878(void)

{
  return &PTR_DAT_112f45f80;
}



/* Entry: 1029c7894; end: 1029c78b3;  */

void FUN_1029c7894(void)

{
  func_0x000107c61168(&PTR_PTR_112ed4930);
  return;
}



/* Entry: 1029c78b4; end: 1029c78d7;  */

undefined1  [16] FUN_1029c78b4(void)

{
  return ZEXT816(0x11057d6d0);
}



/* Entry: 1029c78d8; end: 1029c792b;  */

void FUN_1029c78d8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1029c792c; end: 1029c7967;  */

void FUN_1029c792c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1029c7968();
  func_0x0001000a7f38("SCGroupExternalShareScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = param_2;
  return;
}



/* Entry: 1029c7968; end: 1029c7b53;  */

void FUN_1029c7968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110615798;
  ppuVar4 = &PTR_DAT_112f45f80;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ed49a0;
  func_0x0001000285a8(0x112ed49a0,&UNK_10dafda48);
  func_0x0001000a6ee8(&UNK_11057d6d0,
                      "GroupExternalShareEntryPointWrapperScopeInitializationPluginKey",0x3f,2,
                      FUN_1029c7bc8,param_1,uVar2,&UNK_11057d6d0,&PTR_DAT_112ed48c8);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11057d720;
  func_0x000107c613fc(&UNK_11057d720,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11057d940,
                      "GroupExternalShareScopeGraphBridgeScopeInitializationPluginKey",0x3e,2,
                      FUN_1029c7bd0,puVar3,uVar2,&UNK_11057d940,&PTR_DAT_112ed4a38);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11057d748;
  func_0x000107c613fc(&UNK_11057d748,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11057d540,
                      "SCGroupExternalShareScopedServicesScopeInitializationPluginKey",0x3e,2,
                      FUN_1029c7cb8,puVar3,uVar2,&UNK_11057d540,&PTR_DAT_112ed4848);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ed49a8;
  func_0x0001000285a8(0x112ed49a8,&UNK_10dafda50);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1029c7b54; end: 1029c7bc7;  */

void FUN_1029c7b54(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1029c7cf4;
  func_0x0001000823a8(0x1029c7cf4,param_3);
  func_0x000100082720("GroupExternalShareEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 1029c7bc8; end: 1029c7bcf;  */

void FUN_1029c7bc8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1029c7cf4;
  func_0x0001000823a8();
  func_0x000100082720("GroupExternalShareEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 1029c7bd0; end: 1029c7c0f;  */

void FUN_1029c7bd0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1029c8540(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("GroupExternalShareScopeGraphBridgeScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029c7c10; end: 1029c7cb7;  */

void FUN_1029c7c10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11057d770;
  func_0x000107c613fc(&UNK_11057d770,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1029c7cec;
  func_0x0001000823a8(FUN_1029c7cec,puVar1);
  func_0x000100082720("SCGroupExternalShareScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1029c7cb8; end: 1029c7cbf;  */

void FUN_1029c7cb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11057d770;
  func_0x000107c613fc(&UNK_11057d770,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1029c7cec;
  func_0x0001000823a8(FUN_1029c7cec,puVar3);
  func_0x000100082720("SCGroupExternalShareScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1029c7cc0; end: 1029c7ceb;  */

void FUN_1029c7cc0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029c7cec; end: 1029c7cfb;  */

void FUN_1029c7cec(undefined8 *param_1)

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
  puVar1 = &UNK_11057d5c8;
  func_0x000107c613fc(&UNK_11057d5c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029c7130;
  func_0x00010058fa64(FUN_1029c7130,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029c7cfc; end: 1029c7dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029c7cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1029c8110();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ed49b0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ed49b8) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c7dd8);
  (*pcVar1)();
}



/* Entry: 1029c7dd8; end: 1029c7e37; -[_TtC34GroupExternalShareScopeGraphBridge49GroupExternalShareScopeGraphBridgeSaberEntryPoint init] */

void FUN_1029c7dd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GroupExternalShareScopeGraphBridge.GroupExternalShareScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c7e04);
  (*pcVar1)();
}



/* Entry: 1029c7e38; end: 1029c7e6f; -[_TtC34GroupExternalShareScopeGraphBridge49GroupExternalShareScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029c7e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029c7e58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c7e38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed49b0));
  return;
}



/* Entry: 1029c7e70; end: 1029c7e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c7e70(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ed49b8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ed49b0));
  return;
}



/* Entry: 1029c7e98; end: 1029c7eb7;  */

void FUN_1029c7e98(void)

{
  func_0x000107c61168(&PTR_PTR_112879cf8);
  return;
}



/* Entry: 1029c7eb8; end: 1029c7f3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029c7eb8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed49e8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ed49f0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029c7f40);
  (*pcVar2)();
}



/* Entry: 1029c7f40; end: 1029c8027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029c7f40(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed49e8);
  *(undefined **)(unaff_x20 + _DAT_112ed49e8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed49f0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ed49f0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11057d860;
  func_0x000107c613fc(&UNK_11057d860,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1029c802c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1029c8028; end: 1029c8033;  */

void FUN_1029c8028(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029c8034; end: 1029c8093; -[_TtC34GroupExternalShareScopeGraphBridge49SCGroupExternalShareScopedServicesSaberEntryPoint init] */

void FUN_1029c8034(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GroupExternalShareScopeGraphBridge.SCGroupExternalShareScopedServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c8060);
  (*pcVar1)();
}



/* Entry: 1029c8094; end: 1029c80cb; -[_TtC34GroupExternalShareScopeGraphBridge49SCGroupExternalShareScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c8094(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed49f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed49e8));
  return;
}



/* Entry: 1029c80cc; end: 1029c80cf;  */

void FUN_1029c80cc(void)

{
  return;
}



/* Entry: 1029c80d0; end: 1029c80ef;  */

void FUN_1029c80d0(void)

{
  FUN_1029c7f40();
  return;
}



/* Entry: 1029c80f0; end: 1029c810f;  */

void FUN_1029c80f0(void)

{
  func_0x000107c61168(&PTR_PTR_112879dc0);
  return;
}



/* Entry: 1029c8110; end: 1029c81df;  */

undefined8 FUN_1029c8110(void)

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
  
  func_0x000107c61428(0x112ed4a20,&uStack_40,0x20,0);
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
    FUN_1029c81e0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1029c81e0; end: 1029c81ff;  */

void FUN_1029c81e0(void)

{
  func_0x000107c61168(&PTR_PTR_112879e88);
  return;
}



/* Entry: 1029c8200; end: 1029c821b;  */

void FUN_1029c8200(undefined8 param_1)

{
  func_0x0001000285a8(0x112ed4a28,&UNK_10dafdb28);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029c8288,param_1);
  return;
}



/* Entry: 1029c821c; end: 1029c8287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c821c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1029c81e0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ed4a30) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1029c8288; end: 1029c828f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c8288(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1029c81e0();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ed4a30) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1029c8290; end: 1029c82db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c8290(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed4a30) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029c82dc; end: 1029c833b; -[_TtC34GroupExternalShareScopeGraphBridge42GroupExternalShareScopeGraphBridgeServices init] */

void FUN_1029c82dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GroupExternalShareScopeGraphBridge.GroupExternalShareScopeGraphBridgeServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c8308);
  (*pcVar1)();
}



/* Entry: 1029c833c; end: 1029c834b; -[_TtC34GroupExternalShareScopeGraphBridge42GroupExternalShareScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c833c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed4a30));
  return;
}



/* Entry: 1029c834c; end: 1029c837f; -[_TtC23GroupExternalShareScope25SCGroupExternalShareScope groupExternalShareScopeGraphBridgeServices] */

void FUN_1029c834c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029c8110();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029c8380; end: 1029c840b; -[_TtC23GroupExternalShareScope25SCGroupExternalShareScope setGroupExternalShareScopeGraphBridgeServices:] */

void FUN_1029c8380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112ed4a20,auStack_48,0x20,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61188();
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1029c840c; end: 1029c8497;  */

void FUN_1029c840c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1029c844c,0);
  return;
}



/* Entry: 1029c8498; end: 1029c84b3;  */

void FUN_1029c8498(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029c8504,param_1);
  return;
}



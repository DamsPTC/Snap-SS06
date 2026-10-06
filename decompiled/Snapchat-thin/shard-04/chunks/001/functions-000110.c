/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103158a00; end: 103158aef; -[_TtC16InAppPipCallImpl26InAppPipCallViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103158a00(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f45530));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f45538));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f45540));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f45548));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f45550));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f45558));
  FUN_103158f90(*(undefined8 *)(param_1 + _DAT_112f45560),
                ((undefined8 *)(param_1 + _DAT_112f45560))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f45568));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f45570));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f45578));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f455a0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f455a8 + 8));
  param_1 = param_1 + _DAT_112f455b0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103158af0; end: 103158b0f;  */

void FUN_103158af0(void)

{
  func_0x000107c61168(&PTR_PTR_1128bafa8);
  return;
}



/* Entry: 103158b10; end: 103158b5b;  */

void FUN_103158b10(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103158b5c; end: 103158b6f;  */

void FUN_103158b5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f455e0 == (undefined *)0x0 || ((ulong)puRam0000000112f455e0 & 1) != 0) {
    puVar1 = &UNK_10e97947a;
    func_0x000107c61518(&UNK_10e97947a,0x1a,0,0);
    puRam0000000112f455e0 = puVar1;
  }
  return;
}



/* Entry: 103158b70; end: 103158be7;  */

void FUN_103158b70(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103158f2c(0,param_1,param_2);
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



/* Entry: 103158be8; end: 103158d73;  */

undefined8 FUN_103158be8(long param_1,long param_2)

{
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    puVar1 = (undefined1 *)0x0;
    lVar2 = *(long *)(param_2 + 0x18);
  }
  else {
    func_0x0001006732c8(param_1,lVar2);
    lVar5 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar3);
    puVar1 = puVar3;
    func_0x000107c605b0(puVar3,lVar2);
    (**(code **)(lVar5 + 8))(puVar3,lVar2);
    func_0x000100183ab8(param_1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  if (lVar2 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(param_2,lVar2);
    lVar5 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lVar2);
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
    func_0x000100183ab8(param_2);
  }
  func_0x000107c49528();
  func_0x000107c615e8(puVar1);
  func_0x000107c615e8(puVar3);
  return unaff_x20;
}



/* Entry: 103158d74; end: 103158deb;  */

/* WARNING: Possible PIC construction at 0x000103158dc4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103158d74(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar1 = unaff_x20 + _DAT_112f455b0;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(lVar1 + 0x90);
  if (lVar2 != 0) {
    func_0x000107c615f0(lVar2);
    func_0x000107c55864();
    FUN_103159924(1);
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 103158dec; end: 103158e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103158dec(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f45568);
  func_0x000107c3f74c(uVar1);
  FUN_10315a1c8();
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 103158e24; end: 103158e3f;  */

void FUN_103158e24(long param_1,long param_2)

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



/* Entry: 103158e40; end: 103158ecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103158e40(void)

{
  long unaff_x20;
  
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f457d8) = 1;
  FUN_10315a444();
  return;
}



/* Entry: 103158ecc; end: 103158ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103158ecc(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112f455b0;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = *(long *)(lVar2 + 0x90);
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c615f0();
        func_0x000107c40c1c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(lVar2);
        goto LAB_103158664;
      }
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar2);
    }
  }
  lVar4 = 0;
LAB_103158664:
  *param_1 = lVar4;
  return;
}



/* Entry: 103158ed4; end: 103158f03;  */

void FUN_103158ed4(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_28);
  return;
}



/* Entry: 103158f04; end: 103158f2b;  */

void FUN_103158f04(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 103158f2c; end: 103158f8f;  */

void FUN_103158f2c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103158f90; end: 103158f9f;  */

void FUN_103158f90(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 103158fa0; end: 103158fc3;  */

undefined8 FUN_103158fa0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103158fc4; end: 103158fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103158fc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f45568);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f45598);
  uStack_48 = puVar1[1];
  uStack_50 = *puVar1;
  uStack_38 = puVar1[3];
  uStack_40 = puVar1[2];
  uStack_28 = puVar1[5];
  uStack_30 = puVar1[4];
  func_0x000107c5a03c(uVar2,param_2,&uStack_50);
  func_0x000107c526c0(0,uVar2);
  return;
}



/* Entry: 103158fcc; end: 103158feb;  */

void FUN_103158fcc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103158fec; end: 10315902b;  */

void FUN_103158fec(long param_1,long param_2)

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



/* Entry: 10315902c; end: 103159147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315902c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar6 = *unaff_x20;
  func_0x0001000d224c(&puStack_70);
  puVar1 = puStack_70;
  if (puStack_70 != (undefined *)0x0) {
    uVar5 = *(undefined8 *)(unaff_x20[2] + _DAT_11307b698);
    puVar2 = &UNK_110614580;
    func_0x000107c613fc(&UNK_110614580,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_1106145a8;
    func_0x000107c613fc(&UNK_1106145a8,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = uVar6;
    uStack_50 = 0x10315a0fc;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x10315a1c4;
    puStack_58 = &UNK_1106145c0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c615f0(uVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c40ac4(puVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(puVar1);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 103159148; end: 103159277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103159148(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4 + _DAT_11307b6a8;
  func_0x000107c61428(lVar2,auStack_48,0,0);
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar5 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    (**(code **)(lVar5 + 0x10))
              (lVar4,*(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
               *(undefined1 *)(unaff_x20 + 0xa8),lVar2,lVar5);
    func_0x000107c615e8(lVar1);
  }
  lVar2 = unaff_x20 + 0xb0;
  func_0x000107c61618();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  if (lVar2 == 0) {
    func_0x000107c41864(uVar6);
  }
  else {
    puVar3 = &UNK_110614558;
    func_0x000107c613fc(&UNK_110614558,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar6;
    func_0x000107c61174(uVar6);
    FUN_1031583c0(FUN_10315a0f0,puVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61574(puVar3);
  }
  func_0x000100c82230();
  uVar6 = 0;
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    func_0x000107c4218c();
    uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
  }
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  func_0x000107c615e8(uVar6);
  func_0x000107c49918(*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined1 *)(unaff_x20 + 0xa9) = 1;
  return;
}



/* Entry: 103159278; end: 1031593cb;  */

void FUN_103159278(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  if (param_1 != 0) {
    func_0x000107c615f0();
    uVar5 = 0;
    lVar1 = param_3;
    func_0x000107c60714(param_3,0);
    puVar2 = &UNK_110614580;
    func_0x000107c613fc(&UNK_110614580,0x18,7);
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648(param_2);
    func_0x000107c61644(puVar2 + 0x10,param_2);
    func_0x000107c61574(param_2);
    puVar3 = &UNK_1106145f8;
    func_0x000107c613fc(&UNK_1106145f8,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(long *)(puVar3 + 0x18) = param_1;
    *(long *)(puVar3 + 0x20) = param_3;
    uStack_68 = 0x10315a120;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_110614610;
    ppuVar4 = &puStack_88;
    puStack_60 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_60;
    func_0x000107c615f0(param_1);
    func_0x000107c61574(puVar2);
    func_0x000107c5fb28(lVar1,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x0001000d76cc(lVar1 + 0x20,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1031593cc; end: 10315954f;  */

void FUN_1031593cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0xa9) & 1) == 0) {
      uVar2 = param_2;
      func_0x000107c44948();
      uVar3 = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x90) = param_2;
      func_0x000107c615e8(uVar3);
      if ((int)uVar2 == 0) {
        func_0x000107c615f0(param_2);
        func_0x000107c56018();
      }
      else {
        plVar4 = *(long **)(param_1 + 0x38);
        lVar1 = *(long *)(param_1 + 0x40);
        func_0x000107c614f0();
        pcVar7 = *(code **)(lVar1 + 0x18);
        func_0x000107c615f0(param_2);
        (*pcVar7)(plVar4,lVar1);
        puVar5 = &UNK_110614580;
        func_0x000107c613fc(&UNK_110614580,0x18,7);
        func_0x000107c61644(puVar5 + 0x10,param_1);
        uVar2 = 0x10315a12c;
        puVar6 = puVar5;
        (**(code **)(*plVar4 + 0x60))(0x10315a12c);
        func_0x000107c61574(plVar4);
        func_0x000107c61574(puVar5);
        func_0x000107c614f0(uVar2);
        uVar3 = *(undefined8 *)(param_1 + 0x78);
        pcVar7 = *(code **)(puVar6 + 0x18);
        func_0x000107c6157c(uVar3);
        (*pcVar7)();
        func_0x000107c615e8(uVar2);
        func_0x000107c61574(uVar3);
      }
      FUN_1031595d8(param_2);
      FUN_103159748();
      func_0x000107c61574(param_1);
      return;
    }
    func_0x000107c61574(param_1);
  }
  func_0x000107c4218c(param_2);
  return;
}



/* Entry: 103159550; end: 1031595d7;  */

void FUN_103159550(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x90);
    if (lVar1 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c615f0(lVar1);
      func_0x000107c61574(param_2);
      func_0x000107c56018(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1031595d8; end: 103159747;  */

void FUN_1031595d8(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  char *pcVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar7 = *unaff_x20;
  iVar1 = (int)unaff_x20[0x11];
  func_0x000107c5ae0c();
  if (iVar1 == 0) {
    func_0x0001000d224c(&puStack_70);
    if (puStack_70 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puStack_70;
      func_0x000107c509b4(puStack_70);
      func_0x000107c61180();
      func_0x000107c615e8(puStack_70);
    }
    FUN_103159adc(param_1,puVar6);
    func_0x000107c615e8(puVar6);
  }
  else {
    uVar5 = unaff_x20[5];
    puVar6 = &UNK_110614580;
    func_0x000107c613fc(&UNK_110614580,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puVar2 = &UNK_110614698;
    func_0x000107c613fc(&UNK_110614698,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar6;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = uVar7;
    pcStack_50 = FUN_10315a198;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100f0f800;
    puStack_58 = &UNK_1106146b0;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar6 = puStack_48;
    func_0x000107c615f0(param_1);
    func_0x000107c61574(puVar6);
    pcVar4 = "attachUI(session:)";
    func_0x0001000c10c0("attachUI(session:)");
    func_0x000107c61180();
    func_0x000107c44288(uVar5);
    func_0x000107c615e8(pcVar4);
    func_0x000107c60bd0(ppuVar3);
  }
  return;
}



/* Entry: 103159748; end: 103159923;  */

/* WARNING: Possible PIC construction at 0x00010315984c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103159850) */

void FUN_103159748(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 *unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  
  uVar7 = *unaff_x20;
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  plVar6 = (long *)unaff_x20[10];
  func_0x000107c5e370();
  func_0x000107c61180();
  plVar1 = plVar6;
  func_0x0001000b637c();
  func_0x000107c61170(plVar6);
  puVar2 = &UNK_110614580;
  func_0x000107c613fc(&UNK_110614580,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110614648;
  func_0x000107c613fc(&UNK_110614648,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar7;
  pcVar4 = FUN_10315a134;
  puVar2 = puVar3;
  (**(code **)(*plVar1 + 0x60))(FUN_10315a134);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar3);
  pcVar5 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(puVar2 + 0x18))(unaff_x20[0xf],pcVar5,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar4);
  return;
}



/* Entry: 103159924; end: 103159a6b;  */

/* WARNING: Possible PIC construction at 0x000103159a50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103159a54) */

void FUN_103159924(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x90);
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c615f0(lVar3);
  if (((param_1 & 1) == 0) || (lVar5 = lVar3, func_0x000107c4a504(), (int)lVar5 != 0)) {
    func_0x000107c3e594(lVar3);
    lVar5 = 0;
  }
  else {
    lVar5 = lVar3;
    func_0x000107c44948();
    func_0x000107c3d070(lVar3,param_2,1);
    if ((int)lVar5 != 0) {
      lVar5 = lVar3;
      func_0x000107c4b4bc();
      func_0x000107c61180();
      if (lVar5 != 0) goto code_r0x000107c61170;
      lVar5 = 1;
    }
  }
  lVar1 = lVar3;
  func_0x000107c3f27c(lVar3);
  lVar2 = lVar3;
  func_0x000107c4b4bc(lVar3);
  func_0x000107c61180();
  if ((int)lVar5 != 0) {
    func_0x000107c530e0(*(undefined8 *)(unaff_x20 + 0x38),param_2,lVar1);
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c55ec4(uVar6,param_2,lVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
  func_0x000107c55f30(uVar4,param_2,0);
  func_0x000107c52ff4(uVar4,param_2,lVar5);
  func_0x000107c55f4c(uVar4,param_2,0);
  func_0x000107c55240(uVar4,param_2,0);
  func_0x000107c43714(uVar6,param_2,uVar4);
  func_0x000107c615e8(lVar3);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103159a6c; end: 103159adb;  */

void FUN_103159a6c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_103159adc(param_3,param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103159adc; end: 103159e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103159adc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  long *plVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar5 = param_1;
  func_0x000107c4e778();
  func_0x000107c61180();
  uVar17 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar4 = *(undefined1 *)(unaff_x20 + 0xa8);
  puVar6 = &UNK_1106146e8;
  func_0x000107c613fc(&UNK_1106146e8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,param_1);
  lVar7 = 0;
  FUN_103158af0();
  lVar8 = lVar7;
  func_0x000107c610f8();
  lVar10 = _DAT_112f45568;
  puVar9 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c6157c(puVar6);
  func_0x000107c469a4(0,0,0,0);
  *(undefined **)(lVar8 + lVar10) = puVar9;
  *(undefined8 *)(lVar8 + _DAT_112f45570) = 0;
  *(undefined8 *)(lVar8 + _DAT_112f45578) = 0;
  *(undefined8 *)(lVar8 + _DAT_112f45588) = 0x3fd3333333333333;
  *(undefined8 *)(lVar8 + _DAT_112f45590) = 0x3fc999999999999a;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f45598);
  func_0x000107c6088c(&uStack_90,0x3fe0000000000000,0x3fe0000000000000);
  puVar1[1] = uStack_88;
  *puVar1 = uStack_90;
  puVar1[3] = uStack_78;
  puVar1[2] = uStack_80;
  puVar1[5] = uStack_68;
  puVar1[4] = uStack_70;
  lVar10 = _DAT_112f455a0;
  puVar9 = PTR_PTR_1126cf870;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + lVar10) = puVar9;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f455a8);
  *puVar1 = 0xd00000000000001a;
  puVar1[1] = 0x800000010f129480;
  lVar10 = lVar8 + _DAT_112f455b0;
  *(undefined8 *)(lVar10 + 8) = 0;
  func_0x000107c61614(lVar10,0);
  *(undefined8 *)(lVar8 + _DAT_112f45530) = uVar5;
  *(undefined8 *)(lVar8 + _DAT_112f45538) = param_2;
  *(undefined8 *)(lVar8 + _DAT_112f45540) = uVar17;
  *(undefined8 *)(lVar8 + _DAT_112f45548) = uVar12;
  *(undefined8 *)(lVar8 + _DAT_112f45550) = uVar2;
  *(undefined8 *)(lVar8 + _DAT_112f45558) = uVar15;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f45580);
  *puVar1 = uVar13;
  puVar1[1] = uVar3;
  *(undefined1 *)(puVar1 + 2) = uVar4;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f45560);
  *puVar1 = 0x10315a1a4;
  puVar1[1] = puVar6;
  *(undefined ***)(lVar10 + 8) = &PTR_DAT_110614510;
  func_0x000107c61604();
  puVar9 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_a0 = lVar8;
  lStack_98 = lVar7;
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(uVar17);
  func_0x000107c615f0(uVar12);
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(uVar15);
  plVar11 = &lStack_a0;
  func_0x000107c61154(plVar11,puVar9,0,0);
  func_0x000107c61574(puVar6);
  plVar14 = *(long **)(unaff_x20 + 0x68);
  puVar6 = &UNK_110614710;
  func_0x000107c613fc(&UNK_110614710,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,plVar11);
  pcVar16 = *(code **)(*plVar14 + 0x60);
  func_0x000107c61174(plVar11);
  uVar12 = 0x10315a1ac;
  puVar9 = puVar6;
  (*pcVar16)(0x10315a1ac);
  func_0x000107c61574(puVar6);
  uVar13 = uVar12;
  func_0x000107c614f0(uVar12);
  (**(code **)(puVar9 + 0x18))(*(undefined8 *)(unaff_x20 + 0x78),uVar13,puVar9);
  func_0x000107c615e8(uVar12);
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(plVar11);
  func_0x000107c61604(unaff_x20 + 0xb0,plVar11);
  func_0x000107c61170(plVar11);
  return;
}



/* Entry: 103159e28; end: 103159e6f;  */

void FUN_103159e28(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 103159e70; end: 103159ecb;  */

void FUN_103159e70(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4dd80();
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 103159ecc; end: 103159fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103159ecc(char *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    uVar2 = *(undefined8 *)(param_2 + _DAT_112f455a0);
    uVar1 = *(undefined8 *)(param_2 + _DAT_112f455a8);
    func_0x000107c5fadc(uVar1,((undefined8 *)(param_2 + _DAT_112f455a8))[1]);
    func_0x000107c5d218(uVar2);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    uVar2 = *(undefined8 *)(param_2 + _DAT_112f455a0);
    uVar1 = *(undefined8 *)(param_2 + _DAT_112f455a8);
    func_0x000107c5fadc(uVar1,((undefined8 *)(param_2 + _DAT_112f455a8))[1]);
    func_0x000107c43954(uVar2);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 103159fb8; end: 10315a013;  */

void FUN_103159fb8(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_103159924(param_4 & 1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10315a014; end: 10315a0ef;  */

void FUN_10315a014(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61610(unaff_x20 + 0xb0);
  return;
}



/* Entry: 10315a0f0; end: 10315a133;  */

void FUN_10315a0f0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 10315a134; end: 10315a197;  */

void FUN_10315a134(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103159fb8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),1);
  return;
}



/* Entry: 10315a198; end: 10315a1c7;  */

void FUN_10315a198(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_103159adc(uVar1,param_1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 10315a1c8; end: 10315a443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10315a1c8(double param_1,double param_2)

{
  double *pdVar1;
  double *pdVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  pdVar1 = (double *)(unaff_x20 + _DAT_112f45790);
  dVar7 = pdVar1[1];
  pdVar2 = (double *)(unaff_x20 + _DAT_112f45798);
  dVar3 = *pdVar2;
  func_0x000107c609cc(dVar3,pdVar2[1],pdVar2[2],pdVar2[3]);
  dVar3 = (dVar3 + -60.0) - pdVar1[3];
  if (param_1 <= dVar3) {
    dVar3 = param_1;
  }
  if (dVar3 < dVar7 + 60.0) {
    dVar3 = dVar7 + 60.0;
  }
  dVar8 = *pdVar1;
  dVar4 = *pdVar2;
  func_0x000107c609b0(dVar4,pdVar2[1],pdVar2[2],pdVar2[3]);
  dVar5 = *(double *)(unaff_x20 + _DAT_112f457a0);
  dVar7 = pdVar1[2];
  if (pdVar1[2] < dVar5) {
    dVar7 = dVar5;
  }
  dVar6 = 0.0;
  if (dVar5 <= 0.0) {
    dVar6 = 70.0;
  }
  dVar7 = (dVar4 + -110.0) - (dVar6 + dVar7);
  if (param_2 <= dVar7) {
    dVar7 = param_2;
  }
  if (dVar7 < dVar8 + 110.0) {
    dVar7 = dVar8 + 110.0;
  }
  auVar9._8_8_ = dVar7;
  auVar9._0_8_ = dVar3;
  return auVar9;
}



/* Entry: 10315a444; end: 10315a52b;  */

/* WARNING: Possible PIC construction at 0x00010315a4a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315a4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315a50c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010315a4e8) */
/* WARNING: Removing unreachable block (ram,0x00010315a4a4) */
/* WARNING: Removing unreachable block (ram,0x00010315a510) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315a444(void)

{
  long *plVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112f457d8) == '\x01') {
    plVar1 = (long *)&DAT_112f45788;
    if (*(char *)(unaff_x20 + _DAT_112f457d0) == '\0') {
      plVar1 = (long *)&DAT_112f45780;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bef94f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x20 + *plVar1),PTR_s_addItem__11259bee0,
               *(undefined8 *)(unaff_x20 + _DAT_112f45778));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12cc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112f45780),PTR_s_removeItem__112628d28,
             *(undefined8 *)(unaff_x20 + _DAT_112f45778));
  return;
}



/* Entry: 10315a52c; end: 10315ad8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10315a52c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,double param_8,char param_9)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *puVar20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f45740) = 0x4024000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f45748) = 0x4024000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f45750) = 100;
  *(undefined8 *)(unaff_x20 + _DAT_112f45758) = 0x4051800000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f45760) = 0x4046000000000000;
  lVar14 = _DAT_112f45780;
  puVar17 = PTR__OBJC_CLASS___UIFieldBehavior_1126accc0;
  func_0x000107c61168();
  puVar6 = puVar17;
  func_0x000107c5b9b0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar14) = puVar6;
  lVar14 = _DAT_112f45788;
  func_0x000107c4b64c(0,0);
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar14) = puVar17;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f45790);
  uVar16 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar10 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  uVar19 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  puVar2[1] = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  *puVar2 = uVar16;
  puVar2[3] = uVar10;
  puVar2[2] = uVar19;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112f45798);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f457a0) = 0;
  uVar16 = *(undefined8 *)PTR__CGPointZero_110347540;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_112f457b0);
  puVar4[1] = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  *puVar4 = uVar16;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_112f457b8);
  puVar4[1] = 0x4069000000000000;
  *puVar4 = 0x4059000000000000;
  uVar16 = 0x4054000000000000;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_112f457c0);
  puVar4[1] = 0x4049000000000000;
  *puVar4 = 0x4054000000000000;
  lVar14 = unaff_x20 + _DAT_112f457c8;
  *(undefined8 *)(lVar14 + 8) = 0;
  func_0x000107c61614(lVar14,0);
  *(undefined1 *)(unaff_x20 + _DAT_112f457d0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f457d8) = 1;
  lVar14 = _DAT_112f45778;
  *(undefined8 *)(unaff_x20 + _DAT_112f45778) = param_5;
  func_0x000107c61174();
  func_0x000107c3ec60(param_6);
  *puVar3 = uVar16;
  puVar3[1] = uVar19;
  puVar3[2] = param_3;
  puVar3[3] = param_4;
  *(long *)(unaff_x20 + _DAT_112f457a8) = param_6;
  puVar17 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c61174();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar6 = puVar17;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar17);
  uVar7 = 0;
  func_0x00010315c2e0(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar10 = uVar7;
  func_0x000100deaee4();
  puVar17 = puVar6;
  func_0x000107c5fe10(puVar6,uVar7,uVar10);
  func_0x000107c61170(puVar6);
  puVar6 = puVar17;
  FUN_10315ad8c();
  func_0x000107c6142c(puVar17);
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar17 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar17 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar17 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar17 != (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    do {
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= puVar20) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10315a8b0);
          (*pcVar5)();
        }
        puVar8 = *(undefined **)(puVar6 + (long)puVar20 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar8 = puVar20;
        FUN_10315c100(puVar20,puVar6,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59528);
      }
      puVar1 = puVar20 + 1;
      if (SCARRY8((long)puVar20,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10315a8ac);
        (*pcVar5)();
      }
      puVar9 = puVar8;
      func_0x000107c3d0e4();
      if (puVar9 == (undefined *)0x0) {
        func_0x000107c6142c(puVar6);
        puVar17 = puVar8;
        func_0x000107c5e408();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        uVar10 = 0;
        func_0x00010315c2e0(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
        puVar6 = puVar17;
        func_0x000107c5fc54(puVar17,uVar10);
        func_0x000107c61170(puVar17);
        if ((ulong)puVar6 >> 0x3e == 0) {
          puVar17 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar17 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            puVar17 = puVar6;
          }
          func_0x000107c60480();
        }
        if (puVar17 != (undefined *)0x0) {
          if (((ulong)puVar6 & 0xc000000000000001) == 0) {
            if (*(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10315ad8c);
              (*pcVar5)();
            }
            lVar11 = *(long *)(puVar6 + 0x20);
            func_0x000107c61174();
            lVar18 = lVar11;
          }
          else {
            lVar11 = 0;
            FUN_10315c100(0,puVar6,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x112d36e50);
            lVar18 = lVar11;
          }
          goto LAB_10315a8e8;
        }
        break;
      }
      func_0x000107c61170(puVar8);
      puVar20 = puVar20 + 1;
    } while (puVar1 != puVar17);
  }
  lVar11 = param_6;
  lVar18 = 0;
LAB_10315a8e8:
  func_0x000107c6142c(puVar6);
  func_0x000107c515a0();
  *puVar2 = uVar16;
  puVar2[1] = uVar19;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  FUN_103158b5c();
  lVar12 = lVar11;
  func_0x000107c613fc();
  *(undefined8 *)(lVar12 + 0x18) = 3;
  *(undefined8 *)(lVar12 + 0x10) = 1;
  uVar16 = *(undefined8 *)(unaff_x20 + lVar14);
  *(undefined8 *)(lVar12 + 0x20) = uVar16;
  puVar17 = PTR__OBJC_CLASS___UICollisionBehavior_1126accc8;
  func_0x000107c610f8();
  func_0x000107c61174(uVar16);
  uVar16 = 0x112f45808;
  func_0x0001000285a8(0x112f45808,&UNK_10db91a58);
  lVar13 = lVar12;
  func_0x000107c5fc48(lVar12,uVar16);
  func_0x000107c61574(lVar12);
  func_0x000107c4700c();
  func_0x000107c61170(lVar13);
  *(undefined **)(unaff_x20 + _DAT_112f45770) = puVar17;
  func_0x000107c613fc(lVar11,((ulong)*(uint *)(lVar11 + 0x30) + 7 & 0x1fffffff8) + 8,
                      *(ushort *)(lVar11 + 0x34) | 7);
  *(undefined8 *)(lVar11 + 0x18) = 3;
  *(undefined8 *)(lVar11 + 0x10) = 1;
  uVar19 = *(undefined8 *)(unaff_x20 + lVar14);
  *(undefined8 *)(lVar11 + 0x20) = uVar19;
  puVar17 = PTR__OBJC_CLASS___UIDynamicItemBehavior_1126accd0;
  func_0x000107c610f8();
  func_0x000107c61174(uVar19);
  lVar14 = lVar11;
  func_0x000107c5fc48(lVar11,uVar16);
  func_0x000107c61574(lVar11);
  func_0x000107c4700c();
  func_0x000107c61170(lVar14);
  lVar14 = _DAT_112f45768;
  *(undefined **)(unaff_x20 + _DAT_112f45768) = puVar17;
  func_0x000107c5400c(0x3f847ae147ae147b,puVar17);
  func_0x000107c57e3c(0x402e000000000000,*(undefined8 *)(unaff_x20 + lVar14));
  func_0x000107c54bc4(0,*(undefined8 *)(unaff_x20 + lVar14));
  func_0x000107c526b4(*(undefined8 *)(unaff_x20 + lVar14));
  puVar15 = &stack0xffffffffffffff78;
  func_0x000107c61154(puVar15,PTR_s_init_1125d9248);
  func_0x000107c61174();
  func_0x000107c3d610();
  func_0x000107c3d610(puVar15);
  lVar14 = _DAT_112f45778;
  func_0x000107c54b80(0,0,0x4059000000000000,0x4069000000000000,
                      *(undefined8 *)(puVar15 + _DAT_112f45778));
  if (param_9 == '\x01') {
    uVar16 = *(undefined8 *)(puVar15 + lVar14);
    param_8 = *(double *)(puVar15 + _DAT_112f45790) + 44.0 + 100.0;
    func_0x000107c61174(uVar16);
    param_7 = 0x7fefffffffffffff;
  }
  else {
    uVar16 = *(undefined8 *)(puVar15 + lVar14);
    func_0x000107c61174(uVar16);
  }
  FUN_10315a1c8(param_7,param_8);
  func_0x000107c532b4(uVar16);
  func_0x000107c61170(uVar16);
  puVar17 = PTR_PTR_1126b08d8;
  func_0x000107c61168(PTR_PTR_1126b08d8);
  uVar16 = *(undefined8 *)(puVar15 + lVar14);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar16);
  func_0x000107c3ea80(puVar6);
  func_0x000107c61180();
  func_0x000100b74f58(0x4054000000000000,0x3fd999999999999a,0,0x3ff0000000000000,puVar17,uVar16,
                      puVar6);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(puVar6);
  FUN_10315b050();
  uVar16 = *(undefined8 *)(puVar15 + _DAT_112f45780);
  uVar19 = *(undefined8 *)(puVar15 + lVar14);
  func_0x000107c61174(uVar16);
  func_0x000107c3f74c(uVar19);
  func_0x000107c575ec(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c3d610(puVar15);
  func_0x000107c3d610(puVar15);
  puVar17 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  puVar6 = puVar17;
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c3d7bc();
  func_0x000107c61170(puVar6);
  func_0x000107c41570(puVar17);
  func_0x000107c61180();
  func_0x000107c3d7bc();
  func_0x000107c61170(puVar17);
  puVar17 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  func_0x000107c48c2c();
  func_0x000107c3d6fc(*(undefined8 *)(puVar15 + lVar14));
  puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c3d6fc(*(undefined8 *)(puVar15 + lVar14));
  FUN_10315b1d0();
  func_0x000107c61170(puVar15);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar6);
  return puVar15;
}



/* Entry: 10315ad8c; end: 10315b04f;  */

undefined * FUN_10315ad8c(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar12;
    puVar10 = param_1;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    func_0x00010315c2e0(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    func_0x000100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar10,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar9 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar9;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      func_0x000107c602ac();
      if (puVar10 == (undefined *)0x0) {
LAB_10315b00c:
        puStack_58 = (undefined *)0x0;
LAB_10315b010:
        func_0x000100deaf38(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      func_0x00010315c2e0(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10315b050);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_10315b00c;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
    if (puVar10 == (undefined *)0x0) goto LAB_10315b010;
    func_0x000107c61168(puVar7);
    puVar6 = puVar10;
    func_0x000107c6148c(puVar10,puVar7);
    uVar9 = uVar13;
    lVar14 = lVar2;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
    }
    else {
      puVar10 = puStack_98;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_98) {
            puVar7 = puStack_98;
          }
          func_0x000107c60480(puVar7);
        }
        puVar10 = (undefined *)0x0;
        func_0x00010109b320(0,puVar7 + 1,1,puStack_98);
        puStack_98 = puVar10;
      }
      uVar8 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x00010109b320(puVar10,uVar13 + 1,1,puStack_98);
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        puStack_98 = puVar10;
      }
      *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar8 + uVar13 * 8 + 0x20) = puVar6;
    }
  } while( true );
}



/* Entry: 10315b050; end: 10315b1cf;  */

/* WARNING: Possible PIC construction at 0x00010315a4a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315a4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315a50c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010315a4e8) */
/* WARNING: Removing unreachable block (ram,0x00010315a4a4) */
/* WARNING: Removing unreachable block (ram,0x00010315a510) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315b050(ulong param_1)

{
  double *pdVar1;
  long *plVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  double dVar7;
  double dVar8;
  
  pdVar1 = (double *)(unaff_x20 + _DAT_112f45798);
  func_0x000107c609ac(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3],0,0,0,0);
  if ((param_1 & 1) != 0) {
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f45780);
  dVar7 = *pdVar1;
  func_0x000107c609cc(dVar7,pdVar1[1],pdVar1[2],pdVar1[3]);
  dVar8 = *pdVar1;
  func_0x000107c609b0(dVar8,pdVar1[1],pdVar1[2],pdVar1[3]);
  puVar5 = PTR__OBJC_CLASS___UIRegion_1126accb8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIRegion_1126accb8);
  func_0x000107c486f8(dVar7 + dVar7,dVar8 + dVar8);
  func_0x000107c57c3c(uVar6);
  func_0x000107c61170(puVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f45788);
  dVar7 = pdVar1[2];
  dVar8 = pdVar1[3];
  puVar5 = PTR__OBJC_CLASS___UIRegion_1126accb8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIRegion_1126accb8);
  func_0x000107c486f8(dVar7,dVar8);
  func_0x000107c57c3c(uVar6);
  func_0x000107c61170(puVar5);
  dVar8 = *pdVar1;
  func_0x000107c609bc(dVar8,pdVar1[1],pdVar1[2],pdVar1[3]);
  dVar7 = *pdVar1;
  func_0x000107c609c0(dVar7,pdVar1[1],pdVar1[2],pdVar1[3]);
  func_0x000107c575ec(dVar8,dVar7,uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f45778);
  func_0x000107c3f74c(uVar6);
  FUN_10315a1c8();
  lVar4 = _DAT_112f457d8;
  uVar3 = *(undefined1 *)(unaff_x20 + _DAT_112f457d8);
  *(undefined1 *)(unaff_x20 + _DAT_112f457d8) = 0;
  FUN_10315a444();
  func_0x000107c532b4(dVar8,dVar7,uVar6);
  *(undefined1 *)(unaff_x20 + lVar4) = uVar3;
  if (*(char *)(unaff_x20 + _DAT_112f457d8) == '\x01') {
    plVar2 = (long *)&DAT_112f45788;
    if (*(char *)(unaff_x20 + _DAT_112f457d0) == '\0') {
      plVar2 = (long *)&DAT_112f45780;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bef94f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x20 + *plVar2),PTR_s_addItem__11259bee0,
               *(undefined8 *)(unaff_x20 + _DAT_112f45778));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12cc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112f45780),PTR_s_removeItem__112628d28,
             *(undefined8 *)(unaff_x20 + _DAT_112f45778));
  return;
}



/* Entry: 10315b1d0; end: 10315b40b;  */

/* WARNING: Possible PIC construction at 0x00010315b26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315b2fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315b390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010315b300) */
/* WARNING: Removing unreachable block (ram,0x00010315b348) */
/* WARNING: Removing unreachable block (ram,0x00010315b34c) */
/* WARNING: Removing unreachable block (ram,0x00010315b350) */
/* WARNING: Removing unreachable block (ram,0x00010315b364) */
/* WARNING: Removing unreachable block (ram,0x00010315b368) */
/* WARNING: Removing unreachable block (ram,0x00010315b36c) */
/* WARNING: Removing unreachable block (ram,0x00010315b270) */
/* WARNING: Removing unreachable block (ram,0x00010315b2d0) */
/* WARNING: Removing unreachable block (ram,0x00010315b2d4) */
/* WARNING: Removing unreachable block (ram,0x00010315b2d8) */
/* WARNING: Removing unreachable block (ram,0x00010315b394) */
/* WARNING: Removing unreachable block (ram,0x00010315b3c8) */
/* WARNING: Removing unreachable block (ram,0x00010315b3cc) */
/* WARNING: Removing unreachable block (ram,0x00010315b3d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315b1d0(void)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  double dVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f45770);
  func_0x000107c4fe6c(uVar4);
  uVar3 = 0x756f427265707075;
  func_0x000107c5fadc(0x756f427265707075,0xea0000000000646e);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f45790);
  uVar6 = *puVar1;
  pdVar2 = (double *)(unaff_x20 + _DAT_112f45798);
  dVar5 = *pdVar2;
  func_0x000107c609b4(dVar5,pdVar2[1],pdVar2[2],pdVar2[3]);
  func_0x000107c3d5f4(0xc024000000000000,uVar6,dVar5 + 10.0,*puVar1,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10315b40c; end: 10315b4e7; -[_TtC16InAppPipCallImpl24InAppPipDraggingBehavior willMoveToAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315b40c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_5;
  func_0x000107c614f0();
  puVar2 = PTR_s_willMoveToAnimator__112524f18;
  lStack_60 = param_5;
  lStack_58 = lVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61154(&lStack_60,puVar2,param_7);
  if (param_7 != 0) {
    lVar3 = param_7;
    func_0x000107c4fb4c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3ec60();
      func_0x000107c61170(lVar3);
      puVar1 = (undefined8 *)(param_5 + _DAT_112f45798);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
      FUN_10315b050();
      FUN_10315b1d0();
    }
    func_0x000107c61170(param_7);
  }
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 10315b4e8; end: 10315b643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315b4e8(double param_1,double param_2,double param_3,double param_4)

{
  double *pdVar1;
  double dVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  
  dVar2 = 1400.0;
  if (*(char *)(unaff_x20 + _DAT_112f457d0) == '\0') {
    dVar2 = 800.0;
  }
  dVar6 = *(double *)PTR__UIScrollViewDecelerationRateFast_110345da8;
  pdVar1 = (double *)(unaff_x20 + _DAT_112f45798);
  dVar5 = *pdVar1;
  func_0x000107c609bc(dVar5,pdVar1[1],pdVar1[2],pdVar1[3]);
  if (param_3 <= dVar5) {
    if (param_1 <= dVar2) {
      lVar3 = unaff_x20 + _DAT_112f45790;
LAB_10315b5e4:
      dVar2 = *(double *)(lVar3 + 8) + 60.0;
      goto LAB_10315b5f4;
    }
LAB_10315b5a8:
    dVar5 = *pdVar1;
    func_0x000107c609cc(dVar5,pdVar1[1],pdVar1[2],pdVar1[3]);
    lVar3 = unaff_x20 + _DAT_112f45790;
  }
  else {
    dVar5 = *pdVar1;
    func_0x000107c609cc(dVar5,pdVar1[1],pdVar1[2],pdVar1[3]);
    if (dVar2 < param_1) goto LAB_10315b5a8;
    lVar3 = unaff_x20 + _DAT_112f45790;
    if (param_1 < -dVar2) goto LAB_10315b5e4;
  }
  dVar2 = (dVar5 + -60.0) - *(double *)(lVar3 + 0x18);
LAB_10315b5f4:
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f45780);
  FUN_10315a1c8(dVar2,param_4 + ((param_2 / 1000.0) * dVar6) / (1.0 - dVar6));
                    /* WARNING: Could not recover jumptable at 0x00010c1dee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_setPosition__1126555c8);
  return;
}



/* Entry: 10315b644; end: 10315b723;  */

/* WARNING: Possible PIC construction at 0x00010315b26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315b2fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315b390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010315b300) */
/* WARNING: Removing unreachable block (ram,0x00010315b348) */
/* WARNING: Removing unreachable block (ram,0x00010315b34c) */
/* WARNING: Removing unreachable block (ram,0x00010315b350) */
/* WARNING: Removing unreachable block (ram,0x00010315b364) */
/* WARNING: Removing unreachable block (ram,0x00010315b368) */
/* WARNING: Removing unreachable block (ram,0x00010315b36c) */
/* WARNING: Removing unreachable block (ram,0x00010315b270) */
/* WARNING: Removing unreachable block (ram,0x00010315b2d0) */
/* WARNING: Removing unreachable block (ram,0x00010315b2d4) */
/* WARNING: Removing unreachable block (ram,0x00010315b2d8) */
/* WARNING: Removing unreachable block (ram,0x00010315b394) */
/* WARNING: Removing unreachable block (ram,0x00010315b3c8) */
/* WARNING: Removing unreachable block (ram,0x00010315b3cc) */
/* WARNING: Removing unreachable block (ram,0x00010315b3d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315b644(double param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  
  *(double *)(unaff_x20 + _DAT_112f457a0) = param_1;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f45778);
  dVar8 = param_1;
  func_0x000107c438d4(uVar6);
  func_0x000107c609b8();
  pdVar2 = (double *)(unaff_x20 + _DAT_112f45798);
  dVar7 = *pdVar2;
  func_0x000107c609b0(dVar7,pdVar2[1],pdVar2[2],pdVar2[3]);
  dVar7 = dVar7 - param_1;
  if (dVar7 < dVar8) {
    func_0x000107c3f74c(uVar6);
    dVar8 = *pdVar2;
    func_0x000107c609b0(dVar8,pdVar2[1],pdVar2[2],pdVar2[3]);
    dVar8 = dVar8 - param_1;
    dVar10 = dVar8 + -10.0;
    func_0x000107c3ec60(uVar6);
    func_0x000107c609b0();
    lVar4 = _DAT_112f457d8;
    uVar3 = *(undefined1 *)(unaff_x20 + _DAT_112f457d8);
    *(undefined1 *)(unaff_x20 + _DAT_112f457d8) = 0;
    FUN_10315a444();
    func_0x000107c532b4(dVar7,dVar10 + dVar8 * -0.5,uVar6);
    *(undefined1 *)(unaff_x20 + lVar4) = uVar3;
    FUN_10315a444();
  }
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f45770);
  func_0x000107c4fe6c(uVar5);
  uVar6 = 0x756f427265707075;
  func_0x000107c5fadc(0x756f427265707075,0xea0000000000646e);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f45790);
  uVar9 = *puVar1;
  pdVar2 = (double *)(unaff_x20 + _DAT_112f45798);
  dVar8 = *pdVar2;
  func_0x000107c609b4(dVar8,pdVar2[1],pdVar2[2],pdVar2[3]);
  func_0x000107c3d5f4(0xc024000000000000,uVar9,dVar8 + 10.0,*puVar1,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 10315b724; end: 10315b863;  */

void FUN_10315b724(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c5eba8();
  if (param_1 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    uVar1 = *(undefined8 *)PTR__UIKeyboardFrameEndUserInfoKey_110345d08;
    func_0x000107c5faec();
    uStack_88 = uVar1;
    lStack_80 = param_2;
    func_0x000107c61434(param_2);
    puVar3 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&uStack_78,&uStack_88,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_10315b7d8:
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
    }
    else {
      func_0x000107c61434(param_1);
      puVar2 = &uStack_78;
      func_0x000100df95d0(puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        func_0x000107c6142c(param_1);
        goto LAB_10315b7d8;
      }
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar2 * 0x20,&uStack_50);
      func_0x000107c6142c(param_2);
      param_2 = param_1;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_1);
    func_0x0001007bbff0(&uStack_78);
    if (lStack_38 != 0) {
      uVar1 = 0;
      func_0x000100f6e390(0);
      puVar2 = &uStack_78;
      func_0x000107c6147c(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
      if (((ulong)puVar2 & 1) != 0) {
        func_0x000107c609b0(uStack_78,uStack_70,uStack_68,uStack_60);
      }
      goto LAB_10315b848;
    }
  }
  func_0x00010006e7f4(&uStack_50);
LAB_10315b848:
  FUN_10315b644();
  return;
}



/* Entry: 10315b864; end: 10315b907; -[_TtC16InAppPipCallImpl24InAppPipDraggingBehavior keyboardWillChangeFrameWithNotification:] */

void FUN_10315b864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ebac();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eba0(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_10315b724(puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 10315b908; end: 10315b9ab; -[_TtC16InAppPipCallImpl24InAppPipDraggingBehavior keyboardWillHideWithNotification:] */

void FUN_10315b908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5ebac();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5eba0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  func_0x000107c61174(param_1);
  FUN_10315b644(0);
  func_0x000107c61170(param_1);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 10315b9ac; end: 10315bdeb;  */

/* WARNING: Possible PIC construction at 0x00010315a4a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315a4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315a50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315bd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315bda0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010315bd28) */
/* WARNING: Removing unreachable block (ram,0x00010315bd6c) */
/* WARNING: Removing unreachable block (ram,0x00010315a510) */
/* WARNING: Removing unreachable block (ram,0x00010315a4e8) */
/* WARNING: Removing unreachable block (ram,0x00010315a4a4) */
/* WARNING: Removing unreachable block (ram,0x00010315bda4) */
/* WARNING: Removing unreachable block (ram,0x00010315bda8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315b9ac(double param_1,double param_2,long param_3,undefined8 param_4)

{
  double *pdVar1;
  long *plVar2;
  byte bVar3;
  undefined1 *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 unaff_x19;
  undefined8 uVar12;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 *puVar13;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double unaff_d8;
  undefined8 uVar20;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double dVar21;
  
  lVar9 = _DAT_112f457a8;
  puVar4 = &stack0xffffffffffffffa0;
  puVar13 = &stack0xfffffffffffffff0;
  func_0x000107c4b8b8(param_3,param_4,*(undefined8 *)(unaff_x20 + _DAT_112f457a8));
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f45778);
  dVar16 = param_1;
  dVar18 = param_2;
  func_0x000107c3ec60(uVar12);
  func_0x000107c609cc();
  dVar21 = dVar16;
  func_0x000107c3ec60(uVar12);
  func_0x000107c609b0();
  lVar10 = param_3;
  dVar15 = dVar21;
  func_0x000107c5bcc0();
  if (1 < lVar10 - 3U) {
    if (lVar10 != 2) {
      if (lVar10 != 1) {
        return;
      }
      func_0x000107c3f74c(uVar12);
      pdVar1 = (double *)(unaff_x20 + _DAT_112f457b0);
      *pdVar1 = param_1 - dVar15;
      pdVar1[1] = param_2 - dVar18;
      *(undefined1 *)(unaff_x20 + _DAT_112f457d8) = 0;
      if (*(char *)(unaff_x20 + _DAT_112f457d8) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c12cc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(unaff_x20 + _DAT_112f45780),PTR_s_removeItem__112628d28,
                   *(undefined8 *)(unaff_x20 + _DAT_112f45778));
        return;
      }
      plVar2 = (long *)&DAT_112f45788;
      if (*(char *)(unaff_x20 + _DAT_112f457d0) == '\0') {
        plVar2 = (long *)&DAT_112f45780;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bef94f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(unaff_x20 + *plVar2),PTR_s_addItem__11259bee0,
                 *(undefined8 *)(unaff_x20 + _DAT_112f45778));
      return;
    }
    dVar15 = *(double *)(unaff_x20 + _DAT_112f457b0);
    param_1 = param_1 - dVar15;
    param_2 = param_2 - ((double *)(unaff_x20 + _DAT_112f457b0))[1];
    func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + lVar9));
    func_0x000107c609cc();
    dVar18 = dVar16 * 0.5 + -10.0;
    if (param_1 < dVar18) {
      param_1 = dVar18;
    }
    dVar16 = (dVar15 - dVar16 * 0.5) + 10.0;
    if (dVar16 <= param_1) {
      param_1 = dVar16;
    }
    func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + lVar9));
    func_0x000107c609b0();
    dVar15 = ((double *)(unaff_x20 + _DAT_112f45790))[2];
    if (dVar15 < *(double *)(unaff_x20 + _DAT_112f457a0)) {
      dVar15 = *(double *)(unaff_x20 + _DAT_112f457a0);
    }
    dVar18 = dVar21 * 0.5 + *(double *)(unaff_x20 + _DAT_112f45790);
    if (param_2 < dVar18) {
      param_2 = dVar18;
    }
    dVar15 = (dVar16 - dVar21 * 0.5) - dVar15;
    if (dVar15 <= param_2) {
      param_2 = dVar15;
    }
    func_0x000107c532b4(param_1,param_2,uVar12);
    func_0x000107c438d4(uVar12);
    func_0x000107c609c4();
    lVar10 = _DAT_112f457d0;
    if (*(char *)(unaff_x20 + _DAT_112f457d0) == '\x01') {
      dVar19 = 15.0;
      if (15.0 <= param_1) {
LAB_10315bc1c:
        func_0x000107c438d4(uVar12);
        func_0x000107c609b4();
        dVar16 = param_1;
        func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + lVar9));
        func_0x000107c609cc();
        bVar8 = *(byte *)(unaff_x20 + lVar10);
        dVar19 = -15.0;
        if (bVar8 == 0) {
          dVar19 = 5.0;
        }
        bVar7 = dVar16 + dVar19 < param_1;
        param_1 = dVar16 + dVar19;
      }
      else {
        bVar7 = true;
        bVar8 = 1;
      }
    }
    else {
      dVar19 = -5.0;
      if (-5.0 <= param_1) goto LAB_10315bc1c;
      bVar8 = 0;
      bVar7 = true;
    }
    *(bool *)(unaff_x20 + lVar10) = bVar7;
    puVar4 = (undefined1 *)register0x00000008;
    uVar12 = unaff_x19;
    lVar9 = unaff_x22;
    puVar13 = unaff_x29;
    dVar15 = unaff_d8;
    dVar18 = unaff_d9;
    goto SUB_10315a2d4;
  }
  func_0x000107c5dc98(param_3);
  dVar19 = dVar15;
  dVar17 = dVar18;
  func_0x000107c3f74c(uVar12);
  dVar14 = dVar15;
  FUN_10315b4e8(dVar15,dVar18,dVar19,dVar17);
  func_0x000107c438d4(uVar12);
  func_0x000107c609c4();
  unaff_x21 = _DAT_112f457d0;
  if (*(char *)(unaff_x20 + _DAT_112f457d0) == '\x01') {
    dVar19 = 15.0;
  }
  else {
    dVar19 = -5.0;
  }
  dVar17 = 200.0;
  bVar7 = false;
  if ((dVar14 < dVar19) && (bVar7 = false, !NAN(dVar15))) {
    bVar7 = dVar15 < 200.0;
  }
  param_1 = dVar17;
  if (bVar7) {
LAB_10315bd18:
    unaff_d10 = dVar16;
    bVar7 = true;
    unaff_d11 = dVar21;
  }
  else {
    func_0x000107c438d4(uVar12);
    func_0x000107c609b4();
    dVar16 = dVar17;
    func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + lVar9));
    func_0x000107c609cc();
    if (*(char *)(unaff_x20 + unaff_x21) == '\x01') {
      dVar19 = -15.0;
    }
    else {
      dVar19 = 5.0;
    }
    param_1 = -200.0;
    bVar7 = false;
    bVar5 = true;
    bVar6 = false;
    if (dVar16 + dVar19 < dVar17) {
      bVar7 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(dVar15)) {
        bVar7 = dVar15 < -200.0;
        bVar5 = dVar15 == -200.0;
        bVar6 = false;
      }
    }
    dVar16 = dVar17;
    if (!bVar5 && bVar7 == bVar6) goto LAB_10315bd18;
    func_0x000107c438d4(uVar12);
    func_0x000107c609c4();
    dVar21 = ABS(dVar18);
    dVar19 = 10.0;
    bVar7 = false;
    if ((param_1 < 10.0) && (bVar7 = false, !NAN(dVar15))) {
      bVar7 = dVar15 < -200.0;
    }
    unaff_d10 = 400.0;
    bVar5 = false;
    if ((bVar7) && (bVar5 = false, !NAN(dVar21))) {
      bVar5 = dVar21 < 400.0;
    }
    param_1 = unaff_d10;
    if (bVar5) goto LAB_10315bd18;
    func_0x000107c438d4(uVar12);
    func_0x000107c609b4();
    dVar16 = unaff_d10;
    func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + lVar9));
    func_0x000107c609cc();
    dVar19 = -10.0;
    param_1 = 200.0;
    bVar7 = 200.0 < dVar15 && (dVar21 < 400.0 && dVar16 + -10.0 < unaff_d10);
    unaff_d11 = dVar21;
  }
  bVar8 = *(byte *)(unaff_x20 + unaff_x21);
  *(bool *)(unaff_x20 + unaff_x21) = bVar7;
  unaff_x30 = 0x10315bd28;
SUB_10315a2d4:
  lVar10 = _DAT_112f457d0;
  *(double *)(puVar4 + -0x50) = unaff_d11;
  *(double *)(puVar4 + -0x48) = unaff_d10;
  *(double *)(puVar4 + -0x40) = dVar18;
  *(double *)(puVar4 + -0x38) = dVar15;
  *(long *)(puVar4 + -0x30) = lVar9;
  *(long *)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar4 + -0x18) = uVar12;
  *(undefined1 **)(puVar4 + -0x10) = puVar13;
  *(undefined8 *)(puVar4 + -8) = unaff_x30;
  if ((*(byte *)(unaff_x20 + _DAT_112f457d0) & 1) == 0) {
    if ((bVar8 & 1) == 0) {
      return;
    }
    uVar20 = 0x4069000000000000;
    uVar12 = 0x4059000000000000;
  }
  else {
    func_0x000107c3f74c(*(undefined8 *)(unaff_x20 + _DAT_112f45778));
    dVar16 = param_1;
    func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + _DAT_112f457a8));
    func_0x000107c609bc();
    uVar12 = 0xc059000000000000;
    if (dVar16 <= param_1) {
      uVar12 = 0x4059000000000000;
    }
    func_0x000107c54118(uVar12,0,*(undefined8 *)(unaff_x20 + _DAT_112f45788));
    bVar3 = *(byte *)(unaff_x20 + lVar10);
    if ((bVar8 & 1) == (bVar3 & 1)) {
      return;
    }
    bVar7 = (bVar3 & 1) == 0;
    uVar12 = 0x4054000000000000;
    if (bVar7) {
      uVar12 = 0x4059000000000000;
    }
    param_1 = 200.0;
    dVar19 = 50.0;
    uVar20 = 0x4049000000000000;
    if (bVar7) {
      uVar20 = 0x4069000000000000;
    }
  }
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f45778);
  func_0x000107c3f74c(uVar11);
  func_0x000107c54b80(0,0,uVar12,uVar20,uVar11);
  func_0x000107c532b4(param_1,dVar19,uVar11);
  lVar9 = unaff_x20 + _DAT_112f457c8;
  func_0x000107c61618();
  if (lVar9 == 0) {
    return;
  }
  FUN_103158d74(*(undefined1 *)(unaff_x20 + lVar10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar9);
  return;
}



/* Entry: 10315bdec; end: 10315be3b; -[_TtC16InAppPipCallImpl24InAppPipDraggingBehavior handlePanGestureWithSender:] */

/* WARNING: Possible PIC construction at 0x00010315be24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010315be28) */

void FUN_10315bdec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10315b9ac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10315be3c; end: 10315bfcf;  */

/* WARNING: Possible PIC construction at 0x00010315a4a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315a4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315a50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315bf6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315bf7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010315bf70) */
/* WARNING: Removing unreachable block (ram,0x00010315a510) */
/* WARNING: Removing unreachable block (ram,0x00010315a4e8) */
/* WARNING: Removing unreachable block (ram,0x00010315a4a4) */
/* WARNING: Removing unreachable block (ram,0x00010315bf80) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315be3c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  if (*(char *)(unaff_x20 + _DAT_112f457d0) != '\x01') {
    lVar3 = unaff_x20 + _DAT_112f457c8;
    func_0x000107c61618();
    if (lVar3 == 0) {
      return;
    }
    lVar4 = lVar3 + _DAT_112f455b0;
    func_0x000107c61618();
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x60);
      uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + _DAT_11307b698);
      func_0x000104461378(0);
      func_0x000107c615f0(uVar6);
      func_0x000104460c10(1);
      func_0x000107c4ab38(uVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
    return;
  }
  *(undefined1 *)(unaff_x20 + _DAT_112f457d0) = 0;
  func_0x00010315a2d4(1);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f45778);
  func_0x000107c3f74c(uVar5);
  func_0x00010315a1c8();
  func_0x000107c575ec(*(undefined8 *)(unaff_x20 + _DAT_112f45780));
  lVar3 = _DAT_112f457d8;
  uVar2 = *(undefined1 *)(unaff_x20 + _DAT_112f457d8);
  *(undefined1 *)(unaff_x20 + _DAT_112f457d8) = 0;
  FUN_10315a444();
  func_0x000107c532b4(param_1,param_2,uVar5);
  *(undefined1 *)(unaff_x20 + lVar3) = uVar2;
  if (*(char *)(unaff_x20 + _DAT_112f457d8) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c12cc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x20 + _DAT_112f45780),PTR_s_removeItem__112628d28,
               *(undefined8 *)(unaff_x20 + _DAT_112f45778));
    return;
  }
  plVar1 = (long *)&DAT_112f45788;
  if (*(char *)(unaff_x20 + _DAT_112f457d0) == '\0') {
    plVar1 = (long *)&DAT_112f45780;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bef94f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + *plVar1),PTR_s_addItem__11259bee0,
             *(undefined8 *)(unaff_x20 + _DAT_112f45778));
  return;
}



/* Entry: 10315bfd0; end: 10315bff7; -[_TtC16InAppPipCallImpl24InAppPipDraggingBehavior handleTap] */

void FUN_10315bfd0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10315be3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10315bff8; end: 10315c057; -[_TtC16InAppPipCallImpl24InAppPipDraggingBehavior init] */

void FUN_10315bff8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("InAppPipCallImpl.InAppPipDraggingBehavior",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10315c024);
  (*pcVar1)();
}



/* Entry: 10315c058; end: 10315c0df; -[_TtC16InAppPipCallImpl24InAppPipDraggingBehavior .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10315c058(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f45768));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f45770));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f45778));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f45780));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f45788));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f457a8));
  param_1 = param_1 + _DAT_112f457c8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10315c0e0; end: 10315c0ff;  */

void FUN_10315c0e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128bb0e8);
  return;
}



/* Entry: 10315c100; end: 10315c2bb;  */

ulong FUN_10315c100(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10315c1e4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10315c1e8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x00010315c2e0(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10315c2bc);
  (*pcVar2)();
}



/* Entry: 10315c2bc; end: 10315c31f;  */

undefined8 FUN_10315c2bc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10315c320; end: 10315c38b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315c320(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10315c714();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f45818) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10315c38c; end: 10315c3f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315c38c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f45818) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10315c3f8; end: 10315c457; -[_TtC49LensTalkVideoHandlingScopedFactoryServiceProvider37SCLensTalkVideoHandlingScopedServices init] */

void FUN_10315c3f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensTalkVideoHandlingScopedFactoryServiceProvider.SCLensTalkVideoHandlingScopedServices"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10315c424);
  (*pcVar1)();
}



/* Entry: 10315c458; end: 10315c467; -[_TtC49LensTalkVideoHandlingScopedFactoryServiceProvider37SCLensTalkVideoHandlingScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315c458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f45818));
  return;
}



/* Entry: 10315c468; end: 10315c4d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315c468(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110614900;
  func_0x000107c613fc(&UNK_110614900,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10315c7f0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10315c4d4; end: 10315c56f;  */

void FUN_10315c4d4(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110614810;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110614810;
  return;
}



/* Entry: 10315c570; end: 10315c5a7;  */

void FUN_10315c570(long *param_1)

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



/* Entry: 10315c5a8; end: 10315c5af;  */

undefined8 FUN_10315c5a8(void)

{
  return 0x1b;
}



/* Entry: 10315c5b0; end: 10315c6e3;  */

void FUN_10315c5b0(undefined8 *param_1)

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
  puVar1 = &UNK_110614928;
  func_0x000107c613fc(&UNK_110614928,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10315c7c8;
  func_0x00010058fa64(FUN_10315c7c8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10315c6e4; end: 10315c713;  */

undefined ** FUN_10315c6e4(void)

{
  return &PTR_DAT_112f46510;
}



/* Entry: 10315c714; end: 10315c733;  */

void FUN_10315c714(void)

{
  func_0x000107c61168(&PTR_PTR_1128bb240);
  return;
}



/* Entry: 10315c734; end: 10315c783;  */

undefined1  [16] FUN_10315c734(void)

{
  return ZEXT816(0x110614860);
}



/* Entry: 10315c784; end: 10315c7c7;  */

void FUN_10315c784(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f45880 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126accd8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f45880 = puVar1;
  return;
}



/* Entry: 10315c7c8; end: 10315c7ef;  */

void FUN_10315c7c8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10315c7f0; end: 10315c7f3;  */

void FUN_10315c7f0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10315c7f4; end: 10315c91b;  */

void FUN_10315c7f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f45888,&UNK_10db91cd0);
  puVar1 = &UNK_110614968;
  func_0x000107c613fc(&UNK_110614968,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10315c91c,puVar1);
  return;
}



/* Entry: 10315c91c; end: 10315c933;  */

/* WARNING: Possible PIC construction at 0x00010315c904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010315c908) */

void FUN_10315c91c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1106149b0;
  func_0x000107c613fc(&UNK_1106149b0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112f45890;
  func_0x0001000285a8(0x112f45890,&UNK_10db91d18);
  func_0x000107c613fc();
  pcVar4 = FUN_10315cc40;
  func_0x0001000841fc(FUN_10315cc40,puVar2,uVar3);
  func_0x000100084214(&UNK_10db91ce0,0x33,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10315c934; end: 10315cc3f;  */

void FUN_10315c934(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f45898,&UNK_10db91d20);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10315d994();
  func_0x000100082720("LensTalkVideoHandlingScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f458a0,&UNK_10db91d30);
  puVar3 = &UNK_1106149d8;
  func_0x000107c613fc(&UNK_1106149d8,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar9 = 0x10315cc48;
  func_0x0001000823a8(0x10315cc48,puVar3);
  func_0x000100082720("SCLensTalkVideoHandlingEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10315c570;
  func_0x0001000823a8(FUN_10315c570,0);
  func_0x000100082720("SCLensTalkVideoHandlingScopedServicesCleanupRelayServiceProvider",0x40,2);
  func_0x0001000285a8(0x112f458a8,&UNK_10db91d28);
  puVar3 = &UNK_110614a00;
  func_0x000107c613fc(&UNK_110614a00,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x10315cc54;
  func_0x0001000823a8(0x10315cc54,puVar3);
  func_0x000100082720("SCLensTalkVideoHandlingScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112f45820,&UNK_10db91a70);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x10315cc60;
  func_0x0001000823a8(0x10315cc60,uVar5);
  func_0x000100082720("SCLensTalkVideoHandlingScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f45810,&UNK_10db91a60);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x10315cc68;
  func_0x0001000823a8(0x10315cc68,uVar6);
  func_0x000100082720("SCLensTalkVideoHandlingScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110614a28;
  func_0x000107c613fc(&UNK_110614a28,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_10315cc9c;
  func_0x0001000823a8(FUN_10315cc9c,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCLensTalkVideoHandlingScopeEntryPointProvider",0x2e,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 10315cc40; end: 10315cc6f;  */

void FUN_10315cc40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f45898,&UNK_10db91d20);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10315d994();
  func_0x000100082720("LensTalkVideoHandlingScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f458a0,&UNK_10db91d30);
  puVar3 = &UNK_1106149d8;
  func_0x000107c613fc(&UNK_1106149d8,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar6);
  uVar4 = 0x10315cc48;
  func_0x0001000823a8(0x10315cc48,puVar3);
  func_0x000100082720("SCLensTalkVideoHandlingEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_10315c570;
  func_0x0001000823a8(FUN_10315c570,0);
  func_0x000100082720("SCLensTalkVideoHandlingScopedServicesCleanupRelayServiceProvider",0x40,2);
  func_0x0001000285a8(0x112f458a8,&UNK_10db91d28);
  puVar3 = &UNK_110614a00;
  func_0x000107c613fc(&UNK_110614a00,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(code **)(puVar3 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x10315cc54;
  func_0x0001000823a8(0x10315cc54,puVar3);
  func_0x000100082720("SCLensTalkVideoHandlingScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112f45820,&UNK_10db91a70);
  func_0x000107c6157c(uVar6);
  uVar9 = 0x10315cc60;
  func_0x0001000823a8(0x10315cc60,uVar6);
  func_0x000100082720("SCLensTalkVideoHandlingScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f45810,&UNK_10db91a60);
  func_0x000107c6157c(uVar9);
  uVar7 = 0x10315cc68;
  func_0x0001000823a8(0x10315cc68,uVar9);
  func_0x000100082720("SCLensTalkVideoHandlingScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110614a28;
  func_0x000107c613fc(&UNK_110614a28,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  pcVar8 = FUN_10315cc9c;
  func_0x0001000823a8(FUN_10315cc9c,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCLensTalkVideoHandlingScopeEntryPointProvider",0x2e,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 10315cc70; end: 10315cc9b;  */

void FUN_10315cc70(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10315cc9c; end: 10315cca3;  */

void FUN_10315cc9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110614810;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110614810;
  return;
}



/* Entry: 10315cca4; end: 10315cd53;  */

void FUN_10315cca4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_10315d0a0();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10315cee8(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c615e8(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10315cd54; end: 10315cdc3;  */

undefined8 FUN_10315cd54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_10315cee8(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 10315cdc4; end: 10315cdf7;  */

void FUN_10315cdc4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10315cdf8; end: 10315cdff;  */

undefined8 FUN_10315cdf8(void)

{
  return 0x1b;
}



/* Entry: 10315ce00; end: 10315ce83;  */

void FUN_10315ce00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10315d0e0,param_2,FUN_10315d0e4,param_2,FUN_10315d10c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10315ce84; end: 10315ced3;  */

undefined8 FUN_10315ce84(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10315ced4; end: 10315cee7;  */

void FUN_10315ced4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110614a40;
  return;
}



/* Entry: 10315cee8; end: 10315d083;  */

void FUN_10315cee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126acce0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f129700);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f129720);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f129740);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10315d084; end: 10315d09f;  */

undefined ** FUN_10315d084(void)

{
  return &PTR_DAT_112f46510;
}



/* Entry: 10315d0a0; end: 10315d0bf;  */

void FUN_10315d0a0(void)

{
  func_0x000107c61168(&PTR_PTR_112f45918);
  return;
}



/* Entry: 10315d0c0; end: 10315d0e3;  */

undefined1  [16] FUN_10315d0c0(void)

{
  return ZEXT816(0x110614a80);
}



/* Entry: 10315d0e4; end: 10315d10b;  */

void FUN_10315d0e4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10315d10c; end: 10315d113;  */

undefined8 FUN_10315d10c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10315d114; end: 10315d14f;  */

void FUN_10315d114(undefined8 *param_1,undefined8 param_2)

{
  FUN_10315d150();
  func_0x0001000a7f38("SCLensTalkVideoHandlingScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10315d150; end: 10315d33b;  */

void FUN_10315d150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110616188;
  ppuVar4 = &PTR_DAT_112f46510;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110614ad0;
  func_0x000107c613fc(&UNK_110614ad0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f45988;
  func_0x0001000285a8(0x112f45988,&UNK_10db91e80);
  func_0x0001000a6ee8(&UNK_110614ce8,
                      "LensTalkVideoHandlingScopeGraphBridgeScopeInitializationPluginKey",0x41,2,
                      FUN_10315d33c,puVar2,uVar3,&UNK_110614ce8,&PTR_DAT_112f45a18);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110614a80,
                      "SCLensTalkVideoHandlingEntryPointWrapperScopeInitializationPluginKey",0x44,2,
                      FUN_10315d3f0,param_3,uVar3,&UNK_110614a80,&PTR_DAT_112f458b0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110614af8;
  func_0x000107c613fc(&UNK_110614af8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106148a0,
                      "SCLensTalkVideoHandlingScopedServicesScopeInitializationPluginKey",0x41,2,
                      FUN_10315d4a0,puVar2,uVar3,&UNK_1106148a0,&PTR_DAT_112f45828);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f45990;
  func_0x0001000285a8(0x112f45990,&UNK_10db91e88);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10315d33c; end: 10315d37b;  */

void FUN_10315d33c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10315da78(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensTalkVideoHandlingScopeGraphBridgeScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10315d37c; end: 10315d3ef;  */

void FUN_10315d37c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10315d4dc;
  func_0x0001000823a8(0x10315d4dc,param_3);
  func_0x000100082720("SCLensTalkVideoHandlingEntryPointWrapperScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10315d3f0; end: 10315d3f7;  */

void FUN_10315d3f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10315d4dc;
  func_0x0001000823a8();
  func_0x000100082720("SCLensTalkVideoHandlingEntryPointWrapperScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10315d3f8; end: 10315d49f;  */

void FUN_10315d3f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110614b20;
  func_0x000107c613fc(&UNK_110614b20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10315d4d4;
  func_0x0001000823a8(FUN_10315d4d4,puVar1);
  func_0x000100082720("SCLensTalkVideoHandlingScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10315d4a0; end: 10315d4a7;  */

void FUN_10315d4a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110614b20;
  func_0x000107c613fc(&UNK_110614b20,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10315d4d4;
  func_0x0001000823a8(FUN_10315d4d4,puVar3);
  func_0x000100082720("SCLensTalkVideoHandlingScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10315d4a8; end: 10315d4d3;  */

void FUN_10315d4a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10397a598; end: 10397a5ff;  */

/* WARNING: Possible PIC construction at 0x00010397a5ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010397a5f0) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10397a598(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == 0) {
    FUN_10397cb5c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    param_1 = 0;
    func_0x000107c6010c(0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_fulfillWithSuccessValue__1125cc768,param_1);
  return;
}



/* Entry: 10397a600; end: 10397a7ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397a600(long param_1)

{
  undefined8 uVar1;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112fba9c0);
    func_0x000107c6157c(uVar1);
    func_0x0001000d224c(&lStack_50);
    func_0x000107c61574(uVar1);
    if (lStack_50 != 0) {
      func_0x000103c4e3c4(0);
      uVar1 = *(undefined8 *)(param_1 + _DAT_112fba9b8);
      func_0x000107c61174(uVar1);
      func_0x000103c4b33c(lStack_50,uVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lStack_50);
      func_0x000107c61170(uVar1);
      return;
    }
    func_0x000107c61170(param_1);
  }
  func_0x000107c610f8(PTR_PTR_1126d6d68);
  func_0x000107c453e4();
  return;
}



/* Entry: 10397a7ac; end: 10397a93b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397a7ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar6 - extraout_x12;
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  lVar2 = param_1 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112fbaa10;
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + _DAT_112fbaa10,auStack_80,0,0);
    lVar3 = *(long *)(lVar2 + lVar3);
    if (lVar3 != 0) {
      func_0x000107c61174();
      func_0x000107c61170(lVar2);
      lVar4 = *(long *)(lVar3 + _DAT_112fbab88);
      func_0x000107c3abfc();
      func_0x000107c61180();
      lVar2 = lVar3;
      if (lVar4 != 0) {
        func_0x000107c5edb4(puVar6);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar3);
        (**(code **)(lVar7 + 0x20))(lVar5,puVar6,lVar1);
        func_0x000107c61428(param_1 + 0x10,auStack_98,0,0);
        param_1 = param_1 + 0x10;
        func_0x000107c61618();
        if (param_1 != 0) {
          FUN_10397a93c(lVar5);
          func_0x000107c61170(param_1);
        }
        (**(code **)(lVar7 + 8))(lVar5,lVar1);
        return;
      }
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10397a93c; end: 10397ac07;  */

void FUN_10397a93c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 unaff_x20;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_a8 = param_1;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar1 + -8);
  lVar12 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar2 = PTR_PTR_1126c9d18;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(long *)(lVar3 + 0x38) = lVar1;
  FUN_10397cd60(lVar3 + 0x20);
  pcVar11 = *(code **)(lVar15 + 0x10);
  (*pcVar11)();
  lVar4 = 0x112f39088;
  FUN_10397bf00(0x112f39088,&PTR__OBJC_CLASS___UIActivity_1126acb48,0x112f39b78,&UNK_10dc2c070);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 3;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined **)(lVar4 + 0x20) = puVar2;
  puVar5 = PTR__OBJC_CLASS___UIActivityViewController_1126c9cc8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIActivityViewController_1126c9cc8);
  func_0x000107c61174();
  lVar6 = lVar3;
  puStack_a0 = puVar2;
  func_0x000107c5fc48(lVar3,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61574(lVar3);
  uVar7 = 0;
  FUN_10397cb5c(0,0x112f39088,&PTR__OBJC_CLASS___UIActivity_1126acb48);
  lVar3 = lVar4;
  func_0x000107c5fc48(lVar4,uVar7);
  func_0x000107c61574(lVar4);
  func_0x000107c4555c(puVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar3);
  puVar2 = &UNK_1106b39c8;
  func_0x000107c613fc(&UNK_1106b39c8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,unaff_x20);
  (*pcVar11)(auStack_b0 + -(lVar12 + 0xfU & 0xfffffffffffffff0),uStack_a8,lVar1);
  uVar10 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar14 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar8 = &UNK_1106b3bd0;
  func_0x000107c613fc(&UNK_1106b3bd0,uVar13 + 8,uVar10 | 7);
  (**(code **)(lVar15 + 0x20))
            (puVar8 + uVar14,auStack_b0 + -(lVar12 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(puVar8 + uVar13) = puVar2;
  pcStack_70 = FUN_10397cb9c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1014fada0;
  puStack_78 = &UNK_1106b3be8;
  ppuVar9 = &puStack_90;
  puStack_68 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_68);
  func_0x000107c5363c(puVar5);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c4f018(unaff_x20);
  func_0x000107c61170(puStack_a0);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 10397ac08; end: 10397accf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397ac08(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    func_0x0001000d224c(&uStack_50);
    uVar2 = uStack_50;
    func_0x000107c451bc(uStack_50);
    func_0x000107c615e8(uStack_50);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c6157c(param_1);
  func_0x000103979734(0xd000000000000015,0x800000010f17e130,uVar2,0x10397cb4c,param_1);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 10397acd0; end: 10397aec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397acd0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112fbaa10;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112fbaa10,auStack_70,0,0);
    lVar2 = *(long *)(param_1 + lVar2);
    if (lVar2 != 0) {
      func_0x000107c61174();
      func_0x000107c61170(param_1);
      FUN_10397dbcc(puVar7);
      func_0x000107c61170(lVar2);
      puVar3 = puVar7;
      (**(code **)(lVar8 + 0x30))(puVar7,1,lVar1);
      if ((int)puVar3 != 1) {
        (**(code **)(lVar8 + 0x20))(lVar6,puVar7,lVar1);
        puVar4 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
        func_0x000107c61168(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
        func_0x000107c43d80();
        func_0x000107c61180();
        puVar5 = puVar4;
        func_0x000107c5ed90();
        func_0x000107c5a120(puVar4);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar5);
        puVar4 = PTR_PTR_1126a6d58;
        func_0x000107c610f8(PTR_PTR_1126a6d58);
        func_0x000107c453e4();
        func_0x000107bc18fc();
        func_0x000107c61170(puVar4);
        (**(code **)(lVar8 + 8))(lVar6,lVar1);
        return;
      }
      goto LAB_10397ae98;
    }
    func_0x000107c61170(param_1);
  }
  (**(code **)(lVar8 + 0x38))(puVar7,1,1,lVar1);
LAB_10397ae98:
  FUN_10397cc24(puVar7,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 10397aec8; end: 10397af8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397aec8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    func_0x0001000d224c(&uStack_50);
    uVar2 = uStack_50;
    func_0x000107c451bc(uStack_50);
    func_0x000107c615e8(uStack_50);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c6157c(param_1);
  func_0x000103979734(0xd000000000000020,0x800000010f17e100,uVar2,FUN_10397cb44,param_1);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 10397af90; end: 10397b03b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397af90(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126a6d58;
    func_0x000107c610f8(PTR_PTR_1126a6d58);
    func_0x000107c453e4();
    func_0x000107bc1974();
    func_0x000107c61170(puVar1);
    lVar2 = param_1 + _DAT_112fbaa30;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c4ef78();
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10397b03c; end: 10397b133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397b03c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  else {
    func_0x0001000d224c(&uStack_60);
    uVar3 = uStack_60;
    func_0x000107c451bc(uStack_60);
    func_0x000107c615e8(uStack_60);
    func_0x000107c61170(lVar1);
  }
  puVar2 = &UNK_1106b3b30;
  func_0x000107c613fc(&UNK_1106b3b30,0x20,7);
  *(long *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c615f0(param_2);
  func_0x000103979734(0xd000000000000011,0x800000010f17e0e0,uVar3,FUN_10397ca40,puVar2);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 10397b134; end: 10397b2ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397b134(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar7 - extraout_x12;
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112fbaa10;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112fbaa10,auStack_80,0,0);
    lVar2 = *(long *)(param_1 + lVar2);
    if (lVar2 != 0) {
      lVar8 = *(long *)(lVar2 + _DAT_112fbab88);
      func_0x000107c61174();
      func_0x000107c3abfc();
      func_0x000107c61180();
      if (lVar8 == 0) {
        func_0x000107c61170(lVar2);
      }
      else {
        func_0x000107c5edb4(puVar7);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar2);
        (**(code **)(lVar9 + 0x20))(lVar6,puVar7,lVar1);
        uVar3 = param_2;
        func_0x000107c4a3e8();
        if ((uVar3 & 1) == 0) {
          puVar4 = PTR_PTR_1126aead8;
          func_0x000107c610f8(PTR_PTR_1126aead8);
          func_0x000107c4807c();
          puVar5 = puVar4;
          func_0x000107c5ed90();
          func_0x000107c5a988(param_2);
          func_0x000107c61170(param_1);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar5);
          (**(code **)(lVar9 + 8))(lVar6,lVar1);
          return;
        }
        (**(code **)(lVar9 + 8))(lVar6,lVar1);
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10397b300; end: 10397b44f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397b300(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  puVar1 = PTR_PTR_1126d6d78;
  func_0x000107c610f8(PTR_PTR_1126d6d78);
  func_0x000107c45528();
  puVar2 = puVar1;
  func_0x000107c5ed70();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c5a26c(puVar1);
  func_0x000107c61170(puVar2);
  if (param_4 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000107c614cc(param_4,auStack_60,auStack_78);
    uVar3 = uStack_68;
    func_0x000107c60640(uStack_70,uStack_68);
    uVar4 = uStack_70;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
  func_0x000107c54654(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61428(param_6 + 0x10,auStack_58,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61618();
  if (param_6 != 0) {
    uVar4 = *(undefined8 *)(param_6 + _DAT_112fba9c8);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(param_6);
    func_0x000107c4b9c4(uVar4);
    func_0x000107c615e8(uVar4);
  }
  puVar2 = PTR_PTR_1126a6d58;
  func_0x000107c610f8(PTR_PTR_1126a6d58);
  func_0x000107c453e4();
  func_0x000107bc11b8();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 10397b450; end: 10397b533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397b450(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (*(char *)(param_3 + _DAT_112fbaa70) == '\x01') {
      puVar1 = &UNK_1106b3cc0;
      func_0x000107c613fc(&UNK_1106b3cc0,0x18,7);
      *(long *)(puVar1 + 0x10) = param_3;
      func_0x000107c61174(param_3);
      uVar2 = 6;
      func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc2c088,puVar1,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(uVar2);
    }
    else {
      FUN_10397b534();
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10397b534; end: 10397b767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397b534(void)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar6 - extraout_x12;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = lVar7 - extraout_x12_00;
  uVar2 = uVar5;
  (**(code **)(lVar10 + 0x10))(uVar5,unaff_x20 + _DAT_112fba988,lVar1);
  FUN_10397ba40();
  if ((uVar2 & 1) != 0) {
    func_0x000103c524b0(lVar8);
    func_0x0001001021cc(lVar8,puVar6);
    pcVar9 = *(code **)(lVar10 + 0x30);
    puVar3 = puVar6;
    (*pcVar9)(puVar6,1,lVar1);
    if ((int)puVar3 == 1) {
      pcVar4 = *(code **)(lVar10 + 0x20);
      (*pcVar4)(lVar7,uVar5,lVar1);
      puVar3 = puVar6;
      (*pcVar9)(puVar6,1,lVar1);
      if ((int)puVar3 != 1) {
        FUN_10397cc24(puVar6,0x112d36580,&UNK_10d9016d0);
      }
    }
    else {
      (**(code **)(lVar10 + 8))(uVar5,lVar1);
      pcVar4 = *(code **)(lVar10 + 0x20);
      (*pcVar4)(lVar7,puVar6,lVar1);
    }
    (*pcVar4)(uVar5,lVar7,lVar1);
  }
  lVar7 = _DAT_112fbaa10;
  func_0x000107c61428(unaff_x20 + _DAT_112fbaa10,auStack_68,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (lVar7 == 0) {
    (**(code **)(lVar10 + 8))(uVar5,lVar1);
    func_0x000107c614a8(auStack_68);
  }
  else {
    func_0x000107c614a8(auStack_68);
    func_0x000107c61174(lVar7);
    FUN_10397d968(uVar5);
    func_0x000107c61170(lVar7);
    (**(code **)(lVar10 + 8))(uVar5,lVar1);
  }
  return;
}



/* Entry: 10397b768; end: 10397b7df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397b768(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  uVar3 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  lVar2 = _DAT_112fba988;
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10397b7e0;
  plVar4[0xc] = param_2 + lVar2;
  plVar4[0xd] = param_2;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar4[0xe] = lVar1;
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar4[0xf] = lVar2;
  func_0x000100eea164();
  plVar4[0x10] = lVar2;
  func_0x000107c5fca8();
  plVar4[0x11] = lVar1;
  plVar4[0x12] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103978c38,lVar1,lVar2);
  return;
}



/* Entry: 10397b7e0; end: 10397b833;  */

void FUN_10397b7e0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x30) = param_1;
  *(undefined1 *)(lVar1 + 0x48) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10397b834,0,0);
  return;
}



/* Entry: 10397b834; end: 10397b897;  */

void FUN_10397b834(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  func_0x000107c5fca8(uVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10397b898,uVar1,param_1);
  return;
}



/* Entry: 10397b898; end: 10397b927;  */

/* WARNING: Removing unreachable block (ram,0x00010397b8d8) */

void FUN_10397b898(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  FUN_10397b958(uVar2,uVar1,uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10397b928,uVar2,uVar3);
  return;
}



/* Entry: 10397b928; end: 10397b957;  */

void FUN_10397b928(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010397b954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10397b958; end: 10397ba3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397b958(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (((uint)param_2 & 0xff) == 1 || param_1 == 0) {
    FUN_10397b534();
  }
  else {
    FUN_103978f98();
    puVar1 = PTR_PTR_1126d6d78;
    func_0x000107c610f8(PTR_PTR_1126d6d78);
    func_0x000107c45528();
    puVar2 = puVar1;
    func_0x000107c5ed70(_DAT_112fba988);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    func_0x000107c5a26c(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c4b9c4(*(undefined8 *)(param_3 + _DAT_112fba9c8));
    puVar2 = PTR_PTR_1126a6d58;
    func_0x000107c610f8(PTR_PTR_1126a6d58);
    func_0x000107c453e4();
    func_0x000107bc10c8();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 10397ba40; end: 10397be87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10397ba40(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  uint uVar7;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_840 [8];
  undefined1 auStack_838 [200];
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_840 + -extraout_x8;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_112fba990);
  func_0x000101424ef0(&uStack_1e8);
  uStack_3a8 = puVar4[0x13];
  uStack_3b0 = puVar4[0x12];
  uStack_78 = puVar4[0x15];
  uStack_80 = puVar4[0x14];
  uStack_398 = puVar4[0x15];
  uStack_3a0 = puVar4[0x14];
  uStack_68 = puVar4[0x17];
  uStack_70 = puVar4[0x16];
  uStack_3e8 = puVar4[0xb];
  uStack_3f0 = puVar4[10];
  uStack_b8 = puVar4[0xd];
  uStack_c0 = puVar4[0xc];
  uStack_3d8 = puVar4[0xd];
  uStack_3e0 = puVar4[0xc];
  uStack_a8 = puVar4[0xf];
  uStack_b0 = puVar4[0xe];
  uStack_3c8 = puVar4[0xf];
  uStack_3d0 = puVar4[0xe];
  uStack_98 = puVar4[0x11];
  uStack_a0 = puVar4[0x10];
  uStack_3b8 = puVar4[0x11];
  uStack_3c0 = puVar4[0x10];
  uStack_88 = puVar4[0x13];
  uStack_90 = puVar4[0x12];
  uStack_428 = puVar4[3];
  uStack_430 = puVar4[2];
  uStack_f8 = puVar4[5];
  uStack_100 = puVar4[4];
  uStack_418 = puVar4[5];
  uStack_420 = puVar4[4];
  uStack_e8 = puVar4[7];
  uStack_f0 = puVar4[6];
  uStack_408 = puVar4[7];
  uStack_410 = puVar4[6];
  uStack_d8 = puVar4[9];
  uStack_e0 = puVar4[8];
  uStack_3f8 = puVar4[9];
  uStack_400 = puVar4[8];
  uStack_c8 = puVar4[0xb];
  uStack_d0 = puVar4[10];
  uStack_118 = puVar4[1];
  uStack_120 = *puVar4;
  uStack_108 = puVar4[3];
  uStack_110 = puVar4[2];
  uStack_438 = puVar4[1];
  uStack_440 = *puVar4;
  uStack_388 = puVar4[0x17];
  uStack_390 = puVar4[0x16];
  iVar2 = (int)&uStack_378;
  uStack_2d0 = uStack_140;
  uStack_2d8 = uStack_148;
  uStack_2c0 = uStack_130;
  uStack_2c8 = uStack_138;
  uStack_310 = uStack_180;
  uStack_318 = uStack_188;
  uStack_300 = uStack_170;
  uStack_308 = uStack_178;
  uStack_2f0 = uStack_160;
  uStack_2f8 = uStack_168;
  uStack_2e0 = uStack_150;
  uStack_2e8 = uStack_158;
  uStack_330 = uStack_1a0;
  uStack_338 = uStack_1a8;
  uStack_320 = uStack_190;
  uStack_328 = uStack_198;
  uStack_360 = uStack_1d0;
  uStack_368 = uStack_1d8;
  uStack_350 = uStack_1c0;
  uStack_358 = uStack_1c8;
  uStack_340 = uStack_1b0;
  uStack_348 = uStack_1b8;
  uStack_60 = puVar4[0x18];
  uStack_380 = puVar4[0x18];
  uStack_2b8 = uStack_128;
  uStack_370 = uStack_1e0;
  uStack_378 = uStack_1e8;
  iVar1 = (int)&uStack_440;
  func_0x000101424a7c();
  if (iVar1 == 1) {
    func_0x000101424a7c();
    if (iVar2 == 1) {
      uStack_528 = uStack_398;
      uStack_530 = uStack_3a0;
      uStack_518 = uStack_388;
      uStack_520 = uStack_390;
      uStack_510 = uStack_380;
      uStack_568 = uStack_3d8;
      uStack_570 = uStack_3e0;
      uStack_558 = uStack_3c8;
      uStack_560 = uStack_3d0;
      uStack_548 = uStack_3b8;
      uStack_550 = uStack_3c0;
      uStack_538 = uStack_3a8;
      uStack_540 = uStack_3b0;
      uStack_5a8 = uStack_418;
      uStack_5b0 = uStack_420;
      uStack_598 = uStack_408;
      uStack_5a0 = uStack_410;
      uStack_588 = uStack_3f8;
      uStack_590 = uStack_400;
      uStack_578 = uStack_3e8;
      uStack_580 = uStack_3f0;
      uStack_5c8 = uStack_438;
      uStack_5d0 = uStack_440;
      uStack_5b8 = uStack_428;
      uStack_5c0 = uStack_430;
      func_0x000101424f14(&uStack_120,&uStack_2b0);
      FUN_10397cc24(&uStack_5d0,0x112d7e768,&UNK_10d93c7c0);
LAB_10397bdb8:
      uVar7 = 0;
      if ((*(uint *)(unaff_x20 + _DAT_112fba9a0) < 0x21) &&
         ((1L << ((ulong)*(uint *)(unaff_x20 + _DAT_112fba9a0) & 0x3f) & 0x140000400U) != 0)) {
        func_0x000103c545f4(0);
        lVar3 = _DAT_112fba988;
        lVar5 = 0;
        func_0x000107c5ede0();
        lVar9 = *(long *)(lVar5 + -8);
        (**(code **)(lVar9 + 0x10))(puVar8,unaff_x20 + lVar3,lVar5);
        (**(code **)(lVar9 + 0x38))(puVar8,0,1,lVar5);
        puVar6 = puVar8;
        func_0x000103c51464(puVar8);
        FUN_10397cc24(puVar8,0x112d36580,&UNK_10d9016d0);
        uVar7 = (uint)puVar6 ^ 1;
      }
      goto LAB_10397be68;
    }
LAB_10397bc80:
    func_0x000107c610b4(&uStack_5d0,&uStack_440,400);
    func_0x000101424f14(&uStack_120,&uStack_2b0);
    FUN_10397cc24(&uStack_5d0,0x112fbaa08,&UNK_10dc2bf10);
  }
  else {
    uStack_5f8 = uStack_398;
    uStack_600 = uStack_3a0;
    uStack_5e8 = uStack_388;
    uStack_5f0 = uStack_390;
    uStack_5e0 = uStack_380;
    uStack_638 = uStack_3d8;
    uStack_640 = uStack_3e0;
    uStack_628 = uStack_3c8;
    uStack_630 = uStack_3d0;
    uStack_618 = uStack_3b8;
    uStack_620 = uStack_3c0;
    uStack_608 = uStack_3a8;
    uStack_610 = uStack_3b0;
    uStack_678 = uStack_418;
    uStack_680 = uStack_420;
    uStack_668 = uStack_408;
    uStack_670 = uStack_410;
    uStack_658 = uStack_3f8;
    uStack_660 = uStack_400;
    uStack_648 = uStack_3e8;
    uStack_650 = uStack_3f0;
    uStack_698 = uStack_438;
    uStack_6a0 = uStack_440;
    uStack_688 = uStack_428;
    uStack_690 = uStack_430;
    func_0x000101424a7c();
    if (iVar2 == 1) goto LAB_10397bc80;
    uStack_6c8 = uStack_2d0;
    uStack_6d0 = uStack_2d8;
    uStack_6b8 = uStack_2c0;
    uStack_6c0 = uStack_2c8;
    uStack_708 = uStack_310;
    uStack_710 = uStack_318;
    uStack_6f8 = uStack_300;
    uStack_700 = uStack_308;
    uStack_6e8 = uStack_2f0;
    uStack_6f0 = uStack_2f8;
    uStack_6d8 = uStack_2e0;
    uStack_6e0 = uStack_2e8;
    uStack_748 = uStack_350;
    uStack_750 = uStack_358;
    uStack_738 = uStack_340;
    uStack_740 = uStack_348;
    uStack_728 = uStack_330;
    uStack_730 = uStack_338;
    uStack_718 = uStack_320;
    uStack_720 = uStack_328;
    uStack_768 = uStack_370;
    uStack_770 = uStack_378;
    uStack_758 = uStack_360;
    uStack_760 = uStack_368;
    uStack_528 = uStack_2d0;
    uStack_530 = uStack_2d8;
    uStack_518 = uStack_2c0;
    uStack_520 = uStack_2c8;
    uStack_568 = uStack_310;
    uStack_570 = uStack_318;
    uStack_558 = uStack_300;
    uStack_560 = uStack_308;
    uStack_548 = uStack_2f0;
    uStack_550 = uStack_2f8;
    uStack_538 = uStack_2e0;
    uStack_540 = uStack_2e8;
    uStack_5a8 = uStack_350;
    uStack_5b0 = uStack_358;
    uStack_598 = uStack_340;
    uStack_5a0 = uStack_348;
    uStack_588 = uStack_330;
    uStack_590 = uStack_338;
    uStack_578 = uStack_320;
    uStack_580 = uStack_328;
    uStack_6b0 = uStack_2b8;
    uStack_510 = uStack_2b8;
    uStack_5c8 = uStack_370;
    uStack_5d0 = uStack_378;
    uStack_5b8 = uStack_360;
    uStack_5c0 = uStack_368;
    uStack_208 = uStack_5f8;
    uStack_210 = uStack_600;
    uStack_1f8 = uStack_5e8;
    uStack_200 = uStack_5f0;
    uStack_1f0 = uStack_5e0;
    uStack_248 = uStack_638;
    uStack_250 = uStack_640;
    uStack_238 = uStack_628;
    uStack_240 = uStack_630;
    uStack_228 = uStack_618;
    uStack_230 = uStack_620;
    uStack_218 = uStack_608;
    uStack_220 = uStack_610;
    uStack_288 = uStack_678;
    uStack_290 = uStack_680;
    uStack_278 = uStack_668;
    uStack_280 = uStack_670;
    uStack_268 = uStack_658;
    uStack_270 = uStack_660;
    uStack_258 = uStack_648;
    uStack_260 = uStack_650;
    uStack_2a8 = uStack_698;
    uStack_2b0 = uStack_6a0;
    uStack_298 = uStack_688;
    uStack_2a0 = uStack_690;
    func_0x000101424f14(&uStack_120,auStack_838);
    puVar4 = &uStack_2b0;
    func_0x000104641a24(puVar4,&uStack_5d0);
    FUN_10397cc24(&uStack_770,0x112d7e768,&UNK_10d93c7c0);
    FUN_10397cc24(&uStack_440,0x112d7e768,&UNK_10d93c7c0);
    if (((ulong)puVar4 & 1) != 0) goto LAB_10397bdb8;
  }
  uVar7 = 0;
LAB_10397be68:
  return uVar7 & 1;
}



/* Entry: 10397be88; end: 10397be8b; -[_TtC10WebBrowser24WebBrowserViewController cardToExpandTransition] */

void FUN_10397be88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10397be8c; end: 10397be93; -[_TtC10WebBrowser24WebBrowserViewController cardTransitionShouldBeginWithView:touchLocation:] */

undefined8 FUN_10397be8c(void)

{
  return 0;
}



/* Entry: 10397be94; end: 10397bed7; -[_TtC10WebBrowser24WebBrowserViewController cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397be94(long param_1)

{
  param_1 = param_1 + _DAT_112fbaa00;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c420b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10397bed8; end: 10397beff;  */

void FUN_10397bed8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbaae0 == (undefined *)0x0 || ((ulong)puRam0000000112fbaae0 & 1) != 0) {
    puVar1 = &UNK_10e9ace0c;
    func_0x000107c61518(&UNK_10e9ace0c,0x2e,0,0);
    puRam0000000112fbaae0 = puVar1;
  }
  return;
}



/* Entry: 10397bf00; end: 10397bf77;  */

void FUN_10397bf00(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10397cb5c(0,param_1,param_2);
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



/* Entry: 10397bf78; end: 10397c71b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10397bf78(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                    undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
                    undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                    undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                    undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                    undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                    undefined8 param_29,undefined4 param_30,undefined4 param_31,undefined8 param_32,
                    undefined8 param_33,undefined8 param_34,long param_35,long param_36,
                    long param_37,undefined8 param_38,undefined8 param_39)

{
  long lVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_190;
  long lStack_188;
  undefined *apuStack_180 [25];
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  
  lVar6 = param_35;
  func_0x000107c614f0();
  lStack_78 = param_37;
  uStack_70 = param_39;
  FUN_10397cd60(auStack_90);
  (**(code **)(*(long *)(param_37 + -8) + 0x20))();
  lStack_a0 = param_36;
  uStack_98 = param_38;
  FUN_10397cd60(auStack_b8);
  (**(code **)(*(long *)(param_36 + -8) + 0x20))();
  *(undefined8 *)(param_35 + _DAT_112fbaa10) = 0;
  lVar5 = _DAT_112fbaa30;
  func_0x000107c61614(param_35 + _DAT_112fbaa30,0);
  lVar1 = param_35 + _DAT_112fbaa00;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(param_35 + _DAT_112fbaa28) = 0;
  lVar4 = _DAT_112fbaa58;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  apuStack_180[0] = puVar7;
  func_0x0001000285a8(0x112dd0d28,&UNK_10d992170);
  func_0x000107c613fc();
  ppuVar8 = apuStack_180;
  func_0x00010042e6a0();
  *(undefined ***)(param_35 + lVar4) = ppuVar8;
  *(undefined8 *)(param_35 + _DAT_112fbaa98) = 0;
  *(undefined8 *)(param_35 + _DAT_112fbaa18) = param_15;
  *(undefined8 *)(param_35 + _DAT_112fba9a8) = param_14;
  lVar4 = _DAT_112fba988;
  lVar9 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar9 + -8);
  (**(code **)(lVar12 + 0x10))(param_35 + lVar4,param_1,lVar9);
  *(undefined1 *)(param_35 + _DAT_112fbaa70) = param_6;
  func_0x000107c61604(param_35 + lVar5,param_7);
  *(undefined8 *)(param_35 + _DAT_112fba9f8) = param_16;
  *(undefined8 *)(param_35 + _DAT_112fbaa78) = param_17;
  *(undefined8 *)(param_35 + _DAT_112fbaa40) = param_18;
  *(undefined8 *)(param_35 + _DAT_112fba9b8) = param_19;
  *(undefined8 *)(param_35 + _DAT_112fba9d0) = param_20;
  *(undefined8 *)(param_35 + _DAT_112fbaa80) = param_21;
  *(undefined8 *)(param_35 + _DAT_112fbaa48) = param_22;
  *(undefined8 *)(param_35 + _DAT_112fba9b0) = param_23;
  *(undefined8 *)(param_35 + _DAT_112fbaa50) = param_24;
  *(undefined8 *)(param_35 + _DAT_112fba9c0) = param_25;
  *(undefined8 *)(param_35 + _DAT_112fbaa68) = param_26;
  *(undefined8 *)(param_35 + _DAT_112fbaa60) = param_27;
  *(undefined8 *)(lVar1 + 8) = param_34;
  func_0x000107c61604(lVar1,param_33);
  puVar2 = (undefined8 *)(param_35 + _DAT_112fba990);
  uVar13 = param_2[0x14];
  uVar15 = param_2[0x17];
  uVar14 = param_2[0x16];
  puVar2[0x15] = param_2[0x15];
  puVar2[0x14] = uVar13;
  puVar2[0x17] = uVar15;
  puVar2[0x16] = uVar14;
  puVar2[0x18] = param_2[0x18];
  uVar13 = param_2[0xc];
  uVar15 = param_2[0xf];
  uVar14 = param_2[0xe];
  puVar2[0xd] = param_2[0xd];
  puVar2[0xc] = uVar13;
  puVar2[0xf] = uVar15;
  puVar2[0xe] = uVar14;
  uVar15 = param_2[0x10];
  uVar14 = param_2[0x13];
  uVar13 = param_2[0x12];
  puVar2[0x11] = param_2[0x11];
  puVar2[0x10] = uVar15;
  puVar2[0x13] = uVar14;
  puVar2[0x12] = uVar13;
  uVar13 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  puVar2[5] = param_2[5];
  puVar2[4] = uVar13;
  puVar2[7] = uVar15;
  puVar2[6] = uVar14;
  uVar15 = param_2[8];
  uVar14 = param_2[0xb];
  uVar13 = param_2[10];
  puVar2[9] = param_2[9];
  puVar2[8] = uVar15;
  puVar2[0xb] = uVar14;
  puVar2[10] = uVar13;
  uVar15 = *param_2;
  uVar14 = param_2[3];
  uVar13 = param_2[2];
  puVar2[1] = param_2[1];
  *puVar2 = uVar15;
  puVar2[3] = uVar14;
  puVar2[2] = uVar13;
  *(undefined8 *)(param_35 + _DAT_112fba9a0) = param_5;
  *(undefined8 *)(param_35 + _DAT_112fba9c8) = param_28;
  *(undefined8 *)(param_35 + _DAT_112fbaa20) = param_29;
  puVar3 = (undefined2 *)(param_35 + _DAT_112fbaa38);
  *(char *)(puVar3 + 1) = (char)((uint)param_30 >> 0x10);
  *puVar3 = (short)param_30;
  *(undefined8 *)(param_35 + _DAT_112fbaa88) = param_32;
  func_0x000107c615f0(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c61174(param_15);
  func_0x000107c615f0(param_14);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000101424f14(param_2,apuStack_180);
  func_0x000107c61174(param_32);
  func_0x000107c615f0(param_28);
  func_0x000107c6157c();
  func_0x00010b8373e4();
  func_0x000107c61180();
  *(undefined8 *)(param_35 + _DAT_112fbaa90) = param_29;
  puVar2 = (undefined8 *)(param_35 + _DAT_112fba998);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  *(undefined8 *)(param_35 + _DAT_112fba9d8) = param_8;
  FUN_10397c71c(auStack_90,param_35 + _DAT_112fba9e0);
  *(undefined8 *)(param_35 + _DAT_112fba9e8) = param_11;
  FUN_10397c71c(auStack_b8,param_35 + _DAT_112fba9f0);
  puVar7 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_190 = param_35;
  lStack_188 = lVar6;
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_11);
  plVar10 = &lStack_190;
  func_0x000107c61154(plVar10,puVar7,0,0);
  lVar1 = _DAT_112fbaa90;
  uVar13 = *(undefined8 *)((long)plVar10 + _DAT_112fbaa90);
  plVar11 = plVar10;
  func_0x000107c61174();
  func_0x000107c53224(uVar13);
  func_0x000107c54b74(0x3ff0000000000000,*(undefined8 *)((long)plVar10 + lVar1));
  func_0x000107c5a048(plVar11);
  func_0x000107c5677c(plVar11);
  func_0x000107c61170(plVar11);
  func_0x000107c615e8(param_7);
  (**(code **)(lVar12 + 8))(param_1,lVar9);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(auStack_90);
  return plVar11;
}



/* Entry: 10397c71c; end: 10397c75f;  */

long FUN_10397c71c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10397c760; end: 10397c7bb;  */

void FUN_10397c760(long param_1,long param_2)

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



/* Entry: 10397c7bc; end: 10397c7f3;  */

void FUN_10397c7bc(undefined8 param_1)

{
  if (lRam0000000112fbaac8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e79345c);
  return;
}



/* Entry: 10397c7f4; end: 10397ca13;  */

void FUN_10397c7f4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
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
  
  puStack_140 = &UNK_10dc2bf70;
  puStack_138 = &UNK_10dc2bf88;
  puStack_128 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_130 = &UNK_10dc2bfa0;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_120 = *(long *)(lVar1 + -8) + 0x40;
    puStack_118 = &UNK_10dc2bfb8;
    puStack_108 = PTR___sBOWV_11034d658 + 0x40;
    puStack_110 = &UNK_10dc2bfd0;
    puStack_f8 = PTR___sBoWV_11034d678 + 0x40;
    puStack_100 = &UNK_10dc2bfe8;
    puStack_a8 = &UNK_10dc2bf70;
    puStack_98 = &UNK_10dc2bf88;
    puStack_88 = &UNK_10dc2c000;
    puStack_80 = &UNK_10dc2bf70;
    puStack_78 = &UNK_10dc2bf70;
    puStack_70 = &UNK_10dc2bf88;
    puStack_68 = &UNK_10dc2c018;
    puStack_58 = &UNK_10dc2c030;
    puStack_48 = &UNK_10dc2c030;
    puStack_38 = &UNK_10dc2bf70;
    puStack_f0 = puStack_f8;
    puStack_e8 = puStack_108;
    puStack_e0 = puStack_108;
    puStack_d8 = puStack_f8;
    puStack_d0 = puStack_f8;
    puStack_c8 = puStack_f8;
    puStack_c0 = puStack_f8;
    puStack_b8 = puStack_f8;
    puStack_b0 = puStack_f8;
    puStack_a0 = puStack_f8;
    puStack_90 = puStack_f8;
    puStack_60 = puStack_108;
    puStack_50 = puStack_108;
    puStack_40 = puStack_f8;
    func_0x000107c61630(param_1,0x100,0x22,&puStack_140,param_1 + 0x50);
  }
  return;
}



/* Entry: 10397ca14; end: 10397ca3f;  */

void FUN_10397ca14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10397ca40; end: 10397ca47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397ca40(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar9 - extraout_x12;
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112fbaa10;
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + _DAT_112fbaa10,auStack_80,0,0);
    lVar4 = *(long *)(lVar3 + lVar4);
    if (lVar4 != 0) {
      lVar10 = *(long *)(lVar4 + _DAT_112fbab88);
      func_0x000107c61174();
      func_0x000107c3abfc();
      func_0x000107c61180();
      if (lVar10 == 0) {
        func_0x000107c61170(lVar4);
      }
      else {
        func_0x000107c5edb4(puVar9);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar4);
        (**(code **)(lVar11 + 0x20))(lVar8,puVar9,lVar2);
        uVar5 = uVar1;
        func_0x000107c4a3e8();
        if ((uVar5 & 1) == 0) {
          puVar6 = PTR_PTR_1126aead8;
          func_0x000107c610f8(PTR_PTR_1126aead8);
          func_0x000107c4807c();
          puVar7 = puVar6;
          func_0x000107c5ed90();
          func_0x000107c5a988(uVar1);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar7);
          (**(code **)(lVar11 + 8))(lVar8,lVar2);
          return;
        }
        (**(code **)(lVar11 + 8))(lVar8,lVar2);
      }
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10397ca48; end: 10397ca97;  */

void FUN_10397ca48(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10397ca98;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103979908,lVar1,lVar2);
  return;
}



/* Entry: 10397ca98; end: 10397cad3;  */

void FUN_10397ca98(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010397cad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10397cad4; end: 10397cb43;  */

void FUN_10397cad4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10397ce0c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10397cb44; end: 10397cb5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397cb44(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126a6d58;
    func_0x000107c610f8(PTR_PTR_1126a6d58);
    func_0x000107c453e4();
    func_0x000107bc1974();
    func_0x000107c61170(puVar2);
    lVar3 = lVar1 + _DAT_112fbaa30;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      func_0x000107c4ef78();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 10397cb5c; end: 10397cb9b;  */

void FUN_10397cb5c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10397cb9c; end: 10397cc13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397cb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar3 = 0;
  func_0x000107c5ede0();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xffffffffffffff8));
  puVar1 = PTR_PTR_1126d6d78;
  func_0x000107c610f8(PTR_PTR_1126d6d78,param_2,param_3,param_4,unaff_x20 + uVar5);
  func_0x000107c45528();
  puVar2 = puVar1;
  func_0x000107c5ed70();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c5a26c(puVar1);
  func_0x000107c61170(puVar2);
  if (param_4 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x000107c614cc(param_4,auStack_60,auStack_78);
    uVar4 = uStack_68;
    func_0x000107c60640(uStack_70,uStack_68);
    uVar6 = uStack_70;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c54654(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(lVar3 + _DAT_112fba9c8);
    func_0x000107c615f0(uVar6);
    func_0x000107c61170(lVar3);
    func_0x000107c4b9c4(uVar6);
    func_0x000107c615e8(uVar6);
  }
  puVar2 = PTR_PTR_1126a6d58;
  func_0x000107c610f8(PTR_PTR_1126a6d58);
  func_0x000107c453e4();
  func_0x000107bc11b8();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 10397cc14; end: 10397cc23;  */

/* WARNING: Possible PIC construction at 0x00010397a5ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010397a5f0) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10397cc14(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    FUN_10397cb5c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    param_1 = 0;
    func_0x000107c6010c(0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_fulfillWithSuccessValue__1125cc768,param_1);
  return;
}



/* Entry: 10397cc24; end: 10397cc63;  */

undefined8 FUN_10397cc24(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10397cc64; end: 10397ccbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397cc64(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10397ce10;
  plVar3[2] = lVar4;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[3] = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar1;
  lVar1 = _DAT_112fba988;
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  plVar3[5] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_10397b7e0;
  plVar2[0xc] = lVar4 + lVar1;
  plVar2[0xd] = lVar4;
  lVar4 = 0;
  func_0x000107c5fcec();
  plVar2[0xe] = lVar4;
  lVar1 = lVar4;
  func_0x000107c5fce8();
  plVar2[0xf] = lVar1;
  func_0x000100eea164();
  plVar2[0x10] = lVar1;
  func_0x000107c5fca8();
  plVar2[0x11] = lVar4;
  plVar2[0x12] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103978c38,lVar4,lVar1);
  return;
}



/* Entry: 10397ccbc; end: 10397ccc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397ccbc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + _DAT_112fbaa70) == '\x01') {
      puVar2 = &UNK_1106b3cc0;
      func_0x000107c613fc(&UNK_1106b3cc0,0x18,7);
      *(long *)(puVar2 + 0x10) = lVar1;
      func_0x000107c61174(lVar1);
      uVar3 = 6;
      func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc2c088,puVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(uVar3);
    }
    else {
      FUN_10397b534();
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10397ccc4; end: 10397cd1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397ccc4(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10397ce14;
  plVar3[2] = lVar4;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[3] = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar1;
  lVar1 = _DAT_112fba988;
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  plVar3[5] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_10397b7e0;
  plVar2[0xc] = lVar4 + lVar1;
  plVar2[0xd] = lVar4;
  lVar4 = 0;
  func_0x000107c5fcec();
  plVar2[0xe] = lVar4;
  lVar1 = lVar4;
  func_0x000107c5fce8();
  plVar2[0xf] = lVar1;
  func_0x000100eea164();
  plVar2[0x10] = lVar1;
  func_0x000107c5fca8();
  plVar2[0x11] = lVar4;
  plVar2[0x12] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103978c38,lVar4,lVar1);
  return;
}



/* Entry: 10397cd1c; end: 10397cd5f;  */

void FUN_10397cd1c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10397cd60; end: 10397cd9b;  */

long * FUN_10397cd60(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  plVar1 = param_1;
  if ((*(byte *)(*(long *)(lVar2 + -8) + 0x52) >> 1 & 1) != 0) {
    plVar1 = param_2;
    func_0x000107c613f4();
    *param_1 = lVar2;
  }
  return plVar1;
}



/* Entry: 10397cd9c; end: 10397ce17;  */

void FUN_10397cd9c(long param_1,long param_2)

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



/* Entry: 10397ce18; end: 10397d967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10397ce18(undefined8 param_1,long *param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  ulong **ppuVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long extraout_x8;
  long lVar14;
  long unaff_x20;
  uint uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 auStack_a00 [2];
  undefined2 uStack_9f0;
  undefined1 auStack_9ee [6];
  undefined8 auStack_9e8 [4];
  undefined1 auStack_9c8 [8];
  undefined8 uStack_9c0;
  undefined1 auStack_9b8 [8];
  undefined8 uStack_9b0;
  undefined1 auStack_9a8 [8];
  undefined8 uStack_9a0;
  undefined1 auStack_998 [8];
  undefined8 uStack_990;
  undefined1 auStack_988 [8];
  undefined8 uStack_980;
  undefined1 auStack_978 [8];
  undefined8 auStack_970 [2];
  undefined1 auStack_960 [8];
  undefined8 uStack_958;
  undefined4 auStack_950 [4];
  undefined1 auStack_940 [8];
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined1 auStack_898 [200];
  ulong *puStack_7d0;
  long lStack_7c8;
  long lStack_7c0;
  long lStack_7b8;
  long lStack_7b0;
  long lStack_7a8;
  long lStack_7a0;
  long lStack_798;
  long lStack_790;
  long lStack_788;
  long lStack_780;
  long lStack_778;
  long lStack_770;
  long lStack_768;
  long lStack_760;
  long lStack_758;
  long lStack_750;
  long lStack_748;
  long lStack_740;
  long lStack_738;
  long lStack_730;
  long lStack_728;
  long lStack_720;
  long lStack_718;
  long lStack_710;
  ulong *puStack_700;
  long lStack_6f8;
  long lStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  long lStack_6d8;
  long lStack_6d0;
  long lStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  long lStack_678;
  long lStack_670;
  long lStack_668;
  long lStack_660;
  long lStack_658;
  long lStack_650;
  long lStack_648;
  long lStack_640;
  undefined1 auStack_630 [16];
  ulong *puStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  ulong *puStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  ulong uStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  ulong *puStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  ulong *puStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  ulong *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar20 = 0x112d36580;
  uStack_930 = param_8;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = -extraout_x8;
  puVar13 = auStack_940 + lVar20;
  func_0x000107c610f8();
  lVar3 = _DAT_112fbaae8;
  func_0x000107c61614(unaff_x20 + _DAT_112fbaae8,0);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112fbaaf0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112fbaaf8) = puVar6;
  lVar21 = _DAT_112fbab00;
  puVar6 = PTR__OBJC_CLASS___UIRefreshControl_1126d6e28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar21) = puVar6;
  *(undefined1 *)(unaff_x20 + _DAT_112fbab08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fbab10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fbab18) = 0;
  lVar21 = _DAT_11380c040;
  lVar7 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar7 + -8);
  pcVar18 = *(code **)(lVar14 + 0x38);
  (*pcVar18)(unaff_x20 + lVar21,1,1);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fbab20);
  *(undefined4 *)((long)auStack_950 + lVar20) = 1;
  *(undefined8 *)((long)&uStack_958 + lVar20) = 0;
  auStack_960[lVar20] = 1;
  *(undefined8 *)((long)auStack_970 + lVar20 + 8) = 0;
  *(undefined8 *)((long)auStack_970 + lVar20) = 0;
  auStack_978[lVar20] = 1;
  *(undefined8 *)((long)&uStack_980 + lVar20) = 0;
  auStack_988[lVar20] = 1;
  *(undefined8 *)((long)&uStack_990 + lVar20) = 0;
  auStack_998[lVar20] = 1;
  *(undefined8 *)((long)&uStack_9a0 + lVar20) = 0;
  auStack_9a8[lVar20] = 1;
  *(undefined8 *)((long)&uStack_9b0 + lVar20) = 0;
  auStack_9b8[lVar20] = 1;
  *(undefined8 *)((long)&uStack_9c0 + lVar20) = 0;
  auStack_9c8[lVar20] = 1;
  *(undefined8 *)((long)auStack_9e8 + lVar20 + 0x18) = 0;
  *(undefined8 *)((long)auStack_9e8 + lVar20 + 0x10) = 0;
  *(undefined8 *)((long)auStack_9e8 + lVar20 + 8) = 0;
  *(undefined8 *)((long)auStack_9e8 + lVar20) = 0;
  auStack_9ee[lVar20] = 2;
  *(undefined2 *)((long)&uStack_9f0 + lVar20) = 0x201;
  *(undefined8 *)((long)auStack_a00 + lVar20 + 8) = 0;
  *(undefined8 *)((long)auStack_a00 + lVar20) = 0;
  func_0x000104642684(&uStack_2f8,2,0,0,0,0,0,1,0);
  puVar1[0x19] = uStack_230;
  puVar1[0x18] = uStack_238;
  puVar1[0x1b] = uStack_220;
  puVar1[0x1a] = uStack_228;
  puVar1[0x1d] = uStack_210;
  puVar1[0x1c] = uStack_218;
  *(undefined4 *)(puVar1 + 0x1e) = uStack_208;
  puVar1[0x11] = uStack_270;
  puVar1[0x10] = uStack_278;
  puVar1[0x13] = uStack_260;
  puVar1[0x12] = uStack_268;
  puVar1[0x15] = uStack_250;
  puVar1[0x14] = uStack_258;
  puVar1[0x17] = uStack_240;
  puVar1[0x16] = uStack_248;
  puVar1[9] = uStack_2b0;
  puVar1[8] = uStack_2b8;
  puVar1[0xb] = uStack_2a0;
  puVar1[10] = uStack_2a8;
  puVar1[0xd] = uStack_290;
  puVar1[0xc] = uStack_298;
  puVar1[0xf] = uStack_280;
  puVar1[0xe] = uStack_288;
  puVar1[1] = uStack_2f0;
  *puVar1 = uStack_2f8;
  puVar1[3] = uStack_2e0;
  puVar1[2] = uStack_2e8;
  puVar1[5] = uStack_2d0;
  puVar1[4] = uStack_2d8;
  puVar1[7] = uStack_2c0;
  puVar1[6] = uStack_2c8;
  *(undefined8 *)(unaff_x20 + _DAT_112fbab28) = 0;
  plVar2 = (long *)(unaff_x20 + _DAT_112fbab30);
  lVar20 = *param_2;
  plVar2[1] = param_2[1];
  *plVar2 = lVar20;
  lVar20 = param_2[6];
  lVar22 = param_2[9];
  lVar21 = param_2[8];
  lVar26 = param_2[3];
  lVar25 = param_2[2];
  lVar24 = param_2[5];
  lVar23 = param_2[4];
  plVar2[7] = param_2[7];
  plVar2[6] = lVar20;
  plVar2[9] = lVar22;
  plVar2[8] = lVar21;
  plVar2[3] = lVar26;
  plVar2[2] = lVar25;
  plVar2[5] = lVar24;
  plVar2[4] = lVar23;
  lVar20 = param_2[0xe];
  lVar22 = param_2[0x11];
  lVar21 = param_2[0x10];
  lVar26 = param_2[0xb];
  lVar25 = param_2[10];
  lVar24 = param_2[0xd];
  lVar23 = param_2[0xc];
  plVar2[0xf] = param_2[0xf];
  plVar2[0xe] = lVar20;
  plVar2[0x11] = lVar22;
  plVar2[0x10] = lVar21;
  plVar2[0xb] = lVar26;
  plVar2[10] = lVar25;
  plVar2[0xd] = lVar24;
  plVar2[0xc] = lVar23;
  lVar23 = param_2[0x15];
  lVar22 = param_2[0x14];
  lVar21 = param_2[0x17];
  lVar20 = param_2[0x16];
  lVar25 = param_2[0x13];
  lVar24 = param_2[0x12];
  plVar2[0x18] = param_2[0x18];
  plVar2[0x15] = lVar23;
  plVar2[0x14] = lVar22;
  plVar2[0x17] = lVar21;
  plVar2[0x16] = lVar20;
  plVar2[0x13] = lVar25;
  plVar2[0x12] = lVar24;
  *(undefined8 *)(unaff_x20 + _DAT_112fbab38) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fbab40) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fbab48) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112fbab50) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112fbab58) = param_12;
  FUN_10397deb8(param_13,unaff_x20 + _DAT_112fbab60);
  *(undefined8 *)(unaff_x20 + _DAT_112fbab68) = param_14;
  FUN_10397deb8(param_15,unaff_x20 + _DAT_112fbab70);
  *(undefined8 *)(unaff_x20 + _DAT_112fbab78) = param_17;
  func_0x000107c61604(unaff_x20 + lVar3,param_18);
  *(undefined8 *)(unaff_x20 + _DAT_112fbab80) = param_16;
  func_0x000101424ef0(&puStack_138);
  iVar5 = (int)&puStack_3c8;
  lStack_3e8 = param_2[0x15];
  lStack_3f0 = param_2[0x14];
  lStack_3d8 = param_2[0x17];
  lStack_3e0 = param_2[0x16];
  lStack_428 = param_2[0xd];
  lStack_430 = param_2[0xc];
  lStack_418 = param_2[0xf];
  lStack_420 = param_2[0xe];
  uStack_408 = param_2[0x11];
  lStack_410 = param_2[0x10];
  lStack_3f8 = param_2[0x13];
  lStack_400 = param_2[0x12];
  lStack_468 = param_2[5];
  lStack_470 = param_2[4];
  lStack_458 = param_2[7];
  lStack_460 = param_2[6];
  lStack_448 = param_2[9];
  lStack_450 = param_2[8];
  lStack_438 = param_2[0xb];
  lStack_440 = param_2[10];
  lStack_488 = param_2[1];
  puStack_490 = (ulong *)*param_2;
  lStack_478 = param_2[3];
  lStack_480 = param_2[2];
  lStack_320 = lStack_90;
  lStack_328 = lStack_98;
  lStack_310 = lStack_80;
  lStack_318 = lStack_88;
  lStack_360 = lStack_d0;
  lStack_368 = lStack_d8;
  lStack_350 = lStack_c0;
  lStack_358 = lStack_c8;
  lStack_340 = lStack_b0;
  lStack_348 = lStack_b8;
  lStack_330 = lStack_a0;
  lStack_338 = lStack_a8;
  lStack_380 = lStack_f0;
  lStack_388 = lStack_f8;
  lStack_370 = lStack_e0;
  lStack_378 = lStack_e8;
  lStack_3b0 = lStack_120;
  lStack_3b8 = lStack_128;
  lStack_3a0 = lStack_110;
  lStack_3a8 = lStack_118;
  lStack_390 = lStack_100;
  lStack_398 = lStack_108;
  lStack_3d0 = param_2[0x18];
  lStack_308 = lStack_78;
  lStack_3c0 = lStack_130;
  puStack_3c8 = puStack_138;
  iVar4 = (int)&puStack_490;
  func_0x000101424a7c();
  if (iVar4 == 1) {
    func_0x000101424a7c();
    if (iVar5 == 1) {
      lStack_578 = lStack_3e8;
      lStack_580 = lStack_3f0;
      lStack_568 = lStack_3d8;
      lStack_570 = lStack_3e0;
      lStack_560 = lStack_3d0;
      lStack_5b8 = lStack_428;
      lStack_5c0 = lStack_430;
      lStack_5a8 = lStack_418;
      lStack_5b0 = lStack_420;
      lStack_598 = uStack_408;
      lStack_5a0 = lStack_410;
      lStack_588 = lStack_3f8;
      lStack_590 = lStack_400;
      lStack_5f8 = lStack_468;
      lStack_600 = lStack_470;
      lStack_5e8 = lStack_458;
      lStack_5f0 = lStack_460;
      lStack_5d8 = lStack_448;
      lStack_5e0 = lStack_450;
      lStack_5c8 = lStack_438;
      lStack_5d0 = lStack_440;
      lStack_618 = lStack_488;
      puStack_620 = puStack_490;
      lStack_608 = lStack_478;
      lStack_610 = lStack_480;
      func_0x00010398580c(param_2,&puStack_200,0x112d7e768,&UNK_10d93c7c0);
      func_0x00010398580c(param_2,&puStack_200,0x112d7e768,&UNK_10d93c7c0);
      func_0x000107c615f0(param_17);
      func_0x000107c6157c(param_16);
      func_0x000107c615f0(param_6);
      func_0x000107c615f0(param_10);
      func_0x000107c615f0(param_11);
      func_0x000107c61174(param_12);
      func_0x000107c61174(param_14);
      func_0x00010398164c(&puStack_620,0x112d7e768,&UNK_10d93c7c0);
      uVar15 = 0;
      goto LAB_10397d5c4;
    }
  }
  else {
    lStack_658 = lStack_3e8;
    lStack_660 = lStack_3f0;
    lStack_648 = lStack_3d8;
    lStack_650 = lStack_3e0;
    lStack_640 = lStack_3d0;
    lStack_698 = lStack_428;
    lStack_6a0 = lStack_430;
    lStack_688 = lStack_418;
    lStack_690 = lStack_420;
    lStack_678 = uStack_408;
    lStack_680 = lStack_410;
    lStack_668 = lStack_3f8;
    lStack_670 = lStack_400;
    lStack_6d8 = lStack_468;
    lStack_6e0 = lStack_470;
    lStack_6c8 = lStack_458;
    lStack_6d0 = lStack_460;
    lStack_6b8 = lStack_448;
    lStack_6c0 = lStack_450;
    lStack_6a8 = lStack_438;
    lStack_6b0 = lStack_440;
    lStack_6f8 = lStack_488;
    puStack_700 = puStack_490;
    lStack_6e8 = lStack_478;
    lStack_6f0 = lStack_480;
    func_0x000101424a7c();
    if (iVar5 != 1) {
      lStack_728 = lStack_320;
      lStack_730 = lStack_328;
      lStack_718 = lStack_310;
      lStack_720 = lStack_318;
      lStack_768 = lStack_360;
      lStack_770 = lStack_368;
      lStack_758 = lStack_350;
      lStack_760 = lStack_358;
      lStack_748 = lStack_340;
      lStack_750 = lStack_348;
      lStack_738 = lStack_330;
      lStack_740 = lStack_338;
      lStack_7a8 = lStack_3a0;
      lStack_7b0 = lStack_3a8;
      lStack_798 = lStack_390;
      lStack_7a0 = lStack_398;
      lStack_788 = lStack_380;
      lStack_790 = lStack_388;
      lStack_778 = lStack_370;
      lStack_780 = lStack_378;
      lStack_7c8 = lStack_3c0;
      puStack_7d0 = puStack_3c8;
      lStack_7b8 = lStack_3b0;
      lStack_7c0 = lStack_3b8;
      lStack_578 = lStack_320;
      lStack_580 = lStack_328;
      lStack_568 = lStack_310;
      lStack_570 = lStack_318;
      lStack_5b8 = lStack_360;
      lStack_5c0 = lStack_368;
      lStack_5a8 = lStack_350;
      lStack_5b0 = lStack_358;
      lStack_598 = lStack_340;
      lStack_5a0 = lStack_348;
      lStack_588 = lStack_330;
      lStack_590 = lStack_338;
      lStack_5f8 = lStack_3a0;
      lStack_600 = lStack_3a8;
      lStack_5e8 = lStack_390;
      lStack_5f0 = lStack_398;
      lStack_5d8 = lStack_380;
      lStack_5e0 = lStack_388;
      lStack_5c8 = lStack_370;
      lStack_5d0 = lStack_378;
      lStack_710 = lStack_308;
      lStack_560 = lStack_308;
      lStack_618 = lStack_3c0;
      puStack_620 = puStack_3c8;
      lStack_608 = lStack_3b0;
      lStack_610 = lStack_3b8;
      lStack_158 = lStack_658;
      lStack_160 = lStack_660;
      lStack_148 = lStack_648;
      lStack_150 = lStack_650;
      lStack_140 = lStack_640;
      lStack_198 = lStack_698;
      lStack_1a0 = lStack_6a0;
      lStack_188 = lStack_688;
      lStack_190 = lStack_690;
      lStack_178 = lStack_678;
      lStack_180 = lStack_680;
      lStack_168 = lStack_668;
      lStack_170 = lStack_670;
      lStack_1d8 = lStack_6d8;
      lStack_1e0 = lStack_6e0;
      lStack_1c8 = lStack_6c8;
      lStack_1d0 = lStack_6d0;
      lStack_1b8 = lStack_6b8;
      lStack_1c0 = lStack_6c0;
      lStack_1a8 = lStack_6a8;
      lStack_1b0 = lStack_6b0;
      lStack_1f8 = lStack_6f8;
      puStack_200 = puStack_700;
      lStack_1e8 = lStack_6e8;
      lStack_1f0 = lStack_6f0;
      func_0x00010398580c(param_2,auStack_898,0x112d7e768,&UNK_10d93c7c0);
      func_0x00010398580c(param_2,auStack_898,0x112d7e768,&UNK_10d93c7c0);
      func_0x000107c615f0(param_17);
      func_0x000107c6157c(param_16);
      func_0x000107c615f0(param_6);
      func_0x000107c615f0(param_10);
      func_0x000107c615f0(param_11);
      func_0x000107c61174(param_12);
      func_0x000107c61174(param_14);
      ppuVar8 = &puStack_200;
      func_0x000104641a24(ppuVar8,&puStack_620);
      func_0x00010398164c(&puStack_7d0,0x112d7e768,&UNK_10d93c7c0);
      func_0x00010398164c(&puStack_490,0x112d7e768,&UNK_10d93c7c0);
      uVar15 = (uint)ppuVar8 ^ 1;
      goto LAB_10397d5c4;
    }
  }
  func_0x000107c610b4(&puStack_620,&puStack_490,400);
  func_0x00010398580c(param_2,&puStack_200,0x112d7e768,&UNK_10d93c7c0);
  func_0x00010398580c(param_2,&puStack_200,0x112d7e768,&UNK_10d93c7c0);
  func_0x000107c615f0(param_17);
  func_0x000107c6157c(param_16);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_10);
  func_0x000107c615f0(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_14);
  func_0x00010398164c(&puStack_620,0x112fbaa08,&UNK_10dc2bf10);
  uVar15 = 1;
LAB_10397d5c4:
  (**(code **)(lVar14 + 0x10))(puVar13,param_1,lVar7);
  (*pcVar18)(puVar13,0,1,lVar7);
  lStack_3e8 = param_2[0x15];
  lStack_3f0 = param_2[0x14];
  lStack_3d8 = param_2[0x17];
  lStack_3e0 = param_2[0x16];
  lStack_3d0 = param_2[0x18];
  lStack_428 = param_2[0xd];
  lStack_430 = param_2[0xc];
  lStack_418 = param_2[0xf];
  lStack_420 = param_2[0xe];
  uStack_408 = param_2[0x11];
  lStack_410 = param_2[0x10];
  lStack_3f8 = param_2[0x13];
  lStack_400 = param_2[0x12];
  lStack_468 = param_2[5];
  lStack_470 = param_2[4];
  lStack_458 = param_2[7];
  lStack_460 = param_2[6];
  lStack_448 = param_2[9];
  lStack_450 = param_2[8];
  lStack_438 = param_2[0xb];
  lStack_440 = param_2[10];
  lStack_488 = param_2[1];
  puStack_490 = (ulong *)*param_2;
  lStack_478 = param_2[3];
  lStack_480 = param_2[2];
  iVar5 = (int)&puStack_490;
  func_0x000101424a7c();
  if ((iVar5 == 1) || ((uStack_408 & 1) == 0)) {
    func_0x000103c56918(0);
    uVar16 = (ulong)(uVar15 & 1);
    puVar17 = puVar13;
    func_0x000103c55984(uVar16);
  }
  else {
    uVar16 = 0;
    puVar17 = (undefined1 *)0x0;
  }
  func_0x0001000d224c(&puStack_700);
  puVar11 = puStack_700;
  uVar12 = param_3;
  func_0x000107c5fadc(param_3,param_4);
  if (puVar17 == (undefined1 *)0x0) {
    uVar19 = 0;
  }
  else {
    func_0x000107c61434(puVar17);
    uVar19 = uVar16;
    func_0x000107c5fadc(uVar16,puVar17);
    func_0x000107c6142c(puVar17);
  }
  puVar9 = puVar11;
  func_0x000107c443b8();
  func_0x000107c61180();
  func_0x000107c615e8(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar19);
  puVar10 = (ulong *)0x0;
  func_0x000103c43334();
  puVar11 = puVar9;
  func_0x000107c61480(puVar9,puVar10);
  if (puVar11 == (ulong *)0x0) {
    func_0x000107c61170(puVar9);
    uVar12 = 0;
    func_0x000103c56918();
    uStack_938 = uVar12;
    func_0x000103c558f8();
    if (puVar17 == (undefined1 *)0x0) {
      uVar16 = 0;
    }
    else {
      func_0x000107c5fadc(uVar16,puVar17);
      func_0x000107c6142c(puVar17);
    }
    func_0x000107c5284c(uVar12);
    func_0x000107c61170(uVar16);
    func_0x000107c610f8();
    func_0x000107c469b0(0,0,0,0);
    pcVar18 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar10) + 0x88);
    func_0x000107c61174();
    func_0x000107c61434(param_4);
    (*pcVar18)(param_3,param_4);
    func_0x000107c61170(puVar10);
    func_0x000103c55a80(puVar10);
    func_0x000107c61170(uVar12);
  }
  else {
    func_0x000107c6142c(param_4);
    puVar10 = puVar11;
    param_4 = puVar17;
  }
  func_0x000107c6142c(param_4);
  func_0x00010398164c(puVar13,0x112d36580,&UNK_10d9016d0);
  *(ulong **)(unaff_x20 + _DAT_112fbab88) = puVar10;
  func_0x000103c483bc(0);
  func_0x000107c610f8();
  func_0x000107c615f0(param_6);
  func_0x000107c61174();
  func_0x000107c6157c(param_7);
  uVar12 = uStack_930;
  func_0x000107c61174(uStack_930);
  func_0x000107c6157c(param_9);
  func_0x000103c45ff8(puVar10,param_7,param_6,uVar12,param_9);
  *(ulong **)(unaff_x20 + _DAT_112fbab90) = puVar10;
  puVar13 = auStack_630;
  func_0x000107c61154(puVar13,PTR_s_init_1125d9248);
  func_0x000107c61180();
  FUN_10397defc();
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_10);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_14);
  func_0x000107c61574(param_16);
  func_0x000107c61574(param_7);
  func_0x000107c61170(uVar12);
  func_0x000107c61574(param_9);
  func_0x000107c615e8(param_18);
  func_0x000107c61170(puVar13);
  func_0x000107c615e8(param_17);
  func_0x000107c615e8(param_11);
  func_0x00010398164c(param_2,0x112d7e768,&UNK_10d93c7c0);
  FUN_1039857ac(param_15);
  FUN_1039857ac(param_13);
  (**(code **)(lVar14 + 8))(param_1,lVar7);
  return puVar13;
}



/* Entry: 10397d968; end: 10397db8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397d968(double param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  lVar2 = 0;
  uStack_78 = param_2;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eb08();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(lVar6);
  func_0x000107c5ee8c();
  (**(code **)(lVar9 + 8))(lVar6,lVar4);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10397db88);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      *(long *)(unaff_x20 + _DAT_112fbab28) = (long)param_1;
      (**(code **)(lVar12 + 0x10))(puVar10,uStack_78,lVar2);
      func_0x000107c5eaec(lVar8,0x404e000000000000,puVar10,0);
      uVar5 = 0xd000000000000019;
      func_0x000107c5eb04(0xd000000000000019,0x800000010f17e1b0,0x72657265666552,0xe700000000000000)
      ;
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112fbab88);
      func_0x000107c5eae0();
      func_0x000107c4b768(uVar7);
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar7);
      (**(code **)(lVar11 + 8))(lVar8,lVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10397db90);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10397db8c);
  (*pcVar1)();
}



/* Entry: 10397db90; end: 10397dbcb;  */

void FUN_10397db90(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010397dbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10397dbcc; end: 10397deb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397dbcc(undefined8 param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  code *pcVar6;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [200];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  puVar8 = auStack_2d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar8 - extraout_x12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fbab30);
  uStack_88 = puVar1[0x15];
  uStack_90 = puVar1[0x14];
  uStack_78 = puVar1[0x17];
  uStack_80 = puVar1[0x16];
  uStack_70 = puVar1[0x18];
  uStack_c8 = puVar1[0xd];
  uStack_d0 = puVar1[0xc];
  uStack_b8 = puVar1[0xf];
  uStack_c0 = puVar1[0xe];
  uStack_a8 = puVar1[0x11];
  uStack_b0 = puVar1[0x10];
  uStack_98 = puVar1[0x13];
  uStack_a0 = puVar1[0x12];
  uStack_108 = puVar1[5];
  uStack_110 = puVar1[4];
  uStack_f8 = puVar1[7];
  uStack_100 = puVar1[6];
  uStack_e8 = puVar1[9];
  uStack_f0 = puVar1[8];
  uVar12 = puVar1[0xb];
  uStack_e0 = puVar1[10];
  uStack_128 = puVar1[1];
  uStack_130 = *puVar1;
  uVar13 = puVar1[3];
  uVar5 = puVar1[2];
  iVar3 = (int)&uStack_130;
  uStack_120 = uVar5;
  uStack_118 = uVar13;
  uStack_d8 = uVar12;
  func_0x000101424a7c();
  if (iVar3 == 1) {
    lVar9 = *(long *)(unaff_x20 + _DAT_112fbab88);
    func_0x000107c3abfc();
    func_0x000107c61180();
    bVar2 = lVar9 == 0;
    if (bVar2) {
      func_0x000107c5ede0();
      pcVar6 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
    }
    else {
      func_0x000107c5edb4(param_1);
      func_0x000107c61170(lVar9);
      lVar9 = 0;
      func_0x000107c5ede0();
      pcVar6 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
    }
    (*pcVar6)(param_1,bVar2,1,lVar9);
  }
  else {
    uStack_158 = uStack_88;
    uStack_160 = uStack_90;
    uStack_148 = uStack_78;
    uStack_150 = uStack_80;
    uStack_140 = uStack_70;
    uStack_198 = uStack_c8;
    uStack_1a0 = uStack_d0;
    uStack_188 = uStack_b8;
    uStack_190 = uStack_c0;
    uStack_178 = uStack_a8;
    uStack_180 = uStack_b0;
    uStack_168 = uStack_98;
    uStack_170 = uStack_a0;
    uStack_1d8 = uStack_108;
    uStack_1e0 = uStack_110;
    uStack_1c8 = uStack_f8;
    uStack_1d0 = uStack_100;
    uStack_1b8 = uStack_e8;
    uStack_1c0 = uStack_f0;
    uStack_1a8 = uStack_d8;
    uStack_1b0 = uStack_e0;
    uStack_1f8 = uStack_128;
    uStack_200 = uStack_130;
    uStack_1e8 = uStack_118;
    uStack_1f0 = uStack_120;
    lVar10 = *(long *)(unaff_x20 + _DAT_112fbab88);
    FUN_10397e204(&uStack_200,auStack_2c8);
    func_0x000107c3abfc();
    func_0x000107c61180();
    if (lVar10 != 0) {
      func_0x000107c5edb4(lVar9);
      func_0x000107c61170(lVar10);
    }
    lVar4 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar9,lVar10 == 0,1,lVar4);
    lVar10 = _DAT_11380c040;
    func_0x000107c61428(unaff_x20 + _DAT_11380c040,auStack_2c8,0,0);
    func_0x00010398580c(unaff_x20 + lVar10,puVar8,0x112d36580,&UNK_10d9016d0);
    uVar7 = 0;
    uVar11 = 0;
    if ((uVar12 & 0x10000) != 0) {
      func_0x000107c61434(uVar13);
      uVar7 = uVar5;
      uVar11 = uVar13;
    }
    uVar5 = 0;
    func_0x000103c545f4(0);
    func_0x000103c52080(param_1,lVar9,puVar8,uVar7,uVar11,uVar5);
    func_0x000107c6142c(uVar11);
    func_0x00010398164c(&uStack_130,0x112d7e768,&UNK_10d93c7c0);
    func_0x00010398164c(puVar8,0x112d36580,&UNK_10d9016d0);
    func_0x00010398164c(lVar9,0x112d36580,&UNK_10d9016d0);
  }
  return;
}



/* Entry: 10397deb8; end: 10397defb;  */

long FUN_10397deb8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10397defc; end: 10397e203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397defc(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  ppuVar5 = &puStack_c0;
  ppuVar6 = &puStack_c0;
  ppuVar7 = &puStack_c0;
  ppuVar9 = &puStack_c0;
  lVar10 = *(long *)(unaff_x20 + _DAT_112fbab88);
  func_0x000107c569dc(lVar10);
  func_0x000107c5a110(lVar10);
  lVar2 = *(long *)(unaff_x20 + _DAT_112fbab90) + _DAT_112ffaff0;
  func_0x000107c61428(lVar2,auStack_78,1,0);
  *(undefined ***)(lVar2 + 8) = &PTR_DAT_1106b3e68;
  lVar11 = unaff_x20;
  func_0x000107c61604(lVar2);
  FUN_10397e240();
  func_0x000107c40110();
  func_0x000107c61180();
  lVar2 = lVar10;
  func_0x000107c3dfb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  if (lVar2 == 0) {
    lVar10 = 0;
    lVar11 = 0;
  }
  else {
    lVar10 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  lVar2 = unaff_x20 + _DAT_112fbab20;
  func_0x000107c61428(lVar2,auStack_90,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x68);
  *(long *)(lVar2 + 0x60) = lVar10;
  *(long *)(lVar2 + 0x68) = lVar11;
  func_0x000107c6142c(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fbab58);
  puVar8 = &UNK_1106b3dd8;
  puVar4 = puVar8;
  func_0x000107c613fc(&UNK_1106b3dd8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_a0 = FUN_10398595c;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = (undefined *)0x1039859c0;
  puStack_a8 = &UNK_1106b4068;
  puStack_98 = puVar4;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c61574(puStack_98);
  puVar4 = puVar8;
  func_0x000107c613fc(&UNK_1106b3dd8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcStack_a0 = (code *)0x103985964;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100ba5314;
  puStack_a8 = &UNK_1106b4090;
  puStack_98 = puVar4;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c61574(puStack_98);
  func_0x000107c42c14(uVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fbab68);
  puVar4 = puVar8;
  func_0x000107c613fc(&UNK_1106b3dd8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcStack_a0 = (code *)0x10398596c;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = (undefined *)0x1039859c4;
  puStack_a8 = &UNK_1106b40b8;
  puStack_98 = puVar4;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c61574(puStack_98);
  func_0x000107c613fc(&UNK_1106b3dd8,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  pcStack_a0 = (code *)0x103985974;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100ba5314;
  puStack_a8 = &UNK_1106b40e0;
  puStack_98 = puVar8;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c61574(puStack_98);
  func_0x000107c42c14(uVar3);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 10397e204; end: 10397e23f;  */

undefined8 FUN_10397e204(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1046420f8)(param_2,param_1);
  return param_2;
}



/* Entry: 10397e240; end: 10397e2db;  */

/* WARNING: Possible PIC construction at 0x00010397e284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010397e2a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010397e288) */
/* WARNING: Removing unreachable block (ram,0x00010397e2ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397e240(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fbab88);
  func_0x000107c51a60(uVar1);
  func_0x000107c61180();
  func_0x000107c57c2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10397e2dc; end: 10397ea77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397e2dc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61428(param_3 + 0x10,auStack_148,0,0);
  lVar3 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112fbab30);
    uStack_208 = puVar1[1];
    uStack_210 = *puVar1;
    uStack_1d8 = puVar1[7];
    uStack_1e0 = puVar1[6];
    uStack_1c8 = puVar1[9];
    uStack_1d0 = puVar1[8];
    uStack_1f8 = puVar1[3];
    uStack_200 = puVar1[2];
    uStack_1e8 = puVar1[5];
    uStack_1f0 = puVar1[4];
    uStack_198 = puVar1[0xf];
    uStack_1a0 = puVar1[0xe];
    uStack_188 = puVar1[0x11];
    uStack_190 = puVar1[0x10];
    uStack_1b8 = puVar1[0xb];
    uStack_1c0 = puVar1[10];
    uStack_1a8 = puVar1[0xd];
    uStack_1b0 = puVar1[0xc];
    uStack_168 = puVar1[0x15];
    uStack_170 = puVar1[0x14];
    uStack_158 = puVar1[0x17];
    uStack_160 = puVar1[0x16];
    uStack_150 = puVar1[0x18];
    uStack_178 = puVar1[0x13];
    uStack_180 = puVar1[0x12];
    func_0x00010398580c(&uStack_210,&uStack_130,0x112d7e768,&UNK_10d93c7c0);
    func_0x000107c61170(lVar3);
    iVar2 = (int)&uStack_210;
    func_0x000101424a7c();
    if (iVar2 != 1) {
      uStack_88 = uStack_168;
      uStack_90 = uStack_170;
      uStack_78 = uStack_158;
      uStack_80 = uStack_160;
      uStack_70 = uStack_150;
      uStack_c8 = uStack_1a8;
      uStack_d0 = uStack_1b0;
      uStack_b8 = uStack_198;
      uStack_c0 = uStack_1a0;
      uStack_a8 = uStack_188;
      uStack_b0 = uStack_190;
      uStack_98 = uStack_178;
      uStack_a0 = uStack_180;
      uStack_108 = uStack_1e8;
      uStack_110 = uStack_1f0;
      uStack_f8 = uStack_1d8;
      uStack_100 = uStack_1e0;
      uStack_e8 = uStack_1c8;
      uStack_f0 = uStack_1d0;
      uStack_d8 = uStack_1b8;
      uStack_e0 = uStack_1c0;
      uStack_128 = uStack_208;
      uStack_130 = uStack_210;
      uStack_118 = uStack_1f8;
      uStack_120 = uStack_200;
      func_0x0001046583bc(0);
      func_0x000107c610f8();
      func_0x0001046562b4(&uStack_130);
    }
  }
  func_0x000107c61428(param_3 + 0x10,&uStack_210,0,0);
  lVar3 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c61170();
  }
  func_0x000107c61428(param_3 + 0x10,auStack_228,0,0);
  lVar3 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c61618(lVar3 + _DAT_112fbaae8);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_240,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c615f0(*(undefined8 *)(param_3 + _DAT_112fbab48));
    func_0x000107c61170(param_3);
  }
  uVar4 = 0;
  FUN_103986cd0();
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000103986a20();
  param_1[3] = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 10397ea78; end: 10397eb73;  */

void FUN_10397ea78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  
  uVar1 = unaff_x20;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  uVar7 = param_2;
  func_0x000107c61170(uVar1);
  uVar1 = unaff_x20;
  func_0x000107c51a30();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  uVar1 = unaff_x20;
  func_0x000107c437e4();
  uVar4 = unaff_x20;
  func_0x000107c496dc();
  func_0x000107c3effc();
  func_0x000107c61180();
  uVar5 = unaff_x20;
  func_0x000107c5fc54();
  func_0x000107c61170(unaff_x20);
  uVar6 = 0;
  func_0x000104848f7c(0);
  func_0x000107c610f8();
  func_0x000104848b58(uVar2,param_2,uVar3,uVar7,uVar1,uVar4,uVar5,uVar6);
  return;
}



/* Entry: 10397eb74; end: 10397ee17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397eb74(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61428(param_3 + 0x10,auStack_148,0,0);
  lVar3 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112fbab30);
    uStack_208 = puVar1[1];
    uStack_210 = *puVar1;
    uStack_1d8 = puVar1[7];
    uStack_1e0 = puVar1[6];
    uStack_1c8 = puVar1[9];
    uStack_1d0 = puVar1[8];
    uStack_1f8 = puVar1[3];
    uStack_200 = puVar1[2];
    uStack_1e8 = puVar1[5];
    uStack_1f0 = puVar1[4];
    uStack_198 = puVar1[0xf];
    uStack_1a0 = puVar1[0xe];
    uStack_188 = puVar1[0x11];
    uStack_190 = puVar1[0x10];
    uStack_1b8 = puVar1[0xb];
    uStack_1c0 = puVar1[10];
    uStack_1a8 = puVar1[0xd];
    uStack_1b0 = puVar1[0xc];
    uStack_168 = puVar1[0x15];
    uStack_170 = puVar1[0x14];
    uStack_158 = puVar1[0x17];
    uStack_160 = puVar1[0x16];
    uStack_150 = puVar1[0x18];
    uStack_178 = puVar1[0x13];
    uStack_180 = puVar1[0x12];
    func_0x00010398580c(&uStack_210,&uStack_130,0x112d7e768,&UNK_10d93c7c0);
    func_0x000107c61170(lVar3);
    iVar2 = (int)&uStack_210;
    func_0x000101424a7c();
    if (iVar2 != 1) {
      uStack_88 = uStack_168;
      uStack_90 = uStack_170;
      uStack_78 = uStack_158;
      uStack_80 = uStack_160;
      uStack_70 = uStack_150;
      uStack_c8 = uStack_1a8;
      uStack_d0 = uStack_1b0;
      uStack_b8 = uStack_198;
      uStack_c0 = uStack_1a0;
      uStack_a8 = uStack_188;
      uStack_b0 = uStack_190;
      uStack_98 = uStack_178;
      uStack_a0 = uStack_180;
      uStack_108 = uStack_1e8;
      uStack_110 = uStack_1f0;
      uStack_f8 = uStack_1d8;
      uStack_100 = uStack_1e0;
      uStack_e8 = uStack_1c8;
      uStack_f0 = uStack_1d0;
      uStack_d8 = uStack_1b8;
      uStack_e0 = uStack_1c0;
      uStack_128 = uStack_208;
      uStack_130 = uStack_210;
      uStack_118 = uStack_1f8;
      uStack_120 = uStack_200;
      func_0x0001046583bc(0);
      func_0x000107c610f8();
      func_0x0001046562b4(&uStack_130);
    }
  }
  func_0x000107c61428(param_3 + 0x10,&uStack_210,0,0);
  lVar3 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c61170();
  }
  func_0x000107c61428(param_3 + 0x10,auStack_228,0,0);
  lVar3 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c61618(lVar3 + _DAT_112fbaae8);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_240,0,0);
  lVar3 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c615f0(*(undefined8 *)(lVar3 + _DAT_112fbab78));
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_258,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c615f0(*(undefined8 *)(param_3 + _DAT_112fbab48));
    func_0x000107c61170(param_3);
  }
  uVar4 = 0;
  func_0x00010446fe34();
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x00010446fb68();
  param_1[3] = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 10397ee18; end: 10397ee9b;  */

void FUN_10397ee18(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x00010398597c(auStack_50,uStack_38);
  func_0x000107c605b0();
  FUN_1039857ac(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10397ee9c; end: 10397f2ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397ee9c(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long alStack_238 [3];
  undefined8 uStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61428(param_2 + 0x10,auStack_148,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10397deb8(param_2 + _DAT_112fbab70,alStack_238);
    func_0x00010398597c(alStack_238,uStack_220);
    puVar1 = (undefined8 *)(param_2 + _DAT_112fbab30);
    uStack_208 = puVar1[1];
    puStack_210 = (undefined *)*puVar1;
    uStack_1d8 = puVar1[7];
    uStack_1e0 = puVar1[6];
    uStack_1c8 = puVar1[9];
    uStack_1d0 = puVar1[8];
    uStack_1f8 = puVar1[3];
    uStack_200 = puVar1[2];
    uStack_1e8 = puVar1[5];
    uStack_1f0 = puVar1[4];
    uStack_198 = puVar1[0xf];
    uStack_1a0 = puVar1[0xe];
    uStack_188 = puVar1[0x11];
    uStack_190 = puVar1[0x10];
    uStack_1b8 = puVar1[0xb];
    uStack_1c0 = puVar1[10];
    uStack_1a8 = puVar1[0xd];
    uStack_1b0 = puVar1[0xc];
    uStack_168 = puVar1[0x15];
    uStack_170 = puVar1[0x14];
    uStack_158 = puVar1[0x17];
    uStack_160 = puVar1[0x16];
    uStack_150 = puVar1[0x18];
    uStack_178 = puVar1[0x13];
    uStack_180 = puVar1[0x12];
    iVar5 = (int)&puStack_210;
    func_0x000101424a7c();
    if (iVar5 == 1) {
      ppuVar18 = (undefined **)0x0;
    }
    else {
      uStack_88 = uStack_168;
      uStack_90 = uStack_170;
      uStack_78 = uStack_158;
      uStack_80 = uStack_160;
      uStack_70 = uStack_150;
      uStack_c8 = uStack_1a8;
      uStack_d0 = uStack_1b0;
      uStack_b8 = uStack_198;
      uStack_c0 = uStack_1a0;
      uStack_a8 = uStack_188;
      uStack_b0 = uStack_190;
      uStack_98 = uStack_178;
      uStack_a0 = uStack_180;
      uStack_108 = uStack_1e8;
      uStack_110 = uStack_1f0;
      uStack_f8 = uStack_1d8;
      uStack_100 = uStack_1e0;
      uStack_e8 = uStack_1c8;
      uStack_f0 = uStack_1d0;
      uStack_d8 = uStack_1b8;
      uStack_e0 = uStack_1c0;
      uStack_128 = uStack_208;
      puStack_130 = puStack_210;
      uStack_118 = uStack_1f8;
      uStack_120 = uStack_200;
      func_0x0001046583bc(0);
      func_0x000107c610f8();
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_2f8 = uStack_208;
      puStack_300 = puStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      FUN_10397e204(&puStack_300,&puStack_3d0);
      ppuVar18 = &puStack_130;
      func_0x0001046562b4();
    }
    uVar12 = *(undefined8 *)(param_2 + _DAT_112fbab38);
    lVar14 = param_2 + _DAT_112fbaae8;
    func_0x000107c61618(lVar14);
    uVar19 = *(undefined8 *)(param_2 + _DAT_112fbab78);
    uVar20 = *(undefined8 *)(param_2 + _DAT_112fbab48);
    pcVar16 = *(code **)(lStack_218 + 8);
    func_0x000107c615f0(uVar19);
    func_0x000107c615f0(uVar20);
    ppuVar6 = ppuVar18;
    (*pcVar16)(ppuVar18,uVar12,lVar14,uVar19,uVar20,uStack_220,lStack_218);
    func_0x000107c615e8(lVar14);
    func_0x000107c615e8(uVar19);
    func_0x000107c615e8(uVar20);
    func_0x000107c61170(ppuVar18);
    FUN_1039857ac(alStack_238);
    puVar13 = (ulong *)(param_1 + 0x38);
    uVar21 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar17 = 0xffffffffffffffff;
    if (-uVar21 < 0x40) {
      uVar17 = ~(-1L << (-uVar21 & 0x3f));
    }
    uVar17 = uVar17 & *puVar13;
    func_0x000107c61434(param_1);
    lVar14 = 0;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar15 = lVar14;
    while( true ) {
      while (uVar17 != 0) {
        uVar2 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar17 = uVar17 - 1 & uVar17;
        func_0x0001007bbd18(*(long *)(param_1 + 0x30) +
                            LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x28 + lVar14 * 0xa00,
                            &puStack_300);
        uStack_3c8 = uStack_2f8;
        puStack_3d0 = puStack_300;
        uStack_3b8 = uStack_2e8;
        uStack_3c0 = uStack_2f0;
        uStack_3b0 = uStack_2e0;
        uVar12 = 0x112fbabd0;
        func_0x0001000285a8(0x112fbabd0,&UNK_10dc2c228);
        plVar7 = alStack_238;
        func_0x000107c6147c(plVar7,&puStack_3d0,PTR___ss11AnyHashableVN_11034e448,uVar12,6);
        lVar3 = alStack_238[0];
        lVar15 = lVar14;
        if ((((ulong)plVar7 & 1) != 0) && (alStack_238[0] != 0)) {
          puVar9 = puVar10;
          func_0x000107c61550();
          if (((int)puVar9 == 0) ||
             (((long)puVar10 < 0 || (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)))) {
            if ((ulong)puVar10 >> 0x3e == 0) {
              puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar10) {
                puVar8 = puVar10;
              }
              func_0x000107c60480(puVar8);
            }
            puVar9 = (undefined *)0x0;
            func_0x000103981878(0,puVar8 + 1,1,puVar10,0x10397beec,0x112fbabd0,&UNK_10dc2c228);
          }
          uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
          uVar2 = *(ulong *)(uVar11 + 0x10);
          puVar10 = puVar9;
          if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar2) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
            func_0x000103981878(puVar10,uVar2 + 1,1,puVar9,0x10397beec,0x112fbabd0,&UNK_10dc2c228);
            uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar11 + 0x10) = uVar2 + 1;
          *(long *)(uVar11 + uVar2 * 8 + 0x20) = lVar3;
        }
      }
      bVar4 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10397f2f0);
        (*pcVar16)();
      }
      if ((long)(0x3f - uVar21 >> 6) <= lVar14) break;
      uVar17 = puVar13[lVar14];
    }
    func_0x000100ba5608(param_1,puVar13,~uVar21,lVar15,0);
    puStack_300 = puVar10;
    func_0x00010398168c(ppuVar6,0x10397beec,0x112fbabd0,&UNK_10dc2c228,0x1039814a8);
    uVar12 = *(undefined8 *)(param_2 + _DAT_112fbaaf0);
    *(undefined **)(param_2 + _DAT_112fbaaf0) = puStack_300;
    func_0x000107c61170(param_2);
    func_0x000107c6142c(uVar12);
  }
  return;
}



/* Entry: 10397f2f0; end: 10397f70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397f2f0(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_848 [200];
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000107c614f0();
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112fbab30);
  func_0x000101424ef0(&uStack_1e8);
  uStack_3a8 = puVar3[0x13];
  uStack_3b0 = puVar3[0x12];
  uStack_78 = puVar3[0x15];
  uStack_80 = puVar3[0x14];
  uStack_398 = puVar3[0x15];
  uStack_3a0 = puVar3[0x14];
  uStack_68 = puVar3[0x17];
  uStack_70 = puVar3[0x16];
  uStack_3e8 = puVar3[0xb];
  uStack_3f0 = puVar3[10];
  uStack_b8 = puVar3[0xd];
  uStack_c0 = puVar3[0xc];
  uStack_3d8 = puVar3[0xd];
  uStack_3e0 = puVar3[0xc];
  uStack_a8 = puVar3[0xf];
  uStack_b0 = puVar3[0xe];
  uStack_3c8 = puVar3[0xf];
  uStack_3d0 = puVar3[0xe];
  uStack_98 = puVar3[0x11];
  uStack_a0 = puVar3[0x10];
  uStack_3b8 = puVar3[0x11];
  uStack_3c0 = puVar3[0x10];
  uStack_88 = puVar3[0x13];
  uStack_90 = puVar3[0x12];
  uStack_428 = puVar3[3];
  uStack_430 = puVar3[2];
  uStack_f8 = puVar3[5];
  uStack_100 = puVar3[4];
  uStack_418 = puVar3[5];
  uStack_420 = puVar3[4];
  uStack_e8 = puVar3[7];
  uStack_f0 = puVar3[6];
  uStack_408 = puVar3[7];
  uStack_410 = puVar3[6];
  uStack_d8 = puVar3[9];
  uStack_e0 = puVar3[8];
  uStack_3f8 = puVar3[9];
  uStack_400 = puVar3[8];
  uStack_c8 = puVar3[0xb];
  uStack_d0 = puVar3[10];
  uStack_118 = puVar3[1];
  uStack_120 = *puVar3;
  uStack_108 = puVar3[3];
  uStack_110 = puVar3[2];
  uStack_438 = puVar3[1];
  uStack_440 = *puVar3;
  uStack_388 = puVar3[0x17];
  uStack_390 = puVar3[0x16];
  iVar2 = (int)&uStack_378;
  uStack_2d0 = uStack_140;
  uStack_2d8 = uStack_148;
  uStack_2c0 = uStack_130;
  uStack_2c8 = uStack_138;
  uStack_310 = uStack_180;
  uStack_318 = uStack_188;
  uStack_300 = uStack_170;
  uStack_308 = uStack_178;
  uStack_2f0 = uStack_160;
  uStack_2f8 = uStack_168;
  uStack_2e0 = uStack_150;
  uStack_2e8 = uStack_158;
  uStack_330 = uStack_1a0;
  uStack_338 = uStack_1a8;
  uStack_320 = uStack_190;
  uStack_328 = uStack_198;
  uStack_360 = uStack_1d0;
  uStack_368 = uStack_1d8;
  uStack_350 = uStack_1c0;
  uStack_358 = uStack_1c8;
  uStack_340 = uStack_1b0;
  uStack_348 = uStack_1b8;
  uStack_60 = puVar3[0x18];
  uStack_380 = puVar3[0x18];
  uStack_2b8 = uStack_128;
  uStack_370 = uStack_1e0;
  uStack_378 = uStack_1e8;
  iVar1 = (int)&uStack_440;
  func_0x000101424a7c();
  if (iVar1 == 1) {
    func_0x000101424a7c();
    if (iVar2 == 1) {
      uStack_528 = uStack_398;
      uStack_530 = uStack_3a0;
      uStack_518 = uStack_388;
      uStack_520 = uStack_390;
      uStack_510 = uStack_380;
      uStack_568 = uStack_3d8;
      uStack_570 = uStack_3e0;
      uStack_558 = uStack_3c8;
      uStack_560 = uStack_3d0;
      uStack_548 = uStack_3b8;
      uStack_550 = uStack_3c0;
      uStack_538 = uStack_3a8;
      uStack_540 = uStack_3b0;
      uStack_5a8 = uStack_418;
      uStack_5b0 = uStack_420;
      uStack_598 = uStack_408;
      uStack_5a0 = uStack_410;
      uStack_588 = uStack_3f8;
      uStack_590 = uStack_400;
      uStack_578 = uStack_3e8;
      uStack_580 = uStack_3f0;
      uStack_5c8 = uStack_438;
      uStack_5d0 = uStack_440;
      uStack_5b8 = uStack_428;
      uStack_5c0 = uStack_430;
      func_0x00010398580c(&uStack_120,&uStack_2b0,0x112d7e768,&UNK_10d93c7c0);
      func_0x00010398164c(&uStack_5d0,0x112d7e768,&UNK_10d93c7c0);
LAB_10397f698:
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fbab80);
      func_0x000107c6157c(uVar4);
      func_0x0001000d224c(&uStack_440);
      func_0x000107c61574(uVar4);
      uVar4 = uStack_440;
      func_0x000107c4faf0(uStack_440);
      goto LAB_10397f6d4;
    }
LAB_10397f510:
    func_0x000107c610b4(&uStack_5d0,&uStack_440,400);
    func_0x00010398580c(&uStack_120,&uStack_2b0,0x112d7e768,&UNK_10d93c7c0);
    func_0x00010398164c(&uStack_5d0,0x112fbaa08,&UNK_10dc2bf10);
  }
  else {
    uStack_608 = uStack_398;
    uStack_610 = uStack_3a0;
    uStack_5f8 = uStack_388;
    uStack_600 = uStack_390;
    uStack_5f0 = uStack_380;
    uStack_648 = uStack_3d8;
    uStack_650 = uStack_3e0;
    uStack_638 = uStack_3c8;
    uStack_640 = uStack_3d0;
    uStack_628 = uStack_3b8;
    uStack_630 = uStack_3c0;
    uStack_618 = uStack_3a8;
    uStack_620 = uStack_3b0;
    uStack_688 = uStack_418;
    uStack_690 = uStack_420;
    uStack_678 = uStack_408;
    uStack_680 = uStack_410;
    uStack_668 = uStack_3f8;
    uStack_670 = uStack_400;
    uStack_658 = uStack_3e8;
    uStack_660 = uStack_3f0;
    uStack_6a8 = uStack_438;
    uStack_6b0 = uStack_440;
    uStack_698 = uStack_428;
    uStack_6a0 = uStack_430;
    func_0x000101424a7c();
    if (iVar2 == 1) goto LAB_10397f510;
    uStack_6d8 = uStack_2d0;
    uStack_6e0 = uStack_2d8;
    uStack_6c8 = uStack_2c0;
    uStack_6d0 = uStack_2c8;
    uStack_718 = uStack_310;
    uStack_720 = uStack_318;
    uStack_708 = uStack_300;
    uStack_710 = uStack_308;
    uStack_6f8 = uStack_2f0;
    uStack_700 = uStack_2f8;
    uStack_6e8 = uStack_2e0;
    uStack_6f0 = uStack_2e8;
    uStack_758 = uStack_350;
    uStack_760 = uStack_358;
    uStack_748 = uStack_340;
    uStack_750 = uStack_348;
    uStack_738 = uStack_330;
    uStack_740 = uStack_338;
    uStack_728 = uStack_320;
    uStack_730 = uStack_328;
    uStack_778 = uStack_370;
    uStack_780 = uStack_378;
    uStack_768 = uStack_360;
    uStack_770 = uStack_368;
    uStack_528 = uStack_2d0;
    uStack_530 = uStack_2d8;
    uStack_518 = uStack_2c0;
    uStack_520 = uStack_2c8;
    uStack_568 = uStack_310;
    uStack_570 = uStack_318;
    uStack_558 = uStack_300;
    uStack_560 = uStack_308;
    uStack_548 = uStack_2f0;
    uStack_550 = uStack_2f8;
    uStack_538 = uStack_2e0;
    uStack_540 = uStack_2e8;
    uStack_5a8 = uStack_350;
    uStack_5b0 = uStack_358;
    uStack_598 = uStack_340;
    uStack_5a0 = uStack_348;
    uStack_588 = uStack_330;
    uStack_590 = uStack_338;
    uStack_578 = uStack_320;
    uStack_580 = uStack_328;
    uStack_6c0 = uStack_2b8;
    uStack_510 = uStack_2b8;
    uStack_5c8 = uStack_370;
    uStack_5d0 = uStack_378;
    uStack_5b8 = uStack_360;
    uStack_5c0 = uStack_368;
    uStack_208 = uStack_608;
    uStack_210 = uStack_610;
    uStack_1f8 = uStack_5f8;
    uStack_200 = uStack_600;
    uStack_1f0 = uStack_5f0;
    uStack_248 = uStack_648;
    uStack_250 = uStack_650;
    uStack_238 = uStack_638;
    uStack_240 = uStack_640;
    uStack_228 = uStack_628;
    uStack_230 = uStack_630;
    uStack_218 = uStack_618;
    uStack_220 = uStack_620;
    uStack_288 = uStack_688;
    uStack_290 = uStack_690;
    uStack_278 = uStack_678;
    uStack_280 = uStack_680;
    uStack_268 = uStack_668;
    uStack_270 = uStack_670;
    uStack_258 = uStack_658;
    uStack_260 = uStack_660;
    uStack_2a8 = uStack_6a8;
    uStack_2b0 = uStack_6b0;
    uStack_298 = uStack_698;
    uStack_2a0 = uStack_6a0;
    func_0x00010398580c(&uStack_120,auStack_848,0x112d7e768,&UNK_10d93c7c0);
    puVar3 = &uStack_2b0;
    func_0x000104641a24(puVar3,&uStack_5d0);
    func_0x00010398164c(&uStack_780,0x112d7e768,&UNK_10d93c7c0);
    func_0x00010398164c(&uStack_440,0x112d7e768,&UNK_10d93c7c0);
    if (((ulong)puVar3 & 1) != 0) goto LAB_10397f698;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fbab80);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(&uStack_440);
  func_0x000107c61574(uVar4);
  uVar4 = uStack_440;
  func_0x000107c5075c(uStack_440);
LAB_10397f6d4:
  func_0x000107c615e8(uVar4);
  func_0x000107c61154(&stack0xfffffffffffffa20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10397f710; end: 10397f733; -[_TtC10WebBrowser17WebViewController dealloc] */

void FUN_10397f710(void)

{
  func_0x000107c61174();
  FUN_10397f2f0();
  return;
}



/* Entry: 10397f734; end: 10397f88b; -[_TtC10WebBrowser17WebViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10397f734(long param_1)

{
  func_0x000101424b1c(param_1 + _DAT_112fbaae8);
  func_0x00010398164c(param_1 + _DAT_112fbab30,0x112d7e768,&UNK_10d93c7c0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fbab40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fbab90));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fbab48));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fbab50));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fbab80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fbab58));
  FUN_1039857ac(param_1 + _DAT_112fbab60);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fbab68));
  FUN_1039857ac(param_1 + _DAT_112fbab70);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fbab78));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fbaaf0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fbaaf8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fbab00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fbab88));
  func_0x00010398164c(param_1 + _DAT_11380c040,0x112d36580,&UNK_10d9016d0);
  param_1 = param_1 + _DAT_112fbab20;
  (*(code *)&DAT_104643a04)();
  return param_1;
}



/* Entry: 10397f88c; end: 10397f8b7; -[_TtC10WebBrowser17WebViewController init] */

void FUN_10397f88c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowser.WebViewController",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10397f8b8);
  (*pcVar1)();
}



/* Entry: 10397f8b8; end: 10397f8c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397f8b8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + _DAT_112fbab50));
  return;
}



/* Entry: 10397f8c8; end: 10397f907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397f8c8(void)

{
  long unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112fbab88)) +
              0x220))();
  return;
}



/* Entry: 10397f908; end: 10397f91b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397f908(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0b0330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112fbab48),
             PTR_s_logSpectrumAutofillEventWithEven_112609ad8,param_1);
  return;
}



/* Entry: 10397f91c; end: 10397f9af; -[_TtC10WebBrowser17WebViewController webView:decidePolicyForNavigationAction:decisionHandler:] */

/* WARNING: Possible PIC construction at 0x00010397f990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010397f994) */

void FUN_10397f91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103981cc4(param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10397f9b0; end: 10397fb13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397f9b0(byte param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x20;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = _DAT_11380c040;
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(unaff_x20 + _DAT_112fbab10);
  if (1 < lVar5) {
    func_0x000107c61428(unaff_x20 + _DAT_11380c040,auStack_78,0,0);
    lVar3 = unaff_x20 + lVar1;
    (**(code **)(lVar9 + 0x30))(lVar3,1,lVar2);
    puVar7 = (undefined1 *)0x0;
    lVar8 = 0;
    if ((int)lVar3 == 0) {
      lVar8 = unaff_x20 + lVar1;
      puVar7 = puVar6;
      (**(code **)(lVar9 + 0x10))(puVar6,lVar8,lVar2);
      func_0x000107c5ed70();
      (**(code **)(lVar9 + 8))(puVar6,lVar2);
    }
    lVar1 = unaff_x20 + _DAT_112fbab20;
    func_0x000107c61428(lVar1,auStack_90,0x21,0);
    uVar4 = *(undefined8 *)(lVar1 + 0x40);
    *(undefined1 **)(lVar1 + 0x38) = puVar7;
    *(long *)(lVar1 + 0x40) = lVar8;
    func_0x000107c6142c(uVar4);
    *(long *)(lVar1 + 0x28) = lVar5 + -1;
    *(undefined1 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(unaff_x20 + _DAT_112fbab18);
    *(undefined1 *)(lVar1 + 0x50) = 0;
    *(byte *)(lVar1 + 0x51) = param_1 & 1;
    func_0x000107c614a8(auStack_90);
  }
  return;
}



/* Entry: 10397fb14; end: 10397fbc3; -[_TtC10WebBrowser17WebViewController webView:decidePolicyForNavigationResponse:decisionHandler:] */

void FUN_10397fb14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1106b3fd8;
  func_0x000107c613fc(&UNK_1106b3fd8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000103982c20(param_4,FUN_103985774,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10397fbc4; end: 10397fbf7; -[_TtC10WebBrowser17WebViewController webView:didCommitNavigation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397fbc4(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000103c4657c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10397fbf8; end: 10397fc5b; -[_TtC10WebBrowser17WebViewController webView:didFinishNavigation:] */

/* WARNING: Possible PIC construction at 0x00010397fc3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010397fc40) */

void FUN_10397fbf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103983d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10397fc5c; end: 10397fc5f; -[_TtC10WebBrowser17WebViewController webViewWebContentProcessDidTerminate:] */

void FUN_10397fc5c(void)

{
  return;
}



/* Entry: 10397fc60; end: 10397fce7; -[_TtC10WebBrowser17WebViewController webView:didFailNavigation:withError:] */

/* WARNING: Possible PIC construction at 0x00010397fcbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010397fccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010397fcc0) */
/* WARNING: Removing unreachable block (ram,0x00010397fcd0) */

void FUN_10397fc60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000103984938(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10397fce8; end: 10397fdc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10397fce8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fbab40);
  puVar1 = &UNK_1106b3dd8;
  func_0x000107c613fc(&UNK_1106b3dd8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcStack_40 = FUN_103984f50;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100f11710;
  puStack_48 = &UNK_1106b3df0;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000103c43334(0);
  func_0x000107c614e8();
  func_0x000107c4c214(uVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  return uVar3;
}



/* Entry: 10397fdc4; end: 10397fe37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10397fdc4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112fbab88);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_1);
  }
  return uVar1;
}



/* Entry: 10397fe38; end: 10397fe6b; -[_TtC10WebBrowser17WebViewController getWebViewFactory] */

void FUN_10397fe38(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10397fce8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10397fe6c; end: 10397fefb;  */

void FUN_10397fe6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1039857cc(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10397fefc,uVar2,uVar3);
  return;
}



/* Entry: 10397fefc; end: 10397ff43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397fefc(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c44434(*(undefined8 *)(lVar1 + _DAT_112fbab88));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010397ff40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10397ff44; end: 10397ff87;  */

void FUN_10397ff44(undefined8 param_1)

{
  undefined8 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined8 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010397ff84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10397ff88; end: 10397ffab; -[_TtC10WebBrowser17WebViewController back] */

void FUN_10397ff88(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_1106b3f88;
  puVar2 = &UNK_1106b3fb0;
  func_0x000107c613fc(&UNK_1106b3f88,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c613fc(&UNK_1106b3fb0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dc2c200;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x112d7e678;
  func_0x0001000285a8(0x112d7e678,&UNK_10d93c790);
  uVar4 = 6;
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc2c208,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10397ffac; end: 10398003b;  */

void FUN_10397ffac(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1039857cc(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10398003c,uVar2,uVar3);
  return;
}



/* Entry: 10398003c; end: 103980083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398003c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c44438(*(undefined8 *)(lVar1 + _DAT_112fbab88));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x000103980080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103980084; end: 1039800a7; -[_TtC10WebBrowser17WebViewController forward] */

void FUN_103980084(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_1106b3f38;
  puVar2 = &UNK_1106b3f60;
  func_0x000107c613fc(&UNK_1106b3f38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c613fc(&UNK_1106b3f60,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dc2c1f0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x112d7e678;
  func_0x0001000285a8(0x112d7e678,&UNK_10d93c790);
  uVar4 = 6;
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc2c1f8,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1039800a8; end: 10398017b;  */

void FUN_1039800a8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c613fc(param_3,0x18,7);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  func_0x000107c613fc(param_4,0x20,7);
  *(undefined8 *)(param_4 + 0x10) = param_5;
  *(long *)(param_4 + 0x18) = param_3;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar1 = 0x112d7e678;
  func_0x0001000285a8(0x112d7e678,&UNK_10d93c790);
  uVar2 = 6;
  func_0x0001001ca524(6,0,8,3,0,0,param_6,param_4,uVar1);
  func_0x000107c61574(param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10398017c; end: 103980307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398017c(double param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  undefined8 auStack_50 [2];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(&stack0xffffffffffffffc0 + lVar1);
  func_0x000107c5ee8c();
  (**(code **)(lVar7 + 8))(&stack0xffffffffffffffc0 + lVar1,lVar3);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103980300);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      *(long *)(unaff_x20 + _DAT_112fbab28) = (long)param_1;
      puVar4 = &UNK_1106b3e28;
      func_0x000107c613fc(&UNK_1106b3e28,0x18,7);
      *(long *)(puVar4 + 0x10) = unaff_x20;
      puVar5 = &UNK_1106b3e50;
      func_0x000107c613fc(&UNK_1106b3e50,0x20,7);
      *(undefined **)(puVar5 + 0x10) = &UNK_10dc2c0e0;
      *(undefined **)(puVar5 + 0x18) = puVar4;
      func_0x000107c61174();
      uVar6 = 0x112d7e678;
      func_0x0001000285a8(0x112d7e678,&UNK_10d93c790);
      *(undefined8 *)((long)auStack_50 + lVar1) = uVar6;
      uVar6 = 6;
      func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc2c0e8,puVar5);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(uVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103980308);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103980304);
  (*pcVar2)();
}



/* Entry: 103980308; end: 103980397;  */

void FUN_103980308(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1039857cc(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103980398,uVar2,uVar3);
  return;
}



/* Entry: 103980398; end: 1039803df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103980398(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c4fd70(*(undefined8 *)(lVar1 + _DAT_112fbab88));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x0001039803dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1039803e0; end: 103980407; -[_TtC10WebBrowser17WebViewController refresh] */

void FUN_1039803e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10398017c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103980408; end: 103980547;  */

void FUN_103980408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar2 = 0;
  func_0x000107c5eb08();
  *(long *)(unaff_x22 + 0x30) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x48) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  uVar5 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar6 = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar6;
  uVar6 = 0x112d45220;
  FUN_1039857cc(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103980548,uVar5,uVar6);
  return;
}



/* Entry: 103980548; end: 103980903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103980548(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code *pcVar18;
  
  lVar10 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  lVar9 = *(long *)(lVar10 + _DAT_112fbab88);
  lVar10 = lVar9;
  func_0x000107c3abfc();
  func_0x000107c61180();
  if (lVar10 != 0) {
    func_0x000107c5edb4(*(undefined8 *)(unaff_x22 + 0x80));
    func_0x000107c61170(lVar10);
  }
  puVar16 = (undefined8 *)(unaff_x22 + 0x80);
  lVar11 = *(long *)(unaff_x22 + 0x20);
  pcVar14 = *(code **)(*(long *)(unaff_x22 + 0x50) + 0x38);
  (*pcVar14)(*puVar16,lVar10 == 0,1,*(undefined8 *)(unaff_x22 + 0x48));
  if (lVar11 != 0) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar10 = *(long *)(unaff_x22 + 0x50);
    func_0x000107c5edd0(uVar12,*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
    (**(code **)(lVar10 + 0x30))(uVar12,1,uVar8);
    if ((int)uVar12 == 1) {
      func_0x00010398164c(*(undefined8 *)(unaff_x22 + 0x78),0x112d36580,&UNK_10d9016d0);
    }
    else {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
      lVar10 = *(long *)(unaff_x22 + 0x50);
      func_0x00010398164c(uVar13,0x112d36580,&UNK_10d9016d0);
      pcVar18 = *(code **)(lVar10 + 0x20);
      (*pcVar18)(uVar6,uVar8,uVar12);
      (*pcVar18)(uVar13,uVar6,uVar12);
      (*pcVar14)(uVar13,0,1,uVar12);
    }
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar10 = *(long *)(unaff_x22 + 0x50);
  func_0x00010398580c(*(undefined8 *)(unaff_x22 + 0x80),uVar12,0x112d36580,&UNK_10d9016d0);
  (**(code **)(lVar10 + 0x30))(uVar12,1,uVar8);
  if ((int)uVar12 == 1) {
    func_0x00010398164c(*puVar16,0x112d36580,&UNK_10d9016d0);
    puVar16 = (undefined8 *)(unaff_x22 + 0x70);
    goto LAB_103980880;
  }
  lVar10 = *(long *)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0x50) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x70),
             *(undefined8 *)(unaff_x22 + 0x48));
  if (lVar10 == 0) {
LAB_1039807f8:
    uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar11 = *(long *)(unaff_x22 + 0x50);
    lVar10 = *(long *)(unaff_x22 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(lVar11 + 0x10))(uVar12,uVar13,uVar8);
    func_0x000107c5eaec(uVar6,0x404e000000000000,uVar12,0);
    func_0x000107c5eae0();
    (**(code **)(lVar10 + 8))(uVar6,uVar15);
    func_0x000107c4b768(lVar9);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(uVar12);
    pcVar14 = *(code **)(lVar11 + 8);
  }
  else {
    iVar2 = (int)*(undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c3ebcc();
    if (iVar2 == 0) goto LAB_1039807f8;
    uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar10 = *(long *)(unaff_x22 + 0x50);
    puVar3 = PTR_PTR_1126a6d58;
    func_0x000107c610f8(PTR_PTR_1126a6d58);
    func_0x000107c453e4();
    func_0x000107bc1884();
    func_0x000107c61170(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar6 = 0;
    func_0x000100dfa6ec(0);
    uVar12 = 0x112d377a8;
    func_0x0001039857cc(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
    puVar7 = puVar5;
    func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar12);
    func_0x000107c6142c(puVar5);
    func_0x000107c4de70(puVar3);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    pcVar14 = *(code **)(lVar10 + 8);
  }
  (*pcVar14)(uVar13,uVar8);
LAB_103980880:
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x00010398164c(*puVar16,0x112d36580,&UNK_10d9016d0);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar17);
                    /* WARNING: Could not recover jumptable at 0x000103980900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103980904; end: 103980a2f; -[_TtC10WebBrowser17WebViewController openLinkWithUrlString:inExb:] */

/* WARNING: Possible PIC construction at 0x000103980a10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103980a14) */

void FUN_103980904(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  puVar1 = &UNK_1106b3ee8;
  func_0x000107c613fc(&UNK_1106b3ee8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(long *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  puVar2 = &UNK_1106b3f10;
  func_0x000107c613fc(&UNK_1106b3f10,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dc2c1e0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  uVar3 = 6;
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc2c1e8,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103980a30; end: 103980ae3;  */

void FUN_103980a30(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x90) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar5;
  uVar5 = 0x112d45220;
  FUN_1039857cc(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103980ae4,uVar4,uVar5);
  return;
}



/* Entry: 103980ae4; end: 103980c47;  */

void FUN_103980ae4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  puVar3 = PTR__OBJC_CLASS___WKWebsiteDataStore_1126d6c38;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c41584();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0xc0) = puVar4;
  func_0x000107c3dbc4();
  func_0x000107c61180();
  puVar2 = PTR___sSSSHsWP_11034da90;
  puVar1 = PTR___sSSN_11034da80;
  puVar5 = puVar3;
  func_0x000107c5fe10();
  func_0x000107c61170(puVar3);
  puVar3 = puVar5;
  func_0x000107c5fe08(puVar5,puVar1,puVar2);
  *(undefined **)(unaff_x22 + 200) = puVar3;
  func_0x000107c6142c();
  func_0x000107c5ee60(uVar7);
  func_0x000107c5ee70();
  *(undefined **)(unaff_x22 + 0xd0) = puVar5;
  (**(code **)(lVar6 + 8))(uVar7,uVar8);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_103980c48;
  lVar6 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar6,0);
  uVar7 = 0x112d4e498;
  func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_100f5a198;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1106b3ff0;
  *(long *)(unaff_x22 + 0x70) = lVar6;
  func_0x000107c4fee8(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 103980c48; end: 103980c83;  */

void FUN_103980c48(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_103980c84,*(undefined8 *)(*unaff_x22 + 0xb0),*(undefined8 *)(*unaff_x22 + 0xb8));
  return;
}



/* Entry: 103980c84; end: 103980ce3;  */

void FUN_103980c84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103980ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103980ce4; end: 103980d33; -[_TtC10WebBrowser17WebViewController clearCache] */

void FUN_103980ce4(void)

{
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc2c0f0,0,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 103980d34; end: 103980dc7;  */

void FUN_103980d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1039857cc(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103980dc8,uVar2,uVar3);
  return;
}



/* Entry: 103980dc8; end: 103980e37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103980dc8(void)

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
  uVar4 = *(undefined8 *)(lVar2 + _DAT_112fbab88);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c42a80(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103980e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103980e38; end: 103980f27; -[_TtC10WebBrowser17WebViewController excuteJSWithJs:] */

void FUN_103980e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec();
  puVar1 = &UNK_1106b3e98;
  func_0x000107c613fc(&UNK_1106b3e98,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar2 = &UNK_1106b3ec0;
  func_0x000107c613fc(&UNK_1106b3ec0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dc2c1d0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61434(param_2);
  uVar3 = 6;
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc2c1d8,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103980f28; end: 103980fd7; -[_TtC10WebBrowser17WebViewController webView:createWebViewWithConfiguration:forNavigationAction:windowFeatures:] */

void FUN_103980f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103985030(param_3,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



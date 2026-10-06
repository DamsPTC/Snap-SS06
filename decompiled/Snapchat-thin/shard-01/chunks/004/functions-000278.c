/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100fd967c; end: 100fd9773;  */

void FUN_100fd967c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  
  puVar1 = &UNK_110373c48;
  func_0x000107c613fc(&UNK_110373c48,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_110373dd8;
  func_0x000107c613fc(&UNK_110373dd8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c6157c(puVar1);
  func_0x0001000d224c(&uStack_48);
  uVar3 = uStack_48;
  func_0x000107c614f0(uStack_48);
  puVar4 = &UNK_110373e00;
  func_0x000107c613fc(&UNK_110373e00,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x100fdc30c;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  func_0x000107c6157c(puVar2);
  func_0x00010090569c(0x100fdc460,puVar4,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 100fd9774; end: 100fd9a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd9774(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12_00;
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  lVar1 = _DAT_112d529f8;
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + _DAT_112d529f8,auStack_a0,0,0);
    func_0x0001009f0578(param_2 + lVar1,lVar6);
    lVar3 = lVar6;
    (**(code **)(lVar10 + 0x30))(lVar6,1,lVar2);
    if ((int)lVar3 == 1) {
      func_0x0001000d1dcc(lVar6);
      param_1 = 0.0;
    }
    else {
      (**(code **)(lVar10 + 0x20))(lVar9,lVar6,lVar2);
      func_0x000107c5eea0(lVar8);
      func_0x000107c5ee68(lVar9);
      pcVar7 = *(code **)(lVar10 + 8);
      (*pcVar7)(lVar8,lVar2);
      (*pcVar7)(lVar9,lVar2);
      param_1 = param_1 * 1000.0;
    }
    func_0x0001000d224c(&uStack_b8);
    uVar4 = uStack_b8;
    func_0x000107c614f0(uStack_b8);
    (**(code **)(lStack_b0 + 0xa0))(param_1,param_3,uVar4,lStack_b0);
    func_0x000107c615e8(uStack_b8);
    pcVar7 = *(code **)(lVar10 + 0x38);
    (*pcVar7)(puVar5,1,1,lVar2);
    func_0x000107c61428(param_2 + lVar1,&uStack_b8,0x21,0);
    func_0x000100ed9cbc(puVar5,param_2 + lVar1);
    func_0x000107c614a8(&uStack_b8);
    (*pcVar7)(puVar5,1,1,lVar2);
    lVar1 = _DAT_112d52a00;
    func_0x000107c61428(param_2 + _DAT_112d52a00,&uStack_b8,0x21,0);
    func_0x000100ed9cbc(puVar5,param_2 + lVar1);
    func_0x000107c614a8(&uStack_b8);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100fd9a08; end: 100fd9b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd9a08(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = (long)&uStack_60 - extraout_x8;
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x0001000d224c(&uStack_60);
    func_0x000107c614f0(uStack_60);
    (**(code **)(lStack_58 + 0x88))();
    func_0x000107c615e8(uStack_60);
    func_0x000107c5eea0(lVar1);
    lVar2 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar1,0,1,lVar2);
    lVar2 = _DAT_112d52a00;
    func_0x000107c61428(param_1 + _DAT_112d52a00,&uStack_60,0x21,0);
    func_0x000100ed9cbc(lVar1,param_1 + lVar2);
    func_0x000107c614a8(&uStack_60);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100fd9b24; end: 100fd9c23;  */

void FUN_100fd9b24(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  
  puVar1 = &UNK_110373c48;
  func_0x000107c613fc(&UNK_110373c48,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_110373ea0;
  func_0x000107c613fc(&UNK_110373ea0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c6157c(puVar1);
  func_0x000107c614b0(param_1);
  func_0x0001000d224c(&uStack_48);
  uVar3 = uStack_48;
  func_0x000107c614f0(uStack_48);
  puVar4 = &UNK_110373ec8;
  func_0x000107c613fc(&UNK_110373ec8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100fdc374;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  func_0x000107c6157c(puVar2);
  func_0x00010090569c(0x100fdc46c,puVar4,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 100fd9c24; end: 100fd9e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd9c24(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar5 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar5 - extraout_x12;
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar6 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12_01;
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  lVar2 = _DAT_112d52a00;
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + _DAT_112d52a00,auStack_a0,0,0);
    func_0x0001009f0578(param_2 + lVar2,lVar8);
    func_0x0001009f0578(lVar8,lVar9);
    lVar3 = lVar9;
    (**(code **)(lVar11 + 0x30))(lVar9,1,lVar1);
    if ((int)lVar3 == 1) {
      func_0x0001000d1dcc(lVar8);
      param_1 = 0.0;
    }
    else {
      (**(code **)(lVar11 + 0x20))(lVar7,lVar9,lVar1);
      func_0x000107c5eea0(puVar5);
      func_0x000107c5ee68(lVar7);
      pcVar10 = *(code **)(lVar11 + 8);
      (*pcVar10)(puVar5,lVar1);
      (*pcVar10)(lVar7,lVar1);
      func_0x0001000d1dcc(lVar8);
      param_1 = param_1 * 1000.0;
    }
    func_0x0001000d224c(&uStack_b8);
    uVar4 = uStack_b8;
    func_0x000107c614f0(uStack_b8);
    (**(code **)(lStack_b0 + 0x90))(param_1,param_3,uVar4,lStack_b0);
    func_0x000107c615e8(uStack_b8);
    (**(code **)(lVar11 + 0x38))(lVar6,1,1,lVar1);
    func_0x000107c61428(param_2 + lVar2,&uStack_b8,0x21,0);
    func_0x000100ed9cbc(lVar6,param_2 + lVar2);
    func_0x000107c614a8(&uStack_b8);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100fd9ea0; end: 100fd9eeb;  */

void FUN_100fd9ea0(void)

{
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x0001000d224c(&uStack_30);
  func_0x000107c614f0(uStack_30);
  (**(code **)(lStack_28 + 0x98))();
  func_0x000107c615e8(uStack_30);
  return;
}



/* Entry: 100fd9eec; end: 100fd9f73;  */

void FUN_100fd9eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x0001000d224c(&uStack_80);
  uVar1 = uStack_80;
  func_0x000107c614f0(uStack_80);
  uStack_50 = 0;
  uStack_48 = 1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  (**(code **)(lStack_78 + 0x28))(&uStack_70,uVar1,lStack_78);
  func_0x000107c615e8(uStack_80);
  return;
}



/* Entry: 100fd9f74; end: 100fda093;  */

void FUN_100fd9f74(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c614cc(param_1,auStack_58,auStack_70);
  uVar1 = uStack_68;
  FUN_101010504(uStack_68,uStack_60);
  func_0x0001000d224c(&uStack_80);
  func_0x0001010107f4(uVar1);
  if (param_3 == '\0') {
    uVar3 = 0xe800000000000000;
    uVar4 = 0x6b63616279616c70;
  }
  else {
    uVar3 = 0xe900000000000065;
    uVar4 = 0x646f63736e617274;
    if (param_3 != '\x01') {
      uVar3 = 0xea00000000007469;
      uVar4 = 0x64456c61756e616d;
    }
  }
  uVar2 = uStack_80;
  func_0x000107c614f0(uStack_80);
  (**(code **)(lStack_78 + 0xb8))(param_1,uVar1,uStack_60,uVar4,uVar3,uVar2,lStack_78);
  func_0x000107c615e8(uStack_80);
  func_0x000107c6142c(uStack_60);
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 100fda094; end: 100fda0b3;  */

void FUN_100fda094(code *param_1)

{
  (*param_1)();
  return;
}



/* Entry: 100fda0b4; end: 100fda11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fda0b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000d1dcc(unaff_x20 + _DAT_112d529f0);
  func_0x0001000d1dcc(unaff_x20 + _DAT_112d529f8);
  func_0x0001000d1dcc(unaff_x20 + _DAT_112d52a00);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100fda11c; end: 100fda137;  */

void FUN_100fda11c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *unaff_x20;
  undefined8 uStack_48;
  
  puVar3 = &UNK_110373b08;
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  func_0x000107c614f0(uStack_48);
  func_0x000107c613fc(&UNK_110373b08,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_100fda890;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  func_0x000107c6157c(uVar1);
  func_0x00010090569c(0x100fdc434,puVar3,uVar2);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 100fda138; end: 100fda21b;  */

void FUN_100fda138(undefined8 param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x10);
  puVar1 = &UNK_110373ab8;
  func_0x000107c613fc(&UNK_110373ab8,0x21,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  puVar1[0x20] = param_2;
  func_0x000107c614b0(param_1);
  func_0x000107c6157c(uVar3);
  func_0x0001000d224c(&uStack_48);
  uVar3 = uStack_48;
  func_0x000107c614f0(uStack_48);
  puVar2 = &UNK_110373ae0;
  func_0x000107c613fc(&UNK_110373ae0,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_100fda864;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(FUN_100fda870,puVar2,uVar3);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 100fda21c; end: 100fda26f;  */

void FUN_100fda21c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *unaff_x20;
  undefined8 uStack_48;
  
  puVar3 = &UNK_110373b80;
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  func_0x000107c614f0(uStack_48);
  func_0x000107c613fc(&UNK_110373b80,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x100fda8a8;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  func_0x000107c6157c(uVar1);
  func_0x00010090569c(0x100fdc440,puVar3,uVar2);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 100fda270; end: 100fda31b;  */

void FUN_100fda270(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  func_0x000107c614f0(uStack_48);
  func_0x000107c613fc(param_3,0x20,7);
  *(undefined8 *)(param_3 + 0x10) = param_4;
  *(undefined8 *)(param_3 + 0x18) = uVar1;
  func_0x000107c6157c(uVar1);
  func_0x00010090569c(param_5,param_3,uVar2);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(param_3);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 100fda31c; end: 100fda413;  */

void FUN_100fda31c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x10);
  puVar1 = &UNK_110373bf8;
  func_0x000107c613fc(&UNK_110373bf8,0x31,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  puVar1[0x30] = param_4;
  func_0x000107c61434(param_2);
  func_0x000107c6157c(uVar3);
  func_0x0001000d224c(&uStack_58);
  uVar3 = uStack_58;
  func_0x000107c614f0(uStack_58);
  puVar2 = &UNK_110373c20;
  func_0x000107c613fc(&UNK_110373c20,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x100fda8bc;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x100fdc448,puVar2,uVar3);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 100fda414; end: 100fda4f7;  */

void FUN_100fda414(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x10);
  puVar1 = &UNK_110373ba8;
  func_0x000107c613fc(&UNK_110373ba8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6157c(uVar3);
  func_0x0001000d224c(&uStack_48);
  uVar3 = uStack_48;
  func_0x000107c614f0(uStack_48);
  puVar2 = &UNK_110373bd0;
  func_0x000107c613fc(&UNK_110373bd0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x100fda8b0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x100fdc444,puVar2,uVar3);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 100fda4f8; end: 100fda62f;  */

void FUN_100fda4f8(undefined8 param_1,undefined8 param_2)

{
  FUN_100fd8d08(param_1,param_2,&UNK_110373d88,&UNK_110373db0,FUN_100fdc300,0x100fdc45c);
  return;
}



/* Entry: 100fda630; end: 100fda69f;  */

void FUN_100fda630(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  (**(code **)(lStack_38 + 0xc0))(1,param_1,param_2,uVar1,lStack_38);
  func_0x000107c615e8(uStack_40);
  return;
}



/* Entry: 100fda6a0; end: 100fda71b;  */

void FUN_100fda6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&uStack_50);
  uVar1 = uStack_50;
  func_0x000107c614f0(uStack_50);
  (**(code **)(lStack_48 + 0xc0))(param_1,param_2,param_3,uVar1,lStack_48);
  func_0x000107c615e8(uStack_50);
  return;
}



/* Entry: 100fda71c; end: 100fda793;  */

void FUN_100fda71c(void)

{
  FUN_100fd915c(&UNK_110373e78,0x100fdc324,0x100fdc468);
  return;
}



/* Entry: 100fda794; end: 100fda79b;  */

void FUN_100fda794(void)

{
  if (lRam0000000112d52a30 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61d384);
  return;
}



/* Entry: 100fda79c; end: 100fda7d3;  */

void FUN_100fda79c(undefined8 param_1)

{
  if (lRam0000000112d52a30 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61d384);
  return;
}



/* Entry: 100fda7d4; end: 100fda863;  */

void FUN_100fda7d4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_50 = PTR___sBoWV_11034d678 + 0x40;
  puStack_40 = PTR___sBbWV_11034d660 + 0x40;
  lVar1 = 0x13f;
  puStack_48 = puStack_50;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    lStack_30 = lStack_38;
    lStack_28 = lStack_38;
    func_0x000107c61630(param_1,0x100,6,&puStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 100fda864; end: 100fda86f;  */

void FUN_100fda864(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  cVar2 = *(char *)(unaff_x20 + 0x20);
  func_0x000107c614cc(uVar1,auStack_58,auStack_70);
  uVar3 = uStack_68;
  FUN_101010504(uStack_68,uStack_60);
  func_0x0001000d224c(&uStack_80);
  func_0x0001010107f4(uVar3);
  if (cVar2 == '\0') {
    uVar5 = 0xe800000000000000;
    uVar6 = 0x6b63616279616c70;
  }
  else {
    uVar5 = 0xe900000000000065;
    uVar6 = 0x646f63736e617274;
    if (cVar2 != '\x01') {
      uVar5 = 0xea00000000007469;
      uVar6 = 0x64456c61756e616d;
    }
  }
  uVar4 = uStack_80;
  func_0x000107c614f0(uStack_80);
  (**(code **)(lStack_78 + 0xb8))(uVar1,uVar3,uStack_60,uVar6,uVar5,uVar4,lStack_78);
  func_0x000107c615e8(uStack_80);
  func_0x000107c6142c(uStack_60);
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 100fda870; end: 100fda88f;  */

void FUN_100fda870(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100fda890; end: 100fda8d3;  */

void FUN_100fda890(void)

{
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x0001000d224c(&uStack_30);
  func_0x000107c614f0(uStack_30);
  (**(code **)(lStack_28 + 0x98))();
  func_0x000107c615e8(uStack_30);
  return;
}



/* Entry: 100fda8d4; end: 100fda903;  */

void FUN_100fda8d4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c60688(uVar1,param_1);
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 100fda904; end: 100fda993;  */

void FUN_100fda904(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar4 = *(long *)(param_5 + 0x38);
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))
            (lVar4 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_1,param_4,lVar3);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100fda994);
  (*pcVar2)();
}



/* Entry: 100fda994; end: 100fda9f7;  */

void FUN_100fda994(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 100fda9f8; end: 100fdac4b;  */

void FUN_100fda9f8(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x000100029284();
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0;
    func_0x000107c5eea4();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000100fdb034();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0;
    func_0x000107c5eea4();
    lVar6 = *(long *)(lVar4 + -8);
    (**(code **)(lVar6 + 0x20))(param_1,lVar5 + *(long *)(lVar6 + 0x48) * param_2,lVar4);
    func_0x000100fdc0d0(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fdab04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 100fdac4c; end: 100fdad67;  */

void FUN_100fdac4c(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar4 = param_3;
  FUN_100fda8d4();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100fdacf8);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    uVar3 = (uint)param_3 & 1;
    FUN_100fdb97c(lVar6);
    uVar2 = param_2;
    FUN_100fda8d4();
    if (((uint)uVar4 & 1) != (uVar3 & 1)) {
      func_0x000107c60624(PTR___ss6UInt64VN_11034f048);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fdacdc);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_100fdb254();
    lVar6 = *unaff_x20;
    goto joined_r0x000100fdad0c;
  }
  lVar6 = *unaff_x20;
joined_r0x000100fdad0c:
  if ((uVar4 & 1) == 0) {
    lVar5 = lVar6 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
    *(ulong *)(*(long *)(lVar6 + 0x30) + uVar2 * 8) = param_2;
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 8) = param_1;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fdad68);
      (*pcVar1)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  }
  else {
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 8) = param_1;
  }
  return;
}



/* Entry: 100fdad68; end: 100fdae97;  */

void FUN_100fdad68(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_100fda8d4();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100fdae2c);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_100fdbbd8(lVar5);
    uVar2 = param_2;
    FUN_100fda8d4();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___ss6UInt64VN_11034f048);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fdadf8);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_100fdb3a0();
    lVar5 = *unaff_x20;
    goto joined_r0x000100fdae40;
  }
  lVar5 = *unaff_x20;
joined_r0x000100fdae40:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100fdae98);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 100fdae98; end: 100fdaebf;  */

void FUN_100fdae98(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100fdafb0);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x000100fdbe3c(lVar6,param_4 & 1,0x112d52b00,&UNK_10d9192c0);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fdaf74);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000100fdb4fc(0x112d52b00,&UNK_10d9192c0);
    lVar6 = *unaff_x20;
    goto joined_r0x000100fdafcc;
  }
  lVar6 = *unaff_x20;
joined_r0x000100fdafcc:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100fdb034);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 100fdaec0; end: 100fdb253;  */

void FUN_100fdaec0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100fdafb0);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x000100fdbe3c(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fdaf74);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000100fdb4fc(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x000100fdafcc;
  }
  lVar6 = *unaff_x20;
joined_r0x000100fdafcc:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100fdb034);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 100fdb254; end: 100fdb39f;  */

void FUN_100fdb254(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  
  func_0x0001000285a8(0x112d52af8,&UNK_10d9192b8);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x40);
    lVar7 = lVar5;
    if (uVar4 == 0) goto LAB_100fdb32c;
    do {
      uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      while( true ) {
        uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar10;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
LAB_100fdb32c:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100fdb3a0);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_100fdb380;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
    } while( true );
  }
LAB_100fdb380:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 100fdb3a0; end: 100fdb65b;  */

void FUN_100fdb3a0(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112d52af0,&UNK_10d9192b0);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_100fdb47c;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_100fdb47c:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100fdb4fc);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_100fdb4d4;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_100fdb4d4:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 100fdb65c; end: 100fdb97b;  */

void FUN_100fdb65c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong *puVar22;
  undefined1 auStack_e0 [8];
  undefined1 auStack_a8 [72];
  
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar12 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar19 = *unaff_x20;
  lVar1 = *(long *)(lVar19 + 0x18);
  if (*(long *)(lVar19 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar7 = 0x112d52ae0;
  func_0x0001000285a8(0x112d52ae0,&UNK_10d9192a0);
  lVar8 = lVar19;
  func_0x000107c60490(lVar19,lVar1,param_2,uVar7);
  if (*(long *)(lVar19 + 0x10) == 0) {
LAB_100fdb948:
    func_0x000107c61574(lVar19);
LAB_100fdb950:
    *unaff_x20 = lVar8;
    return;
  }
  puVar22 = (ulong *)(lVar19 + 0x40);
  uVar15 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar18 = uVar18 & *puVar22;
  lVar1 = lVar8 + 0x40;
  lVar10 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar21 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100fdb978);
          (*pcVar5)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar21) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar19);
            goto LAB_100fdb950;
          }
          uVar18 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
          if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
            *puVar22 = -1L << (uVar18 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar22,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar19 + 0x10) = 0;
          goto LAB_100fdb948;
        }
        uVar18 = puVar22[lVar21];
        lVar10 = lVar10 + 1;
      } while (uVar18 == 0);
      uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar21 = lVar10;
    }
    uVar13 = LZCOUNT(uVar13) | lVar21 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar19 + 0x30) + uVar13 * 0x10);
    uVar7 = *puVar2;
    uVar3 = puVar2[1];
    lVar20 = *(long *)(lVar11 + 0x48);
    lVar10 = *(long *)(lVar19 + 0x38) + lVar20 * uVar13;
    if ((param_2 & 1) == 0) {
      (**(code **)(lVar11 + 0x10))(puVar12,lVar10,lVar6);
      func_0x000107c61434(uVar3);
    }
    else {
      (**(code **)(lVar11 + 0x20))(puVar12,lVar10,lVar6);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar8 + 0x28));
    puVar9 = auStack_a8;
    func_0x000107c5fb58(puVar9,uVar7,uVar3);
    func_0x000107c606a8();
    uVar17 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar16 = (ulong)puVar9 & (uVar17 ^ 0xffffffffffffffff);
    uVar14 = uVar16 >> 6;
    uVar13 = -1L << (uVar16 & 0x3f) & (*(ulong *)(lVar1 + uVar14 * 8) ^ 0xffffffffffffffff);
    if (uVar13 == 0) {
      bVar4 = false;
      uVar13 = 0x3f - uVar17 >> 6;
      do {
        uVar16 = uVar14 + 1;
        if ((uVar16 == uVar13) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100fdb97c);
          (*pcVar5)();
        }
        uVar14 = 0;
        if (uVar16 != uVar13) {
          uVar14 = uVar16;
        }
        bVar4 = (bool)(uVar16 == uVar13 | bVar4);
        uVar16 = *(ulong *)(lVar1 + uVar14 * 8);
      } while (uVar16 == 0xffffffffffffffff);
      uVar16 = ~uVar16;
      uVar13 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar14 << 6;
    }
    else {
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar16 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar14) = 1L << (uVar13 & 0x3f) | *(ulong *)(lVar1 + uVar14);
    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar13 * 0x10);
    *puVar2 = uVar7;
    puVar2[1] = uVar3;
    (**(code **)(lVar11 + 0x20))(*(long *)(lVar8 + 0x38) + lVar20 * uVar13,puVar12,lVar6);
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar10 = lVar21;
  } while( true );
}



/* Entry: 100fdb97c; end: 100fdbbd7;  */

void FUN_100fdb97c(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar14 = 0x112d52af8;
  func_0x0001000285a8(0x112d52af8,&UNK_10d9192b8);
  lVar4 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,uVar14);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_100fdbba0:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100fdbbd4);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar11 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar11 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_100fdbba0;
        }
        uVar11 = puVar13[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + uVar6 * 8);
    uVar16 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar6 * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100fdbbd8);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar16;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 100fdbbd8; end: 100fdc29f;  */

void FUN_100fdbbd8(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112d52af0;
  func_0x0001000285a8(0x112d52af0,&UNK_10d9192b0);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_100fdbe08:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100fdbe38);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_100fdbe08;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100fdbe3c);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 100fdc2a0; end: 100fdc2bb;  */

void FUN_100fdc2a0(void)

{
  long unaff_x20;
  
  FUN_100fd8e14(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100fdc2bc; end: 100fdc2c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fdc2bc(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar7;
  long lVar8;
  long unaff_x20;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(ulong *)(unaff_x20 + 0x20);
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_b0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar10 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar12 - extraout_x12_00;
  func_0x000107c61428(lVar3 + 0x10,auStack_88,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + 0x20,&uStack_a0,0x20,0);
    lVar8 = *(long *)(lVar3 + 0x20);
    if (*(long *)(lVar8 + 0x10) != 0) {
      func_0x000107c61434(lVar8);
      lVar4 = lVar1;
      uVar5 = uVar6;
      func_0x000100029284(lVar1);
      if ((uVar5 & 1) == 0) {
        func_0x000107c6142c(lVar8);
      }
      else {
        (**(code **)(lVar14 + 0x10))
                  (lVar12,*(long *)(lVar8 + 0x38) + *(long *)(lVar14 + 0x48) * lVar4,lVar2);
        pcVar9 = *(code **)(lVar14 + 0x20);
        lStack_a8 = lVar1;
        (*pcVar9)(lVar11,lVar12,lVar2);
        func_0x000107c614a8(&uStack_a0);
        func_0x000107c6142c(lVar8);
        func_0x000107c5eea0(lVar10);
        func_0x000107c5ee68(lVar11);
        func_0x0001000d224c(&uStack_a0);
        func_0x000107c614f0(uStack_a0);
        (**(code **)(lStack_98 + 0x70))(param_1 * 1000.0);
        func_0x000107c615e8(uStack_a0);
        pcVar13 = *(code **)(lVar14 + 0x38);
        (*pcVar13)(puVar7,1,1,lVar2);
        func_0x000107c61428(lVar3 + 0x20,&uStack_a0,0x21,0);
        func_0x000107c61434(uVar6);
        FUN_100fd88c8(puVar7,lStack_a8,uVar6);
        func_0x000107c614a8(&uStack_a0);
        (**(code **)(lVar14 + 8))(lVar11,lVar2);
        (*pcVar9)(puVar7,lVar10,lVar2);
        (*pcVar13)(puVar7,0,1,lVar2);
        lVar2 = _DAT_112d529f0;
        func_0x000107c61428(lVar3 + _DAT_112d529f0,&uStack_a0,0x21,0);
        func_0x000100ed9cbc(puVar7,lVar3 + lVar2);
      }
    }
    func_0x000107c614a8(&uStack_a0);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 100fdc2c8; end: 100fdc2ff;  */

void FUN_100fdc2c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100fdc300; end: 100fdc32b;  */

void FUN_100fdc300(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + -extraout_x8;
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x000107c61434(uVar4);
    func_0x000107c5eea0(puVar5);
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar5,0,1,lVar3);
    func_0x000107c61428(lVar2 + 0x20,auStack_70,0x21,0);
    FUN_100fd88c8(puVar5,uVar1,uVar4);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 100fdc32c; end: 100fdc373;  */

void FUN_100fdc32c(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100fdc374; end: 100fdc3cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fdc374(double param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar7 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar7 - extraout_x12;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar11 - extraout_x12_01;
  func_0x000107c61428(lVar4 + 0x10,auStack_88,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  lVar3 = _DAT_112d52a00;
  if (lVar4 != 0) {
    func_0x000107c61428(lVar4 + _DAT_112d52a00,auStack_a0,0,0);
    func_0x0001009f0578(lVar4 + lVar3,lVar10);
    func_0x0001009f0578(lVar10,lVar11);
    lVar5 = lVar11;
    (**(code **)(lVar13 + 0x30))(lVar11,1,lVar2);
    if ((int)lVar5 == 1) {
      func_0x0001000d1dcc(lVar10);
      param_1 = 0.0;
    }
    else {
      (**(code **)(lVar13 + 0x20))(lVar9,lVar11,lVar2);
      func_0x000107c5eea0(puVar7);
      func_0x000107c5ee68(lVar9);
      pcVar12 = *(code **)(lVar13 + 8);
      (*pcVar12)(puVar7,lVar2);
      (*pcVar12)(lVar9,lVar2);
      func_0x0001000d1dcc(lVar10);
      param_1 = param_1 * 1000.0;
    }
    func_0x0001000d224c(&uStack_b8);
    uVar6 = uStack_b8;
    func_0x000107c614f0(uStack_b8);
    (**(code **)(lStack_b0 + 0x90))(param_1,uVar1,uVar6,lStack_b0);
    func_0x000107c615e8(uStack_b8);
    (**(code **)(lVar13 + 0x38))(lVar8,1,1,lVar2);
    func_0x000107c61428(lVar4 + lVar3,&uStack_b8,0x21,0);
    func_0x000100ed9cbc(lVar8,lVar4 + lVar3);
    func_0x000107c614a8(&uStack_b8);
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 100fdc3cc; end: 100fdc40f;  */

void FUN_100fdc3cc(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 100fdc410; end: 100fdc487;  */

void FUN_100fdc410(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 100fdc488; end: 100fdc533;  */

void FUN_100fdc488(void)

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



/* Entry: 100fdc534; end: 100fdc537;  */

void FUN_100fdc534(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d52b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d919440;
  func_0x000107c61520(&UNK_10d919440,&UNK_110374038);
  puRam0000000112d52b28 = puVar1;
  return;
}



/* Entry: 100fdc538; end: 100fdc577;  */

void FUN_100fdc538(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d52b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d919440;
  func_0x000107c61520(&UNK_10d919440,&UNK_110374038);
  puRam0000000112d52b28 = puVar1;
  return;
}



/* Entry: 100fdc578; end: 100fdc6db;  */

int FUN_100fdc578(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100fdc5f4;
        goto LAB_100fdc5d8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100fdc5d8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_100fdc5f4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100fdc6dc; end: 100fdc737;  */

void FUN_100fdc6dc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61610(unaff_x20 + 0x20);
  func_0x000107c61610(unaff_x20 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100fdc738; end: 100fdc7ab;  */

void FUN_100fdc738(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x41) = param_3;
  *(undefined1 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdc7ac,uVar1,uVar2);
  return;
}



/* Entry: 100fdc7ac; end: 100fdc883;  */

void FUN_100fdc7ac(void)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x18) + 0x20;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x22 + 0x18) + 0x28;
    func_0x000107c61618();
    if (lVar2 == 0) goto LAB_100fdc7f0;
  }
  cVar1 = *(char *)(unaff_x22 + 0x41);
  func_0x000107c61170();
  if (cVar1 != '\x01') {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100fdc83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_100fdc7f0:
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x100fdc840;
  plVar3[2] = *(long *)(unaff_x22 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdc910,0,0);
  return;
}



/* Entry: 100fdc884; end: 100fdc8f7;  */

void FUN_100fdc884(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x18);
  cVar4 = *(char *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  bVar5 = cVar4 != '\x01';
  lVar1 = 0x18;
  if (bVar5) {
    lVar1 = 0x10;
  }
  lVar2 = 0x28;
  if (bVar5) {
    lVar2 = 0x20;
  }
  func_0x000107c3e2c0(*(undefined8 *)(lVar3 + lVar1));
  func_0x000107c61604(*(long *)(unaff_x22 + 0x18) + lVar2,*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fdc8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fdc8f8; end: 100fdc90f;  */

void FUN_100fdc8f8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdc910,0,0);
  return;
}



/* Entry: 100fdc910; end: 100fdc9db;  */

void FUN_100fdc910(void)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10) + 0x20;
  func_0x000107c61618();
  lVar3 = *(long *)(unaff_x22 + 0x10);
  if (lVar4 == 0) {
    lVar3 = lVar3 + 0x28;
    func_0x000107c61618();
    if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100fdc9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    lVar4 = *(long *)(unaff_x22 + 0x10);
    func_0x000107c61170();
    lVar3 = *(long *)(lVar4 + 0x18);
    lVar4 = lVar3;
    func_0x000107c614f0();
    plVar1 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x20) = plVar1;
    pcVar2 = FUN_100fdcabc;
  }
  else {
    func_0x000107c61170();
    lVar3 = *(long *)(lVar3 + 0x10);
    lVar4 = lVar3;
    func_0x000107c614f0();
    plVar1 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x18) = plVar1;
    pcVar2 = FUN_100fdc9dc;
  }
  *plVar1 = unaff_x22;
  plVar1[1] = (long)pcVar2;
  plVar1[3] = lVar4;
  plVar1[4] = lVar3;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar1[5] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar1[6] = lVar3;
  plVar1[7] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff4210,lVar3,lVar4);
  return;
}



/* Entry: 100fdc9dc; end: 100fdca23;  */

void FUN_100fdc9dc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdca24,0,0);
  return;
}



/* Entry: 100fdca24; end: 100fdcabb;  */

void FUN_100fdca24(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000107c61604(*(long *)(unaff_x22 + 0x10) + 0x20,0);
  lVar2 = *(long *)(unaff_x22 + 0x10) + 0x28;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x10);
    func_0x000107c61170();
    lVar3 = *(long *)(lVar2 + 0x18);
    lVar2 = lVar3;
    func_0x000107c614f0();
    plVar1 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x20) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100fdcabc;
    plVar1[3] = lVar2;
    plVar1[4] = lVar3;
    lVar3 = 0;
    func_0x000107c5fcec();
    lVar2 = lVar3;
    func_0x000107c5fce8();
    plVar1[5] = lVar2;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar1[6] = lVar3;
    plVar1[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff4210,lVar3,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fdcab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fdcabc; end: 100fdcb3b;  */

void FUN_100fdcabc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fdcb04,0,0);
  return;
}



/* Entry: 100fdcb3c; end: 100fdcba7;  */

void FUN_100fdcb3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdcba8,uVar1,uVar2);
  return;
}



/* Entry: 100fdcba8; end: 100fdcc5f;  */

void FUN_100fdcba8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar2 = lVar3 + 0x20;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x22 + 0x18) + 0x28;
    func_0x000107c61618();
    if (lVar2 == 0) goto LAB_100fdcc10;
  }
  func_0x000107c61170();
  lVar3 = lVar3 + 0x20;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x22 + 0x18) + 0x28;
    func_0x000107c61618();
    if (lVar3 == 0) goto LAB_100fdcc10;
  }
  lVar2 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61170();
  if (lVar3 == lVar2) {
    plVar1 = (long *)0x30;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100fdcc60;
    plVar1[2] = *(long *)(unaff_x22 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdc910,0,0);
    return;
  }
LAB_100fdcc10:
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100fdcc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fdcc60; end: 100fdccd3;  */

void FUN_100fdcc60(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x100fdcca4,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30));
  return;
}



/* Entry: 100fdccd4; end: 100fdcd03;  */

void FUN_100fdccd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 100fdcd04; end: 100fdce27;  */

undefined1  [16] FUN_100fdcd04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x000107c602fc(0x1c);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0xd000000000000010,0x800000010ef1e9f0);
  func_0x000107c5cd58();
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar3 = uVar2;
  func_0x000107c5cda4();
  func_0x000107c61180();
  func_0x000107c2bb50();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  auVar1._8_8_ = 0xe800000000000000;
  auVar1._0_8_ = 0x203a6449736e656c;
  return auVar1;
}



/* Entry: 100fdce28; end: 100fdce33;  */

undefined1  [16] FUN_100fdce28(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  func_0x000107c602fc(0x1c);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar2,uVar3);
  func_0x000107c5fb78(0xd000000000000010,0x800000010ef1e9f0);
  func_0x000107c5cd58();
  func_0x000107c61180();
  uVar2 = uVar5;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar3 = uVar2;
  func_0x000107c5cda4();
  func_0x000107c61180();
  func_0x000107c2bb50();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  auVar1._8_8_ = 0xe800000000000000;
  auVar1._0_8_ = 0x203a6449736e656c;
  return auVar1;
}



/* Entry: 100fdce34; end: 100fdd0c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fdce34(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar8;
  code *pcVar9;
  long unaff_x20;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112d52e50;
  auStack_a0[1] = param_1;
  func_0x0001000285a8(0x112d52e50,&UNK_10d919720);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)((long)auStack_a0 - extraout_x8);
  lVar4 = 0x112d52e38;
  func_0x0001000285a8(0x112d52e38,&UNK_10d919708);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar10 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar10 - extraout_x12;
  lVar4 = 0x112d52ce8;
  func_0x0001000285a8(0x112d52ce8,&UNK_10d9195f0);
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_112d52c48;
  func_0x000107c61428(unaff_x20 + _DAT_112d52c48,auStack_78,0,0);
  FUN_100fdde30(unaff_x20 + lVar1,lVar13);
  lVar5 = lVar13;
  (**(code **)(lVar12 + 0x30))(lVar13,1,lVar4);
  if ((int)lVar5 == 1) {
    FUN_100fe0c14(lVar13,0x112d52e38,&UNK_10d919708);
    uVar6 = 0x112d52e58;
    func_0x0001000285a8(0x112d52e58,&UNK_10d919728);
    *puVar11 = 1;
    (**(code **)(lVar8 + 0x68))
              (puVar11,*(undefined4 *)
                        PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
               ,lVar3);
    puVar7 = &UNK_110374208;
    func_0x000107c613fc(&UNK_110374208,0x18,7);
    func_0x000107c61644(puVar7 + 0x10);
    uVar2 = auStack_a0[1];
    func_0x000107c5fd48(auStack_a0[1],uVar6,puVar11,FUN_100fdde80,puVar7,uVar6);
    func_0x000107c61574(puVar7);
    (**(code **)(lVar12 + 0x10))(lVar10,uVar2,lVar4);
    (**(code **)(lVar12 + 0x38))(lVar10,0,1,lVar4);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_90,0x21,0);
    FUN_100fdde88(lVar10,unaff_x20 + lVar1,0x112d52e38,&UNK_10d919708);
    func_0x000107c614a8(auStack_90);
  }
  else {
    pcVar9 = *(code **)(lVar12 + 0x20);
    (*pcVar9)(lVar13 - extraout_x8_01,lVar13,lVar4);
    (*pcVar9)(auStack_a0[1],lVar13 - extraout_x8_01,lVar4);
  }
  return;
}



/* Entry: 100fdd0c8; end: 100fdd1ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fdd0c8(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d52e30;
  func_0x0001000285a8(0x112d52e30,&UNK_10d919700);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_70 + -extraout_x8;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = 0x112d52cd8;
    func_0x0001000285a8(0x112d52cd8,&UNK_10d9195e8);
    lVar3 = *(long *)(lVar1 + -8);
    (**(code **)(lVar3 + 0x10))(puVar2,param_1,lVar1);
    (**(code **)(lVar3 + 0x38))(puVar2,0,1,lVar1);
    lVar1 = _DAT_112d52c40;
    func_0x000107c61428(param_2 + _DAT_112d52c40,auStack_70,0x21,0);
    FUN_100fdde88(puVar2,param_2 + lVar1,0x112d52e30,&UNK_10d919700);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100fdd1f0; end: 100fdd47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fdd1f0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long alStack_80 [2];
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d52e28;
  func_0x0001000285a8(0x112d52e28,&UNK_10d91ace0);
  lVar14 = *(long *)(lVar1 + -8);
  lVar10 = *(long *)(lVar14 + 0x40);
  lStack_68 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d52e20;
  lStack_70 = (long)&lStack_70 - extraout_x8;
  func_0x0001000285a8(0x112d52e20,&UNK_10d9196f0);
  lVar11 = *(long *)(lVar1 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar13 = ((long)&lStack_70 - extraout_x8) - extraout_x8_00;
  puVar2 = &UNK_110374208;
  func_0x000107c613fc(&UNK_110374208,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  (**(code **)(lVar11 + 0x10))(lVar13,unaff_x20 + _DAT_112d52be8,lVar1);
  uVar7 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar8 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  uVar9 = lVar12 + uVar8 + 7 & 0xfffffffffffffff8;
  puVar3 = &UNK_110374230;
  func_0x000107c613fc(&UNK_110374230,uVar9 + 8,uVar7 | 7);
  (**(code **)(lVar11 + 0x20))(puVar3 + uVar8,lVar13,lVar1);
  *(undefined **)(puVar3 + uVar9) = puVar2;
  puVar2 = PTR___sytN_11034f1b0 + 8;
  *(undefined **)(lVar13 + -0x10) = puVar2;
  uVar4 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d919738,puVar3);
  func_0x000107c61574(puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d52c68);
  *(undefined8 *)(unaff_x20 + _DAT_112d52c68) = uVar4;
  func_0x000107c61574(uVar5);
  puVar3 = &UNK_110374208;
  func_0x000107c613fc(&UNK_110374208,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  lVar11 = lStack_68;
  lVar1 = lStack_70;
  (**(code **)(lVar14 + 0x10))(lStack_70,unaff_x20 + _DAT_112d52bf0,lStack_68);
  uVar7 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar8 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  uVar9 = lVar10 + uVar8 + 7 & 0xfffffffffffffff8;
  puVar6 = &UNK_110374258;
  func_0x000107c613fc(&UNK_110374258,uVar9 + 8,uVar7 | 7);
  (**(code **)(lVar14 + 0x20))(puVar6 + uVar8,lVar1,lVar11);
  *(undefined **)(puVar6 + uVar9) = puVar3;
  *(undefined **)(lVar13 + -0x10) = puVar2;
  uVar4 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d919748,puVar6);
  func_0x000107c61574(puVar6);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d52c70);
  *(undefined8 *)(unaff_x20 + _DAT_112d52c70) = uVar4;
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 100fdd47c; end: 100fdd753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fdd47c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  
  lVar3 = _DAT_112d52c68;
  puVar1 = PTR___sytN_11034f1b0;
  lVar5 = *(long *)(unaff_x20 + _DAT_112d52c68);
  if (lVar5 != 0) {
    func_0x000107c6157c(lVar5);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar5);
  }
  lVar5 = _DAT_112d52c70;
  lVar6 = *(long *)(unaff_x20 + _DAT_112d52c70);
  if (lVar6 != 0) {
    func_0x000107c6157c(lVar6);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar6);
  }
  lVar6 = _DAT_112d52c60;
  lVar7 = *(long *)(unaff_x20 + _DAT_112d52c60);
  if (lVar7 != 0) {
    func_0x000107c6157c(lVar7);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar7);
  }
  lVar7 = _DAT_112d52c78;
  lVar8 = *(long *)(unaff_x20 + _DAT_112d52c78);
  if (lVar8 != 0) {
    func_0x000107c6157c(lVar8);
    uVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar8,puVar1 + 8,uVar4,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar8);
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  lVar2 = _DAT_112d52be8;
  lVar8 = 0x112d52e20;
  func_0x0001000285a8(0x112d52e20,&UNK_10d9196f0);
  (**(code **)(*(long *)(lVar8 + -8) + 8))(unaff_x20 + lVar2,lVar8);
  lVar2 = _DAT_112d52bf0;
  lVar8 = 0x112d52e28;
  func_0x0001000285a8(0x112d52e28,&UNK_10d91ace0);
  (**(code **)(*(long *)(lVar8 + -8) + 8))(unaff_x20 + lVar2,lVar8);
  func_0x0001000834e4(unaff_x20 + _DAT_112d52bf8);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d52c08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d52c10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d52c18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d52c20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d52c28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d52c30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112d52c38));
  FUN_100fe0c14(unaff_x20 + _DAT_112d52c40,0x112d52e30,&UNK_10d919700);
  FUN_100fe0c14(unaff_x20 + _DAT_112d52c48,0x112d52e38,&UNK_10d919708);
  lVar2 = _DAT_112d52c50;
  lVar8 = 0x112d52e40;
  func_0x0001000285a8(0x112d52e40,&UNK_10d919710);
  (**(code **)(*(long *)(lVar8 + -8) + 8))(unaff_x20 + lVar2,lVar8);
  lVar2 = _DAT_112d52c58;
  lVar8 = 0x112d52e48;
  func_0x0001000285a8(0x112d52e48,&UNK_10d919718);
  (**(code **)(*(long *)(lVar8 + -8) + 8))(unaff_x20 + lVar2,lVar8);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + lVar3));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + lVar5));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + lVar7));
  return;
}



/* Entry: 100fdd754; end: 100fdd777;  */

void FUN_100fdd754(void)

{
  FUN_100fdd47c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100fdd778; end: 100fdd77f;  */

void FUN_100fdd778(void)

{
  if (lRam0000000112d52ca8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61d4f4);
  return;
}



/* Entry: 100fdd780; end: 100fdd7b7;  */

void FUN_100fdd780(undefined8 param_1)

{
  if (lRam0000000112d52ca8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61d4f4);
  return;
}



/* Entry: 100fdd7b8; end: 100fdd977;  */

void FUN_100fdd7b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBoWV_11034d678;
  puStack_c0 = PTR___sBoWV_11034d678 + 0x40;
  uVar3 = 0x112d52cb8;
  lVar2 = 0x13f;
  FUN_100fdd9c8(0x13f,0x112d52cb8,0x112d52cc0,&UNK_10d919598,PTR___sScSMa_11034fda0);
  if (uVar3 < 0x40) {
    lStack_b8 = *(long *)(lVar2 + -8) + 0x40;
    lVar2 = 0x13f;
    FUN_100fdd978();
    if (uVar3 < 0x40) {
      lStack_b0 = *(long *)(lVar2 + -8) + 0x40;
      puStack_a8 = &UNK_10d9195a0;
      puStack_98 = puVar1 + 0x40;
      puStack_a0 = &UNK_10d9195b8;
      puStack_68 = &UNK_10d9195d0;
      uVar3 = 0x112d52cd0;
      lVar2 = 0x13f;
      puStack_90 = puStack_98;
      puStack_88 = puStack_98;
      puStack_80 = puStack_98;
      puStack_78 = puStack_98;
      puStack_70 = puStack_98;
      FUN_100fdd9c8(0x13f,0x112d52cd0,0x112d52cd8,&UNK_10d9195e8,PTR___sSqMa_11034e168);
      if (uVar3 < 0x40) {
        lStack_60 = *(long *)(lVar2 + -8) + 0x40;
        uVar3 = 0x112d52ce0;
        lVar2 = 0x13f;
        FUN_100fdd9c8(0x13f,0x112d52ce0,0x112d52ce8,&UNK_10d9195f0,PTR___sSqMa_11034e168);
        if (uVar3 < 0x40) {
          lStack_58 = *(long *)(lVar2 + -8) + 0x40;
          uVar3 = 0x112d52cf0;
          lVar2 = 0x13f;
          FUN_100fdda68(0x13f,0x112d52cf0,PTR___sScS12ContinuationVMa_11034fd50);
          if (uVar3 < 0x40) {
            lStack_50 = *(long *)(lVar2 + -8) + 0x40;
            uVar3 = 0x112d52d00;
            lVar2 = 0x13f;
            FUN_100fdda68(0x13f,0x112d52d00,PTR___sScSMa_11034fda0);
            if (uVar3 < 0x40) {
              lStack_48 = *(long *)(lVar2 + -8) + 0x40;
              puStack_40 = &UNK_10d9195f8;
              puStack_38 = &UNK_10d9195f8;
              puStack_30 = &UNK_10d9195f8;
              puStack_28 = &UNK_10d9195f8;
              func_0x000107c61630(param_1,0x100,0x14,&puStack_c0,param_1 + 0x50);
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 100fdd978; end: 100fdd9c7;  */

void FUN_100fdd978(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d52cc8 != 0) {
    return;
  }
  puVar1 = &UNK_110374a00;
  func_0x000107c5fd44();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d52cc8 = param_1;
  return;
}



/* Entry: 100fdd9c8; end: 100fdda23;  */

void FUN_100fdd9c8(long param_1,long *param_2,long param_3,undefined8 param_4,code *param_5)

{
  if (*param_2 == 0) {
    func_0x00010002969c(param_3,param_4);
    (*param_5)();
    if (param_3 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 100fdda24; end: 100fdda67;  */

void FUN_100fdda24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d52cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d95a8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d52cf8 = puVar1;
  return;
}



/* Entry: 100fdda68; end: 100fddabf;  */

void FUN_100fdda68(long param_1,long *param_2,code *param_3)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0xff;
    FUN_100fdda24();
    (*param_3)();
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 100fddac0; end: 100fddc4b;  */

int FUN_100fddac0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    param_2 = param_2 + 3;
    uVar4 = 2;
    if (0xfffeff < param_2) {
      uVar4 = 4;
    }
    if (param_2 >> 8 < 0xff) {
      uVar4 = 1;
    }
    uVar1 = 0;
    if (0xff < param_2) {
      uVar1 = uVar4;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar4 = (uint)param_1[1], param_1[1] != 0)) goto LAB_100fddb28;
    }
    else if (uVar1 == 2) {
      uVar4 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) {
LAB_100fddb28:
        return ((uint)*param_1 | uVar4 << 8) - 3;
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 1);
      if (uVar4 != 0) goto LAB_100fddb28;
    }
  }
  iVar3 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar3 = -1;
  }
  iVar2 = 0;
  if (1 < iVar3 + 1U) {
    iVar2 = iVar3;
  }
  return iVar2;
}



/* Entry: 100fddc4c; end: 100fddcaf;  */

void FUN_100fddc4c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 100fddcb0; end: 100fddd13;  */

undefined8 * FUN_100fddcb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100fddd14; end: 100fddd57;  */

undefined8 * FUN_100fddd14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100fddd58; end: 100fdddef;  */

int FUN_100fddd58(int *param_1,int param_2)

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



/* Entry: 100fdddf0; end: 100fdde2f;  */

void FUN_100fdddf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d52e18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d919694;
  func_0x000107c61520(&UNK_10d919694,&UNK_110374120);
  puRam0000000112d52e18 = puVar1;
  return;
}



/* Entry: 100fdde30; end: 100fdde7f;  */

undefined8 FUN_100fdde30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d52e38;
  func_0x0001000285a8(0x112d52e38,&UNK_10d919708);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100fdde80; end: 100fdde87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fdde80(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d52e30;
  func_0x0001000285a8(0x112d52e30,&UNK_10d919700);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_70 + -extraout_x8;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = 0x112d52cd8;
    func_0x0001000285a8(0x112d52cd8,&UNK_10d9195e8);
    lVar4 = *(long *)(lVar2 + -8);
    (**(code **)(lVar4 + 0x10))(puVar3,param_1,lVar2);
    (**(code **)(lVar4 + 0x38))(puVar3,0,1,lVar2);
    lVar2 = _DAT_112d52c40;
    func_0x000107c61428(lVar1 + _DAT_112d52c40,auStack_70,0x21,0);
    FUN_100fdde88(puVar3,lVar1 + lVar2,0x112d52e30,&UNK_10d919700);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100fdde88; end: 100fddecf;  */

undefined8 FUN_100fdde88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x28))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100fdded0; end: 100fddee7;  */

void FUN_100fdded0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fddee8,0,0);
  return;
}



/* Entry: 100fddee8; end: 100fddfaf;  */

void FUN_100fddee8(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x38,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x58) = lVar5;
  if (lVar5 != 0) {
    func_0x0001000d224c(unaff_x22 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar5 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
    piVar4 = *(int **)(lVar5 + 0x10);
    iVar1 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100fddfb0;
                    /* WARNING: Could not recover jumptable at 0x000100fddf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))(uVar2,lVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fddfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fddfb0; end: 100fde0ef;  */

void FUN_100fddfb0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    uVar1 = 0x100fde00c;
  }
  else {
    uVar1 = 0x100fde048;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 100fde0f0; end: 100fde187;  */

void FUN_100fde0f0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar1 = *(long *)(unaff_x22 + 0x98);
  func_0x0001000285a8(0x112d52e20,&UNK_10d9196f0);
  func_0x000107c5fd34(uVar3);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x78,0,0);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fde188;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 100fde188; end: 100fde1cf;  */

void FUN_100fde188(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fde1d0,0,0);
  return;
}



/* Entry: 100fde1d0; end: 100fde2bf;  */

void FUN_100fde1d0(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  *(long *)(unaff_x22 + 0xc0) = lVar5;
  *(undefined8 *)(unaff_x22 + 200) = uVar1;
  if (lVar5 == 0) {
    (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))
              (*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0xa0));
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x10);
    *(long *)(unaff_x22 + 0x50) = lVar5;
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x30);
    *(char *)(unaff_x22 + 0x70) = (char)*(undefined8 *)(unaff_x22 + 0x38);
    lVar2 = *(long *)(unaff_x22 + 0x98) + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0xd0) = lVar2;
    if (lVar2 != 0) {
      plVar3 = (long *)0x100;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xd8) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_100fde2c0;
      plVar3[0x11] = lVar6;
      plVar3[0x12] = lVar2;
      plVar3[0x10] = unaff_x22 + 0x48;
      lVar5 = 0x112d52cd8;
      func_0x0001000285a8(0x112d52cd8,&UNK_10d9195e8);
      plVar3[0x13] = lVar5;
      lVar5 = *(long *)(lVar5 + -8);
      plVar3[0x14] = lVar5;
      uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar3[0x15] = uVar4;
      lVar5 = 0x112d52e68;
      func_0x0001000285a8(0x112d52e68,&UNK_10d919760);
      uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar3[0x16] = uVar4;
      lVar5 = 0x112d52e80;
      func_0x0001000285a8(0x112d52e80,&UNK_10d919798);
      plVar3[0x17] = lVar5;
      lVar5 = *(long *)(lVar5 + -8);
      plVar3[0x18] = lVar5;
      uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar3[0x19] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_100fde4e4,0,0);
      return;
    }
    (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))
              (*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x000107c6142c(lVar5);
    func_0x000107c6142c(uVar1);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x000100fde2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fde2c0; end: 100fde31b;  */

void FUN_100fde2c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xc0);
  uVar2 = *(undefined8 *)(lVar3 + 200);
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd8));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fde31c,0,0);
  return;
}



/* Entry: 100fde31c; end: 100fde37b;  */

void FUN_100fde31c(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fde188;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 100fde37c; end: 100fde413;  */

void FUN_100fde37c(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = 0x112d52e20;
  func_0x0001000285a8(0x112d52e20,&UNK_10d9196f0);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar2 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar2 + 7 & 0xffffffffffffff8));
  plVar1 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100fe143c;
  plVar1[0x12] = unaff_x20 + uVar2;
  plVar1[0x13] = lVar3;
  lVar3 = 0x112d52e78;
  func_0x0001000285a8(0x112d52e78,&UNK_10d919788);
  plVar1[0x14] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[0x15] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x16] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fde0f0,0,0);
  return;
}



/* Entry: 100fde414; end: 100fde4e3;  */

void FUN_100fde414(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  lVar2 = 0x112d52cd8;
  func_0x0001000285a8(0x112d52cd8,&UNK_10d9195e8);
  *(long *)(unaff_x22 + 0x98) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar1;
  lVar2 = 0x112d52e68;
  func_0x0001000285a8(0x112d52e68,&UNK_10d919760);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar1;
  lVar2 = 0x112d52e80;
  func_0x0001000285a8(0x112d52e80,&UNK_10d919798);
  *(long *)(unaff_x22 + 0xb8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fde4e4,0,0);
  return;
}



/* Entry: 100fde4e4; end: 100fde8a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fde4e4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  
  lVar8 = *(long *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(lVar8 + _DAT_112d52c18);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c6157c(uVar10);
  uVar12 = unaff_x22 + 0x10;
  func_0x000100075034(0x100fe12ec,uVar12,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar10);
  uVar10 = *(undefined8 *)(lVar8 + _DAT_112d52c20);
  func_0x000107c6157c(uVar10);
  func_0x0001000c74f0(unaff_x22 + 0x60);
  func_0x000107c61574(uVar10);
  lVar8 = *(long *)(unaff_x22 + 0x60);
  if (lVar8 != 0) {
    uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0x90) + _DAT_112d52c10);
    func_0x000107c6157c(uVar10);
    func_0x0001000c74f0(unaff_x22 + 0x78);
    func_0x000107c61574(uVar10);
    lVar11 = *(long *)(unaff_x22 + 0x78);
    lVar14 = lVar8;
    func_0x000107c5cda4();
    func_0x000107c61180();
    lVar6 = lVar14;
    func_0x000107c2bb50();
    func_0x000107c61170(lVar14);
    if ((*(long *)(lVar11 + 0x10) != 0) && (FUN_100fda8d4(), (uVar12 & 1) != 0)) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
      puVar13 = *(undefined8 **)(unaff_x22 + 0x80);
      uVar3 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + lVar6 * 8);
      func_0x000107c61174(uVar3);
      func_0x000107c6142c(lVar11);
      uVar1 = *puVar13;
      uVar5 = puVar13[1];
      func_0x000107c61434(uVar5);
      uVar4 = uVar3;
      FUN_100fdf668(uVar3);
      FUN_100fdf99c(uVar1,uVar5,uVar4,uVar10,1);
      func_0x000107c6142c(uVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(lVar8);
      goto LAB_100fde808;
    }
    func_0x000107c6142c(lVar11);
    func_0x000107c61170(lVar8);
  }
  plVar9 = (long *)(*(long *)(unaff_x22 + 0x90) + _DAT_112d52c00);
  if ((char)plVar9[1] == '\x01') {
    plVar9 = *(long **)(unaff_x22 + 0x80);
    if ((char)plVar9[5] == '\x01') {
      uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0x90) + _DAT_112d52c08);
      func_0x000107c6157c(uVar10);
      func_0x0001000c74f0(unaff_x22 + 0x68);
      func_0x000107c61574(uVar10);
      lVar8 = *(long *)(unaff_x22 + 0x68);
      lVar14 = *plVar9;
      *(long *)(unaff_x22 + 0xd0) = lVar14;
      uVar12 = plVar9[1];
      *(ulong *)(unaff_x22 + 0xd8) = uVar12;
      if (*(long *)(lVar8 + 0x10) == 0) {
LAB_100fde858:
        func_0x000107c6142c(lVar8);
        plVar9 = (long *)0xa0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xe0) = plVar9;
        *plVar9 = unaff_x22;
        plVar9[1] = (long)FUN_100fde8a8;
        plVar9[0xd] = *(long *)(unaff_x22 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe0cf8,0,0);
        return;
      }
      func_0x000107c61434(uVar12);
      func_0x000107c61434(lVar8);
      lVar6 = lVar14;
      uVar7 = uVar12;
      func_0x000100029284();
      if ((uVar7 & 1) == 0) {
        func_0x000107c6142c(lVar8);
        func_0x000107c6142c(uVar12);
        goto LAB_100fde858;
      }
      lVar11 = *(long *)(unaff_x22 + 0xc0);
      uVar1 = *(undefined8 *)(unaff_x22 + 200);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar4 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + lVar6 * 8);
      func_0x000107c61174();
      func_0x000107c61430(lVar8,2);
      func_0x000107c61174();
      FUN_100fdf99c(lVar14,uVar12,uVar4,uVar10,0);
      func_0x000107c6142c(uVar12);
      func_0x000107c61170(uVar4);
      uVar10 = uVar4;
      func_0x000107c5cd58();
      func_0x000107c61180();
      uVar5 = uVar10;
      func_0x000107c5cd58();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
      func_0x000107c61174(uVar5);
      uVar10 = 0x112d52e40;
      func_0x0001000285a8(0x112d52e40,&UNK_10d919710);
      func_0x000107c5fd28(uVar1,unaff_x22 + 0x70,uVar10);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      (**(code **)(lVar11 + 8))(uVar1,uVar3);
      goto LAB_100fde808;
    }
    lVar6 = plVar9[4];
    if (lVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fde8a8);
      (*pcVar2)();
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar8 = *plVar9;
    lVar14 = plVar9[1];
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar6 = *plVar9;
    lVar8 = **(long **)(unaff_x22 + 0x80);
    lVar14 = (*(long **)(unaff_x22 + 0x80))[1];
  }
  func_0x000100fdfc64(lVar6,lVar8,lVar14,uVar10);
LAB_100fde808:
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100fde844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fde8a8; end: 100fde913;  */

void FUN_100fde8a8(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xf0) = param_1;
    pcVar1 = FUN_100fde914;
  }
  else {
    pcVar1 = FUN_100fde968;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fde914; end: 100fde967;  */

void FUN_100fde914(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000100fdfc64(*(undefined8 *)(unaff_x22 + 0xf0),*(undefined8 *)(unaff_x22 + 0xd0),
                      *(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0x88));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fde964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



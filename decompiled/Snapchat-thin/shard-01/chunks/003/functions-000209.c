/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e8eeb4; end: 100e8ef23;  */

void FUN_100e8eeb4(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    FUN_100e8ef2c();
    func_0x000107c61574(param_2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 100e8ef24; end: 100e8ef2b;  */

void FUN_100e8ef24(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_100e8ef2c();
    func_0x000107c61574(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 100e8ef2c; end: 100e8f157;  */

long FUN_100e8ef2c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x12;
  long *plVar5;
  code *pcVar6;
  long alStack_200 [4];
  undefined **ppuStack_1e0;
  undefined1 *apuStack_1d8 [3];
  long lStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 auStack_1b0 [40];
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
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  long lStack_108;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  FUN_100e8f2ec();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db1dd8;
    func_0x000107c5faec();
    uStack_b8 = 0;
    uStack_b0 = 0x201;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_68 = 0;
    ppuStack_c8 = ppuVar1;
    uStack_c0 = param_2;
    func_0x000103e3687c(auStack_128);
    func_0x0001000a8868(auStack_128,uStack_110);
    pcVar6 = *(code **)(lStack_108 + 8);
    func_0x000107c615f0(param_1);
    (*pcVar6)(auStack_1b0,0xd000000000000012,0x800000010ef12250,&ppuStack_c8,param_1,uStack_110,
              lStack_108);
    func_0x000107c615e8(param_1);
    func_0x0001000834e4(auStack_128);
    FUN_100e8f6c4(auStack_1b0,auStack_128);
    lVar2 = 0;
    func_0x000100e9f7f4();
    func_0x000107c613fc();
    puVar3 = auStack_128;
    FUN_100e9ebb8();
    ppuStack_1b8 = &PTR_DAT_11035dba0;
    lVar4 = 0;
    apuStack_1d8[0] = puVar3;
    lStack_1c0 = lVar2;
    func_0x000100e89580();
    func_0x000107c613fc();
    func_0x0001000c6518(apuStack_1d8,lVar2);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
    plVar5 = (long *)((long)alStack_200 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(plVar5);
    alStack_200[0] = *plVar5;
    ppuStack_1e0 = &PTR_DAT_11035dba0;
    alStack_200[3] = lVar2;
    FUN_100e8f6c4(alStack_200,lVar4 + 0x10);
    func_0x00010448a8f4(auStack_128);
    func_0x00010448aa5c(&uStack_188);
    FUN_100e19000(auStack_128);
    func_0x0001000834e4(alStack_200);
    *(undefined8 *)(lVar4 + 0x60) = uStack_160;
    *(undefined8 *)(lVar4 + 0x58) = uStack_168;
    *(undefined8 *)(lVar4 + 0x70) = uStack_150;
    *(undefined8 *)(lVar4 + 0x68) = uStack_158;
    *(undefined8 *)(lVar4 + 0x80) = uStack_140;
    *(undefined8 *)(lVar4 + 0x78) = uStack_148;
    *(undefined8 *)(lVar4 + 0x90) = uStack_130;
    *(undefined8 *)(lVar4 + 0x88) = uStack_138;
    *(undefined8 *)(lVar4 + 0x40) = uStack_180;
    *(undefined8 *)(lVar4 + 0x38) = uStack_188;
    *(undefined8 *)(lVar4 + 0x50) = uStack_170;
    *(undefined8 *)(lVar4 + 0x48) = uStack_178;
    func_0x0001000834e4(apuStack_1d8);
    func_0x000100e1b054(&ppuStack_c8);
    func_0x000107c615e8(param_1);
    func_0x0001000834e4(auStack_1b0);
  }
  return lVar4;
}



/* Entry: 100e8f158; end: 100e8f28b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8f158(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x0001000d224c(&lStack_60);
    if (lStack_60 == 0) {
      func_0x000107c61574(param_1);
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + _DAT_1130525f0);
      lVar1 = 0;
      func_0x000100e8bafc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar1 + 0x10) = uVar3;
      uVar2 = 0;
      FUN_100e8ad1c(0);
      func_0x000107c610f8();
      func_0x000107c615f0(uVar3);
      func_0x000107c453e4(uVar2);
      func_0x000107c6157c(lStack_60);
      func_0x000107c6157c(lVar1);
      func_0x000107c61174(uVar2);
      func_0x000107c6157c(param_3);
      FUN_100e8f4b0(lStack_60,lVar1,uVar2,param_3);
      func_0x000107c61574(lStack_60);
      func_0x000107c61574(lVar1);
      func_0x000107c61170(uVar2);
      func_0x000107c61574(param_1);
    }
  }
  return;
}



/* Entry: 100e8f28c; end: 100e8f297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8f28c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x0001000d224c(&lStack_60);
    if (lStack_60 == 0) {
      func_0x000107c61574(lVar1);
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0x20) + _DAT_1130525f0);
      lVar2 = 0;
      func_0x000100e8bafc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x10) = uVar5;
      uVar3 = 0;
      FUN_100e8ad1c(0);
      func_0x000107c610f8();
      func_0x000107c615f0(uVar5);
      func_0x000107c453e4(uVar3);
      func_0x000107c6157c(lStack_60);
      func_0x000107c6157c(lVar2);
      func_0x000107c61174(uVar3);
      func_0x000107c6157c(uVar4);
      FUN_100e8f4b0(lStack_60,lVar2,uVar3,uVar4);
      func_0x000107c61574(lStack_60);
      func_0x000107c61574(lVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61574(lVar1);
    }
  }
  return;
}



/* Entry: 100e8f298; end: 100e8f2cf;  */

void FUN_100e8f298(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100e8f2d0; end: 100e8f2eb;  */

void FUN_100e8f2d0(long param_1,long param_2)

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



/* Entry: 100e8f2ec; end: 100e8f393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100e8f2ec(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010ef163c0);
    lVar3 = lVar1;
    func_0x000107c4e60c(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  return lVar3;
}



/* Entry: 100e8f394; end: 100e8f3b7;  */

/* WARNING: Possible PIC construction at 0x000100e8f3a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e8f3a4) */

void FUN_100e8f394(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100e8f3b8; end: 100e8f40b;  */

void FUN_100e8f3b8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e8f40c; end: 100e8f48b;  */

void FUN_100e8f40c(undefined8 param_1)

{
  if (lRam0000000112d45400 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e616378);
  return;
}



/* Entry: 100e8f48c; end: 100e8f4af;  */

void FUN_100e8f48c(undefined8 *param_1,undefined8 param_2)

{
  FUN_100e8ecf4();
  *param_1 = param_2;
  return;
}



/* Entry: 100e8f4b0; end: 100e8f6c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100e8f4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long alStack_160 [5];
  long lStack_138;
  undefined **ppuStack_130;
  undefined8 auStack_128 [3];
  long lStack_110;
  undefined **ppuStack_108;
  long *aplStack_100 [3];
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined8 auStack_d8 [3];
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 auStack_b0 [3];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 auStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  plVar6 = alStack_160;
  lVar7 = *param_4;
  lVar1 = 0;
  func_0x000100e89580();
  ppuStack_68 = &PTR_DAT_11035dbb0;
  uVar2 = 0;
  auStack_88[0] = param_1;
  lStack_70 = lVar1;
  func_0x000100e8bafc();
  ppuStack_90 = &PTR_DAT_11035dcc8;
  uVar3 = 0;
  auStack_b0[0] = param_2;
  uStack_98 = uVar2;
  FUN_100e8ad1c();
  ppuStack_b8 = &PTR_DAT_11035dcb0;
  ppuStack_e0 = &PTR_DAT_11035dd30;
  lVar4 = 0;
  aplStack_100[0] = param_4;
  lStack_e8 = lVar7;
  auStack_d8[0] = param_3;
  uStack_c0 = uVar3;
  FUN_100e8de44();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_88,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)alStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  func_0x0001000c6518(aplStack_100,lVar7);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar9 = (undefined8 *)((long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar9);
  auStack_128[0] = *puVar8;
  alStack_160[2] = *puVar9;
  ppuStack_108 = &PTR_DAT_11035dbb0;
  ppuStack_130 = &PTR_DAT_11035dd30;
  lStack_138 = lVar7;
  lStack_110 = lVar1;
  FUN_100e8f6c4(auStack_128,lVar5 + _DAT_112d45380);
  FUN_100e8f6c4(auStack_b0,lVar5 + _DAT_112d45388);
  FUN_100e8f6c4(auStack_d8,lVar5 + _DAT_112d45390);
  FUN_100e8f6c4(alStack_160 + 2,lVar5 + _DAT_112d45398);
  alStack_160[0] = lVar5;
  alStack_160[1] = lVar4;
  func_0x000107c61154(alStack_160,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_d8);
  func_0x0001000834e4(auStack_b0);
  func_0x0001000834e4(alStack_160 + 2);
  func_0x0001000834e4(auStack_128);
  func_0x0001000834e4(aplStack_100);
  func_0x0001000834e4(auStack_88);
  return (undefined1 *)plVar6;
}



/* Entry: 100e8f6c4; end: 100e8f76f;  */

long FUN_100e8f6c4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100e8f770; end: 100e8f7d3;  */

undefined1  [16] FUN_100e8f770(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar1 = 0x656c707061;
  if (bVar5 != 2) {
    uVar1 = 0x68746f62;
  }
  uVar2 = 0xe500000000000000;
  if (bVar5 != 2) {
    uVar2 = 0xe400000000000000;
  }
  uVar3 = 0x656e6f6e;
  if (bVar5 != 0) {
    uVar3 = 0x656c676f6f67;
  }
  uVar4 = 0xe400000000000000;
  if (bVar5 != 0) {
    uVar4 = 0xe600000000000000;
  }
  if (bVar5 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Entry: 100e8f7d4; end: 100e8f83b;  */

void FUN_100e8f7d4(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000100e8fdc0();
  *param_1 = uVar1;
  return;
}



/* Entry: 100e8f83c; end: 100e8f93f;  */

undefined1  [16] FUN_100e8f83c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar3 = *unaff_x20;
  uVar5 = 0xee00657669746341;
  uVar4 = 0x6e776f646c6f6f63;
  if (bVar3 != 5) {
    uVar5 = 0xe600000000000000;
    uVar4 = 0x64656c696166;
  }
  uVar6 = 0xec0000006e656b6f;
  uVar1 = 0x5464696c61766e69;
  if (bVar3 != 3) {
    uVar6 = 0xeb00000000646574;
    uVar1 = 0x696d694c65746172;
  }
  if (bVar3 < 5) {
    uVar5 = uVar6;
    uVar4 = uVar1;
  }
  uVar6 = 0x4c79646165726c61;
  uVar1 = 0xed000064656b6e69;
  if (bVar3 != 1) {
    uVar6 = 0xd000000000000014;
    uVar1 = 0x800000010ef163e0;
  }
  uVar2 = 0x73736563637573;
  if (bVar3 != 0) {
    uVar2 = uVar6;
  }
  uVar6 = 0xe700000000000000;
  if (bVar3 != 0) {
    uVar6 = uVar1;
  }
  if (bVar3 < 3) {
    uVar5 = uVar6;
    uVar4 = uVar2;
  }
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar4;
  return auVar7;
}



/* Entry: 100e8f940; end: 100e8fa2b;  */

void FUN_100e8f940(void)

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



/* Entry: 100e8fa2c; end: 100e8fb0f;  */

undefined1  [16] FUN_100e8fa2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar4 = *unaff_x20;
  uVar6 = 0x800000010ef16400;
  uVar2 = 0xd000000000000011;
  if (bVar4 != 4) {
    uVar6 = 0xe600000000000000;
    uVar2 = 0x64656c696166;
  }
  uVar3 = 0xee00657669746341;
  uVar5 = 0x6e776f646c6f6f63;
  if (bVar4 != 3) {
    uVar3 = uVar6;
    uVar5 = uVar2;
  }
  uVar6 = 0x800000010ef16420;
  uVar2 = 0xd000000000000019;
  if (bVar4 != 1) {
    uVar6 = 0xeb00000000646574;
    uVar2 = 0x696d694c65746172;
  }
  uVar1 = 0x73736563637573;
  if (bVar4 != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar2 = uVar6;
  }
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Entry: 100e8fb10; end: 100e8fbbb;  */

void FUN_100e8fb10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d454c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90add0;
  func_0x000107c61520(&UNK_10d90add0,&UNK_11035e290);
  puRam0000000112d454c0 = puVar1;
  return;
}



/* Entry: 100e8fbbc; end: 100e8fbcf;  */

void FUN_100e8fbbc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100e8fbd0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x100e8fc10)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100e8fbd0; end: 100e8fc7b;  */

void FUN_100e8fbd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d454e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90ae68;
  func_0x000107c61520(&UNK_10d90ae68,&UNK_11035e200);
  puRam0000000112d454e0 = puVar1;
  return;
}



/* Entry: 100e8fc7c; end: 100e8fc8f;  */

void FUN_100e8fc7c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100e8fcc0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x100e8fd00)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100e8fc90; end: 100e8fcbf;  */

void FUN_100e8fc90(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100e8fcc0; end: 100e8fd6b;  */

void FUN_100e8fcc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d45500 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90af00;
  func_0x000107c61520(&UNK_10d90af00,&UNK_11035e170);
  puRam0000000112d45500 = puVar1;
  return;
}



/* Entry: 100e8fd6c; end: 100e8fdaf;  */

void FUN_100e8fd6c(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 100e8fdb0; end: 100e901df;  */

ulong FUN_100e8fdb0(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 100e901e0; end: 100e9021f;  */

void FUN_100e901e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d456c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90afe4;
  func_0x000107c61520(&UNK_10d90afe4,&UNK_11035e290);
  puRam0000000112d456c8 = puVar1;
  return;
}



/* Entry: 100e90220; end: 100e90223;  */

void FUN_100e90220(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d456d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90b04c;
  func_0x000107c61520(&UNK_10d90b04c,&UNK_11035e200);
  puRam0000000112d456d0 = puVar1;
  return;
}



/* Entry: 100e90224; end: 100e90263;  */

void FUN_100e90224(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d456d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90b04c;
  func_0x000107c61520(&UNK_10d90b04c,&UNK_11035e200);
  puRam0000000112d456d0 = puVar1;
  return;
}



/* Entry: 100e90264; end: 100e90267;  */

void FUN_100e90264(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d456d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90b0b4;
  func_0x000107c61520(&UNK_10d90b0b4,&UNK_11035e170);
  puRam0000000112d456d8 = puVar1;
  return;
}



/* Entry: 100e90268; end: 100e902a7;  */

void FUN_100e90268(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d456d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90b0b4;
  func_0x000107c61520(&UNK_10d90b0b4,&UNK_11035e170);
  puRam0000000112d456d8 = puVar1;
  return;
}



/* Entry: 100e902a8; end: 100e902fb;  */

void FUN_100e902a8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 100e902fc; end: 100e90307; -[SCConnectedAccountsServiceProvider unifiedGRPCServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e902fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d456e0;
  func_0x000107c61428(param_1 + _DAT_112d456e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e90308; end: 100e90313; -[SCConnectedAccountsServiceProvider setUnifiedGRPCServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e90308(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d456e0;
  func_0x000107c61428(param_1 + _DAT_112d456e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e90314; end: 100e9031f; -[SCConnectedAccountsServiceProvider taskManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e90314(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d456e8;
  func_0x000107c61428(param_1 + _DAT_112d456e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e90320; end: 100e9032b; -[SCConnectedAccountsServiceProvider setTaskManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e90320(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d456e8;
  func_0x000107c61428(param_1 + _DAT_112d456e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e9032c; end: 100e90337; -[SCConnectedAccountsServiceProvider googleSignInService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e9032c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d456f0;
  func_0x000107c61428(param_1 + _DAT_112d456f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e90338; end: 100e9037b;  */

void FUN_100e90338(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e9037c; end: 100e90387; -[SCConnectedAccountsServiceProvider setGoogleSignInService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e9037c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d456f0;
  func_0x000107c61428(param_1 + _DAT_112d456f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e90388; end: 100e903db;  */

void FUN_100e90388(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e903dc; end: 100e904ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e903dc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = unaff_x20;
  func_0x000107c5d228();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5c78c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c44458();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = 0;
        FUN_100e8f40c();
        func_0x000107c613fc();
        *(long *)(lVar4 + 0x10) = lVar1;
        *(long *)(lVar4 + 0x18) = lVar2;
        *(long *)(lVar4 + 0x20) = lVar3;
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d456f8);
        *(long *)(unaff_x20 + _DAT_112d456f8) = lVar4;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c6157c(lVar4);
        func_0x000107c61574(uVar5);
        FUN_100e8ecf4();
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61574(lVar4);
        return;
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100e90500; end: 100e9058b; -[SCConnectedAccountsServiceProvider provide] */

void FUN_100e90500(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_100e903dc();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SCConnectedAccountsServicesImplementation/SCConnectedAccountsServiceProvider.swift"
                      ,0x52,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e9058c);
  (*pcVar1)();
}



/* Entry: 100e9058c; end: 100e905bf; -[SCConnectedAccountsServiceProvider __safeProvide] */

void FUN_100e9058c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e903dc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e905c0; end: 100e90603; -[SCConnectedAccountsServiceProvider end] */

void FUN_100e905c0(undefined8 param_1)

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



/* Entry: 100e90604; end: 100e90803;  */

void FUN_100e90604(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10edd00)) {
    uVar2 = 0xd000000000000013;
    func_0x000107c605b8(0xd000000000000013,0x800000010ef12300,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10edd20)) ||
         (func_0x000107c605b8(0xd000000000000016,0x800000010ef122e0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59c2c();
      }
      else {
        if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e9b60)) {
          uVar2 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef164a0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SCConnectedAccountsServicesImplementation/SCConnectedAccountsServiceProvider.swift"
                                ,0x52,2,0x37,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100e90804);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c54f0c();
      }
      goto LAB_100e90698;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c5a178();
LAB_100e90698:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e90804; end: 100e908af; -[SCConnectedAccountsServiceProvider setValue:forIvarName:] */

void FUN_100e90804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e90604(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e908b0; end: 100e90937; -[SCConnectedAccountsServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e908b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d456e0,0);
  func_0x000107c61614(param_1 + _DAT_112d456e8,0);
  func_0x000107c61614(param_1 + _DAT_112d456f0,0);
  *(undefined8 *)(param_1 + _DAT_112d456f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e90938; end: 100e9096b;  */

void FUN_100e90938(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e9096c; end: 100e909c3; -[SCConnectedAccountsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e9096c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d456e0);
  func_0x000107c61610(param_1 + _DAT_112d456e8);
  func_0x000107c61610(param_1 + _DAT_112d456f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d456f8));
  return;
}



/* Entry: 100e909c4; end: 100e909e3;  */

void FUN_100e909c4(void)

{
  func_0x000107c61168(&PTR_PTR_112d45740);
  return;
}



/* Entry: 100e909e4; end: 100e90a23;  */

void FUN_100e909e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d45808;
  func_0x0001000285a8(0x112d45808,&UNK_10d90b148);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 100e90a24; end: 100e90a2f;  */

uint FUN_100e90a24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000100e990b8(uVar1,param_1[1],param_1[2],param_1[3],*param_2,param_2[1],param_2[2],
                      param_2[3],0x100e98a68);
  return (uint)uVar1 & 1;
}



/* Entry: 100e90a30; end: 100e90de3;  */

void FUN_100e90a30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d45868;
  func_0x0001000285a8(0x112d45868,&UNK_10d90b150);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 100e90de4; end: 100e90def;  */

uint FUN_100e90de4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000100e990b8(uVar1,param_1[1],param_1[2],param_1[3],*param_2,param_2[1],param_2[2],
                      param_2[3],FUN_100e985d4);
  return (uint)uVar1 & 1;
}



/* Entry: 100e90df0; end: 100e90e2f;  */

uint FUN_100e90df0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000100e990b8(uVar1,param_1[1],param_1[2],param_1[3],*param_2,param_2[1],param_2[2],
                      param_2[3],param_5);
  return (uint)uVar1 & 1;
}



/* Entry: 100e90e30; end: 100e90e6f;  */

void FUN_100e90e30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d458e8;
  func_0x0001000285a8(0x112d458e8,&UNK_10d90b168);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 100e90e70; end: 100e90e7b;  */

void FUN_100e90e70(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x100e9eaec)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 100e90e7c; end: 100e90ebb;  */

void FUN_100e90e7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d459a0;
  func_0x0001000285a8(0x112d459a0,&UNK_10d90b178);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 100e90ebc; end: 100e90ed3;  */

void FUN_100e90ebc(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x100e9eaec)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 100e90ed4; end: 100e90f13;  */

void FUN_100e90ed4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d45a60;
  func_0x0001000285a8(0x112d45a60,&UNK_10d90b190);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 100e90f14; end: 100e90f2b;  */

void FUN_100e90f14(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x100e9eaf0)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 100e90f2c; end: 100e90f9b;  */

void FUN_100e90f2c(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 100e90f9c; end: 100e90fa7;  */

void FUN_100e90f9c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100e996e0();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 100e90fa8; end: 100e9105f;  */

void FUN_100e90fa8(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 100e91060; end: 100e910a7;  */

void FUN_100e91060(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90d060,0x42,2);
  uRam00000001137fea58 = uStack_38;
  uRam00000001137fea50 = uStack_40;
  uRam00000001137fea68 = uStack_28;
  uRam00000001137fea60 = uStack_30;
  uRam00000001137fea78 = uStack_18;
  uRam00000001137fea70 = uStack_20;
  return;
}



/* Entry: 100e910a8; end: 100e91147;  */

/* WARNING: Possible PIC construction at 0x000100e910f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e91104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e910f8) */
/* WARNING: Removing unreachable block (ram,0x000100e91108) */

void FUN_100e910a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d45b10 != -1) {
    func_0x000107c61568(0x112d45b10,FUN_100e91060);
  }
  uVar5 = uRam00000001137fea78;
  uVar4 = uRam00000001137fea70;
  uVar3 = uRam00000001137fea68;
  uVar2 = uRam00000001137fea60;
  uVar1 = uRam00000001137fea58;
  *param_1 = uRam00000001137fea50;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 100e91148; end: 100e9118f;  */

void FUN_100e91148(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90d020,0x3e,2);
  uRam00000001137fea88 = uStack_38;
  uRam00000001137fea80 = uStack_40;
  uRam00000001137fea98 = uStack_28;
  uRam00000001137fea90 = uStack_30;
  uRam00000001137feaa8 = uStack_18;
  uRam00000001137feaa0 = uStack_20;
  return;
}



/* Entry: 100e91190; end: 100e9123b;  */

void FUN_100e91190(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  while( true ) {
    lVar1 = param_2;
    lVar2 = param_3;
    (*pcVar4)();
    if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
      return;
    }
    if (lVar1 == 3) break;
    if (lVar1 == 2) {
      pcVar3 = *(code **)(param_3 + 0x150);
      goto LAB_100e911cc;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x150);
LAB_100e911cc:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_100e911cc;
}



/* Entry: 100e9123c; end: 100e9130f;  */

void FUN_100e9123c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[5];
      uVar1 = unaff_x20[4] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
        func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 100e91310; end: 100e91367;  */

void FUN_100e91310(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 100e91368; end: 100e9138f;  */

void FUN_100e91368(void)

{
  FUN_100e91190();
  return;
}



/* Entry: 100e91390; end: 100e913c7;  */

uint FUN_100e91390(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000100e9e53c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 100e913c8; end: 100e9140f;  */

uint FUN_100e913c8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_100e996ec(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100e91410; end: 100e914af;  */

/* WARNING: Possible PIC construction at 0x000100e9145c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e9146c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e91460) */
/* WARNING: Removing unreachable block (ram,0x000100e91470) */

void FUN_100e91410(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d45b18 != -1) {
    func_0x000107c61568(0x112d45b18,FUN_100e91148);
  }
  uVar5 = uRam00000001137feaa8;
  uVar4 = uRam00000001137feaa0;
  uVar3 = uRam00000001137fea98;
  uVar2 = uRam00000001137fea90;
  uVar1 = uRam00000001137fea88;
  *param_1 = uRam00000001137fea80;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 100e914b0; end: 100e914c3;  */

void FUN_100e914b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d46268;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d46268,&UNK_10d90cc68);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 100e914c4; end: 100e915c7;  */

void FUN_100e914c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 100e915c8; end: 100e91657;  */

uint FUN_100e915c8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_100e996ec(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100e91658; end: 100e91777;  */

/* WARNING: Removing unreachable block (ram,0x000100e91744) */
/* WARNING: Removing unreachable block (ram,0x000100e91774) */

void FUN_100e91658(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        FUN_100e94b7c();
      }
      else if (lVar1 == 2) {
        FUN_100e949ec();
      }
      else if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000100e997cc();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 100e91778; end: 100e917af;  */

undefined1  [16] FUN_100e91778(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010ef16500;
  auVar1._0_8_ = 0xd000000000000033;
  return auVar1;
}



/* Entry: 100e917b0; end: 100e917c3;  */

void FUN_100e917b0(void)

{
  FUN_100e91658();
  return;
}



/* Entry: 100e917c4; end: 100e9181b;  */

void FUN_100e917c4(void)

{
  FUN_100e94d1c();
  return;
}



/* Entry: 100e9181c; end: 100e91853;  */

uint FUN_100e9181c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000100e9e4fc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 100e91854; end: 100e918bb;  */

uint FUN_100e91854(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  func_0x000100e99d74(&uStack_90,&uStack_50,0x112d46290,&UNK_10d90cfe8,0x100e98a68,FUN_100e18ad8);
  return uVar1 & 1;
}



/* Entry: 100e918bc; end: 100e9195b;  */

/* WARNING: Possible PIC construction at 0x000100e91908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e91918: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e9190c) */
/* WARNING: Removing unreachable block (ram,0x000100e9191c) */

void FUN_100e918bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d45b28 != -1) {
    func_0x000107c61568(0x112d45b28,0x100e91610);
  }
  uVar5 = uRam00000001137fead8;
  uVar4 = uRam00000001137fead0;
  uVar3 = uRam00000001137feac8;
  uVar2 = uRam00000001137feac0;
  uVar1 = uRam00000001137feab8;
  *param_1 = uRam00000001137feab0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 100e9195c; end: 100e9196f;  */

void FUN_100e9195c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d46258;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d46258,&UNK_10d90cc60);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 100e91970; end: 100e919a7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_100e91970(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_100e9b14c();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 100e919a8; end: 100e91a57;  */

uint FUN_100e919a8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  func_0x000100e99d74(&uStack_90,&uStack_50,0x112d46290,&UNK_10d90cfe8,0x100e98a68,FUN_100e18ad8);
  return uVar1 & 1;
}



/* Entry: 100e91a58; end: 100e91af7;  */

/* WARNING: Possible PIC construction at 0x000100e91aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e91ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e91aa8) */
/* WARNING: Removing unreachable block (ram,0x000100e91ab8) */

void FUN_100e91a58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d45b40 != -1) {
    func_0x000107c61568(0x112d45b40,0x100e91a10);
  }
  uVar5 = uRam00000001137feb08;
  uVar4 = uRam00000001137feb00;
  uVar3 = uRam00000001137feaf8;
  uVar2 = uRam00000001137feaf0;
  uVar1 = uRam00000001137feae8;
  *param_1 = uRam00000001137feae0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 100e91af8; end: 100e91b3f;  */

void FUN_100e91af8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90cfa0,0x10,2);
  uRam00000001137feb18 = uStack_38;
  uRam00000001137feb10 = uStack_40;
  uRam00000001137feb28 = uStack_28;
  uRam00000001137feb20 = uStack_30;
  uRam00000001137feb38 = uStack_18;
  uRam00000001137feb30 = uStack_20;
  return;
}



/* Entry: 100e91b40; end: 100e91bc3;  */

void FUN_100e91b40(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
  }
  return;
}



/* Entry: 100e91bc4; end: 100e91c4b;  */

void FUN_100e91bc4(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long unaff_x21;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_7 + 0x70))(param_2,param_3,1,param_6,param_7), unaff_x21 == 0)) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 100e91c4c; end: 100e91c9b;  */

void FUN_100e91c4c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 100e91c9c; end: 100e91cd3;  */

void FUN_100e91c9c(void)

{
  FUN_100e91b40();
  return;
}



/* Entry: 100e91cd4; end: 100e91d0b;  */

uint FUN_100e91cd4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000100e9e4bc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 100e91d0c; end: 100e91e23;  */

/* WARNING: Possible PIC construction at 0x000100e91d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e91d44) */
/* WARNING: Removing unreachable block (ram,0x000100e91d6c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_100e91d0c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  
  lVar23 = param_1[2];
  uVar15 = param_1[3];
  pbVar9 = (byte *)unaff_x20[2];
  pbVar24 = (byte *)unaff_x20[3];
  pbVar11 = (byte *)*unaff_x20;
  pbVar13 = (byte *)unaff_x20[1];
  pbVar14 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  if ((byte *)*unaff_x20 != (byte *)*param_1 || (byte *)unaff_x20[1] != (byte *)param_1[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar16,0);
    return pbVar11;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar15 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar15 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar15 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto LAB_100e26094;
LAB_100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar19 != uVar21) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar19 < 1) goto LAB_100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar9;
              goto LAB_100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar9;
          }
        }
LAB_100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,uVar15)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar15;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar19 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar22 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar23 = *(long *)pbVar12;
          uVar10 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar16 = *(byte **)(pbVar12 + 0x10);
        lVar23 = *(long *)pbVar12;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 == pbVar14) && (pbVar24 == pbVar16)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        lVar23 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 != (byte *)0x0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar23);
            func_0x000107c61174();
            pbVar9 = pbVar22;
            func_0x000107c60118();
            func_0x000107c61170(pbVar22);
            func_0x000107c61170(lVar23);
            pbVar22 = pbVar9;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) &&
           (pbVar11 = pbVar24, pbVar13 = pbVar22, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar16 = *(byte **)(pbVar12 + 0x18),
           pbVar24 == *(byte **)(pbVar12 + 0x10) && pbVar22 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar16 = *(byte **)(pbVar12 + 0x10);
      lVar23 = *(long *)(pbVar12 + 0x20);
      if (pbVar24 == (byte *)0x0) {
        if (pbVar16 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 != pbVar14) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar12 + 0x18),lVar23,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar22 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar26 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar23 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar23;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar25;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 2) {
          return (byte *)0x0;
        }
      }
      lVar25 = *(long *)(pbVar12 + 0x20);
      lVar23 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar23;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar25;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar23 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar12 + 8);
    uVar15 = *(ulong *)(pbVar12 + 0x10);
    lVar25 = *(long *)pbVar12;
    uVar10 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 100e91e24; end: 100e91e37;  */

void FUN_100e91e24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d46248;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d46248,&UNK_10d90cc58);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 100e91e38; end: 100e91fb3;  */

void FUN_100e91e38(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = unaff_x20[1];
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 100e91fb4; end: 100e91ffb;  */

void FUN_100e91fb4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90b120,0xf,2);
  uRam00000001137feb48 = uStack_38;
  uRam00000001137feb40 = uStack_40;
  uRam00000001137feb58 = uStack_28;
  uRam00000001137feb50 = uStack_30;
  uRam00000001137feb68 = uStack_18;
  uRam00000001137feb60 = uStack_20;
  return;
}



/* Entry: 100e91ffc; end: 100e92033;  */

undefined1  [16] FUN_100e91ffc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010ef16570;
  auVar1._0_8_ = 0xd000000000000023;
  return auVar1;
}



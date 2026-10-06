/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010cd5ec; end: 1010cd633;  */

int FUN_1010cd5ec(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1010cd634; end: 1010cd683;  */

void FUN_1010cd634(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d5bc80 != 0) {
    return;
  }
  puVar1 = &UNK_110381fa8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d5bc80 = param_1;
  return;
}



/* Entry: 1010cd684; end: 1010cd91f;  */

undefined8 * FUN_1010cd684(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  code *pcVar10;
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
  
  puVar3 = &uStack_c0;
  uVar7 = *param_2;
  param_2[3] = 0;
  func_0x000107c61614(param_2 + 2,0);
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  param_2[4] = uVar1;
  pcVar2 = "LensVenuesPreviewConfigurer";
  func_0x0001000c10c0();
  func_0x000107c61180();
  param_2[5] = pcVar2;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  func_0x0001000285a8(0x112d5bc88,&UNK_10d922888);
  func_0x000107c613fc();
  func_0x00010006c248();
  param_2[6] = puVar3;
  param_2[3] = &PTR_DAT_1103828b0;
  plVar4 = param_2 + 2;
  func_0x000107c61604(plVar4,param_1);
  func_0x0001010d8bd8();
  if (plVar4 == (long *)0x0) {
    plVar8 = (long *)0xd000000000000022;
    func_0x000104366fc4(0xd000000000000022,0x800000010ef25370,uVar7,&PTR_DAT_110382088);
  }
  else {
    puVar5 = &UNK_110381fd0;
    func_0x000107c613fc(&UNK_110381fd0,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,param_2);
    uVar1 = 0x1010cd928;
    puVar6 = puVar5;
    (**(code **)(*plVar4 + 0x60))(0x1010cd928);
    func_0x000107c61574(puVar5);
    func_0x000107c614f0(uVar1);
    plVar8 = (long *)param_2[4];
    pcVar10 = *(code **)(puVar6 + 0x10);
    func_0x000107c6157c(plVar8);
    (*pcVar10)();
    func_0x000107c61574(plVar4);
    func_0x000107c615e8(uVar1);
    func_0x000107c61574();
  }
  func_0x0001010d8af4();
  if (plVar8 == (long *)0x0) {
    func_0x000104366fc4(0xd000000000000026,0x800000010ef253a0,uVar7,&PTR_DAT_110382088);
  }
  else {
    puVar5 = &UNK_110381fd0;
    func_0x000107c613fc(&UNK_110381fd0,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,param_2);
    pcVar10 = FUN_1010cd920;
    puVar6 = puVar5;
    (**(code **)(*plVar8 + 0x60))(FUN_1010cd920);
    func_0x000107c61574(puVar5);
    func_0x000107c614f0(pcVar10);
    uVar1 = param_2[4];
    pcVar9 = *(code **)(puVar6 + 0x10);
    func_0x000107c6157c(uVar1);
    (*pcVar9)();
    func_0x000107c61574(plVar8);
    func_0x000107c615e8(pcVar10);
    func_0x000107c61574(uVar1);
  }
  func_0x000107c61574(param_1);
  return param_2;
}



/* Entry: 1010cd920; end: 1010cd92f;  */

void FUN_1010cd920(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1010cdca4(uVar2);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1010cd930; end: 1010cd99b;  */

void FUN_1010cd930(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1010cd99c(uVar1,uVar2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1010cd99c; end: 1010cdc47;  */

void FUN_1010cd99c(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  uint uVar10;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  long alStack_180 [2];
  ulong uStack_170;
  long lStack_168;
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
  ulong uStack_110;
  long lStack_108;
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
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = 0x112d483a8;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  lVar12 = (long)&uStack_170 + lVar3;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c6157c(uVar11);
  func_0x0001000c74f0(&uStack_110);
  func_0x000107c61574(uVar11);
  lVar2 = lStack_108;
  uVar1 = uStack_110;
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  uStack_78 = uStack_d8;
  uStack_80 = uStack_e0;
  uStack_68 = uStack_c8;
  uStack_70 = uStack_d0;
  uStack_58 = uStack_b8;
  uStack_60 = uStack_c0;
  lStack_a8 = lStack_108;
  uStack_b0 = uStack_110;
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  if (lStack_108 == 0) {
    return;
  }
  if (((uStack_110 != param_1) || (lStack_108 != param_2)) &&
     (uVar4 = uStack_110, func_0x000107c605b8(uStack_110,lStack_108,param_1,param_2,0),
     (uVar4 & 1) == 0)) {
    uStack_170 = uVar1;
    lStack_168 = lVar2;
    lVar5 = 0;
    uStack_110 = param_1;
    lStack_108 = param_2;
    func_0x000107c5ef14();
    lVar6 = lVar12;
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar12,1,1,lVar5);
    FUN_100e8b654();
    func_0x000107c61434(lVar2);
    *(long *)((long)alStack_180 + lVar3) = lVar6;
    *(long *)((long)alStack_180 + lVar3 + 8) = lVar6;
    uVar10 = 0;
    func_0x000107c60218(&uStack_170,1,0,0,1,lVar12,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
    func_0x0001010d08c4(lVar12,0x112d483a8,&UNK_10d910f00);
    func_0x000107c6142c(lVar2);
    if ((uVar10 & 0xff) == 1) {
      uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
      func_0x000107c6157c(uVar11);
      func_0x0001000c74f0(&uStack_170);
      func_0x000107c61574(uVar11);
      uStack_e8 = uStack_148;
      uStack_f0 = uStack_150;
      uStack_d8 = uStack_138;
      uStack_e0 = uStack_140;
      uStack_c8 = uStack_128;
      uStack_d0 = uStack_130;
      uStack_b8 = uStack_118;
      uStack_c0 = uStack_120;
      lStack_108 = lStack_168;
      uStack_110 = uStack_170;
      uStack_f8 = uStack_158;
      uStack_100 = uStack_160;
      if (lStack_168 != 0) {
        puVar7 = &UNK_1103820b8;
        func_0x000107c613fc(&UNK_1103820b8,0x18,7);
        func_0x000107c61644(puVar7 + 0x10);
        puVar8 = &UNK_110382158;
        func_0x000107c613fc(&UNK_110382158,0x78,7);
        *(undefined **)(puVar8 + 0x10) = puVar7;
        *(undefined8 *)(puVar8 + 0x40) = uStack_e8;
        *(undefined8 *)(puVar8 + 0x38) = uStack_f0;
        *(undefined8 *)(puVar8 + 0x50) = uStack_d8;
        *(undefined8 *)(puVar8 + 0x48) = uStack_e0;
        *(undefined8 *)(puVar8 + 0x60) = uStack_c8;
        *(undefined8 *)(puVar8 + 0x58) = uStack_d0;
        *(undefined8 *)(puVar8 + 0x70) = uStack_b8;
        *(undefined8 *)(puVar8 + 0x68) = uStack_c0;
        *(long *)(puVar8 + 0x20) = lStack_108;
        *(ulong *)(puVar8 + 0x18) = uStack_110;
        *(undefined8 *)(puVar8 + 0x30) = uStack_f8;
        *(undefined8 *)(puVar8 + 0x28) = uStack_100;
        func_0x000107c6157c(puVar7);
        FUN_1010d0910(&uStack_110,&uStack_170);
        FUN_1010cde88(FUN_1010d0904,puVar8);
        func_0x0001010d08c4(&uStack_b0,0x112d5bd48,&UNK_10d922920);
        func_0x000107c61574(puVar7);
        func_0x000107c61574(puVar8);
        puVar9 = &uStack_110;
        goto LAB_1010cdc28;
      }
    }
  }
  puVar9 = &uStack_b0;
LAB_1010cdc28:
  func_0x0001010d08c4(puVar9,0x112d5bd48,&UNK_10d922920);
  return;
}



/* Entry: 1010cdc48; end: 1010cdca3;  */

void FUN_1010cdc48(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1010cdca4(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1010cdca4; end: 1010cde87;  */

void FUN_1010cdca4(undefined8 param_1)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_110;
  long lStack_108;
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
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[6];
  func_0x000107c6157c(uVar2);
  func_0x0001000c74f0(&uStack_110);
  func_0x000107c61574(uVar2);
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  uStack_78 = uStack_d8;
  uStack_80 = uStack_e0;
  uStack_68 = uStack_c8;
  uStack_70 = uStack_d0;
  uStack_58 = uStack_b8;
  uStack_60 = uStack_c0;
  lStack_a8 = lStack_108;
  uStack_b0 = uStack_110;
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  if (lStack_108 == 0) {
    func_0x0001007d6c6c(1,0xd000000000000031,0x800000010ef25430,uVar3,&PTR_DAT_110382088);
    func_0x000107c5e874(param_1);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c5e590(param_1);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  else {
    uStack_110 = 0;
    lStack_108 = 0xe000000000000000;
    func_0x000107c602fc(0x36);
    func_0x000107c5fb78(0xd000000000000034,0x800000010ef25470);
    func_0x000107c61434(uStack_b8);
    func_0x000107c5fb78(uStack_c0,uStack_b8);
    func_0x000107c6142c(uStack_b8);
    lVar1 = lStack_108;
    func_0x0001007d6c6c(1,uStack_110,lStack_108,uVar3,&PTR_DAT_110382088);
    func_0x000107c6142c(lVar1);
    func_0x000107c61434(uStack_b8);
    uVar2 = uStack_c0;
    func_0x000107c5fadc(uStack_c0,uStack_b8);
    func_0x000107c6142c(uStack_b8);
    uVar3 = param_1;
    func_0x000107c5e874(param_1);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c5e590(param_1);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x0001010d08c4(&uStack_b0,0x112d5bd48,&UNK_10d922920);
  }
  return;
}



/* Entry: 1010cde88; end: 1010cdfd7;  */

void FUN_1010cde88(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar1 = unaff_x20 + 2;
  uVar5 = *unaff_x20;
  func_0x000107c61618();
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = unaff_x20[3];
    puVar2 = puVar1;
    func_0x000107c614f0();
    (**(code **)(lVar6 + 8))();
    func_0x000107c615e8(puVar1);
    if (puVar2 != (undefined8 *)0x0) {
      uVar5 = unaff_x20[5];
      puVar3 = &UNK_110382108;
      func_0x000107c613fc(&UNK_110382108,0x28,7);
      *(undefined8 *)(puVar3 + 0x10) = param_1;
      *(undefined8 *)(puVar3 + 0x18) = param_2;
      *(undefined8 **)(puVar3 + 0x20) = puVar2;
      uStack_60 = 0x1010ced7c;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_110382120;
      puStack_58 = puVar3;
      func_0x000107c60bc4(&puStack_80);
      puVar3 = puStack_58;
      func_0x000107c6157c(param_2);
      func_0x000107c61174(puVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c4e590(uVar5);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(puVar2);
      return;
    }
  }
  func_0x000104366fc4(0xd000000000000022,0x800000010ef25400,uVar5,&PTR_DAT_110382088);
  return;
}



/* Entry: 1010cdfd8; end: 1010ce08f;  */

void FUN_1010cdfd8(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x50);
    uVar1 = *(undefined8 *)(param_3 + 0x58);
    FUN_1010cf9cc(param_1,uVar2,uVar1);
    FUN_1010d027c(param_1,uVar2,uVar1);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    func_0x000107c6157c(uVar2);
    func_0x000100075034(FUN_1010ce090,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1010ce090; end: 1010ce0d7;  */

void FUN_1010ce090(undefined8 *param_1)

{
  func_0x0001010d08c4(param_1,0x112d5bd48,&UNK_10d922920);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  return;
}



/* Entry: 1010ce0d8; end: 1010ce38b;  */

void FUN_1010ce0d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_130;
  long lStack_128;
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
  long lStack_c8;
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
  
  puVar4 = param_1;
  FUN_1010ce38c();
  lVar5 = 0x112d5b208;
  FUN_1010cecbc(0x112d5b208,&PTR_PTR_1126a6350,0x112d5b218,&UNK_10d922398);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 3;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  uVar8 = param_1[3];
  uVar1 = param_1[4];
  uVar9 = param_1[5];
  uVar2 = param_1[6];
  uVar10 = param_1[10];
  uVar3 = param_1[0xb];
  puVar6 = PTR_PTR_1126a6350;
  func_0x000107c610f8();
  func_0x000107c61174(puVar4);
  func_0x000107c5fadc(uVar10,uVar3);
  func_0x000107c5fadc(uVar8,uVar1);
  func_0x000107c5fadc(uVar9,uVar2);
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  func_0x000107c48584();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(param_2);
  *(undefined **)(lVar5 + 0x20) = puVar6;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c6157c(uVar8);
  func_0x0001000c74f0(&uStack_130);
  func_0x000107c61574(uVar8);
  uStack_a8 = uStack_108;
  uStack_b0 = uStack_110;
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  uStack_78 = uStack_d8;
  uStack_80 = uStack_e0;
  lStack_c8 = lStack_128;
  uStack_d0 = uStack_130;
  uStack_b8 = uStack_118;
  uStack_c0 = uStack_120;
  if (lStack_128 == 0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
  }
  else {
    func_0x000107c61434(uStack_110);
    func_0x000107c61434(uStack_100);
    func_0x000107c61434(uStack_e8);
    func_0x000107c61434(uStack_d8);
    func_0x0001010d08c4(&uStack_d0,0x112d5bd48,&UNK_10d922920);
    func_0x000107c6142c(uStack_e8);
    func_0x000107c6142c(uStack_100);
    func_0x000107c6142c(uStack_110);
  }
  puVar6 = &UNK_1103820b8;
  func_0x000107c613fc(&UNK_1103820b8,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,unaff_x20);
  puVar7 = &UNK_1103820e0;
  func_0x000107c613fc(&UNK_1103820e0,0x90,7);
  uVar8 = param_1[4];
  uVar10 = param_1[7];
  uVar9 = param_1[6];
  *(undefined8 *)(puVar7 + 0x50) = param_1[5];
  *(undefined8 *)(puVar7 + 0x48) = uVar8;
  *(undefined8 *)(puVar7 + 0x60) = uVar10;
  *(undefined8 *)(puVar7 + 0x58) = uVar9;
  uVar8 = param_1[8];
  uVar10 = param_1[0xb];
  uVar9 = param_1[10];
  *(undefined8 *)(puVar7 + 0x70) = param_1[9];
  *(undefined8 *)(puVar7 + 0x68) = uVar8;
  *(undefined8 *)(puVar7 + 0x80) = uVar10;
  *(undefined8 *)(puVar7 + 0x78) = uVar9;
  uVar8 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  *(undefined8 *)(puVar7 + 0x30) = param_1[1];
  *(undefined8 *)(puVar7 + 0x28) = uVar8;
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined8 *)(puVar7 + 0x18) = uStack_e0;
  *(undefined8 *)(puVar7 + 0x20) = uStack_d8;
  *(undefined8 *)(puVar7 + 0x40) = uVar10;
  *(undefined8 *)(puVar7 + 0x38) = uVar9;
  *(long *)(puVar7 + 0x88) = lVar5;
  func_0x000107c6157c(puVar6);
  FUN_1010ced48(param_1,&uStack_130);
  FUN_1010cde88(FUN_1010ced34,puVar7);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  return;
}



/* Entry: 1010ce38c; end: 1010ce4c7;  */

undefined * FUN_1010ce38c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x000107c3ded4();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c3f74c();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010ce4bc);
      (*pcVar1)();
    }
    func_0x000107c5e9e0();
    uVar5 = param_1;
    func_0x000107c61170(lVar3);
    lVar3 = lVar2;
    func_0x000107c3f74c();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010ce4c0);
      (*pcVar1)();
    }
    func_0x000107c5e9f0();
    uVar6 = uVar5;
    func_0x000107c61170(lVar3);
    lVar3 = lVar2;
    func_0x000107c5b078();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010ce4c4);
      (*pcVar1)();
    }
    func_0x000107c5e304();
    uVar7 = uVar6;
    func_0x000107c61170(lVar3);
    lVar3 = lVar2;
    func_0x000107c5b078();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010ce4c8);
      (*pcVar1)();
    }
    func_0x000107c44d98();
    uVar8 = uVar7;
    func_0x000107c61170(lVar3);
    func_0x000107c508f4(lVar2);
    puVar4 = PTR_PTR_1126a6358;
    func_0x000107c610f8(PTR_PTR_1126a6358);
    func_0x000107c47ad0(param_1,uVar5,uVar6,uVar7,uVar8);
    func_0x000107c61170(lVar2);
  }
  return puVar4;
}



/* Entry: 1010ce4c8; end: 1010ce5a3;  */

void FUN_1010ce4c8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_4 != 0) {
      FUN_1010cf9cc(param_1,param_3,param_4);
    }
    FUN_1010d05d4(param_1,*(undefined8 *)(param_5 + 0x10));
    FUN_1010d04dc(param_1,param_6);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    lStack_60 = param_5;
    func_0x000107c6157c(uVar1);
    func_0x000100075034(FUN_1010d07f0,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1010ce5a4; end: 1010ce5ff;  */

void FUN_1010ce5a4(void)

{
  long unaff_x20;
  
  func_0x0001010d08a0(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010ce600; end: 1010ce673;  */

long FUN_1010ce600(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1010ce674; end: 1010ce707;  */

undefined8 * FUN_1010ce674(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  uVar3 = param_2[6];
  param_1[6] = uVar3;
  uVar5 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar5;
  uVar5 = param_2[9];
  uVar4 = param_2[10];
  param_1[9] = uVar5;
  param_1[10] = uVar4;
  uVar4 = param_2[0xb];
  param_1[0xb] = uVar4;
  func_0x000107c61434();
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 1010ce708; end: 1010ce7f3;  */

undefined8 * FUN_1010ce708(undefined8 *param_1,undefined8 *param_2)

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
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1010ce7f4; end: 1010ce87f;  */

undefined8 * FUN_1010ce7f4(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1010ce880; end: 1010ce953;  */

int FUN_1010ce880(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010ce954; end: 1010cec6f;  */

void FUN_1010ce954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_1f8 [72];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
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
  undefined *puStack_140;
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
  
  uVar8 = *unaff_x20;
  uStack_c8 = param_8[5];
  uStack_d0 = param_8[4];
  uStack_b8 = param_8[7];
  uStack_c0 = param_8[6];
  uStack_b0 = param_8[8];
  uStack_e8 = param_8[1];
  uStack_f0 = *param_8;
  uStack_d8 = param_8[3];
  uStack_e0 = param_8[2];
  uStack_150 = 0;
  uStack_148 = 0xe000000000000000;
  func_0x000107c602fc(0x30);
  func_0x000107c6142c(uStack_148);
  uStack_150 = 0xd000000000000021;
  uStack_148 = 0x800000010ef253d0;
  func_0x000107c5fb78(param_6,param_7);
  func_0x000107c5fb78(0x4965756e6576202c,0xeb00000000203a64);
  uVar7 = param_8[7];
  uVar1 = param_8[8];
  func_0x000107c5fb78(uVar7,uVar1);
  uVar2 = uStack_148;
  func_0x0001007d6c6c(1,uStack_150,uStack_148,uVar8,&PTR_DAT_110382088);
  func_0x000107c6142c(uVar2);
  puVar4 = PTR_PTR_1126d2bc8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar5 = PTR_PTR_1126d2bd0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = puVar5;
  func_0x000107c3f74c();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010cec64);
    (*pcVar3)();
  }
  func_0x000107c5a7f0(param_1);
  func_0x000107c61170(puVar6);
  puVar6 = puVar5;
  func_0x000107c3f74c();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010cec68);
    (*pcVar3)();
  }
  func_0x000107c5a804(param_2);
  func_0x000107c61170(puVar6);
  puVar6 = puVar5;
  func_0x000107c5b078();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010cec6c);
    (*pcVar3)();
  }
  func_0x000107c5a724(param_3);
  func_0x000107c61170(puVar6);
  puVar6 = puVar5;
  func_0x000107c5b078();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c550b8(param_4);
    func_0x000107c61170(puVar6);
    func_0x000107c57f1c(param_5,puVar5);
    func_0x000107c52810(puVar4);
    puVar6 = PTR_PTR_1126ba918;
    func_0x000107c610f8(PTR_PTR_1126ba918);
    func_0x000107c453e4();
    func_0x000107c5fadc(uVar7,uVar1);
    func_0x000107c559a4(puVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c53218(puVar6);
    func_0x000107c52140(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    uStack_190 = uStack_e8;
    uStack_198 = uStack_f0;
    uStack_180 = uStack_d8;
    uStack_188 = uStack_e0;
    uStack_170 = uStack_c8;
    uStack_178 = uStack_d0;
    uStack_160 = uStack_b8;
    uStack_168 = uStack_c0;
    uStack_158 = uStack_b0;
    uStack_138 = uStack_f0;
    uStack_108 = uStack_c0;
    uStack_110 = uStack_c8;
    uStack_f8 = uStack_b0;
    uStack_100 = uStack_b8;
    uStack_128 = uStack_e0;
    uStack_130 = uStack_e8;
    uStack_118 = uStack_d0;
    uStack_120 = uStack_d8;
    uStack_1b0 = param_6;
    uStack_1a8 = param_7;
    puStack_1a0 = puVar4;
    uStack_150 = param_6;
    uStack_148 = param_7;
    puStack_140 = puVar4;
    func_0x000107c61434(param_7);
    func_0x000107c61174(puVar4);
    FUN_1010c7524(param_8,auStack_1f8);
    FUN_1010ce0d8(&uStack_150,param_9);
    func_0x0001010cec90(&uStack_1b0);
    func_0x000107c61170(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1010cec70);
  (*pcVar3)();
}



/* Entry: 1010cec70; end: 1010cecbb;  */

void FUN_1010cec70(void)

{
  FUN_1010ce954();
  return;
}



/* Entry: 1010cecbc; end: 1010ced33;  */

void FUN_1010cecbc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1010d0860(0,param_1,param_2);
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



/* Entry: 1010ced34; end: 1010ced47;  */

void FUN_1010ced34(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (lVar2 != 0) {
      FUN_1010cf9cc(param_1,uVar4,lVar2);
    }
    FUN_1010d05d4(param_1,*(undefined8 *)(unaff_x20 + 0x38));
    FUN_1010d04dc(param_1,uVar3);
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    lStack_60 = unaff_x20 + 0x28;
    func_0x000107c6157c(uVar4);
    func_0x000100075034(FUN_1010d07f0,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1010ced48; end: 1010ceda3;  */

undefined8 FUN_1010ced48(undefined8 param_1,undefined8 param_2)

{
  FUN_1010ce674(param_2,param_1,&UNK_110382058);
  return param_2;
}



/* Entry: 1010ceda4; end: 1010cedbf;  */

void FUN_1010ceda4(long param_1,long param_2)

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



/* Entry: 1010cedc0; end: 1010cef1f;  */

ulong FUN_1010cedc0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010cef20);
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
  FUN_1010cef20(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010cef1c);
      (*pcVar1)();
    }
    FUN_1010cf044(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 1010cef20; end: 1010cf043;  */

undefined *
FUN_1010cef20(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1010cecbc(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1010cf044; end: 1010cf15f;  */

long FUN_1010cf044(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010cf15c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1010cf160);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1010d0860(0,param_5,param_6);
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
      FUN_1010d0860(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010cf158);
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



/* Entry: 1010cf160; end: 1010cf31b;  */

ulong FUN_1010cf160(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010cf244);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010cf248);
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
  FUN_1010d0860(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010cf31c);
  (*pcVar2)();
}



/* Entry: 1010cf31c; end: 1010cf3fb;  */

void FUN_1010cf31c(long param_1)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_1010cedc0();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1010cf3fc; end: 1010cf47f;  */

void FUN_1010cf3fc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  
  if (param_1 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    func_0x000107c60480(uVar1);
  }
  FUN_1010cedc0(0,uVar1,0,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 1010cf480; end: 1010cf64f;  */

undefined1  [16] FUN_1010cf480(ulong param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  uVar11 = param_1 & 0xffffffffffffff8;
  uVar5 = param_2;
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)(uVar11 + 0x10);
  }
  else {
    uVar10 = uVar11;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
  }
  uVar9 = 0;
  do {
    if (uVar10 == uVar9) {
      uVar9 = 0;
      uVar8 = 1;
      goto LAB_1010cf60c;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar11 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010cf638);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
      func_0x000107c61174();
      uVar7 = uVar5;
    }
    else {
      uVar3 = uVar9;
      uVar7 = param_1;
      FUN_1010cf160(uVar9,param_1,&PTR_PTR_1126d2bc8,0x112d5b150);
    }
    uVar4 = uVar3;
    func_0x000107c3cf80();
    func_0x000107c61180();
    uVar5 = uVar7;
    if (uVar4 == 0) {
LAB_1010cf4d0:
      func_0x000107c61170(uVar3);
    }
    else {
      uVar5 = uVar4;
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (uVar5 == 0) {
        func_0x000107c61170(uVar3);
        uVar3 = uVar4;
        uVar5 = uVar7;
        goto LAB_1010cf4d0;
      }
      uVar6 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      if ((uVar6 == param_2) && (uVar7 == param_3)) {
        func_0x000107c61170(uVar3);
        func_0x000107c6142c(uVar7);
        func_0x000107c61170(uVar4);
LAB_1010cf608:
        uVar8 = 0;
LAB_1010cf60c:
        auVar12._8_8_ = uVar8;
        auVar12._0_8_ = uVar9;
        return auVar12;
      }
      uVar5 = uVar7;
      func_0x000107c605b8(uVar6,uVar7,param_2,param_3,0);
      func_0x000107c61170(uVar3);
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(uVar4);
      if ((uVar6 & 1) != 0) goto LAB_1010cf608;
    }
    bVar2 = SCARRY8(uVar9,1);
    uVar9 = uVar9 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010cf63c);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 1010cf650; end: 1010cf9cb;  */

void FUN_1010cf650(ulong *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long unaff_x21;
  ulong uVar13;
  ulong uVar14;
  
  uVar13 = *param_1;
  uVar4 = uVar13;
  uVar9 = param_2;
  FUN_1010cf480();
  if (unaff_x21 == 0) {
    if (((uint)uVar9 & 0xff) == 1) {
      if (uVar13 >> 0x3e != 0) {
        uVar4 = uVar13 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar4 = uVar13;
        }
        func_0x000107c60480(uVar4);
      }
    }
    else {
      uVar14 = uVar4;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010cf6c8);
        (*pcVar2)();
      }
      while( true ) {
        uVar14 = uVar14 + 1;
        if (uVar13 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
          uVar10 = uVar9;
        }
        else {
          uVar5 = uVar13 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar13) {
            uVar5 = uVar13;
          }
          func_0x000107c60480();
          uVar10 = uVar9;
        }
        if (uVar14 == uVar5) break;
        if ((uVar13 & 0xc000000000000001) == 0) {
          if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010cf994);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010cf998);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar13 + uVar14 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar14;
          uVar10 = uVar13;
          FUN_1010cf160(uVar14,uVar13,&PTR_PTR_1126d2bc8,0x112d5b150);
        }
        uVar11 = uVar5;
        func_0x000107c3cf80();
        func_0x000107c61180();
        uVar9 = uVar10;
        if (uVar11 == 0) {
LAB_1010cf7a0:
          func_0x000107c61170(uVar5);
LAB_1010cf7a4:
          if (uVar4 != uVar14) {
            if ((uVar13 & 0xc000000000000001) == 0) {
              if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1010cf9a8);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
              if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1010cf9ac);
                (*pcVar2)();
              }
              if (uVar5 <= uVar14) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1010cf9b0);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)(uVar13 + 0x20 + uVar4 * 8);
              uVar10 = *(ulong *)(uVar13 + 0x20 + uVar14 * 8);
              func_0x000107c61174();
              func_0x000107c61174();
            }
            else {
              uVar5 = uVar4;
              FUN_1010cf160(uVar4,uVar13,&PTR_PTR_1126d2bc8,0x112d5b150);
              uVar10 = uVar14;
              uVar9 = uVar13;
              FUN_1010cf160(uVar14,uVar13,&PTR_PTR_1126d2bc8,0x112d5b150);
            }
            uVar11 = uVar13;
            func_0x000107c61550();
            if ((((int)uVar11 == 0) || ((long)uVar13 < 0)) || ((uVar13 >> 0x3e & 1) != 0)) {
              uVar9 = 0x112d5b150;
              FUN_1010cf3fc(uVar13,0x112d5b150,&PTR_PTR_1126d2bc8,0x112d5b210,&UNK_10d922388);
              uVar12 = (uint)(uVar13 >> 0x3e) & 1;
            }
            else {
              uVar12 = 0;
            }
            uVar11 = uVar13 & 0xffffffffffffff8;
            lVar1 = uVar11 + uVar4 * 8;
            uVar8 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uVar10;
            func_0x000107c61170(uVar8);
            if (((long)uVar13 < 0) || (uVar12 != 0)) {
              uVar9 = 0x112d5b150;
              FUN_1010cf3fc(uVar13,0x112d5b150,&PTR_PTR_1126d2bc8,0x112d5b210,&UNK_10d922388);
              uVar11 = uVar13 & 0xffffffffffffff8;
            }
            if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1010cf968);
              (*pcVar2)();
            }
            if (*(ulong *)(uVar11 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1010cf9a4);
              (*pcVar2)();
            }
            lVar1 = uVar11 + uVar14 * 8;
            uVar8 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uVar5;
            func_0x000107c61170(uVar8);
            *param_1 = uVar13;
          }
          bVar3 = SCARRY8(uVar4,1);
          uVar4 = uVar4 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010cf9a0);
            (*pcVar2)();
          }
        }
        else {
          uVar6 = uVar11;
          func_0x000107c4a8c4();
          func_0x000107c61180();
          if (uVar6 == 0) {
            func_0x000107c61170(uVar5);
            uVar5 = uVar11;
            uVar9 = uVar10;
            goto LAB_1010cf7a0;
          }
          uVar7 = uVar6;
          func_0x000107c5faec();
          uVar9 = uVar10;
          func_0x000107c61170(uVar6);
          if ((uVar7 != param_2) || (uVar10 != param_3)) {
            uVar9 = uVar10;
            func_0x000107c605b8();
            func_0x000107c61170(uVar5);
            func_0x000107c6142c(uVar10);
            func_0x000107c61170(uVar11);
            if ((uVar7 & 1) != 0) goto LAB_1010cf6d0;
            goto LAB_1010cf7a4;
          }
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(uVar10);
          func_0x000107c61170(uVar11);
        }
LAB_1010cf6d0:
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010cf99c);
          (*pcVar2)();
        }
      }
    }
  }
  return;
}



/* Entry: 1010cf9cc; end: 1010cfbbb;  */

/* WARNING: Possible PIC construction at 0x0001010cfa34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010cfa74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010cfafc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010cfa78) */
/* WARNING: Removing unreachable block (ram,0x0001010cfb64) */
/* WARNING: Removing unreachable block (ram,0x0001010cfb6c) */
/* WARNING: Removing unreachable block (ram,0x0001010cfa84) */
/* WARNING: Removing unreachable block (ram,0x0001010cfb80) */
/* WARNING: Removing unreachable block (ram,0x0001010cfa94) */
/* WARNING: Removing unreachable block (ram,0x0001010cfb84) */
/* WARNING: Removing unreachable block (ram,0x0001010cfb8c) */
/* WARNING: Removing unreachable block (ram,0x0001010cfacc) */
/* WARNING: Removing unreachable block (ram,0x0001010cfba0) */
/* WARNING: Removing unreachable block (ram,0x0001010cfadc) */
/* WARNING: Removing unreachable block (ram,0x0001010cfa38) */
/* WARNING: Removing unreachable block (ram,0x0001010cfb34) */
/* WARNING: Removing unreachable block (ram,0x0001010cfb3c) */
/* WARNING: Removing unreachable block (ram,0x0001010cfb4c) */
/* WARNING: Removing unreachable block (ram,0x0001010cfa44) */
/* WARNING: Removing unreachable block (ram,0x0001010cfb5c) */
/* WARNING: Removing unreachable block (ram,0x0001010cfba4) */
/* WARNING: Removing unreachable block (ram,0x0001010cfa50) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001010cfb00) */

void FUN_1010cf9cc(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4b4a4();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar1 = 0;
    FUN_1010d0860(0,0x112d5b150,&PTR_PTR_1126d2bc8);
    func_0x000107c5fc54(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1010cfbbc; end: 1010cfd37;  */

undefined1  [16] FUN_1010cfbbc(ulong param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  ulong uStack_68;
  ulong uStack_58;
  
  uVar4 = param_2;
  if (param_1 >> 0x3e == 0) {
    uStack_58 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uStack_58 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uStack_58 = param_1;
    }
    func_0x000107c60480();
  }
  uStack_68 = param_1 & 0xffffffffffffff8;
  uVar8 = 0;
  while( true ) {
    if (uStack_58 == uVar8) {
      uVar8 = 0;
      uVar7 = 1;
      goto LAB_1010cfcec;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uStack_68 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010cfd18);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
      func_0x000107c61174();
      uVar6 = uVar4;
    }
    else {
      uVar3 = uVar8;
      uVar6 = param_1;
      FUN_1010cf160(uVar8,param_1,&PTR_PTR_1126a6350,0x112d5b208);
    }
    uVar4 = uVar3;
    func_0x000107c51cbc();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    if (uVar5 == param_2 && uVar6 == param_3) break;
    uVar4 = uVar6;
    func_0x000107c605b8(uVar5,uVar6,param_2,param_3,0);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(uVar6);
    if ((uVar5 & 1) != 0) goto LAB_1010cfce8;
    bVar2 = SCARRY8(uVar8,1);
    uVar8 = uVar8 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010cfd1c);
      (*pcVar1)();
    }
  }
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar6);
LAB_1010cfce8:
  uVar7 = 0;
LAB_1010cfcec:
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = uVar8;
  return auVar9;
}



/* Entry: 1010cfd38; end: 1010d0067;  */

void FUN_1010cfd38(ulong *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long unaff_x21;
  ulong uVar12;
  ulong uVar13;
  
  uVar12 = *param_1;
  uVar4 = uVar12;
  uVar8 = param_2;
  FUN_1010cfbbc();
  if (unaff_x21 == 0) {
    if (((uint)uVar8 & 0xff) == 1) {
      if (uVar12 >> 0x3e != 0) {
        uVar8 = uVar12 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar12) {
          uVar8 = uVar12;
        }
        func_0x000107c60480(uVar8);
      }
    }
    else {
      uVar13 = uVar4;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010cfdac);
        (*pcVar2)();
      }
      while( true ) {
        uVar13 = uVar13 + 1;
        if (uVar12 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
          uVar9 = uVar8;
        }
        else {
          uVar5 = uVar12 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar12) {
            uVar5 = uVar12;
          }
          func_0x000107c60480();
          uVar9 = uVar8;
        }
        if (uVar13 == uVar5) break;
        if ((uVar12 & 0xc000000000000001) == 0) {
          if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d0030);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d0034);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar12 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar13;
          uVar9 = uVar12;
          FUN_1010cf160(uVar13,uVar12,&PTR_PTR_1126a6350,0x112d5b208);
        }
        uVar10 = uVar5;
        func_0x000107c51cbc();
        func_0x000107c61180();
        uVar6 = uVar10;
        func_0x000107c5faec();
        uVar8 = uVar9;
        func_0x000107c61170(uVar10);
        if ((uVar6 == param_2) && (uVar9 == param_3)) {
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(uVar9);
        }
        else {
          uVar8 = uVar9;
          func_0x000107c605b8(uVar6,uVar9,param_2,param_3,0);
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(uVar9);
          if ((uVar6 & 1) == 0) {
            if (uVar4 != uVar13) {
              if ((uVar12 & 0xc000000000000001) == 0) {
                if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d0044);
                  (*pcVar2)();
                }
                uVar5 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
                if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d0048);
                  (*pcVar2)();
                }
                if (uVar5 <= uVar13) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d004c);
                  (*pcVar2)();
                }
                uVar5 = *(ulong *)(uVar12 + 0x20 + uVar4 * 8);
                uVar9 = *(ulong *)(uVar12 + 0x20 + uVar13 * 8);
                func_0x000107c61174();
                func_0x000107c61174();
              }
              else {
                uVar5 = uVar4;
                FUN_1010cf160(uVar4,uVar12,&PTR_PTR_1126a6350,0x112d5b208);
                uVar9 = uVar13;
                uVar8 = uVar12;
                FUN_1010cf160(uVar13,uVar12,&PTR_PTR_1126a6350,0x112d5b208);
              }
              uVar10 = uVar12;
              func_0x000107c61550();
              if ((((int)uVar10 == 0) || ((long)uVar12 < 0)) || ((uVar12 >> 0x3e & 1) != 0)) {
                uVar8 = 0x112d5b208;
                FUN_1010cf3fc(uVar12,0x112d5b208,&PTR_PTR_1126a6350,0x112d5b218,&UNK_10d922398);
                uVar11 = (uint)(uVar12 >> 0x3e) & 1;
              }
              else {
                uVar11 = 0;
              }
              uVar10 = uVar12 & 0xffffffffffffff8;
              lVar1 = uVar10 + uVar4 * 8;
              uVar7 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar9;
              func_0x000107c61170(uVar7);
              if (((long)uVar12 < 0) || (uVar11 != 0)) {
                uVar8 = 0x112d5b208;
                FUN_1010cf3fc(uVar12,0x112d5b208,&PTR_PTR_1126a6350,0x112d5b218,&UNK_10d922398);
                uVar10 = uVar12 & 0xffffffffffffff8;
              }
              if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d0004);
                (*pcVar2)();
              }
              if (*(ulong *)(uVar10 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d0040);
                (*pcVar2)();
              }
              lVar1 = uVar10 + uVar13 * 8;
              uVar7 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar5;
              func_0x000107c61170(uVar7);
              *param_1 = uVar12;
            }
            bVar3 = SCARRY8(uVar4,1);
            uVar4 = uVar4 + 1;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d003c);
              (*pcVar2)();
            }
          }
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d0038);
          (*pcVar2)();
        }
      }
    }
  }
  return;
}



/* Entry: 1010d0068; end: 1010d016b;  */

void FUN_1010d0068(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1010d0148);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0;
  FUN_1010d0860(0,param_4,param_5);
  func_0x000107c61408(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1010d014c);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
      lVar3 = uVar7 - param_2;
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
      lVar3 = uVar7 - param_2;
    }
    if (SBORROW8(uVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1010d0164);
      (*pcVar5)();
    }
    uVar7 = lVar1 + param_3 * 8;
    uVar2 = uVar8 + 0x20 + param_2 * 8;
    if (uVar7 != uVar2 || uVar2 + lVar3 * 8 <= uVar7) {
      func_0x000107c610b8(uVar7,uVar2,lVar3 << 3);
    }
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1010d0168);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1010d016c);
    (*pcVar5)();
  }
  return;
}



/* Entry: 1010d016c; end: 1010d027b;  */

void FUN_1010d016c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d0248);
    (*pcVar2)();
  }
  uVar4 = *unaff_x20;
  if (uVar4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if ((uVar4 & 0x8000000000000000) != 0) {
      uVar3 = uVar4;
    }
    func_0x000107c60480();
  }
  if ((long)uVar3 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d0270);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d0274);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (SBORROW8(0,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d0278);
    (*pcVar2)();
  }
  if (uVar4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if ((uVar4 & 0x8000000000000000) != 0) {
      uVar3 = uVar4;
    }
    func_0x000107c60480();
  }
  if (SCARRY8(uVar3,lVar1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d027c);
    (*pcVar2)();
  }
  FUN_1010cf31c(uVar3 + lVar1,1,param_3,param_4,param_5,param_6);
  FUN_1010d0068(param_1,param_2,0,param_3,param_4);
  return;
}



/* Entry: 1010d027c; end: 1010d04db;  */

void FUN_1010d027c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_58;
  
  uVar2 = param_1;
  func_0x000107c4f14c();
  func_0x000107c61180();
  if (uVar2 == 0) {
    return;
  }
  uVar9 = uVar2;
  func_0x000107c5dce4();
  func_0x000107c61180();
  if (uVar9 == 0) goto LAB_1010d04b0;
  uVar3 = 0;
  FUN_1010d0860(0,0x112d5b208,&PTR_PTR_1126a6350);
  uVar8 = uVar9;
  func_0x000107c5fc54(uVar9,uVar3);
  func_0x000107c61170(uVar9);
  uStack_58 = uVar8;
  if (uVar8 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    if (uVar9 != 0) {
LAB_1010d0318:
      func_0x000107c61434(param_3);
      puVar4 = &uStack_58;
      FUN_1010cfd38(puVar4,param_2,param_3);
      func_0x000107c6142c(param_3);
      if (uStack_58 >> 0x3e == 0) {
        uVar8 = *(ulong *)((uStack_58 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar8 = uStack_58 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uStack_58) {
          uVar8 = uStack_58;
        }
        func_0x000107c60480();
      }
      if ((long)uVar8 < (long)puVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010d0490);
        (*pcVar1)();
      }
      FUN_1010d016c(puVar4,uVar8,0x112d5b208,&PTR_PTR_1126a6350,0x112d5b218,&UNK_10d922398);
      uVar8 = uStack_58;
      if (uStack_58 >> 0x3e == 0) {
        uVar5 = *(ulong *)((uStack_58 & 0xffffffffffffff8) + 0x10);
        puVar6 = PTR_PTR_1126b13a0;
      }
      else {
        uVar5 = uStack_58 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uStack_58) {
          uVar5 = uStack_58;
        }
        func_0x000107c60480();
        puVar6 = PTR_PTR_1126b13a0;
      }
      PTR_PTR_1126b13a0 = puVar6;
      if ((long)uVar5 < (long)uVar9) {
        func_0x000107c61168();
        func_0x000107c4afb8();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1010d04d8);
          (*pcVar1)();
        }
        uVar9 = uVar8;
        func_0x000107c5fc48(uVar8,uVar3);
        puVar7 = puVar6;
        func_0x000107c5e87c();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar9);
        if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1010d04dc);
          (*pcVar1)();
        }
        puVar6 = puVar7;
        func_0x000107c3ecc8(puVar7);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        func_0x000107c577ac(param_1);
        func_0x000107c6142c(uVar8);
        func_0x000107c61170(puVar6);
        goto LAB_1010d04b0;
      }
    }
  }
  else {
    uVar9 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar9 = uVar8;
    }
    uVar5 = uVar9;
    func_0x000107c60480();
    if (uVar5 != 0) {
      func_0x000107c60480();
      goto LAB_1010d0318;
    }
  }
  func_0x000107c6142c(uVar8);
LAB_1010d04b0:
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1010d04dc; end: 1010d05d3;  */

/* WARNING: Possible PIC construction at 0x0001010d0534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d0580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d05a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010d0584) */
/* WARNING: Removing unreachable block (ram,0x0001010d05d0) */
/* WARNING: Removing unreachable block (ram,0x0001010d0590) */
/* WARNING: Removing unreachable block (ram,0x0001010d0538) */
/* WARNING: Removing unreachable block (ram,0x0001010d05cc) */
/* WARNING: Removing unreachable block (ram,0x0001010d053c) */
/* WARNING: Removing unreachable block (ram,0x0001010d05ac) */

void FUN_1010d04dc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b13a0;
  func_0x000107c61168(PTR_PTR_1126b13a0);
  func_0x000107c4f14c(param_1);
  func_0x000107c61180();
  func_0x000107c4afb8(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010d05d4; end: 1010d07ef;  */

/* WARNING: Possible PIC construction at 0x0001010d0634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010d0638) */
/* WARNING: Removing unreachable block (ram,0x0001010d0644) */
/* WARNING: Removing unreachable block (ram,0x0001010d0648) */
/* WARNING: Removing unreachable block (ram,0x0001010d064c) */
/* WARNING: Removing unreachable block (ram,0x0001010d07dc) */
/* WARNING: Removing unreachable block (ram,0x0001010d07e4) */
/* WARNING: Removing unreachable block (ram,0x0001010d0654) */
/* WARNING: Removing unreachable block (ram,0x0001010d065c) */
/* WARNING: Removing unreachable block (ram,0x0001010d0694) */
/* WARNING: Removing unreachable block (ram,0x0001010d0798) */
/* WARNING: Removing unreachable block (ram,0x0001010d06a8) */

void FUN_1010d05d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000107c4b4a4();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar3 = 0x112d5b150;
    FUN_1010cecbc(0x112d5b150,&PTR_PTR_1126d2bc8,0x112d5b210,&UNK_10d922388);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 3;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined8 *)(lVar3 + 0x20) = param_2;
    uVar2 = 0;
    FUN_1010d0860(0,0x112d5b150,&PTR_PTR_1126d2bc8);
    func_0x000107c61174(param_2);
    lVar1 = lVar3;
    func_0x000107c5fc48(lVar3,uVar2);
    func_0x000107c61574(lVar3);
    func_0x000107c55ebc(param_1);
  }
  else {
    uVar2 = 0;
    FUN_1010d0860(0,0x112d5b150,&PTR_PTR_1126d2bc8);
    func_0x000107c5fc54(lVar1,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1010d07f0; end: 1010d085f;  */

void FUN_1010d07f0(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [96];
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x0001010d08c4(param_1,0x112d5bd48,&UNK_10d922920);
  uVar4 = *puVar1;
  uVar3 = puVar1[3];
  uVar2 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar4;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = puVar1[8];
  uVar4 = puVar1[0xb];
  uVar3 = puVar1[10];
  uVar8 = puVar1[5];
  uVar7 = puVar1[4];
  uVar6 = puVar1[7];
  uVar5 = puVar1[6];
  param_1[9] = puVar1[9];
  param_1[8] = uVar2;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  FUN_1010ced48(puVar1,auStack_90);
  return;
}



/* Entry: 1010d0860; end: 1010d0903;  */

void FUN_1010d0860(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1010d0904; end: 1010d090f;  */

void FUN_1010d0904(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
    FUN_1010cf9cc(param_1,uVar3,uVar1);
    FUN_1010d027c(param_1,uVar3,uVar1);
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    func_0x000107c6157c(uVar3);
    func_0x000100075034(FUN_1010ce090,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1010d0910; end: 1010d095f;  */

undefined8 FUN_1010d0910(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d5bd48;
  func_0x0001000285a8(0x112d5bd48,&UNK_10d922920);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1010d0960; end: 1010d0a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d0960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_112fde478;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + _DAT_112fde478,auStack_78,0,0);
  lVar2 = *(long *)(lVar1 + lVar2);
  if (lVar2 != 0) {
    func_0x000107c615f0(lVar2);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c5fadc(param_5,param_6);
    func_0x000107c5fc48(param_7,PTR___sSSN_11034da80);
    func_0x000107c5d6b4(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_7);
  }
  return;
}



/* Entry: 1010d0a8c; end: 1010d0bb3; -[_TtC20LensVenuesURIHandler30LensVenuesSnapEditorConfigurer updateVenueWithLensId:venueId:venueName:venueIdsListed:normalizedCenter:normalizedSize:rotation:] */

/* WARNING: Possible PIC construction at 0x0001010d0b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d0b8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010d0b80) */
/* WARNING: Removing unreachable block (ram,0x0001010d0b90) */

void FUN_1010d0a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c5faec();
  uVar4 = param_2;
  func_0x000107c5faec();
  uVar5 = uVar4;
  func_0x000107c5faec(param_5);
  func_0x000107c5fc54(param_6,PTR___sSSN_11034da80);
  uVar1 = param_7;
  func_0x000107c61174(param_7);
  uVar2 = param_8;
  func_0x000107c61174(param_8);
  uVar3 = param_9;
  func_0x000107c61174(param_9);
  func_0x000107c6157c(param_1);
  FUN_1010d0960(param_3,param_2,param_4,uVar4,param_5,uVar5,param_6,param_7,param_8,param_9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1010d0bb4; end: 1010d0c23;  */

void FUN_1010d0bb4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010d0c24; end: 1010d10c7;  */

undefined * FUN_1010d0c24(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar9 = 0xea00000000007365;
  uVar10 = 0x756e65567465672f;
  func_0x000100403514(0,5,0);
  uVar6 = 0x800000010ef254b0;
  uVar12 = 0x800000010ef254f0;
  if (bRam0000000112d5be18 < 2) {
    uVar11 = 0xea00000000007365;
    uVar8 = uVar10;
    if (bRam0000000112d5be18 != 0) {
      uVar8 = 0x567463656c65732f;
      uVar11 = 0xec00000065756e65;
    }
  }
  else if (bRam0000000112d5be18 == 2) {
    uVar8 = 0xd000000000000018;
    uVar11 = uVar12;
  }
  else if (bRam0000000112d5be18 == 3) {
    uVar8 = 0xd000000000000011;
    uVar11 = 0x800000010ef254d0;
  }
  else {
    uVar8 = 0xd00000000000001a;
    uVar11 = uVar6;
  }
  uVar3 = *(ulong *)(puVar4 + 0x10);
  uVar1 = uVar3 + 1;
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar3) {
    func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar1,1);
  }
  *(ulong *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + uVar3 * 0x10 + 0x20) = uVar8;
  *(undefined8 *)(puVar4 + uVar3 * 0x10 + 0x28) = uVar11;
  if (bRam0000000112d5be19 < 2) {
    uVar11 = 0xea00000000007365;
    uVar8 = uVar10;
    if (bRam0000000112d5be19 != 0) {
      uVar8 = 0x567463656c65732f;
      uVar11 = 0xec00000065756e65;
    }
  }
  else if (bRam0000000112d5be19 == 2) {
    uVar8 = 0xd000000000000018;
    uVar11 = uVar12;
  }
  else if (bRam0000000112d5be19 == 3) {
    uVar8 = 0xd000000000000011;
    uVar11 = 0x800000010ef254d0;
  }
  else {
    uVar8 = 0xd00000000000001a;
    uVar11 = uVar6;
  }
  uVar2 = uVar3 + 2;
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
    func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar2,1);
  }
  uVar7 = 0x800000010ef254d0;
  *(ulong *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = uVar8;
  *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x28) = uVar11;
  if (bRam0000000112d5be1a < 2) {
    uVar11 = 0xea00000000007365;
    uVar8 = uVar10;
    if (bRam0000000112d5be1a != 0) {
      uVar8 = 0x567463656c65732f;
      uVar11 = 0xec00000065756e65;
    }
  }
  else if (bRam0000000112d5be1a == 2) {
    uVar8 = 0xd000000000000018;
    uVar11 = uVar12;
  }
  else if (bRam0000000112d5be1a == 3) {
    uVar8 = 0xd000000000000011;
    uVar11 = uVar7;
  }
  else {
    uVar8 = 0xd00000000000001a;
    uVar11 = uVar6;
  }
  uVar1 = uVar3 + 3;
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
    func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar1,1);
  }
  *(ulong *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x20) = uVar8;
  *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x28) = uVar11;
  if (bRam0000000112d5be1b < 2) {
    uVar11 = 0xea00000000007365;
    uVar8 = uVar10;
    if (bRam0000000112d5be1b != 0) {
      uVar8 = 0x567463656c65732f;
      uVar11 = 0xec00000065756e65;
    }
  }
  else if (bRam0000000112d5be1b == 2) {
    uVar8 = 0xd000000000000018;
    uVar11 = uVar12;
  }
  else if (bRam0000000112d5be1b == 3) {
    uVar8 = 0xd000000000000011;
    uVar11 = uVar7;
  }
  else {
    uVar8 = 0xd00000000000001a;
    uVar11 = uVar6;
  }
  uVar2 = uVar3 + 4;
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
    func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar2,1);
  }
  *(ulong *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = uVar8;
  *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x28) = uVar11;
  if (bRam0000000112d5be1c < 2) {
    if (bRam0000000112d5be1c != 0) {
      uVar10 = 0x567463656c65732f;
      uVar9 = 0xec00000065756e65;
    }
  }
  else if (bRam0000000112d5be1c == 2) {
    uVar10 = 0xd000000000000018;
    uVar9 = uVar12;
  }
  else if (bRam0000000112d5be1c == 3) {
    uVar10 = 0xd000000000000011;
    uVar9 = uVar7;
  }
  else {
    uVar10 = 0xd00000000000001a;
    uVar9 = uVar6;
  }
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
    func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar3 + 5,1);
  }
  *(ulong *)(puVar4 + 0x10) = uVar3 + 5;
  *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x20) = uVar10;
  *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x28) = uVar9;
  puVar5 = puVar4;
  func_0x000100403a6c(puVar4);
  func_0x000107c61574(puVar4);
  return puVar5;
}



/* Entry: 1010d10c8; end: 1010d1147;  */

undefined1  [16] FUN_1010d10c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar4 = 0x6b6e6172;
  if (bVar5 != 3) {
    uVar4 = 0x65636e6174736964;
  }
  uVar1 = 0xe400000000000000;
  if (bVar5 != 3) {
    uVar1 = 0xe800000000000000;
  }
  uVar2 = 0x7974696c61636f6c;
  if (bVar5 != 2) {
    uVar2 = uVar4;
  }
  uVar4 = 0xe800000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar1;
  }
  uVar1 = 0x6469;
  if (bVar5 != 0) {
    uVar1 = 0x656d616e;
  }
  uVar3 = 0xe200000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xe400000000000000;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar2 = uVar1;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Entry: 1010d1148; end: 1010d116b;  */

void FUN_1010d1148(undefined1 *param_1,undefined1 param_2)

{
  FUN_1010d2070();
  *param_1 = param_2;
  return;
}



/* Entry: 1010d116c; end: 1010d1183;  */

undefined1  [16] FUN_1010d116c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1010d1184; end: 1010d11d3;  */

void FUN_1010d1184(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1010d1360();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1010d11d4; end: 1010d135f;  */

void FUN_1010d11d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [11];
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112d5be28;
  func_0x0001000285a8(0x112d5be28,&UNK_10d922960);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_1010d1360();
  func_0x000107c606ec(puVar4,&UNK_110382288,&UNK_110382288,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c6053c(unaff_x20[2],unaff_x20[3],&uStack_52,lVar3);
    uStack_53 = 2;
    func_0x000107c6053c(unaff_x20[4],unaff_x20[5],&uStack_53,lVar3);
    uStack_54 = 3;
    func_0x000107c60550(unaff_x20[6],&uStack_54,lVar3);
    uStack_55 = 4;
    func_0x000107c6053c(unaff_x20[7],unaff_x20[8],&uStack_55,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 1010d1360; end: 1010d139f;  */

void FUN_1010d1360(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5be30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922a60;
  func_0x000107c61520(&UNK_10d922a60,&UNK_110382288);
  puRam0000000112d5be30 = puVar1;
  return;
}



/* Entry: 1010d13a0; end: 1010d14d3;  */

void FUN_1010d13a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  lVar3 = 0x112d5bec0;
  func_0x0001000285a8(0x112d5bec0,&UNK_10d922da0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar1);
  func_0x0001010d3050();
  func_0x000107c606ec(puVar4,&UNK_1103825d0,&UNK_1103825d0,param_3,uVar1,uVar2);
  uStack_41 = 0;
  func_0x000107c60544(param_1,&uStack_41,lVar3);
  if (unaff_x21 == 0) {
    uStack_42 = 1;
    func_0x000107c60544(param_2,&uStack_42,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 1010d14d4; end: 1010d14e7;  */

void FUN_1010d14d4(void)

{
  FUN_1010d11d4();
  return;
}



/* Entry: 1010d14e8; end: 1010d151f;  */

/* WARNING: Possible PIC construction at 0x0001010d14fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d150c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010d1500) */
/* WARNING: Removing unreachable block (ram,0x0001010d1510) */

void FUN_1010d14e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1010d1520; end: 1010d163f;  */

undefined8 * FUN_1010d1520(undefined8 *param_1,undefined8 *param_2)

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
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  uVar3 = param_2[8];
  param_1[8] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 1010d1640; end: 1010d1663;  */

void FUN_1010d1640(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[8] = param_2[8];
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 1010d1664; end: 1010d16cf;  */

undefined8 * FUN_1010d1664(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1010d16d0; end: 1010d18cf;  */

int FUN_1010d16d0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010d18d0; end: 1010d190f;  */

void FUN_1010d18d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5be38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922a38;
  func_0x000107c61520(&UNK_10d922a38,&UNK_110382288);
  puRam0000000112d5be38 = puVar1;
  return;
}



/* Entry: 1010d1910; end: 1010d1913;  */

void FUN_1010d1910(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5be40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9229d0;
  func_0x000107c61520(&UNK_10d9229d0,&UNK_110382288);
  puRam0000000112d5be40 = puVar1;
  return;
}



/* Entry: 1010d1914; end: 1010d1953;  */

void FUN_1010d1914(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5be40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9229d0;
  func_0x000107c61520(&UNK_10d9229d0,&UNK_110382288);
  puRam0000000112d5be40 = puVar1;
  return;
}



/* Entry: 1010d1954; end: 1010d1957;  */

void FUN_1010d1954(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5be48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9229a8;
  func_0x000107c61520(&UNK_10d9229a8,&UNK_110382288);
  puRam0000000112d5be48 = puVar1;
  return;
}



/* Entry: 1010d1958; end: 1010d1997;  */

void FUN_1010d1958(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5be48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9229a8;
  func_0x000107c61520(&UNK_10d9229a8,&UNK_110382288);
  puRam0000000112d5be48 = puVar1;
  return;
}



/* Entry: 1010d1998; end: 1010d19bb;  */

undefined4 FUN_1010d1998(void)

{
  undefined4 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x676e6c;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x74616c;
  }
  return uVar1;
}



/* Entry: 1010d19bc; end: 1010d1a93;  */

void FUN_1010d19bc(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x74616c || param_3 != -0x1d00000000000000) {
    uVar1 = 0;
    func_0x000107c605b8(0x74616c,0xe300000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      if ((param_2 == 0x676e6c) && (param_3 == -0x1d00000000000000)) {
        func_0x000107c6142c(0xe300000000000000);
        uVar2 = 1;
      }
      else {
        uVar1 = 0;
        func_0x000107c605b8(0x676e6c,0xe300000000000000,param_2,param_3,0);
        func_0x000107c6142c(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_1010d1a1c;
    }
  }
  func_0x000107c6142c(param_3);
  uVar2 = 0;
LAB_1010d1a1c:
  *param_1 = uVar2;
  return;
}



/* Entry: 1010d1a94; end: 1010d1a9f;  */

undefined1  [16] FUN_1010d1a94(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1010d1aa0; end: 1010d1aef;  */

void FUN_1010d1aa0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001010d3050();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1010d1af0; end: 1010d1b07;  */

void FUN_1010d1af0(void)

{
  undefined8 *unaff_x20;
  
  FUN_1010d13a0(*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 1010d1b08; end: 1010d1c6b;  */

void FUN_1010d1b08(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_80 [15];
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112d5be50;
  func_0x0001000285a8(0x112d5be50,&UNK_10d922b38);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar3);
  FUN_1010d25a8();
  puVar2 = &UNK_1103824c0;
  func_0x000107c606ec(auStack_80 + -extraout_x8,&UNK_1103824c0,&UNK_1103824c0,param_3,uVar3,uVar4);
  uStack_71 = 0;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x0001010d25e8();
  func_0x000107c60554(&uStack_70,&uStack_71,lVar1,&UNK_110382538,puVar2);
  if (unaff_x21 == 0) {
    uStack_71 = 1;
    uVar3 = 0x112d5be68;
    uStack_70 = param_4;
    func_0x0001000285a8(0x112d5be68,&UNK_10d922b40);
    uVar4 = uVar3;
    FUN_1010d2628();
    func_0x000107c60554(&uStack_70,&uStack_71,lVar1,uVar3,uVar4);
  }
  (**(code **)(lVar5 + 8))(auStack_80 + -extraout_x8,lVar1);
  return;
}



/* Entry: 1010d1c6c; end: 1010d1ca7;  */

undefined1  [16] FUN_1010d1c6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar2 = 0x7365756e6576;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd000000000000011;
  }
  uVar1 = 0xe600000000000000;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x800000010ef25510;
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1010d1ca8; end: 1010d1d87;  */

void FUN_1010d1ca8(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if ((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef10daaf0)) {
    uVar1 = 0xd000000000000011;
    func_0x000107c605b8(0xd000000000000011,0x800000010ef25510,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      if ((param_2 == 0x7365756e6576) && (param_3 == -0x1a00000000000000)) {
        func_0x000107c6142c(0xe600000000000000);
        uVar2 = 1;
      }
      else {
        func_0x000107c605b8(0x7365756e6576,0xe600000000000000,param_2,param_3,0);
        func_0x000107c6142c(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_1010d1d14;
    }
  }
  func_0x000107c6142c(param_3);
  uVar2 = 0;
LAB_1010d1d14:
  *param_1 = uVar2;
  return;
}



/* Entry: 1010d1d88; end: 1010d1d93;  */

undefined1  [16] FUN_1010d1d88(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1010d1d94; end: 1010d1de3;  */

void FUN_1010d1d94(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1010d25a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1010d1de4; end: 1010d1dff;  */

void FUN_1010d1de4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1010d1b08(*unaff_x20,unaff_x20[1],param_1,unaff_x20[2]);
  return;
}



/* Entry: 1010d1e00; end: 1010d1e83;  */

void FUN_1010d1e00(void)

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



/* Entry: 1010d1e84; end: 1010d1f93;  */

undefined1  [16] FUN_1010d1e84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar5 = *unaff_x20;
  uVar4 = 0x800000010ef25530;
  uVar6 = 0xd000000000000010;
  if (bVar5 != 5) {
    uVar4 = 0xef73656572676544;
    uVar6 = 0x6e6f697461746f72;
  }
  uVar1 = 0xeb00000000596465;
  if (bVar5 != 3) {
    uVar1 = 0xef68746469576465;
  }
  if (bVar5 < 5) {
    uVar4 = uVar1;
    uVar6 = 0x7a696c616d726f6e;
  }
  uVar1 = 0xe900000000000065;
  uVar3 = 0x6d614e65756e6576;
  if (bVar5 != 1) {
    uVar1 = 0xeb00000000586465;
    uVar3 = 0x7a696c616d726f6e;
  }
  uVar2 = 0x644965756e6576;
  if (bVar5 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar3 = uVar1;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    uVar6 = uVar2;
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = uVar6;
  return auVar7;
}



/* Entry: 1010d1f94; end: 1010d1fb7;  */

void FUN_1010d1f94(undefined1 *param_1,undefined1 param_2)

{
  FUN_1010d26d8();
  *param_1 = param_2;
  return;
}



/* Entry: 1010d1fb8; end: 1010d1fcf;  */

undefined1  [16] FUN_1010d1fb8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1010d1fd0; end: 1010d201f;  */

void FUN_1010d1fd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1010d2c54();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1010d2020; end: 1010d206f;  */

void FUN_1010d2020(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1010d2934(&uStack_80);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
    param_1[7] = uStack_48;
    param_1[6] = uStack_50;
    param_1[9] = CONCAT71(uStack_37,uStack_38);
    param_1[8] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x51) = uStack_2f;
    *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_30,uStack_37);
    param_1[1] = uStack_78;
    *param_1 = uStack_80;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
  }
  return;
}



/* Entry: 1010d2070; end: 1010d22a7;  */

undefined4 FUN_1010d2070(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x6469 || param_2 != -0x1e00000000000000) {
    uVar1 = 0x6469;
    func_0x000107c605b8(0x6469,0xe200000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      if ((param_1 != 0x656d616e) || (param_2 != -0x1c00000000000000)) {
        uVar1 = 0;
        func_0x000107c605b8(0x656d616e,0xe400000000000000,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          uVar1 = 0;
          if (((param_1 != 0x7974696c61636f6c) || (param_2 != -0x1800000000000000)) &&
             (func_0x000107c605b8(0x7974696c61636f6c,0xe800000000000000,param_1,param_2,0),
             (uVar1 & 1) == 0)) {
            if ((param_1 != 0x6b6e6172) || (param_2 != -0x1c00000000000000)) {
              uVar1 = 0;
              func_0x000107c605b8(0x6b6e6172,0xe400000000000000,param_1,param_2,0);
              if ((uVar1 & 1) == 0) {
                uVar1 = 0;
                if ((param_1 == 0x65636e6174736964) && (param_2 == -0x1800000000000000)) {
                  func_0x000107c6142c(0xe800000000000000);
                  return 4;
                }
                func_0x000107c605b8(0x65636e6174736964,0xe800000000000000,param_1,param_2,0);
                func_0x000107c6142c(param_2);
                if ((uVar1 & 1) != 0) {
                  return 4;
                }
                return 5;
              }
            }
            func_0x000107c6142c(param_2);
            return 3;
          }
          func_0x000107c6142c(param_2);
          return 2;
        }
      }
      func_0x000107c6142c(param_2);
      return 1;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 1010d22a8; end: 1010d2353;  */

undefined8 * FUN_1010d22a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  uVar1 = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  uVar1 = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[10] = uVar1;
  return param_1;
}



/* Entry: 1010d2354; end: 1010d23d7;  */

undefined8 * FUN_1010d2354(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  return param_1;
}



/* Entry: 1010d23d8; end: 1010d248f;  */

int FUN_1010d23d8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x59) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010d2490; end: 1010d250f;  */

undefined8 * FUN_1010d2490(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1010d2510; end: 1010d25a7;  */

int FUN_1010d2510(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010d25a8; end: 1010d2627;  */

void FUN_1010d25a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5be58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922d50;
  func_0x000107c61520(&UNK_10d922d50,&UNK_1103824c0);
  puRam0000000112d5be58 = puVar1;
  return;
}



/* Entry: 1010d2628; end: 1010d2697;  */

void FUN_1010d2628(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112d5be70 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d5be68;
  func_0x00010002969c(0x112d5be68,&UNK_10d922b40);
  uVar2 = uVar1;
  FUN_1010d2698();
  puVar3 = PTR___sSayxGSEsSERzlMc_11034dce0;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSEsSERzlMc_11034dce0,uVar1,&uStack_28);
  puRam0000000112d5be70 = puVar3;
  return;
}



/* Entry: 1010d2698; end: 1010d26d7;  */

void FUN_1010d2698(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5be78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922968;
  func_0x000107c61520(&UNK_10d922968,&UNK_1103821e0);
  puRam0000000112d5be78 = puVar1;
  return;
}



/* Entry: 1010d26d8; end: 1010d2933;  */

undefined4 FUN_1010d26d8(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if ((param_1 == 0x644965756e6576 && param_2 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x644965756e6576,0xe700000000000000,param_1,param_2,0), (uVar2 & 1) != 0))
  {
    func_0x000107c6142c(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    if (((param_1 == 0x6d614e65756e6576) && (param_2 == -0x16ffffffffffff9b)) ||
       (func_0x000107c605b8(0x6d614e65756e6576,0xe900000000000065,param_1,param_2,0),
       (uVar2 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar1 = 1;
    }
    else {
      uVar2 = 0;
      if (((param_1 == 0x7a696c616d726f6e) && (param_2 == -0x14ffffffffa79b9b)) ||
         (uVar3 = uVar2,
         func_0x000107c605b8(0x7a696c616d726f6e,0xeb00000000586465,param_1,param_2,0),
         (uVar3 & 1) != 0)) {
        func_0x000107c6142c(param_2);
        uVar1 = 2;
      }
      else if (((param_1 == 0x7a696c616d726f6e) && (param_2 == -0x14ffffffffa69b9b)) ||
              (uVar3 = uVar2,
              func_0x000107c605b8(0x7a696c616d726f6e,0xeb00000000596465,param_1,param_2,0),
              (uVar3 & 1) != 0)) {
        func_0x000107c6142c(param_2);
        uVar1 = 3;
      }
      else if (((param_1 == 0x7a696c616d726f6e) && (param_2 == -0x10978b9b96a89b9b)) ||
              (func_0x000107c605b8(0x7a696c616d726f6e,0xef68746469576465,param_1,param_2,0),
              (uVar2 & 1) != 0)) {
        func_0x000107c6142c(param_2);
        uVar1 = 4;
      }
      else {
        if ((param_1 != -0x2ffffffffffffff0) || (param_2 != -0x7ffffffef10daad0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef25530,param_1,param_2,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if ((param_1 == 0x6e6f697461746f72) && (param_2 == -0x108c9a9a8d989abc)) {
              func_0x000107c6142c(0xef73656572676544);
              return 6;
            }
            func_0x000107c605b8(0x6e6f697461746f72,0xef73656572676544,param_1,param_2,0);
            func_0x000107c6142c(param_2);
            if ((uVar2 & 1) != 0) {
              return 6;
            }
            return 7;
          }
        }
        func_0x000107c6142c(param_2);
        uVar1 = 5;
      }
    }
  }
  return uVar1;
}



/* Entry: 1010d2934; end: 1010d2c53;  */

/* WARNING: Removing unreachable block (ram,0x0001010d2b10) */
/* WARNING: Removing unreachable block (ram,0x0001010d2abc) */
/* WARNING: Removing unreachable block (ram,0x0001010d2a78) */
/* WARNING: Removing unreachable block (ram,0x0001010d2acc) */
/* WARNING: Removing unreachable block (ram,0x0001010d2ae0) */
/* WARNING: Removing unreachable block (ram,0x0001010d2b78) */
/* WARNING: Removing unreachable block (ram,0x0001010d2b84) */
/* WARNING: Removing unreachable block (ram,0x0001010d2b98) */
/* WARNING: Removing unreachable block (ram,0x0001010d2a10) */

void FUN_1010d2934(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined1 *puVar7;
  long lVar8;
  long extraout_x8;
  long unaff_x21;
  long lVar9;
  long lStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [96];
  undefined8 ***pppuStack_130;
  long lStack_128;
  undefined8 ***pppuStack_120;
  long lStack_118;
  undefined8 ***pppuStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 ***pppuStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined1 uStack_d1;
  undefined8 ***pppuStack_d0;
  long lStack_c8;
  undefined8 ***pppuStack_c0;
  long lStack_b8;
  undefined8 ***pppuStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  long lStack_a0;
  undefined8 ***pppuStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  
  lVar3 = 0x112d5be80;
  func_0x0001000285a8(0x112d5be80,&UNK_10d922b48);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  lVar4 = param_3;
  func_0x0001000a8868(param_3,uVar1);
  FUN_1010d2c54();
  func_0x000107c606e0((long)&lStack_1a0 - extraout_x8,&UNK_110382430,&UNK_110382430,lVar4,uVar1,
                      uVar2);
  if (unaff_x21 == 0) {
    pppuStack_130 = (undefined8 ***)((ulong)pppuStack_130 & 0xffffffffffffff00);
    ppppuVar5 = &pppuStack_130;
    lVar4 = lVar3;
    func_0x000107c604f4();
    pppuStack_130._0_1_ = 1;
    ppppuVar6 = &pppuStack_130;
    lVar8 = lVar3;
    lStack_198 = lVar4;
    pppuStack_d0 = ppppuVar5;
    lStack_c8 = lVar4;
    func_0x000107c604f4();
    pppuStack_130._0_1_ = 2;
    ppppuVar5 = &pppuStack_130;
    lVar4 = lVar3;
    lStack_1a0 = lVar8;
    pppuStack_c0 = ppppuVar6;
    lStack_b8 = lVar8;
    func_0x000107c604dc();
    uStack_a8 = (undefined1)lVar4;
    pppuStack_130._0_1_ = 3;
    pppuStack_b0 = ppppuVar5;
    func_0x000107c604fc(&pppuStack_130,lVar3);
    pppuStack_130._0_1_ = 4;
    ppppuVar5 = &pppuStack_130;
    lVar4 = lVar3;
    lStack_a0 = param_2;
    func_0x000107c604dc();
    uStack_90 = (undefined1)lVar4;
    pppuStack_130._0_1_ = 5;
    pppuStack_98 = ppppuVar5;
    func_0x000107c604fc(&pppuStack_130,lVar3);
    uStack_88 = (undefined1)param_2;
    uStack_87 = (undefined7)((ulong)param_2 >> 8);
    uStack_d1 = 6;
    puVar7 = &uStack_d1;
    lVar4 = lVar3;
    func_0x000107c604dc();
    (**(code **)(lVar9 + 8))((long)&lStack_1a0 - extraout_x8,lVar3);
    uStack_80 = SUB81(puVar7,0);
    uStack_7f = (undefined7)((ulong)puVar7 >> 8);
    uStack_78 = (undefined1)lVar4;
    lStack_108 = CONCAT71(uStack_a7,uStack_a8);
    pppuStack_110 = pppuStack_b0;
    pppuStack_f8 = pppuStack_98;
    lStack_100 = lStack_a0;
    lStack_f0 = CONCAT71(uStack_8f,uStack_90);
    uStack_e8 = uStack_88;
    lStack_128 = lStack_c8;
    pppuStack_130 = pppuStack_d0;
    lStack_118 = lStack_b8;
    pppuStack_120 = pppuStack_c0;
    uStack_df = CONCAT17(uStack_78,uStack_7f);
    uStack_e7 = uStack_87;
    uStack_e0 = uStack_80;
    FUN_1010d2c94(&pppuStack_130,auStack_190);
    func_0x0001000834e4(param_3);
    func_0x0001010d2cc8(&pppuStack_d0);
    param_1[5] = lStack_108;
    param_1[4] = (long)pppuStack_110;
    param_1[7] = (long)pppuStack_f8;
    param_1[6] = lStack_100;
    param_1[9] = CONCAT71(uStack_e7,uStack_e8);
    param_1[8] = lStack_f0;
    *(undefined8 *)((long)param_1 + 0x51) = uStack_df;
    *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_e0,uStack_e7);
    param_1[1] = lStack_128;
    *param_1 = (long)pppuStack_130;
    param_1[3] = lStack_118;
    param_1[2] = (long)pppuStack_120;
  }
  else {
    func_0x0001000834e4(param_3);
  }
  return;
}



/* Entry: 1010d2c54; end: 1010d2c93;  */

void FUN_1010d2c54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5be88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922cd8;
  func_0x000107c61520(&UNK_10d922cd8,&UNK_110382430);
  puRam0000000112d5be88 = puVar1;
  return;
}



/* Entry: 1010d2c94; end: 1010d2cf7;  */

undefined8 FUN_1010d2c94(undefined8 param_1,undefined8 param_2)

{
  func_0x0001010d223c(param_2,param_1,&UNK_110382300);
  return param_2;
}



/* Entry: 1010d2cf8; end: 1010d2ebb;  */

int FUN_1010d2cf8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1010d2d74;
        goto LAB_1010d2d58;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1010d2d58:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_1010d2d74:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1010d2ebc; end: 1010d2efb;  */

void FUN_1010d2ebc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5be90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922bf8;
  func_0x000107c61520(&UNK_10d922bf8,&UNK_1103824c0);
  puRam0000000112d5be90 = puVar1;
  return;
}



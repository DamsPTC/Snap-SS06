/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102162e4c; end: 1021631ef;  */

undefined * FUN_102162e4c(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long alStack_88 [3];
  undefined8 uStack_70;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x0001000d224c(alStack_88);
  plVar1 = alStack_88;
  func_0x0001000a8868(plVar1,uStack_70);
  uVar10 = *(undefined8 *)(*plVar1 + 0x28);
  uVar2 = 0x7472617473;
  func_0x000107c5fadc(0x7472617473,0xe500000000000000);
  uVar3 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000106c32bf8(uVar10,uVar2,uVar3,0,1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  FUN_102161270(0xd000000000000018,0x800000010f066560,2);
  func_0x0001000834e4(alStack_88);
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x0001000d224c(alStack_88);
  lVar8 = alStack_88[0];
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  puVar4 = &UNK_1104d42e8;
  func_0x000107c613fc(&UNK_1104d42e8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar3);
  lVar5 = lVar8;
  func_0x000104889654(lVar8,0,FUN_10216397c,puVar4);
  func_0x000107c61170(lVar8);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(alStack_88);
  lVar8 = alStack_88[0];
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar4 = &UNK_1104d4310;
  func_0x000107c613fc(&UNK_1104d4310,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_102163994;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  func_0x000107c6157c(uVar3);
  lVar6 = lVar8;
  func_0x0001048898b8(lVar8,1,0x102163ec0,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(lVar5);
  func_0x000107c61170(lVar8);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(alStack_88);
  lVar8 = alStack_88[0];
  puVar4 = &UNK_1104d4338;
  func_0x000107c613fc(&UNK_1104d4338,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar7 = &UNK_1104d4360;
  func_0x000107c613fc(&UNK_1104d4360,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x10216399c;
  *(undefined **)(puVar7 + 0x18) = puVar4;
  lVar5 = lVar8;
  func_0x0001048898b8(lVar8,1,FUN_1021639a4,puVar7,&UNK_1104d4ac8);
  func_0x000107c61574(lVar6);
  func_0x000107c61170(lVar8);
  func_0x000107c61574(puVar7);
  func_0x0001000d224c(alStack_88);
  lVar8 = alStack_88[0];
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar4 = &UNK_1104d4388;
  func_0x000107c613fc(&UNK_1104d4388,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar9;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar3;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar9);
  lVar6 = lVar8;
  func_0x00010488a340(lVar8,1,FUN_1021639cc,puVar4);
  func_0x000107c61574(lVar5);
  func_0x000107c61170(lVar8);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(alStack_88);
  puVar4 = &UNK_1104d43b0;
  func_0x000107c613fc(&UNK_1104d43b0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar9;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(uVar9);
  lVar8 = alStack_88[0];
  func_0x00010488a3ec(alStack_88[0],1,FUN_102163a14,puVar4);
  func_0x000107c61574(lVar6);
  func_0x000107c61170(alStack_88[0]);
  func_0x000107c61574(puVar4);
  func_0x00010488a2d4();
  func_0x000107c61574(lVar8);
  return puVar4;
}



/* Entry: 1021631f0; end: 102163343;  */

void FUN_1021631f0(void)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  long lStack_58;
  
  lVar1 = 0;
  func_0x000107c5f83c();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = puVar5 + -extraout_x12;
  func_0x0001000d224c(&puStack_60);
  puVar2 = puStack_60;
  func_0x000107c614f0();
  puStack_68 = puStack_60;
  (**(code **)(*(long *)(lStack_58 + 0x18) + 8))();
  func_0x000107c615e8();
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c5f830(puVar5);
    func_0x000107c5f85c(puVar4,0x3ff0000000000000,puVar5);
    pcVar6 = *(code **)(lVar7 + 8);
    (*pcVar6)(puVar5,lVar1);
    puVar2 = puVar4;
    func_0x000107c60058();
    uVar3 = SUB81(puVar2,0);
    (*pcVar6)(puVar4,lVar1);
    puStack_60 = puVar4;
    if (((uint)puVar2 & 0xff) != 1) {
      return;
    }
  }
  FUN_102163e80();
  func_0x000107c613f8(&UNK_1104d42b8,puStack_60,0,0);
  *puStack_60 = uVar3;
  func_0x000107c61654();
  return;
}



/* Entry: 102163344; end: 1021633af;  */

undefined8 FUN_102163344(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = uStack_40;
  (**(code **)(lStack_38 + 8))(0x403e000000000000,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return uVar1;
}



/* Entry: 1021633b0; end: 102163413;  */

long FUN_1021633b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_102163414();
    func_0x000107c61574(param_1);
  }
  return lVar1;
}



/* Entry: 102163414; end: 10216372b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102163414(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  lVar2 = 0;
  FUN_102166638();
  func_0x000107c613fc();
  func_0x000107c5eec4(lVar2 + _DAT_113804678);
  lVar1 = _DAT_112e5cd90;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar2 + lVar1) = uVar3;
  *(undefined **)(lVar2 + _DAT_112e5cd98) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(lVar2 + _DAT_112e5cda0) = 0;
  *(undefined8 *)(lVar2 + _DAT_112e5cda8) = 0;
  *(undefined8 *)(lVar2 + _DAT_112e5cdb0) = 0;
  *(undefined1 *)(lVar2 + _DAT_112e5cdb8) = 0;
  lVar1 = _DAT_112e5cdc0;
  func_0x0001000285a8(0x112e5c958,&UNK_10da62d60);
  func_0x000107c613fc();
  uVar3 = 0;
  func_0x00010095c380();
  *(undefined8 *)(lVar2 + lVar1) = uVar3;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000d224c(&uStack_68);
  uVar3 = uStack_68;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  puVar4 = &UNK_1104d43d8;
  func_0x000107c613fc(&UNK_1104d43d8,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  *(long *)(puVar4 + 0x20) = lVar2;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(lVar2);
  uVar5 = uVar3;
  func_0x000104889654(uVar3,1,FUN_102163d2c,puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(&uStack_68);
  uVar3 = uStack_68;
  func_0x000107c6157c(lVar2);
  uVar7 = uVar3;
  func_0x00010488a3ec(uVar3,1,FUN_102163d48,lVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(lVar2);
  func_0x0001000d224c(&uStack_68);
  uVar3 = uStack_68;
  puVar4 = &UNK_1104d4400;
  func_0x000107c613fc(&UNK_1104d4400,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_102163d9c;
  *(long *)(puVar4 + 0x18) = lVar2;
  func_0x000107c6157c(lVar2);
  uVar5 = uVar3;
  func_0x0001048898b8(uVar3,1,0x102163ed4,puVar4,&UNK_1104d4ac8);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(&uStack_68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar4 = &UNK_1104d4428;
  func_0x000107c613fc(&UNK_1104d4428,0x28,7);
  *(long *)(puVar4 + 0x10) = lVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  *(undefined8 *)(puVar4 + 0x20) = uVar3;
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  uVar3 = uStack_68;
  func_0x00010488a3ec(uStack_68,0,0x102163db0,puVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(lVar2);
  return uVar3;
}



/* Entry: 10216372c; end: 10216385b;  */

void FUN_10216372c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long alStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  func_0x0001000d224c(alStack_88);
  plVar5 = alStack_88;
  func_0x0001000a8868(plVar5,uStack_70);
  uVar8 = *(undefined8 *)(*plVar5 + 0x28);
  uVar6 = 0x646e65;
  func_0x000107c5fadc(0x646e65,0xe300000000000000);
  uVar7 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000106c32bf8(uVar8,uVar6,uVar7,0,1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  FUN_102161350(uVar1,uVar3,uVar2,uVar4,0);
  func_0x0001000834e4(alStack_88);
  func_0x000107c60060();
  func_0x0001000d224c(alStack_88);
  func_0x0001000a8868(alStack_88,uStack_70);
  (**(code **)(lStack_68 + 0x10))(0,1,uStack_70,lStack_68);
  func_0x0001000834e4(alStack_88);
  return;
}



/* Entry: 10216385c; end: 10216395b;  */

void FUN_10216385c(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long alStack_68 [3];
  undefined8 uStack_50;
  
  func_0x0001000d224c(alStack_68);
  plVar2 = alStack_68;
  func_0x0001000a8868(plVar2,uStack_50);
  lVar5 = *plVar2;
  uStack_78 = 0;
  uStack_70 = 0xe000000000000000;
  uVar3 = 0x112d393f0;
  uStack_80 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_80,&uStack_78,uVar3,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_70;
  uVar3 = uStack_78;
  uVar6 = *(undefined8 *)(lVar5 + 0x28);
  uVar4 = 0x646e65;
  func_0x000107c5fadc(0x646e65,0xe300000000000000);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000106c32bf8(uVar6,uVar4,uVar3,1,1);
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x0001000834e4(alStack_68);
  func_0x000107c60060();
  return;
}



/* Entry: 10216395c; end: 10216397b;  */

void FUN_10216395c(void)

{
  FUN_102162e4c();
  return;
}



/* Entry: 10216397c; end: 102163993;  */

void FUN_10216397c(void)

{
  long unaff_x20;
  
  FUN_1021631f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102163994; end: 1021639a3;  */

undefined8 FUN_102163994(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = uStack_40;
  (**(code **)(lStack_38 + 8))(0x403e000000000000,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return uVar1;
}



/* Entry: 1021639a4; end: 1021639cb;  */

void FUN_1021639a4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1021639cc; end: 102163a13;  */

void FUN_1021639cc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10216372c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102163a14; end: 102163a1b;  */

void FUN_102163a14(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long alStack_68 [3];
  undefined8 uStack_50;
  
  func_0x0001000d224c(alStack_68,param_1,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  plVar2 = alStack_68;
  func_0x0001000a8868(plVar2,uStack_50);
  lVar5 = *plVar2;
  uStack_78 = 0;
  uStack_70 = 0xe000000000000000;
  uVar3 = 0x112d393f0;
  uStack_80 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_80,&uStack_78,uVar3,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_70;
  uVar3 = uStack_78;
  uVar6 = *(undefined8 *)(lVar5 + 0x28);
  uVar4 = 0x646e65;
  func_0x000107c5fadc(0x646e65,0xe300000000000000);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000106c32bf8(uVar6,uVar4,uVar3,1,1);
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x0001000834e4(alStack_68);
  func_0x000107c60060();
  return;
}



/* Entry: 102163a1c; end: 102163b5f;  */

void FUN_102163a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  plVar1 = (long *)0x64;
  (**(code **)(lStack_58 + 8))(100,uStack_60,lStack_58);
  puVar2 = &UNK_1104d4478;
  func_0x000107c613fc(&UNK_1104d4478,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcVar5 = *(code **)(*plVar1 + 0x70);
  func_0x000107c61580(param_3,2);
  func_0x000107c6157c(param_2);
  pcVar3 = FUN_102163e24;
  puVar4 = puVar2;
  (*pcVar5)(FUN_102163e24,puVar2,FUN_102163e2c,param_3);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(param_3);
  func_0x0001000834e4(auStack_78);
  pcVar5 = pcVar3;
  func_0x000107c614f0(pcVar3);
  func_0x0001000d224c(auStack_78);
  (**(code **)(puVar4 + 0x10))(auStack_78[0],pcVar5,puVar4);
  func_0x000107c615e8(pcVar3);
  func_0x000107c61574(auStack_78[0]);
  return;
}



/* Entry: 102163b60; end: 102163ca3;  */

void FUN_102163b60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = *param_1;
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(uVar1,param_3,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 102163ca4; end: 102163d2b;  */

void FUN_102163ca4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  FUN_102161350(uVar1,uVar3,uVar2,uVar4,param_3);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 102163d2c; end: 102163d47;  */

void FUN_102163d2c(void)

{
  long unaff_x20;
  
  FUN_102163a1c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102163d48; end: 102163d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102163d48(void)

{
  func_0x000100087bd4(0x102163dd4);
  return;
}



/* Entry: 102163d9c; end: 102163dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102163d9c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)
            (*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e5cdc0) + 0x10));
  return;
}



/* Entry: 102163dbc; end: 102163deb;  */

void FUN_102163dbc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102163ca4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102163dec; end: 102163e23;  */

void FUN_102163dec(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102163e24; end: 102163e2b;  */

void FUN_102163e24(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *param_1;
  func_0x0001000d224c(auStack_68,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(uVar2,uVar1,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 102163e2c; end: 102163e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102163e2c(void)

{
  func_0x000100087bd4(0x102163ee8);
  return;
}



/* Entry: 102163e80; end: 102163efb;  */

void FUN_102163e80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5cbd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da62f88;
  func_0x000107c61520(&UNK_10da62f88,&UNK_1104d42b8);
  puRam0000000112e5cbd8 = puVar1;
  return;
}



/* Entry: 102163efc; end: 102163f0f;  */

bool FUN_102163efc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102163f10; end: 102163fbb;  */

void FUN_102163f10(void)

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



/* Entry: 102163fbc; end: 102163fcb;  */

void FUN_102163fbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102163fcc; end: 102164057;  */

undefined8 FUN_102163fcc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c5b1b0();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    lVar1 = 0;
    param_2 = 0xf000000000000000;
  }
  else {
    lVar1 = unaff_x20;
    func_0x000107c5ee30();
    func_0x000107c61170(unaff_x20);
    if (param_2 >> 0x3c < 0xf) {
      func_0x0001000b44c0(lVar1,param_2);
      func_0x0001000b44c0(0,0xf000000000000000);
      return 1;
    }
  }
  func_0x0001000b44c0(lVar1,param_2);
  return 0;
}



/* Entry: 102164058; end: 102164123;  */

long FUN_102164058(ulong param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long unaff_x20;
  long unaff_x22;
  
  FUN_102163fcc();
  if ((param_1 & 1) == 0) {
    func_0x000107c4c99c();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
      uVar3 = 1;
      goto LAB_1021640d4;
    }
  }
  else {
    func_0x000107c5b2d0();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
      uVar3 = 0;
LAB_1021640d4:
      puVar2 = (undefined1 *)0x0;
      FUN_102164124();
      func_0x000107c613f8(&UNK_1104d4570,puVar2,0,0);
      *puVar2 = uVar3;
      func_0x000107c61654();
      return unaff_x22;
    }
  }
  lVar1 = unaff_x20;
  func_0x000107c5faec();
  func_0x000107c61170(unaff_x20);
  return lVar1;
}



/* Entry: 102164124; end: 102164163;  */

void FUN_102164124(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5cbe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da630e4;
  func_0x000107c61520(&UNK_10da630e4,&UNK_1104d4570);
  puRam0000000112e5cbe0 = puVar1;
  return;
}



/* Entry: 102164164; end: 1021642cb;  */

int FUN_102164164(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1021641e0;
        goto LAB_1021641c4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1021641c4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1021641e0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1021642cc; end: 10216435f;  */

void FUN_1021642cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5cbe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da630bc;
  func_0x000107c61520(&UNK_10da630bc,&UNK_1104d4570);
  puRam0000000112e5cbe8 = puVar1;
  return;
}



/* Entry: 102164360; end: 1021645cb;  */

void FUN_102164360(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x0001000d224c(&puStack_a8);
  puVar2 = puStack_a8;
  if (puStack_a8 != (undefined *)0x0) {
    func_0x0001000d224c(&puStack_a8);
    puVar3 = puStack_a8;
    if (puStack_a8 != (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x000107c61168();
      func_0x000107c4ec64();
      func_0x000107c61180();
      puVar6 = PTR_PTR_1126af4d0;
      func_0x000107c61168();
      func_0x0001000d224c(&uStack_78);
      uVar7 = 0;
      func_0x000100964acc();
      uVar8 = uVar7;
      func_0x000100bcb214();
      func_0x000107c61170(uStack_78);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = FUN_102164774;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_1021645cc;
      puStack_90 = &UNK_1104d4618;
      ppuVar9 = &puStack_a8;
      uStack_80 = param_1;
      func_0x000107c60bc4();
      uVar4 = uStack_80;
      func_0x000107c6157c(param_1);
      func_0x000107c61574(uVar4);
      func_0x0001000d224c(&uStack_b0);
      func_0x000100bcb214();
      func_0x000107c61170(uStack_b0);
      pcStack_88 = (code *)0x1021647b4;
      puStack_a8 = puVar1;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_102164674;
      puStack_90 = &UNK_1104d4640;
      ppuVar10 = &puStack_a8;
      uStack_80 = param_1;
      func_0x000107c60bc4();
      uVar4 = uStack_80;
      func_0x000107c6157c(param_1);
      func_0x000107c61574(uVar4);
      func_0x000107c43104(puVar6);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(uVar7);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(uVar8);
      func_0x0001000b6d30(0);
      func_0x000107c613fc();
      func_0x0001000b6d50(0,0);
      func_0x000107c615e8(puVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar2);
      return;
    }
    func_0x000107c61170(puVar2);
  }
  func_0x000100c7f554();
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1021645cc; end: 102164673;  */

/* WARNING: Possible PIC construction at 0x000102164658: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010216465c) */

void FUN_1021645cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0x112d508c0;
  func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
  func_0x000107c5fc54(param_2,uVar3);
  uVar3 = 0x112d511e8;
  func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
  func_0x000107c5fc54(param_3,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102164674; end: 1021646bf;  */

void FUN_102164674(long param_1,undefined8 param_2)

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



/* Entry: 1021646c0; end: 102164767;  */

void FUN_1021646c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  
  lVar4 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  uVar2 = *(undefined8 *)(lVar4 + 0x20);
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  puVar3 = &UNK_1104d4600;
  func_0x000107c613fc(&UNK_1104d4600,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = uVar2;
  func_0x0001000285a8(0x112e5cca0,&UNK_10da63170);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x0001000b64ac(FUN_102164768,puVar3);
  return;
}



/* Entry: 102164768; end: 102164773;  */

void FUN_102164768(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x0001000d224c(&puStack_a8,param_1,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  puVar2 = puStack_a8;
  if (puStack_a8 != (undefined *)0x0) {
    func_0x0001000d224c(&puStack_a8);
    puVar3 = puStack_a8;
    if (puStack_a8 != (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x000107c61168();
      func_0x000107c4ec64();
      func_0x000107c61180();
      puVar6 = PTR_PTR_1126af4d0;
      func_0x000107c61168();
      func_0x0001000d224c(&uStack_78);
      uVar7 = 0;
      func_0x000100964acc();
      uVar8 = uVar7;
      func_0x000100bcb214();
      func_0x000107c61170(uStack_78);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = FUN_102164774;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_1021645cc;
      puStack_90 = &UNK_1104d4618;
      ppuVar9 = &puStack_a8;
      uStack_80 = param_1;
      func_0x000107c60bc4();
      uVar4 = uStack_80;
      func_0x000107c6157c(param_1);
      func_0x000107c61574(uVar4);
      func_0x0001000d224c(&uStack_b0);
      func_0x000100bcb214();
      func_0x000107c61170(uStack_b0);
      pcStack_88 = (code *)0x1021647b4;
      puStack_a8 = puVar1;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_102164674;
      puStack_90 = &UNK_1104d4640;
      ppuVar10 = &puStack_a8;
      uStack_80 = param_1;
      func_0x000107c60bc4();
      uVar4 = uStack_80;
      func_0x000107c6157c(param_1);
      func_0x000107c61574(uVar4);
      func_0x000107c43104(puVar6);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(uVar7);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(uVar8);
      func_0x0001000b6d30(0);
      func_0x000107c613fc();
      func_0x0001000b6d50(0,0);
      func_0x000107c615e8(puVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar2);
      return;
    }
    func_0x000107c61170(puVar2);
  }
  func_0x000100c7f554();
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 102164774; end: 102164797;  */

void FUN_102164774(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100087f6c(&uStack_18);
  return;
}



/* Entry: 102164798; end: 1021647bf;  */

void FUN_102164798(long param_1,long param_2)

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



/* Entry: 1021647c0; end: 102164833;  */

void FUN_1021647c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102164834; end: 102164a0f;  */

void FUN_102164834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 auStack_80 [5];
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x0001000d224c(&uStack_58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_102162a2c(unaff_x20 + 0x38,auStack_80);
  puVar1 = &UNK_1104d4688;
  func_0x000107c613fc(&UNK_1104d4688,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  FUN_102162a70(auStack_80,puVar1 + 0x18);
  func_0x000107c6157c(uVar5);
  uVar2 = uStack_58;
  func_0x000104889654(uStack_58,1,FUN_102165a94,puVar1);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(auStack_80);
  uVar5 = auStack_80[0];
  puVar1 = &UNK_1104d46b0;
  func_0x000107c613fc(&UNK_1104d46b0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar3 = &UNK_1104d46d8;
  func_0x000107c613fc(&UNK_1104d46d8,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  puVar1 = &UNK_1104d4700;
  func_0x000107c613fc(&UNK_1104d4700,0x20,7);
  *(code **)(puVar1 + 0x10) = FUN_102165ab0;
  *(undefined **)(puVar1 + 0x18) = puVar3;
  func_0x000107c6157c(param_2);
  func_0x000107c61434(param_1);
  uVar4 = uVar5;
  func_0x00010488a220(uVar5,1,FUN_102165abc,puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(auStack_80);
  func_0x000104888fc0(auStack_80[0],1,FUN_102164ec0,0);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(auStack_80[0]);
  return;
}



/* Entry: 102164a10; end: 102164ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102164a10(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 auStack_b0 [2];
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (param_3 >> 0x3e == 0) {
      uVar3 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar3 = param_3;
      }
      func_0x000107c60480();
    }
    if (0 < (long)uVar3) {
      uStack_a0 = param_2;
      uStack_98 = uVar3;
      func_0x000100087bd4(0x102165bdc,auStack_b0,PTR___sytN_11034f1b0 + 8);
    }
    if (param_3 >> 0x3e == 0) {
      uVar3 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar3 = param_3;
      }
      func_0x000107c60480();
    }
    if (uVar3 != 0) {
      func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
      if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102164ec0);
        (*pcVar2)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        puVar10 = (undefined8 *)(param_3 + 0x20);
        do {
          uVar11 = *puVar10;
          func_0x000107c615f0(uVar11);
          func_0x0001000d224c(&uStack_80);
          uVar1 = uStack_80;
          uVar7 = *(undefined8 *)(param_1 + 0x30);
          FUN_102162a2c(param_1 + 0x38,auStack_b0);
          puVar5 = &UNK_1104d47a0;
          func_0x000107c613fc(&UNK_1104d47a0,0x40,7);
          *(undefined8 *)(puVar5 + 0x10) = uVar7;
          FUN_102162a70(auStack_b0,puVar5 + 0x18);
          func_0x000107c6157c(uVar7);
          uVar7 = uVar1;
          func_0x000104889654(uVar1,1,0x1021660d4,puVar5);
          func_0x000107c61170(uVar1);
          func_0x000107c61574(puVar5);
          func_0x0001000d224c(auStack_b0);
          uVar1 = auStack_b0[0];
          puVar5 = &UNK_1104d46b0;
          func_0x000107c613fc(&UNK_1104d46b0,0x18,7);
          func_0x000107c61644(puVar5 + 0x10,param_1);
          uVar8 = *(undefined8 *)(param_1 + 0x20);
          puVar6 = &UNK_1104d47c8;
          func_0x000107c613fc(&UNK_1104d47c8,0x30,7);
          *(undefined8 *)(puVar6 + 0x10) = uVar11;
          *(undefined **)(puVar6 + 0x18) = puVar5;
          *(undefined8 *)(puVar6 + 0x20) = param_2;
          *(undefined8 *)(puVar6 + 0x28) = uVar8;
          puVar5 = &UNK_1104d47f0;
          func_0x000107c613fc(&UNK_1104d47f0,0x20,7);
          *(code **)(puVar5 + 0x10) = FUN_102166084;
          *(undefined **)(puVar5 + 0x18) = puVar6;
          func_0x000107c6157c(param_2);
          func_0x000107c615f0(uVar11);
          func_0x000107c6157c(uVar8);
          uVar8 = uVar1;
          func_0x0001048898b8(uVar1,1,0x102166098,puVar5,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(uVar7);
          func_0x000107c61170(uVar1);
          func_0x000107c61574(puVar5);
          func_0x000107c6157c(param_2);
          func_0x00010075a04c(0,1,FUN_102166080,param_2);
          func_0x000107c615e8(uVar11);
          func_0x000107c61574(uVar8);
          func_0x000107c61574(param_2);
          uVar3 = uVar3 - 1;
          puVar10 = puVar10 + 1;
        } while (uVar3 != 0);
      }
      else {
        uVar9 = 0;
        do {
          uVar4 = uVar9;
          func_0x000100fb0ba0(uVar9,param_3);
          uVar9 = uVar9 + 1;
          func_0x0001000d224c(&uStack_80);
          uVar1 = uStack_80;
          uVar7 = *(undefined8 *)(param_1 + 0x30);
          FUN_102162a2c(param_1 + 0x38,auStack_b0);
          puVar5 = &UNK_1104d4728;
          func_0x000107c613fc(&UNK_1104d4728,0x40,7);
          *(undefined8 *)(puVar5 + 0x10) = uVar7;
          FUN_102162a70(auStack_b0,puVar5 + 0x18);
          func_0x000107c6157c(uVar7);
          uVar7 = uVar1;
          func_0x000104889654(uVar1,1,0x1021660c0,puVar5);
          func_0x000107c61170(uVar1);
          func_0x000107c61574(puVar5);
          func_0x0001000d224c(auStack_b0);
          uVar1 = auStack_b0[0];
          puVar5 = &UNK_1104d46b0;
          func_0x000107c613fc(&UNK_1104d46b0,0x18,7);
          func_0x000107c61644(puVar5 + 0x10,param_1);
          uVar8 = *(undefined8 *)(param_1 + 0x20);
          puVar6 = &UNK_1104d4750;
          func_0x000107c613fc(&UNK_1104d4750,0x30,7);
          *(ulong *)(puVar6 + 0x10) = uVar4;
          *(undefined **)(puVar6 + 0x18) = puVar5;
          *(undefined8 *)(puVar6 + 0x20) = param_2;
          *(undefined8 *)(puVar6 + 0x28) = uVar8;
          puVar5 = &UNK_1104d4778;
          func_0x000107c613fc(&UNK_1104d4778,0x20,7);
          *(code **)(puVar5 + 0x10) = FUN_102165ae4;
          *(undefined **)(puVar5 + 0x18) = puVar6;
          func_0x000107c6157c(uVar8);
          func_0x000107c615f0(uVar4);
          func_0x000107c6157c(param_2);
          uVar8 = uVar1;
          func_0x0001048898b8(uVar1,1,FUN_102165b00,puVar5,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(uVar7);
          func_0x000107c61170(uVar1);
          func_0x000107c61574(puVar5);
          func_0x000107c6157c(param_2);
          func_0x00010075a04c(0,1,FUN_102165b20,param_2);
          func_0x000107c615e8(uVar4);
          func_0x000107c61574(uVar8);
          func_0x000107c61574(param_2);
        } while (uVar3 != uVar9);
      }
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102164ec0; end: 102164ec3;  */

void FUN_102164ec0(void)

{
  return;
}



/* Entry: 102164ec4; end: 102164ee3;  */

void FUN_102164ec4(void)

{
  FUN_102164834();
  return;
}



/* Entry: 102164ee4; end: 102164ef7;  */

bool FUN_102164ee4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102164ef8; end: 102164fa3;  */

void FUN_102164ef8(void)

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



/* Entry: 102164fa4; end: 102164fb3;  */

void FUN_102164fa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102164fb4; end: 1021651ab;  */

long FUN_102164fb4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x21;
  undefined1 auStack_78 [24];
  long lStack_58;
  
  uVar1 = param_1;
  lVar5 = param_2;
  uVar6 = param_3;
  func_0x000107c614f0();
  FUN_102164058();
  if (unaff_x21 == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
    lVar2 = param_2 + 0x10;
    func_0x000107c61648();
    if (lVar2 == 0) {
      FUN_101ddafcc(uVar1,lVar5,uVar6);
      unaff_x21 = 0;
    }
    else {
      FUN_1021651ac(param_1,param_3,uVar1,lVar5,uVar6);
      func_0x000107c61574(lVar2);
      func_0x0001000d224c(&lStack_58);
      lVar2 = lStack_58;
      puVar3 = &UNK_1104d4818;
      func_0x000107c613fc(&UNK_1104d4818,0x29,7);
      *(long *)(puVar3 + 0x10) = param_2;
      *(undefined8 *)(puVar3 + 0x18) = uVar1;
      *(long *)(puVar3 + 0x20) = lVar5;
      puVar3[0x28] = (char)uVar6;
      puVar4 = &UNK_1104d4840;
      func_0x000107c613fc(&UNK_1104d4840,0x20,7);
      *(code **)(puVar4 + 0x10) = FUN_102165c0c;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      func_0x000107c6157c(param_2);
      lVar5 = lVar2;
      func_0x0001048898b8(lVar2,1,FUN_102165c1c,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(param_1);
      func_0x000107c61170(lVar2);
      func_0x000107c61574(puVar4);
      func_0x0001000d224c(&lStack_58);
      puVar3 = &UNK_1104d4868;
      func_0x000107c613fc(&UNK_1104d4868,0x20,7);
      *(code **)(puVar3 + 0x10) = FUN_102165c34;
      *(undefined8 *)(puVar3 + 0x18) = param_3;
      func_0x000107c6157c(param_3);
      unaff_x21 = lStack_58;
      func_0x00010488a340(lStack_58,1,0x1021660ac,puVar3);
      func_0x000107c61574(lVar5);
      func_0x000107c61170(lStack_58);
      func_0x000107c61574(puVar3);
    }
  }
  return unaff_x21;
}



/* Entry: 1021651ac; end: 10216551b;  */

undefined8
FUN_1021651ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000101dcbee8(param_3,param_4,param_5);
  func_0x0001000d224c(&uStack_68);
  uVar5 = uStack_68;
  puVar2 = &UNK_1104d4890;
  func_0x000107c613fc(&UNK_1104d4890,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  func_0x000107c615f0(param_1);
  uVar6 = uVar5;
  func_0x000104889654(uVar5,1,0x102165ca0,puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar5 = uStack_68;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
  func_0x000107c6157c(uVar7);
  uVar3 = uVar5;
  func_0x0001048898b8(uVar5,1,0x102165cb8,uVar7,PTR___sSuN_11034e220);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uVar7);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar2 = &UNK_1104d48b8;
  func_0x000107c613fc(&UNK_1104d48b8,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_102165cd0;
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  func_0x000107c6157c(uVar5);
  uVar5 = 0x112e5cd78;
  func_0x0001000285a8(0x112e5cd78,&UNK_10da63200);
  uVar7 = uVar6;
  func_0x000100775264(uVar6,1,FUN_102165d0c,puVar2,uVar5);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar5 = uStack_68;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1104d48e0;
  func_0x000107c613fc(&UNK_1104d48e0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  puVar4 = &UNK_1104d4908;
  func_0x000107c613fc(&UNK_1104d4908,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_102165d48;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  func_0x000101dcbee8(param_3,param_4,param_5);
  func_0x000107c6157c(uVar6);
  uVar6 = uVar5;
  func_0x0001048898b8(uVar5,1,FUN_102165d54,puVar4,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(&uStack_68);
  uVar5 = uStack_68;
  puVar1 = PTR___sytN_11034f1b0;
  uVar3 = uStack_68;
  func_0x000100775264(uStack_68,1,FUN_102165900,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x0001000d224c(&uStack_68);
  puVar2 = &UNK_1104d4930;
  func_0x000107c613fc(&UNK_1104d4930,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  puVar4 = &UNK_1104d4958;
  func_0x000107c613fc(&UNK_1104d4958,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x102165db0;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  func_0x000107c6157c(param_2);
  uVar5 = uStack_68;
  func_0x000100775264(uStack_68,1,FUN_102165dcc,puVar4,puVar1 + 8);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar4);
  return uVar5;
}



/* Entry: 10216551c; end: 1021655e3;  */

undefined8 FUN_10216551c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    func_0x0001000d224c(auStack_90);
    func_0x0001000a8868(auStack_90,uStack_78);
    (**(code **)(lStack_70 + 8))(param_2,param_3,param_4,uStack_78,lStack_70);
    func_0x000107c61574(param_1);
    func_0x0001000834e4(auStack_90);
  }
  return param_2;
}



/* Entry: 1021655e4; end: 102165657;  */

void FUN_1021655e4(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = param_1;
  func_0x000107c4ca5c();
  if ((int)puVar1 == 1) {
    func_0x000107c44b8c();
    if ((int)param_1 != 0) {
      return;
    }
    uVar2 = 1;
    puVar1 = param_1;
  }
  else {
    uVar2 = 0;
  }
  func_0x000102165e08();
  func_0x000107c613f8(&UNK_1104d49f0,puVar1,0,0);
  *puVar1 = uVar2;
  func_0x000107c61654();
  return;
}



/* Entry: 102165658; end: 1021656eb;  */

undefined8 FUN_102165658(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112e2aa08,&UNK_10da13438);
  func_0x000107c6157c(param_2);
  uVar1 = 0x20;
  func_0x000104887c7c(0x20,0,0x48,4,0xd00000000000003a,0x800000010f066580,&UNK_10da63218,param_2);
  func_0x000107c61574(param_2);
  return uVar1;
}



/* Entry: 1021656ec; end: 102165703;  */

void FUN_1021656ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102165704,0,0);
  return;
}



/* Entry: 102165704; end: 102165787;  */

void FUN_102165704(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102165788;
                    /* WARNING: Could not recover jumptable at 0x000102165784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}



/* Entry: 102165788; end: 1021657f3;  */

void FUN_102165788(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x58) = param_1;
    pcVar1 = FUN_1021657f4;
  }
  else {
    pcVar1 = (code *)0x102165834;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1021657f4; end: 102165867;  */

void FUN_1021657f4(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102165830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102165868; end: 1021658ff;  */

undefined8
FUN_102165868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x10))(param_4,param_5,param_1,param_2,uStack_60,lStack_58);
  func_0x0001000834e4(auStack_78);
  return param_4;
}



/* Entry: 102165900; end: 102165957;  */

void FUN_102165900(char *param_1)

{
  if (*param_1 != '\x01') {
    func_0x000102165e08();
    func_0x000107c613f8(&UNK_1104d49f0,param_1,0,0);
    *param_1 = '\x05';
    func_0x000107c61654();
  }
  return;
}



/* Entry: 102165958; end: 1021659e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102165958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_21;
  
  puVar1 = (undefined1 *)0x102165dec;
  uStack_40 = param_1;
  uStack_38 = param_2;
  uStack_30 = param_3;
  func_0x000100087bd4(&cStack_21,0x102165dec,auStack_50,PTR___sSbN_11034dd40);
  if (cStack_21 != '\x01') {
    func_0x000102165e08();
    func_0x000107c613f8(&UNK_1104d49f0,puVar1,0,0);
    *puVar1 = 2;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 1021659e8; end: 102165a93;  */

void FUN_1021659e8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  char cStack_31;
  
  func_0x0001000d224c(&cStack_31);
  if (cStack_31 != '\x01') {
    puVar2 = *(undefined1 **)(param_2 + 0x18);
    lVar1 = *(long *)(param_2 + 0x20);
    func_0x0001000a8868(param_2,puVar2);
    (**(code **)(lVar1 + 8))(puVar2,lVar1);
    if (((uint)puVar2 & 0xff) != 1) {
      func_0x000102165e08();
      func_0x000107c613f8(&UNK_1104d49f0,puVar2,0,0);
      *puVar2 = 6;
      func_0x000107c61654();
    }
  }
  return;
}



/* Entry: 102165a94; end: 102165aaf;  */

void FUN_102165a94(void)

{
  long unaff_x20;
  
  FUN_1021659e8(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Entry: 102165ab0; end: 102165abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102165ab0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 auStack_b0 [2];
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    if (uVar9 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar9 & 0xffffffffffffff8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar5 = uVar9;
      }
      func_0x000107c60480();
    }
    if (0 < (long)uVar5) {
      uStack_a0 = uVar1;
      uStack_98 = uVar5;
      func_0x000100087bd4(0x102165bdc,auStack_b0,PTR___sytN_11034f1b0 + 8);
    }
    if (uVar9 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar9 & 0xffffffffffffff8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar5 = uVar9;
      }
      func_0x000107c60480();
    }
    if (uVar5 != 0) {
      func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102164ec0);
        (*pcVar3)();
      }
      if ((uVar9 & 0xc000000000000001) == 0) {
        puVar13 = (undefined8 *)(uVar9 + 0x20);
        do {
          uVar14 = *puVar13;
          func_0x000107c615f0(uVar14);
          func_0x0001000d224c(&uStack_80);
          uVar2 = uStack_80;
          uVar10 = *(undefined8 *)(lVar4 + 0x30);
          FUN_102162a2c(lVar4 + 0x38,auStack_b0);
          puVar7 = &UNK_1104d47a0;
          func_0x000107c613fc(&UNK_1104d47a0,0x40,7);
          *(undefined8 *)(puVar7 + 0x10) = uVar10;
          FUN_102162a70(auStack_b0,puVar7 + 0x18);
          func_0x000107c6157c(uVar10);
          uVar10 = uVar2;
          func_0x000104889654(uVar2,1,0x1021660d4,puVar7);
          func_0x000107c61170(uVar2);
          func_0x000107c61574(puVar7);
          func_0x0001000d224c(auStack_b0);
          uVar2 = auStack_b0[0];
          puVar7 = &UNK_1104d46b0;
          func_0x000107c613fc(&UNK_1104d46b0,0x18,7);
          func_0x000107c61644(puVar7 + 0x10,lVar4);
          uVar11 = *(undefined8 *)(lVar4 + 0x20);
          puVar8 = &UNK_1104d47c8;
          func_0x000107c613fc(&UNK_1104d47c8,0x30,7);
          *(undefined8 *)(puVar8 + 0x10) = uVar14;
          *(undefined **)(puVar8 + 0x18) = puVar7;
          *(undefined8 *)(puVar8 + 0x20) = uVar1;
          *(undefined8 *)(puVar8 + 0x28) = uVar11;
          puVar7 = &UNK_1104d47f0;
          func_0x000107c613fc(&UNK_1104d47f0,0x20,7);
          *(code **)(puVar7 + 0x10) = FUN_102166084;
          *(undefined **)(puVar7 + 0x18) = puVar8;
          func_0x000107c6157c(uVar1);
          func_0x000107c615f0(uVar14);
          func_0x000107c6157c(uVar11);
          uVar11 = uVar2;
          func_0x0001048898b8(uVar2,1,0x102166098,puVar7,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(uVar10);
          func_0x000107c61170(uVar2);
          func_0x000107c61574(puVar7);
          func_0x000107c6157c(uVar1);
          func_0x00010075a04c(0,1,FUN_102166080,uVar1);
          func_0x000107c615e8(uVar14);
          func_0x000107c61574(uVar11);
          func_0x000107c61574(uVar1);
          uVar5 = uVar5 - 1;
          puVar13 = puVar13 + 1;
        } while (uVar5 != 0);
      }
      else {
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          func_0x000100fb0ba0(uVar12,uVar9);
          uVar12 = uVar12 + 1;
          func_0x0001000d224c(&uStack_80);
          uVar2 = uStack_80;
          uVar10 = *(undefined8 *)(lVar4 + 0x30);
          FUN_102162a2c(lVar4 + 0x38,auStack_b0);
          puVar7 = &UNK_1104d4728;
          func_0x000107c613fc(&UNK_1104d4728,0x40,7);
          *(undefined8 *)(puVar7 + 0x10) = uVar10;
          FUN_102162a70(auStack_b0,puVar7 + 0x18);
          func_0x000107c6157c(uVar10);
          uVar10 = uVar2;
          func_0x000104889654(uVar2,1,0x1021660c0,puVar7);
          func_0x000107c61170(uVar2);
          func_0x000107c61574(puVar7);
          func_0x0001000d224c(auStack_b0);
          uVar2 = auStack_b0[0];
          puVar7 = &UNK_1104d46b0;
          func_0x000107c613fc(&UNK_1104d46b0,0x18,7);
          func_0x000107c61644(puVar7 + 0x10,lVar4);
          uVar11 = *(undefined8 *)(lVar4 + 0x20);
          puVar8 = &UNK_1104d4750;
          func_0x000107c613fc(&UNK_1104d4750,0x30,7);
          *(ulong *)(puVar8 + 0x10) = uVar6;
          *(undefined **)(puVar8 + 0x18) = puVar7;
          *(undefined8 *)(puVar8 + 0x20) = uVar1;
          *(undefined8 *)(puVar8 + 0x28) = uVar11;
          puVar7 = &UNK_1104d4778;
          func_0x000107c613fc(&UNK_1104d4778,0x20,7);
          *(code **)(puVar7 + 0x10) = FUN_102165ae4;
          *(undefined **)(puVar7 + 0x18) = puVar8;
          func_0x000107c6157c(uVar11);
          func_0x000107c615f0(uVar6);
          func_0x000107c6157c(uVar1);
          uVar11 = uVar2;
          func_0x0001048898b8(uVar2,1,FUN_102165b00,puVar7,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(uVar10);
          func_0x000107c61170(uVar2);
          func_0x000107c61574(puVar7);
          func_0x000107c6157c(uVar1);
          func_0x00010075a04c(0,1,FUN_102165b20,uVar1);
          func_0x000107c615e8(uVar6);
          func_0x000107c61574(uVar11);
          func_0x000107c61574(uVar1);
        } while (uVar5 != uVar12);
      }
    }
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 102165abc; end: 102165ae3;  */

void FUN_102165abc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102165ae4; end: 102165aff;  */

void FUN_102165ae4(void)

{
  long unaff_x20;
  
  FUN_102164fb4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102165b00; end: 102165b1f;  */

void FUN_102165b00(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102165b20; end: 102165b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102165b20(void)

{
  func_0x000100087bd4(0x102165bf4);
  return;
}



/* Entry: 102165b74; end: 102165c0b;  */

void FUN_102165b74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102165c0c; end: 102165c1b;  */

undefined8 FUN_102165c0c(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x0001000d224c(auStack_90);
    func_0x0001000a8868(auStack_90,uStack_78);
    (**(code **)(lStack_70 + 8))(uVar4,uVar3,uVar1,uStack_78,lStack_70);
    func_0x000107c61574(lVar2);
    func_0x0001000834e4(auStack_90);
  }
  return uVar4;
}



/* Entry: 102165c1c; end: 102165c33;  */

void FUN_102165c1c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d84660(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102165c34; end: 102165c87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102165c34(void)

{
  func_0x000100087bd4(FUN_102165c88);
  return;
}



/* Entry: 102165c88; end: 102165ccf;  */

void FUN_102165c88(void)

{
  FUN_1021663bc();
  return;
}



/* Entry: 102165cd0; end: 102165d0b;  */

undefined1  [16] FUN_102165cd0(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_28;
  
  if (-1 < param_1) {
    func_0x0001000d224c(&uStack_28);
    auVar2._8_8_ = uStack_28;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102165d0c);
  (*pcVar1)();
}



/* Entry: 102165d0c; end: 102165d47;  */

void FUN_102165d0c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 102165d48; end: 102165d53;  */

undefined8 FUN_102165d48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000d224c(auStack_78,param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x10))(uVar1,uVar2,param_1,param_2,uStack_60,lStack_58);
  func_0x0001000834e4(auStack_78);
  return uVar1;
}



/* Entry: 102165d54; end: 102165d83;  */

void FUN_102165d54(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 102165d84; end: 102165dcb;  */

void FUN_102165d84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102165dcc; end: 102165deb;  */

void FUN_102165dcc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102165dec; end: 102165e47;  */

void FUN_102165dec(void)

{
  long unaff_x20;
  
  FUN_1021661d4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102165e48; end: 102165e9b;  */

void FUN_102165e48(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102165e9c;
  plVar1[7] = param_1;
  plVar1[8] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102165704,0,0);
  return;
}



/* Entry: 102165e9c; end: 102165ed7;  */

void FUN_102165e9c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102165ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102165ed8; end: 10216603f;  */

int FUN_102165ed8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102165f54;
        goto LAB_102165f38;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102165f38:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_102165f54:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102166040; end: 10216607f;  */

void FUN_102166040(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5cd88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da63280;
  func_0x000107c61520(&UNK_10da63280,&UNK_1104d49f0);
  puRam0000000112e5cd88 = puVar1;
  return;
}



/* Entry: 102166080; end: 102166083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102166080(void)

{
  func_0x000100087bd4(0x102165bf4);
  return;
}



/* Entry: 102166084; end: 1021660e7;  */

void FUN_102166084(void)

{
  FUN_102165ae4();
  return;
}



/* Entry: 1021660e8; end: 1021661d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021660e8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c5eec4(unaff_x20 + _DAT_113804678);
  lVar1 = _DAT_112e5cd90;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined **)(unaff_x20 + _DAT_112e5cd98) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(unaff_x20 + _DAT_112e5cda0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5cda8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5cdb0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e5cdb8) = 0;
  lVar1 = _DAT_112e5cdc0;
  func_0x0001000285a8(0x112e5c958,&UNK_10da62d60);
  func_0x000107c613fc();
  uVar2 = 0;
  func_0x00010095c380();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  return unaff_x20;
}



/* Entry: 1021661d4; end: 10216626f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021661d4(byte *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x000107c61428(param_2 + _DAT_112e5cd98,auStack_68,0x21,0);
  func_0x000107c61434(param_4);
  puVar1 = auStack_50;
  func_0x000100403b00(puVar1,param_3,param_4);
  func_0x000107c614a8(auStack_68);
  func_0x000107c6142c(uStack_48);
  *param_1 = (byte)puVar1 & 1;
  return;
}



/* Entry: 102166270; end: 1021662b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102166270(long param_1,long param_2)

{
  code *pcVar1;
  
  if (!SCARRY8(*(long *)(param_1 + _DAT_112e5cda0),param_2)) {
    *(long *)(param_1 + _DAT_112e5cda0) = *(long *)(param_1 + _DAT_112e5cda0) + param_2;
    FUN_1021662b4();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021662b4);
  (*pcVar1)();
}



/* Entry: 1021662b4; end: 10216636b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021662b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100b65f90();
  lVar1 = _DAT_112e5cda8;
  if ((*(long *)(unaff_x20 + _DAT_112e5cda0) <= *(long *)(unaff_x20 + _DAT_112e5cda8)) &&
     (*(char *)(unaff_x20 + _DAT_112e5cdb8) == '\x01')) {
    func_0x000107c5eeac(_DAT_113804678);
    uStack_40 = *(undefined8 *)(unaff_x20 + lVar1);
    uStack_38 = *(undefined8 *)(unaff_x20 + _DAT_112e5cdb0);
    uStack_50 = param_1;
    uStack_48 = param_2;
    func_0x000100b60084(&uStack_50);
    func_0x000107c6142c(param_2);
  }
  return;
}



/* Entry: 10216636c; end: 1021663bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216636c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112e5cda8) < *(long *)(param_1 + _DAT_112e5cda0)) {
    *(long *)(param_1 + _DAT_112e5cda8) = *(long *)(param_1 + _DAT_112e5cda8) + 1;
    FUN_1021662b4();
  }
  return;
}



/* Entry: 1021663bc; end: 1021663db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021663bc(long param_1)

{
  code *pcVar1;
  
  if (!SCARRY8(*(long *)(param_1 + _DAT_112e5cdb0),1)) {
    *(long *)(param_1 + _DAT_112e5cdb0) = *(long *)(param_1 + _DAT_112e5cdb0) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021663dc);
  (*pcVar1)();
}



/* Entry: 1021663dc; end: 1021664c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021663dc(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112e5cdb8) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112e5cdb8) = 1;
    FUN_1021662b4();
  }
  return;
}



/* Entry: 1021664c4; end: 1021664cb;  */

void FUN_1021664c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1021664cc; end: 1021664ff;  */

undefined8 * FUN_1021664cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102166500; end: 10216655b;  */

undefined8 * FUN_102166500(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 10216655c; end: 102166597;  */

undefined8 * FUN_10216655c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 102166598; end: 102166637;  */

int FUN_102166598(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102166638; end: 10216666f;  */

void FUN_102166638(undefined8 param_1)

{
  if (lRam0000000112e5cdf0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6b30b4);
  return;
}



/* Entry: 102166670; end: 102166713;  */

void FUN_102166670(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_60 = *(long *)(lVar1 + -8) + 0x40;
    puStack_58 = PTR___sBoWV_11034d678 + 0x40;
    puStack_50 = PTR___sBbWV_11034d660 + 0x40;
    puStack_48 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_30 = &UNK_10da63330;
    puStack_40 = puStack_48;
    puStack_38 = puStack_48;
    puStack_28 = puStack_58;
    func_0x000107c61630(param_1,0x100,8,&lStack_60,param_1 + 0x50);
  }
  return;
}



/* Entry: 102166714; end: 10216677f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102166714(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102166b08();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e5ceb8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102166780; end: 1021667eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102166780(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5ceb8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}


